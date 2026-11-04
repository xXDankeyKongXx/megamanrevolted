// Citro3D backend for the N64 renderer (main thread). Translates n64r::FrameData draw calls into
// PICA200 state: N64 color combiner -> TexEnv stages, render modes -> blend/alpha/depth state.

#include <3ds.h>
#include <citro3d.h>
#include <citro2d.h>

#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <unordered_map>
#include <vector>

#include "c3d_backend.h"
#include "mm64_platform.h"
#include "n64_frame.hpp"
#include "n64_renderer.hpp"
#include "n64_shbin.h"
#include "title_credit.inc"

// "DANKEY KONG 2026" on the title screen (see n64_top_draw_title_credit).
static C3D_Tex title_credit_tex;
static bool title_credit_ready, title_credit_shown;

using namespace n64r;

namespace {

constexpr u32 display_transfer_flags =
    GX_TRANSFER_FLIP_VERT(0) | GX_TRANSFER_OUT_TILED(0) | GX_TRANSFER_RAW_COPY(0) |
    GX_TRANSFER_IN_FORMAT(GX_TRANSFER_FMT_RGBA8) | GX_TRANSFER_OUT_FORMAT(GX_TRANSFER_FMT_RGB8) |
    GX_TRANSFER_SCALING(GX_TRANSFER_SCALE_NO);

constexpr size_t vbo_capacity = 65536;
// GPU textures kept (a busy area uses ~500 per frame); fewer with little memory (Old 3DS).
static const size_t texture_cache_limit = mm64_small_memory() ? 640 : 1024;

DVLB_s* shader_dvlb;
shaderProgram_s program;
C3D_AttrInfo attr_info;
C3D_RenderTarget* top_target;
// Stereoscopic 3D (as in the Pokemon Snap port): the right eye's target, the eye separation (0 = no
// 3D: one image, the screen's 3D mode off) and the vertex shader's uniforms (n64.v.pica).
C3D_RenderTarget* top_target_right;
float stereo_separation;
int stereo_uniform = -1, stereo_conv_uniform = -1;
// The distance (clip w, N64 units) that lands on the screen's plane: about the camera's distance to
// Mega Man in play (~510 measured, [stereo] log), so he sits at the screen and the level reaches
// into it (sky and far scenery at 3000-6000 get almost the full separation).
constexpr float stereo_convergence = 500.0f;
GpuVertex* vbo[2];
void* vbo_alloc[2];

// Vertex buffers get pages of their own, with a guard page on each side, so per-frame CPU writes
// never share a 4 KB page with a GPU-written buffer (which makes emulators like Citra read that
// surface back from the host GPU).
constexpr size_t page_size = 0x1000;
constexpr size_t vbo_bytes = (vbo_capacity * sizeof(GpuVertex) + page_size - 1) & ~(page_size - 1);
int vbo_index;
std::shared_ptr<FrameData> current_frame;
C3D_Tex white_tex;
u32 frame_number;
u32 stat_uploads, stat_evictions, stat_draws, stat_reuploads;

struct CachedTex {
    C3D_Tex tex;
    u32 last_used;
    uint64_t image_key; // the TexImage now in it (palette textures change it in place)
};
std::unordered_map<uint64_t, CachedTex*> texture_cache;

// --- Textures -----------------------------------------------------------------------------------

void evict_textures(bool all_unused) {
    for (auto it = texture_cache.begin(); it != texture_cache.end();) {
        // With C3D_FRAME_SYNCDRAW the previous frame has finished on the GPU, so anything not used
        // in this frame can go.
        if (it->second->last_used + (all_unused ? 1 : 2) <= frame_number) {
            C3D_TexDelete(&it->second->tex);
            stat_evictions++;
            delete it->second;
            it = texture_cache.erase(it);
        }
        else {
            ++it;
        }
    }
}

C3D_Tex* get_texture(const TexBinding& b) {
    if (!b.image) return &white_tex;
    // Palette textures share one GPU texture per set of indices (TexImage::gpu_slot): when only the
    // palette changed, its texels are uploaded into it again instead of making a new texture and
    // dropping the old one each frame - unless this frame already drew it with the other palette
    // (the GPU reads textures after the frame is built), in which case it gets a texture of its own.
    uint64_t cache_key = b.image->key;
    if (b.image->gpu_slot) {
        uint64_t slot_key = b.image->gpu_slot ^ 0xA5A5A5A5A5A5A5A5ull;
        auto s = texture_cache.find(slot_key);
        if (s == texture_cache.end()) {
            cache_key = slot_key;
        } else if (s->second->image_key == b.image->key) {
            cache_key = slot_key;
        } else if (s->second->last_used != frame_number && s->second->tex.width == b.image->width &&
                   s->second->tex.height == b.image->height) {
            C3D_TexUpload(&s->second->tex, b.image->texels.data());
            s->second->image_key = b.image->key;
            stat_reuploads++;
            cache_key = slot_key;
        }
    }
    auto it = texture_cache.find(cache_key);
    CachedTex* ct;
    if (it != texture_cache.end()) {
        ct = it->second;
    }
    else {
        if (texture_cache.size() >= texture_cache_limit) evict_textures(false);
        ct = new CachedTex{};
        if (!C3D_TexInit(&ct->tex, b.image->width, b.image->height, GPU_RGBA8)) {
            evict_textures(true);
            if (!C3D_TexInit(&ct->tex, b.image->width, b.image->height, GPU_RGBA8)) {
                delete ct;
                return &white_tex;
            }
        }
        C3D_TexUpload(&ct->tex, b.image->texels.data());
        stat_uploads++;
        ct->image_key = b.image->key;
        texture_cache[cache_key] = ct;
    }
    ct->last_used = frame_number;

    auto wrap = [](TexWrap w) {
        return w == TexWrap::Mirror ? GPU_MIRRORED_REPEAT : w == TexWrap::Repeat ? GPU_REPEAT : GPU_CLAMP_TO_EDGE;
    };
    C3D_TexSetWrap(&ct->tex, wrap(b.wrap_s), wrap(b.wrap_t));
    C3D_TexSetFilter(&ct->tex, b.linear ? GPU_LINEAR : GPU_NEAREST, b.linear ? GPU_LINEAR : GPU_NEAREST);
    return &ct->tex;
}

// --- Combiner -> TexEnv compiler -----------------------------------------------------------------
//
// Each N64 cycle computes (a - b) * c + d per channel. Each PICA200 stage applies one function to up
// to three sources, of which only one may be a constant (the stage's constant color). Equations are
// compiled to 1-3 stages per channel with constant folding; RGB and alpha chains are then padded to
// the same length and zipped. In 2-cycle mode the cycle-1 result is kept in the combiner buffer so
// cycle 2 can read it as COMBINED.

struct Arg {
    bool is_const;
    GPU_TEVSRC src;
    int op;        // GPU_TEVOP_RGB or GPU_TEVOP_A operand
    float v[3];    // constant value (RGB, or v[0] for alpha)
};

struct Stage {
    GPU_COMBINEFUNC func;
    Arg args[3];
    int nargs;
};

Arg make_const(float r, float g, float b) { return Arg{ true, GPU_CONSTANT, 0, { r, g, b } }; }
Arg make_var(GPU_TEVSRC src, int op) { return Arg{ false, src, op, { 0, 0, 0 } }; }

bool same(const Arg& x, const Arg& y) {
    if (x.is_const != y.is_const) return false;
    if (x.is_const) return x.v[0] == y.v[0] && x.v[1] == y.v[1] && x.v[2] == y.v[2];
    return x.src == y.src && x.op == y.op;
}
bool is_value(const Arg& x, float v) { return x.is_const && x.v[0] == v && x.v[1] == v && x.v[2] == v; }

int distinct_consts(std::initializer_list<const Arg*> args) {
    const Arg* first = nullptr;
    int n = 0;
    for (const Arg* a : args) {
        if (!a->is_const) continue;
        if (!first) { first = a; n = 1; }
        else if (!same(*first, *a)) n = 2;
    }
    return n;
}

struct ChannelCompiler {
    bool alpha;
    std::vector<Stage>& out;

    Arg prev() const { return make_var(GPU_PREVIOUS, alpha ? (int)GPU_TEVOP_A_SRC_ALPHA : (int)GPU_TEVOP_RGB_SRC_COLOR); }

    void emit(GPU_COMBINEFUNC f, Arg a0, Arg a1 = Arg{}, Arg a2 = Arg{}, int n = 1) {
        out.push_back(Stage{ f, { a0, a1, a2 }, n });
    }

    void mul(const Arg& x, const Arg& y) {
        if (x.is_const && y.is_const) emit(GPU_REPLACE, make_const(x.v[0] * y.v[0], x.v[1] * y.v[1], x.v[2] * y.v[2]));
        else if (is_value(x, 1)) emit(GPU_REPLACE, y);
        else if (is_value(y, 1)) emit(GPU_REPLACE, x);
        else emit(GPU_MODULATE, x, y, Arg{}, 2);
    }

    void add_prev(const Arg& z) {
        if (!is_value(z, 0)) emit(GPU_ADD, prev(), z, Arg{}, 2);
    }

    // x * y + z
    void mad(const Arg& x, const Arg& y, const Arg& z) {
        if (is_value(z, 0)) { mul(x, y); return; }
        if (distinct_consts({ &x, &y, &z }) <= 1 && !(x.is_const && y.is_const)) {
            emit(GPU_MULTIPLY_ADD, x, y, z, 3);
            return;
        }
        mul(x, y);
        add_prev(z);
    }

    // x * z + y * (1 - z)
    void lerp(const Arg& x, const Arg& y, const Arg& z) {
        if (distinct_consts({ &x, &y, &z }) <= 1) {
            emit(GPU_INTERPOLATE, x, y, z, 3);
            return;
        }
        // z is constant here (x and y both constant was folded by the caller).
        Arg one_minus_z = make_const(1 - z.v[0], 1 - z.v[1], 1 - z.v[2]);
        if (x.is_const) {
            mul(y, one_minus_z);
            add_prev(make_const(x.v[0] * z.v[0], x.v[1] * z.v[1], x.v[2] * z.v[2]));
        }
        else {
            mul(x, z);
            add_prev(make_const(y.v[0] * one_minus_z.v[0], y.v[1] * one_minus_z.v[1], y.v[2] * one_minus_z.v[2]));
        }
    }

    // (a - b) * c + d
    void compile(const Arg& a, const Arg& b, const Arg& c, const Arg& d) {
        if (is_value(c, 0) || same(a, b)) { emit(GPU_REPLACE, d); return; }
        if (a.is_const && b.is_const && c.is_const && d.is_const) {
            float r[3];
            for (int i = 0; i < 3; i++) r[i] = std::clamp((a.v[i] - b.v[i]) * c.v[i] + d.v[i], 0.0f, 1.0f);
            emit(GPU_REPLACE, make_const(r[0], r[1], r[2]));
            return;
        }
        if (a.is_const && b.is_const) {
            float k[3] = { a.v[0] - b.v[0], a.v[1] - b.v[1], a.v[2] - b.v[2] };
            if (k[0] >= 0 && k[1] >= 0 && k[2] >= 0) {
                mad(c, make_const(k[0], k[1], k[2]), d);
            }
            else {
                // d - |k| * c
                mul(c, make_const(std::max(0.0f, -k[0]), std::max(0.0f, -k[1]), std::max(0.0f, -k[2])));
                emit(GPU_SUBTRACT, d, prev(), Arg{}, 2);
            }
            return;
        }
        if (is_value(b, 0)) { mad(a, c, d); return; }
        if (same(d, b)) { lerp(a, b, c); return; }
        // General case: the PICA200 clamps the subtraction at 0 (N64 keeps it signed).
        emit(GPU_SUBTRACT, a, b, Arg{}, 2);
        if (is_value(c, 1)) add_prev(d);
        else mad(prev(), c, d);
    }
};

// Where the second cycle reads COMBINED (the first cycle's result) from.
enum class CombinedSource { None, Previous, Buffer };

Arg input_arg(CcInput in, bool alpha, const DrawCmd& d, CombinedSource combined) {
    auto col = [](const uint8_t* c) { return make_const(c[0] / 255.0f, c[1] / 255.0f, c[2] / 255.0f); };
    auto splat = [](float v) { return make_const(v, v, v); };
    int color_op = alpha ? (int)GPU_TEVOP_A_SRC_ALPHA : (int)GPU_TEVOP_RGB_SRC_COLOR;
    int alpha_op = alpha ? (int)GPU_TEVOP_A_SRC_ALPHA : (int)GPU_TEVOP_RGB_SRC_ALPHA;
    GPU_TEVSRC combined_src = combined == CombinedSource::Buffer ? GPU_PREVIOUS_BUFFER : GPU_PREVIOUS;
    switch (in) {
        case CC_ZERO: return splat(0);
        case CC_ONE: return splat(1);
        case CC_COMBINED: return combined != CombinedSource::None ? make_var(combined_src, color_op) : splat(0);
        case CC_COMBINED_A: return combined != CombinedSource::None ? make_var(combined_src, alpha_op) : splat(0);
        case CC_TEX0: return make_var(GPU_TEXTURE0, color_op);
        case CC_TEX0_A: return make_var(GPU_TEXTURE0, alpha_op);
        case CC_TEX1: return make_var(GPU_TEXTURE1, color_op);
        case CC_TEX1_A: return make_var(GPU_TEXTURE1, alpha_op);
        case CC_SHADE: return make_var(GPU_PRIMARY_COLOR, color_op);
        case CC_SHADE_A: return make_var(GPU_PRIMARY_COLOR, alpha_op);
        case CC_PRIM: return alpha ? splat(d.prim[3] / 255.0f) : col(d.prim);
        case CC_PRIM_A: return splat(d.prim[3] / 255.0f);
        case CC_ENV: return alpha ? splat(d.env[3] / 255.0f) : col(d.env);
        case CC_ENV_A: return splat(d.env[3] / 255.0f);
        case CC_PRIM_LOD_FRAC: return splat(d.prim_lod_frac / 255.0f);
        // With no mip levels every pixel counts as "distant" on the RDP, which sets the LOD fraction
        // to 0xFF. As 0 it made the opening cutscene's crystal on the pedestal fully transparent.
        case CC_LOD_FRAC: return splat(1);
        case CC_NOISE: return splat(0.5f);
        case CC_SCALE: return splat(1);
        default: return splat(0); // K4, K5, CENTER
    }
}

void compile_cycle(const DrawCmd& d, const CombinerCycle& cc, CombinedSource second, std::vector<Stage>& rgb, std::vector<Stage>& alpha) {
    ChannelCompiler crgb{ false, rgb };
    ChannelCompiler ca{ true, alpha };
    crgb.compile(input_arg(cc.rgb[0], false, d, second), input_arg(cc.rgb[1], false, d, second),
                 input_arg(cc.rgb[2], false, d, second), input_arg(cc.rgb[3], false, d, second));
    ca.compile(input_arg(cc.alpha[0], true, d, second), input_arg(cc.alpha[1], true, d, second),
               input_arg(cc.alpha[2], true, d, second), input_arg(cc.alpha[3], true, d, second));
    // Pad the shorter chain so both finish on the same stage.
    Stage pass_rgb{ GPU_REPLACE, { make_var(GPU_PREVIOUS, GPU_TEVOP_RGB_SRC_COLOR) }, 1 };
    Stage pass_a{ GPU_REPLACE, { make_var(GPU_PREVIOUS, GPU_TEVOP_A_SRC_ALPHA) }, 1 };
    while (rgb.size() < alpha.size()) rgb.push_back(pass_rgb);
    while (alpha.size() < rgb.size()) alpha.push_back(pass_a);
}

u8 to_u8(float v) { return (u8)std::clamp(v * 255.0f + 0.5f, 0.0f, 255.0f); }

void apply_stage(int id, const Stage* rgb, const Stage* a) {
    C3D_TexEnv* env = C3D_GetTexEnv(id);
    C3D_TexEnvInit(env);
    if (!rgb) return; // pass-through
    u8 color[4] = { 0, 0, 0, 0 };
    GPU_TEVSRC rs[3], as[3];
    int ro[3], ao[3];
    for (int i = 0; i < 3; i++) {
        const Arg& r = rgb->args[i];
        const Arg& al = a->args[i];
        rs[i] = (i < rgb->nargs) ? r.src : GPU_PREVIOUS;
        ro[i] = (i < rgb->nargs) ? r.op : GPU_TEVOP_RGB_SRC_COLOR;
        if (i < rgb->nargs && r.is_const) {
            color[0] = to_u8(r.v[0]); color[1] = to_u8(r.v[1]); color[2] = to_u8(r.v[2]);
            ro[i] = GPU_TEVOP_RGB_SRC_COLOR;
        }
        as[i] = (i < a->nargs) ? al.src : GPU_PREVIOUS;
        ao[i] = (i < a->nargs) ? al.op : GPU_TEVOP_A_SRC_ALPHA;
        if (i < a->nargs && al.is_const) {
            color[3] = to_u8(al.v[0]);
            ao[i] = GPU_TEVOP_A_SRC_ALPHA;
        }
    }
    C3D_TexEnvSrc(env, C3D_RGB, rs[0], rs[1], rs[2]);
    C3D_TexEnvSrc(env, C3D_Alpha, as[0], as[1], as[2]);
    C3D_TexEnvOpRgb(env, (GPU_TEVOP_RGB)ro[0], (GPU_TEVOP_RGB)ro[1], (GPU_TEVOP_RGB)ro[2]);
    C3D_TexEnvOpAlpha(env, (GPU_TEVOP_A)ao[0], (GPU_TEVOP_A)ao[1], (GPU_TEVOP_A)ao[2]);
    C3D_TexEnvFunc(env, C3D_RGB, rgb->func);
    C3D_TexEnvFunc(env, C3D_Alpha, a->func);
    C3D_TexEnvColor(env, color[0] | (color[1] << 8) | (color[2] << 16) | ((u32)color[3] << 24));
}

void setup_combiner(const DrawCmd& d) {
    std::vector<Stage> rgb, alpha;
    rgb.reserve(6);
    alpha.reserve(6);
    int buffer_stage = -1;

    if (d.fill_mode) {
        Stage s{ GPU_REPLACE, { make_const(d.prim[0] / 255.0f, d.prim[1] / 255.0f, d.prim[2] / 255.0f) }, 1 };
        Stage sa{ GPU_REPLACE, { make_const(1, 1, 1) }, 1 };
        rgb.push_back(s);
        alpha.push_back(sa);
    }
    else if (d.copy_mode) {
        rgb.push_back(Stage{ GPU_REPLACE, { make_var(GPU_TEXTURE0, GPU_TEVOP_RGB_SRC_COLOR) }, 1 });
        alpha.push_back(Stage{ GPU_REPLACE, { make_var(GPU_TEXTURE0, GPU_TEVOP_A_SRC_ALPHA) }, 1 });
    }
    else {
        compile_cycle(d, d.cycles[0], CombinedSource::None, rgb, alpha);
        if (d.two_cycle) {
            // Both channel chains of cycle 1 end on the same stage, so at the first stage of cycle 2
            // PREVIOUS *is* COMBINED. Use that when cycle 2 fits in one stage (the common case).
            size_t cycle1_len = rgb.size();
            std::vector<Stage> rgb2 = rgb, alpha2 = alpha;
            compile_cycle(d, d.cycles[1], CombinedSource::Previous, rgb2, alpha2);
            if (rgb2.size() - cycle1_len <= 1) {
                rgb = std::move(rgb2);
                alpha = std::move(alpha2);
            }
            else {
                // Otherwise keep cycle 1's result in the combiner buffer. Only stages 1-4 can write
                // it, so make sure cycle 1 ends on stage 1 or later.
                if (cycle1_len == 1) {
                    rgb.push_back(Stage{ GPU_REPLACE, { make_var(GPU_PREVIOUS, GPU_TEVOP_RGB_SRC_COLOR) }, 1 });
                    alpha.push_back(Stage{ GPU_REPLACE, { make_var(GPU_PREVIOUS, GPU_TEVOP_A_SRC_ALPHA) }, 1 });
                }
                buffer_stage = (int)rgb.size() - 1;
                compile_cycle(d, d.cycles[1], CombinedSource::Buffer, rgb, alpha);
            }
        }
    }

    int n = std::min<int>(6, (int)rgb.size());
    for (int i = 0; i < 6; i++) {
        apply_stage(i, i < n ? &rgb[i] : nullptr, i < n ? &alpha[i] : nullptr);
    }
    // Buffer-update bit k-1 (register bits 8-11) makes stage k (1-4) write its output to the buffer.
    int mask = (buffer_stage >= 1 && buffer_stage <= 4) ? (1 << (buffer_stage - 1)) : 0;
    C3D_TexEnvBufUpdate(C3D_Both, mask);
    C3D_TexEnvBufColor(0);
}

// Redundant-state elimination: N64 frames often have hundreds of draws that differ only by texture
// (e.g. an image drawn as 32x32 tiles). Re-emitting every register per draw overflows the GPU
// command buffer and slows emulators down, so each state group is only sent when it changes.
// Reset at the start of every frame because citro2d changes the same state for the bottom screen.
struct StateCache {
    bool combiner_valid;
    bool two_cycle, copy_mode, fill_mode;
    CombinerCycle cycles[2];
    uint8_t prim[4], env[4], prim_lod_frac;
    C3D_Tex* tex[2];
    int blend_alpha_key;  // -1 = unknown
    int depth_key;        // -1 = unknown
    u64 scissor_key;
    bool scissor_valid;
} state_cache;

void reset_state_cache() {
    state_cache = StateCache{};
    state_cache.blend_alpha_key = -1;
    state_cache.depth_key = -1;
}

bool same_combiner(const DrawCmd& d) {
    const StateCache& c = state_cache;
    return c.combiner_valid && c.two_cycle == d.two_cycle && c.copy_mode == d.copy_mode && c.fill_mode == d.fill_mode &&
        !memcmp(c.cycles, d.cycles, sizeof(c.cycles)) && !memcmp(c.prim, d.prim, 4) && !memcmp(c.env, d.env, 4) &&
        c.prim_lod_frac == d.prim_lod_frac;
}

void setup_draw_state(const DrawCmd& d_in) {
    StateCache& c = state_cache;
#ifdef N64_AB_TEX_ONLY
    // A/B experiment: 3D draws output TEXEL0 only (ignores shade).
    DrawCmd d = d_in;
    if (!d.copy_mode && !d.fill_mode && (d.geometry_mode & 0x4)) {
        for (auto& cyc : d.cycles) {
            cyc.rgb[0] = cyc.rgb[1] = cyc.rgb[2] = CC_ZERO; cyc.rgb[3] = CC_TEX0;
            cyc.alpha[0] = cyc.alpha[1] = cyc.alpha[2] = CC_ZERO; cyc.alpha[3] = CC_ONE;
        }
        d.two_cycle = false;
    }
#else
    const DrawCmd& d = d_in;
#endif
    if (!same_combiner(d)) {
        setup_combiner(d);
        c.combiner_valid = true;
        c.two_cycle = d.two_cycle; c.copy_mode = d.copy_mode; c.fill_mode = d.fill_mode;
        memcpy(c.cycles, d.cycles, sizeof(c.cycles));
        memcpy(c.prim, d.prim, 4); memcpy(c.env, d.env, 4);
        c.prim_lod_frac = d.prim_lod_frac;
    }

    // get_texture() also applies the binding's wrap/filter to the texture object, so a texture
    // whose parameters changed is re-bound as well.
    for (int unit = 0; unit < 2; unit++) {
        C3D_Tex* t = (unit == 0 || d.tex[1].image) ? get_texture(d.tex[unit]) : &white_tex;
        u32 param = t->param;
        static u32 bound_param[2];
        if (t != c.tex[unit] || param != bound_param[unit]) {
            C3D_TexBind(unit, t);
            c.tex[unit] = t;
            bound_param[unit] = param;
        }
    }

    int blend_alpha_key = (int)d.blend | ((d.alpha_test && d.alpha_ref > 0) ? 4 : 0) | (d.alpha_ref << 3) | (d.blend_alpha << 11);
    if (blend_alpha_key != c.blend_alpha_key) {
        switch (d.blend) {
            case BlendMode::Alpha:
                C3D_AlphaBlend(GPU_BLEND_ADD, GPU_BLEND_ADD, GPU_SRC_ALPHA, GPU_ONE_MINUS_SRC_ALPHA, GPU_SRC_ALPHA, GPU_ONE_MINUS_SRC_ALPHA);
                break;
            case BlendMode::ConstantAlpha:
                C3D_BlendingColor((u32)d.blend_alpha << 24);
                C3D_AlphaBlend(GPU_BLEND_ADD, GPU_BLEND_ADD, GPU_CONSTANT_ALPHA, GPU_ONE_MINUS_CONSTANT_ALPHA, GPU_CONSTANT_ALPHA, GPU_ONE_MINUS_CONSTANT_ALPHA);
                break;
            case BlendMode::KeepMemory:
                C3D_AlphaBlend(GPU_BLEND_ADD, GPU_BLEND_ADD, GPU_ZERO, GPU_ONE, GPU_ZERO, GPU_ONE);
                break;
            default:
                C3D_AlphaBlend(GPU_BLEND_ADD, GPU_BLEND_ADD, GPU_ONE, GPU_ZERO, GPU_ONE, GPU_ZERO);
                break;
        }
        C3D_AlphaTest(d.alpha_test && d.alpha_ref > 0, GPU_GEQUAL, d.alpha_ref);
        c.blend_alpha_key = blend_alpha_key;
    }

    // Scissor: DrawCmd holds landscape top-screen pixels (x 0..400 right, y 0..240 down). The render
    // target is the portrait 240x400 buffer, where landscape (x, y) lands at (240 - y, 400 - x).
    u64 scissor_key = d.scissor[0] | ((u64)d.scissor[1] << 16) | ((u64)d.scissor[2] << 32) | ((u64)d.scissor[3] << 48);
    if (scissor_key != c.scissor_key || !c.scissor_valid) {
        C3D_SetScissor(GPU_SCISSOR_NORMAL, 240 - d.scissor[3], 400 - d.scissor[2], 240 - d.scissor[1], 400 - d.scissor[0]);
        c.scissor_key = scissor_key;
        c.scissor_valid = true;
    }

    int depth_key = d.depth_clear ? 0 : d.depth_test ? (d.depth_write ? 1 : 2) : d.depth_write ? 3 : 4;
    if (depth_key != c.depth_key) {
        switch (depth_key) {
            case 0: C3D_DepthTest(true, GPU_ALWAYS, GPU_WRITE_DEPTH); break;
            case 1: C3D_DepthTest(true, GPU_LEQUAL, GPU_WRITE_ALL); break;
            case 2: C3D_DepthTest(true, GPU_LEQUAL, GPU_WRITE_COLOR); break;
            case 3: C3D_DepthTest(true, GPU_ALWAYS, GPU_WRITE_ALL); break;
            default: C3D_DepthTest(false, GPU_ALWAYS, GPU_WRITE_COLOR); break;
        }
        c.depth_key = depth_key;
    }
}

} // namespace

extern "C" void n64_top_init(void) {
    top_target = C3D_RenderTargetCreate(240, 400, GPU_RB_RGBA8, GPU_RB_DEPTH24_STENCIL8);
    C3D_RenderTargetSetOutput(top_target, GFX_TOP, GFX_LEFT, display_transfer_flags);
    top_target_right = C3D_RenderTargetCreate(240, 400, GPU_RB_RGBA8, GPU_RB_DEPTH24_STENCIL8);
    C3D_RenderTargetSetOutput(top_target_right, GFX_TOP, GFX_RIGHT, display_transfer_flags);

    shader_dvlb = DVLB_ParseFile((u32*)n64_shbin, n64_shbin_size);
    shaderProgramInit(&program);
    shaderProgramSetVsh(&program, &shader_dvlb->DVLE[0]);
    stereo_uniform = shaderInstanceGetUniformLocation(program.vertexShader, "stereo");
    stereo_conv_uniform = shaderInstanceGetUniformLocation(program.vertexShader, "stereo_conv");

    AttrInfo_Init(&attr_info);
    AttrInfo_AddLoader(&attr_info, 0, GPU_FLOAT, 4);         // position
    AttrInfo_AddLoader(&attr_info, 1, GPU_FLOAT, 2);         // uv0
    AttrInfo_AddLoader(&attr_info, 2, GPU_FLOAT, 2);         // uv1
    AttrInfo_AddLoader(&attr_info, 3, GPU_UNSIGNED_BYTE, 4); // color

    for (int i = 0; i < 2; i++) {
        vbo_alloc[i] = linearMemAlign(vbo_bytes + 2 * page_size, page_size);
        vbo[i] = reinterpret_cast<GpuVertex*>(static_cast<u8*>(vbo_alloc[i]) + page_size);
    }

    C3D_TexInit(&white_tex, 8, 8, GPU_RGBA8);
    std::vector<u32> white(64, 0xFFFFFFFF);
    C3D_TexUpload(&white_tex, white.data());
    C3D_TexSetFilter(&white_tex, GPU_NEAREST, GPU_NEAREST);

    if (C3D_TexInit(&title_credit_tex, 128, 16, GPU_RGBA8)) {
        memcpy(title_credit_tex.data, title_credit_texels, sizeof(title_credit_texels)); // stored tiled already
        C3D_TexFlush(&title_credit_tex);
        C3D_TexSetFilter(&title_credit_tex, GPU_NEAREST, GPU_NEAREST);
        title_credit_ready = true;
    }
}

// The last frame that drew each HUD part (index = region): the bottom screen keeps showing a part
// while the game hides its HUD (cutscenes, dialogue).
static std::shared_ptr<FrameData> overlay_source[4];

static bool force_redraw;
extern "C" void n64_top_redraw(void) { force_redraw = true; }
extern "C" C3D_RenderTarget* n64_top_target(void) { return top_target; }

// "Dankey Kong 2026" on the title screen: drawn after a frame that drew the game's second copyright
// line, ending where the first line ends (x 322) in that line's row (y 210).
extern "C" void n64_top_draw_title_credit(void) {
    if (!title_credit_ready || !title_credit_shown) return;
    C2D_Prepare();
    Tex3DS_SubTexture sub = { TITLE_CREDIT_W, 16, 0.0f, 1.0f, TITLE_CREDIT_W / 128.0f, 0.0f };
    C2D_Image image = { &title_credit_tex, &sub };
    for (C3D_RenderTarget* t : { top_target, stereo_separation > 0.0f ? top_target_right : nullptr }) {
        if (!t) continue;
        C2D_SceneBegin(t);
        C3D_DepthTest(false, GPU_ALWAYS, GPU_WRITE_COLOR); // over the game's depth, whatever it holds
        C2D_DrawImageAt(image, 323 - TITLE_CREDIT_W, 210, 0.5f, nullptr, 1.0f, 1.0f);
        C2D_Flush();
    }
    C3D_DepthTest(true, GPU_GREATER, GPU_WRITE_ALL);
}

// Stereoscopic 3D (main.c, from the 3D slider): 0 turns it off. The screen's 3D mode follows, and a
// change redraws the frame on screen.
extern "C" void n64_top_set_stereo(float separation) {
    bool was = stereo_separation > 0.0f, now = separation > 0.0f;
    if (now != was) gfxSet3D(now);
    if (separation != stereo_separation) force_redraw = true;
    stereo_separation = separation;
}

extern "C" C3D_RenderTarget* n64_top_target_right(void) { return stereo_separation > 0.0f ? top_target_right : nullptr; }

// The vertex shader's stereo shift for the draws that follow: 0 flat (2D, and the bottom screen),
// 1 per-vertex depth (3D), 2 background (as far as can be, stretched to cover the edges).
static void set_stereo(int mode, float eye) {
    if (stereo_uniform < 0) return;
    if (mode == 1) C3D_FVUnifSet(GPU_VERTEX_SHADER, stereo_uniform, eye, 0.0f, 1.0f, -eye);
    else if (mode == 2) C3D_FVUnifSet(GPU_VERTEX_SHADER, stereo_uniform, 0.0f, eye, 1.0f + std::fabs(eye), 0.0f);
    else C3D_FVUnifSet(GPU_VERTEX_SHADER, stereo_uniform, 0.0f, 0.0f, 1.0f, 0.0f);
    if (stereo_conv_uniform >= 0) C3D_FVUnifSet(GPU_VERTEX_SHADER, stereo_conv_uniform, stereo_convergence, 2.0f, 0.0f, 0.0f);
}

// Draws the current frame (its vertices already in `buf`, `count` of them) into the current render
// target, as one eye sees it (eye: the separation, negative for the right eye; 0 = no 3D).
static void draw_frame(GpuVertex* buf, size_t count, float eye) {
    C3D_BindProgram(&program);
    C3D_SetAttrInfo(&attr_info);
    C3D_BufInfo* bi = C3D_GetBufInfo();
    BufInfo_Init(bi);
    BufInfo_Add(bi, buf, sizeof(GpuVertex), 4, 0x3210);
    C3D_CullFace(GPU_CULL_NONE);
    reset_state_cache();

    // Stereo shift per draw: 3D draws (perspective, w != 1) by their depth; 2D (HUD, menus, text,
    // fades, w = 1) and depth clears stay on the screen's plane. 2D drawn before a frame's first 3D
    // draw (the sky tiles, the narration's sea) is its background: as far as can be, and stretched by
    // as much as it moves, so neither the 4:3 picture nor the widescreen one shows an uncovered edge.
    auto is_3d = [&](const DrawCmd& d) { return !d.depth_clear && std::fabs(buf[d.first_vertex].pos[3] - 1.0f) > 0.001f; };
    const auto& draws = current_frame->draws;
    size_t first_3d = draws.size();
    if (eye != 0.0f) {
        for (size_t i = 0; i < draws.size(); i++) {
            const DrawCmd& d = draws[i];
            if (d.vertex_count && d.first_vertex + d.vertex_count <= count && is_3d(d)) {
                first_3d = i;
                break;
            }
        }
    }
    int stereo_state = -1;
    set_stereo(0, 0.0f);
    stereo_state = 0;

    title_credit_shown = false;
    for (size_t i = 0; i < draws.size(); i++) {
        const DrawCmd& d = draws[i];
        if (d.vertex_count == 0 || d.first_vertex + d.vertex_count > count) continue;
        setup_draw_state(d);
        if (eye != 0.0f) {
            int want = is_3d(d) ? 1 : i < first_3d && first_3d < draws.size() ? 2 : 0;
            if (want != stereo_state) {
                set_stereo(want, eye);
                stereo_state = want;
            }
        }
        stat_draws++;
        C3D_DrawArrays(GPU_TRIANGLES, d.first_vertex, d.vertex_count);
        // The title screen's second copyright line (CI4, 159x16, from 0x27F530).
        const TexImage* img = d.tex[0].image.get();
        if (img && img->src == 0x27F530 && img->src_w == 159 && img->fmt == 2) title_credit_shown = true;
    }
    set_stereo(0, 0.0f); // the bottom-screen HUD parts use the same shader
}

// Development: the spread of 3D depths (clip w) near the middle of the picture, where Mega Man
// usually is, logged now and then while 3D is on - for choosing stereo_convergence.
static void log_stereo_depths(const GpuVertex* buf, size_t count) {
    static std::vector<float> ws;
    ws.clear();
    float min_w = 1e9f;
    for (const DrawCmd& d : current_frame->draws) {
        if (d.depth_clear || d.first_vertex + d.vertex_count > count) continue;
        for (uint32_t i = 0; i < d.vertex_count; i++) {
            const GpuVertex& g = buf[d.first_vertex + i];
            float w = g.pos[3];
            if (std::fabs(w - 1.0f) < 0.001f || w <= 1.0f) continue;
            min_w = std::min(min_w, w);
            float x = -g.pos[1] / w, y = g.pos[0] / w;
            if (std::fabs(x) < 0.25f && std::fabs(y) < 0.4f) ws.push_back(w);
        }
    }
    if (ws.empty()) return;
    std::sort(ws.begin(), ws.end());
    auto pct = [&](float p) { return ws[std::min(ws.size() - 1, (size_t)(p * ws.size()))]; };
    fprintf(stderr, "[stereo] w near the middle: p10 %.0f p25 %.0f median %.0f p75 %.0f p90 %.0f; nearest anywhere %.0f\n",
        pct(0.1f), pct(0.25f), pct(0.5f), pct(0.75f), pct(0.9f), min_w);
}

extern "C" bool n64_top_render(bool frozen) {
    bool fresh = false;
    if (!frozen) {
        std::shared_ptr<FrameData> latest = Renderer::take_published_frame();
        if (latest) {
            current_frame = std::move(latest);
            fresh = true;
            bool seen[4] = {};
            for (const DrawCmd& d : current_frame->overlay_draws) {
                if (d.overlay_region > 0 && d.overlay_region < 4 && d.vertex_count > 0) seen[d.overlay_region] = true;
            }
            for (int r = 1; r < 4; r++) {
                if (seen[r]) overlay_source[r] = current_frame;
            }
        }
    }
    frame_number++;
    if (frame_number % 60 == 0) {
        fprintf(stderr, "[perf] backend per 60 frames: %lu texture uploads, %lu palette re-uploads, %lu evictions, %lu draws, cache %u\n",
            stat_uploads, stat_reuploads, stat_evictions, stat_draws, (unsigned)texture_cache.size());
        stat_uploads = stat_reuploads = stat_evictions = stat_draws = 0;
    }

    // The top screen keeps showing what was last drawn on it (citro3d only presents render targets
    // drawn to in the current frame), so redraw only when the game has finished a new frame. The UI
    // loop runs faster than the game, and redrawing an unchanged N64 frame cost ~15 ms each time.
    static bool drawn_once;
    if (force_redraw) {
        force_redraw = false;
        drawn_once = false; // the credits covered the top screen: draw the last frame again
    }
    if (!fresh && drawn_once) return false;
    drawn_once = true;

    extern volatile uint32_t n64_isolate_hi; // development capture: magenta background (n64_renderer.cpp)
    u32 clear = n64_isolate_hi ? 0xFF00FFFF : 0x000000FF;
    C3D_RenderTargetClear(top_target, C3D_CLEAR_ALL, clear, 0x00FFFFFF);
    if (stereo_separation > 0.0f) C3D_RenderTargetClear(top_target_right, C3D_CLEAR_ALL, clear, 0x00FFFFFF);
    C3D_FrameDrawOn(top_target);
    if (!current_frame || current_frame->vertices.empty()) return true;

    size_t count = std::min(current_frame->vertices.size(), vbo_capacity);
    GpuVertex* buf = vbo[vbo_index];
    vbo_index ^= 1;
    memcpy(buf, current_frame->vertices.data(), count * sizeof(GpuVertex));
    GSPGPU_FlushDataCache(buf, count * sizeof(GpuVertex));

    // Left eye: far things shift left (the target's clip y is the screen's x, negated); the right
    // eye the other way, from the same vertices.
    draw_frame(buf, count, stereo_separation);
    if (stereo_separation > 0.0f) {
        C3D_FrameDrawOn(top_target_right);
        draw_frame(buf, count, -stereo_separation);
        static u32 logged;
        if (frame_number - logged >= 300) {
            logged = frame_number;
            log_stereo_depths(buf, count);
        }
    }

    // Leave state the way citro2d expects for the bottom screen (C2D_Prepare doesn't reset these).
    C3D_AlphaBlend(GPU_BLEND_ADD, GPU_BLEND_ADD, GPU_SRC_ALPHA, GPU_ONE_MINUS_SRC_ALPHA, GPU_SRC_ALPHA, GPU_ONE_MINUS_SRC_ALPHA);
    C3D_CullFace(GPU_CULL_BACK_CCW);
    C3D_SetScissor(GPU_SCISSOR_DISABLE, 0, 0, 0, 0);
    C3D_AlphaTest(false, GPU_ALWAYS, 0);
    C3D_DepthTest(true, GPU_GREATER, GPU_WRITE_ALL);
    C3D_TexEnvBufUpdate(C3D_Both, 0);
    // Not nullptr: citro3d dereferences bound textures on the next draw (citro2d's bottom screen).
    C3D_TexBind(1, &white_tex);
    return true;
}

// Draws a HUD part diverted from the top screen (FrameData::overlay_draws, region 1 life,
// 2 weapon energy, 3 minimap) into the current render target - the bottom screen, inside a citro2d scene.
// The gauge's top-screen pixel area starting at (src_x, src_y) is placed at (dst_x, dst_y) on the
// 320x240 bottom screen, scaled by `scale`. Returns false if the frame has no such gauge.
extern "C" bool n64_bottom_overlay(int region, float src_x, float src_y, float dst_x, float dst_y, float scale);

// A gauge placed by where it actually is rather than where it usually sits: its bottom-left corner
// goes to (dst_x, dst_bottom), shrunk if needed to fit max_w x max_h. When a game is loaded the game
// slides its HUD in from the screen edge, and the fixed placement carried that slide - and parts of
// the gauges - out of their box on the bottom screen. A taller life gauge (more max life) grows
// upwards from the same bottom.
extern "C" bool n64_bottom_overlay_fit(int region, float dst_x, float dst_bottom, float max_w, float max_h) {
    if (region < 1 || region > 3 || !overlay_source[region]) return false;
    const FrameData& f = *overlay_source[region];
    float x0 = 1e9f, y0 = 1e9f, x1 = -1e9f, y1 = -1e9f;
    for (const DrawCmd& d : f.overlay_draws) {
        if (d.overlay_region != region) continue;
        for (uint32_t i = 0; i < d.vertex_count; i++) {
            const GpuVertex& g = f.overlay_vertices[d.first_vertex + i];
            float tx = (-g.pos[1] / g.pos[3] + 1.0f) * 200.0f, ty = (1.0f - g.pos[0] / g.pos[3]) * 120.0f;
            x0 = std::min(x0, tx); x1 = std::max(x1, tx); y0 = std::min(y0, ty); y1 = std::max(y1, ty);
        }
    }
    if (x1 <= x0 || y1 <= y0) return false;
    float scale = std::min({ 1.0f, max_w / (x1 - x0), max_h / (y1 - y0) });
    // Whole pixels, so the gauge's pixel art stays crisp.
    return n64_bottom_overlay(region, x0, y1, floorf(dst_x), floorf(dst_bottom), scale);
}

extern "C" bool n64_bottom_overlay(int region, float src_x, float src_y, float dst_x, float dst_y, float scale) {
    if (region < 1 || region > 3 || !overlay_source[region]) return false;
    const FrameData& f = *overlay_source[region];
    // Vertices are re-uploaded each UI frame into a small buffer; C3D_FRAME_SYNCDRAW makes the
    // previous frame's use of it finish first, and each call this frame takes the next part.
    constexpr size_t overlay_capacity = 4096;
    static GpuVertex* buf = static_cast<GpuVertex*>(linearAlloc(overlay_capacity * sizeof(GpuVertex)));
    static u32 buf_frame = ~0u;
    static size_t used = 0;
    if (buf_frame != frame_number) {
        buf_frame = frame_number;
        used = 0;
    }
    bool any = false;
    for (const DrawCmd& d : f.overlay_draws) any |= d.overlay_region == region && d.vertex_count > 0;
    if (!any || !buf) return false;
    {   // Development: log the gauge's extent in top-screen pixels now and then.
        static u32 logged_frame[4];
        if (region > 0 && region < 4 && frame_number - logged_frame[region] > 600) {
            logged_frame[region] = frame_number;
            float x0 = 1e9f, y0 = 1e9f, x1 = -1e9f, y1 = -1e9f;
            for (const DrawCmd& d : f.overlay_draws) {
                if (d.overlay_region != region) continue;
                for (uint32_t i = 0; i < d.vertex_count; i++) {
                    const GpuVertex& g = f.overlay_vertices[d.first_vertex + i];
                    float tx = (-g.pos[1] / g.pos[3] + 1.0f) * 200.0f, ty = (1.0f - g.pos[0] / g.pos[3]) * 120.0f;
                    x0 = std::min(x0, tx); x1 = std::max(x1, tx); y0 = std::min(y0, ty); y1 = std::max(y1, ty);
                }
            }
            fprintf(stderr, "[hud] part %d spans x %.0f-%.0f y %.0f-%.0f (%u draws)\n", region, x0, x1, y0, y1, (unsigned)f.overlay_draws.size());
        }
    }

    C2D_Flush(); // keep citro2d's queued drawing in order before switching shaders
    C3D_BindProgram(&program);
    C3D_SetAttrInfo(&attr_info);
    set_stereo(0, 0.0f);
    C3D_CullFace(GPU_CULL_NONE);
    reset_state_cache();
    size_t start = used;
    for (const DrawCmd& d : f.overlay_draws) {
        if (d.overlay_region != region || d.vertex_count == 0) continue;
        if (used + d.vertex_count > overlay_capacity) break;
        size_t first = used;
        for (uint32_t i = 0; i < d.vertex_count; i++) {
            GpuVertex g = f.overlay_vertices[d.first_vertex + i];
            // Top-screen clip space (portrait: pos0 = landscape y, pos1 = -landscape x) -> pixels,
            // placed on the bottom screen, back to its clip space (same portrait convention).
            float tx = (-g.pos[1] / g.pos[3] + 1.0f) * 200.0f, ty = (1.0f - g.pos[0] / g.pos[3]) * 120.0f;
            float bx = dst_x + (tx - src_x) * scale, by = dst_y + (ty - src_y) * scale;
            g.pos[0] = 1.0f - by / 120.0f;
            g.pos[1] = -(bx / 160.0f - 1.0f);
            g.pos[2] = 0.0f;
            g.pos[3] = 1.0f;
            buf[used++] = g;
        }
        DrawCmd dd = d;
        dd.scissor[0] = 0; dd.scissor[1] = 0; dd.scissor[2] = 400; dd.scissor[3] = 240; // no clipping
        dd.depth_test = dd.depth_write = false;
        C3D_BufInfo* bi = C3D_GetBufInfo();
        BufInfo_Init(bi);
        BufInfo_Add(bi, buf + first, sizeof(GpuVertex), 4, 0x3210);
        setup_draw_state(dd);
        C3D_DrawArrays(GPU_TRIANGLES, 0, d.vertex_count);
    }
    GSPGPU_FlushDataCache(buf + start, (used - start) * sizeof(GpuVertex));

    // Leave state the way citro2d expects (as at the end of n64_top_render).
    C3D_AlphaBlend(GPU_BLEND_ADD, GPU_BLEND_ADD, GPU_SRC_ALPHA, GPU_ONE_MINUS_SRC_ALPHA, GPU_SRC_ALPHA, GPU_ONE_MINUS_SRC_ALPHA);
    C3D_CullFace(GPU_CULL_BACK_CCW);
    C3D_SetScissor(GPU_SCISSOR_DISABLE, 0, 0, 0, 0);
    C3D_AlphaTest(false, GPU_ALWAYS, 0);
    C3D_DepthTest(true, GPU_GREATER, GPU_WRITE_ALL);
    C3D_TexEnvBufUpdate(C3D_Both, 0);
    C3D_TexBind(1, &white_tex);
    C2D_Prepare();
    return true;
}

extern "C" void n64_top_exit(void) {
    for (auto& [key, ct] : texture_cache) {
        C3D_TexDelete(&ct->tex);
        delete ct;
    }
    texture_cache.clear();
    C3D_TexDelete(&white_tex);
    for (auto& buf : vbo_alloc) linearFree(buf);
    shaderProgramFree(&program);
    DVLB_Free(shader_dvlb);
    C3D_RenderTargetDelete(top_target);
    C3D_RenderTargetDelete(top_target_right);
}

extern "C" void n64_top_stats(unsigned* draws, unsigned* vertices) {
    *draws = current_frame ? (unsigned)current_frame->draws.size() : 0;
    *vertices = current_frame ? (unsigned)current_frame->vertices.size() : 0;
}

extern "C" void n64_top_dump_current(void) {
    if (!current_frame) return;
    const FrameData& f = *current_frame;
    fprintf(stderr, "[shown] fb=0x%06X draws=%u verts=%u\n", (unsigned)f.fb_address, (unsigned)f.draws.size(), (unsigned)f.vertices.size());
    for (const DrawCmd& d : f.overlay_draws) { // HUD parts moved to the bottom screen
        fprintf(stderr, "[overlay] region %d n=%lu tex=%dx%d src=%06X prim=%02X%02X%02X%02X\n", d.overlay_region, (unsigned long)d.vertex_count,
            d.tex[0].image ? d.tex[0].image->width : 0, d.tex[0].image ? d.tex[0].image->height : 0,
            d.tex[0].image ? (unsigned)d.tex[0].image->src : 0u, d.prim[0], d.prim[1], d.prim[2], d.prim[3]);
    }
    int n = 0;
    for (const DrawCmd& d : f.draws) {
        if (n++ >= 600) break;
        const GpuVertex& v = f.vertices[d.first_vertex];
        float ex0 = 9, ex1 = -9, ey0 = 9, ey1 = -9; // screen extent (landscape NDC: x -1..1, y up)
        for (uint32_t i = 0; i < d.vertex_count; i++) {
            const GpuVertex& g = f.vertices[d.first_vertex + i];
            if (g.pos[3] <= 0) continue;
            float x = -g.pos[1] / g.pos[3], y = g.pos[0] / g.pos[3];
            ex0 = std::min(ex0, x); ex1 = std::max(ex1, x); ey0 = std::min(ey0, y); ey1 = std::max(ey1, y);
        }
        fprintf(stderr, "[extent] %3d x %.2f..%.2f y %.2f..%.2f\n", n, ex0, ex1, ey0, ey1);
        fprintf(stderr, "[shown] %3d n=%-4lu %s%s%s cc=%d,%d,%d,%d/%d,%d,%d,%d cc2=%d,%d,%d,%d/%d,%d,%d,%d tex=%dx%d f%d/s%d op%d%% L%d prim=%02X%02X%02X%02X env=%02X%02X%02X%02X bl=%d om=%08lX gm=%06lX at=%d/%d zt=%d zw=%d zc=%d sc=%d,%d,%d,%d v0=(%.2f %.2f %.3f %.2f) c=%02X%02X%02X%02X src=%06X\n",
            n, d.vertex_count, d.copy_mode ? "C" : "", d.fill_mode ? "F" : "", d.two_cycle ? "2" : "1",
            d.cycles[0].rgb[0], d.cycles[0].rgb[1], d.cycles[0].rgb[2], d.cycles[0].rgb[3],
            d.cycles[0].alpha[0], d.cycles[0].alpha[1], d.cycles[0].alpha[2], d.cycles[0].alpha[3],
            d.cycles[1].rgb[0], d.cycles[1].rgb[1], d.cycles[1].rgb[2], d.cycles[1].rgb[3],
            d.cycles[1].alpha[0], d.cycles[1].alpha[1], d.cycles[1].alpha[2], d.cycles[1].alpha[3],
            d.tex[0].image ? d.tex[0].image->width : 0, d.tex[0].image ? d.tex[0].image->height : 0,
            d.tex[0].image ? d.tex[0].image->fmt : -1, d.tex[0].image ? d.tex[0].image->siz : -1,
            d.tex[0].image ? d.tex[0].image->opaque_pct : -1,
            d.tex[0].image ? d.tex[0].image->mean_luma : -1,
            d.prim[0], d.prim[1], d.prim[2], d.prim[3], d.env[0], d.env[1], d.env[2], d.env[3],
            (int)d.blend, d.other_mode_l, (unsigned long)d.geometry_mode, d.alpha_test, d.alpha_ref, d.depth_test, d.depth_write, d.depth_clear,
            d.scissor[0], d.scissor[1], d.scissor[2], d.scissor[3],
            v.pos[0], v.pos[1], v.pos[2], v.pos[3], v.color[0], v.color[1], v.color[2], v.color[3],
            d.tex[0].image ? (unsigned)d.tex[0].image->src : 0u);
    }
}

// Development: write every texture used by the frame currently shown to `dir` as raw RGBA8
// (top row first, unpadded size), named by draw count, size, RDRAM source and N64 format.
extern "C" void n64_top_dump_textures(const char* dir) {
    if (!current_frame) return;
    std::unordered_map<const TexImage*, unsigned> uses;
    std::vector<const TexImage*> order;
    for (const DrawCmd& d : current_frame->draws) {
        const TexImage* img = d.tex[0].image.get();
        if (!img) continue;
        if (uses[img]++ == 0) order.push_back(img);
    }
    for (const TexImage* img : order) {
        char path[192];
        snprintf(path, sizeof(path), "%s/tex_%06X_%ux%u_f%us%u_x%u.rgba", dir, (unsigned)img->src,
            (unsigned)img->src_w, (unsigned)img->src_h, (unsigned)img->fmt, (unsigned)img->siz, uses[img]);
        FILE* f = fopen(path, "wb");
        if (!f) continue;
        for (uint32_t y = 0; y < img->src_h; y++) {
            for (uint32_t x = 0; x < img->src_w; x++) {
                // Inverse of n64_renderer.cpp's tiled_offset (rows stored bottom first).
                uint32_t ty = img->height - 1 - y;
                uint32_t tile = (ty >> 3) * (img->width >> 3) + (x >> 3);
                uint32_t morton = (x & 1) | ((ty & 1) << 1) | ((x & 2) << 1) | ((ty & 2) << 2) | ((x & 4) << 2) | ((ty & 4) << 3);
                uint32_t t = img->texels[tile * 64 + morton];
                uint8_t px[4] = { (uint8_t)(t >> 24), (uint8_t)(t >> 16), (uint8_t)(t >> 8), (uint8_t)t };
                fwrite(px, 1, 4, f);
            }
        }
        fclose(f);
    }
    fprintf(stderr, "[tex] dumped %u textures to %s\n", (unsigned)order.size(), dir);
}
