// Mega Man 64 game glue for the 3DS runtime: game entry, overlay table, game-specific hooks,
// libultra stubs, and the platform callbacks (renderer/audio/input are placeholders until Phases 4–5).

#include "mm64_ext.h"
#include <3ds.h>

#include <algorithm>
#include <atomic>
#include <chrono>
#include <cstdio>
#include <cstdlib>
#include <exception>
#include <memory>
#include <mutex>
#include <string>
#include <unordered_map>
#include <vector>

#include "recomp.h"
#include "funcs.h"
#include "librecomp/overlays.hpp"
#include "librecomp/rsp.hpp"
#include "ultramodern/ultramodern.hpp"
#include "recomp_3ds.hpp"
#include "n64_renderer.hpp"
#include "audio_3ds.hpp"
#include "mm64_paths.h"
#include "input_3ds.hpp"

#include "mm64_game.h"
#include "audio_hle.hpp"
#include "trace.h"

#define ARRLEN(x) (sizeof(x) / sizeof((x)[0]))

extern "C" void recomp_entrypoint(uint8_t* rdram, recomp_context* ctx);
gpr get_entrypoint_address();
RspExitReason aspMain(uint8_t* rdram, uint32_t ucode_addr);

#include "recomp_overlays.inl"

static std::atomic<unsigned> display_lists_seen{0};
static std::atomic<unsigned> display_lists_done{0};
static std::atomic<unsigned> frames_presented{0};
static std::atomic<unsigned> audio_tasks_run{0};

// --- Game hooks referenced by recomp/us.rev1.3ds.toml ----------------------------------------

// Overlay_Loader hook: register the recompiled functions for the overlay the game just loaded.
extern "C" void recomp_load_overlays(uint8_t* rdram, recomp_context* ctx) {
    uint32_t rom = ctx->r18;
    int32_t ram = ctx->r16;
    uint32_t size = ctx->r17;
    load_overlays(rom, ram, size);
}

// --- Renderer: F3DEX2 interpreter on the graphics thread (source/render/n64_renderer.cpp) -------
// Frames it publishes are drawn on the top screen by the main thread (c3d_backend.cpp).

extern "C" void n64_renderer_profile_dump(unsigned dl_count); // n64_renderer.cpp
extern "C" void mm64_patch_font(uint8_t* rdram); // mm64_patches.cpp: C-Down icon drawn as Y

class N64RendererContext : public ultramodern::renderer::RendererContext {
    n64r::Renderer renderer;
public:
    explicit N64RendererContext(uint8_t* rdram) : renderer(rdram) {
        setup_result = ultramodern::renderer::SetupResult::Success;
        chosen_api = ultramodern::renderer::GraphicsApi::Auto;
    }
    bool valid() override { return true; }
    bool update_config(const ultramodern::renderer::GraphicsConfig&, const ultramodern::renderer::GraphicsConfig&) override { return false; }
    void enable_instant_present() override {}
    void send_dl(const OSTask* task) override {
        display_lists_seen++;
        auto start = std::chrono::steady_clock::now();
        renderer.run_display_list((uint32_t)task->t.data_ptr);
        long long us = std::chrono::duration_cast<std::chrono::microseconds>(std::chrono::steady_clock::now() - start).count();
        dl_time_us += us;
        display_lists_done++;
        if (us > 100000) {
            fprintf(stderr, "[perf] slow display list #%u: %lld ms\n", display_lists_seen.load(), us / 1000);
        }
        if (display_lists_seen % 60 == 0) {
            fprintf(stderr, "[perf] display list interpretation: avg %lld us over 60 DLs\n", dl_time_us / 60);
            n64_renderer_profile_dump(60);
            dl_time_us = 0;
        }
    }
    long long dl_time_us = 0;
    void send_dummy_workload(uint32_t) override {}
    void update_screen() override {
        frames_presented++;
        renderer.on_vi(ultramodern::renderer::get_vi_regs()->VI_ORIGIN_REG);
    }
    void shutdown() override {}
    uint32_t get_display_framerate() const override { return 60; }
    float get_resolution_scale() const override { return 1.0f; }
};

static std::unique_ptr<ultramodern::renderer::RendererContext> create_render_context(uint8_t* rdram, ultramodern::renderer::WindowHandle, bool) {
    return std::make_unique<N64RendererContext>(rdram);
}

// --- RSP: audio tasks run the recompiled aspMain microcode on the CPU -------------------------

// Development: total time spent running aspMain, to see whether audio keeps up with real time.
static std::atomic<uint64_t> audio_rsp_ticks{0};
static std::atomic<bool> audio_running; // sampled by the profiler thread

static uint32_t audio_task_data, audio_task_size; // set by get_rsp_microcode for the timed run

// Audio tasks run natively (audio_hle.cpp). With MM64_AUDIO_COMPARE set, the first tasks also run
// the recompiled microcode and log any difference from it.
#ifndef MM64_AUDIO_COMPARE
#define MM64_AUDIO_COMPARE 0
#endif
static unsigned audio_compare_left = MM64_AUDIO_COMPARE;

static RspExitReason timed_aspMain(uint8_t* rdram, uint32_t ucode_addr) {
    uint64_t start = svcGetSystemTick();
    audio_running = true;
    RspExitReason ret;
    if (audio_compare_left > 0) {
        audio_compare_left--;
        ret = audio_hle_compare(rdram, audio_task_data, audio_task_size, aspMain, ucode_addr);
    } else {
        ret = audio_hle_run(rdram, audio_task_data, audio_task_size);
    }
    uint64_t ticks = svcGetSystemTick() - start;
    audio_running = false;
    audio_rsp_ticks += ticks;
    static unsigned slow_logged = 0;
    if (ticks > SYSCLOCK_ARM11 / 1000 * 30 && slow_logged < 6) {
        slow_logged++;
        unsigned counts[32] = {};
        for (uint32_t off = 0; off + 8 <= audio_task_size; off += 8) {
            counts[(MEM_W(off, (int32_t)audio_task_data) >> 24) & 31]++;
        }
        fprintf(stderr, "[audio] slow task %u ms, alist %u bytes, ops:", (unsigned)(ticks / (SYSCLOCK_ARM11 / 1000)), (unsigned)audio_task_size);
        for (int i = 0; i < 32; i++) if (counts[i]) fprintf(stderr, " %02X:%u", i, counts[i]);
        fprintf(stderr, "\n");
    }
    return ret;
}

static RspUcodeFunc* get_rsp_microcode(const OSTask* task) {
    if (task->t.type == M_AUDTASK) {
        audio_tasks_run++;
        audio_task_data = (uint32_t)task->t.data_ptr;
        audio_task_size = task->t.data_size;
        return timed_aspMain;
    }
    fprintf(stderr, "Unknown RSP task type %u\n", (unsigned)task->t.type);
    return nullptr;
}

// --- Input (input_3ds.cpp; the main thread publishes a snapshot each frame) -----------------------

static void poll_input() {}
static void set_rumble(int, bool) {} // no rumble motor on 3DS
static ultramodern::input::connected_device_info_t get_connected_device_info(int controller_num) {
    if (controller_num == 0) {
        // Report a Rumble Pak like the PC port does: with "no pak" the game keeps re-checking the
        // controller for ~40 s (on a black screen) before giving up.
        return { ultramodern::input::Device::Controller, ultramodern::input::Pak::RumblePak };
    }
    return { ultramodern::input::Device::None, ultramodern::input::Pak::None };
}

static void message_box(const char* msg) {
    fprintf(stderr, "[runtime] %s\n", msg);
    printf("\n[runtime] %s\n", msg);
    fflush(stderr); // the log is buffered (main.c)
}

// Log uncaught C++ exceptions (stderr goes to sdmc:/3ds/mm64/runtime.log) before aborting.
static void on_terminate() {
    std::exception_ptr ex = std::current_exception();
    try {
        if (ex) std::rethrow_exception(ex);
        fprintf(stderr, "[terminate] called without an active exception\n");
    } catch (const std::exception& e) {
        fprintf(stderr, "[terminate] uncaught exception: %s\n", e.what());
    } catch (...) {
        fprintf(stderr, "[terminate] uncaught non-std exception\n");
    }
    fflush(stderr); // the log is buffered (main.c)
    abort();
}

// --- Boot entry point used by main.c ------------------------------------------------------------

static void register_overlays() {
    recomp::overlays::overlay_section_table_data_t sections {
        .code_sections = section_table,
        .num_code_sections = ARRLEN(section_table),
        .total_num_sections = num_sections,
    };
    recomp::overlays::overlays_by_index_t overlays {
        .table = overlay_sections_by_index,
        .len = ARRLEN(overlay_sections_by_index),
    };
    recomp::overlays::register_overlays(sections, overlays);
}

extern "C" Mm64BootResult mm64_boot(const char* rom_path, const char* data_path) {
    std::set_terminate(on_terminate);
    fprintf(stderr, "[boot] registering overlays\n");
    register_overlays();
    fprintf(stderr, "[boot] starting runtime\n");

    recomp3ds::BootConfig cfg{};
    cfg.rom_path = rom_path;
    cfg.data_path = data_path;
    cfg.game.internal_name = "MEGA MAN 64";
    cfg.game.display_name = "Mega Man 64";
    cfg.game.game_id = u8"megaman.n64.us.1.0"; // same save identity as the PC/mobile ports
    cfg.game.mod_game_id = "mm";
    cfg.game.save_type = recomp::SaveType::Flashram;
    cfg.game.entrypoint_address = get_entrypoint_address();
    cfg.game.entrypoint = recomp_entrypoint;
    cfg.game.on_init_callback = [](uint8_t* rdram, recomp_context*) { mm64_patch_font(rdram); };
    cfg.rsp_callbacks = { .get_rsp_microcode = get_rsp_microcode };
    cfg.renderer_callbacks = { .create_render_context = create_render_context };
    audio3ds::init();
    cfg.audio_callbacks = { .queue_samples = audio3ds::queue_samples, .get_frames_remaining = audio3ds::get_frames_remaining, .set_frequency = audio3ds::set_frequency };
    cfg.input_callbacks = { .poll_input = poll_input, .get_input = input3ds::get_input, .set_rumble = set_rumble, .get_connected_device_info = get_connected_device_info };
    cfg.error_handling_callbacks = { .message_box = message_box };

    switch (recomp3ds::boot(cfg)) {
        case recomp3ds::BootResult::Started:        return MM64_BOOT_STARTED;
        case recomp3ds::BootResult::RomNotFound:    return MM64_BOOT_ROM_NOT_FOUND;
        case recomp3ds::BootResult::RomWrongFormat: return MM64_BOOT_ROM_WRONG_FORMAT;
        case recomp3ds::BootResult::OutOfMemory:    return MM64_BOOT_OUT_OF_MEMORY;
    }
    return MM64_BOOT_OUT_OF_MEMORY;
}

extern "C" void mm64_set_paused(bool paused) {
    ultramodern::set_game_paused(paused);
    audio3ds::set_paused(paused);
}

extern "C" void mm64_shutdown(void) {
    audio3ds::exit();
}

extern "C" void mm64_get_stats(Mm64Stats* out) {
    out->display_lists = display_lists_seen.load();
    out->display_lists_done = display_lists_done.load();
    out->frames = frames_presented.load();
    out->audio_tasks = audio_tasks_run.load();
    out->audio_rsp_ms = (unsigned)(audio_rsp_ticks.load() / (SYSCLOCK_ARM11 / 1000));
    audio3ds::DebugStats a = audio3ds::debug_stats();
    out->audio_queued_frames = a.queued_frames;
    out->audio_dropped_frames = a.dropped_frames;
    out->audio_peak = a.peak;
    out->audio_playing = a.playing;
}

// --- Function-entry trace (N64Recomp trace_mode, see trace.h) -----------------------------------

extern "C" {
const char* volatile recomp_trace_ring[RECOMP_TRACE_RING];
volatile unsigned recomp_trace_pos;
}

// Sampling profiler (development): every ~1 ms a high-priority thread records which recompiled
// function was entered most recently, if the game ran anything since the last sample.
static std::mutex profile_mutex;
static std::unordered_map<const char*, unsigned> profile_counts;

// What the game core (core 2) was doing at each sample: interpreter phase (n64_renderer.cpp),
// audio microcode, or game code.
extern "C" volatile int n64_gfx_phase;
static unsigned core_samples, gfx_phase_samples[8], audio_samples, game_samples;

static void profiler_thread(void*) {
    unsigned last_pos = 0;
    for (;;) {
        svcSleepThread(1000000);
        unsigned pos = recomp_trace_pos;
        {
            std::lock_guard lock{ profile_mutex };
            core_samples++;
            int phase = n64_gfx_phase;
            if (phase > 0 && phase < 8) gfx_phase_samples[phase]++;
            if (audio_running) audio_samples++;
            if (pos != last_pos) game_samples++;
        }
        if (pos == last_pos) continue;
        last_pos = pos;
        const char* name = recomp_trace_ring[(pos - 1) & (RECOMP_TRACE_RING - 1)];
        if (!name) continue;
        std::lock_guard lock{ profile_mutex };
        profile_counts[name]++;
    }
}

extern "C" void mm64_profile_start(void) {
    threadCreate(profiler_thread, nullptr, 8 * 1024, 0x18, -2, true);
}

extern "C" void mm64_profile_dump(void) {
    std::vector<std::pair<unsigned, const char*>> top;
    {
        std::lock_guard lock{ profile_mutex };
        for (auto& [name, count] : profile_counts) top.push_back({ count, name });
        profile_counts.clear();
    }
    std::sort(top.rbegin(), top.rend());
    {
        std::lock_guard lock{ profile_mutex };
        if (core_samples) {
            auto pct = [](unsigned n) { return n * 100 / core_samples; };
            fprintf(stderr, "[cores] %u samples, %% of time: gfx cmd %u vtx %u tri %u tex-lookup %u tex-decode %u draw-state %u | audio %u | game code active %u\n",
                core_samples, pct(gfx_phase_samples[1]), pct(gfx_phase_samples[2]), pct(gfx_phase_samples[3]),
                pct(gfx_phase_samples[4]), pct(gfx_phase_samples[5]), pct(gfx_phase_samples[6]), pct(audio_samples), pct(game_samples));
        }
        core_samples = audio_samples = game_samples = 0;
        for (unsigned& n : gfx_phase_samples) n = 0;
    }
    fprintf(stderr, "[profile]");
    for (size_t i = 0; i < top.size() && i < 12; i++) fprintf(stderr, " %s:%u", top[i].second, top[i].first);
    fprintf(stderr, "\n");
}

extern "C" uint8_t* mm64_debug_rdram(void) { return recomp3ds::get_rdram(); }

// --- Game state for the bottom screen -------------------------------------------------------------

// The game's text uses its own one-byte glyph codes (found by pattern-searching RAM for the start
// menu's "Use normal items."). Letters run a-n, then o-z one code later; A-T, then U-Z one later.
static char decode_glyph(uint8_t b) {
    if (b <= 0x09) return (char)('0' + b);
    if (b >= 0x15 && b <= 0x28) return (char)('A' + (b - 0x15));
    if (b >= 0x2A && b <= 0x2F) return (char)('U' + (b - 0x2A));
    if (b >= 0x30 && b <= 0x3D) return (char)('a' + (b - 0x30));
    if (b >= 0x3F && b <= 0x4A) return (char)('o' + (b - 0x3F));
    switch (b) {
        case 0x4F: return ' ';
        case 0x52: return '-';
        case 0x5E: return '.';
        default: return '?';
    }
}

// D_801BC438: current stage. The save code copies it into the save file and names it with the
// 13-character location table at 0x800B2BFC that the save screen shows (31 entries).
constexpr uint32_t stage_address = 0x801BC438;
constexpr uint32_t name_table = 0x800B2BFC;
constexpr int name_length = 13, stage_count = 31;

static void area_name(uint8_t* rdram, int area, char* out, size_t size) {
    char name[name_length + 1];
    int len = 0;
    if (area < stage_count) {
        for (int i = 0; i < name_length; i++) {
            name[len++] = decode_glyph(rdram[((name_table + area * name_length + i) & 0x00FFFFFF) ^ 3]);
        }
    }
    while (len > 0 && name[len - 1] == ' ') len--;
    name[len] = '\0';

    if (area == 0) {
        // The table's entry 0 is "No data" (an empty save slot); stage 0 is the prologue.
        snprintf(out, size, "Prologue ruins");
    } else if (len == 0 || strncmp(name, "STAGE", 5) == 0) {
        snprintf(out, size, "Area %d", area); // unnamed placeholder stages
    } else {
        snprintf(out, size, "%s", name);
    }
}

extern "C" bool mm64_get_location(Mm64Location* out) {
    uint8_t* rdram = recomp3ds::get_rdram();
    if (!rdram) return false;
    out->area = rdram[(stage_address & 0x00FFFFFF) ^ 3];
    area_name(rdram, out->area, out->area_name, sizeof(out->area_name));
    return true;
}

extern "C" void mm64_set_surround(bool on) {
    audio3ds::set_surround(on);
}

extern "C" void mm64_audio_status(char* out, unsigned size) {
    audio3ds::status_line(out, size);
}

extern "C" void mm64_ui_sound(int which) {
    audio3ds::play_ui(which);
}

extern "C" void mm64_debug_record_audio(unsigned frames) {
    audio3ds::record(MM64_DATA_PATH "/audio_rec.raw", frames);
}

extern "C" unsigned mm64_debug_vi(void) {
    Mm64Stats s;
    mm64_get_stats(&s);
    return s.frames;
}

extern "C" bool mm64_area_name(int area, char* out, unsigned size) {
    uint8_t* rdram = recomp3ds::get_rdram();
    if (!rdram) return false;
    area_name(rdram, area, out, size);
    return true;
}

// Development: log the name of every area, as the bottom screen would show it.
extern "C" void mm64_debug_log_area_names(void) {
    uint8_t* rdram = recomp3ds::get_rdram();
    if (!rdram) return;
    fprintf(stderr, "[areas]");
    for (int i = 0; i < stage_count; i++) {
        char name[24];
        area_name(rdram, i, name, sizeof(name));
        fprintf(stderr, " %d=%s;", i, name);
    }
    fprintf(stderr, "\n");
}

// D_801BC5B0 hides the HUD (life gauge etc.) while set; the game sets it for cutscenes. It was 1 in
// every cutscene RAM snapshot and 0 in gameplay and the start menu. (D_801BC654, the PC port's
// "current cutscene" pointer, keeps the last script after the cutscene ends, so it can't be used.)
// --- Inventory ----------------------------------------------------------------------------------
// Found by reading the game's code and confirmed by setting values and opening its start menu:
// - Owning item ID n is game event flag 0x500 + n - 4. The flags are a bit array at 0x802055A8,
//   most significant bit first (set by func_8006036C).
// - Item names: pointer table indexed by item ID at 0x800B28B4 (164 entries), strings in the
//   game's glyph code, entries end at 0x91.
// - Zenny: the word at 0x801BC404 (clamped to 999,999 by func_80070E98); the menu shows it x10.
constexpr uint32_t item_flags = 0x802055A8;
constexpr uint32_t item_names = 0x800B28B4;
constexpr uint32_t zenny_address = 0x801BC404;

// Special weapons (IDs 132-145) have their own 16 bits just before the others, at 0x80205640 (flag
// 0x4C0 + ID - 132): bit 0 the Normal Arm, bit 1 the MegaMan Buster (never listed), then Machine
// Buster ... Shining Laser (the GameShark "all special weapons" code writes FFFF there; checked
// bit by bit against the game's own Special Weapons page).
static bool owns_item(uint8_t* rdram, int id) {
    int flag = id >= 132 && id <= 145 ? 0x4C0 + id - 132 : 0x500 + id - 4;
    uint8_t byte = rdram[((item_flags & 0x00FFFFFF) + (flag >> 3)) ^ 3];
    return byte & (0x80 >> (flag & 7));
}

extern "C" int mm64_get_items(Mm64ItemSection section, unsigned char* ids, int max) {
    uint8_t* rdram = recomp3ds::get_rdram();
    if (!rdram) return 0;
    // ID ranges of the start menu's sections; placeholder entries (empty names, "EMPTY",
    // "KEY-ITEM"/"JUNK-ITEM" debug names) are skipped.
    static const int first[] = { 68, 36, 4, 132 };
    static const int last[] = { 128, 65, 35, 145 };
    int count = 0;
    for (int id = first[section]; id <= last[section] && count < max; id++) {
        if (id == 91) continue; // "EMPTY"
        if (id == 132 || id == 133) continue; // the Normal Arm and MegaMan Buster: always there, not special
        if (owns_item(rdram, id)) ids[count++] = (unsigned char)id;
    }
    return count;
}

extern "C" bool mm64_item_name(int id, char* out, unsigned size) {
    uint8_t* rdram = recomp3ds::get_rdram();
    if (!rdram || id < 0 || id >= 164 || size == 0) return false;
    auto byte = [&](uint32_t addr) { return rdram[(addr & 0x00FFFFFF) ^ 3]; };
    uint32_t ptr = (uint32_t)byte(item_names + id * 4) << 24 | (uint32_t)byte(item_names + id * 4 + 1) << 16 |
                   (uint32_t)byte(item_names + id * 4 + 2) << 8 | byte(item_names + id * 4 + 3);
    std::string name;
    bool started = false;
    for (int i = 0; i < 32; i++) {
        uint8_t b = byte(ptr + i);
        if (b == 0x91) break;
        if (b == 0xA0) { name += ' '; i += 2; continue; } // spacing code with two parameter bytes
        if (b == 0x80) { name += " \xCE\xB1"; continue; } // alpha
        if (b == 0x81) { name += " \xCE\xA9"; continue; } // omega
        if (b == 0x00 && !started) continue;              // leading padding
        char c = decode_glyph(b);
        if (c == '?') continue;
        started = true;
        name += c;
    }
    // Collapse doubled spaces and trim.
    std::string clean;
    for (char c : name) {
        if (c == ' ' && (clean.empty() || clean.back() == ' ')) continue;
        clean += c;
    }
    while (!clean.empty() && clean.back() == ' ') clean.pop_back();
    snprintf(out, size, "%s", clean.c_str());
    return !clean.empty();
}

extern "C" bool mm64_get_zenny(unsigned* out) {
    uint8_t* rdram = recomp3ds::get_rdram();
    if (!rdram) return false;
    *out = *reinterpret_cast<uint32_t*>(rdram + (zenny_address & 0x00FFFFFF)) * 10;
    return true;
}

// Gauges, as the game's HUD reads them (func_80049330 life, func_800496C0 weapon energy):
// player struct 0x802049B0: life at +0x6E, max life at +0xB0; equipped weapon slot at +0x170; per
// slot (8 bytes) the weapon ID at +0x4F5 and its energy at +0x4FA; max energy from the slot's
// weapon table (pointer at 0x800B351C + slot * 4, 8-byte entries, max at +2; 0x7FFF = unlimited).
// The energy gauge is shown while the byte at 0x80204B21 is set.
extern "C" bool mm64_get_gauges(Mm64Gauges* out) {
    uint8_t* rdram = recomp3ds::get_rdram();
    if (!rdram) return false;
    auto u8at = [&](uint32_t a) { return rdram[(a & 0x00FFFFFF) ^ 3]; };
    auto s16at = [&](uint32_t a) { return *reinterpret_cast<int16_t*>(rdram + ((a & 0x00FFFFFE) ^ 2)); };
    auto u32at = [&](uint32_t a) { return *reinterpret_cast<uint32_t*>(rdram + (a & 0x00FFFFFC)); };
    constexpr uint32_t player = 0x802049B0;
    out->life = s16at(player + 0x6E);
    out->life_max = s16at(player + 0xB0);
    int slot = (int8_t)u8at(player + 0x170);
    out->weapon_shown = u8at(0x80204B21) != 0 && slot >= 0 && slot < 4;
    out->energy = 0;
    out->energy_max = 0;
    if (out->weapon_shown) {
        uint32_t entry = player + slot * 8;
        int id = (int8_t)u8at(entry + 0x4F5);
        out->energy = s16at(entry + 0x4FA);
        uint32_t table = u32at(0x800B351C + slot * 4);
        out->energy_max = (table >= 0x80000000 && table < 0x80800000 && id >= 0) ? s16at(table + id * 8 + 2) : 0;
    }
    return true;
}

extern "C" bool mm64_in_cutscene(void) {
    uint8_t* rdram = recomp3ds::get_rdram();
    return rdram && rdram[(0x801BC5B0 & 0x00FFFFFF) ^ 3] != 0;
}

// Development: read a 32-bit word of N64 RDRAM (KSEG0 address).
extern "C" unsigned int mm64_debug_peek(unsigned int address) {
    uint8_t* rdram = recomp3ds::get_rdram();
    if (!rdram) return 0;
    return *reinterpret_cast<uint32_t*>(rdram + ((address & 0x00FFFFFF) & ~3u));
}

extern "C" void mm64_trace_dump(void) {
    unsigned pos = recomp_trace_pos;
    fprintf(stderr, "[trace] %u calls, newest last:", pos);
    for (unsigned i = RECOMP_TRACE_RING - 64; i < RECOMP_TRACE_RING; i++) {
        const char* name = recomp_trace_ring[(pos + i) & (RECOMP_TRACE_RING - 1)];
        if (name) fprintf(stderr, " %s", name);
    }
    fprintf(stderr, "\n");
}

// Development: the distinct functions among the most recent `count` calls (oldest first), for
// finding what the game runs for an action (compare a frame with it against one without).
extern "C" void mm64_trace_unique(unsigned count) {
    static const char* seen[4096];
    int n = 0;
    unsigned pos = recomp_trace_pos;
    if (count > RECOMP_TRACE_RING) count = RECOMP_TRACE_RING;
    fprintf(stderr, "[traceset] %u calls:", count);
    for (unsigned i = 0; i < count; i++) {
        const char* name = recomp_trace_ring[(pos - count + i) & (RECOMP_TRACE_RING - 1)];
        if (!name) continue;
        int j = 0;
        while (j < n && seen[j] != name) j++;
        if (j < n) continue;
        if (n < 4096) seen[n++] = name;
        fprintf(stderr, " %s", name);
    }
    fprintf(stderr, "\n");
}

// Scene changes (func_800292E8 override in mm64_patches.cpp). The game's opening is: logo (front end
// 0x8005D240) -> the "In a world covered by endless water..." narration (main loop 0x8003E1B8 with
// area 1) -> title (front end again), and New Game starts the main loop in area 0. Reordered here:
// at boot the narration is skipped the way a player skips it (Start, sent by input_3ds.cpp while
// mm64_boot_skip is set; the top screen stays black meanwhile), and it plays when a new game starts,
// which then continues in area 0 once the narration ends or is skipped. (Restarting the front end
// directly instead sends it on to its attract demo, which hangs.)
constexpr uint32_t scene_front_end = 0x8005D240;
constexpr uint32_t scene_main_loop = 0x8003E1B8;
constexpr uint32_t area_address = 0x1BC438; // area byte, then the room byte
static uint32_t last_scene;
static bool new_game_narration;
static uint8_t new_game_room, new_game_scene_flags;
constexpr uint32_t scene_flags_address = 0x1BC46A; // 0x80 at boot's narration: a scene without the player
extern "C" { volatile bool mm64_scene_bypass; } // set while save states load or the dev warp runs
extern "C" { volatile bool mm64_boot_skip; }    // skipping the boot narration (input_3ds.cpp, renderer)
extern "C" { volatile bool mm64_original_opening; } // development (DATA_PATH/original_opening.txt): no reordering

extern "C" uint32_t mm64_scene_redirect(uint32_t fn) {
    uint8_t* rdram = recomp3ds::get_rdram();
    uint8_t& area = rdram[area_address ^ 3];
    uint8_t& room = rdram[(area_address + 1) ^ 3];
    uint32_t from = last_scene;
    // Bit 0 of the scene flags (+0x82 of the main loop's state at 0x801BC3E8): set by the title's
    // Continue, so the main loop's first step (func_8003E2F0) unpacks the save instead of starting
    // a new game. New Game leaves it clear; both enter the main loop with area 0.
    uint8_t flags = rdram[scene_flags_address ^ 3];
    bool continuing = flags & 1;
    uint32_t to = fn;
    mm64_boot_skip = false;
    if (mm64_scene_bypass || mm64_original_opening) {
        mm64_scene_bypass = false;
        new_game_narration = false;
    } else if (new_game_narration) {
        // The new game's narration is over (or was skipped): start the game itself.
        new_game_narration = false;
        area = 0;
        room = new_game_room;
        rdram[scene_flags_address ^ 3] = new_game_scene_flags;
        to = scene_main_loop;
    } else if (fn == scene_main_loop && from == scene_front_end && continuing) {
        mm64_ext_on_continue(); // the title's Continue: that save's own data
    } else if (fn == scene_main_loop && from == scene_front_end && area == 1) {
        mm64_boot_skip = true; // boot: skip it, on to the title
    } else if (fn == scene_main_loop && from == scene_front_end && area == 0 && !continuing) {
        new_game_narration = true; // New Game: the narration first
        mm64_ext_reset();
        new_game_room = room;
        new_game_scene_flags = rdram[scene_flags_address ^ 3];
        area = 1;
        room = 0;
        rdram[scene_flags_address ^ 3] = 0x80; // as at boot: no Mega Man standing in the narration
    }
    fprintf(stderr, "[scene] restart at %08lX -> %08lX (area %d, flags %02X), %.2f s\n", (unsigned long)fn, (unsigned long)to, area, flags,
        svcGetSystemTick() / (double)SYSCLOCK_ARM11);
    last_scene = to;
    return to;
}

// Mega Man's position: s16 x, z (height), y at 0x802049C4 in the player struct; yaw (4096 per turn)
// at 0x80204A06.
extern "C" bool mm64_get_player(Mm64Player* out) {
    uint8_t* rdram = recomp3ds::get_rdram();
    if (!rdram) return false;
    auto h = [&](uint32_t a) { return (int16_t)(rdram[(a & 0xFFFFFF) ^ 3] << 8 | rdram[((a + 1) & 0xFFFFFF) ^ 3]); };
    out->x = h(0x802049C4);
    out->z = h(0x802049C6);
    out->y = h(0x802049C8);
    out->yaw = h(0x80204A06);
    out->area = rdram[0x1BC438 ^ 3];
    out->room = rdram[0x1BC439 ^ 3];
    return true;
}
