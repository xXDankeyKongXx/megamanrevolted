// Widescreen patch of a game function: the ground's tile range.
//
// The game draws the ground as tiles of a 128x128 grid and, each frame, asks for only the range its
// 4:3 camera can see (func_800868C0, "render_fill_tile": x from a0 to a1, z from a2 to a3, in grid
// units). In widescreen the sides of the screen show ground outside that range, which was missing
// (sky or black showing through). This is the recompiled function, unchanged, with the range
// widened first while widescreen is on. (The PC port, MegaMan64Recompiled, asks for the whole grid;
// a margin costs the 3DS much less.)

#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

#include <3ds.h>
#include <stdbool.h>
#include <stdio.h>

extern volatile bool n64_widescreen; // n64_renderer.cpp

// The margin (grid units each side) adapts to keep the game at 30 fps: the extra tiles cost the game
// time to prepare and draw. It shrinks while game frames take longer than a 30 fps frame and grows
// back while they're on time - up to five tiles (turning fast with L/R, the range lags the camera),
// down to two (enough when the camera is still).
#define MARGIN_MAX 20
#define MARGIN_MIN 8
static int tile_margin = MARGIN_MAX;
static u64 last_tick;
static float frame_ms = 33.3f; // average time between calls: one call per game frame

static void adapt_margin(void) {
    u64 now = svcGetSystemTick();
    if (last_tick) {
        float ms = (float)(now - last_tick) * 1000.0f / SYSCLOCK_ARM11;
        if (ms < 200.0f) frame_ms += (ms - frame_ms) * 0.1f; // (loads and pauses don't count)
    }
    last_tick = now;
    static int frames, step;
    if (++frames < 15) return; // decide every half second
    frames = 0;
    if (frame_ms > 34.2f && tile_margin > MARGIN_MIN) tile_margin -= 2;
    else if (frame_ms < 33.6f && tile_margin < MARGIN_MAX) tile_margin += 1;
    if (++step % 8 == 0) fprintf(stderr, "[wide] game frame %.1f ms, ground margin %d\n", (double)frame_ms, tile_margin);
}

static void widen_tile_range(recomp_context* ctx) {
    adapt_margin();
    int x0 = (int16_t)ctx->r4 - tile_margin, x1 = (int16_t)ctx->r5 + tile_margin;
    int z0 = (int16_t)ctx->r6 - tile_margin, z1 = (int16_t)ctx->r7 + tile_margin;
    ctx->r4 = (uint64_t)(int64_t)(x0 < 0 ? 0 : x0);
    ctx->r5 = (uint64_t)(int64_t)(x1 > 0x7F ? 0x7F : x1);
    ctx->r6 = (uint64_t)(int64_t)(z0 < 0 ? 0 : z0);
    ctx->r7 = (uint64_t)(int64_t)(z1 > 0x7F ? 0x7F : z1);
}

RECOMP_FUNC void func_800868C0_61CC0(uint8_t* rdram, recomp_context* ctx) {
    // 3DS port: widescreen shows more of the ground at the sides than the game's 4:3 view, so the
    // tile range it asks for (a0-a1 by a2-a3, 0-0x7F) is widened when widescreen is on.
    if (n64_widescreen) widen_tile_range(ctx);
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800868C0: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x800868C4: lw          $v0, -0x15DC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X15DC);
    // 0x800868C8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800868CC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x800868D0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x800868D4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x800868D8: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x800868DC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x800868E0: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x800868E4: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x800868E8: addu        $s3, $a3, $zero
    ctx->r19 = ADD32(ctx->r7, 0);
    // 0x800868EC: beq         $v0, $zero, L_80086980
    if (ctx->r2 == 0) {
        // 0x800868F0: sw          $ra, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r31;
            goto L_80086980;
    }
    // 0x800868F0: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x800868F4: jal         0x800281C8
    // 0x800868F8: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_800281C8_35C8(rdram, ctx);
        goto after_0;
    // 0x800868F8: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_0:
    // 0x800868FC: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x80086900: beq         $a3, $zero, L_80086980
    if (ctx->r7 == 0) {
        // 0x80086904: sll         $v0, $s0, 16
        ctx->r2 = S32(ctx->r16 << 16);
            goto L_80086980;
    }
    // 0x80086904: sll         $v0, $s0, 16
    ctx->r2 = S32(ctx->r16 << 16);
    // 0x80086908: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8008690C: bltzl       $v0, L_80086914
    if (SIGNED(ctx->r2) < 0) {
        // 0x80086910: addiu       $v0, $v0, 0x3
        ctx->r2 = ADD32(ctx->r2, 0X3);
            goto L_80086914;
    }
    goto skip_0;
    // 0x80086910: addiu       $v0, $v0, 0x3
    ctx->r2 = ADD32(ctx->r2, 0X3);
    skip_0:
L_80086914:
    // 0x80086914: sra         $v0, $v0, 2
    ctx->r2 = S32(SIGNED(ctx->r2) >> 2);
    // 0x80086918: sh          $v0, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r2;
    // 0x8008691C: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x80086920: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80086924: bltzl       $v0, L_8008692C
    if (SIGNED(ctx->r2) < 0) {
        // 0x80086928: addiu       $v0, $v0, 0x3
        ctx->r2 = ADD32(ctx->r2, 0X3);
            goto L_8008692C;
    }
    goto skip_1;
    // 0x80086928: addiu       $v0, $v0, 0x3
    ctx->r2 = ADD32(ctx->r2, 0X3);
    skip_1:
L_8008692C:
    // 0x8008692C: sra         $v0, $v0, 2
    ctx->r2 = S32(SIGNED(ctx->r2) >> 2);
    // 0x80086930: sh          $v0, 0x4($a3)
    MEM_H(0X4, ctx->r7) = ctx->r2;
    // 0x80086934: sll         $v0, $s2, 16
    ctx->r2 = S32(ctx->r18 << 16);
    // 0x80086938: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8008693C: addiu       $v0, $v1, 0x4
    ctx->r2 = ADD32(ctx->r3, 0X4);
    // 0x80086940: bltzl       $v0, L_80086948
    if (SIGNED(ctx->r2) < 0) {
        // 0x80086944: addiu       $v0, $v1, 0x7
        ctx->r2 = ADD32(ctx->r3, 0X7);
            goto L_80086948;
    }
    goto skip_2;
    // 0x80086944: addiu       $v0, $v1, 0x7
    ctx->r2 = ADD32(ctx->r3, 0X7);
    skip_2:
L_80086948:
    // 0x80086948: sra         $v0, $v0, 2
    ctx->r2 = S32(SIGNED(ctx->r2) >> 2);
    // 0x8008694C: sh          $v0, 0x2($a3)
    MEM_H(0X2, ctx->r7) = ctx->r2;
    // 0x80086950: sll         $v0, $s3, 16
    ctx->r2 = S32(ctx->r19 << 16);
    // 0x80086954: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80086958: addiu       $v0, $v1, 0x4
    ctx->r2 = ADD32(ctx->r3, 0X4);
    // 0x8008695C: bltzl       $v0, L_80086964
    if (SIGNED(ctx->r2) < 0) {
        // 0x80086960: addiu       $v0, $v1, 0x7
        ctx->r2 = ADD32(ctx->r3, 0X7);
            goto L_80086964;
    }
    goto skip_3;
    // 0x80086960: addiu       $v0, $v1, 0x7
    ctx->r2 = ADD32(ctx->r3, 0X7);
    skip_3:
L_80086964:
    // 0x80086964: sra         $v0, $v0, 2
    ctx->r2 = S32(SIGNED(ctx->r2) >> 2);
    // 0x80086968: sh          $v0, 0x6($a3)
    MEM_H(0X6, ctx->r7) = ctx->r2;
    // 0x8008696C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80086970: lui         $a2, 0x8008
    ctx->r6 = S32(0X8008 << 16);
    // 0x80086974: addiu       $a2, $a2, 0x69D0
    ctx->r6 = ADD32(ctx->r6, 0X69D0);
    // 0x80086978: jal         0x800283A8
    // 0x8008697C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_800283A8_37A8(rdram, ctx);
        goto after_1;
    // 0x8008697C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_1:
L_80086980:
    // 0x80086980: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80086984: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80086988: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8008698C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80086990: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80086994: jr          $ra
    // 0x80086998: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80086998: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
