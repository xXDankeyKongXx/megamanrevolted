#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8022F420_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F420: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8022F424: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8022F428: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F42C: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x8022F430: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022F434: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022F438: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x8022F43C: jal         0x80047284
    // 0x8022F440: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    func_80047284_22684(rdram, ctx);
        goto after_0;
    // 0x8022F440: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    after_0:
    // 0x8022F444: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022F448: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022F44C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022F450: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022F454: lw          $v0, -0x5ED0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X5ED0);
    // 0x8022F458: jalr        $v0
    // 0x8022F45C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x8022F45C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022F460: addiu       $s1, $sp, 0x28
    ctx->r17 = ADD32(ctx->r29, 0X28);
    // 0x8022F464: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022F468: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    // 0x8022F46C: jal         0x8009A3B4
    // 0x8022F470: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022F470: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022F474: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022F478: lhu         $v0, 0x2A($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X2A);
    // 0x8022F47C: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    // 0x8022F480: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022F484: addiu       $v0, $v0, -0x50
    ctx->r2 = ADD32(ctx->r2, -0X50);
    // 0x8022F488: sh          $v0, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r2;
    // 0x8022F48C: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x8022F490: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x8022F494: addiu       $v0, $s0, 0x4C
    ctx->r2 = ADD32(ctx->r16, 0X4C);
    // 0x8022F498: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022F49C: lui         $v0, 0x400
    ctx->r2 = S32(0X400 << 16);
    // 0x8022F4A0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8022F4A4: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022F4A8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8022F4AC: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8022F4B0: jal         0x80051E18
    // 0x8022F4B4: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_3;
    // 0x8022F4B4: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_3:
    // 0x8022F4B8: sw          $zero, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = 0;
    // 0x8022F4BC: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x8022F4C0: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x8022F4C4: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8022F4C8: jr          $ra
    // 0x8022F4CC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8022F4CC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_802331A0_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802331A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802331A4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802331A8: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x802331AC: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x802331B0: beq         $v1, $v0, L_80233268
    if (ctx->r3 == ctx->r2) {
        // 0x802331B4: slti        $v0, $v1, 0xB
        ctx->r2 = SIGNED(ctx->r3) < 0XB ? 1 : 0;
            goto L_80233268;
    }
    // 0x802331B4: slti        $v0, $v1, 0xB
    ctx->r2 = SIGNED(ctx->r3) < 0XB ? 1 : 0;
    // 0x802331B8: beq         $v0, $zero, L_802331F0
    if (ctx->r2 == 0) {
        // 0x802331BC: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802331F0;
    }
    // 0x802331BC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802331C0: beq         $v1, $v0, L_80233250
    if (ctx->r3 == ctx->r2) {
        // 0x802331C4: slti        $v0, $v1, 0x3
        ctx->r2 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
            goto L_80233250;
    }
    // 0x802331C4: slti        $v0, $v1, 0x3
    ctx->r2 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
    // 0x802331C8: beql        $v0, $zero, L_802331E0
    if (ctx->r2 == 0) {
        // 0x802331CC: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_802331E0;
    }
    goto skip_0;
    // 0x802331CC: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    skip_0:
    // 0x802331D0: beq         $v1, $zero, L_80233228
    if (ctx->r3 == 0) {
        // 0x802331D4: addiu       $v0, $zero, -0xC8
        ctx->r2 = ADD32(0, -0XC8);
            goto L_80233228;
    }
    // 0x802331D4: addiu       $v0, $zero, -0xC8
    ctx->r2 = ADD32(0, -0XC8);
    // 0x802331D8: j           L_8023328C
    // 0x802331DC: nop

        goto L_8023328C;
    // 0x802331DC: nop

L_802331E0:
    // 0x802331E0: beq         $v1, $v0, L_80233250
    if (ctx->r3 == ctx->r2) {
        // 0x802331E4: nop
    
            goto L_80233250;
    }
    // 0x802331E4: nop

    // 0x802331E8: j           L_8023328C
    // 0x802331EC: nop

        goto L_8023328C;
    // 0x802331EC: nop

L_802331F0:
    // 0x802331F0: addiu       $v0, $zero, 0x3A
    ctx->r2 = ADD32(0, 0X3A);
    // 0x802331F4: beq         $v1, $v0, L_80233270
    if (ctx->r3 == ctx->r2) {
        // 0x802331F8: slti        $v0, $v1, 0x3B
        ctx->r2 = SIGNED(ctx->r3) < 0X3B ? 1 : 0;
            goto L_80233270;
    }
    // 0x802331F8: slti        $v0, $v1, 0x3B
    ctx->r2 = SIGNED(ctx->r3) < 0X3B ? 1 : 0;
    // 0x802331FC: beq         $v0, $zero, L_80233214
    if (ctx->r2 == 0) {
        // 0x80233200: addiu       $v0, $zero, 0x28
        ctx->r2 = ADD32(0, 0X28);
            goto L_80233214;
    }
    // 0x80233200: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x80233204: beq         $v1, $v0, L_80233284
    if (ctx->r3 == ctx->r2) {
        // 0x80233208: addiu       $a0, $zero, 0x7
        ctx->r4 = ADD32(0, 0X7);
            goto L_80233284;
    }
    // 0x80233208: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x8023320C: j           L_8023328C
    // 0x80233210: nop

        goto L_8023328C;
    // 0x80233210: nop

L_80233214:
    // 0x80233214: addiu       $v0, $zero, 0x6E
    ctx->r2 = ADD32(0, 0X6E);
    // 0x80233218: beq         $v1, $v0, L_80233278
    if (ctx->r3 == ctx->r2) {
        // 0x8023321C: addiu       $v0, $zero, 0x82
        ctx->r2 = ADD32(0, 0X82);
            goto L_80233278;
    }
    // 0x8023321C: addiu       $v0, $zero, 0x82
    ctx->r2 = ADD32(0, 0X82);
    // 0x80233220: j           L_8023328C
    // 0x80233224: nop

        goto L_8023328C;
    // 0x80233224: nop

L_80233228:
    // 0x80233228: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023322C: sh          $v0, 0x4DE8($at)
    MEM_H(0X4DE8, ctx->r1) = ctx->r2;
    // 0x80233230: lui         $v0, 0xFF38
    ctx->r2 = S32(0XFF38 << 16);
    // 0x80233234: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80233238: sw          $v0, 0x4DD8($at)
    MEM_W(0X4DD8, ctx->r1) = ctx->r2;
    // 0x8023323C: addiu       $v0, $zero, 0x81
    ctx->r2 = ADD32(0, 0X81);
    // 0x80233240: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80233244: sb          $v0, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r2;
    // 0x80233248: j           L_80233284
    // 0x8023324C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
        goto L_80233284;
    // 0x8023324C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
L_80233250:
    // 0x80233250: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80233254: addiu       $a1, $a1, 0x4DE8
    ctx->r5 = ADD32(ctx->r5, 0X4DE8);
    // 0x80233258: jal         0x8002A33C
    // 0x8023325C: addiu       $a0, $zero, 0x90
    ctx->r4 = ADD32(0, 0X90);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x8023325C: addiu       $a0, $zero, 0x90
    ctx->r4 = ADD32(0, 0X90);
    after_0:
    // 0x80233260: j           L_8023328C
    // 0x80233264: nop

        goto L_8023328C;
    // 0x80233264: nop

L_80233268:
    // 0x80233268: j           L_80233284
    // 0x8023326C: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
        goto L_80233284;
    // 0x8023326C: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
L_80233270:
    // 0x80233270: j           L_80233284
    // 0x80233274: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
        goto L_80233284;
    // 0x80233274: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
L_80233278:
    // 0x80233278: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023327C: sb          $v0, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r2;
    // 0x80233280: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
L_80233284:
    // 0x80233284: jal         0x802340E8
    // 0x80233288: nop

    func_802340E8_ovl27(rdram, ctx);
        goto after_1;
    // 0x80233288: nop

    after_1:
L_8023328C:
    // 0x8023328C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80233290: jal         0x80234148
    // 0x80233294: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    func_80234148_ovl27(rdram, ctx);
        goto after_2;
    // 0x80233294: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_2:
    // 0x80233298: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8023329C: jr          $ra
    // 0x802332A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802332A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022EF78_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022EF78: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022EF7C: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x8022EF80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022EF84: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022EF88: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022EF8C: addiu       $v0, $zero, 0x1B
    ctx->r2 = ADD32(0, 0X1B);
    // 0x8022EF90: bne         $v1, $v0, L_8022F05C
    if (ctx->r3 != ctx->r2) {
        // 0x8022EF94: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8022F05C;
    }
    // 0x8022EF94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022EF98: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022EF9C: bne         $v0, $zero, L_8022F01C
    if (ctx->r2 != 0) {
        // 0x8022EFA0: lui         $v0, 0x800
        ctx->r2 = S32(0X800 << 16);
            goto L_8022F01C;
    }
    // 0x8022EFA0: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x8022EFA4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022EFA8: lw          $v0, 0x4B34($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4B34);
    // 0x8022EFAC: bne         $v0, $s0, L_8022F0A8
    if (ctx->r2 != ctx->r16) {
        // 0x8022EFB0: nop
    
            goto L_8022F0A8;
    }
    // 0x8022EFB0: nop

    // 0x8022EFB4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022EFB8: lhu         $v0, 0x4A06($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X4A06);
    // 0x8022EFBC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022EFC0: sw          $zero, 0x4B34($at)
    MEM_W(0X4B34, ctx->r1) = 0;
    // 0x8022EFC4: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022EFC8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022EFCC: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022EFD0: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022EFD4: addiu       $v0, $v0, 0x180
    ctx->r2 = ADD32(ctx->r2, 0X180);
    // 0x8022EFD8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022EFDC: slti        $v0, $v0, 0x300
    ctx->r2 = SIGNED(ctx->r2) < 0X300 ? 1 : 0;
    // 0x8022EFE0: beq         $v0, $zero, L_8022F0A8
    if (ctx->r2 == 0) {
        // 0x8022EFE4: lui         $v1, 0x800
        ctx->r3 = S32(0X800 << 16);
            goto L_8022F0A8;
    }
    // 0x8022EFE4: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8022EFE8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022EFEC: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022EFF0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022EFF4: bne         $v0, $zero, L_8022F0A8
    if (ctx->r2 != 0) {
        // 0x8022EFF8: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_8022F0A8;
    }
    // 0x8022EFF8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022EFFC: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022F000: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x8022F004: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022F008: jal         0x800610AC
    // 0x8022F00C: addiu       $a3, $zero, 0xD2
    ctx->r7 = ADD32(0, 0XD2);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_0;
    // 0x8022F00C: addiu       $a3, $zero, 0xD2
    ctx->r7 = ADD32(0, 0XD2);
    after_0:
    // 0x8022F010: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022F014: j           L_8022F0A8
    // 0x8022F018: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_8022F0A8;
    // 0x8022F018: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022F01C:
    // 0x8022F01C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8022F020: lw          $v1, 0x3FF0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3FF0);
    // 0x8022F024: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x8022F028: bne         $v0, $zero, L_8022F0A8
    if (ctx->r2 != 0) {
        // 0x8022F02C: andi        $v1, $v1, 0xFF
        ctx->r3 = ctx->r3 & 0XFF;
            goto L_8022F0A8;
    }
    // 0x8022F02C: andi        $v1, $v1, 0xFF
    ctx->r3 = ctx->r3 & 0XFF;
    // 0x8022F030: bne         $v1, $zero, L_8022F04C
    if (ctx->r3 != 0) {
        // 0x8022F034: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022F04C;
    }
    // 0x8022F034: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022F038: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022F03C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8022F040: sb          $v0, -0x3B97($at)
    MEM_B(-0X3B97, ctx->r1) = ctx->r2;
    // 0x8022F044: j           L_8022F0A8
    // 0x8022F048: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
        goto L_8022F0A8;
    // 0x8022F048: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_8022F04C:
    // 0x8022F04C: beql        $v1, $v0, L_8022F0A8
    if (ctx->r3 == ctx->r2) {
        // 0x8022F050: sb          $zero, 0xA($s0)
        MEM_B(0XA, ctx->r16) = 0;
            goto L_8022F0A8;
    }
    goto skip_0;
    // 0x8022F050: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    skip_0:
    // 0x8022F054: j           L_8022F0A8
    // 0x8022F058: nop

        goto L_8022F0A8;
    // 0x8022F058: nop

L_8022F05C:
    // 0x8022F05C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022F060: lw          $v0, 0x4B34($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4B34);
    // 0x8022F064: bne         $v0, $s0, L_8022F0A8
    if (ctx->r2 != ctx->r16) {
        // 0x8022F068: nop
    
            goto L_8022F0A8;
    }
    // 0x8022F068: nop

    // 0x8022F06C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022F070: lhu         $v0, 0x4A06($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X4A06);
    // 0x8022F074: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022F078: sw          $zero, 0x4B34($at)
    MEM_W(0X4B34, ctx->r1) = 0;
    // 0x8022F07C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022F080: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022F084: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022F088: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022F08C: addiu       $v0, $v0, 0x180
    ctx->r2 = ADD32(ctx->r2, 0X180);
    // 0x8022F090: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022F094: slti        $v0, $v0, 0x300
    ctx->r2 = SIGNED(ctx->r2) < 0X300 ? 1 : 0;
    // 0x8022F098: beq         $v0, $zero, L_8022F0A8
    if (ctx->r2 == 0) {
        // 0x8022F09C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022F0A8;
    }
    // 0x8022F09C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022F0A0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8022F0A4: sb          $v0, -0x3B97($at)
    MEM_B(-0X3B97, ctx->r1) = ctx->r2;
L_8022F0A8:
    // 0x8022F0A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022F0AC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022F0B0: jr          $ra
    // 0x8022F0B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022F0B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802327E0_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802327E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802327E4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802327E8: lb          $v0, 0xD($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XD);
    // 0x802327EC: bne         $v0, $zero, L_8023280C
    if (ctx->r2 != 0) {
        // 0x802327F0: nop
    
            goto L_8023280C;
    }
    // 0x802327F0: nop

    // 0x802327F4: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x802327F8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802327FC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80232800: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80232804: j           L_80232820
    // 0x80232808: lw          $v0, -0x5C60($at)
    ctx->r2 = MEM_W(ctx->r1, -0X5C60);
        goto L_80232820;
    // 0x80232808: lw          $v0, -0x5C60($at)
    ctx->r2 = MEM_W(ctx->r1, -0X5C60);
L_8023280C:
    // 0x8023280C: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80232810: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80232814: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80232818: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023281C: lw          $v0, -0x5C58($at)
    ctx->r2 = MEM_W(ctx->r1, -0X5C58);
L_80232820:
    // 0x80232820: jalr        $v0
    // 0x80232824: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80232824: nop

    after_0:
    // 0x80232828: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8023282C: jr          $ra
    // 0x80232830: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80232830: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226FD4_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226FD4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226FD8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80226FDC: lbu         $v0, 0x34B($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X34B);
    // 0x80226FE0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80226FE4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80226FE8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80226FEC: lw          $v0, -0x6760($at)
    ctx->r2 = MEM_W(ctx->r1, -0X6760);
    // 0x80226FF0: jalr        $v0
    // 0x80226FF4: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80226FF4: nop

    after_0:
    // 0x80226FF8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80226FFC: jr          $ra
    // 0x80227000: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227000: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022DB50_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DB50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022DB54: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022DB58: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022DB5C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8022DB60: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022DB64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022DB68: jal         0x8009A3B4
    // 0x8022DB6C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022DB6C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8022DB70: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8022DB74: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022DB78: jal         0x8009A3B4
    // 0x8022DB7C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022DB7C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022DB80: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8022DB84: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8022DB88: jal         0x8009A3B4
    // 0x8022DB8C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022DB8C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022DB90: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022DB94: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022DB98: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022DB9C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022DBA0: lw          $v0, -0x6038($at)
    ctx->r2 = MEM_W(ctx->r1, -0X6038);
    // 0x8022DBA4: jalr        $v0
    // 0x8022DBA8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x8022DBA8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022DBAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022DBB0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022DBB4: jr          $ra
    // 0x8022DBB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022DBB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802321C4_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802321C4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802321C8: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x802321CC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802321D0: lh          $v0, 0x24($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X24);
    // 0x802321D4: bgtz        $v0, L_802321EC
    if (SIGNED(ctx->r2) > 0) {
        // 0x802321D8: addu        $a0, $v0, $zero
        ctx->r4 = ADD32(ctx->r2, 0);
            goto L_802321EC;
    }
    // 0x802321D8: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x802321DC: jal         0x8004F5C4
    // 0x802321E0: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x802321E0: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    after_0:
    // 0x802321E4: j           L_80232204
    // 0x802321E8: nop

        goto L_80232204;
    // 0x802321E8: nop

L_802321EC:
    // 0x802321EC: lhu         $v0, 0x26($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X26);
    // 0x802321F0: lw          $v1, 0x18($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X18);
    // 0x802321F4: addiu       $a0, $a0, -0x8
    ctx->r4 = ADD32(ctx->r4, -0X8);
    // 0x802321F8: sh          $a0, 0x24($a1)
    MEM_H(0X24, ctx->r5) = ctx->r4;
    // 0x802321FC: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80232200: sw          $v1, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r3;
L_80232204:
    // 0x80232204: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80232208: jr          $ra
    // 0x8023220C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023220C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802365EC_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802365EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802365F0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802365F4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802365F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802365FC: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80236600: beq         $v1, $zero, L_80236618
    if (ctx->r3 == 0) {
        // 0x80236604: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80236618;
    }
    // 0x80236604: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80236608: beq         $v1, $v0, L_80236654
    if (ctx->r3 == ctx->r2) {
        // 0x8023660C: nop
    
            goto L_80236654;
    }
    // 0x8023660C: nop

    // 0x80236610: j           L_8023665C
    // 0x80236614: nop

        goto L_8023665C;
    // 0x80236614: nop

L_80236618:
    // 0x80236618: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023661C: addiu       $v0, $zero, -0x1E
    ctx->r2 = ADD32(0, -0X1E);
    // 0x80236620: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x80236624: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80236628: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8023662C: addiu       $v0, $zero, 0x122
    ctx->r2 = ADD32(0, 0X122);
    // 0x80236630: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x80236634: addiu       $v0, $zero, -0x3C0
    ctx->r2 = ADD32(0, -0X3C0);
    // 0x80236638: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8023663C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80236640: jal         0x80050294
    // 0x80236644: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80236644: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    after_0:
    // 0x80236648: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8023664C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80236650: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80236654:
    // 0x80236654: jal         0x8005044C
    // 0x80236658: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_1;
    // 0x80236658: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_8023665C:
    // 0x8023665C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80236660: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80236664: jr          $ra
    // 0x80236668: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80236668: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802364BC_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802364BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802364C0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802364C4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802364C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802364CC: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x802364D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802364D4: beq         $v1, $v0, L_8023653C
    if (ctx->r3 == ctx->r2) {
        // 0x802364D8: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8023653C;
    }
    // 0x802364D8: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x802364DC: beql        $v0, $zero, L_802364F4
    if (ctx->r2 == 0) {
        // 0x802364E0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802364F4;
    }
    goto skip_0;
    // 0x802364E0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x802364E4: beq         $v1, $zero, L_80236504
    if (ctx->r3 == 0) {
        // 0x802364E8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80236504;
    }
    // 0x802364E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802364EC: j           L_8023655C
    // 0x802364F0: nop

        goto L_8023655C;
    // 0x802364F0: nop

L_802364F4:
    // 0x802364F4: beq         $v1, $v0, L_80236554
    if (ctx->r3 == ctx->r2) {
        // 0x802364F8: nop
    
            goto L_80236554;
    }
    // 0x802364F8: nop

    // 0x802364FC: j           L_8023655C
    // 0x80236500: nop

        goto L_8023655C;
    // 0x80236500: nop

L_80236504:
    // 0x80236504: addiu       $v0, $zero, -0x5A
    ctx->r2 = ADD32(0, -0X5A);
    // 0x80236508: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x8023650C: addiu       $v0, $zero, -0x23
    ctx->r2 = ADD32(0, -0X23);
    // 0x80236510: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80236514: addiu       $v0, $zero, 0x154
    ctx->r2 = ADD32(0, 0X154);
    // 0x80236518: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x8023651C: addiu       $v0, $zero, -0x1C0
    ctx->r2 = ADD32(0, -0X1C0);
    // 0x80236520: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80236524: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80236528: jal         0x80050294
    // 0x8023652C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x8023652C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    after_0:
    // 0x80236530: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80236534: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80236538: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8023653C:
    // 0x8023653C: jal         0x80051770
    // 0x80236540: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80051770_2CB70(rdram, ctx);
        goto after_1;
    // 0x80236540: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80236544: jal         0x80051248
    // 0x80236548: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80051248_2C648(rdram, ctx);
        goto after_2;
    // 0x80236548: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8023654C: j           L_8023655C
    // 0x80236550: nop

        goto L_8023655C;
    // 0x80236550: nop

L_80236554:
    // 0x80236554: jal         0x8005044C
    // 0x80236558: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_3;
    // 0x80236558: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
L_8023655C:
    // 0x8023655C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80236560: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80236564: jr          $ra
    // 0x80236568: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80236568: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802282D8_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802282D8: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x802282DC: sw          $s6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r22;
    // 0x802282E0: addu        $s6, $a0, $zero
    ctx->r22 = ADD32(ctx->r4, 0);
    // 0x802282E4: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x802282E8: sw          $fp, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r30;
    // 0x802282EC: sw          $s7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r23;
    // 0x802282F0: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    // 0x802282F4: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x802282F8: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x802282FC: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x80228300: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x80228304: jal         0x802291A4
    // 0x80228308: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    func_802291A4_ovl27(rdram, ctx);
        goto after_0;
    // 0x80228308: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    after_0:
    // 0x8022830C: addiu       $a0, $s6, 0x300
    ctx->r4 = ADD32(ctx->r22, 0X300);
    // 0x80228310: jal         0x800540D0
    // 0x80228314: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    func_800540D0_2F4D0(rdram, ctx);
        goto after_1;
    // 0x80228314: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    after_1:
    // 0x80228318: lbu         $v0, 0x3($s6)
    ctx->r2 = MEM_BU(ctx->r22, 0X3);
    // 0x8022831C: addiu       $t3, $s6, 0x2C8
    ctx->r11 = ADD32(ctx->r22, 0X2C8);
    // 0x80228320: bne         $v0, $zero, L_80228344
    if (ctx->r2 != 0) {
        // 0x80228324: sw          $t3, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r11;
            goto L_80228344;
    }
    // 0x80228324: sw          $t3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r11;
    // 0x80228328: lbu         $v0, 0x349($s6)
    ctx->r2 = MEM_BU(ctx->r22, 0X349);
    // 0x8022832C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80228330: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80228334: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80228338: lw          $v0, -0x66E4($at)
    ctx->r2 = MEM_W(ctx->r1, -0X66E4);
    // 0x8022833C: jalr        $v0
    // 0x80228340: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x80228340: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    after_2:
L_80228344:
    // 0x80228344: lbu         $v0, 0x34D($s6)
    ctx->r2 = MEM_BU(ctx->r22, 0X34D);
    // 0x80228348: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x8022834C: bne         $v0, $zero, L_80228370
    if (ctx->r2 != 0) {
        // 0x80228350: nop
    
            goto L_80228370;
    }
    // 0x80228350: nop

    // 0x80228354: lbu         $v0, 0x9($s6)
    ctx->r2 = MEM_BU(ctx->r22, 0X9);
    // 0x80228358: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022835C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80228360: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80228364: lw          $v0, -0x66D0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X66D0);
    // 0x80228368: jalr        $v0
    // 0x8022836C: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x8022836C: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    after_3:
L_80228370:
    // 0x80228370: lbu         $v0, 0x3($s6)
    ctx->r2 = MEM_BU(ctx->r22, 0X3);
    // 0x80228374: bne         $v0, $zero, L_80228398
    if (ctx->r2 != 0) {
        // 0x80228378: nop
    
            goto L_80228398;
    }
    // 0x80228378: nop

    // 0x8022837C: lbu         $v0, 0x34B($s6)
    ctx->r2 = MEM_BU(ctx->r22, 0X34B);
    // 0x80228380: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80228384: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80228388: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022838C: lw          $v0, -0x66D8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X66D8);
    // 0x80228390: jalr        $v0
    // 0x80228394: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x80228394: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    after_4:
L_80228398:
    // 0x80228398: lbu         $a0, 0xC($s6)
    ctx->r4 = MEM_BU(ctx->r22, 0XC);
    // 0x8022839C: jal         0x80053ED8
    // 0x802283A0: addiu       $s0, $s6, 0x2D0
    ctx->r16 = ADD32(ctx->r22, 0X2D0);
    func_80053ED8_2F2D8(rdram, ctx);
        goto after_5;
    // 0x802283A0: addiu       $s0, $s6, 0x2D0
    ctx->r16 = ADD32(ctx->r22, 0X2D0);
    after_5:
    // 0x802283A4: addiu       $a0, $s6, 0x14
    ctx->r4 = ADD32(ctx->r22, 0X14);
    // 0x802283A8: addiu       $a1, $v0, 0x180
    ctx->r5 = ADD32(ctx->r2, 0X180);
    // 0x802283AC: jal         0x8009A3B4
    // 0x802283B0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x802283B0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_6:
    // 0x802283B4: lh          $v0, 0x14($s6)
    ctx->r2 = MEM_H(ctx->r22, 0X14);
    // 0x802283B8: lh          $v1, 0x16($s6)
    ctx->r3 = MEM_H(ctx->r22, 0X16);
    // 0x802283BC: lh          $a1, 0x18($s6)
    ctx->r5 = MEM_H(ctx->r22, 0X18);
    // 0x802283C0: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    // 0x802283C4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802283C8: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x802283CC: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x802283D0: sw          $v0, 0x1C($s6)
    MEM_W(0X1C, ctx->r22) = ctx->r2;
    // 0x802283D4: sw          $v1, 0x20($s6)
    MEM_W(0X20, ctx->r22) = ctx->r3;
    // 0x802283D8: jal         0x800504EC
    // 0x802283DC: sw          $a1, 0x24($s6)
    MEM_W(0X24, ctx->r22) = ctx->r5;
    func_800504EC_2B8EC(rdram, ctx);
        goto after_7;
    // 0x802283DC: sw          $a1, 0x24($s6)
    MEM_W(0X24, ctx->r22) = ctx->r5;
    after_7:
    // 0x802283E0: lhu         $v0, 0x330($s6)
    ctx->r2 = MEM_HU(ctx->r22, 0X330);
    // 0x802283E4: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x802283E8: sh          $v0, -0x3D80($at)
    MEM_H(-0X3D80, ctx->r1) = ctx->r2;
    // 0x802283EC: lhu         $v0, 0x332($s6)
    ctx->r2 = MEM_HU(ctx->r22, 0X332);
    // 0x802283F0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x802283F4: sh          $v0, -0x3D70($at)
    MEM_H(-0X3D70, ctx->r1) = ctx->r2;
    // 0x802283F8: jal         0x80051248
    // 0x802283FC: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    func_80051248_2C648(rdram, ctx);
        goto after_8;
    // 0x802283FC: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    after_8:
    // 0x80228400: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228404: addiu       $a1, $s6, 0x180
    ctx->r5 = ADD32(ctx->r22, 0X180);
    // 0x80228408: jal         0x8009A3B4
    // 0x8022840C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_9;
    // 0x8022840C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_9:
    // 0x80228410: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228414: lhu         $v0, 0x2D2($s6)
    ctx->r2 = MEM_HU(ctx->r22, 0X2D2);
    // 0x80228418: lbu         $v1, 0x1($s6)
    ctx->r3 = MEM_BU(ctx->r22, 0X1);
    // 0x8022841C: addiu       $a1, $zero, 0x118
    ctx->r5 = ADD32(0, 0X118);
    // 0x80228420: addiu       $s4, $s6, 0x2E8
    ctx->r20 = ADD32(ctx->r22, 0X2E8);
    // 0x80228424: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80228428: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x8022842C: addiu       $v0, $v0, -0xB8
    ctx->r2 = ADD32(ctx->r2, -0XB8);
    // 0x80228430: sh          $v0, 0x2D2($s6)
    MEM_H(0X2D2, ctx->r22) = ctx->r2;
    // 0x80228434: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x80228438: sw          $s4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r20;
    // 0x8022843C: lb          $v0, 0x73($s6)
    ctx->r2 = MEM_B(ctx->r22, 0X73);
    // 0x80228440: addiu       $s3, $zero, 0x80
    ctx->r19 = ADD32(0, 0X80);
    // 0x80228444: lui         $fp, 0x508
    ctx->r30 = S32(0X508 << 16);
    // 0x80228448: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8022844C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80228450: or          $v0, $v0, $fp
    ctx->r2 = ctx->r2 | ctx->r30;
    // 0x80228454: jal         0x80051E18
    // 0x80228458: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80051E18_2D218(rdram, ctx);
        goto after_10;
    // 0x80228458: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_10:
    // 0x8022845C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228460: addiu       $s5, $s6, 0x188
    ctx->r21 = ADD32(ctx->r22, 0X188);
    // 0x80228464: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x80228468: jal         0x8009A3B4
    // 0x8022846C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_11;
    // 0x8022846C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_11:
    // 0x80228470: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228474: addiu       $s7, $s6, 0x314
    ctx->r23 = ADD32(ctx->r22, 0X314);
    // 0x80228478: addu        $a1, $s7, $zero
    ctx->r5 = ADD32(ctx->r23, 0);
    // 0x8022847C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80228480: lh          $v0, 0x2D0($s6)
    ctx->r2 = MEM_H(ctx->r22, 0X2D0);
    // 0x80228484: lhu         $a2, 0x56($s6)
    ctx->r6 = MEM_HU(ctx->r22, 0X56);
    // 0x80228488: lh          $v1, 0x2D2($s6)
    ctx->r3 = MEM_H(ctx->r22, 0X2D2);
    // 0x8022848C: lh          $t0, 0x2D4($s6)
    ctx->r8 = MEM_H(ctx->r22, 0X2D4);
    // 0x80228490: addiu       $s1, $zero, 0x3C0
    ctx->r17 = ADD32(0, 0X3C0);
    // 0x80228494: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    // 0x80228498: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022849C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x802284A0: sll         $t0, $t0, 16
    ctx->r8 = S32(ctx->r8 << 16);
    // 0x802284A4: sw          $v0, 0x314($s6)
    MEM_W(0X314, ctx->r22) = ctx->r2;
    // 0x802284A8: sw          $v1, 0x318($s6)
    MEM_W(0X318, ctx->r22) = ctx->r3;
    // 0x802284AC: sw          $t0, 0x31C($s6)
    MEM_W(0X31C, ctx->r22) = ctx->r8;
    // 0x802284B0: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    // 0x802284B4: jal         0x8004DBA0
    // 0x802284B8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_12;
    // 0x802284B8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_12:
    // 0x802284BC: lbu         $v0, 0x1($s6)
    ctx->r2 = MEM_BU(ctx->r22, 0X1);
    // 0x802284C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802284C4: addiu       $a1, $zero, 0xB4
    ctx->r5 = ADD32(0, 0XB4);
    // 0x802284C8: sw          $s4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r20;
    // 0x802284CC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x802284D0: lb          $v0, 0x73($s6)
    ctx->r2 = MEM_B(ctx->r22, 0X73);
    // 0x802284D4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802284D8: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x802284DC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802284E0: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x802284E4: or          $v0, $v0, $fp
    ctx->r2 = ctx->r2 | ctx->r30;
    // 0x802284E8: jal         0x80051E18
    // 0x802284EC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80051E18_2D218(rdram, ctx);
        goto after_13;
    // 0x802284EC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_13:
    // 0x802284F0: addiu       $t3, $s6, 0x198
    ctx->r11 = ADD32(ctx->r22, 0X198);
    // 0x802284F4: sw          $t3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r11;
    // 0x802284F8: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x802284FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228500: jal         0x8009A3B4
    // 0x80228504: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_14;
    // 0x80228504: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_14:
    // 0x80228508: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022850C: addu        $a1, $s7, $zero
    ctx->r5 = ADD32(ctx->r23, 0);
    // 0x80228510: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80228514: lh          $v0, 0x2D0($s6)
    ctx->r2 = MEM_H(ctx->r22, 0X2D0);
    // 0x80228518: lhu         $a2, 0x56($s6)
    ctx->r6 = MEM_HU(ctx->r22, 0X56);
    // 0x8022851C: lh          $v1, 0x2D2($s6)
    ctx->r3 = MEM_H(ctx->r22, 0X2D2);
    // 0x80228520: lh          $t0, 0x2D4($s6)
    ctx->r8 = MEM_H(ctx->r22, 0X2D4);
    // 0x80228524: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    // 0x80228528: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022852C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80228530: sll         $t0, $t0, 16
    ctx->r8 = S32(ctx->r8 << 16);
    // 0x80228534: sw          $v0, 0x314($s6)
    MEM_W(0X314, ctx->r22) = ctx->r2;
    // 0x80228538: addiu       $v0, $zero, -0x3C0
    ctx->r2 = ADD32(0, -0X3C0);
    // 0x8022853C: sw          $v1, 0x318($s6)
    MEM_W(0X318, ctx->r22) = ctx->r3;
    // 0x80228540: sw          $t0, 0x31C($s6)
    MEM_W(0X31C, ctx->r22) = ctx->r8;
    // 0x80228544: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    // 0x80228548: jal         0x8004DBA0
    // 0x8022854C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_15;
    // 0x8022854C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_15:
    // 0x80228550: lbu         $v0, 0x1($s6)
    ctx->r2 = MEM_BU(ctx->r22, 0X1);
    // 0x80228554: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228558: addiu       $a1, $zero, 0xB4
    ctx->r5 = ADD32(0, 0XB4);
    // 0x8022855C: sw          $s4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r20;
    // 0x80228560: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80228564: lb          $v0, 0x73($s6)
    ctx->r2 = MEM_B(ctx->r22, 0X73);
    // 0x80228568: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022856C: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x80228570: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80228574: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80228578: or          $v0, $v0, $fp
    ctx->r2 = ctx->r2 | ctx->r30;
    // 0x8022857C: jal         0x80051E18
    // 0x80228580: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80051E18_2D218(rdram, ctx);
        goto after_16;
    // 0x80228580: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_16:
    // 0x80228584: addiu       $a0, $s6, 0x228
    ctx->r4 = ADD32(ctx->r22, 0X228);
    // 0x80228588: addiu       $s2, $s6, 0x324
    ctx->r18 = ADD32(ctx->r22, 0X324);
    // 0x8022858C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80228590: addu        $a2, $s7, $zero
    ctx->r6 = ADD32(ctx->r23, 0);
    // 0x80228594: addiu       $s1, $zero, 0xC59
    ctx->r17 = ADD32(0, 0XC59);
    // 0x80228598: sh          $zero, 0x324($s6)
    MEM_H(0X324, ctx->r22) = 0;
    // 0x8022859C: sh          $s1, 0x326($s6)
    MEM_H(0X326, ctx->r22) = ctx->r17;
    // 0x802285A0: jal         0x800308E8
    // 0x802285A4: sh          $zero, 0x328($s6)
    MEM_H(0X328, ctx->r22) = 0;
    func_800308E8_BCE8(rdram, ctx);
        goto after_17;
    // 0x802285A4: sh          $zero, 0x328($s6)
    MEM_H(0X328, ctx->r22) = 0;
    after_17:
    // 0x802285A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802285AC: lw          $a3, 0x314($s6)
    ctx->r7 = MEM_W(ctx->r22, 0X314);
    // 0x802285B0: lhu         $v0, 0x190($s6)
    ctx->r2 = MEM_HU(ctx->r22, 0X190);
    // 0x802285B4: lw          $t0, 0x318($s6)
    ctx->r8 = MEM_W(ctx->r22, 0X318);
    // 0x802285B8: lhu         $v1, 0x192($s6)
    ctx->r3 = MEM_HU(ctx->r22, 0X192);
    // 0x802285BC: lw          $t1, 0x31C($s6)
    ctx->r9 = MEM_W(ctx->r22, 0X31C);
    // 0x802285C0: lhu         $a2, 0x194($s6)
    ctx->r6 = MEM_HU(ctx->r22, 0X194);
    // 0x802285C4: lbu         $t2, 0x1($s6)
    ctx->r10 = MEM_BU(ctx->r22, 0X1);
    // 0x802285C8: addiu       $a1, $zero, 0x118
    ctx->r5 = ADD32(0, 0X118);
    // 0x802285CC: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x802285D0: addu        $v1, $v1, $t0
    ctx->r3 = ADD32(ctx->r3, ctx->r8);
    // 0x802285D4: addu        $a2, $a2, $t1
    ctx->r6 = ADD32(ctx->r6, ctx->r9);
    // 0x802285D8: sh          $v0, 0x2D0($s6)
    MEM_H(0X2D0, ctx->r22) = ctx->r2;
    // 0x802285DC: sh          $v1, 0x2D2($s6)
    MEM_H(0X2D2, ctx->r22) = ctx->r3;
    // 0x802285E0: sh          $a2, 0x2D4($s6)
    MEM_H(0X2D4, ctx->r22) = ctx->r6;
    // 0x802285E4: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x802285E8: sw          $s4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r20;
    // 0x802285EC: lb          $v0, 0x73($s6)
    ctx->r2 = MEM_B(ctx->r22, 0X73);
    // 0x802285F0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802285F4: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x802285F8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802285FC: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80228600: or          $v0, $v0, $fp
    ctx->r2 = ctx->r2 | ctx->r30;
    // 0x80228604: jal         0x80051E18
    // 0x80228608: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80051E18_2D218(rdram, ctx);
        goto after_18;
    // 0x80228608: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_18:
    // 0x8022860C: addiu       $a0, $s6, 0x268
    ctx->r4 = ADD32(ctx->r22, 0X268);
    // 0x80228610: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80228614: addu        $a2, $s7, $zero
    ctx->r6 = ADD32(ctx->r23, 0);
    // 0x80228618: sh          $zero, 0x324($s6)
    MEM_H(0X324, ctx->r22) = 0;
    // 0x8022861C: sh          $s1, 0x326($s6)
    MEM_H(0X326, ctx->r22) = ctx->r17;
    // 0x80228620: jal         0x800308E8
    // 0x80228624: sh          $zero, 0x328($s6)
    MEM_H(0X328, ctx->r22) = 0;
    func_800308E8_BCE8(rdram, ctx);
        goto after_19;
    // 0x80228624: sh          $zero, 0x328($s6)
    MEM_H(0X328, ctx->r22) = 0;
    after_19:
    // 0x80228628: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022862C: lw          $a3, 0x314($s6)
    ctx->r7 = MEM_W(ctx->r22, 0X314);
    // 0x80228630: lhu         $v0, 0x1A0($s6)
    ctx->r2 = MEM_HU(ctx->r22, 0X1A0);
    // 0x80228634: lw          $t0, 0x318($s6)
    ctx->r8 = MEM_W(ctx->r22, 0X318);
    // 0x80228638: lhu         $v1, 0x1A2($s6)
    ctx->r3 = MEM_HU(ctx->r22, 0X1A2);
    // 0x8022863C: lw          $t1, 0x31C($s6)
    ctx->r9 = MEM_W(ctx->r22, 0X31C);
    // 0x80228640: lhu         $a2, 0x1A4($s6)
    ctx->r6 = MEM_HU(ctx->r22, 0X1A4);
    // 0x80228644: lbu         $t2, 0x1($s6)
    ctx->r10 = MEM_BU(ctx->r22, 0X1);
    // 0x80228648: addiu       $a1, $zero, 0x118
    ctx->r5 = ADD32(0, 0X118);
    // 0x8022864C: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x80228650: addu        $v1, $v1, $t0
    ctx->r3 = ADD32(ctx->r3, ctx->r8);
    // 0x80228654: addu        $a2, $a2, $t1
    ctx->r6 = ADD32(ctx->r6, ctx->r9);
    // 0x80228658: sh          $v0, 0x2D0($s6)
    MEM_H(0X2D0, ctx->r22) = ctx->r2;
    // 0x8022865C: sh          $v1, 0x2D2($s6)
    MEM_H(0X2D2, ctx->r22) = ctx->r3;
    // 0x80228660: sh          $a2, 0x2D4($s6)
    MEM_H(0X2D4, ctx->r22) = ctx->r6;
    // 0x80228664: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80228668: sw          $s4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r20;
    // 0x8022866C: lb          $v0, 0x73($s6)
    ctx->r2 = MEM_B(ctx->r22, 0X73);
    // 0x80228670: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80228674: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x80228678: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8022867C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80228680: or          $v0, $v0, $fp
    ctx->r2 = ctx->r2 | ctx->r30;
    // 0x80228684: jal         0x80051E18
    // 0x80228688: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80051E18_2D218(rdram, ctx);
        goto after_20;
    // 0x80228688: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_20:
    // 0x8022868C: addiu       $s0, $s6, 0x2D8
    ctx->r16 = ADD32(ctx->r22, 0X2D8);
    // 0x80228690: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228694: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x80228698: jal         0x8009A3B4
    // 0x8022869C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_21;
    // 0x8022869C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_21:
    // 0x802286A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802286A4: addu        $a1, $s7, $zero
    ctx->r5 = ADD32(ctx->r23, 0);
    // 0x802286A8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x802286AC: lh          $v0, 0x2D8($s6)
    ctx->r2 = MEM_H(ctx->r22, 0X2D8);
    // 0x802286B0: lhu         $a2, 0x56($s6)
    ctx->r6 = MEM_HU(ctx->r22, 0X56);
    // 0x802286B4: lh          $v1, 0x2DA($s6)
    ctx->r3 = MEM_H(ctx->r22, 0X2DA);
    // 0x802286B8: lh          $t0, 0x2DC($s6)
    ctx->r8 = MEM_H(ctx->r22, 0X2DC);
    // 0x802286BC: addiu       $s1, $zero, -0xD40
    ctx->r17 = ADD32(0, -0XD40);
    // 0x802286C0: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    // 0x802286C4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802286C8: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x802286CC: sll         $t0, $t0, 16
    ctx->r8 = S32(ctx->r8 << 16);
    // 0x802286D0: sw          $v0, 0x314($s6)
    MEM_W(0X314, ctx->r22) = ctx->r2;
    // 0x802286D4: addiu       $v0, $zero, -0x698
    ctx->r2 = ADD32(0, -0X698);
    // 0x802286D8: sw          $v1, 0x318($s6)
    MEM_W(0X318, ctx->r22) = ctx->r3;
    // 0x802286DC: sw          $t0, 0x31C($s6)
    MEM_W(0X31C, ctx->r22) = ctx->r8;
    // 0x802286E0: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    // 0x802286E4: jal         0x8004DBA0
    // 0x802286E8: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_22;
    // 0x802286E8: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_22:
    // 0x802286EC: lh          $v0, 0x32C($s6)
    ctx->r2 = MEM_H(ctx->r22, 0X32C);
    // 0x802286F0: bltz        $v0, L_8022872C
    if (SIGNED(ctx->r2) < 0) {
        // 0x802286F4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022872C;
    }
    // 0x802286F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802286F8: lbu         $v0, 0x1($s6)
    ctx->r2 = MEM_BU(ctx->r22, 0X1);
    // 0x802286FC: addiu       $a1, $zero, 0x8C
    ctx->r5 = ADD32(0, 0X8C);
    // 0x80228700: addiu       $v1, $s6, 0x2F0
    ctx->r3 = ADD32(ctx->r22, 0X2F0);
    // 0x80228704: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
    // 0x80228708: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8022870C: lb          $v0, 0x73($s6)
    ctx->r2 = MEM_B(ctx->r22, 0X73);
    // 0x80228710: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80228714: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x80228718: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8022871C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80228720: or          $v0, $v0, $fp
    ctx->r2 = ctx->r2 | ctx->r30;
    // 0x80228724: jal         0x80051E18
    // 0x80228728: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80051E18_2D218(rdram, ctx);
        goto after_23;
    // 0x80228728: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_23:
L_8022872C:
    // 0x8022872C: addiu       $s0, $s6, 0x2E0
    ctx->r16 = ADD32(ctx->r22, 0X2E0);
    // 0x80228730: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x80228734: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228738: jal         0x8009A3B4
    // 0x8022873C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_24;
    // 0x8022873C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_24:
    // 0x80228740: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228744: addu        $a1, $s7, $zero
    ctx->r5 = ADD32(ctx->r23, 0);
    // 0x80228748: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022874C: lh          $v0, 0x2E0($s6)
    ctx->r2 = MEM_H(ctx->r22, 0X2E0);
    // 0x80228750: lhu         $a2, 0x56($s6)
    ctx->r6 = MEM_HU(ctx->r22, 0X56);
    // 0x80228754: lh          $v1, 0x2E2($s6)
    ctx->r3 = MEM_H(ctx->r22, 0X2E2);
    // 0x80228758: lh          $t0, 0x2E4($s6)
    ctx->r8 = MEM_H(ctx->r22, 0X2E4);
    // 0x8022875C: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    // 0x80228760: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228764: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80228768: sll         $t0, $t0, 16
    ctx->r8 = S32(ctx->r8 << 16);
    // 0x8022876C: sw          $v0, 0x314($s6)
    MEM_W(0X314, ctx->r22) = ctx->r2;
    // 0x80228770: addiu       $v0, $zero, 0x698
    ctx->r2 = ADD32(0, 0X698);
    // 0x80228774: sw          $v1, 0x318($s6)
    MEM_W(0X318, ctx->r22) = ctx->r3;
    // 0x80228778: sw          $t0, 0x31C($s6)
    MEM_W(0X31C, ctx->r22) = ctx->r8;
    // 0x8022877C: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    // 0x80228780: jal         0x8004DBA0
    // 0x80228784: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_25;
    // 0x80228784: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_25:
    // 0x80228788: lh          $v0, 0x32E($s6)
    ctx->r2 = MEM_H(ctx->r22, 0X32E);
    // 0x8022878C: bltz        $v0, L_802287C8
    if (SIGNED(ctx->r2) < 0) {
        // 0x80228790: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802287C8;
    }
    // 0x80228790: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228794: lbu         $v0, 0x1($s6)
    ctx->r2 = MEM_BU(ctx->r22, 0X1);
    // 0x80228798: addiu       $a1, $zero, 0x8C
    ctx->r5 = ADD32(0, 0X8C);
    // 0x8022879C: addiu       $v1, $s6, 0x2F8
    ctx->r3 = ADD32(ctx->r22, 0X2F8);
    // 0x802287A0: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
    // 0x802287A4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x802287A8: lb          $v0, 0x73($s6)
    ctx->r2 = MEM_B(ctx->r22, 0X73);
    // 0x802287AC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802287B0: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x802287B4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802287B8: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x802287BC: or          $v0, $v0, $fp
    ctx->r2 = ctx->r2 | ctx->r30;
    // 0x802287C0: jal         0x80051E18
    // 0x802287C4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80051E18_2D218(rdram, ctx);
        goto after_26;
    // 0x802287C4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_26:
L_802287C8:
    // 0x802287C8: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x802287CC: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
L_802287D0:
    // 0x802287D0: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x802287D4: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x802287D8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802287DC: addu        $v0, $t3, $v0
    ctx->r2 = ADD32(ctx->r11, ctx->r2);
    // 0x802287E0: sw          $zero, 0x20($v0)
    MEM_W(0X20, ctx->r2) = 0;
    // 0x802287E4: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x802287E8: sltiu       $v0, $v0, 0x3
    ctx->r2 = ctx->r2 < 0X3 ? 1 : 0;
    // 0x802287EC: bne         $v0, $zero, L_802287D0
    if (ctx->r2 != 0) {
        // 0x802287F0: andi        $v0, $v1, 0xFF
        ctx->r2 = ctx->r3 & 0XFF;
            goto L_802287D0;
    }
    // 0x802287F0: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x802287F4: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x802287F8: lw          $fp, 0x58($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X58);
    // 0x802287FC: lw          $s7, 0x54($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X54);
    // 0x80228800: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x80228804: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x80228808: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x8022880C: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x80228810: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x80228814: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x80228818: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x8022881C: jr          $ra
    // 0x80228820: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    TRACE_RETURN()
    return;
    // 0x80228820: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_80235540_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235540: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80235544: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80235548: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023554C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80235550: lw          $v1, -0x3A40($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A40);
    // 0x80235554: addiu       $a1, $s0, 0x4E0
    ctx->r5 = ADD32(ctx->r16, 0X4E0);
    // 0x80235558: addiu       $v0, $zero, 0x5A
    ctx->r2 = ADD32(0, 0X5A);
    // 0x8023555C: beq         $v1, $v0, L_80235578
    if (ctx->r3 == ctx->r2) {
        // 0x80235560: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80235578;
    }
    // 0x80235560: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80235564: addiu       $v0, $zero, 0x9B
    ctx->r2 = ADD32(0, 0X9B);
    // 0x80235568: beq         $v1, $v0, L_8023558C
    if (ctx->r3 == ctx->r2) {
        // 0x8023556C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023558C;
    }
    // 0x8023556C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235570: j           L_80235598
    // 0x80235574: nop

        goto L_80235598;
    // 0x80235574: nop

L_80235578:
    // 0x80235578: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023557C: jal         0x80235CD8
    // 0x80235580: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80235CD8_ovl27(rdram, ctx);
        goto after_0;
    // 0x80235580: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x80235584: j           L_80235598
    // 0x80235588: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
        goto L_80235598;
    // 0x80235588: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
L_8023558C:
    // 0x8023558C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80235590: jal         0x80050294
    // 0x80235594: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x80235594: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
L_80235598:
    // 0x80235598: lb          $v0, 0xE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE);
    // 0x8023559C: beq         $v0, $zero, L_802355B0
    if (ctx->r2 == 0) {
        // 0x802355A0: nop
    
            goto L_802355B0;
    }
    // 0x802355A0: nop

    // 0x802355A4: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x802355A8: addiu       $v0, $v0, -0x3
    ctx->r2 = ADD32(ctx->r2, -0X3);
    // 0x802355AC: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
L_802355B0:
    // 0x802355B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802355B4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802355B8: jr          $ra
    // 0x802355BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802355BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80235290_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235290: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80235294: bne         $v0, $zero, L_802352A8
    if (ctx->r2 != 0) {
        // 0x80235298: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_802352A8;
    }
    // 0x80235298: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8023529C: lw          $v1, 0x2C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X2C);
    // 0x802352A0: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x802352A4: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
L_802352A8:
    // 0x802352A8: jr          $ra
    // 0x802352AC: nop

    TRACE_RETURN()
    return;
    // 0x802352AC: nop

;}
RECOMP_FUNC void func_8022A410_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A410: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022A414: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8022A418: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8022A41C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8022A420: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8022A424: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8022A428: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8022A42C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022A430: lb          $v1, 0x366($s2)
    ctx->r3 = MEM_B(ctx->r18, 0X366);
    // 0x8022A434: lui         $s3, 0x8020
    ctx->r19 = S32(0X8020 << 16);
    // 0x8022A438: addiu       $s3, $s3, 0x49B0
    ctx->r19 = ADD32(ctx->r19, 0X49B0);
    // 0x8022A43C: bne         $v1, $zero, L_8022A450
    if (ctx->r3 != 0) {
        // 0x8022A440: addiu       $s4, $s2, 0x2E8
        ctx->r20 = ADD32(ctx->r18, 0X2E8);
            goto L_8022A450;
    }
    // 0x8022A440: addiu       $s4, $s2, 0x2E8
    ctx->r20 = ADD32(ctx->r18, 0X2E8);
    // 0x8022A444: lh          $v0, 0x358($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X358);
    // 0x8022A448: j           L_8022A460
    // 0x8022A44C: nop

        goto L_8022A460;
    // 0x8022A44C: nop

L_8022A450:
    // 0x8022A450: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A454: bne         $v1, $v0, L_8022A5EC
    if (ctx->r3 != ctx->r2) {
        // 0x8022A458: nop
    
            goto L_8022A5EC;
    }
    // 0x8022A458: nop

    // 0x8022A45C: lh          $v0, 0x35A($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X35A);
L_8022A460:
    // 0x8022A460: bgtz        $v0, L_8022A480
    if (SIGNED(ctx->r2) > 0) {
        // 0x8022A464: addiu       $v0, $zero, 0x14
        ctx->r2 = ADD32(0, 0X14);
            goto L_8022A480;
    }
    // 0x8022A464: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x8022A468: lbu         $v1, 0x366($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X366);
    // 0x8022A46C: sb          $v0, 0x364($s2)
    MEM_B(0X364, ctx->r18) = ctx->r2;
    // 0x8022A470: sb          $zero, 0x365($s2)
    MEM_B(0X365, ctx->r18) = 0;
    // 0x8022A474: xori        $v1, $v1, 0x1
    ctx->r3 = ctx->r3 ^ 0X1;
    // 0x8022A478: j           L_8022A5EC
    // 0x8022A47C: sb          $v1, 0x366($s2)
    MEM_B(0X366, ctx->r18) = ctx->r3;
        goto L_8022A5EC;
    // 0x8022A47C: sb          $v1, 0x366($s2)
    MEM_B(0X366, ctx->r18) = ctx->r3;
L_8022A480:
    // 0x8022A480: lb          $v0, 0x7E($s4)
    ctx->r2 = MEM_B(ctx->r20, 0X7E);
    // 0x8022A484: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x8022A488: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8022A48C: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x8022A490: jal         0x8004EFE4
    // 0x8022A494: ori         $s0, $v0, 0x4
    ctx->r16 = ctx->r2 | 0X4;
    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_0;
    // 0x8022A494: ori         $s0, $v0, 0x4
    ctx->r16 = ctx->r2 | 0X4;
    after_0:
    // 0x8022A498: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8022A49C: beq         $s1, $zero, L_8022A578
    if (ctx->r17 == 0) {
        // 0x8022A4A0: addiu       $a0, $zero, 0x1B1
        ctx->r4 = ADD32(0, 0X1B1);
            goto L_8022A578;
    }
    // 0x8022A4A0: addiu       $a0, $zero, 0x1B1
    ctx->r4 = ADD32(0, 0X1B1);
    // 0x8022A4A4: jal         0x8002A33C
    // 0x8022A4A8: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x8022A4A8: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    after_1:
    // 0x8022A4AC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022A4B0: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x8022A4B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A4B8: sll         $s0, $s0, 3
    ctx->r16 = S32(ctx->r16 << 3);
    // 0x8022A4BC: addu        $v1, $s2, $s0
    ctx->r3 = ADD32(ctx->r18, ctx->r16);
    // 0x8022A4C0: sb          $v0, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r2;
    // 0x8022A4C4: sb          $zero, 0x4($s1)
    MEM_B(0X4, ctx->r17) = 0;
    // 0x8022A4C8: sb          $v0, 0xF($s1)
    MEM_B(0XF, ctx->r17) = ctx->r2;
    // 0x8022A4CC: lhu         $v0, 0x180($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X180);
    // 0x8022A4D0: sh          $v0, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r2;
    // 0x8022A4D4: lhu         $v0, 0x182($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X182);
    // 0x8022A4D8: addiu       $v0, $v0, -0x20
    ctx->r2 = ADD32(ctx->r2, -0X20);
    // 0x8022A4DC: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x8022A4E0: lhu         $v0, 0x184($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X184);
    // 0x8022A4E4: lh          $v1, 0x16($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X16);
    // 0x8022A4E8: sh          $v0, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r2;
    // 0x8022A4EC: lh          $v0, 0x14($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X14);
    // 0x8022A4F0: lh          $a0, 0x18($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X18);
    // 0x8022A4F4: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022A4F8: sw          $v1, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r3;
    // 0x8022A4FC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A500: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022A504: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    // 0x8022A508: sw          $a0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r4;
    // 0x8022A50C: lb          $v0, 0x7E($s4)
    ctx->r2 = MEM_B(ctx->r20, 0X7E);
    // 0x8022A510: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    // 0x8022A514: lh          $a2, 0x56($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X56);
    // 0x8022A518: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022A51C: addu        $v0, $v0, $s4
    ctx->r2 = ADD32(ctx->r2, ctx->r20);
    // 0x8022A520: lh          $v0, 0x68($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X68);
    // 0x8022A524: addiu       $a3, $zero, 0x770
    ctx->r7 = ADD32(0, 0X770);
    // 0x8022A528: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x8022A52C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8022A530: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8022A534: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x8022A538: jal         0x8004DBA0
    // 0x8022A53C: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_2;
    // 0x8022A53C: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_2:
    // 0x8022A540: addiu       $a0, $s3, 0x14
    ctx->r4 = ADD32(ctx->r19, 0X14);
    // 0x8022A544: addiu       $s0, $s0, 0x180
    ctx->r16 = ADD32(ctx->r16, 0X180);
    // 0x8022A548: jal         0x8004DE68
    // 0x8022A54C: addu        $a1, $s2, $s0
    ctx->r5 = ADD32(ctx->r18, ctx->r16);
    func_8004DE68_29268(rdram, ctx);
        goto after_3;
    // 0x8022A54C: addu        $a1, $s2, $s0
    ctx->r5 = ADD32(ctx->r18, ctx->r16);
    after_3:
    // 0x8022A550: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022A554: lhu         $v0, 0x14($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X14);
    // 0x8022A558: lhu         $v1, 0x16($s3)
    ctx->r3 = MEM_HU(ctx->r19, 0X16);
    // 0x8022A55C: lhu         $a3, 0x18($s3)
    ctx->r7 = MEM_HU(ctx->r19, 0X18);
    // 0x8022A560: addiu       $a1, $s3, 0xC4
    ctx->r5 = ADD32(ctx->r19, 0XC4);
    // 0x8022A564: addiu       $a2, $zero, 0x62
    ctx->r6 = ADD32(0, 0X62);
    // 0x8022A568: sh          $v0, 0xC4($s3)
    MEM_H(0XC4, ctx->r19) = ctx->r2;
    // 0x8022A56C: sh          $v1, 0xC6($s3)
    MEM_H(0XC6, ctx->r19) = ctx->r3;
    // 0x8022A570: jal         0x8004E99C
    // 0x8022A574: sh          $a3, 0xC8($s3)
    MEM_H(0XC8, ctx->r19) = ctx->r7;
    func_8004E99C_29D9C(rdram, ctx);
        goto after_4;
    // 0x8022A574: sh          $a3, 0xC8($s3)
    MEM_H(0XC8, ctx->r19) = ctx->r7;
    after_4:
L_8022A578:
    // 0x8022A578: jal         0x8004F144
    // 0x8022A57C: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_5;
    // 0x8022A57C: nop

    after_5:
    // 0x8022A580: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8022A584: beq         $a0, $zero, L_8022A5BC
    if (ctx->r4 == 0) {
        // 0x8022A588: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_8022A5BC;
    }
    // 0x8022A588: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x8022A58C: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x8022A590: sb          $v0, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r2;
    // 0x8022A594: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A598: sb          $v1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r3;
    // 0x8022A59C: sb          $v1, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r3;
    // 0x8022A5A0: sb          $v0, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r2;
    // 0x8022A5A4: lhu         $v0, 0x14($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X14);
    // 0x8022A5A8: sh          $v0, 0x1C($a0)
    MEM_H(0X1C, ctx->r4) = ctx->r2;
    // 0x8022A5AC: lhu         $v0, 0x16($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X16);
    // 0x8022A5B0: sh          $v0, 0x1E($a0)
    MEM_H(0X1E, ctx->r4) = ctx->r2;
    // 0x8022A5B4: lhu         $v0, 0x18($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X18);
    // 0x8022A5B8: sh          $v0, 0x20($a0)
    MEM_H(0X20, ctx->r4) = ctx->r2;
L_8022A5BC:
    // 0x8022A5BC: lbu         $v0, 0x7E($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X7E);
    // 0x8022A5C0: lh          $a0, 0x70($s4)
    ctx->r4 = MEM_H(ctx->r20, 0X70);
    // 0x8022A5C4: addiu       $v1, $zero, 0x14
    ctx->r3 = ADD32(0, 0X14);
    // 0x8022A5C8: sb          $v1, 0x7C($s4)
    MEM_B(0X7C, ctx->r20) = ctx->r3;
    // 0x8022A5CC: sb          $zero, 0x7D($s4)
    MEM_B(0X7D, ctx->r20) = 0;
    // 0x8022A5D0: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x8022A5D4: bgtz        $a0, L_8022A5EC
    if (SIGNED(ctx->r4) > 0) {
        // 0x8022A5D8: sb          $v0, 0x7E($s4)
        MEM_B(0X7E, ctx->r20) = ctx->r2;
            goto L_8022A5EC;
    }
    // 0x8022A5D8: sb          $v0, 0x7E($s4)
    MEM_B(0X7E, ctx->r20) = ctx->r2;
    // 0x8022A5DC: lh          $v0, 0x72($s4)
    ctx->r2 = MEM_H(ctx->r20, 0X72);
    // 0x8022A5E0: bgtz        $v0, L_8022A5EC
    if (SIGNED(ctx->r2) > 0) {
        // 0x8022A5E4: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_8022A5EC;
    }
    // 0x8022A5E4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022A5E8: sb          $v0, 0x7E($s4)
    MEM_B(0X7E, ctx->r20) = ctx->r2;
L_8022A5EC:
    // 0x8022A5EC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8022A5F0: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8022A5F4: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8022A5F8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8022A5FC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022A600: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022A604: jr          $ra
    // 0x8022A608: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022A608: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80235C34_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235C34: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80235C38: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80235C3C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80235C40: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80235C44: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80235C48: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80235C4C: bne         $v0, $zero, L_80235CAC
    if (ctx->r2 != 0) {
        // 0x80235C50: addiu       $s1, $s0, 0x4E0
        ctx->r17 = ADD32(ctx->r16, 0X4E0);
            goto L_80235CAC;
    }
    // 0x80235C50: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    // 0x80235C54: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80235C58: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80235C5C: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x80235C60: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x80235C64: addiu       $v0, $zero, 0x96
    ctx->r2 = ADD32(0, 0X96);
    // 0x80235C68: sh          $zero, 0x16($s0)
    MEM_H(0X16, ctx->r16) = 0;
    // 0x80235C6C: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x80235C70: jal         0x80050294
    // 0x80235C74: sh          $zero, 0x56($s0)
    MEM_H(0X56, ctx->r16) = 0;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80235C74: sh          $zero, 0x56($s0)
    MEM_H(0X56, ctx->r16) = 0;
    after_0:
    // 0x80235C78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235C7C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80235C80: addiu       $a2, $zero, 0x1F
    ctx->r6 = ADD32(0, 0X1F);
    // 0x80235C84: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80235C88: jal         0x80235CD8
    // 0x80235C8C: sb          $v0, 0x114($s0)
    MEM_B(0X114, ctx->r16) = ctx->r2;
    func_80235CD8_ovl27(rdram, ctx);
        goto after_1;
    // 0x80235C8C: sb          $v0, 0x114($s0)
    MEM_B(0X114, ctx->r16) = ctx->r2;
    after_1:
    // 0x80235C90: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x80235C94: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80235C98: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x80235C9C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80235CA0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80235CA4: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x80235CA8: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_80235CAC:
    // 0x80235CAC: lb          $v0, 0xE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE);
    // 0x80235CB0: beq         $v0, $zero, L_80235CC4
    if (ctx->r2 == 0) {
        // 0x80235CB4: nop
    
            goto L_80235CC4;
    }
    // 0x80235CB4: nop

    // 0x80235CB8: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x80235CBC: addiu       $v0, $v0, -0x8
    ctx->r2 = ADD32(ctx->r2, -0X8);
    // 0x80235CC0: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
L_80235CC4:
    // 0x80235CC4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80235CC8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80235CCC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80235CD0: jr          $ra
    // 0x80235CD4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80235CD4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80230D54_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230D54: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80230D58: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80230D5C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80230D60: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80230D64: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80230D68: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80230D6C: lbu         $s0, 0x9($s1)
    ctx->r16 = MEM_BU(ctx->r17, 0X9);
    // 0x80230D70: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x80230D74: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x80230D78: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80230D7C: beq         $s0, $v0, L_80230DE4
    if (ctx->r16 == ctx->r2) {
        // 0x80230D80: slti        $v0, $s0, 0x2
        ctx->r2 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
            goto L_80230DE4;
    }
    // 0x80230D80: slti        $v0, $s0, 0x2
    ctx->r2 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
    // 0x80230D84: beql        $v0, $zero, L_80230D9C
    if (ctx->r2 == 0) {
        // 0x80230D88: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80230D9C;
    }
    goto skip_0;
    // 0x80230D88: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80230D8C: beq         $s0, $zero, L_80230DAC
    if (ctx->r16 == 0) {
        // 0x80230D90: nop
    
            goto L_80230DAC;
    }
    // 0x80230D90: nop

    // 0x80230D94: j           L_80230F14
    // 0x80230D98: nop

        goto L_80230F14;
    // 0x80230D98: nop

L_80230D9C:
    // 0x80230D9C: beq         $s0, $v0, L_80230ED8
    if (ctx->r16 == ctx->r2) {
        // 0x80230DA0: lui         $v1, 0x800
        ctx->r3 = S32(0X800 << 16);
            goto L_80230ED8;
    }
    // 0x80230DA0: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80230DA4: j           L_80230F14
    // 0x80230DA8: nop

        goto L_80230F14;
    // 0x80230DA8: nop

L_80230DAC:
    // 0x80230DAC: jal         0x8006FF84
    // 0x80230DB0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_0;
    // 0x80230DB0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_0:
    // 0x80230DB4: beq         $v0, $zero, L_80230F14
    if (ctx->r2 == 0) {
        // 0x80230DB8: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80230F14;
    }
    // 0x80230DB8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80230DBC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80230DC0: sb          $v0, 0x49B8($at)
    MEM_B(0X49B8, ctx->r1) = ctx->r2;
    // 0x80230DC4: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x80230DC8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80230DCC: sb          $zero, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = 0;
    // 0x80230DD0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80230DD4: sb          $v0, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r2;
    // 0x80230DD8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80230DDC: j           L_80230EC8
    // 0x80230DE0: sw          $zero, 0x49BC($at)
    MEM_W(0X49BC, ctx->r1) = 0;
        goto L_80230EC8;
    // 0x80230DE0: sw          $zero, 0x49BC($at)
    MEM_W(0X49BC, ctx->r1) = 0;
L_80230DE4:
    // 0x80230DE4: jal         0x80230F9C
    // 0x80230DE8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80230F9C_ovl27(rdram, ctx);
        goto after_1;
    // 0x80230DE8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x80230DEC: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80230DF0: beql        $v0, $zero, L_80230EB8
    if (ctx->r2 == 0) {
        // 0x80230DF4: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_80230EB8;
    }
    goto skip_1;
    // 0x80230DF4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    skip_1:
    // 0x80230DF8: lb          $v0, 0xD($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XD);
    // 0x80230DFC: bne         $v0, $zero, L_80230E20
    if (ctx->r2 != 0) {
        // 0x80230E00: addu        $a1, $v0, $zero
        ctx->r5 = ADD32(ctx->r2, 0);
            goto L_80230E20;
    }
    // 0x80230E00: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x80230E04: addiu       $a0, $s1, 0x38
    ctx->r4 = ADD32(ctx->r17, 0X38);
    // 0x80230E08: lb          $a3, 0xE($s1)
    ctx->r7 = MEM_B(ctx->r17, 0XE);
    // 0x80230E0C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80230E10: jal         0x800610AC
    // 0x80230E14: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_2;
    // 0x80230E14: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x80230E18: j           L_80230EC8
    // 0x80230E1C: nop

        goto L_80230EC8;
    // 0x80230E1C: nop

L_80230E20:
    // 0x80230E20: beq         $v0, $s0, L_80230EC8
    if (ctx->r2 == ctx->r16) {
        // 0x80230E24: andi        $v0, $v0, 0x80
        ctx->r2 = ctx->r2 & 0X80;
            goto L_80230EC8;
    }
    // 0x80230E24: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x80230E28: beq         $v0, $zero, L_80230E78
    if (ctx->r2 == 0) {
        // 0x80230E2C: lui         $a0, 0x6666
        ctx->r4 = S32(0X6666 << 16);
            goto L_80230E78;
    }
    // 0x80230E2C: lui         $a0, 0x6666
    ctx->r4 = S32(0X6666 << 16);
    // 0x80230E30: ori         $a0, $a0, 0x6667
    ctx->r4 = ctx->r4 | 0X6667;
    // 0x80230E34: lbu         $v1, 0xE($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XE);
    // 0x80230E38: andi        $v0, $a1, 0x7F
    ctx->r2 = ctx->r5 & 0X7F;
    // 0x80230E3C: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80230E40: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80230E44: sll         $a2, $v0, 2
    ctx->r6 = S32(ctx->r2 << 2);
    // 0x80230E48: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x80230E4C: sll         $a2, $a2, 1
    ctx->r6 = S32(ctx->r6 << 1);
    // 0x80230E50: mult        $a2, $a0
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80230E54: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80230E58: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80230E5C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80230E60: sra         $a2, $a2, 31
    ctx->r6 = S32(SIGNED(ctx->r6) >> 31);
    // 0x80230E64: mfhi        $t0
    ctx->r8 = hi;
    // 0x80230E68: sra         $v0, $t0, 2
    ctx->r2 = S32(SIGNED(ctx->r8) >> 2);
    // 0x80230E6C: nop

    // 0x80230E70: j           L_80230E98
    // 0x80230E74: subu        $a2, $v0, $a2
    ctx->r6 = SUB32(ctx->r2, ctx->r6);
        goto L_80230E98;
    // 0x80230E74: subu        $a2, $v0, $a2
    ctx->r6 = SUB32(ctx->r2, ctx->r6);
L_80230E78:
    // 0x80230E78: lb          $v1, 0xE($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XE);
    // 0x80230E7C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80230E80: beq         $v1, $v0, L_80230EB4
    if (ctx->r3 == ctx->r2) {
        // 0x80230E84: addu        $a2, $v1, $zero
        ctx->r6 = ADD32(ctx->r3, 0);
            goto L_80230EB4;
    }
    // 0x80230E84: addu        $a2, $v1, $zero
    ctx->r6 = ADD32(ctx->r3, 0);
    // 0x80230E88: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80230E8C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80230E90: andi        $a2, $a2, 0xFF
    ctx->r6 = ctx->r6 & 0XFF;
    // 0x80230E94: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
L_80230E98:
    // 0x80230E98: jal         0x80069754
    // 0x80230E9C: nop

    func_80069754_44B54(rdram, ctx);
        goto after_3;
    // 0x80230E9C: nop

    after_3:
    // 0x80230EA0: lb          $a0, 0xC($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XC);
    // 0x80230EA4: jal         0x8006036C
    // 0x80230EA8: addiu       $a0, $a0, 0x400
    ctx->r4 = ADD32(ctx->r4, 0X400);
    func_8006036C_3B76C(rdram, ctx);
        goto after_4;
    // 0x80230EA8: addiu       $a0, $a0, 0x400
    ctx->r4 = ADD32(ctx->r4, 0X400);
    after_4:
    // 0x80230EAC: j           L_80230EC8
    // 0x80230EB0: nop

        goto L_80230EC8;
    // 0x80230EB0: nop

L_80230EB4:
    // 0x80230EB4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_80230EB8:
    // 0x80230EB8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80230EBC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80230EC0: jal         0x80069754
    // 0x80230EC4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80069754_44B54(rdram, ctx);
        goto after_5;
    // 0x80230EC4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_5:
L_80230EC8:
    // 0x80230EC8: lbu         $v0, 0x9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X9);
    // 0x80230ECC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80230ED0: j           L_80230F14
    // 0x80230ED4: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
        goto L_80230F14;
    // 0x80230ED4: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
L_80230ED8:
    // 0x80230ED8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80230EDC: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80230EE0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80230EE4: bne         $v0, $zero, L_80230F14
    if (ctx->r2 != 0) {
        // 0x80230EE8: nop
    
            goto L_80230F14;
    }
    // 0x80230EE8: nop

    // 0x80230EEC: jal         0x80070050
    // 0x80230EF0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_80070050_4B450(rdram, ctx);
        goto after_6;
    // 0x80230EF0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_6:
    // 0x80230EF4: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x80230EF8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80230EFC: sw          $zero, 0x4B34($at)
    MEM_W(0X4B34, ctx->r1) = 0;
    // 0x80230F00: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80230F04: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    // 0x80230F08: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80230F0C: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x80230F10: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
L_80230F14:
    // 0x80230F14: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80230F18: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80230F1C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80230F20: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80230F24: jr          $ra
    // 0x80230F28: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80230F28: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022B7A8_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B7A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B7AC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B7B0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B7B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022B7B8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022B7BC: bne         $v0, $zero, L_8022B7E0
    if (ctx->r2 != 0) {
        // 0x8022B7C0: addiu       $v0, $zero, -0x50
        ctx->r2 = ADD32(0, -0X50);
            goto L_8022B7E0;
    }
    // 0x8022B7C0: addiu       $v0, $zero, -0x50
    ctx->r2 = ADD32(0, -0X50);
    // 0x8022B7C4: jal         0x800504EC
    // 0x8022B7C8: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    func_800504EC_2B8EC(rdram, ctx);
        goto after_0;
    // 0x8022B7C8: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022B7CC: jal         0x8005129C
    // 0x8022B7D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005129C_2C69C(rdram, ctx);
        goto after_1;
    // 0x8022B7D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022B7D4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022B7D8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022B7DC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022B7E0:
    // 0x8022B7E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022B7E4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B7E8: jr          $ra
    // 0x8022B7EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B7EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80234E60_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234E60: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80234E64: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80234E68: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80234E6C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80234E70: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x80234E74: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80234E78: addiu       $a1, $a1, 0x49B0
    ctx->r5 = ADD32(ctx->r5, 0X49B0);
    // 0x80234E7C: bne         $v0, $zero, L_80234ECC
    if (ctx->r2 != 0) {
        // 0x80234E80: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80234ECC;
    }
    // 0x80234E80: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80234E84: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
    // 0x80234E88: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
    // 0x80234E8C: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    // 0x80234E90: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    // 0x80234E94: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x80234E98: addiu       $v1, $zero, -0x3
    ctx->r3 = ADD32(0, -0X3);
    // 0x80234E9C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80234EA0: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x80234EA4: lw          $a0, 0x30($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X30);
    // 0x80234EA8: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x80234EAC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80234EB0: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x80234EB4: lui         $v0, 0x104
    ctx->r2 = S32(0X104 << 16);
    // 0x80234EB8: addiu       $a0, $a1, 0x428
    ctx->r4 = ADD32(ctx->r5, 0X428);
    // 0x80234EBC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80234EC0: sw          $v0, 0x4DD8($at)
    MEM_W(0X4DD8, ctx->r1) = ctx->r2;
    // 0x80234EC4: jal         0x8004DD04
    // 0x80234EC8: addiu       $a1, $a1, 0x438
    ctx->r5 = ADD32(ctx->r5, 0X438);
    func_8004DD04_29104(rdram, ctx);
        goto after_0;
    // 0x80234EC8: addiu       $a1, $a1, 0x438
    ctx->r5 = ADD32(ctx->r5, 0X438);
    after_0:
L_80234ECC:
    // 0x80234ECC: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x80234ED0: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80234ED4: bne         $v1, $v0, L_80234EF4
    if (ctx->r3 != ctx->r2) {
        // 0x80234ED8: addiu       $v0, $zero, 0x1E
        ctx->r2 = ADD32(0, 0X1E);
            goto L_80234EF4;
    }
    // 0x80234ED8: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x80234EDC: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
    // 0x80234EE0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80234EE4: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
    // 0x80234EE8: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    // 0x80234EEC: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x80234EF0: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
L_80234EF4:
    // 0x80234EF4: bne         $v1, $v0, L_80234F08
    if (ctx->r3 != ctx->r2) {
        // 0x80234EF8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80234F08;
    }
    // 0x80234EF8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80234EFC: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
    // 0x80234F00: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
    // 0x80234F04: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
L_80234F08:
    // 0x80234F08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80234F0C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80234F10: jr          $ra
    // 0x80234F14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80234F14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80237984_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237984: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80237988: sll         $a2, $a2, 2
    ctx->r6 = S32(ctx->r6 << 2);
    // 0x8023798C: sb          $zero, 0xE($a1)
    MEM_B(0XE, ctx->r5) = 0;
    // 0x80237990: sb          $zero, 0xC($a1)
    MEM_B(0XC, ctx->r5) = 0;
    // 0x80237994: sb          $v0, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r2;
    // 0x80237998: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8023799C: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x802379A0: lw          $v0, -0x3D74($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3D74);
    // 0x802379A4: jr          $ra
    // 0x802379A8: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x802379A8: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
;}
RECOMP_FUNC void func_8022E588_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E588: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022E58C: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x8022E590: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022E594: lw          $a0, 0xD0($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XD0);
    // 0x8022E598: sltiu       $v0, $a0, 0x4
    ctx->r2 = ctx->r4 < 0X4 ? 1 : 0;
    // 0x8022E59C: beq         $v0, $zero, L_8022E5E8
    if (ctx->r2 == 0) {
        // 0x8022E5A0: sll         $v0, $a0, 4
        ctx->r2 = S32(ctx->r4 << 4);
            goto L_8022E5E8;
    }
    // 0x8022E5A0: sll         $v0, $a0, 4
    ctx->r2 = S32(ctx->r4 << 4);
    // 0x8022E5A4: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x8022E5A8: subu        $a1, $a1, $v0
    ctx->r5 = SUB32(ctx->r5, ctx->r2);
    // 0x8022E5AC: sll         $v1, $a0, 3
    ctx->r3 = S32(ctx->r4 << 3);
    // 0x8022E5B0: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x8022E5B4: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x8022E5B8: addiu       $v0, $zero, 0xE0
    ctx->r2 = ADD32(0, 0XE0);
    // 0x8022E5BC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022E5C0: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x8022E5C4: sll         $a0, $a1, 16
    ctx->r4 = S32(ctx->r5 << 16);
    // 0x8022E5C8: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022E5CC: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8022E5D0: lui         $v1, 0x2E00
    ctx->r3 = S32(0X2E00 << 16);
    // 0x8022E5D4: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8022E5D8: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x8022E5DC: or          $a0, $a0, $a1
    ctx->r4 = ctx->r4 | ctx->r5;
    // 0x8022E5E0: j           L_8022E5FC
    // 0x8022E5E4: sw          $a0, 0x8C($a2)
    MEM_W(0X8C, ctx->r6) = ctx->r4;
        goto L_8022E5FC;
    // 0x8022E5E4: sw          $a0, 0x8C($a2)
    MEM_W(0X8C, ctx->r6) = ctx->r4;
L_8022E5E8:
    // 0x8022E5E8: lbu         $v0, 0x0($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X0);
    // 0x8022E5EC: lui         $v1, 0x2E00
    ctx->r3 = S32(0X2E00 << 16);
    // 0x8022E5F0: sw          $v1, 0x8C($a2)
    MEM_W(0X8C, ctx->r6) = ctx->r3;
    // 0x8022E5F4: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x8022E5F8: sb          $v0, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r2;
L_8022E5FC:
    // 0x8022E5FC: lw          $v0, 0xD0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0XD0);
    // 0x8022E600: lbu         $v1, 0xB($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0XB);
    // 0x8022E604: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022E608: bne         $v1, $zero, L_8022E620
    if (ctx->r3 != 0) {
        // 0x8022E60C: sw          $v0, 0xD0($a2)
        MEM_W(0XD0, ctx->r6) = ctx->r2;
            goto L_8022E620;
    }
    // 0x8022E60C: sw          $v0, 0xD0($a2)
    MEM_W(0XD0, ctx->r6) = ctx->r2;
    // 0x8022E610: jal         0x8004F4F8
    // 0x8022E614: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_0;
    // 0x8022E614: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
    after_0:
    // 0x8022E618: j           L_8022E628
    // 0x8022E61C: nop

        goto L_8022E628;
    // 0x8022E61C: nop

L_8022E620:
    // 0x8022E620: jal         0x8022EA80
    // 0x8022E624: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
    func_8022EA80_ovl27(rdram, ctx);
        goto after_1;
    // 0x8022E624: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
    after_1:
L_8022E628:
    // 0x8022E628: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022E62C: jr          $ra
    // 0x8022E630: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022E630: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80237ADC_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237ADC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80237AE0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80237AE4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80237AE8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80237AEC: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80237AF0: bne         $v0, $zero, L_80237B14
    if (ctx->r2 != 0) {
        // 0x80237AF4: addiu       $v0, $zero, -0x380
        ctx->r2 = ADD32(0, -0X380);
            goto L_80237B14;
    }
    // 0x80237AF4: addiu       $v0, $zero, -0x380
    ctx->r2 = ADD32(0, -0X380);
    // 0x80237AF8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80237AFC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80237B00: jal         0x80050294
    // 0x80237B04: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80237B04: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    after_0:
    // 0x80237B08: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80237B0C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80237B10: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80237B14:
    // 0x80237B14: jal         0x80051770
    // 0x80237B18: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80051770_2CB70(rdram, ctx);
        goto after_1;
    // 0x80237B18: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80237B1C: jal         0x80051248
    // 0x80237B20: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80051248_2C648(rdram, ctx);
        goto after_2;
    // 0x80237B20: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80237B24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80237B28: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80237B2C: jr          $ra
    // 0x80237B30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80237B30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80231210_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231210: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80231214: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80231218: lbu         $v1, 0x3($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X3);
    // 0x8023121C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80231220: bne         $v1, $v0, L_80231238
    if (ctx->r3 != ctx->r2) {
        // 0x80231224: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80231238;
    }
    // 0x80231224: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80231228: jal         0x80231000
    // 0x8023122C: nop

    func_80231000_ovl27(rdram, ctx);
        goto after_0;
    // 0x8023122C: nop

    after_0:
    // 0x80231230: j           L_8023125C
    // 0x80231234: nop

        goto L_8023125C;
    // 0x80231234: nop

L_80231238:
    // 0x80231238: lbu         $v1, 0x8($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X8);
    // 0x8023123C: beq         $v1, $v0, L_80231254
    if (ctx->r3 == ctx->r2) {
        // 0x80231240: nop
    
            goto L_80231254;
    }
    // 0x80231240: nop

    // 0x80231244: jal         0x802310D8
    // 0x80231248: nop

    func_802310D8_ovl27(rdram, ctx);
        goto after_1;
    // 0x80231248: nop

    after_1:
    // 0x8023124C: j           L_8023125C
    // 0x80231250: nop

        goto L_8023125C;
    // 0x80231250: nop

L_80231254:
    // 0x80231254: jal         0x8004F5C4
    // 0x80231258: nop

    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_2;
    // 0x80231258: nop

    after_2:
L_8023125C:
    // 0x8023125C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80231260: jr          $ra
    // 0x80231264: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80231264: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022F6EC_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F6EC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022F6F0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022F6F4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F6F8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022F6FC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022F700: lbu         $a0, 0xA($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XA);
    // 0x8022F704: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x8022F708: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x8022F70C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022F710: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x8022F714: beq         $v1, $v0, L_8022F760
    if (ctx->r3 == ctx->r2) {
        // 0x8022F718: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8022F760;
    }
    // 0x8022F718: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022F71C: beql        $v0, $zero, L_8022F734
    if (ctx->r2 == 0) {
        // 0x8022F720: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022F734;
    }
    goto skip_0;
    // 0x8022F720: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022F724: beq         $v1, $zero, L_8022F74C
    if (ctx->r3 == 0) {
        // 0x8022F728: addiu       $v0, $zero, 0x10
        ctx->r2 = ADD32(0, 0X10);
            goto L_8022F74C;
    }
    // 0x8022F728: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022F72C: j           L_8022F7E4
    // 0x8022F730: nop

        goto L_8022F7E4;
    // 0x8022F730: nop

L_8022F734:
    // 0x8022F734: beq         $v1, $v0, L_8022F790
    if (ctx->r3 == ctx->r2) {
        // 0x8022F738: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022F790;
    }
    // 0x8022F738: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022F73C: beq         $v1, $v0, L_8022F7B0
    if (ctx->r3 == ctx->r2) {
        // 0x8022F740: nop
    
            goto L_8022F7B0;
    }
    // 0x8022F740: nop

    // 0x8022F744: j           L_8022F7E4
    // 0x8022F748: nop

        goto L_8022F7E4;
    // 0x8022F748: nop

L_8022F74C:
    // 0x8022F74C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022F750: sb          $v0, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = ctx->r2;
    // 0x8022F754: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022F758: j           L_8022F780
    // 0x8022F75C: sb          $zero, 0x49BA($at)
    MEM_B(0X49BA, ctx->r1) = 0;
        goto L_8022F780;
    // 0x8022F75C: sb          $zero, 0x49BA($at)
    MEM_B(0X49BA, ctx->r1) = 0;
L_8022F760:
    // 0x8022F760: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8022F764: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022F768: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8022F76C: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x8022F770: lw          $a1, 0x27EC($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X27EC);
    // 0x8022F774: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022F778: jal         0x80061510
    // 0x8022F77C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    func_80061510_3C910(rdram, ctx);
        goto after_0;
    // 0x8022F77C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_0:
L_8022F780:
    // 0x8022F780: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022F784: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022F788: j           L_8022F7E4
    // 0x8022F78C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_8022F7E4;
    // 0x8022F78C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022F790:
    // 0x8022F790: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022F794: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022F798: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8022F79C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022F7A0: bne         $v0, $zero, L_8022F7E4
    if (ctx->r2 != 0) {
        // 0x8022F7A4: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_8022F7E4;
    }
    // 0x8022F7A4: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x8022F7A8: j           L_8022F7E4
    // 0x8022F7AC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_8022F7E4;
    // 0x8022F7AC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022F7B0:
    // 0x8022F7B0: jal         0x8003516C
    // 0x8022F7B4: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_1;
    // 0x8022F7B4: nop

    after_1:
    // 0x8022F7B8: bne         $v0, $zero, L_8022F7E4
    if (ctx->r2 != 0) {
        // 0x8022F7BC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022F7E4;
    }
    // 0x8022F7BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022F7C0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022F7C4: sw          $zero, 0x4B34($at)
    MEM_W(0X4B34, ctx->r1) = 0;
    // 0x8022F7C8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022F7CC: sb          $zero, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = 0;
    // 0x8022F7D0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022F7D4: sb          $zero, 0x49BA($at)
    MEM_B(0X49BA, ctx->r1) = 0;
    // 0x8022F7D8: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022F7DC: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022F7E0: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_8022F7E4:
    // 0x8022F7E4: lbu         $v0, 0x9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X9);
    // 0x8022F7E8: addiu       $v0, $v0, -0xB
    ctx->r2 = ADD32(ctx->r2, -0XB);
    // 0x8022F7EC: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x8022F7F0: beq         $v0, $zero, L_8022F814
    if (ctx->r2 == 0) {
        // 0x8022F7F4: nop
    
            goto L_8022F814;
    }
    // 0x8022F7F4: nop

    // 0x8022F7F8: jal         0x80061724
    // 0x8022F7FC: nop

    func_80061724_3CB24(rdram, ctx);
        goto after_2;
    // 0x8022F7FC: nop

    after_2:
    // 0x8022F800: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022F804: sw          $zero, 0x184($s1)
    MEM_W(0X184, ctx->r17) = 0;
    // 0x8022F808: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022F80C: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022F810: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_8022F814:
    // 0x8022F814: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022F818: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022F81C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022F820: jr          $ra
    // 0x8022F824: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022F824: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80232E04_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232E04: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80232E08: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80232E0C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80232E10: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80232E14: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80232E18: lbu         $v1, 0x5($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X5);
    // 0x80232E1C: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x80232E20: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x80232E24: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x80232E28: beq         $v0, $zero, L_80232F94
    if (ctx->r2 == 0) {
        // 0x80232E2C: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80232F94;
    }
    // 0x80232E2C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80232E30: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80232E34: addu        $at, $at, $v0
    gpr jr_addend_80232E3C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80232E38: lw          $v0, -0x38D8($at)
    ctx->r2 = ADD32(ctx->r1, -0X38D8);
    // 0x80232E3C: jr          $v0
    // 0x80232E40: nop

    switch (jr_addend_80232E3C >> 2) {
        case 0: goto L_80232E44; break;
        case 1: goto L_80232E74; break;
        case 2: goto L_80232E90; break;
        case 3: goto L_80232F30; break;
        case 4: goto L_80232EAC; break;
        case 5: goto L_80232F40; break;
        default: switch_error(__func__, 0x80232E3C, 0x8023C728);
    }
    // 0x80232E40: nop

L_80232E44:
    // 0x80232E44: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80232E48: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x80232E4C: bne         $v0, $zero, L_80232F94
    if (ctx->r2 != 0) {
        // 0x80232E50: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_80232F94;
    }
    // 0x80232E50: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80232E54: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80232E58: jal         0x80036B00
    // 0x80232E5C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80036B00_11F00(rdram, ctx);
        goto after_0;
    // 0x80232E5C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80232E60: addiu       $a0, $zero, 0x7E
    ctx->r4 = ADD32(0, 0X7E);
    // 0x80232E64: jal         0x8004CB2C
    // 0x80232E68: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_1;
    // 0x80232E68: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_1:
    // 0x80232E6C: j           L_80232F30
    // 0x80232E70: nop

        goto L_80232F30;
    // 0x80232E70: nop

L_80232E74:
    // 0x80232E74: jal         0x80070050
    // 0x80232E78: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80070050_4B450(rdram, ctx);
        goto after_2;
    // 0x80232E78: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
    // 0x80232E7C: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80232E80: sb          $zero, 0x76($s1)
    MEM_B(0X76, ctx->r17) = 0;
    // 0x80232E84: ori         $v0, $v0, 0x3
    ctx->r2 = ctx->r2 | 0X3;
    // 0x80232E88: j           L_80232F30
    // 0x80232E8C: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
        goto L_80232F30;
    // 0x80232E8C: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
L_80232E90:
    // 0x80232E90: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x80232E94: bne         $v0, $zero, L_80232F30
    if (ctx->r2 != 0) {
        // 0x80232E98: addiu       $a0, $zero, 0x19
        ctx->r4 = ADD32(0, 0X19);
            goto L_80232F30;
    }
    // 0x80232E98: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    // 0x80232E9C: jal         0x80036340
    // 0x80232EA0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_80036340_11740(rdram, ctx);
        goto after_3;
    // 0x80232EA0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_3:
    // 0x80232EA4: j           L_80232F30
    // 0x80232EA8: nop

        goto L_80232F30;
    // 0x80232EA8: nop

L_80232EAC:
    // 0x80232EAC: jal         0x80054578
    // 0x80232EB0: nop

    func_80054578_2F978(rdram, ctx);
        goto after_4;
    // 0x80232EB0: nop

    after_4:
    // 0x80232EB4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80232EB8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80232EBC: jal         0x80034844
    // 0x80232EC0: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    func_80034844_FC44(rdram, ctx);
        goto after_5;
    // 0x80232EC0: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    after_5:
    // 0x80232EC4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80232EC8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80232ECC: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x80232ED0: addiu       $v0, $zero, 0x19
    ctx->r2 = ADD32(0, 0X19);
    // 0x80232ED4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80232ED8: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x80232EDC: addiu       $v0, $zero, -0xCE4
    ctx->r2 = ADD32(0, -0XCE4);
    // 0x80232EE0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80232EE4: sh          $v0, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = ctx->r2;
    // 0x80232EE8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80232EEC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80232EF0: sh          $v0, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = ctx->r2;
    // 0x80232EF4: addiu       $v0, $zero, -0x99C
    ctx->r2 = ADD32(0, -0X99C);
    // 0x80232EF8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80232EFC: sh          $v0, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = ctx->r2;
    // 0x80232F00: addiu       $v0, $zero, 0xC00
    ctx->r2 = ADD32(0, 0XC00);
    // 0x80232F04: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80232F08: sh          $v0, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = ctx->r2;
    // 0x80232F0C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80232F10: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80232F14: sb          $zero, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = 0;
    // 0x80232F18: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80232F1C: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x80232F20: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80232F24: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x80232F28: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80232F2C: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
L_80232F30:
    // 0x80232F30: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x80232F34: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80232F38: j           L_80232F94
    // 0x80232F3C: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
        goto L_80232F94;
    // 0x80232F3C: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
L_80232F40:
    // 0x80232F40: jal         0x800712C4
    // 0x80232F44: addiu       $a0, $zero, 0x1B
    ctx->r4 = ADD32(0, 0X1B);
    func_800712C4_4C6C4(rdram, ctx);
        goto after_6;
    // 0x80232F44: addiu       $a0, $zero, 0x1B
    ctx->r4 = ADD32(0, 0X1B);
    after_6:
    // 0x80232F48: jal         0x800712C4
    // 0x80232F4C: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    func_800712C4_4C6C4(rdram, ctx);
        goto after_7;
    // 0x80232F4C: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    after_7:
    // 0x80232F50: jal         0x800712C4
    // 0x80232F54: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    func_800712C4_4C6C4(rdram, ctx);
        goto after_8;
    // 0x80232F54: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    after_8:
    // 0x80232F58: jal         0x800712C4
    // 0x80232F5C: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    func_800712C4_4C6C4(rdram, ctx);
        goto after_9;
    // 0x80232F5C: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    after_9:
    // 0x80232F60: jal         0x800712C4
    // 0x80232F64: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
    func_800712C4_4C6C4(rdram, ctx);
        goto after_10;
    // 0x80232F64: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
    after_10:
    // 0x80232F68: jal         0x800712C4
    // 0x80232F6C: addiu       $a0, $zero, 0x27
    ctx->r4 = ADD32(0, 0X27);
    func_800712C4_4C6C4(rdram, ctx);
        goto after_11;
    // 0x80232F6C: addiu       $a0, $zero, 0x27
    ctx->r4 = ADD32(0, 0X27);
    after_11:
    // 0x80232F70: jal         0x80234214
    // 0x80232F74: nop

    func_80234214_ovl27(rdram, ctx);
        goto after_12;
    // 0x80232F74: nop

    after_12:
    // 0x80232F78: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
    // 0x80232F7C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80232F80: jal         0x8002A2F8
    // 0x80232F84: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_13;
    // 0x80232F84: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_13:
    // 0x80232F88: jal         0x80036E48
    // 0x80232F8C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_80036E48_12248(rdram, ctx);
        goto after_14;
    // 0x80232F8C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_14:
    // 0x80232F90: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
L_80232F94:
    // 0x80232F94: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80232F98: beq         $v0, $zero, L_80232FB0
    if (ctx->r2 == 0) {
        // 0x80232F9C: nop
    
            goto L_80232FB0;
    }
    // 0x80232F9C: nop

    // 0x80232FA0: jal         0x8005FB90
    // 0x80232FA4: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_15;
    // 0x80232FA4: nop

    after_15:
    // 0x80232FA8: jal         0x80060018
    // 0x80232FAC: nop

    func_80060018_3B418(rdram, ctx);
        goto after_16;
    // 0x80232FAC: nop

    after_16:
L_80232FB0:
    // 0x80232FB0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80232FB4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80232FB8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80232FBC: jr          $ra
    // 0x80232FC0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80232FC0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022F314_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F314: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022F318: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022F31C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022F320: addiu       $a0, $s1, 0x38
    ctx->r4 = ADD32(ctx->r17, 0X38);
    // 0x8022F324: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022F328: jal         0x8003E6BC
    // 0x8022F32C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_0;
    // 0x8022F32C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x8022F330: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022F334: addiu       $a0, $a0, 0x49C4
    ctx->r4 = ADD32(ctx->r4, 0X49C4);
    // 0x8022F338: jal         0x8003E6BC
    // 0x8022F33C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_1;
    // 0x8022F33C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_1:
    // 0x8022F340: bne         $s0, $v0, L_8022F368
    if (ctx->r16 != ctx->r2) {
        // 0x8022F344: nop
    
            goto L_8022F368;
    }
    // 0x8022F344: nop

    // 0x8022F348: jal         0x8006033C
    // 0x8022F34C: addiu       $a0, $zero, 0x7B1
    ctx->r4 = ADD32(0, 0X7B1);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x8022F34C: addiu       $a0, $zero, 0x7B1
    ctx->r4 = ADD32(0, 0X7B1);
    after_2:
    // 0x8022F350: bne         $v0, $zero, L_8022F368
    if (ctx->r2 != 0) {
        // 0x8022F354: nop
    
            goto L_8022F368;
    }
    // 0x8022F354: nop

    // 0x8022F358: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x8022F35C: sb          $zero, 0xB($s1)
    MEM_B(0XB, ctx->r17) = 0;
    // 0x8022F360: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022F364: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
L_8022F368:
    // 0x8022F368: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022F36C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022F370: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022F374: jr          $ra
    // 0x8022F378: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022F378: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022C3B4_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C3B4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022C3B8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022C3BC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022C3C0: jal         0x8003E934
    // 0x8022C3C4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_0;
    // 0x8022C3C4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x8022C3C8: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022C3CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C3D0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022C3D4: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022C3D8: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x8022C3DC: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x8022C3E0: lh          $t0, 0x18($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X18);
    // 0x8022C3E4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022C3E8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C3EC: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022C3F0: sll         $t0, $t0, 16
    ctx->r8 = S32(ctx->r8 << 16);
    // 0x8022C3F4: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x8022C3F8: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x8022C3FC: jal         0x8004DA90
    // 0x8022C400: sw          $t0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r8;
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x8022C400: sw          $t0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r8;
    after_1:
    // 0x8022C404: lhu         $v0, 0x35E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X35E);
    // 0x8022C408: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022C40C: sh          $v0, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = ctx->r2;
    // 0x8022C410: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x8022C414: bne         $v0, $zero, L_8022C420
    if (ctx->r2 != 0) {
        // 0x8022C418: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022C420;
    }
    // 0x8022C418: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C41C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022C420:
    // 0x8022C420: lw          $v0, 0x360($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X360);
    // 0x8022C424: bne         $v0, $zero, L_8022C4C0
    if (ctx->r2 != 0) {
        // 0x8022C428: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022C4C0;
    }
    // 0x8022C428: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C42C: andi        $a1, $a1, 0xFFFF
    ctx->r5 = ctx->r5 & 0XFFFF;
    // 0x8022C430: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    // 0x8022C434: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022C438: lhu         $a0, 0x49C4($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X49C4);
    // 0x8022C43C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8022C440: lhu         $v1, 0x49C8($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X49C8);
    // 0x8022C444: andi        $a3, $a3, 0xFFFF
    ctx->r7 = ctx->r7 & 0XFFFF;
    // 0x8022C448: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x8022C44C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8022C450: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022C454: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x8022C458: sll         $t0, $a0, 16
    ctx->r8 = S32(ctx->r4 << 16);
    // 0x8022C45C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022C460: or          $a1, $a1, $v1
    ctx->r5 = ctx->r5 | ctx->r3;
    // 0x8022C464: lui         $v1, 0xFFFF
    ctx->r3 = S32(0XFFFF << 16);
    // 0x8022C468: and         $a1, $a1, $v1
    ctx->r5 = ctx->r5 & ctx->r3;
    // 0x8022C46C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C470: or          $a2, $a2, $v0
    ctx->r6 = ctx->r6 | ctx->r2;
    // 0x8022C474: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x8022C478: and         $a2, $a2, $v1
    ctx->r6 = ctx->r6 & ctx->r3;
    // 0x8022C47C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022C480: lhu         $a0, 0x49C6($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X49C6);
    // 0x8022C484: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C488: or          $a3, $a3, $v0
    ctx->r7 = ctx->r7 | ctx->r2;
    // 0x8022C48C: and         $a3, $a3, $v1
    ctx->r7 = ctx->r7 & ctx->r3;
    // 0x8022C490: or          $a0, $t0, $a0
    ctx->r4 = ctx->r8 | ctx->r4;
    // 0x8022C494: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022C498: lhu         $v0, 0x49CA($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X49CA);
    // 0x8022C49C: lhu         $v1, 0x16($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X16);
    // 0x8022C4A0: lhu         $t0, 0x1A($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X1A);
    // 0x8022C4A4: or          $a1, $a1, $v0
    ctx->r5 = ctx->r5 | ctx->r2;
    // 0x8022C4A8: or          $a2, $a2, $v1
    ctx->r6 = ctx->r6 | ctx->r3;
    // 0x8022C4AC: jal         0x8022CE54
    // 0x8022C4B0: or          $a3, $a3, $t0
    ctx->r7 = ctx->r7 | ctx->r8;
    func_8022CE54_ovl27(rdram, ctx);
        goto after_2;
    // 0x8022C4B0: or          $a3, $a3, $t0
    ctx->r7 = ctx->r7 | ctx->r8;
    after_2:
    // 0x8022C4B4: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022C4B8: beq         $v0, $zero, L_8022C4C4
    if (ctx->r2 == 0) {
        // 0x8022C4BC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022C4C4;
    }
    // 0x8022C4BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022C4C0:
    // 0x8022C4C0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022C4C4:
    // 0x8022C4C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022C4C8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022C4CC: jr          $ra
    // 0x8022C4D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022C4D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80235870_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235870: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80235874: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80235878: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023587C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80235880: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80235884: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80235888: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8023588C: bne         $v0, $zero, L_802358C0
    if (ctx->r2 != 0) {
        // 0x80235890: addiu       $s1, $s0, 0x4E0
        ctx->r17 = ADD32(ctx->r16, 0X4E0);
            goto L_802358C0;
    }
    // 0x80235890: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    // 0x80235894: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x80235898: jal         0x80050294
    // 0x8023589C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x8023589C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x802358A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802358A4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802358A8: jal         0x80235CD8
    // 0x802358AC: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    func_80235CD8_ovl27(rdram, ctx);
        goto after_1;
    // 0x802358AC: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    after_1:
    // 0x802358B0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802358B4: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x802358B8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802358BC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802358C0:
    // 0x802358C0: lui         $s2, 0x801C
    ctx->r18 = S32(0X801C << 16);
    // 0x802358C4: addiu       $s2, $s2, -0x3A40
    ctx->r18 = ADD32(ctx->r18, -0X3A40);
    // 0x802358C8: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
    // 0x802358CC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802358D0: bne         $v1, $v0, L_802358F0
    if (ctx->r3 != ctx->r2) {
        // 0x802358D4: addiu       $v0, $zero, 0x3C
        ctx->r2 = ADD32(0, 0X3C);
            goto L_802358F0;
    }
    // 0x802358D4: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x802358D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802358DC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802358E0: jal         0x80235CD8
    // 0x802358E4: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    func_80235CD8_ovl27(rdram, ctx);
        goto after_2;
    // 0x802358E4: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    after_2:
    // 0x802358E8: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
    // 0x802358EC: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
L_802358F0:
    // 0x802358F0: bne         $v1, $v0, L_80235904
    if (ctx->r3 != ctx->r2) {
        // 0x802358F4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80235904;
    }
    // 0x802358F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802358F8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802358FC: jal         0x80235CD8
    // 0x80235900: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    func_80235CD8_ovl27(rdram, ctx);
        goto after_3;
    // 0x80235900: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    after_3:
L_80235904:
    // 0x80235904: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80235908: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8023590C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80235910: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80235914: jr          $ra
    // 0x80235918: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80235918: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022ADD4_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022ADD4: lb          $v1, 0xA7($a0)
    ctx->r3 = MEM_B(ctx->r4, 0XA7);
    // 0x8022ADD8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022ADDC: bne         $v1, $v0, L_8022ADFC
    if (ctx->r3 != ctx->r2) {
        // 0x8022ADE0: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_8022ADFC;
    }
    // 0x8022ADE0: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022ADE4: lbu         $a1, 0x9($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X9);
    // 0x8022ADE8: andi        $v1, $a1, 0xFF
    ctx->r3 = ctx->r5 & 0XFF;
    // 0x8022ADEC: bne         $v1, $v0, L_8022ADF8
    if (ctx->r3 != ctx->r2) {
        // 0x8022ADF0: addiu       $v0, $a1, 0x1
        ctx->r2 = ADD32(ctx->r5, 0X1);
            goto L_8022ADF8;
    }
    // 0x8022ADF0: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
    // 0x8022ADF4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022ADF8:
    // 0x8022ADF8: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
L_8022ADFC:
    // 0x8022ADFC: jr          $ra
    // 0x8022AE00: nop

    TRACE_RETURN()
    return;
    // 0x8022AE00: nop

;}
RECOMP_FUNC void func_802350C0_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802350C0: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x802350C4: bne         $v0, $zero, L_802350D8
    if (ctx->r2 != 0) {
        // 0x802350C8: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_802350D8;
    }
    // 0x802350C8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802350CC: lw          $v1, 0x28($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X28);
    // 0x802350D0: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x802350D4: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
L_802350D8:
    // 0x802350D8: jr          $ra
    // 0x802350DC: nop

    TRACE_RETURN()
    return;
    // 0x802350DC: nop

;}
RECOMP_FUNC void func_802316D4_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802316D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802316D8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802316DC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802316E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802316E4: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x802316E8: sll         $v1, $v0, 24
    ctx->r3 = S32(ctx->r2 << 24);
    // 0x802316EC: sra         $a0, $v1, 24
    ctx->r4 = S32(SIGNED(ctx->r3) >> 24);
    // 0x802316F0: blez        $a0, L_802317E4
    if (SIGNED(ctx->r4) <= 0) {
        // 0x802316F4: lui         $v0, 0x5555
        ctx->r2 = S32(0X5555 << 16);
            goto L_802317E4;
    }
    // 0x802316F4: lui         $v0, 0x5555
    ctx->r2 = S32(0X5555 << 16);
    // 0x802316F8: ori         $v0, $v0, 0x5556
    ctx->r2 = ctx->r2 | 0X5556;
    // 0x802316FC: mult        $a0, $v0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80231700: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
    // 0x80231704: mfhi        $a1
    ctx->r5 = hi;
    // 0x80231708: subu        $v1, $a1, $v1
    ctx->r3 = SUB32(ctx->r5, ctx->r3);
    // 0x8023170C: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80231710: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80231714: subu        $v0, $a0, $v0
    ctx->r2 = SUB32(ctx->r4, ctx->r2);
    // 0x80231718: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8023171C: bne         $v0, $zero, L_8023173C
    if (ctx->r2 != 0) {
        // 0x80231720: nop
    
            goto L_8023173C;
    }
    // 0x80231720: nop

    // 0x80231724: lbu         $v1, 0x22($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X22);
    // 0x80231728: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x8023172C: sltiu       $v0, $v0, 0x80
    ctx->r2 = ctx->r2 < 0X80 ? 1 : 0;
    // 0x80231730: beq         $v0, $zero, L_8023173C
    if (ctx->r2 == 0) {
        // 0x80231734: addiu       $v0, $v1, 0x20
        ctx->r2 = ADD32(ctx->r3, 0X20);
            goto L_8023173C;
    }
    // 0x80231734: addiu       $v0, $v1, 0x20
    ctx->r2 = ADD32(ctx->r3, 0X20);
    // 0x80231738: sb          $v0, 0x22($s0)
    MEM_B(0X22, ctx->r16) = ctx->r2;
L_8023173C:
    // 0x8023173C: jal         0x800A3450
    // 0x80231740: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x80231740: nop

    after_0:
    // 0x80231744: lhu         $v1, 0x1C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X1C);
    // 0x80231748: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8023174C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80231750: jal         0x800A3450
    // 0x80231754: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x80231754: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    after_1:
    // 0x80231758: lhu         $v1, 0x20($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X20);
    // 0x8023175C: lbu         $a0, 0xE($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XE);
    // 0x80231760: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80231764: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80231768: andi        $a0, $a0, 0x1
    ctx->r4 = ctx->r4 & 0X1;
    // 0x8023176C: bne         $a0, $zero, L_8023178C
    if (ctx->r4 != 0) {
        // 0x80231770: sh          $v1, 0x20($s0)
        MEM_H(0X20, ctx->r16) = ctx->r3;
            goto L_8023178C;
    }
    // 0x80231770: sh          $v1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r3;
    // 0x80231774: jal         0x800A3450
    // 0x80231778: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x80231778: nop

    after_2:
    // 0x8023177C: lhu         $v1, 0x1E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X1E);
    // 0x80231780: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80231784: j           L_802317A0
    // 0x80231788: addiu       $v1, $v1, -0x2
    ctx->r3 = ADD32(ctx->r3, -0X2);
        goto L_802317A0;
    // 0x80231788: addiu       $v1, $v1, -0x2
    ctx->r3 = ADD32(ctx->r3, -0X2);
L_8023178C:
    // 0x8023178C: jal         0x800A3450
    // 0x80231790: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x80231790: nop

    after_3:
    // 0x80231794: lhu         $v1, 0x1E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X1E);
    // 0x80231798: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8023179C: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
L_802317A0:
    // 0x802317A0: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x802317A4: sh          $v1, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r3;
    // 0x802317A8: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x802317AC: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x802317B0: bne         $v0, $zero, L_802317C4
    if (ctx->r2 != 0) {
        // 0x802317B4: lui         $a0, 0xFFFD
        ctx->r4 = S32(0XFFFD << 16);
            goto L_802317C4;
    }
    // 0x802317B4: lui         $a0, 0xFFFD
    ctx->r4 = S32(0XFFFD << 16);
    // 0x802317B8: lhu         $v0, 0x24($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X24);
    // 0x802317BC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802317C0: sh          $v0, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r2;
L_802317C4:
    // 0x802317C4: lbu         $v1, 0xE($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XE);
    // 0x802317C8: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    // 0x802317CC: ori         $a0, $a0, 0xFDFE
    ctx->r4 = ctx->r4 | 0XFDFE;
    // 0x802317D0: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x802317D4: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x802317D8: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
    // 0x802317DC: j           L_802317EC
    // 0x802317E0: sb          $v1, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r3;
        goto L_802317EC;
    // 0x802317E0: sb          $v1, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r3;
L_802317E4:
    // 0x802317E4: jal         0x8004F5C4
    // 0x802317E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_4;
    // 0x802317E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
L_802317EC:
    // 0x802317EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802317F0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802317F4: jr          $ra
    // 0x802317F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802317F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802295C0_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802295C0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802295C4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802295C8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802295CC: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x802295D0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x802295D4: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x802295D8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802295DC: bne         $v1, $v0, L_802296CC
    if (ctx->r3 != ctx->r2) {
        // 0x802295E0: nop
    
            goto L_802296CC;
    }
    // 0x802295E0: nop

    // 0x802295E4: lh          $v0, 0x334($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X334);
    // 0x802295E8: bne         $v0, $zero, L_802296A8
    if (ctx->r2 != 0) {
        // 0x802295EC: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_802296A8;
    }
    // 0x802295EC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802295F0: lbu         $v1, 0x347($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X347);
    // 0x802295F4: addiu       $a0, $s0, 0x324
    ctx->r4 = ADD32(ctx->r16, 0X324);
    // 0x802295F8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x802295FC: andi        $v1, $v1, 0x7
    ctx->r3 = ctx->r3 & 0X7;
    // 0x80229600: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80229604: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80229608: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022960C: lui         $s1, 0x8024
    ctx->r17 = S32(0X8024 << 16);
    // 0x80229610: addu        $s1, $s1, $v0
    ctx->r17 = ADD32(ctx->r17, ctx->r2);
    // 0x80229614: lbu         $s1, -0x6668($s1)
    ctx->r17 = MEM_BU(ctx->r17, -0X6668);
    // 0x80229618: sll         $a1, $v1, 2
    ctx->r5 = S32(ctx->r3 << 2);
    // 0x8022961C: addu        $a1, $a1, $v1
    ctx->r5 = ADD32(ctx->r5, ctx->r3);
    // 0x80229620: sll         $a1, $a1, 1
    ctx->r5 = S32(ctx->r5 << 1);
    // 0x80229624: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80229628: addiu       $v0, $v0, -0x6666
    ctx->r2 = ADD32(ctx->r2, -0X6666);
    // 0x8022962C: jal         0x8009A3B4
    // 0x80229630: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80229630: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    after_0:
    // 0x80229634: jal         0x8004F144
    // 0x80229638: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_1;
    // 0x80229638: nop

    after_1:
    // 0x8022963C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x80229640: beq         $a1, $zero, L_802296A0
    if (ctx->r5 == 0) {
        // 0x80229644: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_802296A0;
    }
    // 0x80229644: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80229648: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x8022964C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80229650: sb          $v0, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r2;
    // 0x80229654: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80229658: sb          $v0, 0x3($a1)
    MEM_B(0X3, ctx->r5) = ctx->r2;
    // 0x8022965C: lbu         $v0, 0x347($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X347);
    // 0x80229660: sll         $a0, $s1, 3
    ctx->r4 = S32(ctx->r17 << 3);
    // 0x80229664: addu        $a0, $s0, $a0
    ctx->r4 = ADD32(ctx->r16, ctx->r4);
    // 0x80229668: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8022966C: sb          $v0, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r2;
    // 0x80229670: lhu         $v0, 0x180($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X180);
    // 0x80229674: lhu         $v1, 0x324($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X324);
    // 0x80229678: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022967C: sh          $v0, 0x38($a1)
    MEM_H(0X38, ctx->r5) = ctx->r2;
    // 0x80229680: lhu         $v0, 0x182($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X182);
    // 0x80229684: lhu         $v1, 0x326($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X326);
    // 0x80229688: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022968C: sh          $v0, 0x3A($a1)
    MEM_H(0X3A, ctx->r5) = ctx->r2;
    // 0x80229690: lhu         $v0, 0x184($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X184);
    // 0x80229694: lhu         $v1, 0x328($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X328);
    // 0x80229698: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022969C: sh          $v0, 0x3C($a1)
    MEM_H(0X3C, ctx->r5) = ctx->r2;
L_802296A0:
    // 0x802296A0: j           L_802296AC
    // 0x802296A4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_802296AC;
    // 0x802296A4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_802296A8:
    // 0x802296A8: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
L_802296AC:
    // 0x802296AC: sh          $v0, 0x334($s0)
    MEM_H(0X334, ctx->r16) = ctx->r2;
    // 0x802296B0: jal         0x8006033C
    // 0x802296B4: addiu       $a0, $zero, 0x52
    ctx->r4 = ADD32(0, 0X52);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x802296B4: addiu       $a0, $zero, 0x52
    ctx->r4 = ADD32(0, 0X52);
    after_2:
    // 0x802296B8: beq         $v0, $zero, L_802296CC
    if (ctx->r2 == 0) {
        // 0x802296BC: nop
    
            goto L_802296CC;
    }
    // 0x802296BC: nop

    // 0x802296C0: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x802296C4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802296C8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_802296CC:
    // 0x802296CC: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x802296D0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x802296D4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802296D8: jr          $ra
    // 0x802296DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x802296DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80233198_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233198: jr          $ra
    // 0x8023319C: nop

    TRACE_RETURN()
    return;
    // 0x8023319C: nop

;}
RECOMP_FUNC void func_80227468_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227468: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022746C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227470: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227474: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80227478: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022747C: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80227480: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80227484: addiu       $a1, $a1, 0x49B0
    ctx->r5 = ADD32(ctx->r5, 0X49B0);
    // 0x80227488: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x8022748C: bne         $v0, $zero, L_802274E8
    if (ctx->r2 != 0) {
        // 0x80227490: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_802274E8;
    }
    // 0x80227490: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x80227494: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80227498: lh          $a3, 0x34E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X34E);
    // 0x8022749C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802274A0: jal         0x8004F820
    // 0x802274A4: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x802274A4: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_0:
    // 0x802274A8: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x802274AC: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x802274B0: lw          $a0, 0x3FF0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3FF0);
    // 0x802274B4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802274B8: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x802274BC: lui         $v0, 0x20
    ctx->r2 = S32(0X20 << 16);
    // 0x802274C0: and         $a0, $a0, $v0
    ctx->r4 = ctx->r4 & ctx->r2;
    // 0x802274C4: beq         $a0, $zero, L_802274E8
    if (ctx->r4 == 0) {
        // 0x802274C8: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_802274E8;
    }
    // 0x802274C8: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x802274CC: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x802274D0: jal         0x80227E90
    // 0x802274D4: nop

    func_80227E90_ovl27(rdram, ctx);
        goto after_1;
    // 0x802274D4: nop

    after_1:
    // 0x802274D8: lbu         $v1, 0x34B($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34B);
    // 0x802274DC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802274E0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802274E4: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
L_802274E8:
    // 0x802274E8: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x802274EC: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x802274F0: bne         $v0, $zero, L_80227514
    if (ctx->r2 != 0) {
        // 0x802274F4: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_80227514;
    }
    // 0x802274F4: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x802274F8: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x802274FC: sb          $v1, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r3;
    // 0x80227500: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x80227504: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x80227508: jal         0x80227F28
    // 0x8022750C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_80227F28_ovl27(rdram, ctx);
        goto after_2;
    // 0x8022750C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_2:
    // 0x80227510: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_80227514:
    // 0x80227514: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80227518: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022751C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227520: jr          $ra
    // 0x80227524: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80227524: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80225568_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225568: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022556C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225570: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225574: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225578: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8022557C: bne         $v0, $zero, L_80225598
    if (ctx->r2 != 0) {
        // 0x80225580: nop
    
            goto L_80225598;
    }
    // 0x80225580: nop

    // 0x80225584: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80225588: jal         0x800607C4
    // 0x8022558C: addiu       $a0, $a0, -0x6F58
    ctx->r4 = ADD32(ctx->r4, -0X6F58);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x8022558C: addiu       $a0, $a0, -0x6F58
    ctx->r4 = ADD32(ctx->r4, -0X6F58);
    after_0:
    // 0x80225590: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225594: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225598:
    // 0x80225598: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022559C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802255A0: jr          $ra
    // 0x802255A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802255A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022B900_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B900: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B904: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022B908: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8022B90C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022B910: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022B914: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022B918: lw          $v0, -0x61F0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X61F0);
    // 0x8022B91C: jalr        $v0
    // 0x8022B920: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022B920: nop

    after_0:
    // 0x8022B924: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022B928: jr          $ra
    // 0x8022B92C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B92C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023156C_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023156C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80231570: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80231574: jal         0x8004F5C4
    // 0x80231578: nop

    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x80231578: nop

    after_0:
    // 0x8023157C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80231580: jr          $ra
    // 0x80231584: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80231584: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80231588: nop

    // 0x8023158C: nop

;}
RECOMP_FUNC void func_8022A60C_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A60C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8022A610: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8022A614: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8022A618: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8022A61C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x8022A620: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8022A624: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x8022A628: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x8022A62C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8022A630: lbu         $v0, 0x363($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X363);
    // 0x8022A634: lui         $s4, 0x8020
    ctx->r20 = S32(0X8020 << 16);
    // 0x8022A638: addiu       $s4, $s4, 0x49B0
    ctx->r20 = ADD32(ctx->r20, 0X49B0);
    // 0x8022A63C: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x8022A640: beq         $v0, $zero, L_8022A824
    if (ctx->r2 == 0) {
        // 0x8022A644: addiu       $s1, $s2, 0x2E8
        ctx->r17 = ADD32(ctx->r18, 0X2E8);
            goto L_8022A824;
    }
    // 0x8022A644: addiu       $s1, $s2, 0x2E8
    ctx->r17 = ADD32(ctx->r18, 0X2E8);
    // 0x8022A648: addiu       $a0, $s2, 0x14
    ctx->r4 = ADD32(ctx->r18, 0X14);
    // 0x8022A64C: jal         0x8004EC38
    // 0x8022A650: addiu       $a1, $s4, 0x14
    ctx->r5 = ADD32(ctx->r20, 0X14);
    func_8004EC38_2A038(rdram, ctx);
        goto after_0;
    // 0x8022A650: addiu       $a1, $s4, 0x14
    ctx->r5 = ADD32(ctx->r20, 0X14);
    after_0:
    // 0x8022A654: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022A658: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x8022A65C: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022A660: addiu       $v0, $a0, -0x600
    ctx->r2 = ADD32(ctx->r4, -0X600);
    // 0x8022A664: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022A668: slti        $v0, $v0, 0x400
    ctx->r2 = SIGNED(ctx->r2) < 0X400 ? 1 : 0;
    // 0x8022A66C: beq         $v0, $zero, L_8022A684
    if (ctx->r2 == 0) {
        // 0x8022A670: addiu       $v0, $a0, 0x800
        ctx->r2 = ADD32(ctx->r4, 0X800);
            goto L_8022A684;
    }
    // 0x8022A670: addiu       $v0, $a0, 0x800
    ctx->r2 = ADD32(ctx->r4, 0X800);
    // 0x8022A674: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022A678: lui         $v1, 0x2
    ctx->r3 = S32(0X2 << 16);
    // 0x8022A67C: j           L_8022A6E0
    // 0x8022A680: or          $s0, $v0, $v1
    ctx->r16 = ctx->r2 | ctx->r3;
        goto L_8022A6E0;
    // 0x8022A680: or          $s0, $v0, $v1
    ctx->r16 = ctx->r2 | ctx->r3;
L_8022A684:
    // 0x8022A684: addiu       $v0, $a0, -0x200
    ctx->r2 = ADD32(ctx->r4, -0X200);
    // 0x8022A688: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022A68C: slti        $v0, $v0, 0x400
    ctx->r2 = SIGNED(ctx->r2) < 0X400 ? 1 : 0;
    // 0x8022A690: beq         $v0, $zero, L_8022A6A8
    if (ctx->r2 == 0) {
        // 0x8022A694: addiu       $v0, $a0, -0x400
        ctx->r2 = ADD32(ctx->r4, -0X400);
            goto L_8022A6A8;
    }
    // 0x8022A694: addiu       $v0, $a0, -0x400
    ctx->r2 = ADD32(ctx->r4, -0X400);
    // 0x8022A698: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022A69C: lui         $v1, 0x1
    ctx->r3 = S32(0X1 << 16);
    // 0x8022A6A0: j           L_8022A6E0
    // 0x8022A6A4: or          $s0, $v0, $v1
    ctx->r16 = ctx->r2 | ctx->r3;
        goto L_8022A6E0;
    // 0x8022A6A4: or          $s0, $v0, $v1
    ctx->r16 = ctx->r2 | ctx->r3;
L_8022A6A8:
    // 0x8022A6A8: addiu       $v0, $a0, 0x200
    ctx->r2 = ADD32(ctx->r4, 0X200);
    // 0x8022A6AC: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022A6B0: slti        $v0, $v0, 0x400
    ctx->r2 = SIGNED(ctx->r2) < 0X400 ? 1 : 0;
    // 0x8022A6B4: beq         $v0, $zero, L_8022A6C8
    if (ctx->r2 == 0) {
        // 0x8022A6B8: andi        $v1, $v1, 0xFFF
        ctx->r3 = ctx->r3 & 0XFFF;
            goto L_8022A6C8;
    }
    // 0x8022A6B8: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022A6BC: lui         $v0, 0x3
    ctx->r2 = S32(0X3 << 16);
    // 0x8022A6C0: j           L_8022A6E0
    // 0x8022A6C4: or          $s0, $v1, $v0
    ctx->r16 = ctx->r3 | ctx->r2;
        goto L_8022A6E0;
    // 0x8022A6C4: or          $s0, $v1, $v0
    ctx->r16 = ctx->r3 | ctx->r2;
L_8022A6C8:
    // 0x8022A6C8: addiu       $v0, $a0, 0x600
    ctx->r2 = ADD32(ctx->r4, 0X600);
    // 0x8022A6CC: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022A6D0: slti        $v0, $v0, 0x400
    ctx->r2 = SIGNED(ctx->r2) < 0X400 ? 1 : 0;
    // 0x8022A6D4: beq         $v0, $zero, L_8022A6E0
    if (ctx->r2 == 0) {
        // 0x8022A6D8: addiu       $v0, $a0, 0x400
        ctx->r2 = ADD32(ctx->r4, 0X400);
            goto L_8022A6E0;
    }
    // 0x8022A6D8: addiu       $v0, $a0, 0x400
    ctx->r2 = ADD32(ctx->r4, 0X400);
    // 0x8022A6DC: andi        $s0, $v0, 0xFFF
    ctx->r16 = ctx->r2 & 0XFFF;
L_8022A6E0:
    // 0x8022A6E0: lbu         $v0, 0x7F($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X7F);
    // 0x8022A6E4: sra         $v1, $s0, 16
    ctx->r3 = S32(SIGNED(ctx->r16) >> 16);
    // 0x8022A6E8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022A6EC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022A6F0: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8022A6F4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022A6F8: lbu         $v1, -0x65B8($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X65B8);
    // 0x8022A6FC: lui         $s0, 0x8024
    ctx->r16 = S32(0X8024 << 16);
    // 0x8022A700: addiu       $s0, $s0, -0x65B8
    ctx->r16 = ADD32(ctx->r16, -0X65B8);
    // 0x8022A704: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022A708: andi        $s3, $v1, 0xFF
    ctx->r19 = ctx->r3 & 0XFF;
    // 0x8022A70C: bne         $s3, $v0, L_8022A7A8
    if (ctx->r19 != ctx->r2) {
        // 0x8022A710: andi        $a0, $v1, 0xFF
        ctx->r4 = ctx->r3 & 0XFF;
            goto L_8022A7A8;
    }
    // 0x8022A710: andi        $a0, $v1, 0xFF
    ctx->r4 = ctx->r3 & 0XFF;
    // 0x8022A714: addiu       $a0, $s2, 0xC4
    ctx->r4 = ADD32(ctx->r18, 0XC4);
    // 0x8022A718: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    // 0x8022A71C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022A720: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x8022A724: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8022A728: sh          $v1, 0x24($s1)
    MEM_H(0X24, ctx->r17) = ctx->r3;
    // 0x8022A72C: sh          $v0, 0x26($s1)
    MEM_H(0X26, ctx->r17) = ctx->r2;
    // 0x8022A730: jal         0x8009A3B4
    // 0x8022A734: sh          $v1, 0x28($s1)
    MEM_H(0X28, ctx->r17) = ctx->r3;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022A734: sh          $v1, 0x28($s1)
    MEM_H(0X28, ctx->r17) = ctx->r3;
    after_1:
    // 0x8022A738: addiu       $a0, $s4, 0xC4
    ctx->r4 = ADD32(ctx->r20, 0XC4);
    // 0x8022A73C: addiu       $a1, $s4, 0x14
    ctx->r5 = ADD32(ctx->r20, 0X14);
    // 0x8022A740: jal         0x8009A3B4
    // 0x8022A744: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022A744: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022A748: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022A74C: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x8022A750: addiu       $a2, $s1, 0x24
    ctx->r6 = ADD32(ctx->r17, 0X24);
    // 0x8022A754: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x8022A758: addiu       $a3, $s1, 0xC
    ctx->r7 = ADD32(ctx->r17, 0XC);
    // 0x8022A75C: jal         0x8004E150
    // 0x8022A760: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_8004E150_29550(rdram, ctx);
        goto after_3;
    // 0x8022A760: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_3:
    // 0x8022A764: lbu         $v1, 0x7F($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X7F);
    // 0x8022A768: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8022A76C: andi        $v0, $a0, 0x1
    ctx->r2 = ctx->r4 & 0X1;
    // 0x8022A770: sll         $a1, $v1, 2
    ctx->r5 = S32(ctx->r3 << 2);
    // 0x8022A774: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x8022A778: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x8022A77C: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x8022A780: bnel        $v0, $s3, L_8022A7A8
    if (ctx->r2 != ctx->r19) {
        // 0x8022A784: addiu       $a0, $zero, 0xFF
        ctx->r4 = ADD32(0, 0XFF);
            goto L_8022A7A8;
    }
    goto skip_0;
    // 0x8022A784: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    skip_0:
    // 0x8022A788: andi        $v1, $a0, 0x10
    ctx->r3 = ctx->r4 & 0X10;
    // 0x8022A78C: srl         $v1, $v1, 4
    ctx->r3 = S32(U32(ctx->r3) >> 4);
    // 0x8022A790: addiu       $v0, $s0, 0x2
    ctx->r2 = ADD32(ctx->r16, 0X2);
    // 0x8022A794: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x8022A798: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022A79C: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x8022A7A0: j           L_8022A7AC
    // 0x8022A7A4: addiu       $v0, $zero, 0x7C
    ctx->r2 = ADD32(0, 0X7C);
        goto L_8022A7AC;
    // 0x8022A7A4: addiu       $v0, $zero, 0x7C
    ctx->r2 = ADD32(0, 0X7C);
L_8022A7A8:
    // 0x8022A7A8: addiu       $v0, $zero, 0x7C
    ctx->r2 = ADD32(0, 0X7C);
L_8022A7AC:
    // 0x8022A7AC: sh          $v0, 0x44($s2)
    MEM_H(0X44, ctx->r18) = ctx->r2;
    // 0x8022A7B0: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x8022A7B4: sb          $v0, 0x80($s1)
    MEM_B(0X80, ctx->r17) = ctx->r2;
    // 0x8022A7B8: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022A7BC: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    // 0x8022A7C0: sb          $v0, 0x81($s1)
    MEM_B(0X81, ctx->r17) = ctx->r2;
    // 0x8022A7C4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022A7C8: bne         $v1, $v0, L_8022A810
    if (ctx->r3 != ctx->r2) {
        // 0x8022A7CC: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_8022A810;
    }
    // 0x8022A7CC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022A7D0: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x8022A7D4: lbu         $v0, 0x7F($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X7F);
    // 0x8022A7D8: lui         $a2, 0x8024
    ctx->r6 = S32(0X8024 << 16);
    // 0x8022A7DC: addiu       $a2, $a2, -0x65B8
    ctx->r6 = ADD32(ctx->r6, -0X65B8);
    // 0x8022A7E0: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x8022A7E4: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x8022A7E8: addu        $v0, $v1, $s0
    ctx->r2 = ADD32(ctx->r3, ctx->r16);
L_8022A7EC:
    // 0x8022A7EC: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x8022A7F0: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x8022A7F4: beq         $a0, $a1, L_8022A800
    if (ctx->r4 == ctx->r5) {
        // 0x8022A7F8: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_8022A800;
    }
    // 0x8022A7F8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8022A7FC: addiu       $s0, $zero, 0x4
    ctx->r16 = ADD32(0, 0X4);
L_8022A800:
    // 0x8022A800: sltiu       $v0, $s0, 0x4
    ctx->r2 = ctx->r16 < 0X4 ? 1 : 0;
    // 0x8022A804: bne         $v0, $zero, L_8022A7EC
    if (ctx->r2 != 0) {
        // 0x8022A808: addu        $v0, $v1, $s0
        ctx->r2 = ADD32(ctx->r3, ctx->r16);
            goto L_8022A7EC;
    }
    // 0x8022A808: addu        $v0, $v1, $s0
    ctx->r2 = ADD32(ctx->r3, ctx->r16);
    // 0x8022A80C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_8022A810:
    // 0x8022A810: sb          $a0, 0x7F($s1)
    MEM_B(0X7F, ctx->r17) = ctx->r4;
    // 0x8022A814: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
    // 0x8022A818: lbu         $v0, 0x7B($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X7B);
    // 0x8022A81C: andi        $v0, $v0, 0xFE
    ctx->r2 = ctx->r2 & 0XFE;
    // 0x8022A820: sb          $v0, 0x7B($s1)
    MEM_B(0X7B, ctx->r17) = ctx->r2;
L_8022A824:
    // 0x8022A824: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8022A828: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x8022A82C: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x8022A830: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8022A834: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8022A838: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8022A83C: jr          $ra
    // 0x8022A840: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8022A840: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8022B930_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B930: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022B934: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B938: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B93C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022B940: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022B944: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022B948: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022B94C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022B950: jal         0x8004D5D4
    // 0x8022B954: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8022B954: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022B958: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8022B95C: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022B960: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8022B964: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022B968: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022B96C: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022B970: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022B974: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022B978: lui         $v0, 0x480
    ctx->r2 = S32(0X480 << 16);
    // 0x8022B97C: sw          $v0, 0x37C($s0)
    MEM_W(0X37C, ctx->r16) = ctx->r2;
    // 0x8022B980: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022B984: addiu       $v0, $v0, -0x64B6
    ctx->r2 = ADD32(ctx->r2, -0X64B6);
    // 0x8022B988: sb          $zero, 0x35C($s0)
    MEM_B(0X35C, ctx->r16) = 0;
    // 0x8022B98C: sh          $zero, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = 0;
    // 0x8022B990: sw          $zero, 0x360($s0)
    MEM_W(0X360, ctx->r16) = 0;
    // 0x8022B994: sb          $a1, 0x35D($s0)
    MEM_B(0X35D, ctx->r16) = ctx->r5;
    // 0x8022B998: sw          $zero, 0x388($s0)
    MEM_W(0X388, ctx->r16) = 0;
    // 0x8022B99C: sw          $zero, 0x38C($s0)
    MEM_W(0X38C, ctx->r16) = 0;
    // 0x8022B9A0: sw          $v0, 0x358($s0)
    MEM_W(0X358, ctx->r16) = ctx->r2;
    // 0x8022B9A4: sll         $v0, $v1, 3
    ctx->r2 = S32(ctx->r3 << 3);
    // 0x8022B9A8: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022B9AC: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022B9B0: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8022B9B4: addiu       $v1, $v1, -0x6418
    ctx->r3 = ADD32(ctx->r3, -0X6418);
    // 0x8022B9B8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022B9BC: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022B9C0: addiu       $v1, $v1, -0x3BA0
    ctx->r3 = ADD32(ctx->r3, -0X3BA0);
    // 0x8022B9C4: sw          $v0, 0x354($s0)
    MEM_W(0X354, ctx->r16) = ctx->r2;
    // 0x8022B9C8: lb          $v0, 0x0($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X0);
    // 0x8022B9CC: beq         $v0, $zero, L_8022B9FC
    if (ctx->r2 == 0) {
        // 0x8022B9D0: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_8022B9FC;
    }
    // 0x8022B9D0: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x8022B9D4: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x8022B9D8: ori         $v0, $v0, 0xFF00
    ctx->r2 = ctx->r2 | 0XFF00;
    // 0x8022B9DC: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x8022B9E0: lui         $a0, 0x19
    ctx->r4 = S32(0X19 << 16);
    // 0x8022B9E4: ori         $a0, $a0, 0x300
    ctx->r4 = ctx->r4 | 0X300;
    // 0x8022B9E8: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x8022B9EC: bnel        $v1, $a0, L_8022BA00
    if (ctx->r3 != ctx->r4) {
        // 0x8022B9F0: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8022BA00;
    }
    goto skip_0;
    // 0x8022B9F0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    skip_0:
    // 0x8022B9F4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022B9F8: sb          $a1, -0x37B0($at)
    MEM_B(-0X37B0, ctx->r1) = ctx->r5;
L_8022B9FC:
    // 0x8022B9FC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_8022BA00:
    // 0x8022BA00: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022BA04: jal         0x8009A3B4
    // 0x8022BA08: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022BA08: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x8022BA0C: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022BA10: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022BA14: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022BA18: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
    // 0x8022BA1C: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8022BA20: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022BA24: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022BA28: addiu       $v0, $v0, -0x61FC
    ctx->r2 = ADD32(ctx->r2, -0X61FC);
    // 0x8022BA2C: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x8022BA30: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x8022BA34: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x8022BA38: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x8022BA3C: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
    // 0x8022BA40: sh          $zero, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = 0;
    // 0x8022BA44: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    // 0x8022BA48: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    // 0x8022BA4C: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x8022BA50: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022BA54: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8022BA58: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x8022BA5C: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x8022BA60: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022BA64: jal         0x80050294
    // 0x8022BA68: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x8022BA68: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
    after_2:
    // 0x8022BA6C: jal         0x8022BF48
    // 0x8022BA70: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022BF48_ovl27(rdram, ctx);
        goto after_3;
    // 0x8022BA70: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022BA74: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022BA78: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022BA7C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022BA80: jr          $ra
    // 0x8022BA84: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022BA84: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022EDD0_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022EDD0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022EDD4: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8022EDD8: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8022EDDC: addiu       $a0, $s2, 0x2C
    ctx->r4 = ADD32(ctx->r18, 0X2C);
    // 0x8022EDE0: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8022EDE4: addiu       $s1, $s2, 0x14
    ctx->r17 = ADD32(ctx->r18, 0X14);
    // 0x8022EDE8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022EDEC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022EDF0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8022EDF4: jal         0x8009A3B4
    // 0x8022EDF8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022EDF8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    after_0:
    // 0x8022EDFC: addiu       $a0, $s2, 0x34
    ctx->r4 = ADD32(ctx->r18, 0X34);
    // 0x8022EE00: addiu       $a1, $s2, 0x1C
    ctx->r5 = ADD32(ctx->r18, 0X1C);
    // 0x8022EE04: jal         0x8009A3B4
    // 0x8022EE08: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022EE08: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022EE0C: addiu       $a0, $s2, 0x5C
    ctx->r4 = ADD32(ctx->r18, 0X5C);
    // 0x8022EE10: addiu       $s0, $s2, 0x54
    ctx->r16 = ADD32(ctx->r18, 0X54);
    // 0x8022EE14: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022EE18: jal         0x8009A3B4
    // 0x8022EE1C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022EE1C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022EE20: lbu         $v0, 0x8($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X8);
    // 0x8022EE24: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022EE28: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022EE2C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022EE30: lw          $v0, -0x5F28($at)
    ctx->r2 = MEM_W(ctx->r1, -0X5F28);
    // 0x8022EE34: jalr        $v0
    // 0x8022EE38: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x8022EE38: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_3:
    // 0x8022EE3C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022EE40: addiu       $s0, $s2, 0x8C
    ctx->r16 = ADD32(ctx->r18, 0X8C);
    // 0x8022EE44: jal         0x80031600
    // 0x8022EE48: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80031600_CA00(rdram, ctx);
        goto after_4;
    // 0x8022EE48: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8022EE4C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022EE50: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x8022EE54: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022EE58: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8022EE5C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022EE60: jal         0x80031DA8
    // 0x8022EE64: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_5;
    // 0x8022EE64: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_5:
    // 0x8022EE68: addiu       $a0, $s2, 0xAC
    ctx->r4 = ADD32(ctx->r18, 0XAC);
    // 0x8022EE6C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022EE70: jal         0x8009A3B4
    // 0x8022EE74: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x8022EE74: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_6:
    // 0x8022EE78: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x8022EE7C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022EE80: beq         $v0, $zero, L_8022EE9C
    if (ctx->r2 == 0) {
        // 0x8022EE84: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_8022EE9C;
    }
    // 0x8022EE84: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022EE88: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022EE8C: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x8022EE90: lui         $a3, 0x2000
    ctx->r7 = S32(0X2000 << 16);
    // 0x8022EE94: jal         0x80047284
    // 0x8022EE98: ori         $a3, $a3, 0x8
    ctx->r7 = ctx->r7 | 0X8;
    func_80047284_22684(rdram, ctx);
        goto after_7;
    // 0x8022EE98: ori         $a3, $a3, 0x8
    ctx->r7 = ctx->r7 | 0X8;
    after_7:
L_8022EE9C:
    // 0x8022EE9C: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x8022EEA0: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022EEA4: beq         $v0, $zero, L_8022EEBC
    if (ctx->r2 == 0) {
        // 0x8022EEA8: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_8022EEBC;
    }
    // 0x8022EEA8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022EEAC: addiu       $a1, $zero, 0x104
    ctx->r5 = ADD32(0, 0X104);
    // 0x8022EEB0: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8022EEB4: jal         0x8003B564
    // 0x8022EEB8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8003B564_16964(rdram, ctx);
        goto after_8;
    // 0x8022EEB8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_8:
L_8022EEBC:
    // 0x8022EEBC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8022EEC0: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8022EEC4: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8022EEC8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8022EECC: jr          $ra
    // 0x8022EED0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022EED0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80228D2C_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228D2C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80228D30: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x80228D34: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x80228D38: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80228D3C: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x80228D40: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x80228D44: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x80228D48: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80228D4C: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80228D50: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80228D54: lbu         $v1, 0x34F($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X34F);
    // 0x80228D58: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x80228D5C: bne         $v0, $zero, L_80228D6C
    if (ctx->r2 != 0) {
        // 0x80228D60: addiu       $s3, $s4, 0x2C8
        ctx->r19 = ADD32(ctx->r20, 0X2C8);
            goto L_80228D6C;
    }
    // 0x80228D60: addiu       $s3, $s4, 0x2C8
    ctx->r19 = ADD32(ctx->r20, 0X2C8);
    // 0x80228D64: j           L_80228D70
    // 0x80228D68: addiu       $s0, $v1, -0x6
    ctx->r16 = ADD32(ctx->r3, -0X6);
        goto L_80228D70;
    // 0x80228D68: addiu       $s0, $v1, -0x6
    ctx->r16 = ADD32(ctx->r3, -0X6);
L_80228D6C:
    // 0x80228D6C: addu        $s0, $v1, $zero
    ctx->r16 = ADD32(ctx->r3, 0);
L_80228D70:
    // 0x80228D70: lhu         $v0, 0x7C($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X7C);
    // 0x80228D74: bne         $v0, $zero, L_80228F78
    if (ctx->r2 != 0) {
        // 0x80228D78: addiu       $a0, $zero, 0x1B3
        ctx->r4 = ADD32(0, 0X1B3);
            goto L_80228F78;
    }
    // 0x80228D78: addiu       $a0, $zero, 0x1B3
    ctx->r4 = ADD32(0, 0X1B3);
    // 0x80228D7C: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
    // 0x80228D80: jal         0x8002A33C
    // 0x80228D84: addiu       $a1, $s4, 0x14
    ctx->r5 = ADD32(ctx->r20, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x80228D84: addiu       $a1, $s4, 0x14
    ctx->r5 = ADD32(ctx->r20, 0X14);
    after_0:
    // 0x80228D88: sll         $v0, $s0, 24
    ctx->r2 = S32(ctx->r16 << 24);
    // 0x80228D8C: sra         $s2, $v0, 21
    ctx->r18 = S32(SIGNED(ctx->r2) >> 21);
    // 0x80228D90: addiu       $s6, $s3, 0x4C
    ctx->r22 = ADD32(ctx->r19, 0X4C);
    // 0x80228D94: sll         $v0, $s5, 24
    ctx->r2 = S32(ctx->r21 << 24);
L_80228D98:
    // 0x80228D98: sra         $s1, $v0, 24
    ctx->r17 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80228D9C: sll         $v0, $s1, 1
    ctx->r2 = S32(ctx->r17 << 1);
    // 0x80228DA0: addu        $v0, $v0, $s3
    ctx->r2 = ADD32(ctx->r2, ctx->r19);
    // 0x80228DA4: lh          $v0, 0x64($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X64);
    // 0x80228DA8: blez        $v0, L_80228F54
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80228DAC: addiu       $v0, $s5, -0x1
        ctx->r2 = ADD32(ctx->r21, -0X1);
            goto L_80228F54;
    }
    // 0x80228DAC: addiu       $v0, $s5, -0x1
    ctx->r2 = ADD32(ctx->r21, -0X1);
    // 0x80228DB0: jal         0x8004EFE4
    // 0x80228DB4: nop

    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_1;
    // 0x80228DB4: nop

    after_1:
    // 0x80228DB8: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80228DBC: beq         $s0, $zero, L_80228F50
    if (ctx->r16 == 0) {
        // 0x80228DC0: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80228F50;
    }
    // 0x80228DC0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80228DC4: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80228DC8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228DCC: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x80228DD0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80228DD4: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
    // 0x80228DD8: bne         $s1, $zero, L_80228DF0
    if (ctx->r17 != 0) {
        // 0x80228DDC: sb          $v0, 0xF($s0)
        MEM_B(0XF, ctx->r16) = ctx->r2;
            goto L_80228DF0;
    }
    // 0x80228DDC: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
    // 0x80228DE0: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80228DE4: addu        $v1, $v1, $s2
    ctx->r3 = ADD32(ctx->r3, ctx->r18);
    // 0x80228DE8: j           L_80228E08
    // 0x80228DEC: lhu         $v1, -0x66B2($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X66B2);
        goto L_80228E08;
    // 0x80228DEC: lhu         $v1, -0x66B2($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X66B2);
L_80228DF0:
    // 0x80228DF0: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80228DF4: addu        $v1, $v1, $s2
    ctx->r3 = ADD32(ctx->r3, ctx->r18);
    // 0x80228DF8: lhu         $v1, -0x66B2($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X66B2);
    // 0x80228DFC: addiu       $v0, $zero, 0xFFF
    ctx->r2 = ADD32(0, 0XFFF);
    // 0x80228E00: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80228E04: andi        $v1, $v0, 0xFFF
    ctx->r3 = ctx->r2 & 0XFFF;
L_80228E08:
    // 0x80228E08: lhu         $v0, 0x56($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X56);
    // 0x80228E0C: sll         $a1, $s5, 24
    ctx->r5 = S32(ctx->r21 << 24);
    // 0x80228E10: sra         $a1, $a1, 24
    ctx->r5 = S32(SIGNED(ctx->r5) >> 24);
    // 0x80228E14: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80228E18: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80228E1C: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x80228E20: sltu        $v0, $zero, $a1
    ctx->r2 = 0 < ctx->r5 ? 1 : 0;
    // 0x80228E24: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80228E28: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80228E2C: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80228E30: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80228E34: addu        $v0, $s4, $v0
    ctx->r2 = ADD32(ctx->r20, ctx->r2);
    // 0x80228E38: lhu         $v1, 0x180($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X180);
    // 0x80228E3C: sh          $v1, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r3;
    // 0x80228E40: lhu         $v1, 0x184($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X184);
    // 0x80228E44: sh          $v1, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r3;
    // 0x80228E48: lhu         $v0, 0x182($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X182);
    // 0x80228E4C: lh          $v1, 0x18($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X18);
    // 0x80228E50: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80228E54: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x80228E58: lh          $a0, 0x16($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X16);
    // 0x80228E5C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80228E60: sw          $v1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r3;
    // 0x80228E64: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228E68: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80228E6C: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x80228E70: bne         $a1, $zero, L_80228EB4
    if (ctx->r5 != 0) {
        // 0x80228E74: sw          $a0, 0x20($s0)
        MEM_W(0X20, ctx->r16) = ctx->r4;
            goto L_80228EB4;
    }
    // 0x80228E74: sw          $a0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r4;
    // 0x80228E78: lhu         $a2, 0x56($s4)
    ctx->r6 = MEM_HU(ctx->r20, 0X56);
    // 0x80228E7C: lui         $a3, 0x8024
    ctx->r7 = S32(0X8024 << 16);
    // 0x80228E80: addu        $a3, $a3, $s2
    ctx->r7 = ADD32(ctx->r7, ctx->r18);
    // 0x80228E84: lh          $a3, -0x66B8($a3)
    ctx->r7 = MEM_H(ctx->r7, -0X66B8);
    // 0x80228E88: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80228E8C: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x80228E90: lh          $v0, -0x66B6($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X66B6);
    // 0x80228E94: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80228E98: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80228E9C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80228EA0: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x80228EA4: lh          $v0, -0x66B4($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X66B4);
    // 0x80228EA8: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80228EAC: j           L_80228EF8
    // 0x80228EB0: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
        goto L_80228EF8;
    // 0x80228EB0: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
L_80228EB4:
    // 0x80228EB4: lhu         $a2, 0x56($s4)
    ctx->r6 = MEM_HU(ctx->r20, 0X56);
    // 0x80228EB8: lui         $a3, 0x8024
    ctx->r7 = S32(0X8024 << 16);
    // 0x80228EBC: addu        $a3, $a3, $s2
    ctx->r7 = ADD32(ctx->r7, ctx->r18);
    // 0x80228EC0: lh          $a3, -0x66B8($a3)
    ctx->r7 = MEM_H(ctx->r7, -0X66B8);
    // 0x80228EC4: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80228EC8: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x80228ECC: lh          $v0, -0x66B6($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X66B6);
    // 0x80228ED0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80228ED4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80228ED8: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80228EDC: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x80228EE0: lh          $v0, -0x66B4($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X66B4);
    // 0x80228EE4: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80228EE8: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    // 0x80228EEC: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80228EF0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228EF4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
L_80228EF8:
    // 0x80228EF8: jal         0x8004DBA0
    // 0x80228EFC: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_2;
    // 0x80228EFC: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_2:
    // 0x80228F00: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x80228F04: lh          $a1, 0x64($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X64);
    // 0x80228F08: addiu       $a2, $zero, 0x600
    ctx->r6 = ADD32(0, 0X600);
    // 0x80228F0C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80228F10: jal         0x8004DC2C
    // 0x80228F14: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8004DC2C_2902C(rdram, ctx);
        goto after_3;
    // 0x80228F14: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_3:
    // 0x80228F18: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    // 0x80228F1C: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x80228F20: jal         0x8009A3B4
    // 0x80228F24: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x80228F24: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_4:
    // 0x80228F28: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    // 0x80228F2C: jal         0x8004DD04
    // 0x80228F30: addiu       $a1, $s3, 0x5C
    ctx->r5 = ADD32(ctx->r19, 0X5C);
    func_8004DD04_29104(rdram, ctx);
        goto after_5;
    // 0x80228F30: addiu       $a1, $s3, 0x5C
    ctx->r5 = ADD32(ctx->r19, 0X5C);
    after_5:
    // 0x80228F34: lhu         $v0, 0x5C($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X5C);
    // 0x80228F38: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80228F3C: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80228F40: lhu         $v0, 0x60($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X60);
    // 0x80228F44: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80228F48: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80228F4C: sh          $v0, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r2;
L_80228F50:
    // 0x80228F50: addiu       $v0, $s5, -0x1
    ctx->r2 = ADD32(ctx->r21, -0X1);
L_80228F54:
    // 0x80228F54: addu        $s5, $v0, $zero
    ctx->r21 = ADD32(ctx->r2, 0);
    // 0x80228F58: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80228F5C: bgez        $v0, L_80228D98
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80228F60: sll         $v0, $s5, 24
        ctx->r2 = S32(ctx->r21 << 24);
            goto L_80228D98;
    }
    // 0x80228F60: sll         $v0, $s5, 24
    ctx->r2 = S32(ctx->r21 << 24);
    // 0x80228F64: lbu         $v0, 0x87($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X87);
    // 0x80228F68: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
    // 0x80228F6C: sh          $v1, 0x7C($s3)
    MEM_H(0X7C, ctx->r19) = ctx->r3;
    // 0x80228F70: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228F74: sb          $v0, 0x87($s3)
    MEM_B(0X87, ctx->r19) = ctx->r2;
L_80228F78:
    // 0x80228F78: lhu         $v0, 0x7C($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X7C);
    // 0x80228F7C: lbu         $v1, 0x87($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X87);
    // 0x80228F80: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80228F84: sh          $v0, 0x7C($s3)
    MEM_H(0X7C, ctx->r19) = ctx->r2;
    // 0x80228F88: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x80228F8C: bne         $v1, $v0, L_80228F9C
    if (ctx->r3 != ctx->r2) {
        // 0x80228F90: addiu       $v0, $zero, 0xB4
        ctx->r2 = ADD32(0, 0XB4);
            goto L_80228F9C;
    }
    // 0x80228F90: addiu       $v0, $zero, 0xB4
    ctx->r2 = ADD32(0, 0XB4);
    // 0x80228F94: sh          $v0, 0x7C($s3)
    MEM_H(0X7C, ctx->r19) = ctx->r2;
    // 0x80228F98: sb          $zero, 0x83($s3)
    MEM_B(0X83, ctx->r19) = 0;
L_80228F9C:
    // 0x80228F9C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80228FA0: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x80228FA4: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x80228FA8: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x80228FAC: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x80228FB0: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80228FB4: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80228FB8: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80228FBC: jr          $ra
    // 0x80228FC0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x80228FC0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_802362EC_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802362EC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802362F0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802362F4: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x802362F8: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x802362FC: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80236300: lb          $v0, 0xE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE);
    // 0x80236304: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x80236308: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8023630C: addu        $v1, $v0, $v1
    ctx->r3 = ADD32(ctx->r2, ctx->r3);
    // 0x80236310: lb          $a0, 0x1($v1)
    ctx->r4 = MEM_B(ctx->r3, 0X1);
    // 0x80236314: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80236318: addiu       $v0, $zero, 0x7E
    ctx->r2 = ADD32(0, 0X7E);
    // 0x8023631C: beq         $a0, $v0, L_80236338
    if (ctx->r4 == ctx->r2) {
        // 0x80236320: addiu       $v0, $zero, 0x7F
        ctx->r2 = ADD32(0, 0X7F);
            goto L_80236338;
    }
    // 0x80236320: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x80236324: bne         $a0, $v0, L_80236334
    if (ctx->r4 != ctx->r2) {
        // 0x80236328: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_80236334;
    }
    // 0x80236328: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8023632C: j           L_80236338
    // 0x80236330: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
        goto L_80236338;
    // 0x80236330: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
L_80236334:
    // 0x80236334: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
L_80236338:
    // 0x80236338: lb          $v1, 0xE($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XE);
    // 0x8023633C: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x80236340: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80236344: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80236348: lb          $v1, 0xD($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XD);
    // 0x8023634C: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x80236350: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80236354: sra         $a0, $v0, 24
    ctx->r4 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80236358: beq         $a0, $v1, L_80236380
    if (ctx->r4 == ctx->r3) {
        // 0x8023635C: addiu       $a1, $zero, 0x33
        ctx->r5 = ADD32(0, 0X33);
            goto L_80236380;
    }
    // 0x8023635C: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    // 0x80236360: addiu       $a2, $zero, 0x37
    ctx->r6 = ADD32(0, 0X37);
    // 0x80236364: jal         0x8003B85C
    // 0x80236368: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_0;
    // 0x80236368: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_0:
    // 0x8023636C: lw          $a0, 0x88($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X88);
    // 0x80236370: lui         $a1, 0x10
    ctx->r5 = S32(0X10 << 16);
    // 0x80236374: ori         $a1, $a1, 0xF
    ctx->r5 = ctx->r5 | 0XF;
    // 0x80236378: jal         0x8003B840
    // 0x8023637C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_1;
    // 0x8023637C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_1:
L_80236380:
    // 0x80236380: lb          $a0, 0x11($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X11);
    // 0x80236384: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x80236388: lbu         $v1, 0xC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XC);
    // 0x8023638C: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x80236390: sb          $v1, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r3;
    // 0x80236394: lb          $v1, 0x1($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X1);
    // 0x80236398: addiu       $v0, $zero, 0x7E
    ctx->r2 = ADD32(0, 0X7E);
    // 0x8023639C: beq         $v1, $v0, L_802363B8
    if (ctx->r3 == ctx->r2) {
        // 0x802363A0: addiu       $v0, $zero, 0x7F
        ctx->r2 = ADD32(0, 0X7F);
            goto L_802363B8;
    }
    // 0x802363A0: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x802363A4: bne         $v1, $v0, L_802363B4
    if (ctx->r3 != ctx->r2) {
        // 0x802363A8: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_802363B4;
    }
    // 0x802363A8: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x802363AC: j           L_802363B8
    // 0x802363B0: sb          $zero, 0x11($s0)
    MEM_B(0X11, ctx->r16) = 0;
        goto L_802363B8;
    // 0x802363B0: sb          $zero, 0x11($s0)
    MEM_B(0X11, ctx->r16) = 0;
L_802363B4:
    // 0x802363B4: sb          $v0, 0x11($s0)
    MEM_B(0X11, ctx->r16) = ctx->r2;
L_802363B8:
    // 0x802363B8: lb          $v1, 0x11($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X11);
    // 0x802363BC: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x802363C0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802363C4: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x802363C8: lb          $v1, 0x10($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X10);
    // 0x802363CC: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
    // 0x802363D0: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x802363D4: sra         $a0, $v0, 24
    ctx->r4 = S32(SIGNED(ctx->r2) >> 24);
    // 0x802363D8: beq         $a0, $v1, L_80236400
    if (ctx->r4 == ctx->r3) {
        // 0x802363DC: addiu       $a1, $zero, 0x33
        ctx->r5 = ADD32(0, 0X33);
            goto L_80236400;
    }
    // 0x802363DC: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    // 0x802363E0: addiu       $a2, $zero, 0x37
    ctx->r6 = ADD32(0, 0X37);
    // 0x802363E4: jal         0x8003B85C
    // 0x802363E8: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_2;
    // 0x802363E8: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_2:
    // 0x802363EC: lw          $a0, 0x88($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X88);
    // 0x802363F0: lui         $a1, 0x12
    ctx->r5 = S32(0X12 << 16);
    // 0x802363F4: ori         $a1, $a1, 0x11
    ctx->r5 = ctx->r5 | 0X11;
    // 0x802363F8: jal         0x8003B840
    // 0x802363FC: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_3;
    // 0x802363FC: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_3:
L_80236400:
    // 0x80236400: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x80236404: sb          $v0, 0x10($s0)
    MEM_B(0X10, ctx->r16) = ctx->r2;
    // 0x80236408: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8023640C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80236410: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80236414: jr          $ra
    // 0x80236418: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80236418: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80229480_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229480: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229484: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229488: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022948C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80229490: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229494: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80229498: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022949C: jal         0x80050294
    // 0x802294A0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x802294A0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_0:
    // 0x802294A4: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x802294A8: addiu       $a0, $zero, 0x1B4
    ctx->r4 = ADD32(0, 0X1B4);
    // 0x802294AC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x802294B0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802294B4: jal         0x8002A33C
    // 0x802294B8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x802294B8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    after_1:
    // 0x802294BC: lbu         $v0, 0x34D($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X34D);
    // 0x802294C0: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x802294C4: beq         $v0, $zero, L_802294D4
    if (ctx->r2 == 0) {
        // 0x802294C8: nop
    
            goto L_802294D4;
    }
    // 0x802294C8: nop

    // 0x802294CC: jal         0x8004F4F8
    // 0x802294D0: lw          $a0, 0x310($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X310);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_2;
    // 0x802294D0: lw          $a0, 0x310($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X310);
    after_2:
L_802294D4:
    // 0x802294D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802294D8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802294DC: jr          $ra
    // 0x802294E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802294E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802301F0_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802301F0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802301F4: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x802301F8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802301FC: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x80230200: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80230204: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80230208: lbu         $v1, 0x3($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X3);
    // 0x8023020C: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x80230210: bne         $v1, $zero, L_80230224
    if (ctx->r3 != 0) {
        // 0x80230214: sb          $v0, 0x0($s1)
        MEM_B(0X0, ctx->r17) = ctx->r2;
            goto L_80230224;
    }
    // 0x80230214: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x80230218: lh          $v0, 0x3E($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X3E);
    // 0x8023021C: sh          $zero, 0x3E($s1)
    MEM_H(0X3E, ctx->r17) = 0;
    // 0x80230220: sw          $v0, 0x44($s1)
    MEM_W(0X44, ctx->r17) = ctx->r2;
L_80230224:
    // 0x80230224: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80230228: jal         0x8004D5D4
    // 0x8023022C: addiu       $a1, $s1, 0x3
    ctx->r5 = ADD32(ctx->r17, 0X3);
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8023022C: addiu       $a1, $s1, 0x3
    ctx->r5 = ADD32(ctx->r17, 0X3);
    after_0:
    // 0x80230230: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x80230234: jal         0x8002C654
    // 0x80230238: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8002C654_7A54(rdram, ctx);
        goto after_1;
    // 0x80230238: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8023023C: lb          $a0, 0xF($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XF);
    // 0x80230240: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80230244: jal         0x800319B4
    // 0x80230248: sll         $a0, $a0, 6
    ctx->r4 = S32(ctx->r4 << 6);
    func_800319B4_CDB4(rdram, ctx);
        goto after_2;
    // 0x80230248: sll         $a0, $a0, 6
    ctx->r4 = S32(ctx->r4 << 6);
    after_2:
    // 0x8023024C: lbu         $v1, 0x8($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X8);
    // 0x80230250: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x80230254: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x80230258: sw          $v0, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->r2;
    // 0x8023025C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80230260: addiu       $v0, $v0, -0x5E6C
    ctx->r2 = ADD32(ctx->r2, -0X5E6C);
    // 0x80230264: sw          $v0, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r2;
    // 0x80230268: sw          $zero, 0x4C($s1)
    MEM_W(0X4C, ctx->r17) = 0;
    // 0x8023026C: sw          $zero, 0x50($s1)
    MEM_W(0X50, ctx->r17) = 0;
    // 0x80230270: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80230274: sb          $v1, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r3;
    // 0x80230278: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8023027C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80230280: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80230284: jr          $ra
    // 0x80230288: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80230288: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022B38C_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B38C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B390: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B394: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022B398: jal         0x8022B02C
    // 0x8022B39C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8022B02C_ovl27(rdram, ctx);
        goto after_0;
    // 0x8022B39C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x8022B3A0: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022B3A4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022B3A8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022B3AC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022B3B0: lw          $v0, -0x654C($at)
    ctx->r2 = MEM_W(ctx->r1, -0X654C);
    // 0x8022B3B4: jalr        $v0
    // 0x8022B3B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x8022B3B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022B3BC: jal         0x800504EC
    // 0x8022B3C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800504EC_2B8EC(rdram, ctx);
        goto after_2;
    // 0x8022B3C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022B3C4: jal         0x80051248
    // 0x8022B3C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80051248_2C648(rdram, ctx);
        goto after_3;
    // 0x8022B3C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022B3CC: sw          $zero, 0x314($s0)
    MEM_W(0X314, ctx->r16) = 0;
    // 0x8022B3D0: sw          $zero, 0x31C($s0)
    MEM_W(0X31C, ctx->r16) = 0;
    // 0x8022B3D4: sw          $zero, 0x324($s0)
    MEM_W(0X324, ctx->r16) = 0;
    // 0x8022B3D8: sw          $zero, 0x32C($s0)
    MEM_W(0X32C, ctx->r16) = 0;
    // 0x8022B3DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022B3E0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B3E4: jr          $ra
    // 0x8022B3E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B3E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80237DB4_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237DB4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80237DB8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80237DBC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80237DC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80237DC4: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80237DC8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80237DCC: beq         $v1, $v0, L_80237E14
    if (ctx->r3 == ctx->r2) {
        // 0x80237DD0: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80237E14;
    }
    // 0x80237DD0: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80237DD4: beql        $v0, $zero, L_80237DEC
    if (ctx->r2 == 0) {
        // 0x80237DD8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80237DEC;
    }
    goto skip_0;
    // 0x80237DD8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80237DDC: beq         $v1, $zero, L_80237DFC
    if (ctx->r3 == 0) {
        // 0x80237DE0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80237DFC;
    }
    // 0x80237DE0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80237DE4: j           L_80237E34
    // 0x80237DE8: nop

        goto L_80237E34;
    // 0x80237DE8: nop

L_80237DEC:
    // 0x80237DEC: beq         $v1, $v0, L_80237E2C
    if (ctx->r3 == ctx->r2) {
        // 0x80237DF0: nop
    
            goto L_80237E2C;
    }
    // 0x80237DF0: nop

    // 0x80237DF4: j           L_80237E34
    // 0x80237DF8: nop

        goto L_80237E34;
    // 0x80237DF8: nop

L_80237DFC:
    // 0x80237DFC: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x80237E00: jal         0x80050294
    // 0x80237E04: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80237E04: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80237E08: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80237E0C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80237E10: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80237E14:
    // 0x80237E14: jal         0x80051770
    // 0x80237E18: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80051770_2CB70(rdram, ctx);
        goto after_1;
    // 0x80237E18: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80237E1C: jal         0x80051248
    // 0x80237E20: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80051248_2C648(rdram, ctx);
        goto after_2;
    // 0x80237E20: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80237E24: j           L_80237E34
    // 0x80237E28: nop

        goto L_80237E34;
    // 0x80237E28: nop

L_80237E2C:
    // 0x80237E2C: jal         0x8005044C
    // 0x80237E30: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_3;
    // 0x80237E30: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
L_80237E34:
    // 0x80237E34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80237E38: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80237E3C: jr          $ra
    // 0x80237E40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80237E40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80231590_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231590: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80231594: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80231598: lb          $v0, 0xD($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XD);
    // 0x8023159C: bne         $v0, $zero, L_802315BC
    if (ctx->r2 != 0) {
        // 0x802315A0: nop
    
            goto L_802315BC;
    }
    // 0x802315A0: nop

    // 0x802315A4: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x802315A8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802315AC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802315B0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802315B4: j           L_802315D0
    // 0x802315B8: lw          $v0, -0x5DF0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X5DF0);
        goto L_802315D0;
    // 0x802315B8: lw          $v0, -0x5DF0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X5DF0);
L_802315BC:
    // 0x802315BC: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x802315C0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802315C4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802315C8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802315CC: lw          $v0, -0x5DE0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X5DE0);
L_802315D0:
    // 0x802315D0: jalr        $v0
    // 0x802315D4: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802315D4: nop

    after_0:
    // 0x802315D8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802315DC: jr          $ra
    // 0x802315E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802315E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022620C_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022620C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226210: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226214: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226218: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022621C: lhu         $v0, 0x350($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X350);
    // 0x80226220: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80226224: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x80226228: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022622C: bne         $v0, $zero, L_80226254
    if (ctx->r2 != 0) {
        // 0x80226230: nop
    
            goto L_80226254;
    }
    // 0x80226230: nop

    // 0x80226234: jal         0x80227E90
    // 0x80226238: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_80227E90_ovl27(rdram, ctx);
        goto after_0;
    // 0x80226238: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_0:
    // 0x8022623C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80226240: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80226244: addiu       $v0, $zero, 0x46
    ctx->r2 = ADD32(0, 0X46);
    // 0x80226248: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x8022624C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80226250: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_80226254:
    // 0x80226254: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226258: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022625C: jr          $ra
    // 0x80226260: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226260: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80232094_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232094: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80232098: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x8023209C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802320A0: lbu         $v0, 0xB($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XB);
    // 0x802320A4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802320A8: sb          $v0, 0xB($a1)
    MEM_B(0XB, ctx->r5) = ctx->r2;
    // 0x802320AC: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x802320B0: bne         $v0, $zero, L_802320C8
    if (ctx->r2 != 0) {
        // 0x802320B4: lui         $v0, 0xFFDF
        ctx->r2 = S32(0XFFDF << 16);
            goto L_802320C8;
    }
    // 0x802320B4: lui         $v0, 0xFFDF
    ctx->r2 = S32(0XFFDF << 16);
    // 0x802320B8: jal         0x8004F5C4
    // 0x802320BC: nop

    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x802320BC: nop

    after_0:
    // 0x802320C0: j           L_802320E4
    // 0x802320C4: nop

        goto L_802320E4;
    // 0x802320C4: nop

L_802320C8:
    // 0x802320C8: lw          $v1, 0x18($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X18);
    // 0x802320CC: lhu         $a0, 0x24($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X24);
    // 0x802320D0: ori         $v0, $v0, 0xDFE0
    ctx->r2 = ctx->r2 | 0XDFE0;
    // 0x802320D4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802320D8: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x802320DC: sw          $v1, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r3;
    // 0x802320E0: sh          $a0, 0x24($a1)
    MEM_H(0X24, ctx->r5) = ctx->r4;
L_802320E4:
    // 0x802320E4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802320E8: jr          $ra
    // 0x802320EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802320EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227F38_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227F38: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    // 0x80227F3C: addiu       $v0, $zero, 0x39
    ctx->r2 = ADD32(0, 0X39);
    // 0x80227F40: beq         $a0, $v0, L_80227F64
    if (ctx->r4 == ctx->r2) {
        // 0x80227F44: slti        $v0, $a0, 0x39
        ctx->r2 = SIGNED(ctx->r4) < 0X39 ? 1 : 0;
            goto L_80227F64;
    }
    // 0x80227F44: slti        $v0, $a0, 0x39
    ctx->r2 = SIGNED(ctx->r4) < 0X39 ? 1 : 0;
    // 0x80227F48: bne         $v0, $zero, L_80227F70
    if (ctx->r2 != 0) {
        // 0x80227F4C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80227F70;
    }
    // 0x80227F4C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227F50: slti        $v0, $a0, 0x4E
    ctx->r2 = SIGNED(ctx->r4) < 0X4E ? 1 : 0;
    // 0x80227F54: beq         $v0, $zero, L_80227F6C
    if (ctx->r2 == 0) {
        // 0x80227F58: slti        $v0, $a0, 0x4C
        ctx->r2 = SIGNED(ctx->r4) < 0X4C ? 1 : 0;
            goto L_80227F6C;
    }
    // 0x80227F58: slti        $v0, $a0, 0x4C
    ctx->r2 = SIGNED(ctx->r4) < 0X4C ? 1 : 0;
    // 0x80227F5C: bne         $v0, $zero, L_80227F70
    if (ctx->r2 != 0) {
        // 0x80227F60: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80227F70;
    }
    // 0x80227F60: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80227F64:
    // 0x80227F64: j           L_80227F70
    // 0x80227F68: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_80227F70;
    // 0x80227F68: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80227F6C:
    // 0x80227F6C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80227F70:
    // 0x80227F70: jr          $ra
    // 0x80227F74: nop

    TRACE_RETURN()
    return;
    // 0x80227F74: nop

;}
RECOMP_FUNC void func_802362C4_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802362C4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802362C8: sll         $a2, $a2, 2
    ctx->r6 = S32(ctx->r6 << 2);
    // 0x802362CC: sb          $zero, 0x11($a1)
    MEM_B(0X11, ctx->r5) = 0;
    // 0x802362D0: sb          $zero, 0xF($a1)
    MEM_B(0XF, ctx->r5) = 0;
    // 0x802362D4: sb          $v0, 0x10($a1)
    MEM_B(0X10, ctx->r5) = ctx->r2;
    // 0x802362D8: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802362DC: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x802362E0: lw          $v0, -0x43E0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X43E0);
    // 0x802362E4: jr          $ra
    // 0x802362E8: sw          $v0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x802362E8: sw          $v0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r2;
;}
RECOMP_FUNC void func_80227D98_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227D98: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80227D9C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227DA0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227DA4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80227DA8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80227DAC: lh          $a0, 0x34C($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X34C);
    // 0x80227DB0: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x80227DB4: jal         0x8004FA7C
    // 0x80227DB8: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x80227DB8: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    after_0:
    // 0x80227DBC: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x80227DC0: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80227DC4: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x80227DC8: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80227DCC: srl         $v1, $v1, 31
    ctx->r3 = S32(U32(ctx->r3) >> 31);
    // 0x80227DD0: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x80227DD4: beq         $v1, $zero, L_80227E08
    if (ctx->r3 == 0) {
        // 0x80227DD8: nop
    
            goto L_80227E08;
    }
    // 0x80227DD8: nop

    // 0x80227DDC: jal         0x80227F28
    // 0x80227DE0: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_80227F28_ovl27(rdram, ctx);
        goto after_1;
    // 0x80227DE0: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_1:
    // 0x80227DE4: lbu         $v1, 0x34A($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34A);
    // 0x80227DE8: lhu         $a0, 0x348($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X348);
    // 0x80227DEC: lbu         $a1, 0xD($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XD);
    // 0x80227DF0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80227DF4: ori         $a0, $a0, 0x2
    ctx->r4 = ctx->r4 | 0X2;
    // 0x80227DF8: andi        $a1, $a1, 0x7
    ctx->r5 = ctx->r5 & 0X7;
    // 0x80227DFC: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x80227E00: sh          $a0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r4;
    // 0x80227E04: sb          $a1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r5;
L_80227E08:
    // 0x80227E08: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80227E0C: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x80227E10: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80227E14: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80227E18: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80227E1C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227E20: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227E24: jr          $ra
    // 0x80227E28: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80227E28: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
