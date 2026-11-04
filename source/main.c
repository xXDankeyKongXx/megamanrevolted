// Mega Man 64 3DS front end.
// Top screen: the game, drawn by the N64 renderer (source/render).
// Bottom screen: menu pages, notes and cutscene art (source/ui, docs/BOTTOM_SCREEN_SPEC.md).
// Controls: Start = pause top screen only, L/R or touch = switch page, Start+Select = exit.

#include <3ds.h>
#include <citro2d.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <sys/stat.h>
#include <malloc.h>
#include <unistd.h>

#include "c3d_backend.h"
#include "mm64_game.h"
#include "mm64_ext.h"
#include "crash_log.h"
#include "dungeon_maps.h"
#include "bottom_ui.h"
#include "mm64_savestate.h"
#include "mm64_paths.h"
#include "mm64_platform.h"
#include "rom_check.h"

#define DATA_PATH MM64_DATA_PATH

#ifdef MM64_O3DS
// Old 3DS build: a smaller GPU-memory heap (the game uses ~11 MB of it) leaves more for the rest.
u32 __ctru_linear_heap_size = 24 * 1024 * 1024;
#endif
extern volatile bool n64_frame_skip; // n64_renderer.cpp
// The ROM packed into the app itself (romfs/rom/, by `make cia-personal`): a personal build needs no
// other files. Shared builds have none; the player's own dump is found on the SD card (rom_check.c).
#define ROMFS_ROM_PATH "romfs:/rom/megaman64.z64"

// Development aid: on scripted test runs (DATA_PATH/autoinput.txt present), write both screens to
// DATA_PATH/screenshot.bmp every few seconds.
#define DEV_SCREENSHOT_INTERVAL 180

// Bottom screen while the ROM is read through the first time (rom_check).
static C3D_RenderTarget* bottom_target;
static void rom_progress(const char* message, int percent) {
    static int shown = -1;
    if (percent == shown) return;
    shown = percent;
    C3D_FrameBegin(C3D_FRAME_SYNCDRAW);
    C2D_TargetClear(bottom_target, C2D_Color32(0x0F, 0x17, 0x2A, 0xFF));
    C2D_SceneBegin(bottom_target);
    bottom_ui_draw_rom_progress(message, percent);
    C3D_FrameEnd(0);
}

static int stereo_test = -1; // DATA_PATH/stereotest.txt present (development; see the main loop)
#ifdef DEV_SCREENSHOT_INTERVAL
static void write_screenshot(const char* path);
#endif

// No usable ROM: say so on both screens until the player leaves (START, or the HOME menu).
static void rom_help(const RomCheck* rom, C3D_RenderTarget* bottom) {
    C3D_RenderTarget* top = n64_top_target();
#ifdef DEV_SCREENSHOT_INTERVAL
    bool test_run = access(DATA_PATH "/autoinput.txt", F_OK) == 0;
    u32 frame = 0;
#endif
    while (aptMainLoop()) {
        hidScanInput();
        if (hidKeysDown() & KEY_START) break;
        C3D_FrameBegin(C3D_FRAME_SYNCDRAW);
        C2D_TargetClear(top, C2D_Color32(0, 0, 0, 0xFF));
        C2D_SceneBegin(top);
        bottom_ui_draw_rom_top(rom->state);
        C2D_TargetClear(bottom, C2D_Color32(0x0F, 0x17, 0x2A, 0xFF));
        C2D_SceneBegin(bottom);
        bottom_ui_draw_rom_help(rom->state, rom->found);
        C3D_FrameEnd(0);
#ifdef DEV_SCREENSHOT_INTERVAL
        if (test_run && ++frame % DEV_SCREENSHOT_INTERVAL == 0) write_screenshot(DATA_PATH "/screenshot.bmp");
#endif
    }
}

#ifdef DEV_SCREENSHOT_INTERVAL
// Writes the top (400x240) and bottom (320x240, centered) screens as one 400x480 24-bit BMP.
// Framebuffers are BGR8, stored rotated: pixel (x, y) is at ((x * 240) + (239 - y)) * 3.
// With DATA_PATH/stereotest.txt the right eye's image takes the bottom screen's place.
static void write_screenshot(const char* path) {
    const int w = 400, h = 480, row = w * 3;
    static u8 image[400 * 480 * 3];
    memset(image, 0, sizeof(image));
    u8* top = gfxGetFramebuffer(GFX_TOP, GFX_LEFT, NULL, NULL);
    u8* bot = gfxGetFramebuffer(GFX_BOTTOM, GFX_LEFT, NULL, NULL);
    for (int y = 0; y < 240; y++) {
        for (int x = 0; x < 400; x++) {
            memcpy(&image[y * row + x * 3], &top[(x * 240 + (239 - y)) * 3], 3);
        }
        if (stereo_test == 1 && n64_top_target_right()) {
            u8* right = gfxGetFramebuffer(GFX_TOP, GFX_RIGHT, NULL, NULL);
            for (int x = 0; x < 400; x++) memcpy(&image[(240 + y) * row + x * 3], &right[(x * 240 + (239 - y)) * 3], 3);
            continue;
        }
        for (int x = 0; x < 320; x++) {
            memcpy(&image[(240 + y) * row + (x + 40) * 3], &bot[(x * 240 + (239 - y)) * 3], 3);
        }
    }
    FILE* f = fopen(path, "wb");
    if (!f) return;
    u32 data_size = row * h;
    u8 header[54] = { 'B', 'M' };
    u32 file_size = 54 + data_size;
    memcpy(&header[2], &file_size, 4);
    header[10] = 54;
    header[14] = 40;
    memcpy(&header[18], &w, 4);
    memcpy(&header[22], &h, 4);
    header[26] = 1;
    header[28] = 24;
    memcpy(&header[34], &data_size, 4);
    fwrite(header, 1, sizeof(header), f);
    for (int y = h - 1; y >= 0; y--) fwrite(&image[y * row], 1, row, f); // BMP rows are bottom-up
    fclose(f);
}
#endif

// Scripted input (development): if DATA_PATH/autoinput.txt exists, each line
//   <vi> <duration> <key> [<key>...]
// holds the named keys for <duration> game VIs (60 per second of game time) starting at VI <vi>.
// Game time rather than UI frames, so scripts keep working when performance changes. Keys: A B X Y L R ZL ZR START
// SELECT UP DOWN LEFT RIGHT, STICK:<x>,<y> for the Circle Pad (-156..156) and TOUCH:<x>,<y> for the
// touch screen (0..319, 0..239), and TAP:<n> to press the line's buttons repeatedly, every n VIs
// (held for the first half of each period). DRAG:<x>,<y> moves the stylus of a touch held by an
// earlier line (without a new press), for drag tests. Lets automated test
// runs get past menus without anyone at the controls.
typedef struct {
    u32 start, duration, keys;
    s16 stick_x, stick_y;
    bool stick;
    u16 touch_x, touch_y;
    bool touch;
    bool pressed; // its keys have been reported as newly pressed
    u16 tap_period;   // TAP:<n>, 0 = hold for the whole duration
    u32 last_tap;     // index of the last tap reported as newly pressed (+1)
} AutoInputStep;

typedef struct {
    AutoInputStep steps[256];
    int count;
} AutoInput;

static void autoinput_load(AutoInput* ai, const char* path) {
    static const struct { const char* name; u32 key; } names[] = {
        { "A", KEY_A }, { "B", KEY_B }, { "X", KEY_X }, { "Y", KEY_Y }, { "L", KEY_L }, { "R", KEY_R },
        { "ZL", KEY_ZL }, { "ZR", KEY_ZR }, { "START", KEY_START }, { "SELECT", KEY_SELECT },
        { "UP", KEY_DUP }, { "DOWN", KEY_DDOWN }, { "LEFT", KEY_DLEFT }, { "RIGHT", KEY_DRIGHT },
        { "CUP", KEY_CSTICK_UP }, { "CDOWN", KEY_CSTICK_DOWN }, { "CLEFT", KEY_CSTICK_LEFT }, { "CRIGHT", KEY_CSTICK_RIGHT },
    };
    ai->count = 0;
    FILE* f = fopen(path, "r");
    if (!f) return;
    char line[160];
    while (ai->count < 256 && fgets(line, sizeof(line), f)) {
        AutoInputStep s = { 0 };
        int used = 0;
        if (sscanf(line, "%lu %lu%n", &s.start, &s.duration, &used) < 2) continue;
        char* tok = strtok(line + used, " \t\r\n");
        for (; tok; tok = strtok(NULL, " \t\r\n")) {
            int x, y;
            if (sscanf(tok, "STICK:%d,%d", &x, &y) == 2) {
                s.stick = true; s.stick_x = x; s.stick_y = y;
                continue;
            }
            int period;
            if (sscanf(tok, "TAP:%d", &period) == 1) {
                s.tap_period = (u16)(period > 1 ? period : 2);
                continue;
            }
            if (sscanf(tok, "DRAG:%d,%d", &x, &y) == 2) {
                s.touch = true; s.touch_x = x; s.touch_y = y; // moves a touch another line holds
                continue;
            }
            if (sscanf(tok, "TOUCH:%d,%d", &x, &y) == 2) {
                s.touch = true; s.touch_x = x; s.touch_y = y;
                s.keys |= KEY_TOUCH;
                continue;
            }
            for (size_t i = 0; i < sizeof(names) / sizeof(names[0]); i++) {
                if (!strcmp(tok, names[i].name)) s.keys |= names[i].key;
            }
        }
        ai->steps[ai->count++] = s;
    }
    fclose(f);
    fprintf(stderr, "[autoinput] %d steps from %s\n", ai->count, path);
}

static void autoinput_apply(AutoInput* ai, u32 vi, u32* held, u32* down, circlePosition* circle, touchPosition* touch) {
    for (int i = 0; i < ai->count; i++) {
        AutoInputStep* s = &ai->steps[i];
        if (vi < s->start || vi >= s->start + s->duration) continue;
        if (s->tap_period) {
            u32 t = vi - s->start;
            if (t % s->tap_period < s->tap_period / 2u) {
                *held |= s->keys;
                u32 tap = t / s->tap_period + 1;
                if (s->last_tap != tap) {
                    *down |= s->keys;
                    s->last_tap = tap;
                }
            }
        } else {
            *held |= s->keys;
            if (!s->pressed) {
                *down |= s->keys;
                s->pressed = true;
            }
        }
        if (s->stick) { circle->dx = s->stick_x; circle->dy = s->stick_y; }
        if (s->touch) { touch->px = s->touch_x; touch->py = s->touch_y; }
    }
}

// Development: memory pokes for reverse engineering (DATA_PATH/pokes.txt). Each line
//   <vi> <address> <size 1|2|4> <value>      (address and value in hex)
// writes the value into game RAM once the game's VI count reaches <vi>.
typedef struct {
    u32 vi, address, size, value;
    bool done;
} Poke;
static Poke pokes[512];
static int poke_count;

static void pokes_load(const char* path) {
    FILE* f = fopen(path, "r");
    if (!f) return;
    char line[96];
    while (poke_count < 512 && fgets(line, sizeof(line), f)) {
        Poke p = { 0 };
        char op[8];
        if (sscanf(line, "%lu %lx %lu %lx", &p.vi, &p.address, &p.size, &p.value) == 4) pokes[poke_count++] = p;
        else if (sscanf(line, "%lu isolate %lx %lx", &p.vi, &p.value, &p.size) == 3) {
            p.address = 4; // development capture: value..size = texture source range
            pokes[poke_count++] = p;
        }
        else if (sscanf(line, "%lu texlog %lu", &p.vi, &p.value) == 2) {
            p.address = 11; // development: log the next `value` texture decodes
            p.size = 200;
            pokes[poke_count++] = p;
        }
        else if (sscanf(line, "%lu crashtest %lu", &p.vi, &p.value) == 2) {
            p.address = 10; // development: crash the game thread on purpose (tests crash.txt)
            p.size = 200;
            pokes[poke_count++] = p;
        }
        else if (sscanf(line, "%lu sfx %lu", &p.vi, &p.value) == 2) {
            p.address = 8; // development: the game plays sound effect `value`
            p.size = 200;
            pokes[poke_count++] = p;
        }
        else if (sscanf(line, "%lu audiorec %lu", &p.vi, &p.value) == 2) {
            p.address = 9; // development: record `value` frames of audio output to audio_rec.raw
            p.size = 200;
            pokes[poke_count++] = p;
        }
        else if (sscanf(line, "%lu tracedump %lu", &p.vi, &p.value) == 2) {
            p.address = 7; // development: distinct functions among the last `value` calls
            p.size = 200;
            pokes[poke_count++] = p;
        }
        else if (sscanf(line, "%lu gamesave %lu", &p.vi, &p.value) == 2) {
            p.address = 6; // a real game save to flash slot `value`
            p.size = 200;
            pokes[poke_count++] = p;
        }
        else if (sscanf(line, "%lu digscan %lu", &p.vi, &p.value) == 2) {
            p.address = 5; // a dungeon's map (Dig Scan): value = dungeon
            p.size = 200;
            pokes[poke_count++] = p;
        }
        else if (sscanf(line, "%lu warp %lu %lu", &p.vi, &p.value, &p.size) == 3) {
            p.address = 3; // warp: value = area, size field reused for the room
            p.size += 100;
            pokes[poke_count++] = p;
        }
        else if (sscanf(line, "%lu %7s %lu", &p.vi, op, &p.value) == 3 && (!strcmp(op, "save") || !strcmp(op, "load"))) {
            p.size = 0; // save state request: address 1 save, 2 load; value = slot
            p.address = op[0] == 's' ? 1 : 2;
            pokes[poke_count++] = p;
        }
    }
    fclose(f);
    fprintf(stderr, "[pokes] %d from %s\n", poke_count, path);
}

u8* mm64_debug_rdram(void);
bool mm64_debug_warp(int area, int room); // mm64_savestate.cpp
bool mm64_debug_game_save(int slot);

static void pokes_apply(u32 vi) {
    u8* rdram = mm64_debug_rdram();
    if (!rdram) return;
    for (int i = 0; i < poke_count; i++) {
        Poke* p = &pokes[i];
        if (p->done || vi < p->vi) continue;
        p->done = true;
        if (p->address == 4) {
            extern volatile uint32_t n64_isolate_lo, n64_isolate_hi;
            n64_isolate_lo = p->value;
            n64_isolate_hi = p->size;
            continue;
        }
        if (p->address == 11 && p->size == 200) {
            extern volatile int n64_texlog_remaining;
            n64_texlog_remaining = (int)p->value;
            continue;
        }
        if (p->address == 10 && p->size == 200) {
            extern volatile bool mm64_debug_crash;
            mm64_debug_crash = true;
            continue;
        }
        if (p->address == 8 && p->size == 200) {
            extern volatile int mm64_debug_sfx;
            mm64_debug_sfx = (int)p->value;
            continue;
        }
        if (p->address == 9 && p->size == 200) {
            extern void mm64_debug_record_audio(unsigned frames);
            mm64_debug_record_audio((unsigned)p->value);
            continue;
        }
        if (p->address == 7 && p->size == 200) {
            extern void mm64_trace_unique(unsigned count);
            mm64_trace_unique((unsigned)p->value);
            continue;
        }
        if (p->address == 6 && p->size == 200) {
            bool ok = mm64_debug_game_save((int)p->value);
            fprintf(stderr, "[pokes] vi %lu: game save to slot %lu: %s\n", vi, p->value, ok ? "queued" : "refused");
            continue;
        }
        if (p->address == 5 && p->size == 200) {
            dungeon_map_grant((int)p->value);
            fprintf(stderr, "[pokes] vi %lu: dungeon map %lu found\n", vi, p->value);
            continue;
        }
        if (p->address == 3 && p->size >= 100) {
            bool ok = mm64_debug_warp((int)p->value, (int)(p->size - 100));
            fprintf(stderr, "[pokes] vi %lu: warp to area %lu: %s\n", vi, p->value, ok ? "queued" : "refused");
            continue;
        }
        if (p->size == 0) {
            bool ok = p->address == 1 ? mm64_request_save((int)p->value) : mm64_request_load((int)p->value);
            fprintf(stderr, "[pokes] vi %lu: %s slot %lu: %s\n", vi, p->address == 1 ? "save" : "load", p->value + 1, ok ? "queued" : "refused");
            continue;
        }
        for (u32 k = 0; k < p->size; k++) { // big-endian value, RDRAM bytes stored as addr ^ 3
            u8 byte = (u8)(p->value >> (8 * (p->size - 1 - k)));
            rdram[((p->address & 0x00FFFFFF) + k) ^ 3] = byte;
        }
        fprintf(stderr, "[pokes] vi %lu: %08lX <- %lX (%lu bytes)\n", vi, p->address, p->value, p->size);
    }
}

void ultramodern_debug_dump_waits(void); // runtime/ultramodern/mesgqueue.cpp
int32_t osViGetCurrentFramebuffer(void); // runtime/ultramodern/events.cpp
int32_t osViGetNextFramebuffer(void);
void ultramodern_debug_dump_events(void); // runtime/ultramodern/events.cpp
void ultramodern_debug_dump_run_queue(u8* rdram); // runtime/ultramodern/threadqueue.cpp
void ultramodern_debug_dump_native(void); // runtime/ultramodern/events.cpp

// Watchdog (development): logs where the UI loop is and whether the game is progressing, from a
// thread above every other app thread, so a stalled UI or game shows up in runtime.log.
static volatile int ui_stage;   // 0 input, 1 frame begin, 2 top render, 3 bottom, 4 frame end
static volatile u32 ui_frame;
// The UI thread's last stats line, written to DATA_PATH/status.txt by the watchdog thread: the UI
// thread does no file I/O during play (an SD card write held it for several frames).
static char status_line[160];

static void watchdog(void* arg) {
    (void)arg;
    for (;;) {
        svcSleepThread(2000000000LL);
        FILE* status = fopen(DATA_PATH "/status.txt", "w");
        if (status) {
            fputs(status_line, status);
            fclose(status);
        }
        Mm64Stats s;
        mm64_get_stats(&s);
        fprintf(stderr, "[watchdog] ui_frame=%lu ui_stage=%d display_lists=%u done=%u vi_frames=%u audio_tasks=%u audio_rsp_ms=%u\n",
            ui_frame, ui_stage, s.display_lists, s.display_lists_done, s.frames, s.audio_tasks, s.audio_rsp_ms);
        extern void n64_renderer_mem_report(void);
        n64_renderer_mem_report();
        struct mallinfo mi = mallinfo();
        extern char* fake_heap_end;
        char* brk = (char*)sbrk(0);
        fprintf(stderr, "[mem] heap free %lu KB (unused %lu KB + freed %lu KB)\n",
            (unsigned long)(((fake_heap_end - brk) + mi.fordblks) / 1024), (unsigned long)((fake_heap_end - brk) / 1024),
            (unsigned long)(mi.fordblks / 1024));
        fprintf(stderr, "[mem] heap in use %lu KB\n", (unsigned long)(mi.uordblks / 1024));
        fprintf(stderr, "[mem] linear free %lu KB, app region free %lu KB\n",
            (unsigned long)(linearSpaceFree() / 1024), (unsigned long)(osGetMemRegionFree(MEMREGION_APPLICATION) / 1024));
        Mm64Player pl;
        if (mm64_get_player(&pl)) fprintf(stderr, "[pos] vi %u area %d room %d x %d y %d z %d yaw %d\n", s.frames, pl.area, pl.room, pl.x, pl.y, pl.z, pl.yaw);
        Mm64Location loc;
        ultramodern_debug_dump_native();
        fprintf(stderr, "[audio] queued=%u dropped=%u peak=%d playing=%d\n",
            s.audio_queued_frames, s.audio_dropped_frames, s.audio_peak, (int)s.audio_playing);
        static bool areas_logged;
        if (!areas_logged && s.frames > 120) {
            areas_logged = true;
            mm64_debug_log_area_names();
        }
        if (mm64_get_location(&loc)) {
            fprintf(stderr, "[state] area=%d (%s) cutscene=%d\n", loc.area, loc.area_name, mm64_in_cutscene());
        }
        mm64_trace_dump();
        ultramodern_debug_dump_waits();
        ultramodern_debug_dump_run_queue(mm64_debug_rdram());
        mm64_profile_dump();
        fprintf(stderr, "[nugfx] pending_tasks(801FFBB0)=%u vi_current=%08lX vi_next=%08lX\n", mm64_debug_peek(0x801FFBB0),
            (unsigned long)osViGetCurrentFramebuffer(), (unsigned long)osViGetNextFramebuffer());
        // NuSystem scheduler state: current gfx task, current audio task, gfx task waiting for audio.
        fprintf(stderr, "[nusc] cur_gfx=%08X cur_audio=%08X pending_gfx=%08X\n",
            mm64_debug_peek(0x8021571C), mm64_debug_peek(0x80215720), mm64_debug_peek(0x80215724));
        // NuSystem graphics request queue (OSMesgQueue: recv waiters, send waiters, validCount, first, msgCount, msg).
        fprintf(stderr, "[gfxq] %08X %08X %08X %08X %08X %08X\n", mm64_debug_peek(0x802150EC), mm64_debug_peek(0x802150F0),
            mm64_debug_peek(0x802150F4), mm64_debug_peek(0x802150F8), mm64_debug_peek(0x802150FC), mm64_debug_peek(0x80215100));
        // Game "sleep N frames" slots (func_80029114 / tick func_80028F58): word0 = flag|state, word1 = queue index|count.
        fprintf(stderr, "[slots]");
        for (int i = 0; i < 4; i++) {
            unsigned base = 0x801BB930 + i * 0x1C8;
            fprintf(stderr, " %d:%08X/%08X", i, mm64_debug_peek(base), mm64_debug_peek(base + 4));
        }
        fprintf(stderr, "\n");
        fflush(stderr);
    }
}

int main(void) {
    osSetSpeedupEnable(true); // New 3DS: 804 MHz + L2 cache (no-op on Old 3DS)
    // Old 3DS: one application core. The system core (core 1) can be lent to the app (up to 80% of
    // its time): the game threads run there (core_thread.hpp). And the display lists of frames the
    // screen can't show anyway are skipped (n64_frame_skip).
    if (!mm64_is_new3ds()) {
        APT_SetAppCpuTimeLimit(80);
        n64_frame_skip = true;
    }

    // Runtime diagnostics (asserts, quick_exit, message boxes) go to stderr; keep them on the SD card.
    // Unbuffered while starting up, so the log shows how far it got if it stops early; once the game
    // runs (see the main loop) it's kept in memory and written out by the watchdog thread every 2 s,
    // so logging never makes the UI thread wait for the SD card.
    freopen(DATA_PATH "/runtime.log", "w", stderr);
    setvbuf(stderr, NULL, _IONBF, 0);

    crash_log_init();
    {
        s32 prio = 0;
        svcGetThreadPriority(&prio, CUR_THREAD_HANDLE);
        fprintf(stderr, "[front] main thread priority 0x%lX\n", (long)prio);
    }
    crash_log_attach();
    gfxInitDefault();
    romfsInit(); // the dungeon map tiles (bottom_ui.c)
    C3D_Init(C3D_DEFAULT_CMDBUF_SIZE * 4); // N64 frames can have hundreds of draw calls
    C2D_Init(C2D_DEFAULT_MAX_OBJECTS);
    C2D_Prepare();
    C3D_RenderTarget* bottom = C2D_CreateScreenTarget(GFX_BOTTOM, GFX_LEFT);
    n64_top_init();

    bool is_new3ds = false;
    APT_CheckNew3DS(&is_new3ds);
    bottom_ui_init(DATA_PATH); // first: the ROM check's screens use its font
    // The app's own ROM (a personal build), else the player's from the SD card.
    bottom_target = bottom;
    static RomCheck rom;
    rom_check(&rom, DATA_PATH, ROMFS_ROM_PATH, rom_progress);
    fprintf(stderr, "[front] hardware: %s, ROM: %s %s\n", is_new3ds ? "New 3DS" : "Old 3DS", rom.state, rom.found);
    if (!rom.ok) {
        rom_help(&rom, bottom);
        bottom_ui_exit();
        n64_top_exit();
        C2D_Fini();
        C3D_Fini();
        romfsExit();
        gfxExit();
        return 0;
    }

    static const char* boot_msgs[] = { "started", "ROM not found", "ROM not .z64", "out of memory" };
    Mm64BootResult boot = mm64_boot(rom.path, DATA_PATH);
    fprintf(stderr, "[front] game runtime: %s\n", boot_msgs[boot]);
    mm64_savestate_init(DATA_PATH);
    threadCreate(watchdog, NULL, 16 * 1024, 0x18, -2, true);
    mm64_profile_start();

    bool paused = false;
    u32 frame = 0;

    static AutoInput autoinput; // ~7 KB: keep it off the main thread's stack
    autoinput_load(&autoinput, DATA_PATH "/autoinput.txt");
    pokes_load(DATA_PATH "/pokes.txt");
    extern volatile bool mm64_asset_log; // mm64_patches.cpp: list compressed assets on test runs
    mm64_asset_log = autoinput.count > 0;
    extern volatile bool mm64_sound_log; // mm64_patches.cpp: log menu sound ids on test runs
    mm64_sound_log = autoinput.count > 0;
    extern volatile bool mm64_original_opening; // mm64_game.cpp: development, the game's own opening order
    FILE* oo = fopen(DATA_PATH "/original_opening.txt", "r");
    if (oo) { mm64_original_opening = true; fclose(oo); }

    while (aptMainLoop()) {
        hidScanInput();
        u32 down = hidKeysDown();
        u32 held = hidKeysHeld();
        circlePosition circle;
        hidCircleRead(&circle);
        circlePosition cstick; // New 3DS C-Stick: the camera (input_3ds.cpp)
        hidCstickRead(&cstick);
        touchPosition touch;
        hidTouchRead(&touch);
        Mm64Stats input_stats;
        mm64_get_stats(&input_stats);
        autoinput_apply(&autoinput, input_stats.frames, &held, &down, &circle, &touch);
        pokes_apply(input_stats.frames);
        mm64_ext_tick(); // Zenny Earned, Reaverbots defeated
        mm64_savestate_update();

        if ((held & KEY_START) && (held & KEY_SELECT)) break;
        if (down & KEY_START) {
            // Start pauses the game on the top screen only; the bottom screen stays live.
            paused = !paused;
            mm64_set_paused(paused);
        }
        bottom_ui_update(down, held, touch, paused);
        // Credits: the game waits (unless it was paused anyway); SELECT, which closes them, doesn't
        // reach the game until it's let go.
        static bool credits_paused, select_blocked;
        bool credits = bottom_ui_credits_active();
        if (credits && !credits_paused && !paused) {
            credits_paused = true;
            mm64_set_paused(true);
        }
        if (credits) select_blocked = true;
        if (!credits && credits_paused) {
            credits_paused = false;
            mm64_set_paused(false);
            n64_top_redraw();
        } else if (!credits && select_blocked && !(held & KEY_SELECT)) {
            select_blocked = false;
            n64_top_redraw();
        }
        if (select_blocked) held &= ~KEY_SELECT;
        BottomUiAction action = bottom_ui_take_action();
        if (action == BOTTOM_UI_RESUME && paused) {
            paused = false; // saves and loads run during gameplay
            mm64_set_paused(false);
        }
        if (action == BOTTOM_UI_RESTART) aptSetChainloaderToSelf(); // relaunched after the exit below
        if (action == BOTTOM_UI_RESTART || action == BOTTOM_UI_QUIT) break;
        mm64_input_update(held, circle.dx, circle.dy, cstick.dx, cstick.dy, paused);
        frame++;
        ui_frame = frame;
        if (frame == 600) {
            static char log_buffer[32 * 1024];
            fflush(stderr);
            freopen(DATA_PATH "/runtime.log", "a", stderr);
            setvbuf(stderr, log_buffer, _IOFBF, sizeof(log_buffer));
        }
        ui_stage = 0;
        u64 frame_start = svcGetSystemTick();

        Mm64Stats stats;
        mm64_get_stats(&stats);
        unsigned draws, vertices;
        n64_top_stats(&draws, &vertices);

        // Development: when the game stops sending display lists for 2 s (e.g. a menu that draws once
        // and waits), log the frame on screen once per stall.
        static unsigned last_dl_count;
        static u32 dl_still_frames;
        static bool stall_dumped;
        if (stats.display_lists != last_dl_count) {
            last_dl_count = stats.display_lists;
            dl_still_frames = 0;
            stall_dumped = false;
        }
        else if (!paused && ++dl_still_frames == 120 && !stall_dumped) {
            stall_dumped = true;
            n64_top_dump_current();
            ultramodern_debug_dump_events();
        }

        // Stats for DATA_PATH/status.txt (written every 2 s by the watchdog thread), so they can be read
        // without the screen (in the local Azahar: azahar/user/sdmc/3ds/mm64/status.txt).
        snprintf(status_line, sizeof(status_line), "ui_frame=%lu display_lists=%u vi_frames=%u audio_tasks=%u draws=%u vertices=%u\n",
            frame, stats.display_lists, stats.frames, stats.audio_tasks, draws, vertices);

        u64 t0 = svcGetSystemTick();
        ui_stage = 1;
        C3D_FrameBegin(C3D_FRAME_SYNCDRAW);
        u64 t1 = svcGetSystemTick();
        ui_stage = 2;
        // Stereoscopic 3D as deep as the 3D slider says (0.05 of the half width at most, in 16 steady
        // steps); off while the credits cover the top screen. Development: DATA_PATH/stereotest.txt
        // forces full depth and puts the right eye in screenshots.
        if (stereo_test < 0) stereo_test = access(DATA_PATH "/stereotest.txt", F_OK) == 0;
        float slider = stereo_test ? 1.0f : roundf(osGet3DSliderState() * 16.0f) / 16.0f;
        n64_top_set_stereo(!bottom_ui_credits_active() && slider > 0.01f ? 0.05f * slider : 0.0f);
        bool top_drawn = n64_top_render(paused || bottom_ui_credits_active());
        if (top_drawn) n64_top_draw_title_credit();
        if (bottom_ui_credits_active()) {
            C2D_Prepare();
            C2D_TargetClear(n64_top_target(), C2D_Color32(0x00, 0x00, 0x00, 0xFF));
            C2D_SceneBegin(n64_top_target());
            bottom_ui_draw_credits();
        }
        u64 t2 = svcGetSystemTick();
        ui_stage = 3;
        C2D_Prepare(); // the N64 renderer changed shader/attribute/TexEnv state
        C2D_TargetClear(bottom, C2D_Color32(0x0F, 0x17, 0x2A, 0xFF));
        C2D_SceneBegin(bottom);
        bottom_ui_draw(paused, NULL); // no stats on screen (they go to status.txt)
        u64 t3 = svcGetSystemTick();
        ui_stage = 4;
        C3D_FrameEnd(0);
        u64 t4 = svcGetSystemTick();

#ifdef DEV_SCREENSHOT_INTERVAL
        if (autoinput.count > 0 && frame % DEV_SCREENSHOT_INTERVAL == 0) write_screenshot(DATA_PATH "/screenshot.bmp");
        // Development: RAM snapshots + screenshots at listed game VI counts (DATA_PATH/snapshots.txt, one
        // VI count per line). With DATA_PATH/snapshots_full.txt present they also dump RAM, textures and
        // the shown frame's draws, for locating game variables or rendering problems on the PC.
        static u32 snapshot_frames[256];
        static int snapshot_count = -1;
        static bool snapshot_full;
        if (snapshot_count < 0) {
            snapshot_count = 0;
            FILE* full = fopen(DATA_PATH "/snapshots_full.txt", "r");
            if (full) {
                snapshot_full = true;
                fclose(full);
            }
            FILE* list = fopen(DATA_PATH "/snapshots.txt", "r");
            if (list) {
                while (snapshot_count < 256 && fscanf(list, "%lu", &snapshot_frames[snapshot_count]) == 1) snapshot_count++;
                fclose(list);
            }
        }
        for (int i = 0; i < snapshot_count; i++) {
            if (snapshot_frames[i] == 0 || stats.frames < snapshot_frames[i]) continue;
            u32 vi = snapshot_frames[i];
            snapshot_frames[i] = 0; // taken
            char path[96];
            snprintf(path, sizeof(path), DATA_PATH "/snap_%lu.bmp", vi);
            Mm64Player snap_pl;
            if (mm64_get_player(&snap_pl)) {
                fprintf(stderr, "[snap] vi %lu area %d room %d x %d y %d z %d yaw %d\n", vi, snap_pl.area, snap_pl.room,
                    snap_pl.x, snap_pl.y, snap_pl.z, snap_pl.yaw);
            }
            write_screenshot(path);
            if (!snapshot_full) continue;
            snprintf(path, sizeof(path), DATA_PATH "/snap_%lu", vi);
            mkdir(path, 0777);
            n64_top_dump_textures(path);
            n64_top_dump_current();
            snprintf(path, sizeof(path), DATA_PATH "/snap_%lu.bin", vi);
            FILE* f = fopen(path, "wb");
            if (f) {
                fwrite(mm64_debug_rdram(), 1, 0x400000, f); // first 4 MB: code, data, heap
                fclose(f);
            }
        }
#endif
        // Per-part timing of the UI loop (guest microseconds), averaged over 60 frames.
        static u64 ui_ticks, t_begin, t_top, t_bottom, t_end, t_top_fresh, last_start;
        static u32 n_fresh, n_slow, n_vblank_gaps[4];
        ui_ticks += svcGetSystemTick() - frame_start;
        if (top_drawn) { n_fresh++; t_top_fresh += t2 - t1; }
        // Time between frame starts in vblanks (1 = 60 fps for the bottom screen).
        if (last_start) {
            u64 gap = frame_start - last_start, vb = SYSCLOCK_ARM11 / 60;
            u32 n = (u32)((gap + vb / 2) / vb);
            n_vblank_gaps[n < 1 ? 0 : n > 3 ? 3 : n]++;
            if (n > 1) n_slow++;
        }
        last_start = frame_start;
        t_begin += t1 - t0; t_top += t2 - t1; t_bottom += t3 - t2; t_end += t4 - t3;
        if (frame % 60 == 0) {
            u64 us = 60 * (SYSCLOCK_ARM11 / 1000000);
            fprintf(stderr, "[perf] UI frame %llu us: begin %llu, top %llu, bottom %llu, end %llu\n",
                ui_ticks / us, t_begin / us, t_top / us, t_bottom / us, t_end / us);
            fprintf(stderr, "[perf] frames: %lu new top frames (top %llu us each), gaps in vblanks 1:%lu 2:%lu 3+:%lu\n",
                n_fresh, n_fresh ? t_top_fresh / n_fresh / (SYSCLOCK_ARM11 / 1000000) : 0, n_vblank_gaps[1], n_vblank_gaps[2], n_vblank_gaps[3]);
            ui_ticks = t_begin = t_top = t_bottom = t_end = t_top_fresh = 0;
            n_fresh = n_slow = n_vblank_gaps[0] = n_vblank_gaps[1] = n_vblank_gaps[2] = n_vblank_gaps[3] = 0;
        }
    }

    // Leaving (closed from the HOME menu, or Quit / Restart). The game's threads would keep running
    // through the teardown below and crash on freed graphics, the stopped audio and the closed RomFS,
    // so the game is paused first: without VI and audio interrupts its threads wait within a frame
    // or two.
    fprintf(stderr, "[front] exiting\n");
    mm64_set_paused(true);
    for (int i = 0; i < 6; i++) svcSleepThread(16666667LL); // ~100 ms
    fflush(stderr);
    mm64_shutdown();
    n64_top_exit();
    bottom_ui_exit();
    C2D_Fini();
    C3D_Fini();
    gfxExit();
    // Not the usual exit: the runtime's own threads (VI, graphics, audio tasks, saving, the
    // watchdog) are still running, and the C library's shutdown pulled their locks and heap out from
    // under them (a null call in __libc_lock_acquire), as did destroying the runtime's static
    // std::thread objects. Instead APT is told the app is closing (which also does Restart's
    // relaunch) and the process ends at once, every thread with it.
    aptExit();
    svcExitProcess();
}
