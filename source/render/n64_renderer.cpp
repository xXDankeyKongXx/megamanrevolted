// F3DEX2/RDP display-list interpreter for the 3DS port. See n64_renderer.hpp.
//
// Model (similar to the PC "Fast3D" renderers): RSP work (matrices, T&L, culling) is done on the
// CPU here; RDP state is recorded per draw call and turned into PICA200 state by c3d_backend.cpp.
// Texture loads are tracked by TMEM address and decoded straight from RDRAM, not via a TMEM copy.

#include "n64_renderer.hpp"

#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <map>
#include <mutex>
#include <unordered_map>

#include "mm64_platform.h"
#include <unordered_set>

#include "gbi.h"
#include "title_logo.inc"

// Development: which part of the interpreter is running, sampled by the profiler thread
// (mm64_game.cpp) - a plain store, so it doesn't distort the timing like clock reads did.
extern "C" { volatile int n64_gfx_phase; }
// Development capture (pokes.txt "isolate"): published frames keep only draws textured from RDRAM
// [n64_isolate_lo, n64_isolate_hi), zoomed about a fixed point, on a magenta background; used to
// record a character's model and animation from the game itself.
extern "C" { volatile uint32_t n64_isolate_lo, n64_isolate_hi; }
extern "C" { extern volatile bool mm64_boot_skip; } // mm64_game.cpp
extern "C" { extern volatile uint32_t mm64_hud_gauge_passes, mm64_hud_map_passes; } // mm64_patches.cpp
enum { PHASE_IDLE, PHASE_CMD, PHASE_VTX, PHASE_TRI, PHASE_TEX_HASH, PHASE_TEX_DECODE, PHASE_STATE };
struct Phase {
    int prev;
    explicit Phase(int p) : prev(n64_gfx_phase) { n64_gfx_phase = p; }
    ~Phase() { n64_gfx_phase = prev; }
};

// Development: texture-binding counters, summed over display lists.
static uint32_t tex_binds, tex_memo_hits, tex_cache_hits, tex_decodes;
extern "C" { volatile int n64_texlog_remaining; } // development: log the next N texture decodes (pokes "texlog N")
static uint64_t tex_hashed_bytes;
// Development: geometry counters, summed over display lists / published frames.
static uint32_t geo_lit, geo_fog, geo_cmds, geo_vtx, geo_mtx, geo_tris, geo_culled, geo_offscreen, geo_published, geo_merged, geo_published_verts;
extern "C" void n64_renderer_profile_dump(unsigned dl_count) {
    fprintf(stderr, "[perf] geometry per DL: commands %lu vertices %lu (lit %lu fog %lu) matrices %lu ", (unsigned long)(geo_cmds / dl_count),
        (unsigned long)(geo_vtx / dl_count), (unsigned long)(geo_lit / dl_count), (unsigned long)(geo_fog / dl_count), (unsigned long)(geo_mtx / dl_count));
    geo_cmds = geo_vtx = geo_mtx = geo_lit = geo_fog = 0;
    fprintf(stderr, "tris %lu culled %lu offscreen %lu | published %lu frames (%lu merged with the previous), %lu vertices each\n",
        (unsigned long)(geo_tris / dl_count), (unsigned long)(geo_culled / dl_count), (unsigned long)(geo_offscreen / dl_count), (unsigned long)geo_published,
        (unsigned long)geo_merged, (unsigned long)(geo_published ? geo_published_verts / geo_published : 0));
    geo_tris = geo_culled = geo_offscreen = geo_published = geo_merged = geo_published_verts = 0;
    fprintf(stderr, "[perf] textures per DL:");
    fprintf(stderr, " binds %lu memo %lu cache %lu decodes %lu hashedKB %llu", (unsigned long)(tex_binds / dl_count),
        (unsigned long)(tex_memo_hits / dl_count), (unsigned long)(tex_cache_hits / dl_count), (unsigned long)(tex_decodes / dl_count),
        (unsigned long long)(tex_hashed_bytes / dl_count / 1024));
    tex_binds = tex_memo_hits = tex_cache_hits = tex_decodes = 0;
    tex_hashed_bytes = 0;
    fprintf(stderr, "\n");
}

namespace n64r {

namespace {

constexpr uint32_t rdram_limit = 9 * 1024 * 1024;
constexpr int vertex_buffer_size = 64;
constexpr int matrix_stack_size = 32;
constexpr int dl_stack_size = 18;
constexpr size_t max_frame_vertices = 200000;
constexpr size_t frame_trim_vertices = 40000; // see G_SETCIMG
constexpr size_t frame_trim_draws = 3000;

// Frames are recycled: one is built, published and dropped for every frame the game shows, and each
// new one grew its vertex and draw lists from nothing by doubling - megabytes allocated and freed a
// frame. On a console that left the heap in fragments (25-30 MB free, but in holes too small), and a
// larger request then failed (std::bad_alloc, turning the camera quickly in Cardon Forest). A frame
// that's let go is emptied and kept, its lists keeping their size; oversized ones are freed.
static std::mutex frame_pool_mutex;
static std::vector<FrameData*> frame_pool;

static void recycle_frame(FrameData* f) {
    if (f->vertices.capacity() <= frame_trim_vertices && f->draws.capacity() <= frame_trim_draws) {
        f->vertices.clear();
        f->draws.clear();
        f->overlay_vertices.clear();
        f->overlay_draws.clear();
        f->fb_address = 0;
        std::lock_guard lock{ frame_pool_mutex };
        if (frame_pool.size() < 12) {
            frame_pool.push_back(f);
            return;
        }
    }
    delete f;
}

static FrameData* new_frame() {
    {
        std::lock_guard lock{ frame_pool_mutex };
        if (!frame_pool.empty()) {
            FrameData* f = frame_pool.back();
            frame_pool.pop_back();
            return f;
        }
    }
    return new FrameData();
}
constexpr size_t texture_cache_limit = 2048; // decoded textures kept (a busy area binds ~500 per frame)
// Memory for decoded textures and palette indices. Counts alone let them grow to tens of MB in big
// areas (Cardon Forest), and on a console the app ran out of memory (std::bad_alloc) there.
// Halved when the app has little memory (Old 3DS).
static const size_t texture_cache_budget = (mm64_small_memory() ? 4 : 8) * 1024 * 1024;
static const size_t index_cache_budget = (mm64_small_memory() ? 1 : 2) * 1024 * 1024;

// Old 3DS (set by main.c): a display list is skipped while the screen hasn't yet taken the last frame
// (it couldn't be shown anyway) - never two in a row. The game itself runs as before.
extern "C" { volatile bool n64_frame_skip; }

// The N64 framebuffer (fb_w x fb_h) is shown 4:3 pillarboxed on the 400x240 top screen.
constexpr float top_w = 400.0f, top_h = 240.0f;

// Widescreen (Data page toggle): 3D scenes fill the whole 400-pixel width. Nothing is stretched -
// the scene keeps the 4:3 picture's scale and the side strips show what lies beyond its edges (the
// game sends that geometry; the N64 only clipped it). Colour fills spanning the width (fades,
// cutscene bars) widen with it, and so do backdrops drawn as solid screen-space tiles (the sky, the
// title screen's background): tiles at the 4:3 edges continue to the screen's edges (see rect()).
// The HUD, text and other 2D pictures stay as they are.
extern "C" { volatile bool n64_widescreen; }

// --- Pixel/texture helpers ----------------------------------------------------------------------

inline uint32_t rgba(uint8_t r, uint8_t g, uint8_t b, uint8_t a) {
    return ((uint32_t)r << 24) | ((uint32_t)g << 16) | ((uint32_t)b << 8) | a;
}

inline uint8_t c5to8(uint32_t c) { return (uint8_t)((c << 3) | (c >> 2)); }

inline uint32_t rgba5551(uint16_t c) {
    return rgba(c5to8((c >> 11) & 31), c5to8((c >> 6) & 31), c5to8((c >> 1) & 31), (c & 1) ? 255 : 0);
}

inline uint32_t ia16(uint16_t c) {
    uint8_t i = c >> 8, a = c & 0xFF;
    return rgba(i, i, i, a);
}

inline uint32_t next_pow2(uint32_t v) {
    uint32_t p = 8;
    while (p < v && p < 1024) p <<= 1;
    return p;
}

// Offset of texel (x, y) in an 8x8-Morton-tiled PICA200 texture of width w. PICA200 textures are
// stored bottom row first, so y is flipped here and UV v is flipped when vertices are emitted.
inline uint32_t tiled_offset(uint32_t x, uint32_t y, uint32_t w, uint32_t h) {
    y = h - 1 - y;
    uint32_t tile = (y >> 3) * (w >> 3) + (x >> 3);
    uint32_t morton = (x & 1) | ((y & 1) << 1) | ((x & 2) << 1) | ((y & 2) << 2) | ((x & 4) << 2) | ((y & 4) << 3);
    return tile * 64 + morton;
}

uint64_t fnv1a(uint64_t h, const void* data, size_t n) {
    const uint8_t* p = static_cast<const uint8_t*>(data);
    for (size_t i = 0; i < n; i++) {
        h ^= p[i];
        h *= 0x100000001B3ull;
    }
    return h;
}

// Hash for texture source bytes, which are hashed on every texture bind (~120 KB per gameplay frame).
// Byte-wise 64-bit FNV took over half of the display-list time; this mixes 8 bytes per step in two
// independent 32-bit lanes (two cheap multiplies), keeping a 64-bit result.
inline uint32_t rotl32(uint32_t x, int r) { return (x << r) | (x >> (32 - r)); }

// Small key from a few 32-bit words (texture parameters).
inline uint64_t mix_words(const uint32_t* w, size_t n) {
    uint32_t a = 0x9E3779B1u, b = 0x85EBCA77u;
    for (size_t i = 0; i < n; i++) {
        a = rotl32((a ^ w[i]) * 0x9E3779B1u, 13);
        b = rotl32((b + w[i]) * 0xC2B2AE3Du, 17) ^ a;
    }
    return (uint64_t)b << 32 | a;
}
uint64_t hash_bytes(uint64_t seed, const uint8_t* p, size_t n) {
    uint32_t a = (uint32_t)seed ^ 0x9E3779B1u, b = (uint32_t)(seed >> 32) ^ 0x85EBCA77u;
    while (n >= 8) {
        uint32_t w0, w1;
        memcpy(&w0, p, 4);
        memcpy(&w1, p + 4, 4);
        a = rotl32((a ^ w0) * 0x9E3779B1u, 13);
        b = rotl32((b ^ w1) * 0x85EBCA77u, 17);
        p += 8;
        n -= 8;
    }
    while (n--) a = rotl32((a ^ *p++) * 0xC2B2AE3Du, 11);
    a ^= b * 0x27D4EB2Fu; // cross-mix the lanes
    b ^= a * 0x165667B1u;
    return (uint64_t)b << 32 | a;
}

struct Mat4 {
    float m[4][4];
};

Mat4 identity() {
    Mat4 r{};
    for (int i = 0; i < 4; i++) r.m[i][i] = 1.0f;
    return r;
}

// Row-vector convention (v' = v * M), as on the N64.
Mat4 mul(const Mat4& a, const Mat4& b) {
    Mat4 r;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            r.m[i][j] = a.m[i][0] * b.m[0][j] + a.m[i][1] * b.m[1][j] + a.m[i][2] * b.m[2][j] + a.m[i][3] * b.m[3][j];
        }
    }
    return r;
}

struct Vertex {
    float x, y, z, w;   // 3DS clip space (before the top-screen rotation), viewport applied
    float u, v;         // texel coordinates after the G_TEXTURE scale
    uint8_t color[4];
    float sx, sy;       // screen position in N64 pixels from the centre (x/w * 200, y/w * 120); 0 when w <= 0
    uint8_t outside;    // off-screen flags (out_*): a triangle whose corners share one can't be seen
};

// Which side of the screen a vertex is off (clip space; x with a margin for widescreen's full width
// and the stereoscopic shift). Behind the camera counts as its own side.
enum : uint8_t { out_left = 1, out_right = 2, out_top = 4, out_bottom = 8, out_behind = 16 };
static inline uint8_t outside_flags(float x, float y, float w) {
    if (w <= 0.0f) return out_behind;
    float wx = w * 1.15f;
    return (x < -wx ? out_left : 0) | (x > wx ? out_right : 0) | (y < -w ? out_bottom : 0) | (y > w ? out_top : 0);
}

// 1 / sqrt(x), to about 0.2% (one Newton step).
static inline float fast_rsqrt(float x) {
    uint32_t i;
    memcpy(&i, &x, 4);
    i = 0x5F3759DF - (i >> 1);
    float y;
    memcpy(&y, &i, 4);
    return y * (1.5f - 0.5f * x * y * y);
}

struct Tile {
    uint8_t fmt = 0, siz = 0, palette = 0;
    uint8_t cms = 0, cmt = 0, masks = 0, maskt = 0, shifts = 0, shiftt = 0;
    uint16_t line = 0, tmem = 0;
    uint16_t uls = 0, ult = 0, lrs = 0, lrt = 0; // 10.2 fixed point
};

struct TmemLoad {
    uint32_t src = 0;         // RDRAM physical address of the first loaded texel
    uint32_t src_stride = 0;  // LOADTILE: bytes per source row; 0 for LOADBLOCK (contiguous)
    uint32_t tmem_line = 0;   // LOADTILE: bytes per row in TMEM
};

struct Light {
    float col[3];
    float dir[3];
};

const CcInput cc_rgb_a[16] = { CC_COMBINED, CC_TEX0, CC_TEX1, CC_PRIM, CC_SHADE, CC_ENV, CC_ONE, CC_NOISE,
    CC_ZERO, CC_ZERO, CC_ZERO, CC_ZERO, CC_ZERO, CC_ZERO, CC_ZERO, CC_ZERO };
const CcInput cc_rgb_b[16] = { CC_COMBINED, CC_TEX0, CC_TEX1, CC_PRIM, CC_SHADE, CC_ENV, CC_CENTER, CC_K4,
    CC_ZERO, CC_ZERO, CC_ZERO, CC_ZERO, CC_ZERO, CC_ZERO, CC_ZERO, CC_ZERO };
const CcInput cc_rgb_c[32] = { CC_COMBINED, CC_TEX0, CC_TEX1, CC_PRIM, CC_SHADE, CC_ENV, CC_SCALE, CC_COMBINED_A,
    CC_TEX0_A, CC_TEX1_A, CC_PRIM_A, CC_SHADE_A, CC_ENV_A, CC_LOD_FRAC, CC_PRIM_LOD_FRAC, CC_K5,
    CC_ZERO, CC_ZERO, CC_ZERO, CC_ZERO, CC_ZERO, CC_ZERO, CC_ZERO, CC_ZERO,
    CC_ZERO, CC_ZERO, CC_ZERO, CC_ZERO, CC_ZERO, CC_ZERO, CC_ZERO, CC_ZERO };
const CcInput cc_rgb_d[8] = { CC_COMBINED, CC_TEX0, CC_TEX1, CC_PRIM, CC_SHADE, CC_ENV, CC_ONE, CC_ZERO };
const CcInput cc_alpha_abd[8] = { CC_COMBINED_A, CC_TEX0_A, CC_TEX1_A, CC_PRIM_A, CC_SHADE_A, CC_ENV_A, CC_ONE, CC_ZERO };
const CcInput cc_alpha_c[8] = { CC_LOD_FRAC, CC_TEX0_A, CC_TEX1_A, CC_PRIM_A, CC_SHADE_A, CC_ENV_A, CC_PRIM_LOD_FRAC, CC_ZERO };

// In the second combiner cycle the RDP swaps TEXEL0 and TEXEL1.
CcInput swap_tex(CcInput in) {
    switch (in) {
        case CC_TEX0: return CC_TEX1;
        case CC_TEX1: return CC_TEX0;
        case CC_TEX0_A: return CC_TEX1_A;
        case CC_TEX1_A: return CC_TEX0_A;
        default: return in;
    }
}

bool uses(const CombinerCycle& c, CcInput a, CcInput b) {
    for (int i = 0; i < 4; i++) {
        if (c.rgb[i] == a || c.rgb[i] == b || c.alpha[i] == a || c.alpha[i] == b) return true;
    }
    return false;
}

// Published frame (graphics thread -> main thread).
std::mutex published_mutex;
std::shared_ptr<FrameData> published_frame;

} // namespace

struct Renderer::Impl {
    uint8_t* rdram;

    // RSP state
    uint32_t segments[16] = {};
    Mat4 modelview_stack[matrix_stack_size];
    int modelview_depth = 0;
    Mat4 projection = identity();
    Mat4 mvp = identity();
    bool mvp_dirty = true;
    Vertex vertices[vertex_buffer_size];
    uint32_t geometry_mode = 0;
    float viewport_scale[3] = { 160, 120, 511 };
    float viewport_trans[3] = { 160, 120, 511 };
    int num_lights = 0;
    Light lights[8] = {};
    float lookat[2][3] = { { 0, 0, 0 }, { 0, 0, 0 } };
    int16_t fog_mul = 0, fog_offset = 0;
    uint16_t texture_scale_s = 0xFFFF, texture_scale_t = 0xFFFF;
    uint8_t texture_tile = 0;
    bool texture_on = false;
    uint32_t rdphalf_1 = 0, rdphalf_2 = 0;

    // RDP state
    uint32_t other_mode_l = 0, other_mode_h = 0;
    uint32_t combine_w0 = 0, combine_w1 = 0;
    uint8_t prim[4] = { 255, 255, 255, 255 }, env[4] = { 255, 255, 255, 255 };
    uint8_t fog_color[4] = {}, blend_color[4] = {};
    uint8_t prim_lod_frac = 0;
    uint32_t fill_color = 0;
    Tile tiles[8];
    std::map<uint16_t, TmemLoad> tmem_loads;
    uint16_t palette[256] = {};
    uint64_t palette_hash = 0;    // hash of the whole palette, recomputed by every LOADTLUT
    struct BindEntry {
        std::shared_ptr<TexImage> image;
        uint32_t fingerprint;
        int verified_dl; // display list of the last full hash
        int seen_dl;     // display list of the last bind
    };
    std::unordered_map<uint64_t, BindEntry> bind_cache; // see get_texture
    // In front of bind_cache: binds already made in this display list, by key, without the hash map
    // (its bucket index is a software division on this CPU).
    struct MemoSlot {
        uint64_t key = 0;
        int dl = -1;
        std::shared_ptr<TexImage> image;
    };
    MemoSlot bind_memo[256];
    uint32_t timg_addr = 0, timg_width = 1;
    uint8_t timg_siz = 0;
    uint32_t cimg_addr = 0, cimg_width = 320, zimg_addr = 0;
    uint16_t scissor[4] = { 0, 0, 320, 240 };

    // Output
    std::unordered_map<uint32_t, std::unique_ptr<FrameData>> frames; // keyed by color image address
    FrameData* frame = nullptr;
    bool state_dirty = true;
    std::unordered_map<uint64_t, std::shared_ptr<TexImage>> texture_cache;
    std::unordered_map<uint32_t, std::shared_ptr<FrameData>> last_published; // per framebuffer

    // True if the frame redraws the whole screen: either one of its first draws is an opaque
    // full-screen fill, or its screen-space rectangles (texrects/fillrects, w == 1) together span the
    // full framebuffer (e.g. a picture drawn as alpha-blended tiles).
    static bool redraws_whole_screen(const FrameData& f) {
        auto covers = [](float min_x, float max_x, float min_y, float max_y) {
            // Rotated top-screen space: pos[0] spans the 240-pixel axis (-1..1), pos[1] the 4:3 area (-0.8..0.8).
            return min_x <= -0.99f && max_x >= 0.99f && min_y <= -0.79f && max_y >= 0.79f;
        };
        float all_min_x = 1e9f, all_max_x = -1e9f, all_min_y = 1e9f, all_max_y = -1e9f;
        for (size_t i = 0; i < f.draws.size(); i++) {
            const DrawCmd& d = f.draws[i];
            if (d.depth_clear) continue;
            float min_x = 1e9f, max_x = -1e9f, min_y = 1e9f, max_y = -1e9f;
            bool screen_space = true;
            for (uint32_t v = d.first_vertex; v < d.first_vertex + d.vertex_count; v++) {
                const GpuVertex& g = f.vertices[v];
                if (g.pos[3] != 1.0f) { screen_space = false; break; }
                min_x = std::min(min_x, g.pos[0]); max_x = std::max(max_x, g.pos[0]);
                min_y = std::min(min_y, g.pos[1]); max_y = std::max(max_y, g.pos[1]);
            }
            if (!screen_space || d.vertex_count == 0) continue;
            if (i < 4 && d.blend == BlendMode::Opaque && covers(min_x, max_x, min_y, max_y)) return true;
            all_min_x = std::min(all_min_x, min_x); all_max_x = std::max(all_max_x, max_x);
            all_min_y = std::min(all_min_y, min_y); all_max_y = std::max(all_max_y, max_y);
        }
        return covers(all_min_x, all_max_x, all_min_y, all_max_y);
    }

    // N64 framebuffers keep their contents, so a frame that doesn't redraw the whole screen is drawn
    // on top of the previous frame from the same framebuffer. Only one level deep (onto the previous
    // frame as drawn, never onto a composite) so draw counts can't snowball.
    std::shared_ptr<FrameData> composite_with_previous(uint32_t addr, std::shared_ptr<FrameData> cur) {
        if (redraws_whole_screen(*cur)) return cur;
        auto prev_it = last_published.find(addr);
        if (prev_it == last_published.end()) return cur;
        const FrameData& prev = *prev_it->second;
        if (prev.vertices.size() + cur->vertices.size() > max_frame_vertices / 4) return cur;
        std::shared_ptr<FrameData> merged{ new_frame(), recycle_frame };
        merged->fb_address = addr;
        merged->vertices.reserve(prev.vertices.size() + cur->vertices.size());
        merged->vertices = prev.vertices;
        merged->vertices.insert(merged->vertices.end(), cur->vertices.begin(), cur->vertices.end());
        merged->draws = prev.draws;
        uint32_t offset = (uint32_t)prev.vertices.size();
        for (DrawCmd d : cur->draws) {
            d.first_vertex += offset;
            merged->draws.push_back(d);
        }
        return merged;
    }

    // One-time survey written to stderr (runtime.log)
    int dl_count = 0;
    uint32_t opcode_counts[256] = {};
    std::vector<uint64_t> logged_combiners; // at most 64, searched in order (the game has ~11)
    std::unordered_set<uint32_t> logged_unknown;
    int runaway_logs = 0;
    int logged_dark_ci = 0;
    uint32_t last_tlut_base = 0, last_tlut_count = 0, last_tlut_src = 0;
    bool dumped_big_frame = false;

    static bool is_3d_draw(const FrameData& f, const DrawCmd& d) {
        return d.vertex_count > 0 && f.vertices[d.first_vertex].pos[3] != 1.0f;
    }

    // Development aid: one-line summary per 3D draw of the first frame with real 3D content.
    static void dump_frame(const FrameData& f) {
        fprintf(stderr, "[dump] fb=0x%06X draws=%u verts=%u\n", (unsigned)f.fb_address, (unsigned)f.draws.size(), (unsigned)f.vertices.size());
        int n = 0;
        for (const DrawCmd& d : f.draws) {
            if (!is_3d_draw(f, d)) continue;
            if (n++ >= 60) break;
            const GpuVertex& v = f.vertices[d.first_vertex];
            fprintf(stderr, "[dump] %3d n=%-4lu %s%s%s geo=%06lX cc=%d,%d,%d,%d/%d,%d,%d,%d cc2=%d,%d,%d,%d/%d,%d,%d,%d tex=%dx%d prim=%02X%02X%02X%02X env=%02X%02X%02X%02X bl=%d at=%d zt=%d zw=%d zc=%d v0=(%.2f %.2f %.3f %.2f) c=%02X%02X%02X%02X\n",
                n, d.vertex_count, d.copy_mode ? "C" : "", d.fill_mode ? "F" : "", d.two_cycle ? "2" : "1", d.geometry_mode,
                d.cycles[0].rgb[0], d.cycles[0].rgb[1], d.cycles[0].rgb[2], d.cycles[0].rgb[3],
                d.cycles[0].alpha[0], d.cycles[0].alpha[1], d.cycles[0].alpha[2], d.cycles[0].alpha[3],
                d.cycles[1].rgb[0], d.cycles[1].rgb[1], d.cycles[1].rgb[2], d.cycles[1].rgb[3],
                d.cycles[1].alpha[0], d.cycles[1].alpha[1], d.cycles[1].alpha[2], d.cycles[1].alpha[3],
                d.tex[0].image ? d.tex[0].image->width : 0, d.tex[0].image ? d.tex[0].image->height : 0,
                d.prim[0], d.prim[1], d.prim[2], d.prim[3], d.env[0], d.env[1], d.env[2], d.env[3],
                (int)d.blend, d.alpha_test, d.depth_test, d.depth_write, d.depth_clear,
                v.pos[0], v.pos[1], v.pos[2], v.pos[3], v.color[0], v.color[1], v.color[2], v.color[3]);
        }
    }

    explicit Impl(uint8_t* r) : rdram(r) {
        modelview_stack[0] = identity();
    }

    // --- RDRAM access ---

    uint32_t resolve(uint32_t addr) const {
        return (segments[(addr >> 24) & 0xF] + (addr & 0x00FFFFFF)) & 0x00FFFFFF;
    }
    bool in_range(uint32_t phys, uint32_t size) const {
        return phys < rdram_limit && phys + size <= rdram_limit;
    }
    uint32_t read_u32(uint32_t phys) const {
        return in_range(phys, 4) ? *reinterpret_cast<const uint32_t*>(rdram + (phys & ~3u)) : 0;
    }
    uint16_t read_u16(uint32_t phys) const {
        return in_range(phys, 2) ? *reinterpret_cast<const uint16_t*>(rdram + ((phys & ~1u) ^ 2)) : 0;
    }
    uint8_t read_u8(uint32_t phys) const {
        return phys < rdram_limit ? rdram[phys ^ 3] : 0;
    }

    // --- Frames ---

    void select_frame(uint32_t addr) {
        auto& slot = frames[addr];
        if (!slot) {
            slot.reset(new_frame());
            slot->fb_address = addr;
        }
        frame = slot.get();
        state_dirty = true;
    }

    // See n64_isolate_lo. The zoom is fixed from the first isolated frame (its bounding box filling
    // 80% of the screen height), so the character's own movement stays visible.
    void isolate(FrameData& f) {
        static bool fixed;
        static float c0, c1, zoom;
        float min0 = 1e9f, max0 = -1e9f, min1 = 1e9f, max1 = -1e9f;
        for (DrawCmd& d : f.draws) {
            const TexImage* img = d.tex[0].image.get();
            bool keep = img && img->src >= n64_isolate_lo && img->src < n64_isolate_hi;
            if (!keep) {
                if (!d.depth_clear) d.vertex_count = 0;
                continue;
            }
            for (uint32_t i = 0; i < d.vertex_count; i++) {
                const GpuVertex& v = f.vertices[d.first_vertex + i];
                if (v.pos[3] <= 0) continue;
                float a = v.pos[0] / v.pos[3], b = v.pos[1] / v.pos[3];
                min0 = std::min(min0, a); max0 = std::max(max0, a); min1 = std::min(min1, b); max1 = std::max(max1, b);
            }
        }
        if (min0 > max0) return;
        if (!fixed) {
            fixed = true;
            c0 = (min0 + max0) / 2;
            c1 = (min1 + max1) / 2;
            zoom = 1.6f / std::max(max0 - min0, 0.01f); // portrait target: pos[0] is the screen's vertical axis
            fprintf(stderr, "[isolate] center %.3f %.3f zoom %.2f\n", c0, c1, zoom);
        }
        for (DrawCmd& d : f.draws) {
            if (!d.vertex_count || d.depth_clear) continue;
            for (uint32_t i = 0; i < d.vertex_count; i++) {
                GpuVertex& v = f.vertices[d.first_vertex + i];
                v.pos[0] = (v.pos[0] / v.pos[3] - c0) * zoom * v.pos[3];
                v.pos[1] = (v.pos[1] / v.pos[3] - c1) * zoom * v.pos[3];
            }
        }
    }

    void publish(uint32_t vi_origin) {
        // VI_ORIGIN usually points a little past the start of the framebuffer.
        for (auto it = frames.begin(); it != frames.end(); ++it) {
            uint32_t addr = it->first;
            if (vi_origin >= addr && vi_origin - addr < 0x2000 && !it->second->draws.empty()) {
                std::shared_ptr<FrameData> done{ it->second.release(), recycle_frame };
                if (frame == done.get()) frame = nullptr;
                frames.erase(it);
                if (!dumped_big_frame) {
                    int draws_3d = 0;
                    for (const DrawCmd& d : done->draws) draws_3d += is_3d_draw(*done, d);
                    if (draws_3d >= 20) {
                        dumped_big_frame = true;
                        dump_frame(*done);
                    }
                }
                if (n64_isolate_hi) isolate(*done);
                if (mm64_boot_skip) {
                    for (DrawCmd& d : done->draws) d.vertex_count = 0; // black while the boot narration is skipped
                }
                std::shared_ptr<FrameData> raw = done;
                if (!n64_isolate_hi) done = composite_with_previous(addr, done); // uses the previous raw frame
                geo_published++;
                geo_merged += done != raw;
                geo_published_verts += (uint32_t)done->vertices.size();
                last_published[addr] = raw;
                std::lock_guard lock{ published_mutex };
                published_frame = std::move(done);
                return;
            }
        }
    }

    // --- Matrices & vertices ---

    Mat4 read_matrix(uint32_t phys) const {
        Mat4 r;
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                int16_t whole = (int16_t)read_u16(phys + (i * 4 + j) * 2);
                uint16_t frac = read_u16(phys + 32 + (i * 4 + j) * 2);
                r.m[i][j] = whole + frac / 65536.0f;
            }
        }
        return r;
    }

    void update_mvp() {
        if (mvp_dirty) {
            mvp = mul(modelview_stack[modelview_depth], projection);
            mvp_dirty = false;
            light_dirs_dirty = true;
        }
    }

    // Transforms a vector by the upper 3x3 of the modelview transposed (model space light direction).
    void to_model_space(const float in[3], float out[3]) {
        const Mat4& mv = modelview_stack[modelview_depth];
        for (int i = 0; i < 3; i++) {
            out[i] = in[0] * mv.m[i][0] + in[1] * mv.m[i][1] + in[2] * mv.m[i][2];
        }
        float len = std::sqrt(out[0] * out[0] + out[1] * out[1] + out[2] * out[2]);
        if (len > 0.0f) {
            out[0] /= len; out[1] /= len; out[2] /= len;
        }
    }

    // Light and look-at directions in model space, recomputed only when the matrix or the lights
    // change (not for every G_VTX: an object is loaded in many small batches).
    float light_dirs[8][3];
    float lookat_dirs[2][3];
    bool light_dirs_dirty = true;

    void load_vertices(uint32_t phys, int count, int dest) {
        Phase phase(PHASE_VTX);
        update_mvp();
        bool lighting = geometry_mode & G_LIGHTING;
        if (lighting) geo_lit += count;
        if (geometry_mode & G_FOG) geo_fog += count;
        if (lighting && light_dirs_dirty) {
            for (int l = 0; l < num_lights; l++) to_model_space(lights[l].dir, light_dirs[l]);
            to_model_space(lookat[0], lookat_dirs[0]);
            to_model_space(lookat[1], lookat_dirs[1]);
            light_dirs_dirty = false;
        }
        float fb_wf = (float)cimg_width;
        float fb_hf = fb_wf * 0.75f;
        float kx = (top_h * 4.0f / 3.0f / top_w) / (fb_wf * 0.5f); // pillarbox: 320 px -> 0.8 of the width
        float inv_half_h = 1.0f / (fb_hf * 0.5f);
        float s_scale = texture_scale_s / 65536.0f / 32.0f, t_scale = texture_scale_t / 65536.0f / 32.0f;

        for (int i = 0; i < count && dest + i < vertex_buffer_size; i++) {
            uint32_t p = phys + i * 16;
            // One vertex is 16 bytes: x y z flag (s16 each), s t (s16), r g b a (or normal + alpha).
            uint32_t vw[4] = {};
            if ((p & 3) == 0 && in_range(p, 16)) {
                memcpy(vw, rdram + p, 16); // RDRAM words are in host order
            } else {
                for (int k = 0; k < 4; k++) vw[k] = (uint32_t)read_u16(p + k * 4) << 16 | read_u16(p + k * 4 + 2);
            }
            float x = (int16_t)(vw[0] >> 16);
            float y = (int16_t)vw[0];
            float z = (int16_t)(vw[1] >> 16);
            int16_t s = (int16_t)(vw[2] >> 16);
            int16_t t = (int16_t)vw[2];
            uint8_t c0 = vw[3] >> 24, c1 = vw[3] >> 16, c2 = vw[3] >> 8, alpha = vw[3];

            Vertex& v = vertices[dest + i];
            float cx = x * mvp.m[0][0] + y * mvp.m[1][0] + z * mvp.m[2][0] + mvp.m[3][0];
            float cy = x * mvp.m[0][1] + y * mvp.m[1][1] + z * mvp.m[2][1] + mvp.m[3][1];
            float cz = x * mvp.m[0][2] + y * mvp.m[1][2] + z * mvp.m[2][2] + mvp.m[3][2];
            float cw = x * mvp.m[0][3] + y * mvp.m[1][3] + z * mvp.m[2][3] + mvp.m[3][3];

            // Viewport: screen = ndc * scale + trans (y down), then N64 screen -> 3DS clip space.
            v.x = (cx * viewport_scale[0] + cw * (viewport_trans[0] - fb_wf * 0.5f)) * kx;
            v.y = (cy * viewport_scale[1] + cw * (fb_hf * 0.5f - viewport_trans[1])) * inv_half_h;
            v.z = -(cz + cw) * 0.5f; // N64 [-w, w] -> PICA200 [0, -w] (near -> 0)
            v.w = cw;
            // Screen position, once per vertex: culling and widen() use it for every triangle.
            float inv_w = cw > 0.0f ? 1.0f / cw : 0.0f;
            v.sx = v.x * inv_w * 200.0f;
            v.sy = v.y * inv_w * 120.0f;
            v.outside = outside_flags(v.x, v.y, cw);

            if (lighting) {
                float n[3] = { (float)(int8_t)c0, (float)(int8_t)c1, (float)(int8_t)c2 };
                float col[3] = { lights[num_lights].col[0], lights[num_lights].col[1], lights[num_lights].col[2] };
                for (int l = 0; l < num_lights; l++) {
                    float d = (n[0] * light_dirs[l][0] + n[1] * light_dirs[l][1] + n[2] * light_dirs[l][2]) * (1.0f / 127.0f);
                    if (d > 0.0f) {
                        col[0] += d * lights[l].col[0];
                        col[1] += d * lights[l].col[1];
                        col[2] += d * lights[l].col[2];
                    }
                }
                for (int k = 0; k < 3; k++) v.color[k] = (uint8_t)std::min(255.0f, col[k]);

                if (geometry_mode & G_TEXTURE_GEN) {
                    float dx = (n[0] * lookat_dirs[0][0] + n[1] * lookat_dirs[0][1] + n[2] * lookat_dirs[0][2]) * (1.0f / 127.0f);
                    float dy = (n[0] * lookat_dirs[1][0] + n[1] * lookat_dirs[1][1] + n[2] * lookat_dirs[1][2]) * (1.0f / 127.0f);
                    if (geometry_mode & G_TEXTURE_GEN_LINEAR) {
                        dx = std::acos(-std::clamp(dx, -1.0f, 1.0f)) / 3.14159265f * 2.0f - 1.0f;
                        dy = std::acos(-std::clamp(dy, -1.0f, 1.0f)) / 3.14159265f * 2.0f - 1.0f;
                    }
                    s = (int16_t)std::clamp((dx + 1.0f) * 16384.0f, -32768.0f, 32767.0f);
                    t = (int16_t)std::clamp((dy + 1.0f) * 16384.0f, -32768.0f, 32767.0f);
                }
            }
            else {
                v.color[0] = c0; v.color[1] = c1; v.color[2] = c2;
            }
            v.color[3] = alpha;

            if (geometry_mode & G_FOG) {
                float inv = cw >= 0.001f ? inv_w : 1.0f / (std::fabs(cw) < 0.001f ? 0.001f : cw);
                float f = cz * inv * fog_mul + fog_offset;
                v.color[3] = (uint8_t)std::clamp(f, 0.0f, 255.0f);
            }

            v.u = s * s_scale;
            v.v = t * t_scale;
        }
    }

    // --- Textures ---

    static uint32_t bytes_per_texel_x2(uint8_t siz) { return siz == 0 ? 1 : siz == 1 ? 2 : siz == 2 ? 4 : 8; }

    const TmemLoad* find_load(uint16_t tmem, uint16_t& load_tmem) const {
        auto it = tmem_loads.upper_bound(tmem);
        if (it == tmem_loads.begin()) return nullptr;
        --it;
        load_tmem = it->first;
        return &it->second;
    }

    uint32_t decode_texel(const Tile& tile, uint32_t row_addr, uint32_t x, uint8_t tlut_type) const {
        switch (tile.siz) {
            case G_IM_SIZ_4b: {
                uint8_t b = read_u8(row_addr + x / 2);
                uint8_t n = (x & 1) ? (b & 0xF) : (b >> 4);
                if (tile.fmt == G_IM_FMT_CI) {
                    uint16_t c = palette[(tile.palette * 16 + n) & 0xFF];
                    return tlut_type == G_TT_IA16 ? ia16(c) : rgba5551(c);
                }
                if (tile.fmt == G_IM_FMT_IA) {
                    uint8_t i = (uint8_t)(((n >> 1) & 7) * 255 / 7);
                    return rgba(i, i, i, (n & 1) ? 255 : 0);
                }
                uint8_t i = n * 17;
                return rgba(i, i, i, i);
            }
            case G_IM_SIZ_8b: {
                uint8_t b = read_u8(row_addr + x);
                if (tile.fmt == G_IM_FMT_CI) {
                    uint16_t c = palette[b];
                    return tlut_type == G_TT_IA16 ? ia16(c) : rgba5551(c);
                }
                if (tile.fmt == G_IM_FMT_IA) {
                    uint8_t i = (b >> 4) * 17;
                    return rgba(i, i, i, (b & 0xF) * 17);
                }
                return rgba(b, b, b, b);
            }
            case G_IM_SIZ_16b: {
                uint16_t c = (uint16_t)((read_u8(row_addr + x * 2) << 8) | read_u8(row_addr + x * 2 + 1));
                if (tile.fmt == G_IM_FMT_IA) return ia16(c);
                return rgba5551(c);
            }
            default: {
                uint32_t a = row_addr + x * 4;
                return rgba(read_u8(a), read_u8(a + 1), read_u8(a + 2), read_u8(a + 3));
            }
        }
    }

    // Hash of a texture's source bytes. Hashing every bind's bytes (~150 KB per frame in a busy area)
    // was the largest part of the interpretation time, so each source (address and layout) keeps its
    // last hash with a fingerprint of 16 sampled words: while the fingerprint matches, the stored
    // hash is reused, and every 8th display list the bytes are hashed in full anyway, so a texture the
    // game rewrites only partly is stale for at most 8 frames.
    struct SourceInfo {
        uint64_t content;
        uint32_t fingerprint;
        int verified_dl;
    };
    std::unordered_map<uint64_t, SourceInfo> source_cache;

    // Palette (CI) textures by their indices alone: some scenes rewrite a palette every frame (the
    // refractor cutscene's light plays over Mega Man through ~100 small CI4 textures), which made
    // every one of them a new texture each frame, decoded texel by texel. With the indices kept, a
    // new palette costs one table lookup per texel.
    struct IndexImage {
        std::vector<uint8_t> indices; // Morton-tiled like TexImage::texels
        int used_dl;
    };
    std::unordered_map<uint64_t, IndexImage> index_cache;
    size_t index_bytes = 0;
    size_t texture_bytes = 0; // texels of texture_cache's images

    static size_t image_bytes(const TexImage& img) { return img.texels.size() * sizeof(uint32_t); }

    // Keeps texture_cache within its count and memory limits: drops what no display list used
    // recently, then what this one hasn't used, then everything. The bind memo holds references to the
    // images too, so it's cleared whenever any go (it refills in one frame).
    void trim_texture_cache() {
        if (texture_cache.size() <= texture_cache_limit && texture_bytes <= texture_cache_budget) return;
        for (int age : { 4, 1 }) {
            for (auto e = texture_cache.begin(); e != texture_cache.end();) {
                if ((int)e->second->last_used + age < dl_count) {
                    texture_bytes -= image_bytes(*e->second);
                    e = texture_cache.erase(e);
                } else {
                    ++e;
                }
            }
            if (texture_cache.size() <= texture_cache_limit && texture_bytes <= texture_cache_budget * 3 / 4) break;
        }
        if (texture_cache.size() > texture_cache_limit || texture_bytes > texture_cache_budget) {
            texture_cache.clear();
            texture_bytes = 0;
        }
        bind_cache.clear();
    }

    void trim_index_cache() {
        if (index_bytes <= index_cache_budget) return;
        for (auto e = index_cache.begin(); e != index_cache.end();) {
            if (e->second.used_dl + 2 < dl_count) {
                index_bytes -= e->second.indices.size();
                e = index_cache.erase(e);
            } else {
                ++e;
            }
        }
        if (index_bytes > index_cache_budget) {
            index_cache.clear();
            index_bytes = 0;
        }
    }

    // The title screen's logo is one 255x128 CI8 image the game loads at 0x291480 and draws as 16
    // strips of 255x8 (0x800 bytes apart). Each strip whose address, format and content (low 32 bits
    // of the content hash, from texlog) match is decoded from the port's own logo instead
    // (title_logo.inc, "Mega Man 64 ReVolted"). Returns the strip number, or -1.
    static int title_logo_strip(const Tile& tile, uint32_t start, uint32_t w, uint32_t h, uint64_t content) {
        static const uint32_t strip_content[16] = {
            0xE660AFA1, 0xE660AFA1, 0xE660AFA1, 0xE660AFA1, 0xE660AFA1, 0xAA832F2C, 0xCF0A2B76, 0x014FA793,
            0x1B9593CE, 0xDDC27945, 0x32379ECA, 0x02921146, 0x3FAFAAD6, 0x89C9D612, 0xDB3268D0, 0xE660AFA1,
        };
        if (tile.fmt != G_IM_FMT_CI || tile.siz != G_IM_SIZ_8b || w != 255 || h != 8) return -1;
        if (start < 0x291480 || (start - 0x291480) % 0x800 != 0) return -1;
        uint32_t strip = (start - 0x291480) / 0x800;
        if (strip >= 16 || (uint32_t)content != strip_content[strip]) return -1;
        return (int)strip;
    }

    uint32_t source_fingerprint(uint32_t start, uint32_t stride, uint32_t row_bytes, uint32_t h) const {
        uint32_t f = 0x811C9DC5u;
        for (uint32_t i = 0; i < 16; i++) {
            uint32_t row = h > 1 ? (h - 1) * (i / 2) / 7 : 0;
            uint32_t off = (i & 1) && row_bytes >= 4 ? ((row_bytes - 4) & ~3u) : 0;
            uint32_t a = (start + row * stride + off) & ~3u;
            uint32_t word = in_range(a, 4) ? *reinterpret_cast<const uint32_t*>(rdram + a) : 0;
            f = (f ^ word) * 0x01000193u;
        }
        return f;
    }

    uint64_t source_content_hash(uint32_t start, uint32_t stride, uint32_t row_bytes, uint32_t w, uint32_t h, uint32_t fmt_siz) {
        uint32_t layout[5] = { start, stride, row_bytes, w << 16 | h, fmt_siz };
        uint64_t id = fnv1a(0xCBF29CE484222325ull, layout, sizeof(layout));
        uint32_t fingerprint = source_fingerprint(start, stride, row_bytes, h);
        auto it = source_cache.find(id);
        if (it != source_cache.end() && it->second.fingerprint == fingerprint && dl_count - it->second.verified_dl < 8) {
            return it->second.content;
        }
        uint64_t content = 0x9E3779B97F4A7C15ull;
        if (stride == row_bytes && in_range(start, row_bytes * h)) {
            content = hash_bytes(content, rdram + start, row_bytes * h); // contiguous: one pass
            tex_hashed_bytes += row_bytes * h;
        } else {
            for (uint32_t y = 0; y < h; y++) {
                uint32_t row = start + y * stride;
                if (in_range(row, row_bytes)) content = hash_bytes(content, rdram + row, row_bytes); // word-swapped, still unique
                tex_hashed_bytes += row_bytes;
            }
        }
        if (source_cache.size() > 8192) source_cache.clear();
        source_cache[id] = { content, fingerprint, dl_count };
        return content;
    }

    // Decodes the texture a render tile points at; returns null if nothing was loaded there.
    std::shared_ptr<TexImage> get_texture(const Tile& tile, uint32_t& out_w, uint32_t& out_h) {
        uint16_t load_tmem;
        const TmemLoad* load = find_load(tile.tmem, load_tmem);
        if (!load) return nullptr;

        uint32_t w = tile.masks ? (1u << tile.masks) : ((tile.lrs - tile.uls) >> 2) + 1;
        uint32_t h = tile.maskt ? (1u << tile.maskt) : ((tile.lrt - tile.ult) >> 2) + 1;
        w = std::clamp<uint32_t>(w, 1, 1024);
        h = std::clamp<uint32_t>(h, 1, 1024);

        uint32_t row_bytes = (w * bytes_per_texel_x2(tile.siz) + 1) / 2;
        uint32_t stride, start;
        uint32_t offset = (uint32_t)(tile.tmem - load_tmem) * 8;
        if (load->src_stride) {
            stride = load->src_stride;
            uint32_t tline = load->tmem_line ? load->tmem_line : stride;
            start = load->src + (offset / tline) * stride + (offset % tline);
        }
        else {
            stride = tile.line ? tile.line * 8u : row_bytes;
            start = load->src + offset;
        }
        uint8_t tlut_type = (other_mode_h >> G_TT_SHIFT) & 3;

        uint32_t pw = next_pow2(w), ph = next_pow2(h);
        out_w = pw;
        out_h = ph;

        // The same texture is bound many times per frame, and hashing its source bytes for every bind
        // took over half of the interpretation time. The game doesn't rewrite texture memory while its
        // display list is processed, so within one display list the result for the same source,
        // layout and palette is reused.
        // Bind cache: the same source, layout and palette usually gives the same texture from frame to
        // frame. A repeat bind costs one lookup and, once per display list, the 16-word fingerprint
        // check (see source_content_hash); the full key is only rebuilt when that fails.
        Phase phase_hash(PHASE_TEX_HASH);
        uint64_t pal = tile.fmt == G_IM_FMT_CI ? palette_hash : 0;
        uint32_t params[8] = { start, stride, (uint32_t)tile.fmt << 8 | tile.siz, w, h, (uint32_t)tile.palette << 2 | tlut_type,
                               (uint32_t)pal, (uint32_t)(pal >> 32) };
        uint64_t bind_key = mix_words(params, 8);
        tex_binds++;
        MemoSlot& memo = bind_memo[(uint32_t)(bind_key ^ (bind_key >> 32)) & 255];
        if (memo.dl == dl_count && memo.key == bind_key) {
            tex_memo_hits++;
            return memo.image;
        }
        std::shared_ptr<TexImage> img = get_texture_slow(tile, start, stride, row_bytes, w, h, pw, ph, tlut_type, params, bind_key);
        memo.key = bind_key;
        memo.dl = dl_count;
        memo.image = img;
        return img;
    }

    std::shared_ptr<TexImage> get_texture_slow(const Tile& tile, uint32_t start, uint32_t stride, uint32_t row_bytes, uint32_t w,
                                               uint32_t h, uint32_t pw, uint32_t ph, uint8_t tlut_type, const uint32_t* params,
                                               uint64_t bind_key) {
        uint64_t pal = (uint64_t)params[7] << 32 | params[6];
        auto cached = bind_cache.find(bind_key);
        if (cached != bind_cache.end()) {
            BindEntry& e = cached->second;
            if (e.seen_dl == dl_count) {
                tex_memo_hits++;
                return e.image;
            }
            if (dl_count - e.verified_dl < 8 && e.fingerprint == source_fingerprint(start, stride, row_bytes, h)) {
                tex_memo_hits++;
                e.seen_dl = dl_count;
                e.image->last_used = (uint32_t)dl_count;
                return e.image;
            }
        }

        // Key on everything that affects the decoded result, including the source bytes.
        uint64_t content = source_content_hash(start, stride, row_bytes, w, h, params[2]);
        uint64_t key = mix_words(params, 8) ^ (content * 0x9E3779B97F4A7C15ull);

        auto it = texture_cache.find(key);
        uint32_t fingerprint = source_fingerprint(start, stride, row_bytes, h);
        if (bind_cache.size() > 8192) bind_cache.clear();
        if (it != texture_cache.end()) {
            tex_cache_hits++;
            it->second->last_used = (uint32_t)dl_count;
            bind_cache[bind_key] = { it->second, fingerprint, dl_count, dl_count };
            return it->second;
        }

        // (Clearing everything as soon as the limit was reached, as before, re-decoded every texture
        // of a busy area each frame.)
        trim_texture_cache();
        Phase phase_decode(PHASE_TEX_DECODE);
        tex_decodes++;
        int logo_strip = title_logo_strip(tile, start, w, h, content);
        bool ci = logo_strip < 0 && tile.fmt == G_IM_FMT_CI && (tile.siz == G_IM_SIZ_4b || tile.siz == G_IM_SIZ_8b);
        uint64_t index_key = 0;
        if (ci) {
            uint32_t iparams[8] = { start, stride, (uint32_t)tile.siz, w, h, (uint32_t)tile.palette << 2 | tlut_type,
                                    (uint32_t)content, (uint32_t)(content >> 32) };
            index_key = mix_words(iparams, 8);
        }
        if (n64_texlog_remaining > 0) {
            n64_texlog_remaining = n64_texlog_remaining - 1;
            fprintf(stderr, "[texlog] dl %d src %06X stride %u %ux%u fmt %u siz %u pal %u tt %u palhash %08X content %08X\n", dl_count,
                (unsigned)start, (unsigned)stride, (unsigned)w, (unsigned)h, (unsigned)tile.fmt, (unsigned)tile.siz,
                (unsigned)tile.palette, (unsigned)tlut_type, (unsigned)pal, (unsigned)content);
        }

        auto img = std::make_shared<TexImage>();
        img->key = key;
        img->width = (uint16_t)pw;
        img->height = (uint16_t)ph;
        img->texels.resize(pw * ph);
        if (logo_strip >= 0) {
            for (uint32_t y = 0; y < ph; y++) {
                uint32_t sy = std::min(y, h - 1);
                const uint32_t* row = &title_logo[(logo_strip * 8 + sy) * TITLE_LOGO_W];
                for (uint32_t x = 0; x < pw; x++) img->texels[tiled_offset(x, y, pw, ph)] = row[std::min(x, w - 1)];
            }
        } else if (ci) {
            trim_index_cache();
            IndexImage& ii = index_cache[index_key];
            if (ii.indices.size() != (size_t)pw * ph) {
                index_bytes += (size_t)pw * ph - ii.indices.size();
                ii.indices.resize(pw * ph);
                for (uint32_t y = 0; y < ph; y++) {
                    uint32_t sy = std::min(y, h - 1); // pad by repeating the edge
                    uint32_t row = start + sy * stride;
                    for (uint32_t x = 0; x < pw; x++) {
                        uint32_t sx = std::min(x, w - 1);
                        uint8_t n;
                        if (tile.siz == G_IM_SIZ_4b) {
                            uint8_t b = read_u8(row + sx / 2);
                            n = (sx & 1) ? (b & 0xF) : (b >> 4);
                        } else {
                            n = read_u8(row + sx);
                        }
                        ii.indices[tiled_offset(x, y, pw, ph)] = n;
                    }
                }
            }
            ii.used_dl = dl_count;
            // The palette as texels, then one lookup per texel.
            uint32_t table[256];
            uint32_t base = tile.siz == G_IM_SIZ_4b ? tile.palette * 16u : 0u, count = tile.siz == G_IM_SIZ_4b ? 16u : 256u;
            for (uint32_t i = 0; i < count; i++) {
                uint16_t c = palette[(base + i) & 0xFF];
                table[i] = tlut_type == G_TT_IA16 ? ia16(c) : rgba5551(c);
            }
            const uint8_t* idx = ii.indices.data();
            uint32_t* out = img->texels.data();
            for (size_t i = 0, n = img->texels.size(); i < n; i++) out[i] = table[idx[i] & (count - 1)];
            img->gpu_slot = index_key | 1; // never 0
        } else {
            for (uint32_t y = 0; y < ph; y++) {
                uint32_t sy = std::min(y, h - 1); // pad by repeating the edge
                uint32_t row = start + sy * stride;
                for (uint32_t x = 0; x < pw; x++) {
                    uint32_t sx = std::min(x, w - 1);
                    img->texels[tiled_offset(x, y, pw, ph)] = decode_texel(tile, row, sx, tlut_type);
                }
            }
        }
        img->fmt = tile.fmt;
        img->siz = tile.siz;
        img->src = start;
        img->stride = stride;
        img->src_w = (uint16_t)w;
        img->src_h = (uint16_t)h;
        // Diagnostics for draw dumps; skipped for palette textures, which can be rebuilt every frame.
        size_t opaque = 0, luma = 0;
        if (!ci) {
            for (uint32_t t : img->texels) {
                opaque += (t & 0xFF) >= 128;
                luma += ((t >> 24) + ((t >> 16) & 0xFF) + ((t >> 8) & 0xFF)) / 3;
            }
        }
        img->opaque_pct = ci ? 255 : (uint8_t)(opaque * 100 / img->texels.size());
        img->mean_luma = ci ? 255 : (uint8_t)(luma / img->texels.size());
        if (tile.fmt == G_IM_FMT_CI && img->mean_luma < 8 && logged_dark_ci < 4) {
            logged_dark_ci++;
            fprintf(stderr, "[gfx] dark CI texture %ux%u siz=%u pal=%u tlut=%u start=0x%06X; palette[0..7]:", (unsigned)w, (unsigned)h,
                (unsigned)tile.siz, (unsigned)tile.palette, (unsigned)tlut_type, (unsigned)start);
            for (int i = 0; i < 8; i++) fprintf(stderr, " %04X", palette[(tile.palette * 16 + i) & 0xFF]);
            fprintf(stderr, " (last LOADTLUT base %u count %u from 0x%06X)\n", (unsigned)last_tlut_base, (unsigned)last_tlut_count, (unsigned)last_tlut_src);
        }
        img->last_used = (uint32_t)dl_count;
        auto& slot = texture_cache[key];
        if (slot) texture_bytes -= image_bytes(*slot);
        slot = img;
        texture_bytes += image_bytes(*img);
        bind_cache[bind_key] = { img, fingerprint, dl_count, dl_count };
        return img;
    }

    TexBinding bind_tile(int tile_index, float& norm_w, float& norm_h, float& off_s, float& off_t,
                         float& shift_s, float& shift_t) {
        const Tile& tile = tiles[tile_index & 7];
        TexBinding b;
        uint32_t pw = 8, ph = 8;
        b.image = get_texture(tile, pw, ph);
        b.wrap_s = (tile.cms & G_TX_CLAMP) || !tile.masks ? TexWrap::Clamp : (tile.cms & G_TX_MIRROR) ? TexWrap::Mirror : TexWrap::Repeat;
        b.wrap_t = (tile.cmt & G_TX_CLAMP) || !tile.maskt ? TexWrap::Clamp : (tile.cmt & G_TX_MIRROR) ? TexWrap::Mirror : TexWrap::Repeat;
        b.linear = ((other_mode_h >> G_TF_SHIFT) & 3) != G_TF_POINT;
        norm_w = (float)pw;
        norm_h = (float)ph;
        off_s = tile.uls / 4.0f;
        off_t = tile.ult / 4.0f;
        auto shift = [](uint8_t sh) { return sh == 0 ? 1.0f : sh <= 10 ? 1.0f / (1 << sh) : (float)(1 << (16 - sh)); };
        shift_s = shift(tile.shifts);
        shift_t = shift(tile.shiftt);
        return b;
    }

    // --- Draw state ---

    struct UvMap {
        float w = 1, h = 1, off_s = 0, off_t = 0, shift_s = 1, shift_t = 1;
    } uv_map[2];

    // Texture state (tiles, TMEM loads, palette, G_TEXTURE, the texture modes in other_mode_h) changed
    // since the last triangle draw bound its textures. While it hasn't, a new triangle draw (a colour
    // or blend change) takes that draw's bindings: binding costs lookups, a hash and atomic reference
    // counting, and busy areas start ~450 draws per frame.
    bool tex_dirty = true;
    TexBinding tri_tex[2];
    UvMap tri_uv[2];
    bool tri_need[2] = {};
    float uv_inv[2][2] = { { 1, 1 }, { 1, 1 } }; // 1 / uv_map[i].w, .h, refreshed before emitting

    void refresh_uv_inv() {
        for (int i = 0; i < 2; i++) {
            uv_inv[i][0] = 1.0f / uv_map[i].w;
            uv_inv[i][1] = 1.0f / uv_map[i].h;
        }
    }

    void decode_combiner(CombinerCycle out[2]) const {
        uint32_t w0 = combine_w0, w1 = combine_w1;
        uint8_t a[2] = { (uint8_t)((w0 >> 20) & 0xF), (uint8_t)((w0 >> 5) & 0xF) };
        uint8_t c[2] = { (uint8_t)((w0 >> 15) & 0x1F), (uint8_t)(w0 & 0x1F) };
        uint8_t aa[2] = { (uint8_t)((w0 >> 12) & 7), (uint8_t)((w1 >> 21) & 7) };
        uint8_t ac[2] = { (uint8_t)((w0 >> 9) & 7), (uint8_t)((w1 >> 18) & 7) };
        uint8_t b[2] = { (uint8_t)((w1 >> 28) & 0xF), (uint8_t)((w1 >> 24) & 0xF) };
        uint8_t d[2] = { (uint8_t)((w1 >> 15) & 7), (uint8_t)((w1 >> 6) & 7) };
        uint8_t ab[2] = { (uint8_t)((w1 >> 12) & 7), (uint8_t)((w1 >> 3) & 7) };
        uint8_t ad[2] = { (uint8_t)((w1 >> 9) & 7), (uint8_t)(w1 & 7) };
        for (int i = 0; i < 2; i++) {
            out[i].rgb[0] = cc_rgb_a[a[i]];
            out[i].rgb[1] = cc_rgb_b[b[i]];
            out[i].rgb[2] = cc_rgb_c[c[i]];
            out[i].rgb[3] = cc_rgb_d[d[i]];
            out[i].alpha[0] = cc_alpha_abd[aa[i]];
            out[i].alpha[1] = cc_alpha_abd[ab[i]];
            out[i].alpha[2] = cc_alpha_c[ac[i]];
            out[i].alpha[3] = cc_alpha_abd[ad[i]];
        }
        for (int k = 0; k < 4; k++) {
            out[1].rgb[k] = swap_tex(out[1].rgb[k]);
            out[1].alpha[k] = swap_tex(out[1].alpha[k]);
        }
    }

    // RDP blender: per cycle, color = (P*A + M*B) / (A + B), with
    //   P, M: 0 = combiner color (IN), 1 = framebuffer (MEM), 2 = blend color, 3 = fog color
    //   A:    0 = combiner alpha, 1 = fog alpha, 2 = shade alpha, 3 = 0
    //   B:    0 = 1 - A, 1 = framebuffer coverage, 2 = 1, 3 = 0
    // The cycle that writes to memory decides how the pixel lands; in 2-cycle mode cycle 1 is
    // usually fog (applied in the combiner's place, not emulated yet), so the second cycle is used.
    BlendMode decode_blender(bool two_cycle, uint8_t& const_alpha) const {
        uint32_t m = other_mode_l >> 16;
        uint32_t p, a, mm, b;
        if (two_cycle) {
            p = (m >> 12) & 3; a = (m >> 8) & 3; mm = (m >> 4) & 3; b = m & 3;
        }
        else {
            p = (m >> 14) & 3; a = (m >> 10) & 3; mm = (m >> 6) & 3; b = (m >> 2) & 3;
        }
        const_alpha = 255;
        bool p_in = p == 0, m_mem = mm == 1, m_in = mm == 0;
        if (p_in && m_in) return BlendMode::Opaque;
        if (p_in && m_mem) {
            if (a == 3 && b == 2) return BlendMode::KeepMemory;         // IN*0 + MEM*1
            if (a == 3 && b == 3) return BlendMode::Opaque;             // degenerate
            if (b == 1) return BlendMode::Opaque;                       // coverage (antialiasing) modes
            if (b == 2) return BlendMode::Opaque;                       // IN*a + MEM*1: additive, approximated
            if (a == 0 || a == 2) return BlendMode::Alpha;              // combiner/shade alpha
            if (a == 1) {                                               // fog alpha (constant)
                const_alpha = fog_color[3];
                return BlendMode::ConstantAlpha;
            }
        }
        if (p == 1 && m_in) {
            if (a == 3 && b == 2) return BlendMode::Opaque;             // MEM*0 + IN*1
        }
        if (p == 1 && m_mem) return BlendMode::KeepMemory;
        // Blend/fog color sources and other rare forms: treat as alpha blending.
        return BlendMode::Alpha;
    }

    void log_combiner() {
        // (Was a hash-set insert for every draw - 64-bit hashing and a software division each time,
        // since the set never filled.)
        uint64_t k = ((uint64_t)combine_w0 << 32) | combine_w1;
        if (logged_combiners.size() >= 64 || std::find(logged_combiners.begin(), logged_combiners.end(), k) != logged_combiners.end()) return;
        logged_combiners.push_back(k);
        {
            fprintf(stderr, "[gfx] combiner %06X:%08X cycle=%u othermode_l=%08X\n",
                (unsigned)(combine_w0 & 0xFFFFFF), (unsigned)combine_w1,
                (unsigned)((other_mode_h >> G_CYC_SHIFT) & 3), (unsigned)other_mode_l);
        }
    }

    // Starts a new draw call with the current state if anything changed since the last one.
    DrawCmd* begin_draw(int rect_tile, bool is_rect) {
        if (!frame) select_frame(cimg_addr);
        if (!state_dirty && !frame->draws.empty() && !is_rect) {
            return &frame->draws.back();
        }
        Phase phase(PHASE_STATE);
        state_dirty = is_rect; // a rect always forces a fresh draw for whatever follows
        log_combiner();

        DrawCmd d{};
        d.first_vertex = (uint32_t)frame->vertices.size();
        uint32_t cycle = (other_mode_h >> G_CYC_SHIFT) & 3;
        d.two_cycle = cycle == G_CYC_2CYCLE;
        d.copy_mode = cycle == G_CYC_COPY;
        d.fill_mode = cycle == G_CYC_FILL;
        decode_combiner(d.cycles);
        memcpy(d.prim, prim, 4);
        memcpy(d.env, env, 4);
        d.prim_lod_frac = prim_lod_frac;

        bool textured = is_rect || texture_on;
        if (textured && !d.fill_mode) {
            int tile0 = is_rect ? rect_tile : texture_tile;
            bool need0 = d.copy_mode || uses(d.cycles[0], CC_TEX0, CC_TEX0_A) || (d.two_cycle && uses(d.cycles[1], CC_TEX0, CC_TEX0_A));
            bool need1 = !d.copy_mode && (uses(d.cycles[0], CC_TEX1, CC_TEX1_A) || (d.two_cycle && uses(d.cycles[1], CC_TEX1, CC_TEX1_A)));
            if (!is_rect && !tex_dirty && need0 == tri_need[0] && need1 == tri_need[1]) {
                d.tex[0] = tri_tex[0];
                d.tex[1] = tri_tex[1];
                uv_map[0] = tri_uv[0]; // a FILLRECT since may have bound its own
                uv_map[1] = tri_uv[1];
            } else {
                if (need0) {
                    UvMap& m = uv_map[0];
                    d.tex[0] = bind_tile(tile0, m.w, m.h, m.off_s, m.off_t, m.shift_s, m.shift_t);
                }
                if (need1) {
                    UvMap& m = uv_map[1];
                    d.tex[1] = bind_tile(tile0 + 1, m.w, m.h, m.off_s, m.off_t, m.shift_s, m.shift_t);
                }
                if (!is_rect) {
                    tri_tex[0] = d.tex[0];
                    tri_tex[1] = d.tex[1];
                    tri_uv[0] = uv_map[0];
                    tri_uv[1] = uv_map[1];
                    tri_need[0] = need0;
                    tri_need[1] = need1;
                    tex_dirty = false;
                }
            }
        }

        // Blending / alpha test / depth from the RDP other modes.
        d.other_mode_l = other_mode_l;
        if (d.copy_mode || d.fill_mode) {
            d.blend = BlendMode::Opaque;
        }
        else {
            d.blend = decode_blender(d.two_cycle, d.blend_alpha);
        }
        d.alpha_test = d.copy_mode || (other_mode_l & G_AC_MASK) == G_AC_THRESHOLD || (other_mode_l & CVG_X_ALPHA);
        d.alpha_ref = (other_mode_l & G_AC_MASK) == G_AC_THRESHOLD ? blend_color[3] : 0x4D; // ~0.3 for coverage cutouts
        if (d.copy_mode && (other_mode_l & G_AC_MASK) != G_AC_THRESHOLD) d.alpha_ref = 1;
        bool zbuf = (geometry_mode & G_ZBUFFER) && !is_rect;
        d.depth_test = zbuf && (other_mode_l & Z_CMP);
        d.depth_write = zbuf && (other_mode_l & Z_UPD);
        d.decal = (other_mode_l & ZMODE_MASK) == ZMODE_DEC;
        d.geometry_mode = geometry_mode;

        // Scissor: N64 pixels -> 3DS top-screen pixels.
        float fb_wf = (float)cimg_width;
        float scale = top_h / (fb_wf * 0.75f);
        float x0 = (top_w - fb_wf * scale) * 0.5f;
        d.scissor[0] = (uint16_t)std::clamp(x0 + scissor[0] * scale, 0.0f, top_w);
        d.scissor[1] = (uint16_t)std::clamp(scissor[1] * scale, 0.0f, top_h);
        d.scissor[2] = (uint16_t)std::clamp(x0 + scissor[2] * scale, 0.0f, top_w);
        d.scissor[3] = (uint16_t)std::clamp(scissor[3] * scale, 0.0f, top_h);
        // Widescreen: a 3D draw (perspective: depth feeds w) or a widened fill, whose N64 scissor
        // spans the whole width, may use the whole top screen.
        bool perspective = projection.m[2][3] != 0.0f;
        if (n64_widescreen && (is_rect ? rect_widened : perspective) && scissor[0] <= 0 && scissor[2] >= fb_wf - 1.0f) {
            d.scissor[0] = 0;
            d.scissor[2] = (uint16_t)top_w;
        }

        refresh_uv_inv(); // for to_gpu, until the next draw (rects refresh their own)
        frame->draws.push_back(std::move(d)); // move: copying the texture pointers costs atomic ops
        return &frame->draws.back();
    }

    void emit(const Vertex& v, DrawCmd* d) {
        frame->vertices.push_back(to_gpu(v));
        d->vertex_count++;
    }

    // HUD gauges and the minimap go to the bottom screen. The game draws them in its 2D UI pass
    // (no depth test, orthographic): life in the lower left corner, weapon energy in the lower
    // right, the minimap in the upper left. Returns 1, 2 or 3 when every vertex lies in one of those
    // areas, else 0.
    bool hud_life_shown = false, hud_energy_shown = false, hud_map_shown = false; // from game RAM per display list

    int hud_region(const DrawCmd* d, const Vertex* const* vs, int n) const {
        if (!hud_life_shown && !hud_energy_shown && !hud_map_shown) return 0;
        if (d->depth_test || d->depth_write || d->depth_clear || d->fill_mode) return 0;
        // Textured pieces must come from the HUD's texture sheet (RDRAM 0x162000-0x166C00: gauges,
        // minimap tiles); otherwise e.g. the opening narration's ocean, drawn the same 2D way, went too.
        if (const TexImage* img = d->tex[0].image.get()) {
            if (img->src < 0x162000 || img->src >= 0x166C00) return 0;
        }
        int region = 0;
        for (int i = 0; i < n; i++) {
            const Vertex& v = *vs[i];
            if (std::fabs(v.w - 1.0f) > 0.001f) return 0;
            float x = (v.x + 1.0f) * 200.0f, y = (1.0f - v.y) * 120.0f; // top-screen pixels
            // Measured extents: life x 47-90 y 136-234, energy x 311-338 y 165-232, minimap with
            // its frame x 53-110 y 35-92 (the dialogue box's left edge, at x 106-110, starts higher).
            int r = (hud_map_shown && x >= 52.5f && x <= 110.5f && y >= 34.5f && y <= 92.5f) ? 3
                  : y < 125.0f || y > 244.0f ? 0
                  : (hud_life_shown && x >= 38.0f && x < 100.0f) ? 1
                  : (hud_energy_shown && x >= 300.0f && x < 350.0f) ? 2 : 0;
            if (r == 0 || (region && r != region)) return 0;
            region = r;
        }
        return region;
    }

    int overlay_source = -1; // index of the top-screen draw the last overlay draw copied

    // Adds vertices to the bottom-screen overlay instead of the top screen.
    void emit_overlay(const Vertex* const* vs, int n, DrawCmd* d, int region) {
        int source = (int)(d - frame->draws.data());
        if (frame->overlay_draws.empty() || overlay_source != source || frame->overlay_draws.back().overlay_region != region) {
            DrawCmd copy = *d;
            copy.first_vertex = (uint32_t)frame->overlay_vertices.size();
            copy.vertex_count = 0;
            copy.overlay_region = (uint8_t)region;
            frame->overlay_draws.push_back(std::move(copy));
            overlay_source = source;
        }
        DrawCmd& o = frame->overlay_draws.back();
        for (int i = 0; i < n; i++) frame->overlay_vertices.push_back(to_gpu(*vs[i]));
        o.vertex_count += n;
    }

    GpuVertex to_gpu(const Vertex& v) {
        GpuVertex g;
        // Rotate into the 240x400 portrait render target used for the top screen.
        g.pos[0] = v.y;
        g.pos[1] = -v.x;
        g.pos[2] = v.z;
        g.pos[3] = v.w;
        for (int i = 0; i < 2; i++) {
            const UvMap& m = uv_map[i];
            float s = (v.u * m.shift_s - m.off_s) * uv_inv[i][0];
            float t = (v.v * m.shift_t - m.off_t) * uv_inv[i][1];
            float* uv = i == 0 ? g.uv0 : g.uv1;
            uv[0] = s;
            uv[1] = t; // rows are stored flipped (tiled_offset), so t maps directly
        }
        memcpy(g.color, v.color, 4);
        return g;
    }

    void triangle(int i0, int i1, int i2) {
        Phase phase(PHASE_TRI);
        if (i0 >= vertex_buffer_size || i1 >= vertex_buffer_size || i2 >= vertex_buffer_size) return;
        const Vertex& a = vertices[i0];
        const Vertex& b = vertices[i1];
        const Vertex& c = vertices[i2];

        geo_tris++;
        // Wholly off one side of the screen (the GPU would clip it all away anyway).
        if (a.outside & b.outside & c.outside) { geo_offscreen++; return; }
        // Back/front face culling in screen space when all vertices are in front of the camera.
        if ((geometry_mode & G_CULL_BOTH) && a.w > 0 && b.w > 0 && c.w > 0) {
            float cross = (b.sx - a.sx) * (c.sy - a.sy) - (b.sy - a.sy) * (c.sx - a.sx);
            if ((geometry_mode & G_CULL_BOTH) == G_CULL_BOTH) { geo_culled++; return; }
            if ((geometry_mode & G_CULL_FRONT) && cross >= 0) { geo_culled++; return; }
            if ((geometry_mode & G_CULL_BACK) && cross <= 0) { geo_culled++; return; }
        }

        DrawCmd* d = begin_draw(0, false);
        if (frame->vertices.size() > max_frame_vertices) return;

        // Flat shading uses the first vertex's color.
        Vertex fa = a, fb = b, fc = c;
        if (!(geometry_mode & G_SHADING_SMOOTH)) {
            memcpy(fb.color, a.color, 3);
            memcpy(fc.color, a.color, 3);
        }
        const Vertex* tri[3] = { &fa, &fb, &fc };
        if (int region = hud_region(d, tri, 3)) {
            emit_overlay(tri, 3, d, region);
            return;
        }
        if (n64_widescreen) {
            // A flat triangle with its corners on the 4:3 picture's corners - half of a full-screen
            // quad, as fades are drawn - covers the whole screen.
            bool corners = true;
            for (const Vertex* v : { &fa, &fb, &fc }) {
                corners &= std::fabs(v->w - 1.0f) < 0.001f && std::fabs(std::fabs(v->x) - 0.8f) < 0.01f && std::fabs(std::fabs(v->y) - 1.0f) < 0.01f;
            }
            if (corners) {
                fa.x *= 1.25f; fb.x *= 1.25f; fc.x *= 1.25f;
                if (scissor[0] <= 0 && scissor[2] >= cimg_width - 1) {
                    d->scissor[0] = 0;
                    d->scissor[2] = (uint16_t)top_w;
                }
            }
        }
        if (d->blend == BlendMode::Opaque && d->depth_write && !d->depth_clear && !d->decal) widen(fa, fb, fc);
        emit(fa, d); emit(fb, d); emit(fc, d);
    }

    // Solid 3D triangles are pushed out by a fraction of a pixel. The N64 snaps vertices to a
    // quarter-pixel grid, so edges shared by neighbouring pieces of ground (each drawn with its own
    // matrix) meet exactly; the PICA200 works with 24-bit floats and no such snapping, and on a
    // console hairline cracks opened between them, showing the sky through the ground (Cardon
    // Forest). The overlap is too small to see anywhere else.
    static void widen(Vertex& a, Vertex& b, Vertex& c) {
        constexpr float px = 0.45f; // how far each corner moves, in N64 pixels
        if (a.w < 0.01f || b.w < 0.01f || c.w < 0.01f) return; // crosses the camera plane: leave it to the clipper
        // Each corner moves px away from the centre, in screen space (sx, sy), then back to clip
        // space: clip x = pixels / 200 * w (the 320-pixel 4:3 area spans -0.8..0.8), y = pixels / 120 * w.
        float cx = (a.sx + b.sx + c.sx) * (1.0f / 3.0f), cy = (a.sy + b.sy + c.sy) * (1.0f / 3.0f);
        for (Vertex* v : { &a, &b, &c }) {
            float dx = v->sx - cx, dy = v->sy - cy;
            float len2 = dx * dx + dy * dy;
            if (len2 < 1e-8f) continue;
            float k = px * fast_rsqrt(len2) * v->w;
            v->x += dx * k * (1.0f / 200.0f);
            v->y += dy * k * (1.0f / 120.0f);
        }
    }

    // Screen-space rectangle in N64 pixels (fill or texture rectangle).
    void rect(float ulx, float uly, float lrx, float lry, int tile, float s0, float t0, float dsdx, float dtdy, bool textured, bool flip) {
        uint32_t cycle = (other_mode_h >> G_CYC_SHIFT) & 3;
        if (cycle == G_CYC_FILL && cimg_addr == zimg_addr && zimg_addr != 0) {
            // Z buffer clear.
            rect_widened = n64_widescreen;
            DrawCmd* d = begin_draw(0, true);
            d->depth_clear = true;
            d->depth_test = false;
            add_rect_vertices(d, 0, 0, (float)cimg_width, cimg_width * 0.75f, 0, 0, 0, 0, false);
            state_dirty = true;
            return;
        }
        if (cycle == G_CYC_FILL || cycle == G_CYC_COPY) {
            lrx += 1.0f;
            lry += 1.0f;
        }
        if (cycle == G_CYC_COPY) dsdx /= 4.0f;

        // A full-screen fill into a color buffer starts a new N64 frame there: drop whatever was
        // drawn into that buffer before (frames the VI never showed would otherwise pile up).
        if (cycle == G_CYC_FILL && ulx <= 0 && uly <= 0 && lrx >= cimg_width && lry >= cimg_width * 0.75f) {
            if (!frame) select_frame(cimg_addr);
            frame->vertices.clear();
            frame->draws.clear();
            frame->overlay_vertices.clear();
            frame->overlay_draws.clear();
            overlay_source = -1;
            state_dirty = true;
        }

        uint8_t saved_prim[4];
        memcpy(saved_prim, prim, 4);
        if (cycle == G_CYC_FILL) {
            // Fill color is a 16-bit pixel (repeated) for 16-bit framebuffers.
            uint32_t c = rgba5551((uint16_t)(fill_color >> 16));
            prim[0] = c >> 24; prim[1] = (c >> 16) & 0xFF; prim[2] = (c >> 8) & 0xFF; prim[3] = 255;
            textured = false;
        }
        // Widescreen: fills spanning the width, overlays covering the whole picture (fades), and
        // solid textured tiles at the 4:3 edges (the sky and the title background are grids of them;
        // the game trims the edge tiles to the screen) reach the top screen's edges - see
        // add_rect_vertices for how a tile's picture carries on.
        // A plain (untextured) rectangle over at least 90% of the width counts as covering it - fades,
        // dimming and flashes drawn a little inside the edges too (as in the Bomberman 64 port).
        if (n64_widescreen && !textured && lrx - ulx >= cimg_width * 0.9f && ulx <= cimg_width * 0.1f && lrx >= cimg_width * 0.9f) {
            ulx = 0;
            lrx = (float)cimg_width;
            if (lry - uly >= cimg_width * 0.75f * 0.9f) {
                uly = 0;
                lry = cimg_width * 0.75f;
            }
        }
        bool full_screen = ulx <= 0 && lrx >= cimg_width && uly <= 0 && lry >= cimg_width * 0.75f;
        // (Within a pixel: tile edges are in quarter pixels, and the narration sky ends its right-hand
        // tiles at 319.75, which left a black strip in the top right.)
        bool edge_tile = textured && !flip && (ulx <= 1.0f || lrx >= cimg_width - 1.0f);
        rect_widened = n64_widescreen && (textured ? edge_tile : ulx <= 0 && lrx >= cimg_width);
        DrawCmd* d = begin_draw(tile, true);
        memcpy(prim, saved_prim, 4);
        if (!textured) {
            d->tex[0].image = nullptr;
            d->tex[1].image = nullptr;
        }
        rect_mirror = false;
        if (rect_widened && textured) {
            const TexImage* img = d->tex[0].image.get();
            if (!img || (d->blend != BlendMode::Opaque && !full_screen)) {
                // Translucent (HUD panels, text): stays in the 4:3 picture.
                rect_widened = false;
                float scale = top_h / (cimg_width * 0.75f);
                float x0 = (top_w - cimg_width * scale) * 0.5f;
                d->scissor[0] = (uint16_t)std::clamp(x0 + scissor[0] * scale, 0.0f, top_w);
                d->scissor[2] = (uint16_t)std::clamp(x0 + scissor[2] * scale, 0.0f, top_w);
            } else if (img->src_w < img->width) {
                // The texture is padded past the picture (the title background's 256-wide strips):
                // continuing it would show the padding, so the strip's edge is mirrored instead.
                rect_mirror = true;
            } else if (d->tex[0].wrap_s != TexWrap::Repeat) {
                d->tex[0].wrap_s = TexWrap::Mirror;
            }
        }

        float s1 = s0 + dsdx * (lrx - ulx);
        float t1 = t0 + dtdy * (lry - uly);
        add_rect_vertices(d, ulx, uly, lrx, lry, s0, t0, s1, t1, flip);
        state_dirty = true;
    }

    bool rect_widened = false; // the rect being drawn reaches the screen's sides (widescreen)
    bool rect_mirror = false;  // ... by mirrored copies of its edges, not by continuing its texture

    void add_rect_vertices(DrawCmd* d, float ulx, float uly, float lrx, float lry, float s0, float t0, float s1, float t1, bool flip) {
        float fb_wf = (float)cimg_width;
        // Textured tiles that end a quarter pixel short of the next (the sky and the narration's
        // backgrounds: 0..159.75, 160..) are carried on to the whole pixel. At 1:1 no pixel centre
        // falls in the gap, but stereoscopic 3D shifts and stretches backgrounds by fractions of a
        // pixel, and the gaps showed as black seams.
        if (!flip && !d->depth_clear && d->tex[0].image) {
            float dsdx = lrx > ulx ? (s1 - s0) / (lrx - ulx) : 0.0f, dtdy = lry > uly ? (t1 - t0) / (lry - uly) : 0.0f;
            if (lrx - floorf(lrx) == 0.75f) { lrx += 0.25f; s1 += dsdx * 0.25f; }
            if (lry - floorf(lry) == 0.75f) { lry += 0.25f; t1 += dtdy * 0.25f; }
        }
        // Widescreen: a rectangle wholly inside the picture, under a scissor spanning the whole width,
        // may be drawn anywhere on the top screen too. Nothing changes at 1:1, but stereoscopic 3D
        // moves backgrounds sideways, and the sky's inner tiles were cut off at the 4:3 edge while the
        // widened edge tiles moved on (a gap at x 360).
        if (n64_widescreen && scissor[0] <= 0 && scissor[2] >= fb_wf - 1.0f && ulx >= 0.0f && lrx <= fb_wf) {
            d->scissor[0] = 0;
            d->scissor[2] = (uint16_t)top_w;
        }
        // Widescreen: out to the top screen's edges (the 4:3 area is 0.8 of its width). Either the
        // texture carries on (the part the game trimmed off, then the texture's wrap), or with
        // rect_mirror, mirrored copies of the rect's edge strips go beside it (seamless).
        float mirror_l = 0, mirror_r = 0, dsdx = 0;
        if (rect_widened) {
            float extra = fb_wf * 0.125f + 1.0f;
            dsdx = lrx > ulx ? (s1 - s0) / (lrx - ulx) : 0.0f;
            if (rect_mirror) {
                if (ulx <= 1.0f) mirror_l = std::min(extra, lrx - ulx);
                if (lrx >= fb_wf - 1.0f) mirror_r = std::min(extra, lrx - ulx);
            } else {
                if (ulx <= 1.0f) { ulx -= extra; s0 -= dsdx * extra; }
                if (lrx >= fb_wf - 1.0f) { lrx += extra; s1 += dsdx * extra; }
            }
            rect_widened = rect_mirror = false;
        }
        float fb_hf = fb_wf * 0.75f;
        float kx = (top_h * 4.0f / 3.0f / top_w) / (fb_wf * 0.5f);
        auto make = [&](float px, float py, float s, float t) {
            Vertex v;
            v.x = (px - fb_wf * 0.5f) * kx;
            v.y = (fb_hf * 0.5f - py) / (fb_hf * 0.5f);
            v.z = d->depth_clear ? -0.999f : 0.0f; // depth clears go to the far plane
            v.w = 1.0f;
            v.u = s;
            v.v = t;
            // Rectangles have no shade on the RDP: a combiner reading SHADE gets zero (the boot logo's
            // background quad uses it to draw black).
            v.color[0] = v.color[1] = v.color[2] = v.color[3] = 0;
            return v;
        };
        Vertex ul = make(ulx, uly, s0, t0);
        Vertex ur = flip ? make(lrx, uly, s0, t1) : make(lrx, uly, s1, t0);
        Vertex ll = flip ? make(ulx, lry, s1, t0) : make(ulx, lry, s0, t1);
        Vertex lr = make(lrx, lry, s1, t1);
        refresh_uv_inv();
        const Vertex* quad[6] = { &ul, &ll, &lr, &ul, &lr, &ur };
        if (int region = hud_region(d, quad, 6)) {
            emit_overlay(quad, 6, d, region);
            return;
        }
        emit(ul, d); emit(ll, d); emit(lr, d);
        emit(ul, d); emit(lr, d); emit(ur, d);
        auto mirrored = [&](float x0, float x1, float sa, float sb) {
            Vertex a = make(x0, uly, sa, t0), b = make(x1, uly, sb, t0), c = make(x0, lry, sa, t1), e = make(x1, lry, sb, t1);
            emit(a, d); emit(c, d); emit(e, d);
            emit(a, d); emit(e, d); emit(b, d);
        };
        if (mirror_l > 0) mirrored(ulx - mirror_l, ulx, s0 + dsdx * mirror_l, s0);
        if (mirror_r > 0) mirrored(lrx, lrx + mirror_r, s1, s1 - dsdx * mirror_r);
    }

    // --- Interpreter ---

    // State commands mark the draw state changed (a new draw call: combiner, blender and textures
    // looked up again) only when they change something. The game repeats the same settings for
    // every object, and each repeat had cost a draw call.
    template <class T, class V> void set_state(T& field, V value) {
        if (field != (T)value) {
            field = (T)value;
            state_dirty = true;
        }
    }

    void set_color(uint8_t* c, uint32_t w1) {
        uint8_t v[4] = { (uint8_t)(w1 >> 24), (uint8_t)(w1 >> 16), (uint8_t)(w1 >> 8), (uint8_t)w1 };
        if (memcmp(c, v, 4) != 0) {
            memcpy(c, v, 4);
            state_dirty = true;
        }
    }

    // A texture load into TMEM; repeating the last load there changes nothing (the source bytes don't
    // change while a display list runs).
    void set_load(uint16_t tmem, const TmemLoad& l) {
        auto it = tmem_loads.find(tmem);
        if (it != tmem_loads.end() && it->second.src == l.src && it->second.src_stride == l.src_stride && it->second.tmem_line == l.tmem_line) return;
        tmem_loads[tmem] = l;
        state_dirty = tex_dirty = true;
    }

    void run(uint32_t dl_address) {
        Phase phase(PHASE_CMD);
        // Which HUD gauges the game shows (Mega Man 64: life bar status at 0x801BC660 bit 1; energy
        // bar while 0x80204B21 is set and its status at 0x801BC684 has bit 1), so only they move
        // to the bottom screen.
        // Only while the game's HUD routines ran since the last display list (counted by
        // mm64_patches.cpp): other screens, like the start menu, draw in the same corners.
        // A pass counts for a few display lists: the game doesn't run its HUD routines for every one
        // (the gauges flickered back onto the top screen).
        static uint32_t last_gauge_passes, last_map_passes, gauge_dl, map_dl;
        uint32_t gauge_passes = mm64_hud_gauge_passes, map_passes = mm64_hud_map_passes;
        if (gauge_passes != last_gauge_passes) gauge_dl = dl_count;
        if (map_passes != last_map_passes) map_dl = dl_count;
        bool gauges_ran = dl_count - gauge_dl <= 4, map_ran = dl_count - map_dl <= 4;
        last_gauge_passes = gauge_passes;
        last_map_passes = map_passes;
        hud_life_shown = gauges_ran && (read_u8(0x1BC660) & 2);
        hud_energy_shown = gauges_ran && read_u8(0x204B21) != 0 && (read_u8(0x1BC684) & 2);
        // Minimap (func_8004A81C): drawn while 0x801BC441 is clear and 0x800AD0C8 has bit 1.
        hud_map_shown = map_ran && read_u8(0x1BC441) == 0 && (read_u32(0x0AD0C8) & 2);
        uint32_t stack[dl_stack_size];
        int depth = 0;
        uint32_t pc = resolve(dl_address);
        bool survey = dl_count < 3;
        dl_count++;
        state_dirty = tex_dirty = true;

        // Real display lists are a few thousand commands; anything far beyond that is a runaway
        // (bad branch or missed G_ENDDL). Stop and log it rather than stall the graphics thread.
        constexpr int max_commands = 100000;
        uint32_t recent[8] = {};
        for (int guard = 0;; guard++) {
            if (guard == max_commands) {
                if (runaway_logs < 8) {
                    runaway_logs++;
                    fprintf(stderr, "[gfx] runaway display list 0x%08X (depth %d, pc 0x%06X), last opcodes:",
                        (unsigned)dl_address, depth, (unsigned)pc);
                    for (int i = 0; i < 8; i++) fprintf(stderr, " %08X", (unsigned)recent[(guard + i) & 7]);
                    fprintf(stderr, "\n");
                }
                return;
            }
            uint32_t w0 = read_u32(pc);
            uint32_t w1 = read_u32(pc + 4);
            recent[guard & 7] = w0;
            pc += 8;
            uint8_t op = w0 >> 24;
            if (survey) opcode_counts[op]++;
            geo_cmds++;

            switch (op) {
                case G_NOOP: case G_SPNOOP: case G_RDPLOADSYNC: case G_RDPPIPESYNC: case G_RDPTILESYNC:
                case G_RDPFULLSYNC: case G_SETKEYGB: case G_SETKEYR: case G_SETCONVERT: case G_SETPRIMDEPTH:
                case G_CULLDL: case G_DMA_IO: case G_LOAD_UCODE:
                    break;

                case G_VTX: {
                    int n = (w0 >> 12) & 0xFF;
                    int end = (w0 >> 1) & 0x7F;
                    geo_vtx += n;
                    load_vertices(resolve(w1), n, end - n);
                    break;
                }
                case G_MODIFYVTX: {
                    int idx = ((w0 & 0xFFFF) / 2) & (vertex_buffer_size - 1);
                    int where = (w0 >> 16) & 0xFF;
                    if (where == 0x10) { // RGBA
                        vertices[idx].color[0] = w1 >> 24; vertices[idx].color[1] = w1 >> 16;
                        vertices[idx].color[2] = w1 >> 8; vertices[idx].color[3] = w1;
                    }
                    else if (where == 0x14) { // ST
                        vertices[idx].u = (int16_t)(w1 >> 16) / 32.0f * (texture_scale_s / 65536.0f);
                        vertices[idx].v = (int16_t)(w1 & 0xFFFF) / 32.0f * (texture_scale_t / 65536.0f);
                    }
                    break;
                }
                case G_TRI1:
                    triangle(((w0 >> 16) & 0xFF) / 2, ((w0 >> 8) & 0xFF) / 2, (w0 & 0xFF) / 2);
                    break;
                case G_TRI2: case G_QUAD:
                    triangle(((w0 >> 16) & 0xFF) / 2, ((w0 >> 8) & 0xFF) / 2, (w0 & 0xFF) / 2);
                    triangle(((w1 >> 16) & 0xFF) / 2, ((w1 >> 8) & 0xFF) / 2, (w1 & 0xFF) / 2);
                    break;
                case G_LINE3D:
                    break; // TODO: L3DEX2 lines
                case G_BRANCH_Z: // Treat as always taken (the address comes from the preceding RDPHALF_1).
                    if (depth < dl_stack_size) pc = resolve(rdphalf_1);
                    break;

                case G_TEXTURE:
                    texture_scale_s = w1 >> 16;
                    texture_scale_t = w1 & 0xFFFF;
                    if (texture_tile != ((w0 >> 8) & 7) || texture_on != (((w0 >> 1) & 0x7F) != 0)) tex_dirty = true;
                    set_state(texture_tile, (int)((w0 >> 8) & 7));
                    set_state(texture_on, ((w0 >> 1) & 0x7F) != 0);
                    break;
                case G_POPMTX: {
                    int count = w1 / 64;
                    modelview_depth = std::max(0, modelview_depth - count);
                    mvp_dirty = true;
                    break;
                }
                case G_GEOMETRYMODE:
                    set_state(geometry_mode, (geometry_mode & (w0 & 0xFFFFFF)) | w1);
                    break;
                case G_MTX: {
                    uint8_t p = (w0 & 0xFF) ^ G_MTX_PUSH;
                    geo_mtx++;
                    Mat4 m = read_matrix(resolve(w1));
                    if (p & G_MTX_PROJECTION) {
                        projection = (p & G_MTX_LOAD) ? m : mul(m, projection);
                        state_dirty = true;
                    }
                    else {
                        if ((p & G_MTX_PUSH) && modelview_depth < matrix_stack_size - 1) {
                            modelview_stack[modelview_depth + 1] = modelview_stack[modelview_depth];
                            modelview_depth++;
                        }
                        modelview_stack[modelview_depth] = (p & G_MTX_LOAD) ? m : mul(m, modelview_stack[modelview_depth]);
                    }
                    mvp_dirty = true;
                    break;
                }
                case G_MOVEWORD: {
                    uint8_t index = (w0 >> 16) & 0xFF;
                    uint16_t offset = w0 & 0xFFFF;
                    switch (index) {
                        case G_MW_SEGMENT: segments[(offset / 4) & 0xF] = w1 & 0x00FFFFFF; break;
                        case G_MW_NUMLIGHT: num_lights = std::min<int>(7, w1 / 24); light_dirs_dirty = true; break;
                        case G_MW_FOG: fog_mul = (int16_t)(w1 >> 16); fog_offset = (int16_t)(w1 & 0xFFFF); break;
                        case G_MW_LIGHTCOL: {
                            int l = std::min(7, offset / 24);
                            lights[l].col[0] = (w1 >> 24) & 0xFF; lights[l].col[1] = (w1 >> 16) & 0xFF; lights[l].col[2] = (w1 >> 8) & 0xFF;
                            break;
                        }
                        default: break;
                    }
                    break;
                }
                case G_MOVEMEM: {
                    uint8_t index = w0 & 0xFF;
                    uint32_t offset = ((w0 >> 8) & 0xFF) * 8;
                    uint32_t src = resolve(w1);
                    if (index == G_MV_VIEWPORT) {
                        for (int i = 0; i < 3; i++) {
                            viewport_scale[i] = (int16_t)read_u16(src + i * 2) / 4.0f;
                            viewport_trans[i] = (int16_t)read_u16(src + 8 + i * 2) / 4.0f;
                        }
                    }
                    else if (index == G_MV_LIGHT) {
                        int l = (int)(offset / 24) - 2;
                        float col[3] = { (float)read_u8(src), (float)read_u8(src + 1), (float)read_u8(src + 2) };
                        float dir[3] = { (float)(int8_t)read_u8(src + 8), (float)(int8_t)read_u8(src + 9), (float)(int8_t)read_u8(src + 10) };
                        if (l < 0) {
                            int which = (int)(offset / 24) & 1;
                            memcpy(lookat[which], dir, sizeof(dir));
                            light_dirs_dirty = true;
                        }
                        else if (l < 8) {
                            memcpy(lights[l].col, col, sizeof(col));
                            memcpy(lights[l].dir, dir, sizeof(dir));
                            light_dirs_dirty = true;
                        }
                    }
                    else if (index == G_MV_MATRIX) {
                        // Forced MVP matrix: load into projection with identity modelview.
                        projection = read_matrix(src);
                        state_dirty = true;
                        modelview_stack[modelview_depth] = identity();
                        mvp_dirty = true;
                    }
                    break;
                }
                case G_DL:
                    if (((w0 >> 16) & 0xFF) == 0) {
                        if (depth >= dl_stack_size) break;
                        stack[depth++] = pc;
                    }
                    pc = resolve(w1);
                    break;
                case G_ENDDL:
                    if (depth == 0) return;
                    pc = stack[--depth];
                    break;
                case G_RDPHALF_1: rdphalf_1 = w1; break;
                case G_RDPHALF_2: rdphalf_2 = w1; break;
                case G_SETOTHERMODE_L: case G_SETOTHERMODE_H: {
                    uint32_t len = (w0 & 0xFF) + 1;
                    uint32_t shift = 32 - ((w0 >> 8) & 0xFF) - len;
                    uint32_t mask = (len >= 32 ? 0xFFFFFFFFu : ((1u << len) - 1)) << shift;
                    uint32_t& om = op == G_SETOTHERMODE_L ? other_mode_l : other_mode_h;
                    uint32_t before = other_mode_h;
                    set_state(om, (om & ~mask) | (w1 & mask));
                    if (other_mode_h != before) tex_dirty = true;
                    break;
                }
                case G_RDPSETOTHERMODE:
                    if (other_mode_h != (w0 & 0xFFFFFF)) tex_dirty = true;
                    set_state(other_mode_h, w0 & 0xFFFFFF);
                    set_state(other_mode_l, w1);
                    break;

                case G_TEXRECT: case G_TEXRECTFLIP: {
                    // Followed by RDPHALF_1 (s, t) and RDPHALF_2 (dsdx, dtdy).
                    uint32_t h1 = read_u32(pc + 4);
                    uint32_t h2 = read_u32(pc + 12);
                    pc += 16;
                    float lrx = ((w0 >> 12) & 0xFFF) / 4.0f, lry = (w0 & 0xFFF) / 4.0f;
                    int tile = (w1 >> 24) & 7;
                    float ulx = ((w1 >> 12) & 0xFFF) / 4.0f, uly = (w1 & 0xFFF) / 4.0f;
                    float s = (int16_t)(h1 >> 16) / 32.0f, t = (int16_t)(h1 & 0xFFFF) / 32.0f;
                    float dsdx = (int16_t)(h2 >> 16) / 1024.0f, dtdy = (int16_t)(h2 & 0xFFFF) / 1024.0f;
                    UvMap saved[2] = { uv_map[0], uv_map[1] };
                    rect(ulx, uly, lrx, lry, tile, s, t, dsdx, dtdy, true, op == G_TEXRECTFLIP);
                    uv_map[0] = saved[0];
                    uv_map[1] = saved[1];
                    break;
                }
                case G_FILLRECT: {
                    float lrx = ((w0 >> 12) & 0xFFF) / 4.0f, lry = (w0 & 0xFFF) / 4.0f;
                    float ulx = ((w1 >> 12) & 0xFFF) / 4.0f, uly = (w1 & 0xFFF) / 4.0f;
                    rect(ulx, uly, lrx, lry, 0, 0, 0, 0, 0, false, false);
                    break;
                }
                case G_SETSCISSOR:
                    set_state(scissor[0], ((w0 >> 12) & 0xFFF) / 4);
                    set_state(scissor[1], (w0 & 0xFFF) / 4);
                    set_state(scissor[2], ((w1 >> 12) & 0xFFF) / 4);
                    set_state(scissor[3], (w1 & 0xFFF) / 4);
                    break;
                case G_SETTILE: {
                    Tile& t = tiles[(w1 >> 24) & 7];
                    Tile before = t;
                    t.fmt = (w0 >> 21) & 7; t.siz = (w0 >> 19) & 3; t.line = (w0 >> 9) & 0x1FF; t.tmem = w0 & 0x1FF;
                    t.palette = (w1 >> 20) & 0xF; t.cmt = (w1 >> 18) & 3; t.maskt = (w1 >> 14) & 0xF; t.shiftt = (w1 >> 10) & 0xF;
                    t.cms = (w1 >> 8) & 3; t.masks = (w1 >> 4) & 0xF; t.shifts = w1 & 0xF;
                    if (memcmp(&before, &t, sizeof(Tile)) != 0) state_dirty = tex_dirty = true;
                    break;
                }
                case G_SETTILESIZE: {
                    Tile& t = tiles[(w1 >> 24) & 7];
                    Tile before = t;
                    set_state(t.uls, (uint16_t)((w0 >> 12) & 0xFFF)); set_state(t.ult, (uint16_t)(w0 & 0xFFF));
                    set_state(t.lrs, (uint16_t)((w1 >> 12) & 0xFFF)); set_state(t.lrt, (uint16_t)(w1 & 0xFFF));
                    if (memcmp(&before, &t, sizeof(Tile)) != 0) tex_dirty = true;
                    break;
                }
                case G_LOADBLOCK: {
                    Tile& t = tiles[(w1 >> 24) & 7];
                    uint32_t uls = (w0 >> 12) & 0xFFF, ult = w0 & 0xFFF;
                    uint32_t bpp2 = bytes_per_texel_x2(timg_siz);
                    TmemLoad l;
                    l.src = timg_addr + ((ult * timg_width + uls) * bpp2) / 2;
                    set_load(t.tmem, l);
                    break;
                }
                case G_LOADTILE: {
                    Tile& t = tiles[(w1 >> 24) & 7];
                    uint32_t uls = ((w0 >> 12) & 0xFFF) >> 2, ult = (w0 & 0xFFF) >> 2;
                    uint32_t bpp2 = bytes_per_texel_x2(timg_siz);
                    TmemLoad l;
                    l.src_stride = (timg_width * bpp2) / 2;
                    l.src = timg_addr + ult * l.src_stride + (uls * bpp2) / 2;
                    l.tmem_line = t.line * 8;
                    set_load(t.tmem, l);
                    break;
                }
                case G_LOADTLUT: {
                    Tile& t = tiles[(w1 >> 24) & 7];
                    uint32_t count = ((w1 >> 14) & 0x3FF) + 1;
                    uint32_t base = t.tmem >= 256 ? t.tmem - 256 : 0;
                    last_tlut_base = base; last_tlut_count = count; last_tlut_src = timg_addr;
                    for (uint32_t i = 0; i < count && base + i < 256; i++) {
                        uint32_t a = timg_addr + i * 2;
                        palette[base + i] = (uint16_t)((read_u8(a) << 8) | read_u8(a + 1));
                    }
                    uint64_t before = palette_hash;
                    set_state(palette_hash, hash_bytes(0, reinterpret_cast<const uint8_t*>(palette), sizeof(palette)));
                    if (palette_hash != before) tex_dirty = true;
                    break;
                }
                case G_SETFILLCOLOR: fill_color = w1; break;
                case G_SETFOGCOLOR: set_color(fog_color, w1); break;
                case G_SETBLENDCOLOR: set_color(blend_color, w1); break;
                case G_SETPRIMCOLOR:
                    set_state(prim_lod_frac, w0 & 0xFF);
                    set_color(prim, w1);
                    break;
                case G_SETENVCOLOR: set_color(env, w1); break;
                case G_SETCOMBINE: set_state(combine_w0, w0 & 0xFFFFFF); set_state(combine_w1, w1); break;
                case G_SETTIMG:
                    timg_addr = resolve(w1);
                    timg_siz = (w0 >> 19) & 3;
                    timg_width = (w0 & 0xFFF) + 1;
                    break;
                case G_SETZIMG: zimg_addr = resolve(w1); break;
                case G_SETCIMG: {
                    cimg_addr = resolve(w1);
                    cimg_width = (w0 & 0xFFF) + 1;
                    if (cimg_width < 64 || cimg_width > 1024) cimg_width = 320;
                    select_frame(cimg_addr);
                    state_dirty = true; // the new buffer's last draw has some other state
                    // A buffer the VI doesn't show (and that's never cleared with a fill) collects
                    // every frame drawn into it. Far more than one frame's worth (a busy Cardon Forest
                    // frame is ~500 draws) means that's what happened: drop it and give the memory
                    // back. (Only emptied, the vectors kept their size - ~10 MB that grew all session
                    // and, with fragmentation, ran a console out of memory.)
                    if (frame->vertices.size() > frame_trim_vertices || frame->draws.size() > frame_trim_draws) {
                        std::vector<GpuVertex>().swap(frame->vertices);
                        std::vector<DrawCmd>().swap(frame->draws);
                        std::vector<GpuVertex>().swap(frame->overlay_vertices);
                        std::vector<DrawCmd>().swap(frame->overlay_draws);
                        overlay_source = -1;
                    }
                    break;
                }

                default:
                    if (logged_unknown.size() < 32 && logged_unknown.insert(op).second) {
                        fprintf(stderr, "[gfx] unhandled opcode %02X (w0=%08X w1=%08X)\n", op, (unsigned)w0, (unsigned)w1);
                    }
                    break;
            }

        }
    }

    void write_survey() {
        fprintf(stderr, "[gfx] opcode survey (first 3 display lists):");
        for (int i = 0; i < 256; i++) {
            if (opcode_counts[i]) fprintf(stderr, " %02X:%u", i, (unsigned)opcode_counts[i]);
        }
        fprintf(stderr, "\n[gfx] color image 0x%06X width %u, z image 0x%06X\n", (unsigned)cimg_addr, (unsigned)cimg_width, (unsigned)zimg_addr);
    }
};

// Development: what the renderer holds in memory, for the [mem] log line (main.c watchdog).
static void* mem_report_impl;
void Renderer::mem_report() {
    Impl* r = static_cast<Impl*>(mem_report_impl);
    if (!r) return;
    size_t frame_vtx = 0, frame_draws = 0;
    for (auto& f : r->frames) {
        frame_vtx += f.second->vertices.capacity() + f.second->overlay_vertices.capacity();
        frame_draws += f.second->draws.capacity() + f.second->overlay_draws.capacity();
    }
    size_t pub_vtx = 0;
    for (auto& f : r->last_published) pub_vtx += f.second->vertices.capacity();
    fprintf(stderr, "[mem] renderer: textures %zu (%zu KB) indices %zu (%zu KB) binds %zu sources %zu frames %zu (vtx %zu draws %zu) published %zu (vtx %zu) tmem %zu combiners %zu\n",
        r->texture_cache.size(), r->texture_bytes / 1024, r->index_cache.size(), r->index_bytes / 1024, r->bind_cache.size(),
        r->source_cache.size(), r->frames.size(), frame_vtx, frame_draws, r->last_published.size(), pub_vtx, r->tmem_loads.size(),
        r->logged_combiners.size());
}

Renderer::Renderer(uint8_t* rdram) : impl(std::make_unique<Impl>(rdram)) { mem_report_impl = impl.get(); }
extern "C" void n64_renderer_mem_report(void) { Renderer::mem_report(); }
Renderer::~Renderer() = default;

void Renderer::run_display_list(uint32_t dl_address) {
    static bool skipped;
    if (n64_frame_skip && !skipped) {
        bool waiting;
        {
            std::lock_guard lock{ published_mutex };
            waiting = published_frame != nullptr;
        }
        if (waiting) {
            skipped = true;
            return;
        }
    }
    skipped = false;
    impl->run(dl_address);
    if (impl->dl_count == 3) impl->write_survey();
}

void Renderer::on_vi(uint32_t vi_origin) {
    impl->publish(vi_origin & 0x00FFFFFF);
}

std::shared_ptr<FrameData> Renderer::take_published_frame() {
    std::lock_guard lock{ published_mutex };
    return std::move(published_frame);
}

} // namespace n64r
