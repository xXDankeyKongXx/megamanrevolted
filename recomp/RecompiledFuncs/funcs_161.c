#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_802324AC_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802324AC: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    // 0x802324B0: lh          $v1, 0x18($a3)
    ctx->r3 = MEM_H(ctx->r7, 0X18);
    // 0x802324B4: slti        $v0, $v1, 0xB0
    ctx->r2 = SIGNED(ctx->r3) < 0XB0 ? 1 : 0;
    // 0x802324B8: beq         $v0, $zero, L_80232548
    if (ctx->r2 == 0) {
        // 0x802324BC: addu        $a2, $a0, $zero
        ctx->r6 = ADD32(ctx->r4, 0);
            goto L_80232548;
    }
    // 0x802324BC: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x802324C0: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x802324C4: beq         $v1, $v0, L_80232528
    if (ctx->r3 == ctx->r2) {
        // 0x802324C8: slti        $v0, $v1, 0x21
        ctx->r2 = SIGNED(ctx->r3) < 0X21 ? 1 : 0;
            goto L_80232528;
    }
    // 0x802324C8: slti        $v0, $v1, 0x21
    ctx->r2 = SIGNED(ctx->r3) < 0X21 ? 1 : 0;
    // 0x802324CC: beql        $v0, $zero, L_802324EC
    if (ctx->r2 == 0) {
        // 0x802324D0: addiu       $v0, $zero, 0x30
        ctx->r2 = ADD32(0, 0X30);
            goto L_802324EC;
    }
    goto skip_0;
    // 0x802324D0: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    skip_0:
    // 0x802324D4: beq         $v1, $zero, L_80232504
    if (ctx->r3 == 0) {
        // 0x802324D8: addiu       $v0, $zero, 0x10
        ctx->r2 = ADD32(0, 0X10);
            goto L_80232504;
    }
    // 0x802324D8: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x802324DC: beql        $v1, $v0, L_80232520
    if (ctx->r3 == ctx->r2) {
        // 0x802324E0: sh          $zero, 0x4E($a2)
        MEM_H(0X4E, ctx->r6) = 0;
            goto L_80232520;
    }
    goto skip_1;
    // 0x802324E0: sh          $zero, 0x4E($a2)
    MEM_H(0X4E, ctx->r6) = 0;
    skip_1:
    // 0x802324E4: j           L_80232538
    // 0x802324E8: nop

        goto L_80232538;
    // 0x802324E8: nop

L_802324EC:
    // 0x802324EC: beq         $v1, $v0, L_80232520
    if (ctx->r3 == ctx->r2) {
        // 0x802324F0: addiu       $v0, $zero, 0xA0
        ctx->r2 = ADD32(0, 0XA0);
            goto L_80232520;
    }
    // 0x802324F0: addiu       $v0, $zero, 0xA0
    ctx->r2 = ADD32(0, 0XA0);
    // 0x802324F4: beq         $v1, $v0, L_80232534
    if (ctx->r3 == ctx->r2) {
        // 0x802324F8: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80232534;
    }
    // 0x802324F8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802324FC: j           L_80232538
    // 0x80232500: nop

        goto L_80232538;
    // 0x80232500: nop

L_80232504:
    // 0x80232504: lbu         $v0, 0x140($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0X140);
    // 0x80232508: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x8023250C: sb          $v0, 0x140($a3)
    MEM_B(0X140, ctx->r7) = ctx->r2;
    // 0x80232510: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80232514: sh          $v0, 0x4E($a2)
    MEM_H(0X4E, ctx->r6) = ctx->r2;
    // 0x80232518: j           L_80232538
    // 0x8023251C: sh          $v0, 0x50($a2)
    MEM_H(0X50, ctx->r6) = ctx->r2;
        goto L_80232538;
    // 0x8023251C: sh          $v0, 0x50($a2)
    MEM_H(0X50, ctx->r6) = ctx->r2;
L_80232520:
    // 0x80232520: j           L_80232538
    // 0x80232524: sh          $zero, 0x50($a2)
    MEM_H(0X50, ctx->r6) = 0;
        goto L_80232538;
    // 0x80232524: sh          $zero, 0x50($a2)
    MEM_H(0X50, ctx->r6) = 0;
L_80232528:
    // 0x80232528: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8023252C: j           L_80232538
    // 0x80232530: sh          $v0, 0x50($a2)
    MEM_H(0X50, ctx->r6) = ctx->r2;
        goto L_80232538;
    // 0x80232530: sh          $v0, 0x50($a2)
    MEM_H(0X50, ctx->r6) = ctx->r2;
L_80232534:
    // 0x80232534: sh          $v0, 0x4E($a2)
    MEM_H(0X4E, ctx->r6) = ctx->r2;
L_80232538:
    // 0x80232538: lhu         $v0, 0x18($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X18);
    // 0x8023253C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80232540: j           L_8023256C
    // 0x80232544: sh          $v0, 0x18($a3)
    MEM_H(0X18, ctx->r7) = ctx->r2;
        goto L_8023256C;
    // 0x80232544: sh          $v0, 0x18($a3)
    MEM_H(0X18, ctx->r7) = ctx->r2;
L_80232548:
    // 0x80232548: lhu         $v0, 0x14($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X14);
    // 0x8023254C: sh          $zero, 0x18($a3)
    MEM_H(0X18, ctx->r7) = 0;
    // 0x80232550: ori         $v0, $v0, 0x84
    ctx->r2 = ctx->r2 | 0X84;
    // 0x80232554: sh          $v0, 0x14($a3)
    MEM_H(0X14, ctx->r7) = ctx->r2;
    // 0x80232558: lbu         $v0, 0xA($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0XA);
    // 0x8023255C: sh          $zero, 0x4E($a2)
    MEM_H(0X4E, ctx->r6) = 0;
    // 0x80232560: sh          $zero, 0x50($a2)
    MEM_H(0X50, ctx->r6) = 0;
    // 0x80232564: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80232568: sb          $v0, 0xA($a2)
    MEM_B(0XA, ctx->r6) = ctx->r2;
L_8023256C:
    // 0x8023256C: lhu         $v0, 0x46($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X46);
    // 0x80232570: lhu         $a0, 0x4E($a2)
    ctx->r4 = MEM_HU(ctx->r6, 0X4E);
    // 0x80232574: lhu         $v1, 0x48($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0X48);
    // 0x80232578: lhu         $a1, 0x50($a2)
    ctx->r5 = MEM_HU(ctx->r6, 0X50);
    // 0x8023257C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80232580: sh          $v0, 0x46($a2)
    MEM_H(0X46, ctx->r6) = ctx->r2;
    // 0x80232584: lhu         $v0, 0x16($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X16);
    // 0x80232588: lhu         $a0, 0x46($a2)
    ctx->r4 = MEM_HU(ctx->r6, 0X46);
    // 0x8023258C: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x80232590: sh          $v1, 0x48($a2)
    MEM_H(0X48, ctx->r6) = ctx->r3;
    // 0x80232594: lhu         $v1, 0x18($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0X18);
    // 0x80232598: lhu         $a1, 0x48($a2)
    ctx->r5 = MEM_HU(ctx->r6, 0X48);
    // 0x8023259C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x802325A0: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x802325A4: sh          $v0, 0x16($a2)
    MEM_H(0X16, ctx->r6) = ctx->r2;
    // 0x802325A8: sh          $v1, 0x18($a2)
    MEM_H(0X18, ctx->r6) = ctx->r3;
    // 0x802325AC: lhu         $v0, 0x14($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X14);
    // 0x802325B0: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x802325B4: beq         $v0, $zero, L_802325DC
    if (ctx->r2 == 0) {
        // 0x802325B8: addiu       $v0, $zero, -0x200
        ctx->r2 = ADD32(0, -0X200);
            goto L_802325DC;
    }
    // 0x802325B8: addiu       $v0, $zero, -0x200
    ctx->r2 = ADD32(0, -0X200);
    // 0x802325BC: sh          $zero, 0x14($a2)
    MEM_H(0X14, ctx->r6) = 0;
    // 0x802325C0: sh          $v0, 0x1C($a3)
    MEM_H(0X1C, ctx->r7) = ctx->r2;
    // 0x802325C4: sh          $v0, 0x16($a2)
    MEM_H(0X16, ctx->r6) = ctx->r2;
    // 0x802325C8: addiu       $v0, $zero, 0x1A00
    ctx->r2 = ADD32(0, 0X1A00);
    // 0x802325CC: sh          $v0, 0x18($a2)
    MEM_H(0X18, ctx->r6) = ctx->r2;
    // 0x802325D0: lhu         $v0, 0x14($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X14);
    // 0x802325D4: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x802325D8: sh          $v0, 0x14($a3)
    MEM_H(0X14, ctx->r7) = ctx->r2;
L_802325DC:
    // 0x802325DC: lh          $v0, 0x16($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X16);
    // 0x802325E0: lh          $v1, 0x18($a2)
    ctx->r3 = MEM_H(ctx->r6, 0X18);
    // 0x802325E4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802325E8: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x802325EC: sw          $v0, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->r2;
    // 0x802325F0: jr          $ra
    // 0x802325F4: sw          $v1, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->r3;
    TRACE_RETURN()
    return;
    // 0x802325F4: sw          $v1, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->r3;
;}
RECOMP_FUNC void func_8022B280_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B280: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022B284: sll         $a2, $a2, 2
    ctx->r6 = S32(ctx->r6 << 2);
    // 0x8022B288: sb          $zero, 0x11($a1)
    MEM_B(0X11, ctx->r5) = 0;
    // 0x8022B28C: sb          $zero, 0xF($a1)
    MEM_B(0XF, ctx->r5) = 0;
    // 0x8022B290: sb          $v0, 0x10($a1)
    MEM_B(0X10, ctx->r5) = ctx->r2;
    // 0x8022B294: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022B298: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x8022B29C: lw          $v0, -0x1DD4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1DD4);
    // 0x8022B2A0: jr          $ra
    // 0x8022B2A4: sw          $v0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x8022B2A4: sw          $v0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r2;
;}
RECOMP_FUNC void func_80229A38_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229A38: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80229A3C: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80229A40: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x80229A44: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80229A48: lbu         $s4, 0x4F($sp)
    ctx->r20 = MEM_BU(ctx->r29, 0X4F);
    // 0x80229A4C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80229A50: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229A54: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80229A58: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x80229A5C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80229A60: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x80229A64: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80229A68: addu        $s5, $a3, $zero
    ctx->r21 = ADD32(ctx->r7, 0);
    // 0x80229A6C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80229A70: jal         0x8004F144
    // 0x80229A74: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80229A74: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    after_0:
    // 0x80229A78: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80229A7C: beq         $s1, $zero, L_80229B04
    if (ctx->r17 == 0) {
        // 0x80229A80: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80229B04;
    }
    // 0x80229A80: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229A84: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x80229A88: sb          $zero, 0x2($s1)
    MEM_B(0X2, ctx->r17) = 0;
    // 0x80229A8C: sb          $zero, 0x3($s1)
    MEM_B(0X3, ctx->r17) = 0;
    // 0x80229A90: sb          $zero, 0xC($s1)
    MEM_B(0XC, ctx->r17) = 0;
    // 0x80229A94: sb          $s2, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r18;
    // 0x80229A98: sb          $s3, 0xF($s1)
    MEM_B(0XF, ctx->r17) = ctx->r19;
    // 0x80229A9C: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x80229AA0: sh          $v0, 0x1C($s1)
    MEM_H(0X1C, ctx->r17) = ctx->r2;
    // 0x80229AA4: lhu         $v0, 0x2($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X2);
    // 0x80229AA8: sh          $v0, 0x1E($s1)
    MEM_H(0X1E, ctx->r17) = ctx->r2;
    // 0x80229AAC: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x80229AB0: sh          $s5, 0x26($s1)
    MEM_H(0X26, ctx->r17) = ctx->r21;
    // 0x80229AB4: beq         $s4, $zero, L_80229AC8
    if (ctx->r20 == 0) {
        // 0x80229AB8: sh          $v0, 0x20($s1)
        MEM_H(0X20, ctx->r17) = ctx->r2;
            goto L_80229AC8;
    }
    // 0x80229AB8: sh          $v0, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r2;
    // 0x80229ABC: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x80229AC0: j           L_80229AD0
    // 0x80229AC4: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
        goto L_80229AD0;
    // 0x80229AC4: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
L_80229AC8:
    // 0x80229AC8: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x80229ACC: andi        $v0, $v0, 0xDF
    ctx->r2 = ctx->r2 & 0XDF;
L_80229AD0:
    // 0x80229AD0: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
    // 0x80229AD4: sw          $s6, 0x28($s1)
    MEM_W(0X28, ctx->r17) = ctx->r22;
    // 0x80229AD8: sll         $v0, $s5, 16
    ctx->r2 = S32(ctx->r21 << 16);
    // 0x80229ADC: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80229AE0: blez        $v0, L_80229B04
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80229AE4: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_80229B04;
    }
    // 0x80229AE4: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x80229AE8: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
L_80229AEC:
    // 0x80229AEC: jal         0x802298A8
    // 0x80229AF0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_802298A8_ovl25(rdram, ctx);
        goto after_1;
    // 0x80229AF0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x80229AF4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80229AF8: slt         $v0, $s0, $s2
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x80229AFC: bne         $v0, $zero, L_80229AEC
    if (ctx->r2 != 0) {
        // 0x80229B00: nop
    
            goto L_80229AEC;
    }
    // 0x80229B00: nop

L_80229B04:
    // 0x80229B04: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
    // 0x80229B08: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80229B0C: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80229B10: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80229B14: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80229B18: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80229B1C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80229B20: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80229B24: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80229B28: jr          $ra
    // 0x80229B2C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80229B2C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8023D0C8_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023D0C8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023D0CC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023D0D0: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x8023D0D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023D0D8: beq         $v1, $v0, L_8023D130
    if (ctx->r3 == ctx->r2) {
        // 0x8023D0DC: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8023D130;
    }
    // 0x8023D0DC: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8023D0E0: beql        $v0, $zero, L_8023D0F8
    if (ctx->r2 == 0) {
        // 0x8023D0E4: addiu       $v0, $zero, 0x14
        ctx->r2 = ADD32(0, 0X14);
            goto L_8023D0F8;
    }
    goto skip_0;
    // 0x8023D0E4: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    skip_0:
    // 0x8023D0E8: beq         $v1, $zero, L_8023D108
    if (ctx->r3 == 0) {
        // 0x8023D0EC: nop
    
            goto L_8023D108;
    }
    // 0x8023D0EC: nop

    // 0x8023D0F0: j           L_8023D16C
    // 0x8023D0F4: nop

        goto L_8023D16C;
    // 0x8023D0F4: nop

L_8023D0F8:
    // 0x8023D0F8: beq         $v1, $v0, L_8023D15C
    if (ctx->r3 == ctx->r2) {
        // 0x8023D0FC: nop
    
            goto L_8023D15C;
    }
    // 0x8023D0FC: nop

    // 0x8023D100: j           L_8023D16C
    // 0x8023D104: nop

        goto L_8023D16C;
    // 0x8023D104: nop

L_8023D108:
    // 0x8023D108: jal         0x8004F488
    // 0x8023D10C: lw          $a0, 0x2C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2C);
    func_8004F488_2A888(rdram, ctx);
        goto after_0;
    // 0x8023D10C: lw          $a0, 0x2C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2C);
    after_0:
    // 0x8023D110: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8023D114: jal         0x8005FA7C
    // 0x8023D118: addiu       $a0, $a0, 0x898
    ctx->r4 = ADD32(ctx->r4, 0X898);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_1;
    // 0x8023D118: addiu       $a0, $a0, 0x898
    ctx->r4 = ADD32(ctx->r4, 0X898);
    after_1:
    // 0x8023D11C: addiu       $a0, $zero, 0x60
    ctx->r4 = ADD32(0, 0X60);
    // 0x8023D120: jal         0x8004CB2C
    // 0x8023D124: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_2;
    // 0x8023D124: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_2:
    // 0x8023D128: j           L_8023D16C
    // 0x8023D12C: nop

        goto L_8023D16C;
    // 0x8023D12C: nop

L_8023D130:
    // 0x8023D130: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8023D134: addiu       $a0, $a0, 0xBAC
    ctx->r4 = ADD32(ctx->r4, 0XBAC);
    // 0x8023D138: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x8023D13C: addiu       $v0, $zero, -0x5
    ctx->r2 = ADD32(0, -0X5);
    // 0x8023D140: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x8023D144: addiu       $a3, $zero, 0x14
    ctx->r7 = ADD32(0, 0X14);
    // 0x8023D148: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8023D14C: jal         0x80229A38
    // 0x8023D150: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_80229A38_ovl25(rdram, ctx);
        goto after_3;
    // 0x8023D150: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_3:
    // 0x8023D154: j           L_8023D16C
    // 0x8023D158: nop

        goto L_8023D16C;
    // 0x8023D158: nop

L_8023D15C:
    // 0x8023D15C: lw          $v1, 0x30($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X30);
    // 0x8023D160: lbu         $v0, 0x8($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X8);
    // 0x8023D164: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023D168: sb          $v0, 0x8($v1)
    MEM_B(0X8, ctx->r3) = ctx->r2;
L_8023D16C:
    // 0x8023D16C: jal         0x8023C690
    // 0x8023D170: nop

    func_8023C690_ovl25(rdram, ctx);
        goto after_4;
    // 0x8023D170: nop

    after_4:
    // 0x8023D174: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8023D178: jr          $ra
    // 0x8023D17C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023D17C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80225A50_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225A50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225A54: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225A58: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225A5C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80225A60: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80225A64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225A68: jal         0x8009A3B4
    // 0x80225A6C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80225A6C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x80225A70: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80225A74: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80225A78: jal         0x8009A3B4
    // 0x80225A7C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80225A7C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80225A80: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80225A84: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80225A88: jal         0x8009A3B4
    // 0x80225A8C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80225A8C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80225A90: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80225A94: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x80225A98: beq         $v0, $zero, L_80225BA4
    if (ctx->r2 == 0) {
        // 0x80225A9C: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80225BA4;
    }
    // 0x80225A9C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80225AA0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80225AA4: addu        $at, $at, $v0
    gpr jr_addend_80225AAC = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80225AA8: lw          $v0, 0xC28($at)
    ctx->r2 = ADD32(ctx->r1, 0XC28);
    // 0x80225AAC: jr          $v0
    // 0x80225AB0: nop

    switch (jr_addend_80225AAC >> 2) {
        case 0: goto L_80225AB4; break;
        case 1: goto L_80225BA4; break;
        case 2: goto L_80225B1C; break;
        case 3: goto L_80225BA4; break;
        case 4: goto L_80225B34; break;
        default: switch_error(__func__, 0x80225AAC, 0x80240C28);
    }
    // 0x80225AB0: nop

L_80225AB4:
    // 0x80225AB4: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80225AB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80225ABC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80225AC0: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80225AC4: jal         0x8004D5FC
    // 0x80225AC8: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5FC_289FC(rdram, ctx);
        goto after_3;
    // 0x80225AC8: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_3:
    // 0x80225ACC: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80225AD0: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80225AD4: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80225AD8: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80225ADC: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80225AE0: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80225AE4: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80225AE8: addiu       $v0, $zero, -0x10E
    ctx->r2 = ADD32(0, -0X10E);
    // 0x80225AEC: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80225AF0: sh          $v0, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r2;
    // 0x80225AF4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225AF8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80225AFC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225B00: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x80225B04: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x80225B08: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x80225B0C: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x80225B10: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80225B14: j           L_80225BA4
    // 0x80225B18: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
        goto L_80225BA4;
    // 0x80225B18: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
L_80225B1C:
    // 0x80225B1C: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x80225B20: addiu       $v0, $v0, 0xC
    ctx->r2 = ADD32(ctx->r2, 0XC);
    // 0x80225B24: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x80225B28: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80225B2C: j           L_80225BA4
    // 0x80225B30: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
        goto L_80225BA4;
    // 0x80225B30: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
L_80225B34:
    // 0x80225B34: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x80225B38: slti        $v0, $v0, 0x40
    ctx->r2 = SIGNED(ctx->r2) < 0X40 ? 1 : 0;
    // 0x80225B3C: beq         $v0, $zero, L_80225B5C
    if (ctx->r2 == 0) {
        // 0x80225B40: nop
    
            goto L_80225B5C;
    }
    // 0x80225B40: nop

    // 0x80225B44: lbu         $v1, 0xC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XC);
    // 0x80225B48: lhu         $v0, 0x58($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X58);
    // 0x80225B4C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80225B50: addiu       $v0, $v0, -0x3
    ctx->r2 = ADD32(ctx->r2, -0X3);
    // 0x80225B54: sh          $v0, 0x58($s0)
    MEM_H(0X58, ctx->r16) = ctx->r2;
    // 0x80225B58: sb          $v1, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r3;
L_80225B5C:
    // 0x80225B5C: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x80225B60: slti        $v0, $v0, 0x3C
    ctx->r2 = SIGNED(ctx->r2) < 0X3C ? 1 : 0;
    // 0x80225B64: beq         $v0, $zero, L_80225B90
    if (ctx->r2 == 0) {
        // 0x80225B68: nop
    
            goto L_80225B90;
    }
    // 0x80225B68: nop

    // 0x80225B6C: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80225B70: lhu         $v1, 0x44($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X44);
    // 0x80225B74: lhu         $a0, 0x48($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X48);
    // 0x80225B78: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225B7C: addiu       $v1, $v1, -0x9
    ctx->r3 = ADD32(ctx->r3, -0X9);
    // 0x80225B80: addiu       $a0, $a0, -0x9
    ctx->r4 = ADD32(ctx->r4, -0X9);
    // 0x80225B84: sh          $v1, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r3;
    // 0x80225B88: sh          $a0, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r4;
    // 0x80225B8C: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
L_80225B90:
    // 0x80225B90: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80225B94: lh          $a3, 0x48($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X48);
    // 0x80225B98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80225B9C: jal         0x8004DA90
    // 0x80225BA0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_4;
    // 0x80225BA0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
L_80225BA4:
    // 0x80225BA4: lbu         $v1, 0xAC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XAC);
    // 0x80225BA8: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x80225BAC: beq         $v1, $v0, L_80225BCC
    if (ctx->r3 == ctx->r2) {
        // 0x80225BB0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80225BCC;
    }
    // 0x80225BB0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80225BB4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80225BB8: jal         0x80050294
    // 0x80225BBC: addiu       $a2, $zero, 0x2E
    ctx->r6 = ADD32(0, 0X2E);
    func_80050294_2B694(rdram, ctx);
        goto after_5;
    // 0x80225BBC: addiu       $a2, $zero, 0x2E
    ctx->r6 = ADD32(0, 0X2E);
    after_5:
    // 0x80225BC0: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x80225BC4: j           L_80225BFC
    // 0x80225BC8: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
        goto L_80225BFC;
    // 0x80225BC8: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
L_80225BCC:
    // 0x80225BCC: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80225BD0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80225BD4: bne         $v1, $v0, L_80225BF4
    if (ctx->r3 != ctx->r2) {
        // 0x80225BD8: nop
    
            goto L_80225BF4;
    }
    // 0x80225BD8: nop

    // 0x80225BDC: jal         0x800504EC
    // 0x80225BE0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800504EC_2B8EC(rdram, ctx);
        goto after_6;
    // 0x80225BE0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x80225BE4: jal         0x8005129C
    // 0x80225BE8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005129C_2C69C(rdram, ctx);
        goto after_7;
    // 0x80225BE8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
    // 0x80225BEC: j           L_80225C00
    // 0x80225BF0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_80225C00;
    // 0x80225BF0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80225BF4:
    // 0x80225BF4: jal         0x8005044C
    // 0x80225BF8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_8;
    // 0x80225BF8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
L_80225BFC:
    // 0x80225BFC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80225C00:
    // 0x80225C00: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80225C04: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x80225C08: jal         0x80047284
    // 0x80225C0C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_9;
    // 0x80225C0C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_9:
    // 0x80225C10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225C14: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225C18: jr          $ra
    // 0x80225C1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225C1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023AA40_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023AA40: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8023AA44: lw          $v1, 0x3268($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3268);
    // 0x8023AA48: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x8023AA4C: addiu       $a1, $a1, 0x3260
    ctx->r5 = ADD32(ctx->r5, 0X3260);
    // 0x8023AA50: beq         $v1, $zero, L_8023AB0C
    if (ctx->r3 == 0) {
        // 0x8023AA54: addiu       $sp, $sp, -0x10
        ctx->r29 = ADD32(ctx->r29, -0X10);
            goto L_8023AB0C;
    }
    // 0x8023AA54: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x8023AA58: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8023AA5C: lb          $v0, 0x3262($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X3262);
    // 0x8023AA60: addu        $v1, $v0, $v1
    ctx->r3 = ADD32(ctx->r2, ctx->r3);
    // 0x8023AA64: lb          $a2, 0x1($v1)
    ctx->r6 = MEM_B(ctx->r3, 0X1);
    // 0x8023AA68: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8023AA6C: addiu       $v0, $zero, 0x7E
    ctx->r2 = ADD32(0, 0X7E);
    // 0x8023AA70: beq         $a2, $v0, L_8023AA94
    if (ctx->r6 == ctx->r2) {
        // 0x8023AA74: addiu       $v0, $zero, 0x7F
        ctx->r2 = ADD32(0, 0X7F);
            goto L_8023AA94;
    }
    // 0x8023AA74: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x8023AA78: bne         $a2, $v0, L_8023AA8C
    if (ctx->r6 != ctx->r2) {
        // 0x8023AA7C: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_8023AA8C;
    }
    // 0x8023AA7C: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8023AA80: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023AA84: j           L_8023AA94
    // 0x8023AA88: sb          $zero, 0x3262($at)
    MEM_B(0X3262, ctx->r1) = 0;
        goto L_8023AA94;
    // 0x8023AA88: sb          $zero, 0x3262($at)
    MEM_B(0X3262, ctx->r1) = 0;
L_8023AA8C:
    // 0x8023AA8C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023AA90: sb          $v0, 0x3262($at)
    MEM_B(0X3262, ctx->r1) = ctx->r2;
L_8023AA94:
    // 0x8023AA94: lb          $v0, 0x2($a1)
    ctx->r2 = MEM_B(ctx->r5, 0X2);
    // 0x8023AA98: lw          $v1, 0x8($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X8);
    // 0x8023AA9C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023AAA0: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8023AAA4: lw          $v1, 0xC($a1)
    ctx->r3 = MEM_W(ctx->r5, 0XC);
    // 0x8023AAA8: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x8023AAAC: beq         $v1, $zero, L_8023AB0C
    if (ctx->r3 == 0) {
        // 0x8023AAB0: sb          $v0, 0x1($a1)
        MEM_B(0X1, ctx->r5) = ctx->r2;
            goto L_8023AB0C;
    }
    // 0x8023AAB0: sb          $v0, 0x1($a1)
    MEM_B(0X1, ctx->r5) = ctx->r2;
    // 0x8023AAB4: lb          $v0, 0x5($a1)
    ctx->r2 = MEM_B(ctx->r5, 0X5);
    // 0x8023AAB8: addu        $v1, $v0, $v1
    ctx->r3 = ADD32(ctx->r2, ctx->r3);
    // 0x8023AABC: lb          $a2, 0x1($v1)
    ctx->r6 = MEM_B(ctx->r3, 0X1);
    // 0x8023AAC0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8023AAC4: addiu       $v0, $zero, 0x7E
    ctx->r2 = ADD32(0, 0X7E);
    // 0x8023AAC8: beq         $a2, $v0, L_8023AAE4
    if (ctx->r6 == ctx->r2) {
        // 0x8023AACC: addiu       $v0, $zero, 0x7F
        ctx->r2 = ADD32(0, 0X7F);
            goto L_8023AAE4;
    }
    // 0x8023AACC: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x8023AAD0: bne         $a2, $v0, L_8023AAE0
    if (ctx->r6 != ctx->r2) {
        // 0x8023AAD4: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_8023AAE0;
    }
    // 0x8023AAD4: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8023AAD8: j           L_8023AAE4
    // 0x8023AADC: sb          $zero, 0x5($a1)
    MEM_B(0X5, ctx->r5) = 0;
        goto L_8023AAE4;
    // 0x8023AADC: sb          $zero, 0x5($a1)
    MEM_B(0X5, ctx->r5) = 0;
L_8023AAE0:
    // 0x8023AAE0: sb          $v0, 0x5($a1)
    MEM_B(0X5, ctx->r5) = ctx->r2;
L_8023AAE4:
    // 0x8023AAE4: lb          $v1, 0x5($a1)
    ctx->r3 = MEM_B(ctx->r5, 0X5);
    // 0x8023AAE8: lw          $v0, 0xC($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XC);
    // 0x8023AAEC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023AAF0: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x8023AAF4: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x8023AAF8: sb          $v0, 0x3($a1)
    MEM_B(0X3, ctx->r5) = ctx->r2;
    // 0x8023AAFC: sb          $v0, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r2;
    // 0x8023AB00: sb          $v1, 0x168($a0)
    MEM_B(0X168, ctx->r4) = ctx->r3;
    // 0x8023AB04: lbu         $v0, 0x3($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X3);
    // 0x8023AB08: sb          $v0, 0x169($a0)
    MEM_B(0X169, ctx->r4) = ctx->r2;
L_8023AB0C:
    // 0x8023AB0C: jr          $ra
    // 0x8023AB10: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    TRACE_RETURN()
    return;
    // 0x8023AB10: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_802263F0_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802263F0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802263F4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x802263F8: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x802263FC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226400: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    // 0x80226404: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80226408: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022640C: jal         0x8004EEAC
    // 0x80226410: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    func_8004EEAC_2A2AC(rdram, ctx);
        goto after_0;
    // 0x80226410: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    after_0:
    // 0x80226414: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x80226418: bne         $a1, $zero, L_80226428
    if (ctx->r5 != 0) {
        // 0x8022641C: andi        $t0, $s1, 0xFF
        ctx->r8 = ctx->r17 & 0XFF;
            goto L_80226428;
    }
    // 0x8022641C: andi        $t0, $s1, 0xFF
    ctx->r8 = ctx->r17 & 0XFF;
    // 0x80226420: j           L_80226524
    // 0x80226424: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_80226524;
    // 0x80226424: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80226428:
    // 0x80226428: sltiu       $v1, $t0, 0x1
    ctx->r3 = ctx->r8 < 0X1 ? 1 : 0;
    // 0x8022642C: sltiu       $v0, $t0, 0x7
    ctx->r2 = ctx->r8 < 0X7 ? 1 : 0;
    // 0x80226430: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x80226434: or          $t1, $v1, $v0
    ctx->r9 = ctx->r3 | ctx->r2;
    // 0x80226438: beq         $t1, $zero, L_80226450
    if (ctx->r9 == 0) {
        // 0x8022643C: lui         $a0, 0x2E80
        ctx->r4 = S32(0X2E80 << 16);
            goto L_80226450;
    }
    // 0x8022643C: lui         $a0, 0x2E80
    ctx->r4 = S32(0X2E80 << 16);
    // 0x80226440: jal         0x8004F418
    // 0x80226444: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_1;
    // 0x80226444: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    after_1:
    // 0x80226448: j           L_80226524
    // 0x8022644C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_80226524;
    // 0x8022644C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80226450:
    // 0x80226450: lbu         $v1, 0x6($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X6);
    // 0x80226454: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226458: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x8022645C: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    // 0x80226460: sb          $v0, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r2;
    // 0x80226464: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80226468: sb          $v0, 0x3($a1)
    MEM_B(0X3, ctx->r5) = ctx->r2;
    // 0x8022646C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80226470: sb          $v0, 0x88($a1)
    MEM_B(0X88, ctx->r5) = ctx->r2;
    // 0x80226474: addiu       $v0, $zero, 0x3F
    ctx->r2 = ADD32(0, 0X3F);
    // 0x80226478: ori         $a0, $a0, 0x8080
    ctx->r4 = ctx->r4 | 0X8080;
    // 0x8022647C: sb          $zero, 0x4($a1)
    MEM_B(0X4, ctx->r5) = 0;
    // 0x80226480: sw          $zero, 0xC($a1)
    MEM_W(0XC, ctx->r5) = 0;
    // 0x80226484: sw          $zero, 0x10($a1)
    MEM_W(0X10, ctx->r5) = 0;
    // 0x80226488: sb          $v0, 0x89($a1)
    MEM_B(0X89, ctx->r5) = ctx->r2;
    // 0x8022648C: ori         $v1, $v1, 0x20
    ctx->r3 = ctx->r3 | 0X20;
    // 0x80226490: sb          $v1, 0x6($a1)
    MEM_B(0X6, ctx->r5) = ctx->r3;
    // 0x80226494: lbu         $v0, 0x1($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X1);
    // 0x80226498: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022649C: sb          $s1, 0x8B($a1)
    MEM_B(0X8B, ctx->r5) = ctx->r17;
    // 0x802264A0: sb          $zero, 0x93($a1)
    MEM_B(0X93, ctx->r5) = 0;
    // 0x802264A4: sw          $a0, 0x98($a1)
    MEM_W(0X98, ctx->r5) = ctx->r4;
    // 0x802264A8: sw          $zero, 0x94($a1)
    MEM_W(0X94, ctx->r5) = 0;
    // 0x802264AC: sb          $v0, 0x8A($a1)
    MEM_B(0X8A, ctx->r5) = ctx->r2;
    // 0x802264B0: sltu        $v0, $t1, $t0
    ctx->r2 = ctx->r9 < ctx->r8 ? 1 : 0;
    // 0x802264B4: beq         $v0, $zero, L_80226520
    if (ctx->r2 == 0) {
        // 0x802264B8: addiu       $a3, $a1, 0x88
        ctx->r7 = ADD32(ctx->r5, 0X88);
            goto L_80226520;
    }
    // 0x802264B8: addiu       $a3, $a1, 0x88
    ctx->r7 = ADD32(ctx->r5, 0X88);
    // 0x802264BC: addiu       $t1, $zero, 0x7
    ctx->r9 = ADD32(0, 0X7);
L_802264C0:
    // 0x802264C0: andi        $v1, $a2, 0xFF
    ctx->r3 = ctx->r6 & 0XFF;
    // 0x802264C4: addu        $v0, $a3, $v1
    ctx->r2 = ADD32(ctx->r7, ctx->r3);
    // 0x802264C8: sb          $t1, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r9;
    // 0x802264CC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802264D0: sll         $v1, $v1, 7
    ctx->r3 = S32(ctx->r3 << 7);
    // 0x802264D4: addiu       $v1, $v1, 0x14
    ctx->r3 = ADD32(ctx->r3, 0X14);
    // 0x802264D8: addu        $v1, $a3, $v1
    ctx->r3 = ADD32(ctx->r7, ctx->r3);
    // 0x802264DC: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
L_802264E0:
    // 0x802264E0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x802264E4: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x802264E8: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x802264EC: sw          $s0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r16;
    // 0x802264F0: sb          $zero, 0x4($v0)
    MEM_B(0X4, ctx->r2) = 0;
    // 0x802264F4: sb          $zero, 0x5($v0)
    MEM_B(0X5, ctx->r2) = 0;
    // 0x802264F8: sh          $zero, 0x6($v0)
    MEM_H(0X6, ctx->r2) = 0;
    // 0x802264FC: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
    // 0x80226500: sltiu       $v0, $v0, 0x8
    ctx->r2 = ctx->r2 < 0X8 ? 1 : 0;
    // 0x80226504: bne         $v0, $zero, L_802264E0
    if (ctx->r2 != 0) {
        // 0x80226508: andi        $v0, $a0, 0xFF
        ctx->r2 = ctx->r4 & 0XFF;
            goto L_802264E0;
    }
    // 0x80226508: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
    // 0x8022650C: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x80226510: andi        $v0, $a2, 0xFF
    ctx->r2 = ctx->r6 & 0XFF;
    // 0x80226514: sltu        $v0, $v0, $t0
    ctx->r2 = ctx->r2 < ctx->r8 ? 1 : 0;
    // 0x80226518: bne         $v0, $zero, L_802264C0
    if (ctx->r2 != 0) {
        // 0x8022651C: addiu       $s0, $s0, 0x8
        ctx->r16 = ADD32(ctx->r16, 0X8);
            goto L_802264C0;
    }
    // 0x8022651C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_80226520:
    // 0x80226520: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
L_80226524:
    // 0x80226524: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80226528: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022652C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80226530: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226534: jr          $ra
    // 0x80226538: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80226538: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802253A4_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802253A4: jr          $ra
    // 0x802253A8: nop

    TRACE_RETURN()
    return;
    // 0x802253A8: nop

;}
RECOMP_FUNC void func_802278A0_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802278A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802278A4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802278A8: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x802278AC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802278B0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802278B4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802278B8: lw          $v0, -0x2390($at)
    ctx->r2 = MEM_W(ctx->r1, -0X2390);
    // 0x802278BC: jalr        $v0
    // 0x802278C0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802278C0: nop

    after_0:
    // 0x802278C4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802278C8: jr          $ra
    // 0x802278CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802278CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023C00C_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023C00C: jr          $ra
    // 0x8023C010: nop

    TRACE_RETURN()
    return;
    // 0x8023C010: nop

;}
RECOMP_FUNC void func_8022F294_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F294: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022F298: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022F29C: lhu         $v0, 0x56($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X56);
    // 0x8022F2A0: lb          $v1, 0xA7($a0)
    ctx->r3 = MEM_B(ctx->r4, 0XA7);
    // 0x8022F2A4: addiu       $v0, $v0, -0x20
    ctx->r2 = ADD32(ctx->r2, -0X20);
    // 0x8022F2A8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022F2AC: beq         $v1, $zero, L_8022F2BC
    if (ctx->r3 == 0) {
        // 0x8022F2B0: sh          $v0, 0x56($a0)
        MEM_H(0X56, ctx->r4) = ctx->r2;
            goto L_8022F2BC;
    }
    // 0x8022F2B0: sh          $v0, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r2;
    // 0x8022F2B4: jal         0x8022F374
    // 0x8022F2B8: nop

    func_8022F374_ovl25(rdram, ctx);
        goto after_0;
    // 0x8022F2B8: nop

    after_0:
L_8022F2BC:
    // 0x8022F2BC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022F2C0: jr          $ra
    // 0x8022F2C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022F2C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022AD10_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AD10: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022AD14: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022AD18: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8022AD1C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022AD20: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022AD24: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022AD28: lhu         $v0, 0x6($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X6);
    // 0x8022AD2C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022AD30: sra         $v0, $v0, 18
    ctx->r2 = S32(SIGNED(ctx->r2) >> 18);
    // 0x8022AD34: lui         $s1, 0x8024
    ctx->r17 = S32(0X8024 << 16);
    // 0x8022AD38: addu        $s1, $s1, $v0
    ctx->r17 = ADD32(ctx->r17, ctx->r2);
    // 0x8022AD3C: lbu         $s1, -0x1E58($s1)
    ctx->r17 = MEM_BU(ctx->r17, -0X1E58);
    // 0x8022AD40: jal         0x8003B878
    // 0x8022AD44: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    func_8003B878_16C78(rdram, ctx);
        goto after_0;
    // 0x8022AD44: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    after_0:
    // 0x8022AD48: lbu         $a0, 0x5($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X5);
    // 0x8022AD4C: sll         $v1, $a0, 8
    ctx->r3 = S32(ctx->r4 << 8);
    // 0x8022AD50: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8022AD54: sll         $v1, $v1, 8
    ctx->r3 = S32(ctx->r3 << 8);
    // 0x8022AD58: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8022AD5C: subu        $s0, $s0, $v1
    ctx->r16 = SUB32(ctx->r16, ctx->r3);
    // 0x8022AD60: sw          $s0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r16;
    // 0x8022AD64: lh          $v1, 0xA($s2)
    ctx->r3 = MEM_H(ctx->r18, 0XA);
    // 0x8022AD68: lhu         $a0, 0xC($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0XC);
    // 0x8022AD6C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022AD70: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x8022AD74: sw          $v1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r3;
    // 0x8022AD78: lh          $a1, 0xE($s2)
    ctx->r5 = MEM_H(ctx->r18, 0XE);
    // 0x8022AD7C: lui         $v1, 0x3D48
    ctx->r3 = S32(0X3D48 << 16);
    // 0x8022AD80: or          $v1, $s1, $v1
    ctx->r3 = ctx->r17 | ctx->r3;
    // 0x8022AD84: addiu       $a0, $s1, 0x1F
    ctx->r4 = ADD32(ctx->r17, 0X1F);
    // 0x8022AD88: sw          $v1, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r3;
    // 0x8022AD8C: lui         $v1, 0x4E
    ctx->r3 = S32(0X4E << 16);
    // 0x8022AD90: or          $v1, $a0, $v1
    ctx->r3 = ctx->r4 | ctx->r3;
    // 0x8022AD94: ori         $s1, $s1, 0x1F00
    ctx->r17 = ctx->r17 | 0X1F00;
    // 0x8022AD98: ori         $a0, $a0, 0x1F00
    ctx->r4 = ctx->r4 | 0X1F00;
    // 0x8022AD9C: sw          $v1, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r3;
    // 0x8022ADA0: sw          $s1, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r17;
    // 0x8022ADA4: sw          $a0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r4;
    // 0x8022ADA8: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x8022ADAC: sw          $a1, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r5;
    // 0x8022ADB0: lhu         $a0, 0x8($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X8);
    // 0x8022ADB4: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x8022ADB8: sw          $v1, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->r3;
    // 0x8022ADBC: sw          $a0, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r4;
    // 0x8022ADC0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022ADC4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022ADC8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022ADCC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022ADD0: jr          $ra
    // 0x8022ADD4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022ADD4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023A91C_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023A91C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023A920: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023A924: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023A928: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023A92C: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x8023A930: bne         $v0, $zero, L_8023A970
    if (ctx->r2 != 0) {
        // 0x8023A934: nop
    
            goto L_8023A970;
    }
    // 0x8023A934: nop

    // 0x8023A938: jal         0x8004F418
    // 0x8023A93C: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x8023A93C: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
    after_0:
    // 0x8023A940: jal         0x8004F418
    // 0x8023A944: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    func_8004F418_2A818(rdram, ctx);
        goto after_1;
    // 0x8023A944: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    after_1:
    // 0x8023A948: jal         0x8004F418
    // 0x8023A94C: lw          $a0, 0x30($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X30);
    func_8004F418_2A818(rdram, ctx);
        goto after_2;
    // 0x8023A94C: lw          $a0, 0x30($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X30);
    after_2:
    // 0x8023A950: jal         0x8004F418
    // 0x8023A954: lw          $a0, 0x34($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X34);
    func_8004F418_2A818(rdram, ctx);
        goto after_3;
    // 0x8023A954: lw          $a0, 0x34($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X34);
    after_3:
    // 0x8023A958: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x8023A95C: lbu         $v1, 0xD($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0XD);
    // 0x8023A960: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x8023A964: sb          $a0, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r4;
    // 0x8023A968: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8023A96C: sb          $v1, 0xD($v0)
    MEM_B(0XD, ctx->r2) = ctx->r3;
L_8023A970:
    // 0x8023A970: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023A974: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023A978: jr          $ra
    // 0x8023A97C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023A97C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023C488_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023C488: jr          $ra
    // 0x8023C48C: nop

    TRACE_RETURN()
    return;
    // 0x8023C48C: nop

;}
RECOMP_FUNC void func_8023C5C0_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023C5C0: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8023C5C4: lb          $v0, 0x3282($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X3282);
    // 0x8023C5C8: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8023C5CC: lw          $v1, 0x3288($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3288);
    // 0x8023C5D0: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x8023C5D4: addiu       $a2, $a2, 0x49B0
    ctx->r6 = ADD32(ctx->r6, 0X49B0);
    // 0x8023C5D8: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x8023C5DC: addiu       $a1, $a1, 0x3280
    ctx->r5 = ADD32(ctx->r5, 0X3280);
    // 0x8023C5E0: addu        $v1, $v0, $v1
    ctx->r3 = ADD32(ctx->r2, ctx->r3);
    // 0x8023C5E4: lb          $a0, 0x1($v1)
    ctx->r4 = MEM_B(ctx->r3, 0X1);
    // 0x8023C5E8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8023C5EC: addiu       $v0, $zero, 0x7E
    ctx->r2 = ADD32(0, 0X7E);
    // 0x8023C5F0: beq         $a0, $v0, L_8023C618
    if (ctx->r4 == ctx->r2) {
        // 0x8023C5F4: addiu       $sp, $sp, -0x10
        ctx->r29 = ADD32(ctx->r29, -0X10);
            goto L_8023C618;
    }
    // 0x8023C5F4: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x8023C5F8: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x8023C5FC: bne         $a0, $v0, L_8023C610
    if (ctx->r4 != ctx->r2) {
        // 0x8023C600: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_8023C610;
    }
    // 0x8023C600: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8023C604: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023C608: j           L_8023C618
    // 0x8023C60C: sb          $zero, 0x3282($at)
    MEM_B(0X3282, ctx->r1) = 0;
        goto L_8023C618;
    // 0x8023C60C: sb          $zero, 0x3282($at)
    MEM_B(0X3282, ctx->r1) = 0;
L_8023C610:
    // 0x8023C610: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023C614: sb          $v0, 0x3282($at)
    MEM_B(0X3282, ctx->r1) = ctx->r2;
L_8023C618:
    // 0x8023C618: lb          $v1, 0x2($a1)
    ctx->r3 = MEM_B(ctx->r5, 0X2);
    // 0x8023C61C: lw          $v0, 0x8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X8);
    // 0x8023C620: lb          $a0, 0x5($a1)
    ctx->r4 = MEM_B(ctx->r5, 0X5);
    // 0x8023C624: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023C628: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x8023C62C: lw          $v0, 0xC($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XC);
    // 0x8023C630: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x8023C634: sb          $v1, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r3;
    // 0x8023C638: sb          $v1, 0x1($a1)
    MEM_B(0X1, ctx->r5) = ctx->r3;
    // 0x8023C63C: lb          $v1, 0x1($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X1);
    // 0x8023C640: addiu       $v0, $zero, 0x7E
    ctx->r2 = ADD32(0, 0X7E);
    // 0x8023C644: beq         $v1, $v0, L_8023C660
    if (ctx->r3 == ctx->r2) {
        // 0x8023C648: addiu       $v0, $zero, 0x7F
        ctx->r2 = ADD32(0, 0X7F);
            goto L_8023C660;
    }
    // 0x8023C648: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x8023C64C: bne         $v1, $v0, L_8023C65C
    if (ctx->r3 != ctx->r2) {
        // 0x8023C650: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_8023C65C;
    }
    // 0x8023C650: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x8023C654: j           L_8023C660
    // 0x8023C658: sb          $zero, 0x5($a1)
    MEM_B(0X5, ctx->r5) = 0;
        goto L_8023C660;
    // 0x8023C658: sb          $zero, 0x5($a1)
    MEM_B(0X5, ctx->r5) = 0;
L_8023C65C:
    // 0x8023C65C: sb          $v0, 0x5($a1)
    MEM_B(0X5, ctx->r5) = ctx->r2;
L_8023C660:
    // 0x8023C660: lb          $v1, 0x5($a1)
    ctx->r3 = MEM_B(ctx->r5, 0X5);
    // 0x8023C664: lw          $v0, 0xC($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XC);
    // 0x8023C668: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023C66C: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x8023C670: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x8023C674: sb          $a0, 0x3($a1)
    MEM_B(0X3, ctx->r5) = ctx->r4;
    // 0x8023C678: lbu         $v1, 0x3($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X3);
    // 0x8023C67C: sb          $v0, 0x168($a2)
    MEM_B(0X168, ctx->r6) = ctx->r2;
    // 0x8023C680: sb          $a0, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r4;
    // 0x8023C684: sb          $v1, 0x169($a2)
    MEM_B(0X169, ctx->r6) = ctx->r3;
    // 0x8023C688: jr          $ra
    // 0x8023C68C: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    TRACE_RETURN()
    return;
    // 0x8023C68C: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_8023A980_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023A980: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8023A984: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023A988: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x8023A98C: addiu       $v0, $zero, 0x17
    ctx->r2 = ADD32(0, 0X17);
    // 0x8023A990: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023A994: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x8023A998: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8023A99C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023A9A0: sb          $a1, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r5;
    // 0x8023A9A4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023A9A8: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x8023A9AC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023A9B0: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x8023A9B4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023A9B8: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    // 0x8023A9BC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023A9C0: sh          $zero, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = 0;
    // 0x8023A9C4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023A9C8: sh          $zero, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = 0;
    // 0x8023A9CC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023A9D0: sh          $zero, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = 0;
    // 0x8023A9D4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023A9D8: jr          $ra
    // 0x8023A9DC: sh          $zero, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = 0;
    TRACE_RETURN()
    return;
    // 0x8023A9DC: sh          $zero, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = 0;
;}
RECOMP_FUNC void func_8022F190_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F190: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022F194: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022F198: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F19C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022F1A0: lh          $v0, 0x4E2($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X4E2);
    // 0x8022F1A4: bne         $v0, $zero, L_8022F1E4
    if (ctx->r2 != 0) {
        // 0x8022F1A8: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022F1E4;
    }
    // 0x8022F1A8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022F1AC: addiu       $a0, $zero, 0x1A8
    ctx->r4 = ADD32(0, 0X1A8);
    // 0x8022F1B0: addiu       $v0, $zero, 0x500
    ctx->r2 = ADD32(0, 0X500);
    // 0x8022F1B4: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022F1B8: addiu       $v0, $zero, 0x180
    ctx->r2 = ADD32(0, 0X180);
    // 0x8022F1BC: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x8022F1C0: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8022F1C4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022F1C8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022F1CC: jal         0x8002A2F8
    // 0x8022F1D0: sh          $v0, 0x4E2($s0)
    MEM_H(0X4E2, ctx->r16) = ctx->r2;
    func_8002A2F8_56F8(rdram, ctx);
        goto after_0;
    // 0x8022F1D0: sh          $v0, 0x4E2($s0)
    MEM_H(0X4E2, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022F1D4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022F1D8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022F1DC: j           L_8022F224
    // 0x8022F1E0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_8022F224;
    // 0x8022F1E0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022F1E4:
    // 0x8022F1E4: andi        $v0, $v1, 0xF
    ctx->r2 = ctx->r3 & 0XF;
    // 0x8022F1E8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022F1EC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022F1F0: lbu         $v0, -0x1610($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X1610);
    // 0x8022F1F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F1F8: lhu         $v1, 0x16($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X16);
    // 0x8022F1FC: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022F200: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8022F204: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022F208: sh          $v1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r3;
    // 0x8022F20C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022F210: jal         0x8022FA14
    // 0x8022F214: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    func_8022FA14_ovl25(rdram, ctx);
        goto after_1;
    // 0x8022F214: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    after_1:
    // 0x8022F218: lhu         $v0, 0x4E2($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4E2);
    // 0x8022F21C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022F220: sh          $v0, 0x4E2($s0)
    MEM_H(0X4E2, ctx->r16) = ctx->r2;
L_8022F224:
    // 0x8022F224: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022F228: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022F22C: jr          $ra
    // 0x8022F230: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022F230: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022E3B8_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E3B8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022E3BC: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8022E3C0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022E3C4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8022E3C8: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x8022E3CC: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8022E3D0: lh          $a0, 0x4($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X4);
    // 0x8022E3D4: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x8022E3D8: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x8022E3DC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022E3E0: lh          $v1, 0x2($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X2);
    // 0x8022E3E4: addiu       $v0, $zero, 0x3FFF
    ctx->r2 = ADD32(0, 0X3FFF);
    // 0x8022E3E8: beq         $v1, $v0, L_8022E404
    if (ctx->r3 == ctx->r2) {
        // 0x8022E3EC: addiu       $v0, $zero, 0x7FFF
        ctx->r2 = ADD32(0, 0X7FFF);
            goto L_8022E404;
    }
    // 0x8022E3EC: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x8022E3F0: bne         $v1, $v0, L_8022E400
    if (ctx->r3 != ctx->r2) {
        // 0x8022E3F4: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_8022E400;
    }
    // 0x8022E3F4: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x8022E3F8: j           L_8022E404
    // 0x8022E3FC: sh          $zero, 0x4($s0)
    MEM_H(0X4, ctx->r16) = 0;
        goto L_8022E404;
    // 0x8022E3FC: sh          $zero, 0x4($s0)
    MEM_H(0X4, ctx->r16) = 0;
L_8022E400:
    // 0x8022E400: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
L_8022E404:
    // 0x8022E404: lh          $v0, 0x4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X4);
    // 0x8022E408: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x8022E40C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022E410: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022E414: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x8022E418: lh          $v1, 0x2($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2);
    // 0x8022E41C: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
    // 0x8022E420: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022E424: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022E428: beq         $a0, $v1, L_8022E450
    if (ctx->r4 == ctx->r3) {
        // 0x8022E42C: addiu       $a1, $zero, 0x2A
        ctx->r5 = ADD32(0, 0X2A);
            goto L_8022E450;
    }
    // 0x8022E42C: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x8022E430: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x8022E434: jal         0x8003B85C
    // 0x8022E438: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_0;
    // 0x8022E438: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_0:
    // 0x8022E43C: lw          $a0, 0x88($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X88);
    // 0x8022E440: lui         $a1, 0x11
    ctx->r5 = S32(0X11 << 16);
    // 0x8022E444: ori         $a1, $a1, 0x10
    ctx->r5 = ctx->r5 | 0X10;
    // 0x8022E448: jal         0x8003B840
    // 0x8022E44C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_1;
    // 0x8022E44C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_1:
L_8022E450:
    // 0x8022E450: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x8022E454: lh          $a0, 0xA($s0)
    ctx->r4 = MEM_H(ctx->r16, 0XA);
    // 0x8022E458: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x8022E45C: sh          $v0, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r2;
    // 0x8022E460: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x8022E464: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022E468: lh          $v1, 0x2($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X2);
    // 0x8022E46C: addiu       $v0, $zero, 0x3FFF
    ctx->r2 = ADD32(0, 0X3FFF);
    // 0x8022E470: beq         $v1, $v0, L_8022E48C
    if (ctx->r3 == ctx->r2) {
        // 0x8022E474: addiu       $v0, $zero, 0x7FFF
        ctx->r2 = ADD32(0, 0X7FFF);
            goto L_8022E48C;
    }
    // 0x8022E474: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x8022E478: bne         $v1, $v0, L_8022E488
    if (ctx->r3 != ctx->r2) {
        // 0x8022E47C: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_8022E488;
    }
    // 0x8022E47C: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x8022E480: j           L_8022E48C
    // 0x8022E484: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
        goto L_8022E48C;
    // 0x8022E484: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_8022E488:
    // 0x8022E488: sh          $v0, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r2;
L_8022E48C:
    // 0x8022E48C: lh          $v0, 0xA($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XA);
    // 0x8022E490: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x8022E494: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022E498: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022E49C: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x8022E4A0: lh          $v1, 0x8($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X8);
    // 0x8022E4A4: sh          $v0, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r2;
    // 0x8022E4A8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022E4AC: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022E4B0: beq         $a0, $v1, L_8022E4D8
    if (ctx->r4 == ctx->r3) {
        // 0x8022E4B4: addiu       $a1, $zero, 0x2A
        ctx->r5 = ADD32(0, 0X2A);
            goto L_8022E4D8;
    }
    // 0x8022E4B4: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x8022E4B8: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x8022E4BC: jal         0x8003B85C
    // 0x8022E4C0: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_2;
    // 0x8022E4C0: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_2:
    // 0x8022E4C4: lw          $a0, 0x88($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X88);
    // 0x8022E4C8: lui         $a1, 0x13
    ctx->r5 = S32(0X13 << 16);
    // 0x8022E4CC: ori         $a1, $a1, 0x12
    ctx->r5 = ctx->r5 | 0X12;
    // 0x8022E4D0: jal         0x8003B840
    // 0x8022E4D4: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_3;
    // 0x8022E4D4: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_3:
L_8022E4D8:
    // 0x8022E4D8: lhu         $v0, 0x6($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6);
    // 0x8022E4DC: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x8022E4E0: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8022E4E4: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8022E4E8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8022E4EC: jr          $ra
    // 0x8022E4F0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022E4F0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8022E4F4: nop

    // 0x8022E4F8: nop

    // 0x8022E4FC: nop

;}
RECOMP_FUNC void func_80239EA0_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80239EA0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80239EA4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80239EA8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80239EAC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80239EB0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80239EB4: lbu         $v1, 0x5($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X5);
    // 0x80239EB8: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x80239EBC: addiu       $s0, $s0, 0x49B0
    ctx->r16 = ADD32(ctx->r16, 0X49B0);
    // 0x80239EC0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80239EC4: beq         $v1, $v0, L_80239FE0
    if (ctx->r3 == ctx->r2) {
        // 0x80239EC8: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80239FE0;
    }
    // 0x80239EC8: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80239ECC: beql        $v0, $zero, L_80239EE4
    if (ctx->r2 == 0) {
        // 0x80239ED0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80239EE4;
    }
    goto skip_0;
    // 0x80239ED0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80239ED4: beq         $v1, $zero, L_80239EF4
    if (ctx->r3 == 0) {
        // 0x80239ED8: nop
    
            goto L_80239EF4;
    }
    // 0x80239ED8: nop

    // 0x80239EDC: j           L_8023A088
    // 0x80239EE0: nop

        goto L_8023A088;
    // 0x80239EE0: nop

L_80239EE4:
    // 0x80239EE4: beq         $v1, $v0, L_8023A020
    if (ctx->r3 == ctx->r2) {
        // 0x80239EE8: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_8023A020;
    }
    // 0x80239EE8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80239EEC: j           L_8023A088
    // 0x80239EF0: nop

        goto L_8023A088;
    // 0x80239EF0: nop

L_80239EF4:
    // 0x80239EF4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80239EF8: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x80239EFC: bne         $v0, $zero, L_8023A088
    if (ctx->r2 != 0) {
        // 0x80239F00: addiu       $a0, $zero, 0x5E
        ctx->r4 = ADD32(0, 0X5E);
            goto L_8023A088;
    }
    // 0x80239F00: addiu       $a0, $zero, 0x5E
    ctx->r4 = ADD32(0, 0X5E);
    // 0x80239F04: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80239F08: sb          $zero, 0x4430($at)
    MEM_B(0X4430, ctx->r1) = 0;
    // 0x80239F0C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80239F10: sb          $zero, 0x4468($at)
    MEM_B(0X4468, ctx->r1) = 0;
    // 0x80239F14: jal         0x8004CB2C
    // 0x80239F18: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_0;
    // 0x80239F18: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_0:
    // 0x80239F1C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80239F20: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80239F24: lbu         $v1, 0x4A6D($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X4A6D);
    // 0x80239F28: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80239F2C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80239F30: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x80239F34: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80239F38: sb          $v0, 0x49B8($at)
    MEM_B(0X49B8, ctx->r1) = ctx->r2;
    // 0x80239F3C: addiu       $v0, $zero, -0x5C1
    ctx->r2 = ADD32(0, -0X5C1);
    // 0x80239F40: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80239F44: sh          $v0, 0x4DEA($at)
    MEM_H(0X4DEA, ctx->r1) = ctx->r2;
    // 0x80239F48: lui         $v0, 0xFA3F
    ctx->r2 = S32(0XFA3F << 16);
    // 0x80239F4C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80239F50: sw          $v0, 0x4DDC($at)
    MEM_W(0X4DDC, ctx->r1) = ctx->r2;
    // 0x80239F54: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x80239F58: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80239F5C: sb          $s0, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = ctx->r16;
    // 0x80239F60: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80239F64: sh          $zero, 0x4DE8($at)
    MEM_H(0X4DE8, ctx->r1) = 0;
    // 0x80239F68: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80239F6C: sh          $zero, 0x4DEC($at)
    MEM_H(0X4DEC, ctx->r1) = 0;
    // 0x80239F70: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80239F74: sw          $zero, 0x4DD8($at)
    MEM_W(0X4DD8, ctx->r1) = 0;
    // 0x80239F78: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80239F7C: sw          $zero, 0x4DE0($at)
    MEM_W(0X4DE0, ctx->r1) = 0;
    // 0x80239F80: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80239F84: sh          $zero, 0x4DF4($at)
    MEM_H(0X4DF4, ctx->r1) = 0;
    // 0x80239F88: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80239F8C: sh          $zero, 0x4DF0($at)
    MEM_H(0X4DF0, ctx->r1) = 0;
    // 0x80239F90: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80239F94: sh          $v0, 0x4DF2($at)
    MEM_H(0X4DF2, ctx->r1) = ctx->r2;
    // 0x80239F98: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80239F9C: sb          $zero, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = 0;
    // 0x80239FA0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80239FA4: sb          $zero, 0x4B18($at)
    MEM_B(0X4B18, ctx->r1) = 0;
    // 0x80239FA8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80239FAC: sb          $zero, 0x4B19($at)
    MEM_B(0X4B19, ctx->r1) = 0;
    // 0x80239FB0: ori         $v1, $v1, 0x10
    ctx->r3 = ctx->r3 | 0X10;
    // 0x80239FB4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80239FB8: sb          $v1, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r3;
    // 0x80239FBC: jal         0x80036B00
    // 0x80239FC0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80036B00_11F00(rdram, ctx);
        goto after_1;
    // 0x80239FC0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x80239FC4: jal         0x80054578
    // 0x80239FC8: nop

    func_80054578_2F978(rdram, ctx);
        goto after_2;
    // 0x80239FC8: nop

    after_2:
    // 0x80239FCC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80239FD0: jal         0x80034844
    // 0x80239FD4: sb          $s0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r16;
    func_80034844_FC44(rdram, ctx);
        goto after_3;
    // 0x80239FD4: sb          $s0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r16;
    after_3:
    // 0x80239FD8: j           L_8023A010
    // 0x80239FDC: nop

        goto L_8023A010;
    // 0x80239FDC: nop

L_80239FE0:
    // 0x80239FE0: jal         0x80070050
    // 0x80239FE4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80070050_4B450(rdram, ctx);
        goto after_4;
    // 0x80239FE4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80239FE8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80239FEC: lbu         $v0, 0x4A6D($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4A6D);
    // 0x80239FF0: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80239FF4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80239FF8: sb          $zero, 0x4A26($at)
    MEM_B(0X4A26, ctx->r1) = 0;
    // 0x80239FFC: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    // 0x8023A000: andi        $v1, $v1, 0xFC
    ctx->r3 = ctx->r3 & 0XFC;
    // 0x8023A004: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023A008: sb          $v0, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r2;
    // 0x8023A00C: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
L_8023A010:
    // 0x8023A010: lbu         $v0, 0x5($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X5);
    // 0x8023A014: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023A018: j           L_8023A088
    // 0x8023A01C: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
        goto L_8023A088;
    // 0x8023A01C: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
L_8023A020:
    // 0x8023A020: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023A024: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x8023A028: addiu       $v0, $zero, 0x17
    ctx->r2 = ADD32(0, 0X17);
    // 0x8023A02C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023A030: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x8023A034: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023A038: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023A03C: sb          $v0, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r2;
    // 0x8023A040: addiu       $v0, $zero, -0x5C1
    ctx->r2 = ADD32(0, -0X5C1);
    // 0x8023A044: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023A048: sh          $v0, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = ctx->r2;
    // 0x8023A04C: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x8023A050: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023A054: sh          $v0, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = ctx->r2;
    // 0x8023A058: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8023A05C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023A060: sh          $zero, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = 0;
    // 0x8023A064: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023A068: sh          $zero, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = 0;
    // 0x8023A06C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023A070: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x8023A074: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023A078: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x8023A07C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023A080: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    // 0x8023A084: sb          $zero, 0x0($s1)
    MEM_B(0X0, ctx->r17) = 0;
L_8023A088:
    // 0x8023A088: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x8023A08C: beq         $v0, $zero, L_8023A0A4
    if (ctx->r2 == 0) {
        // 0x8023A090: nop
    
            goto L_8023A0A4;
    }
    // 0x8023A090: nop

    // 0x8023A094: jal         0x8005FB90
    // 0x8023A098: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_5;
    // 0x8023A098: nop

    after_5:
    // 0x8023A09C: jal         0x80060018
    // 0x8023A0A0: nop

    func_80060018_3B418(rdram, ctx);
        goto after_6;
    // 0x8023A0A0: nop

    after_6:
L_8023A0A4:
    // 0x8023A0A4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8023A0A8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023A0AC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023A0B0: jr          $ra
    // 0x8023A0B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023A0B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022A92C_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A92C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022A930: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A934: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022A938: jal         0x800A3450
    // 0x8022A93C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8022A93C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    after_0:
    // 0x8022A940: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x8022A944: bne         $v1, $zero, L_8022A9CC
    if (ctx->r3 != 0) {
        // 0x8022A948: addu        $a2, $v0, $zero
        ctx->r6 = ADD32(ctx->r2, 0);
            goto L_8022A9CC;
    }
    // 0x8022A948: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x8022A94C: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8022A950: andi        $v1, $a2, 0x7
    ctx->r3 = ctx->r6 & 0X7;
    // 0x8022A954: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    // 0x8022A958: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8022A95C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022A960: sll         $a0, $a2, 16
    ctx->r4 = S32(ctx->r6 << 16);
    // 0x8022A964: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x8022A968: sra         $v1, $a0, 18
    ctx->r3 = S32(SIGNED(ctx->r4) >> 18);
    // 0x8022A96C: andi        $v1, $v1, 0x1F
    ctx->r3 = ctx->r3 & 0X1F;
    // 0x8022A970: sh          $v0, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r2;
    // 0x8022A974: addiu       $v0, $zero, 0x12C
    ctx->r2 = ADD32(0, 0X12C);
    // 0x8022A978: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022A97C: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x8022A980: sra         $v0, $a0, 20
    ctx->r2 = S32(SIGNED(ctx->r4) >> 20);
    // 0x8022A984: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x8022A988: lhu         $v1, 0x0($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X0);
    // 0x8022A98C: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022A990: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x8022A994: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022A998: sra         $v0, $a0, 22
    ctx->r2 = S32(SIGNED(ctx->r4) >> 22);
    // 0x8022A99C: sh          $v1, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r3;
    // 0x8022A9A0: lhu         $v1, 0x2($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X2);
    // 0x8022A9A4: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x8022A9A8: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x8022A9AC: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8022A9B0: sh          $v1, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r3;
    // 0x8022A9B4: lhu         $v0, 0x4($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X4);
    // 0x8022A9B8: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
    // 0x8022A9BC: andi        $a0, $a0, 0x1F
    ctx->r4 = ctx->r4 & 0X1F;
    // 0x8022A9C0: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8022A9C4: j           L_8022AA48
    // 0x8022A9C8: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
        goto L_8022AA48;
    // 0x8022A9C8: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
L_8022A9CC:
    // 0x8022A9CC: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x8022A9D0: lhu         $v1, 0x6($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X6);
    // 0x8022A9D4: lhu         $a0, 0x8($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X8);
    // 0x8022A9D8: lhu         $a1, 0xA($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0XA);
    // 0x8022A9DC: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8022A9E0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022A9E4: addiu       $a0, $a0, 0x3
    ctx->r4 = ADD32(ctx->r4, 0X3);
    // 0x8022A9E8: addiu       $a1, $a1, 0xA
    ctx->r5 = ADD32(ctx->r5, 0XA);
    // 0x8022A9EC: sh          $v1, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r3;
    // 0x8022A9F0: sll         $v1, $a2, 16
    ctx->r3 = S32(ctx->r6 << 16);
    // 0x8022A9F4: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
    // 0x8022A9F8: sra         $v0, $v1, 18
    ctx->r2 = S32(SIGNED(ctx->r3) >> 18);
    // 0x8022A9FC: sh          $a0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r4;
    // 0x8022AA00: lhu         $a0, 0xC($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XC);
    // 0x8022AA04: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x8022AA08: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x8022AA0C: sra         $v0, $v1, 20
    ctx->r2 = S32(SIGNED(ctx->r3) >> 20);
    // 0x8022AA10: sh          $a1, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r5;
    // 0x8022AA14: lhu         $a1, 0xE($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0XE);
    // 0x8022AA18: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x8022AA1C: sra         $v1, $v1, 22
    ctx->r3 = S32(SIGNED(ctx->r3) >> 22);
    // 0x8022AA20: andi        $v1, $v1, 0xF
    ctx->r3 = ctx->r3 & 0XF;
    // 0x8022AA24: addiu       $a0, $a0, -0xA
    ctx->r4 = ADD32(ctx->r4, -0XA);
    // 0x8022AA28: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x8022AA2C: lh          $v0, 0x6($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X6);
    // 0x8022AA30: addiu       $a1, $a1, 0x2A
    ctx->r5 = ADD32(ctx->r5, 0X2A);
    // 0x8022AA34: addu        $a1, $a1, $v1
    ctx->r5 = ADD32(ctx->r5, ctx->r3);
    // 0x8022AA38: sh          $a0, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r4;
    // 0x8022AA3C: bne         $v0, $zero, L_8022AA48
    if (ctx->r2 != 0) {
        // 0x8022AA40: sh          $a1, 0xE($s0)
        MEM_H(0XE, ctx->r16) = ctx->r5;
            goto L_8022AA48;
    }
    // 0x8022AA40: sh          $a1, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r5;
    // 0x8022AA44: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
L_8022AA48:
    // 0x8022AA48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022AA4C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022AA50: jr          $ra
    // 0x8022AA54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022AA54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80230630_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230630: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80230634: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80230638: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8023063C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80230640: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x80230644: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80230648: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8023064C: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80230650: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80230654: ori         $v0, $v0, 0x42
    ctx->r2 = ctx->r2 | 0X42;
    // 0x80230658: jal         0x8004D5FC
    // 0x8023065C: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    func_8004D5FC_289FC(rdram, ctx);
        goto after_0;
    // 0x8023065C: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    after_0:
    // 0x80230660: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80230664: lui         $t0, 0x8024
    ctx->r8 = S32(0X8024 << 16);
    // 0x80230668: addiu       $t0, $t0, 0xF08
    ctx->r8 = ADD32(ctx->r8, 0XF08);
    // 0x8023066C: lbu         $v1, 0x2($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X2);
    // 0x80230670: lui         $a0, 0x8019
    ctx->r4 = S32(0X8019 << 16);
    // 0x80230674: lw          $a0, 0x3C60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3C60);
    // 0x80230678: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x8023067C: addiu       $v0, $zero, 0xC00
    ctx->r2 = ADD32(0, 0XC00);
    // 0x80230680: sh          $v0, 0x15C($s1)
    MEM_H(0X15C, ctx->r17) = ctx->r2;
    // 0x80230684: sh          $v0, 0x15A($s1)
    MEM_H(0X15A, ctx->r17) = ctx->r2;
    // 0x80230688: sh          $v0, 0x158($s1)
    MEM_H(0X158, ctx->r17) = ctx->r2;
    // 0x8023068C: sh          $zero, 0x15E($s1)
    MEM_H(0X15E, ctx->r17) = 0;
    // 0x80230690: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80230694: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80230698: lw          $s2, 0x0($v1)
    ctx->r18 = MEM_W(ctx->r3, 0X0);
L_8023069C:
    // 0x8023069C: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x802306A0: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802306A4: sltiu       $v0, $v1, 0xC
    ctx->r2 = ctx->r3 < 0XC ? 1 : 0;
    // 0x802306A8: beq         $v0, $zero, L_802306F0
    if (ctx->r2 == 0) {
        // 0x802306AC: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_802306F0;
    }
    // 0x802306AC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x802306B0: addu        $v0, $v0, $t0
    gpr jr_addend_802306B8 = ctx->r2;
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x802306B4: lw          $v0, 0x0($v0)
    ctx->r2 = ADD32(ctx->r2, 0X0);
    // 0x802306B8: jr          $v0
    // 0x802306BC: nop

    switch (jr_addend_802306B8 >> 2) {
        case 0: goto L_802306CC; break;
        case 1: goto L_802306D8; break;
        case 2: goto L_802306E4; break;
        case 3: goto L_802306F0; break;
        case 4: goto L_802306F0; break;
        case 5: goto L_802306F0; break;
        case 6: goto L_802306F0; break;
        case 7: goto L_802306F0; break;
        case 8: goto L_802306F0; break;
        case 9: goto L_802306C0; break;
        case 10: goto L_802306CC; break;
        case 11: goto L_802306D8; break;
        default: switch_error(__func__, 0x802306B8, 0x80240F08);
    }
    // 0x802306BC: nop

L_802306C0:
    // 0x802306C0: lbu         $v1, 0x8($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X8);
    // 0x802306C4: j           L_802306F8
    // 0x802306C8: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
        goto L_802306F8;
    // 0x802306C8: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
L_802306CC:
    // 0x802306CC: lbu         $v1, 0xA($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0XA);
    // 0x802306D0: j           L_802306F8
    // 0x802306D4: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
        goto L_802306F8;
    // 0x802306D4: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
L_802306D8:
    // 0x802306D8: lbu         $v1, 0xB($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0XB);
    // 0x802306DC: j           L_802306F8
    // 0x802306E0: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
        goto L_802306F8;
    // 0x802306E0: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
L_802306E4:
    // 0x802306E4: lbu         $v1, 0xC($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0XC);
    // 0x802306E8: j           L_802306F8
    // 0x802306EC: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
        goto L_802306F8;
    // 0x802306EC: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
L_802306F0:
    // 0x802306F0: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x802306F4: lbu         $v1, 0xD($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0XD);
L_802306F8:
    // 0x802306F8: sra         $v0, $v0, 15
    ctx->r2 = S32(SIGNED(ctx->r2) >> 15);
    // 0x802306FC: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x80230700: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x80230704: sh          $v1, 0xA0($v0)
    MEM_H(0XA0, ctx->r2) = ctx->r3;
    // 0x80230708: sll         $a0, $a2, 16
    ctx->r4 = S32(ctx->r6 << 16);
    // 0x8023070C: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80230710: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x80230714: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x80230718: lhu         $a1, 0xA0($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0XA0);
    // 0x8023071C: addiu       $v1, $a2, 0x1
    ctx->r3 = ADD32(ctx->r6, 0X1);
    // 0x80230720: addu        $a2, $v1, $zero
    ctx->r6 = ADD32(ctx->r3, 0);
    // 0x80230724: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80230728: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8023072C: slti        $v1, $v1, 0xC
    ctx->r3 = SIGNED(ctx->r3) < 0XC ? 1 : 0;
    // 0x80230730: sh          $a1, 0xB8($v0)
    MEM_H(0XB8, ctx->r2) = ctx->r5;
    // 0x80230734: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
    // 0x80230738: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x8023073C: addu        $a0, $s0, $a0
    ctx->r4 = ADD32(ctx->r16, ctx->r4);
    // 0x80230740: sw          $zero, 0xD4($v0)
    MEM_W(0XD4, ctx->r2) = 0;
    // 0x80230744: sw          $zero, 0xD0($v0)
    MEM_W(0XD0, ctx->r2) = 0;
    // 0x80230748: bne         $v1, $zero, L_8023069C
    if (ctx->r3 != 0) {
        // 0x8023074C: sb          $a3, 0x130($a0)
        MEM_B(0X130, ctx->r4) = ctx->r7;
            goto L_8023069C;
    }
    // 0x8023074C: sb          $a3, 0x130($a0)
    MEM_B(0X130, ctx->r4) = ctx->r7;
    // 0x80230750: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80230754: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80230758: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x8023075C: lhu         $a3, 0xCA($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0XCA);
    // 0x80230760: lhu         $t0, 0xB8($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0XB8);
    // 0x80230764: lhu         $v0, 0xBA($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XBA);
    // 0x80230768: lhu         $v1, 0xBC($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XBC);
    // 0x8023076C: addu        $a3, $a3, $t0
    ctx->r7 = ADD32(ctx->r7, ctx->r8);
    // 0x80230770: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x80230774: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80230778: addiu       $a3, $zero, 0x4210
    ctx->r7 = ADD32(0, 0X4210);
    // 0x8023077C: sh          $v1, 0xB0($s1)
    MEM_H(0XB0, ctx->r17) = ctx->r3;
    // 0x80230780: sh          $v1, 0xB2($s1)
    MEM_H(0XB2, ctx->r17) = ctx->r3;
    // 0x80230784: jal         0x802325F8
    // 0x80230788: sh          $v1, 0x6E($s1)
    MEM_H(0X6E, ctx->r17) = ctx->r3;
    func_802325F8_ovl25(rdram, ctx);
        goto after_1;
    // 0x80230788: sh          $v1, 0x6E($s1)
    MEM_H(0X6E, ctx->r17) = ctx->r3;
    after_1:
    // 0x8023078C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
L_80230790:
    // 0x80230790: sll         $a0, $a2, 16
    ctx->r4 = S32(ctx->r6 << 16);
    // 0x80230794: sra         $a0, $a0, 13
    ctx->r4 = S32(SIGNED(ctx->r4) >> 13);
    // 0x80230798: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8023079C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x802307A0: lhu         $v0, -0x14F0($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X14F0);
    // 0x802307A4: lhu         $v1, 0x14($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X14);
    // 0x802307A8: addiu       $a1, $a0, 0x20
    ctx->r5 = ADD32(ctx->r4, 0X20);
    // 0x802307AC: addu        $a1, $s0, $a1
    ctx->r5 = ADD32(ctx->r16, ctx->r5);
    // 0x802307B0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802307B4: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
    // 0x802307B8: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802307BC: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x802307C0: lhu         $v0, -0x14EE($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X14EE);
    // 0x802307C4: lhu         $v1, 0x16($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X16);
    // 0x802307C8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802307CC: sh          $v0, 0x2($a1)
    MEM_H(0X2, ctx->r5) = ctx->r2;
    // 0x802307D0: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x802307D4: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x802307D8: lhu         $v1, -0x14EC($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X14EC);
    // 0x802307DC: lhu         $a0, 0x18($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X18);
    // 0x802307E0: addiu       $v0, $a2, 0x1
    ctx->r2 = ADD32(ctx->r6, 0X1);
    // 0x802307E4: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x802307E8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802307EC: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802307F0: slti        $v0, $v0, 0x10
    ctx->r2 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
    // 0x802307F4: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x802307F8: bne         $v0, $zero, L_80230790
    if (ctx->r2 != 0) {
        // 0x802307FC: sh          $v1, 0x4($a1)
        MEM_H(0X4, ctx->r5) = ctx->r3;
            goto L_80230790;
    }
    // 0x802307FC: sh          $v1, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r3;
    // 0x80230800: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80230804: lbu         $v0, 0x9($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X9);
    // 0x80230808: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8023080C: addiu       $a2, $s0, 0x20
    ctx->r6 = ADD32(ctx->r16, 0X20);
    // 0x80230810: jal         0x80229ED0
    // 0x80230814: sb          $v0, 0x1E($s0)
    MEM_B(0X1E, ctx->r16) = ctx->r2;
    func_80229ED0_ovl25(rdram, ctx);
        goto after_2;
    // 0x80230814: sb          $v0, 0x1E($s0)
    MEM_B(0X1E, ctx->r16) = ctx->r2;
    after_2:
    // 0x80230818: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023081C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80230820: addiu       $a2, $s0, 0x38
    ctx->r6 = ADD32(ctx->r16, 0X38);
    // 0x80230824: jal         0x8022653C
    // 0x80230828: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    func_8022653C_ovl25(rdram, ctx);
        goto after_3;
    // 0x80230828: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    after_3:
    // 0x8023082C: addiu       $a0, $s0, 0x148
    ctx->r4 = ADD32(ctx->r16, 0X148);
    // 0x80230830: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80230834: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80230838: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x8023083C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80230840: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x80230844: sh          $zero, 0x18($s0)
    MEM_H(0X18, ctx->r16) = 0;
    // 0x80230848: sh          $zero, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = 0;
    // 0x8023084C: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    // 0x80230850: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
    // 0x80230854: sb          $zero, 0x1F($s0)
    MEM_B(0X1F, ctx->r16) = 0;
    // 0x80230858: sb          $zero, 0x13C($s0)
    MEM_B(0X13C, ctx->r16) = 0;
    // 0x8023085C: sb          $zero, 0x13D($s0)
    MEM_B(0X13D, ctx->r16) = 0;
    // 0x80230860: sb          $zero, 0x13E($s0)
    MEM_B(0X13E, ctx->r16) = 0;
    // 0x80230864: sb          $zero, 0x13F($s0)
    MEM_B(0X13F, ctx->r16) = 0;
    // 0x80230868: sb          $zero, 0x141($s0)
    MEM_B(0X141, ctx->r16) = 0;
    // 0x8023086C: sb          $zero, 0x140($s0)
    MEM_B(0X140, ctx->r16) = 0;
    // 0x80230870: sh          $zero, 0x142($s0)
    MEM_H(0X142, ctx->r16) = 0;
    // 0x80230874: jal         0x800540BC
    // 0x80230878: sw          $zero, 0x144($s0)
    MEM_W(0X144, ctx->r16) = 0;
    func_800540BC_2F4BC(rdram, ctx);
        goto after_4;
    // 0x80230878: sw          $zero, 0x144($s0)
    MEM_W(0X144, ctx->r16) = 0;
    after_4:
    // 0x8023087C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80230880: sb          $v0, 0xAD($s1)
    MEM_B(0XAD, ctx->r17) = ctx->r2;
    // 0x80230884: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80230888: sb          $zero, 0xC($s1)
    MEM_B(0XC, ctx->r17) = 0;
    // 0x8023088C: sh          $zero, 0x48($s1)
    MEM_H(0X48, ctx->r17) = 0;
    // 0x80230890: sh          $zero, 0x46($s1)
    MEM_H(0X46, ctx->r17) = 0;
    // 0x80230894: sh          $zero, 0x44($s1)
    MEM_H(0X44, ctx->r17) = 0;
    // 0x80230898: sh          $zero, 0x50($s1)
    MEM_H(0X50, ctx->r17) = 0;
    // 0x8023089C: sh          $zero, 0x4E($s1)
    MEM_H(0X4E, ctx->r17) = 0;
    // 0x802308A0: sh          $zero, 0x4C($s1)
    MEM_H(0X4C, ctx->r17) = 0;
    // 0x802308A4: sw          $zero, 0x78($s1)
    MEM_W(0X78, ctx->r17) = 0;
    // 0x802308A8: sb          $zero, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = 0;
    // 0x802308AC: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x802308B0: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
    // 0x802308B4: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
    // 0x802308B8: sb          $zero, 0xB($s1)
    MEM_B(0XB, ctx->r17) = 0;
    // 0x802308BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802308C0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x802308C4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802308C8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802308CC: jr          $ra
    // 0x802308D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802308D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022FE6C_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FE6C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022FE70: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022FE74: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022FE78: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022FE7C: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8022FE80: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022FE84: beq         $v1, $v0, L_8022FF0C
    if (ctx->r3 == ctx->r2) {
        // 0x8022FE88: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8022FF0C;
    }
    // 0x8022FE88: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022FE8C: beql        $v0, $zero, L_8022FEA4
    if (ctx->r2 == 0) {
        // 0x8022FE90: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022FEA4;
    }
    goto skip_0;
    // 0x8022FE90: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022FE94: beq         $v1, $zero, L_8022FEB4
    if (ctx->r3 == 0) {
        // 0x8022FE98: nop
    
            goto L_8022FEB4;
    }
    // 0x8022FE98: nop

    // 0x8022FE9C: j           L_8022FF40
    // 0x8022FEA0: nop

        goto L_8022FF40;
    // 0x8022FEA0: nop

L_8022FEA4:
    // 0x8022FEA4: beq         $v1, $v0, L_8022FF24
    if (ctx->r3 == ctx->r2) {
        // 0x8022FEA8: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_8022FF24;
    }
    // 0x8022FEA8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022FEAC: j           L_8022FF40
    // 0x8022FEB0: nop

        goto L_8022FF40;
    // 0x8022FEB0: nop

L_8022FEB4:
    // 0x8022FEB4: lbu         $v0, 0x9($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X9);
    // 0x8022FEB8: bne         $v0, $zero, L_8022FEE8
    if (ctx->r2 != 0) {
        // 0x8022FEBC: nop
    
            goto L_8022FEE8;
    }
    // 0x8022FEBC: nop

    // 0x8022FEC0: lw          $v0, 0x10($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X10);
    // 0x8022FEC4: slti        $v0, $v0, 0x3C
    ctx->r2 = SIGNED(ctx->r2) < 0X3C ? 1 : 0;
    // 0x8022FEC8: bne         $v0, $zero, L_8022FEE8
    if (ctx->r2 != 0) {
        // 0x8022FECC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022FEE8;
    }
    // 0x8022FECC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022FED0: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x8022FED4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022FED8: jal         0x8004DA90
    // 0x8022FEDC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x8022FEDC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x8022FEE0: j           L_8022FF40
    // 0x8022FEE4: nop

        goto L_8022FF40;
    // 0x8022FEE4: nop

L_8022FEE8:
    // 0x8022FEE8: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x8022FEEC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022FEF0: bne         $v1, $v0, L_8022FF40
    if (ctx->r3 != ctx->r2) {
        // 0x8022FEF4: nop
    
            goto L_8022FF40;
    }
    // 0x8022FEF4: nop

    // 0x8022FEF8: lw          $v0, 0x10($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X10);
    // 0x8022FEFC: beq         $v0, $v1, L_8022FF14
    if (ctx->r2 == ctx->r3) {
        // 0x8022FF00: nop
    
            goto L_8022FF14;
    }
    // 0x8022FF00: nop

    // 0x8022FF04: j           L_8022FF40
    // 0x8022FF08: nop

        goto L_8022FF40;
    // 0x8022FF08: nop

L_8022FF0C:
    // 0x8022FF0C: jal         0x8004F488
    // 0x8022FF10: lw          $a0, 0x0($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X0);
    func_8004F488_2A888(rdram, ctx);
        goto after_1;
    // 0x8022FF10: lw          $a0, 0x0($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X0);
    after_1:
L_8022FF14:
    // 0x8022FF14: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022FF18: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022FF1C: j           L_8022FF40
    // 0x8022FF20: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022FF40;
    // 0x8022FF20: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022FF24:
    // 0x8022FF24: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x8022FF28: bne         $v1, $v0, L_8022FF40
    if (ctx->r3 != ctx->r2) {
        // 0x8022FF2C: nop
    
            goto L_8022FF40;
    }
    // 0x8022FF2C: nop

    // 0x8022FF30: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022FF34: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022FF38: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022FF3C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022FF40:
    // 0x8022FF40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022FF44: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022FF48: jr          $ra
    // 0x8022FF4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022FF4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802312C4_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802312C4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802312C8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802312CC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802312D0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802312D4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x802312D8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802312DC: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x802312E0: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x802312E4: bne         $v0, $zero, L_8023134C
    if (ctx->r2 != 0) {
        // 0x802312E8: addiu       $s2, $zero, -0x1
        ctx->r18 = ADD32(0, -0X1);
            goto L_8023134C;
    }
    // 0x802312E8: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    // 0x802312EC: sw          $zero, 0x144($s0)
    MEM_W(0X144, ctx->r16) = 0;
    // 0x802312F0: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x802312F4: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x802312F8: bne         $v1, $v0, L_80231310
    if (ctx->r3 != ctx->r2) {
        // 0x802312FC: nop
    
            goto L_80231310;
    }
    // 0x802312FC: nop

    // 0x80231300: lbu         $v0, 0x13C($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X13C);
    // 0x80231304: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80231308: j           L_8023131C
    // 0x8023130C: sb          $v0, 0x13C($s0)
    MEM_B(0X13C, ctx->r16) = ctx->r2;
        goto L_8023131C;
    // 0x8023130C: sb          $v0, 0x13C($s0)
    MEM_B(0X13C, ctx->r16) = ctx->r2;
L_80231310:
    // 0x80231310: lbu         $v0, 0x13D($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X13D);
    // 0x80231314: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80231318: sb          $v0, 0x13D($s0)
    MEM_B(0X13D, ctx->r16) = ctx->r2;
L_8023131C:
    // 0x8023131C: lhu         $v0, 0x16($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X16);
    // 0x80231320: lhu         $v1, 0x14($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X14);
    // 0x80231324: sh          $zero, 0x18($s0)
    MEM_H(0X18, ctx->r16) = 0;
    // 0x80231328: sh          $v0, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r2;
    // 0x8023132C: andi        $v0, $v1, 0x40
    ctx->r2 = ctx->r3 & 0X40;
    // 0x80231330: beq         $v0, $zero, L_80231340
    if (ctx->r2 == 0) {
        // 0x80231334: ori         $v0, $v1, 0x1
        ctx->r2 = ctx->r3 | 0X1;
            goto L_80231340;
    }
    // 0x80231334: ori         $v0, $v1, 0x1
    ctx->r2 = ctx->r3 | 0X1;
    // 0x80231338: j           L_80231498
    // 0x8023133C: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
        goto L_80231498;
    // 0x8023133C: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
L_80231340:
    // 0x80231340: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80231344: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80231348: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_8023134C:
    // 0x8023134C: lh          $v1, 0x18($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X18);
    // 0x80231350: slti        $v0, $v1, 0xC0
    ctx->r2 = SIGNED(ctx->r3) < 0XC0 ? 1 : 0;
    // 0x80231354: beq         $v0, $zero, L_802313E0
    if (ctx->r2 == 0) {
        // 0x80231358: addiu       $v0, $zero, 0x3C
        ctx->r2 = ADD32(0, 0X3C);
            goto L_802313E0;
    }
    // 0x80231358: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x8023135C: beq         $v1, $v0, L_802313CC
    if (ctx->r3 == ctx->r2) {
        // 0x80231360: slti        $v0, $v1, 0x3D
        ctx->r2 = SIGNED(ctx->r3) < 0X3D ? 1 : 0;
            goto L_802313CC;
    }
    // 0x80231360: slti        $v0, $v1, 0x3D
    ctx->r2 = SIGNED(ctx->r3) < 0X3D ? 1 : 0;
    // 0x80231364: beq         $v0, $zero, L_80231384
    if (ctx->r2 == 0) {
        // 0x80231368: addiu       $v0, $zero, 0x14
        ctx->r2 = ADD32(0, 0X14);
            goto L_80231384;
    }
    // 0x80231368: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x8023136C: beq         $v1, $v0, L_802313BC
    if (ctx->r3 == ctx->r2) {
        // 0x80231370: addiu       $v0, $zero, 0x28
        ctx->r2 = ADD32(0, 0X28);
            goto L_802313BC;
    }
    // 0x80231370: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x80231374: beql        $v1, $v0, L_802313D0
    if (ctx->r3 == ctx->r2) {
        // 0x80231378: addiu       $s2, $zero, 0x1
        ctx->r18 = ADD32(0, 0X1);
            goto L_802313D0;
    }
    goto skip_0;
    // 0x80231378: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    skip_0:
    // 0x8023137C: j           L_802313D0
    // 0x80231380: nop

        goto L_802313D0;
    // 0x80231380: nop

L_80231384:
    // 0x80231384: addiu       $v0, $zero, 0x88
    ctx->r2 = ADD32(0, 0X88);
    // 0x80231388: beq         $v1, $v0, L_802313C4
    if (ctx->r3 == ctx->r2) {
        // 0x8023138C: slti        $v0, $v1, 0x89
        ctx->r2 = SIGNED(ctx->r3) < 0X89 ? 1 : 0;
            goto L_802313C4;
    }
    // 0x8023138C: slti        $v0, $v1, 0x89
    ctx->r2 = SIGNED(ctx->r3) < 0X89 ? 1 : 0;
    // 0x80231390: beq         $v0, $zero, L_802313A8
    if (ctx->r2 == 0) {
        // 0x80231394: addiu       $v0, $zero, 0x74
        ctx->r2 = ADD32(0, 0X74);
            goto L_802313A8;
    }
    // 0x80231394: addiu       $v0, $zero, 0x74
    ctx->r2 = ADD32(0, 0X74);
    // 0x80231398: beql        $v1, $v0, L_802313D0
    if (ctx->r3 == ctx->r2) {
        // 0x8023139C: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_802313D0;
    }
    goto skip_1;
    // 0x8023139C: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    skip_1:
    // 0x802313A0: j           L_802313D0
    // 0x802313A4: nop

        goto L_802313D0;
    // 0x802313A4: nop

L_802313A8:
    // 0x802313A8: addiu       $v0, $zero, 0x9C
    ctx->r2 = ADD32(0, 0X9C);
    // 0x802313AC: beql        $v1, $v0, L_802313D0
    if (ctx->r3 == ctx->r2) {
        // 0x802313B0: addiu       $s2, $zero, 0x2
        ctx->r18 = ADD32(0, 0X2);
            goto L_802313D0;
    }
    goto skip_2;
    // 0x802313B0: addiu       $s2, $zero, 0x2
    ctx->r18 = ADD32(0, 0X2);
    skip_2:
    // 0x802313B4: j           L_802313D0
    // 0x802313B8: nop

        goto L_802313D0;
    // 0x802313B8: nop

L_802313BC:
    // 0x802313BC: j           L_802313D0
    // 0x802313C0: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
        goto L_802313D0;
    // 0x802313C0: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
L_802313C4:
    // 0x802313C4: j           L_802313D0
    // 0x802313C8: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
        goto L_802313D0;
    // 0x802313C8: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
L_802313CC:
    // 0x802313CC: addiu       $s2, $zero, 0x2
    ctx->r18 = ADD32(0, 0X2);
L_802313D0:
    // 0x802313D0: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x802313D4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802313D8: j           L_802313F0
    // 0x802313DC: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
        goto L_802313F0;
    // 0x802313DC: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
L_802313E0:
    // 0x802313E0: sh          $zero, 0x18($s0)
    MEM_H(0X18, ctx->r16) = 0;
    // 0x802313E4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802313E8: jal         0x80232700
    // 0x802313EC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80232700_ovl25(rdram, ctx);
        goto after_0;
    // 0x802313EC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
L_802313F0:
    // 0x802313F0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802313F4: beq         $s2, $v0, L_80231408
    if (ctx->r18 == ctx->r2) {
        // 0x802313F8: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80231408;
    }
    // 0x802313F8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802313FC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80231400: jal         0x80232828
    // 0x80231404: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_80232828_ovl25(rdram, ctx);
        goto after_1;
    // 0x80231404: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_1:
L_80231408:
    // 0x80231408: lh          $v1, 0x18($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X18);
    // 0x8023140C: addiu       $v0, $zero, 0xC0
    ctx->r2 = ADD32(0, 0XC0);
    // 0x80231410: bne         $v1, $v0, L_80231438
    if (ctx->r3 != ctx->r2) {
        // 0x80231414: nop
    
            goto L_80231438;
    }
    // 0x80231414: nop

    // 0x80231418: lbu         $v1, 0x140($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X140);
    // 0x8023141C: andi        $v0, $v1, 0x4
    ctx->r2 = ctx->r3 & 0X4;
    // 0x80231420: bne         $v0, $zero, L_80231438
    if (ctx->r2 != 0) {
        // 0x80231424: nop
    
            goto L_80231438;
    }
    // 0x80231424: nop

    // 0x80231428: lw          $v0, 0x144($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X144);
    // 0x8023142C: beq         $v0, $zero, L_80231438
    if (ctx->r2 == 0) {
        // 0x80231430: ori         $v0, $v1, 0x4
        ctx->r2 = ctx->r3 | 0X4;
            goto L_80231438;
    }
    // 0x80231430: ori         $v0, $v1, 0x4
    ctx->r2 = ctx->r3 | 0X4;
    // 0x80231434: sb          $v0, 0x140($s0)
    MEM_B(0X140, ctx->r16) = ctx->r2;
L_80231438:
    // 0x80231438: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x8023143C: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x80231440: beq         $v0, $zero, L_80231468
    if (ctx->r2 == 0) {
        // 0x80231444: nop
    
            goto L_80231468;
    }
    // 0x80231444: nop

    // 0x80231448: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x8023144C: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80231450: bne         $v0, $zero, L_80231468
    if (ctx->r2 != 0) {
        // 0x80231454: nop
    
            goto L_80231468;
    }
    // 0x80231454: nop

    // 0x80231458: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x8023145C: sh          $zero, 0x18($s0)
    MEM_H(0X18, ctx->r16) = 0;
    // 0x80231460: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80231464: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
L_80231468:
    // 0x80231468: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x8023146C: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80231470: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80231474: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80231478: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023147C: lh          $v1, -0x2400($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X2400);
    // 0x80231480: lhu         $v0, 0x1C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X1C);
    // 0x80231484: sra         $v1, $v1, 6
    ctx->r3 = S32(SIGNED(ctx->r3) >> 6);
    // 0x80231488: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023148C: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x80231490: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80231494: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
L_80231498:
    // 0x80231498: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8023149C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x802314A0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802314A4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802314A8: jr          $ra
    // 0x802314AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802314AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022CBB0_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CBB0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022CBB4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022CBB8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022CBBC: addiu       $a0, $s1, 0x2C
    ctx->r4 = ADD32(ctx->r17, 0X2C);
    // 0x8022CBC0: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x8022CBC4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022CBC8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022CBCC: jal         0x8009A3B4
    // 0x8022CBD0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022CBD0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x8022CBD4: addiu       $a0, $s1, 0x34
    ctx->r4 = ADD32(ctx->r17, 0X34);
    // 0x8022CBD8: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    // 0x8022CBDC: jal         0x8009A3B4
    // 0x8022CBE0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022CBE0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022CBE4: addiu       $a0, $s1, 0x5C
    ctx->r4 = ADD32(ctx->r17, 0X5C);
    // 0x8022CBE8: addiu       $a1, $s1, 0x54
    ctx->r5 = ADD32(ctx->r17, 0X54);
    // 0x8022CBEC: jal         0x8009A3B4
    // 0x8022CBF0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022CBF0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022CBF4: lbu         $v1, 0xAC($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XAC);
    // 0x8022CBF8: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x8022CBFC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022CC00: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x8022CC04: addiu       $a1, $a1, -0x3A50
    ctx->r5 = ADD32(ctx->r5, -0X3A50);
    // 0x8022CC08: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022CC0C: sb          $v1, 0xAD($s1)
    MEM_B(0XAD, ctx->r17) = ctx->r3;
    // 0x8022CC10: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022CC14: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022CC18: lw          $v0, -0x1B20($at)
    ctx->r2 = MEM_W(ctx->r1, -0X1B20);
    // 0x8022CC1C: addiu       $s0, $s1, 0x4E0
    ctx->r16 = ADD32(ctx->r17, 0X4E0);
    // 0x8022CC20: jalr        $v0
    // 0x8022CC24: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x8022CC24: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022CC28: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022CC2C: jal         0x8022D304
    // 0x8022CC30: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8022D304_ovl25(rdram, ctx);
        goto after_4;
    // 0x8022CC30: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8022CC34: lbu         $a1, 0xAC($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0XAC);
    // 0x8022CC38: lbu         $v0, 0xAD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XAD);
    // 0x8022CC3C: beq         $a1, $v0, L_8022CC58
    if (ctx->r5 == ctx->r2) {
        // 0x8022CC40: nop
    
            goto L_8022CC58;
    }
    // 0x8022CC40: nop

    // 0x8022CC44: lh          $a2, 0x4E2($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X4E2);
    // 0x8022CC48: jal         0x80050294
    // 0x8022CC4C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_5;
    // 0x8022CC4C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_5:
    // 0x8022CC50: j           L_8022CC60
    // 0x8022CC54: nop

        goto L_8022CC60;
    // 0x8022CC54: nop

L_8022CC58:
    // 0x8022CC58: jal         0x8005044C
    // 0x8022CC5C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_6;
    // 0x8022CC5C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_6:
L_8022CC60:
    // 0x8022CC60: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022CC64: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022CC68: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022CC6C: jr          $ra
    // 0x8022CC70: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022CC70: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802251BC_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802251BC: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x802251C0: lb          $v1, -0x3BC7($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC7);
    // 0x802251C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802251C8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802251CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802251D0: bne         $v1, $v0, L_802251EC
    if (ctx->r3 != ctx->r2) {
        // 0x802251D4: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_802251EC;
    }
    // 0x802251D4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802251D8: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x802251DC: lw          $a0, 0x984($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X984);
    // 0x802251E0: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x802251E4: j           L_802251F4
    // 0x802251E8: addiu       $a1, $a1, -0x2568
    ctx->r5 = ADD32(ctx->r5, -0X2568);
        goto L_802251F4;
    // 0x802251E8: addiu       $a1, $a1, -0x2568
    ctx->r5 = ADD32(ctx->r5, -0X2568);
L_802251EC:
    // 0x802251EC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802251F0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_802251F4:
    // 0x802251F4: jal         0x80037D80
    // 0x802251F8: nop

    func_80037D80_13180(rdram, ctx);
        goto after_0;
    // 0x802251F8: nop

    after_0:
    // 0x802251FC: lui         $s0, 0x801C
    ctx->r16 = S32(0X801C << 16);
    // 0x80225200: addiu       $s0, $s0, -0x3BC7
    ctx->r16 = ADD32(ctx->r16, -0X3BC7);
    // 0x80225204: lb          $t1, 0x0($s0)
    ctx->r9 = MEM_B(ctx->r16, 0X0);
    // 0x80225208: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022520C: lb          $a1, 0x47CD($a1)
    ctx->r5 = MEM_B(ctx->r5, 0X47CD);
    // 0x80225210: lui         $a3, 0x8021
    ctx->r7 = S32(0X8021 << 16);
    // 0x80225214: addiu       $a3, $a3, 0xCB4
    ctx->r7 = ADD32(ctx->r7, 0XCB4);
    // 0x80225218: sll         $v0, $t1, 3
    ctx->r2 = S32(ctx->r9 << 3);
    // 0x8022521C: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x80225220: lbu         $a2, 0x2($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X2);
    // 0x80225224: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225228: sh          $a2, 0x49AE($at)
    MEM_H(0X49AE, ctx->r1) = ctx->r6;
    // 0x8022522C: lbu         $t0, 0x3($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X3);
    // 0x80225230: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x80225234: sh          $t0, -0x7386($at)
    MEM_H(-0X7386, ctx->r1) = ctx->r8;
    // 0x80225238: lbu         $t2, 0x0($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X0);
    // 0x8022523C: lui         $t3, 0x7FE9
    ctx->r11 = S32(0X7FE9 << 16);
    // 0x80225240: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80225244: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225248: sb          $t2, 0x6B40($at)
    MEM_B(0X6B40, ctx->r1) = ctx->r10;
    // 0x8022524C: lbu         $t4, 0x1($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X1);
    // 0x80225250: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x80225254: ori         $t3, $t3, 0xC000
    ctx->r11 = ctx->r11 | 0XC000;
    // 0x80225258: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8022525C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225260: sb          $v1, 0x4DFE($at)
    MEM_B(0X4DFE, ctx->r1) = ctx->r3;
    // 0x80225264: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80225268: addu        $a0, $a0, $t1
    ctx->r4 = ADD32(ctx->r4, ctx->r9);
    // 0x8022526C: lw          $a0, -0x2660($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2660);
    // 0x80225270: addiu       $a3, $a3, -0x4
    ctx->r7 = ADD32(ctx->r7, -0X4);
    // 0x80225274: addu        $a2, $a2, $t2
    ctx->r6 = ADD32(ctx->r6, ctx->r10);
    // 0x80225278: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8022527C: sb          $a2, -0x35BC($at)
    MEM_B(-0X35BC, ctx->r1) = ctx->r6;
    // 0x80225280: addu        $v0, $v0, $t3
    ctx->r2 = ADD32(ctx->r2, ctx->r11);
    // 0x80225284: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
    // 0x80225288: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022528C: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x80225290: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80225294: sw          $v0, -0x35C0($at)
    MEM_W(-0X35C0, ctx->r1) = ctx->r2;
    // 0x80225298: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8022529C: addiu       $v0, $v0, 0x5080
    ctx->r2 = ADD32(ctx->r2, 0X5080);
    // 0x802252A0: addu        $t0, $t0, $t4
    ctx->r8 = ADD32(ctx->r8, ctx->r12);
    // 0x802252A4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x802252A8: sw          $v0, 0xB5C($at)
    MEM_W(0XB5C, ctx->r1) = ctx->r2;
    // 0x802252AC: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x802252B0: sb          $t4, -0x39A6($at)
    MEM_B(-0X39A6, ctx->r1) = ctx->r12;
    // 0x802252B4: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x802252B8: sb          $t0, 0x53D4($at)
    MEM_B(0X53D4, ctx->r1) = ctx->r8;
    // 0x802252BC: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802252C0: addu        $v0, $v0, $t1
    ctx->r2 = ADD32(ctx->r2, ctx->r9);
    // 0x802252C4: lw          $v0, -0x2638($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2638);
    // 0x802252C8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802252CC: jal         0x8004C790
    // 0x802252D0: sw          $v0, 0x6B44($at)
    MEM_W(0X6B44, ctx->r1) = ctx->r2;
    func_8004C790_27B90(rdram, ctx);
        goto after_1;
    // 0x802252D0: sw          $v0, 0x6B44($at)
    MEM_W(0X6B44, ctx->r1) = ctx->r2;
    after_1:
    // 0x802252D4: lb          $v0, 0x0($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X0);
    // 0x802252D8: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x802252DC: addiu       $a0, $a0, -0x25F8
    ctx->r4 = ADD32(ctx->r4, -0X25F8);
    // 0x802252E0: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x802252E4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802252E8: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x802252EC: lw          $v1, -0x2578($at)
    ctx->r3 = MEM_W(ctx->r1, -0X2578);
    // 0x802252F0: sll         $a1, $v0, 1
    ctx->r5 = S32(ctx->r2 << 1);
    // 0x802252F4: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x802252F8: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x802252FC: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80225300: addiu       $v0, $v0, -0x2628
    ctx->r2 = ADD32(ctx->r2, -0X2628);
    // 0x80225304: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x80225308: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x8022530C: jal         0x80054FB8
    // 0x80225310: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    func_80054FB8_303B8(rdram, ctx);
        goto after_2;
    // 0x80225310: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    after_2:
    // 0x80225314: jal         0x8004A614
    // 0x80225318: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_8004A614_25A14(rdram, ctx);
        goto after_3;
    // 0x80225318: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_3:
    // 0x8022531C: jal         0x80225340
    // 0x80225320: nop

    func_80225340_ovl25(rdram, ctx);
        goto after_4;
    // 0x80225320: nop

    after_4:
    // 0x80225324: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225328: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022532C: jr          $ra
    // 0x80225330: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225330: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80225334: nop

    // 0x80225338: nop

    // 0x8022533C: nop

;}
RECOMP_FUNC void func_8023A660_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023A660: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023A664: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023A668: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8023A66C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023A670: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023A674: lw          $v0, 0x10($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X10);
    // 0x8023A678: bne         $v0, $zero, L_8023A6D4
    if (ctx->r2 != 0) {
        // 0x8023A67C: addiu       $a0, $zero, 0xD
        ctx->r4 = ADD32(0, 0XD);
            goto L_8023A6D4;
    }
    // 0x8023A67C: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    // 0x8023A680: jal         0x8023AB14
    // 0x8023A684: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8023AB14_ovl25(rdram, ctx);
        goto after_0;
    // 0x8023A684: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x8023A688: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x8023A68C: addiu       $s0, $zero, 0x3
    ctx->r16 = ADD32(0, 0X3);
    // 0x8023A690: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023A694: sb          $s0, 0x4430($at)
    MEM_B(0X4430, ctx->r1) = ctx->r16;
    // 0x8023A698: jal         0x8023AB14
    // 0x8023A69C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8023AB14_ovl25(rdram, ctx);
        goto after_1;
    // 0x8023A69C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x8023A6A0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8023A6A4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023A6A8: sb          $s0, 0x4468($at)
    MEM_B(0X4468, ctx->r1) = ctx->r16;
    // 0x8023A6AC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023A6B0: sb          $v0, 0x4497($at)
    MEM_B(0X4497, ctx->r1) = ctx->r2;
    // 0x8023A6B4: jal         0x8004F488
    // 0x8023A6B8: lw          $a0, 0x24($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X24);
    func_8004F488_2A888(rdram, ctx);
        goto after_2;
    // 0x8023A6B8: lw          $a0, 0x24($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X24);
    after_2:
    // 0x8023A6BC: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8023A6C0: jal         0x8005FA7C
    // 0x8023A6C4: addiu       $a0, $a0, -0xC50
    ctx->r4 = ADD32(ctx->r4, -0XC50);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_3;
    // 0x8023A6C4: addiu       $a0, $a0, -0xC50
    ctx->r4 = ADD32(ctx->r4, -0XC50);
    after_3:
    // 0x8023A6C8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8023A6CC: jal         0x8023A980
    // 0x8023A6D0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8023A980_ovl25(rdram, ctx);
        goto after_4;
    // 0x8023A6D0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_4:
L_8023A6D4:
    // 0x8023A6D4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8023A6D8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023A6DC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023A6E0: jr          $ra
    // 0x8023A6E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023A6E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022DF64_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DF64: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022DF68: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022DF6C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022DF70: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022DF74: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022DF78: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022DF7C: bne         $v0, $zero, L_8022DFB0
    if (ctx->r2 != 0) {
        // 0x8022DF80: addiu       $s1, $s0, 0x4E0
        ctx->r17 = ADD32(ctx->r16, 0X4E0);
            goto L_8022DFB0;
    }
    // 0x8022DF80: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    // 0x8022DF84: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8022DF88: jal         0x80050294
    // 0x8022DF8C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x8022DF8C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8022DF90: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022DF94: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022DF98: jal         0x8022E378
    // 0x8022DF9C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8022E378_ovl25(rdram, ctx);
        goto after_1;
    // 0x8022DF9C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_1:
    // 0x8022DFA0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022DFA4: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x8022DFA8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022DFAC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022DFB0:
    // 0x8022DFB0: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022DFB4: lw          $v1, -0x3A40($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A40);
    // 0x8022DFB8: addiu       $v0, $zero, 0x19
    ctx->r2 = ADD32(0, 0X19);
    // 0x8022DFBC: beq         $v1, $v0, L_8022DFD4
    if (ctx->r3 == ctx->r2) {
        // 0x8022DFC0: addiu       $v0, $zero, 0x55
        ctx->r2 = ADD32(0, 0X55);
            goto L_8022DFD4;
    }
    // 0x8022DFC0: addiu       $v0, $zero, 0x55
    ctx->r2 = ADD32(0, 0X55);
    // 0x8022DFC4: beq         $v1, $v0, L_8022DFE4
    if (ctx->r3 == ctx->r2) {
        // 0x8022DFC8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022DFE4;
    }
    // 0x8022DFC8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022DFCC: j           L_8022DFF4
    // 0x8022DFD0: nop

        goto L_8022DFF4;
    // 0x8022DFD0: nop

L_8022DFD4:
    // 0x8022DFD4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022DFD8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022DFDC: j           L_8022DFEC
    // 0x8022DFE0: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
        goto L_8022DFEC;
    // 0x8022DFE0: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
L_8022DFE4:
    // 0x8022DFE4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022DFE8: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
L_8022DFEC:
    // 0x8022DFEC: jal         0x8022E378
    // 0x8022DFF0: nop

    func_8022E378_ovl25(rdram, ctx);
        goto after_2;
    // 0x8022DFF0: nop

    after_2:
L_8022DFF4:
    // 0x8022DFF4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022DFF8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022DFFC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022E000: jr          $ra
    // 0x8022E004: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022E004: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022B64C_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B64C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022B650: sll         $a2, $a2, 2
    ctx->r6 = S32(ctx->r6 << 2);
    // 0x8022B654: sb          $zero, 0xE($a1)
    MEM_B(0XE, ctx->r5) = 0;
    // 0x8022B658: sb          $zero, 0xC($a1)
    MEM_B(0XC, ctx->r5) = 0;
    // 0x8022B65C: sb          $v0, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r2;
    // 0x8022B660: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022B664: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x8022B668: lw          $v0, -0x1D8C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1D8C);
    // 0x8022B66C: jr          $ra
    // 0x8022B670: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x8022B670: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
;}
RECOMP_FUNC void func_80229500_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229500: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229504: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229508: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022950C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80229510: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80229514: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80229518: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022951C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80229520: lw          $v0, -0x2300($at)
    ctx->r2 = MEM_W(ctx->r1, -0X2300);
    // 0x80229524: jalr        $v0
    // 0x80229528: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80229528: nop

    after_0:
    // 0x8022952C: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x80229530: beq         $v0, $zero, L_80229540
    if (ctx->r2 == 0) {
        // 0x80229534: nop
    
            goto L_80229540;
    }
    // 0x80229534: nop

    // 0x80229538: jal         0x8005044C
    // 0x8022953C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_1;
    // 0x8022953C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_80229540:
    // 0x80229540: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80229544: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229548: jr          $ra
    // 0x8022954C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022954C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802344CC_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802344CC: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x802344D0: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x802344D4: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x802344D8: sw          $ra, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r31;
    // 0x802344DC: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x802344E0: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x802344E4: jal         0x8003F754
    // 0x802344E8: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    func_8003F754_1AB54(rdram, ctx);
        goto after_0;
    // 0x802344E8: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    after_0:
    // 0x802344EC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x802344F0: beq         $a0, $zero, L_80234518
    if (ctx->r4 == 0) {
        // 0x802344F4: lui         $v1, 0x200
        ctx->r3 = S32(0X200 << 16);
            goto L_80234518;
    }
    // 0x802344F4: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x802344F8: lb          $v0, 0xD($s3)
    ctx->r2 = MEM_B(ctx->r19, 0XD);
    // 0x802344FC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80234500: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x80234504: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x80234508: jal         0x800711A8
    // 0x8023450C: lw          $a1, -0x11F4($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X11F4);
    func_800711A8_4C5A8(rdram, ctx);
        goto after_1;
    // 0x8023450C: lw          $a1, -0x11F4($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X11F4);
    after_1:
    // 0x80234510: j           L_80234528
    // 0x80234514: addiu       $a0, $zero, 0xF2
    ctx->r4 = ADD32(0, 0XF2);
        goto L_80234528;
    // 0x80234514: addiu       $a0, $zero, 0xF2
    ctx->r4 = ADD32(0, 0XF2);
L_80234518:
    // 0x80234518: lw          $v0, 0x9C($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X9C);
    // 0x8023451C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80234520: beq         $v0, $zero, L_80234550
    if (ctx->r2 == 0) {
        // 0x80234524: addiu       $a0, $zero, 0xF2
        ctx->r4 = ADD32(0, 0XF2);
            goto L_80234550;
    }
    // 0x80234524: addiu       $a0, $zero, 0xF2
    ctx->r4 = ADD32(0, 0XF2);
L_80234528:
    // 0x80234528: lbu         $v1, 0x8($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X8);
    // 0x8023452C: addiu       $a1, $s3, 0x14
    ctx->r5 = ADD32(ctx->r19, 0X14);
    // 0x80234530: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    // 0x80234534: sb          $v0, 0xB($s3)
    MEM_B(0XB, ctx->r19) = ctx->r2;
    // 0x80234538: sw          $zero, 0xD0($s3)
    MEM_W(0XD0, ctx->r19) = 0;
    // 0x8023453C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80234540: jal         0x8002A33C
    // 0x80234544: sb          $v1, 0x8($s3)
    MEM_B(0X8, ctx->r19) = ctx->r3;
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x80234544: sb          $v1, 0x8($s3)
    MEM_B(0X8, ctx->r19) = ctx->r3;
    after_2:
    // 0x80234548: j           L_8023480C
    // 0x8023454C: nop

        goto L_8023480C;
    // 0x8023454C: nop

L_80234550:
    // 0x80234550: addiu       $a0, $s3, 0x34
    ctx->r4 = ADD32(ctx->r19, 0X34);
    // 0x80234554: addiu       $s1, $s3, 0x1C
    ctx->r17 = ADD32(ctx->r19, 0X1C);
    // 0x80234558: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023455C: jal         0x8009A3B4
    // 0x80234560: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80234560: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_3:
    // 0x80234564: addiu       $a0, $s3, 0x2C
    ctx->r4 = ADD32(ctx->r19, 0X2C);
    // 0x80234568: addiu       $s2, $s3, 0x14
    ctx->r18 = ADD32(ctx->r19, 0X14);
    // 0x8023456C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80234570: jal         0x8009A3B4
    // 0x80234574: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x80234574: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x80234578: lb          $v0, 0xC($s3)
    ctx->r2 = MEM_B(ctx->r19, 0XC);
    // 0x8023457C: bltz        $v0, L_80234614
    if (SIGNED(ctx->r2) < 0) {
        // 0x80234580: addu        $a1, $s2, $zero
        ctx->r5 = ADD32(ctx->r18, 0);
            goto L_80234614;
    }
    // 0x80234580: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80234584: addiu       $s1, $s3, 0xD8
    ctx->r17 = ADD32(ctx->r19, 0XD8);
    // 0x80234588: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023458C: lhu         $v0, 0x14($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X14);
    // 0x80234590: lhu         $v1, 0x16($s3)
    ctx->r3 = MEM_HU(ctx->r19, 0X16);
    // 0x80234594: lhu         $a3, 0x18($s3)
    ctx->r7 = MEM_HU(ctx->r19, 0X18);
    // 0x80234598: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8023459C: sh          $v0, 0x90($s3)
    MEM_H(0X90, ctx->r19) = ctx->r2;
    // 0x802345A0: sh          $v1, 0x92($s3)
    MEM_H(0X92, ctx->r19) = ctx->r3;
    // 0x802345A4: jal         0x8009A3B4
    // 0x802345A8: sh          $a3, 0x94($s3)
    MEM_H(0X94, ctx->r19) = ctx->r7;
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x802345A8: sh          $a3, 0x94($s3)
    MEM_H(0X94, ctx->r19) = ctx->r7;
    after_5:
    // 0x802345AC: addiu       $s0, $s3, 0xE0
    ctx->r16 = ADD32(ctx->r19, 0XE0);
    // 0x802345B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802345B4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802345B8: jal         0x8009A3B4
    // 0x802345BC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x802345BC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_6:
    // 0x802345C0: addiu       $s1, $s3, 0xE8
    ctx->r17 = ADD32(ctx->r19, 0XE8);
    // 0x802345C4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802345C8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x802345CC: jal         0x8009A3B4
    // 0x802345D0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x802345D0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_7:
    // 0x802345D4: addiu       $s2, $s3, 0xF0
    ctx->r18 = ADD32(ctx->r19, 0XF0);
    // 0x802345D8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x802345DC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802345E0: jal         0x8009A3B4
    // 0x802345E4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x802345E4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_8:
    // 0x802345E8: addiu       $s0, $s3, 0xF8
    ctx->r16 = ADD32(ctx->r19, 0XF8);
    // 0x802345EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802345F0: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x802345F4: jal         0x8009A3B4
    // 0x802345F8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_9;
    // 0x802345F8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_9:
    // 0x802345FC: addiu       $a0, $s3, 0x100
    ctx->r4 = ADD32(ctx->r19, 0X100);
    // 0x80234600: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80234604: jal         0x8009A3B4
    // 0x80234608: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_10;
    // 0x80234608: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_10:
    // 0x8023460C: j           L_8023480C
    // 0x80234610: nop

        goto L_8023480C;
    // 0x80234610: nop

L_80234614:
    // 0x80234614: lbu         $v0, 0xB($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0XB);
    // 0x80234618: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023461C: sb          $v0, 0xB($s3)
    MEM_B(0XB, ctx->r19) = ctx->r2;
    // 0x80234620: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80234624: bne         $v0, $zero, L_8023463C
    if (ctx->r2 != 0) {
        // 0x80234628: addiu       $s0, $sp, 0x30
        ctx->r16 = ADD32(ctx->r29, 0X30);
            goto L_8023463C;
    }
    // 0x80234628: addiu       $s0, $sp, 0x30
    ctx->r16 = ADD32(ctx->r29, 0X30);
    // 0x8023462C: jal         0x8004F4F8
    // 0x80234630: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_11;
    // 0x80234630: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_11:
    // 0x80234634: j           L_802347AC
    // 0x80234638: nop

        goto L_802347AC;
    // 0x80234638: nop

L_8023463C:
    // 0x8023463C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80234640: jal         0x802348D4
    // 0x80234644: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_802348D4_ovl25(rdram, ctx);
        goto after_12;
    // 0x80234644: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_12:
    // 0x80234648: lui         $v0, 0xFFE
    ctx->r2 = S32(0XFFE << 16);
    // 0x8023464C: ori         $v0, $v0, 0xC430
    ctx->r2 = ctx->r2 | 0XC430;
    // 0x80234650: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x80234654: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80234658: addiu       $s0, $s3, 0xA4
    ctx->r16 = ADD32(ctx->r19, 0XA4);
    // 0x8023465C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x80234660: addiu       $a3, $zero, 0x1F9
    ctx->r7 = ADD32(0, 0X1F9);
    // 0x80234664: jal         0x80051B48
    // 0x80234668: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_80051B48_2CF48(rdram, ctx);
        goto after_13;
    // 0x80234668: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_13:
    // 0x8023466C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80234670: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x80234674: jal         0x8009A3B4
    // 0x80234678: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_14;
    // 0x80234678: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_14:
    // 0x8023467C: lh          $v1, 0x28($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X28);
    // 0x80234680: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80234684: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80234688: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8023468C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80234690: sra         $v0, $v0, 2
    ctx->r2 = S32(SIGNED(ctx->r2) >> 2);
    // 0x80234694: sh          $v0, 0x44($s3)
    MEM_H(0X44, ctx->r19) = ctx->r2;
    // 0x80234698: lh          $v1, 0x2A($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X2A);
    // 0x8023469C: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x802346A0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802346A4: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x802346A8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802346AC: sra         $v0, $v0, 2
    ctx->r2 = S32(SIGNED(ctx->r2) >> 2);
    // 0x802346B0: sh          $v0, 0x46($s3)
    MEM_H(0X46, ctx->r19) = ctx->r2;
    // 0x802346B4: lh          $v0, 0x44($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X44);
    // 0x802346B8: lw          $v1, 0x1C($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X1C);
    // 0x802346BC: lh          $a2, 0x2C($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X2C);
    // 0x802346C0: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x802346C4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802346C8: sll         $v0, $a2, 1
    ctx->r2 = S32(ctx->r6 << 1);
    // 0x802346CC: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x802346D0: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x802346D4: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x802346D8: sra         $v0, $v0, 2
    ctx->r2 = S32(SIGNED(ctx->r2) >> 2);
    // 0x802346DC: sh          $v0, 0x48($s3)
    MEM_H(0X48, ctx->r19) = ctx->r2;
    // 0x802346E0: lh          $a3, 0x48($s3)
    ctx->r7 = MEM_H(ctx->r19, 0X48);
    // 0x802346E4: lh          $v0, 0x46($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X46);
    // 0x802346E8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802346EC: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x802346F0: sw          $v1, 0x1C($s3)
    MEM_W(0X1C, ctx->r19) = ctx->r3;
    // 0x802346F4: lw          $v1, 0x20($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X20);
    // 0x802346F8: lw          $a2, 0x24($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X24);
    // 0x802346FC: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80234700: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80234704: sll         $a3, $a3, 8
    ctx->r7 = S32(ctx->r7 << 8);
    // 0x80234708: addu        $a2, $a2, $a3
    ctx->r6 = ADD32(ctx->r6, ctx->r7);
    // 0x8023470C: sw          $v1, 0x20($s3)
    MEM_W(0X20, ctx->r19) = ctx->r3;
    // 0x80234710: jal         0x8004DD04
    // 0x80234714: sw          $a2, 0x24($s3)
    MEM_W(0X24, ctx->r19) = ctx->r6;
    func_8004DD04_29104(rdram, ctx);
        goto after_15;
    // 0x80234714: sw          $a2, 0x24($s3)
    MEM_W(0X24, ctx->r19) = ctx->r6;
    after_15:
    // 0x80234718: jal         0x802349A0
    // 0x8023471C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_802349A0_ovl25(rdram, ctx);
        goto after_16;
    // 0x8023471C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_16:
    // 0x80234720: addiu       $a0, $s3, 0x100
    ctx->r4 = ADD32(ctx->r19, 0X100);
    // 0x80234724: addiu       $s0, $s3, 0xF8
    ctx->r16 = ADD32(ctx->r19, 0XF8);
    // 0x80234728: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8023472C: jal         0x8009A3B4
    // 0x80234730: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_17;
    // 0x80234730: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_17:
    // 0x80234734: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80234738: addiu       $s0, $s3, 0xF0
    ctx->r16 = ADD32(ctx->r19, 0XF0);
    // 0x8023473C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80234740: jal         0x8009A3B4
    // 0x80234744: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_18;
    // 0x80234744: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_18:
    // 0x80234748: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023474C: addiu       $s0, $s3, 0xE8
    ctx->r16 = ADD32(ctx->r19, 0XE8);
    // 0x80234750: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80234754: jal         0x8009A3B4
    // 0x80234758: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_19;
    // 0x80234758: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_19:
    // 0x8023475C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80234760: addiu       $s0, $s3, 0xE0
    ctx->r16 = ADD32(ctx->r19, 0XE0);
    // 0x80234764: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80234768: jal         0x8009A3B4
    // 0x8023476C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_20;
    // 0x8023476C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_20:
    // 0x80234770: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80234774: addiu       $s0, $s3, 0xD8
    ctx->r16 = ADD32(ctx->r19, 0XD8);
    // 0x80234778: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8023477C: jal         0x8009A3B4
    // 0x80234780: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_21;
    // 0x80234780: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_21:
    // 0x80234784: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80234788: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8023478C: jal         0x8009A3B4
    // 0x80234790: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_22;
    // 0x80234790: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_22:
    // 0x80234794: lhu         $v0, 0x14($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X14);
    // 0x80234798: lhu         $v1, 0x16($s3)
    ctx->r3 = MEM_HU(ctx->r19, 0X16);
    // 0x8023479C: lhu         $a0, 0x18($s3)
    ctx->r4 = MEM_HU(ctx->r19, 0X18);
    // 0x802347A0: sh          $v0, 0x90($s3)
    MEM_H(0X90, ctx->r19) = ctx->r2;
    // 0x802347A4: sh          $v1, 0x92($s3)
    MEM_H(0X92, ctx->r19) = ctx->r3;
    // 0x802347A8: sh          $a0, 0x94($s3)
    MEM_H(0X94, ctx->r19) = ctx->r4;
L_802347AC:
    // 0x802347AC: lbu         $v0, 0x0($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X0);
    // 0x802347B0: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x802347B4: beq         $v0, $zero, L_80234808
    if (ctx->r2 == 0) {
        // 0x802347B8: addiu       $v0, $s3, 0x9C
        ctx->r2 = ADD32(ctx->r19, 0X9C);
            goto L_80234808;
    }
    // 0x802347B8: addiu       $v0, $s3, 0x9C
    ctx->r2 = ADD32(ctx->r19, 0X9C);
    // 0x802347BC: lbu         $v1, 0x1($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X1);
    // 0x802347C0: addiu       $a0, $s3, 0x14
    ctx->r4 = ADD32(ctx->r19, 0X14);
    // 0x802347C4: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x802347C8: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x802347CC: lb          $v0, 0xD($s3)
    ctx->r2 = MEM_B(ctx->r19, 0XD);
    // 0x802347D0: addiu       $a1, $zero, 0xC0
    ctx->r5 = ADD32(0, 0XC0);
    // 0x802347D4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802347D8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802347DC: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x802347E0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802347E4: lw          $v1, -0x1200($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X1200);
    // 0x802347E8: ori         $a3, $zero, 0xA000
    ctx->r7 = 0 | 0XA000;
    // 0x802347EC: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x802347F0: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x802347F4: lui         $v0, 0x4900
    ctx->r2 = S32(0X4900 << 16);
    // 0x802347F8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802347FC: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80234800: jal         0x80051E18
    // 0x80234804: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_23;
    // 0x80234804: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_23:
L_80234808:
    // 0x80234808: sw          $zero, 0x9C($s3)
    MEM_W(0X9C, ctx->r19) = 0;
L_8023480C:
    // 0x8023480C: lw          $ra, 0x48($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X48);
    // 0x80234810: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x80234814: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x80234818: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x8023481C: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x80234820: jr          $ra
    // 0x80234824: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x80234824: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_8022935C_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022935C: lh          $v1, 0xE($a1)
    ctx->r3 = MEM_H(ctx->r5, 0XE);
    // 0x80229360: slti        $v0, $v1, 0x8A
    ctx->r2 = SIGNED(ctx->r3) < 0X8A ? 1 : 0;
    // 0x80229364: beq         $v0, $zero, L_802294C8
    if (ctx->r2 == 0) {
        // 0x80229368: addiu       $v0, $zero, 0x59
        ctx->r2 = ADD32(0, 0X59);
            goto L_802294C8;
    }
    // 0x80229368: addiu       $v0, $zero, 0x59
    ctx->r2 = ADD32(0, 0X59);
    // 0x8022936C: beq         $v1, $v0, L_80229490
    if (ctx->r3 == ctx->r2) {
        // 0x80229370: slti        $v0, $v1, 0x5A
        ctx->r2 = SIGNED(ctx->r3) < 0X5A ? 1 : 0;
            goto L_80229490;
    }
    // 0x80229370: slti        $v0, $v1, 0x5A
    ctx->r2 = SIGNED(ctx->r3) < 0X5A ? 1 : 0;
    // 0x80229374: beq         $v0, $zero, L_802293DC
    if (ctx->r2 == 0) {
        // 0x80229378: addiu       $v0, $zero, 0x31
        ctx->r2 = ADD32(0, 0X31);
            goto L_802293DC;
    }
    // 0x80229378: addiu       $v0, $zero, 0x31
    ctx->r2 = ADD32(0, 0X31);
    // 0x8022937C: beql        $v1, $v0, L_80229464
    if (ctx->r3 == ctx->r2) {
        // 0x80229380: addiu       $v1, $zero, -0x4
        ctx->r3 = ADD32(0, -0X4);
            goto L_80229464;
    }
    goto skip_0;
    // 0x80229380: addiu       $v1, $zero, -0x4
    ctx->r3 = ADD32(0, -0X4);
    skip_0:
    // 0x80229384: slti        $v0, $v1, 0x32
    ctx->r2 = SIGNED(ctx->r3) < 0X32 ? 1 : 0;
    // 0x80229388: beq         $v0, $zero, L_802293C0
    if (ctx->r2 == 0) {
        // 0x8022938C: addiu       $v0, $zero, 0x20
        ctx->r2 = ADD32(0, 0X20);
            goto L_802293C0;
    }
    // 0x8022938C: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80229390: beq         $v1, $v0, L_80229424
    if (ctx->r3 == ctx->r2) {
        // 0x80229394: slti        $v0, $v1, 0x21
        ctx->r2 = SIGNED(ctx->r3) < 0X21 ? 1 : 0;
            goto L_80229424;
    }
    // 0x80229394: slti        $v0, $v1, 0x21
    ctx->r2 = SIGNED(ctx->r3) < 0X21 ? 1 : 0;
    // 0x80229398: beql        $v0, $zero, L_802293B0
    if (ctx->r2 == 0) {
        // 0x8022939C: addiu       $v0, $zero, 0x25
        ctx->r2 = ADD32(0, 0X25);
            goto L_802293B0;
    }
    goto skip_1;
    // 0x8022939C: addiu       $v0, $zero, 0x25
    ctx->r2 = ADD32(0, 0X25);
    skip_1:
    // 0x802293A0: beq         $v1, $zero, L_8022941C
    if (ctx->r3 == 0) {
        // 0x802293A4: addiu       $v0, $zero, -0x3
        ctx->r2 = ADD32(0, -0X3);
            goto L_8022941C;
    }
    // 0x802293A4: addiu       $v0, $zero, -0x3
    ctx->r2 = ADD32(0, -0X3);
    // 0x802293A8: j           L_802294B8
    // 0x802293AC: nop

        goto L_802294B8;
    // 0x802293AC: nop

L_802293B0:
    // 0x802293B0: beq         $v1, $v0, L_8022942C
    if (ctx->r3 == ctx->r2) {
        // 0x802293B4: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_8022942C;
    }
    // 0x802293B4: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x802293B8: j           L_802294B8
    // 0x802293BC: nop

        goto L_802294B8;
    // 0x802293BC: nop

L_802293C0:
    // 0x802293C0: addiu       $v0, $zero, 0x41
    ctx->r2 = ADD32(0, 0X41);
    // 0x802293C4: beq         $v1, $v0, L_80229490
    if (ctx->r3 == ctx->r2) {
        // 0x802293C8: addiu       $v0, $zero, 0x49
        ctx->r2 = ADD32(0, 0X49);
            goto L_80229490;
    }
    // 0x802293C8: addiu       $v0, $zero, 0x49
    ctx->r2 = ADD32(0, 0X49);
    // 0x802293CC: beq         $v1, $v0, L_80229474
    if (ctx->r3 == ctx->r2) {
        // 0x802293D0: addiu       $v1, $zero, -0x4
        ctx->r3 = ADD32(0, -0X4);
            goto L_80229474;
    }
    // 0x802293D0: addiu       $v1, $zero, -0x4
    ctx->r3 = ADD32(0, -0X4);
    // 0x802293D4: j           L_802294B8
    // 0x802293D8: nop

        goto L_802294B8;
    // 0x802293D8: nop

L_802293DC:
    // 0x802293DC: addiu       $v0, $zero, 0x65
    ctx->r2 = ADD32(0, 0X65);
    // 0x802293E0: beq         $v1, $v0, L_80229440
    if (ctx->r3 == ctx->r2) {
        // 0x802293E4: slti        $v0, $v1, 0x66
        ctx->r2 = SIGNED(ctx->r3) < 0X66 ? 1 : 0;
            goto L_80229440;
    }
    // 0x802293E4: slti        $v0, $v1, 0x66
    ctx->r2 = SIGNED(ctx->r3) < 0X66 ? 1 : 0;
    // 0x802293E8: beq         $v0, $zero, L_80229400
    if (ctx->r2 == 0) {
        // 0x802293EC: addiu       $v0, $zero, 0x5A
        ctx->r2 = ADD32(0, 0X5A);
            goto L_80229400;
    }
    // 0x802293EC: addiu       $v0, $zero, 0x5A
    ctx->r2 = ADD32(0, 0X5A);
    // 0x802293F0: beq         $v1, $v0, L_80229498
    if (ctx->r3 == ctx->r2) {
        // 0x802293F4: nop
    
            goto L_80229498;
    }
    // 0x802293F4: nop

    // 0x802293F8: j           L_802294B8
    // 0x802293FC: nop

        goto L_802294B8;
    // 0x802293FC: nop

L_80229400:
    // 0x80229400: addiu       $v0, $zero, 0x6A
    ctx->r2 = ADD32(0, 0X6A);
    // 0x80229404: beq         $v1, $v0, L_80229454
    if (ctx->r3 == ctx->r2) {
        // 0x80229408: addiu       $v0, $zero, 0x7A
        ctx->r2 = ADD32(0, 0X7A);
            goto L_80229454;
    }
    // 0x80229408: addiu       $v0, $zero, 0x7A
    ctx->r2 = ADD32(0, 0X7A);
    // 0x8022940C: beq         $v1, $v0, L_802294A4
    if (ctx->r3 == ctx->r2) {
        // 0x80229410: nop
    
            goto L_802294A4;
    }
    // 0x80229410: nop

    // 0x80229414: j           L_802294B8
    // 0x80229418: nop

        goto L_802294B8;
    // 0x80229418: nop

L_8022941C:
    // 0x8022941C: j           L_80229458
    // 0x80229420: sh          $zero, 0x12($a1)
    MEM_H(0X12, ctx->r5) = 0;
        goto L_80229458;
    // 0x80229420: sh          $zero, 0x12($a1)
    MEM_H(0X12, ctx->r5) = 0;
L_80229424:
    // 0x80229424: j           L_802294B8
    // 0x80229428: sh          $zero, 0x16($a1)
    MEM_H(0X16, ctx->r5) = 0;
        goto L_802294B8;
    // 0x80229428: sh          $zero, 0x16($a1)
    MEM_H(0X16, ctx->r5) = 0;
L_8022942C:
    // 0x8022942C: lhu         $v0, 0x4($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X4);
    // 0x80229430: sh          $v1, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r3;
    // 0x80229434: ori         $v0, $v0, 0x8
    ctx->r2 = ctx->r2 | 0X8;
    // 0x80229438: j           L_802294B8
    // 0x8022943C: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
        goto L_802294B8;
    // 0x8022943C: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
L_80229440:
    // 0x80229440: lhu         $v0, 0x4($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X4);
    // 0x80229444: sh          $zero, 0x16($a1)
    MEM_H(0X16, ctx->r5) = 0;
    // 0x80229448: andi        $v0, $v0, 0xFFF7
    ctx->r2 = ctx->r2 & 0XFFF7;
    // 0x8022944C: j           L_802294B8
    // 0x80229450: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
        goto L_802294B8;
    // 0x80229450: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
L_80229454:
    // 0x80229454: addiu       $v0, $zero, -0x3
    ctx->r2 = ADD32(0, -0X3);
L_80229458:
    // 0x80229458: sh          $zero, 0x14($a1)
    MEM_H(0X14, ctx->r5) = 0;
    // 0x8022945C: j           L_802294B8
    // 0x80229460: sh          $v0, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r2;
        goto L_802294B8;
    // 0x80229460: sh          $v0, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r2;
L_80229464:
    // 0x80229464: lh          $v0, 0x14($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X14);
    // 0x80229468: nor         $v0, $zero, $v0
    ctx->r2 = ~(0 | ctx->r2);
    // 0x8022946C: j           L_80229480
    // 0x80229470: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
        goto L_80229480;
    // 0x80229470: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
L_80229474:
    // 0x80229474: lh          $v0, 0x14($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X14);
    // 0x80229478: slt         $v0, $zero, $v0
    ctx->r2 = SIGNED(0) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8022947C: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
L_80229480:
    // 0x80229480: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80229484: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
    // 0x80229488: j           L_802294B8
    // 0x8022948C: sh          $v0, 0x12($a1)
    MEM_H(0X12, ctx->r5) = ctx->r2;
        goto L_802294B8;
    // 0x8022948C: sh          $v0, 0x12($a1)
    MEM_H(0X12, ctx->r5) = ctx->r2;
L_80229490:
    // 0x80229490: j           L_802294B8
    // 0x80229494: sh          $zero, 0x12($a1)
    MEM_H(0X12, ctx->r5) = 0;
        goto L_802294B8;
    // 0x80229494: sh          $zero, 0x12($a1)
    MEM_H(0X12, ctx->r5) = 0;
L_80229498:
    // 0x80229498: lh          $v0, 0x14($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X14);
    // 0x8022949C: j           L_802294AC
    // 0x802294A0: nor         $v0, $zero, $v0
    ctx->r2 = ~(0 | ctx->r2);
        goto L_802294AC;
    // 0x802294A0: nor         $v0, $zero, $v0
    ctx->r2 = ~(0 | ctx->r2);
L_802294A4:
    // 0x802294A4: lhu         $v0, 0x14($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X14);
    // 0x802294A8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
L_802294AC:
    // 0x802294AC: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x802294B0: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x802294B4: sh          $v0, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r2;
L_802294B8:
    // 0x802294B8: lhu         $v0, 0xE($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0XE);
    // 0x802294BC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802294C0: j           L_802294F0
    // 0x802294C4: sh          $v0, 0xE($a1)
    MEM_H(0XE, ctx->r5) = ctx->r2;
        goto L_802294F0;
    // 0x802294C4: sh          $v0, 0xE($a1)
    MEM_H(0XE, ctx->r5) = ctx->r2;
L_802294C8:
    // 0x802294C8: lhu         $v0, 0x4($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X4);
    // 0x802294CC: sh          $zero, 0x12($a1)
    MEM_H(0X12, ctx->r5) = 0;
    // 0x802294D0: sh          $zero, 0x14($a1)
    MEM_H(0X14, ctx->r5) = 0;
    // 0x802294D4: sh          $zero, 0x16($a1)
    MEM_H(0X16, ctx->r5) = 0;
    // 0x802294D8: sh          $zero, 0xE($a1)
    MEM_H(0XE, ctx->r5) = 0;
    // 0x802294DC: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    // 0x802294E0: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
    // 0x802294E4: lbu         $v0, 0xB($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XB);
    // 0x802294E8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802294EC: sb          $v0, 0xB($a0)
    MEM_B(0XB, ctx->r4) = ctx->r2;
L_802294F0:
    // 0x802294F0: jr          $ra
    // 0x802294F4: nop

    TRACE_RETURN()
    return;
    // 0x802294F4: nop

    // 0x802294F8: nop

    // 0x802294FC: nop

;}
RECOMP_FUNC void func_802300F0_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802300F0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x802300F4: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x802300F8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802300FC: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80230100: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80230104: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80230108: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x8023010C: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x80230110: jal         0x8009A3B4
    // 0x80230114: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80230114: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    after_0:
    // 0x80230118: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8023011C: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80230120: jal         0x8009A3B4
    // 0x80230124: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80230124: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80230128: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8023012C: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80230130: jal         0x8009A3B4
    // 0x80230134: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80230134: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80230138: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8023013C: lui         $s1, 0x801C
    ctx->r17 = S32(0X801C << 16);
    // 0x80230140: addiu       $s1, $s1, -0x3A50
    ctx->r17 = ADD32(ctx->r17, -0X3A50);
    // 0x80230144: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x80230148: beq         $v0, $zero, L_80230334
    if (ctx->r2 == 0) {
        // 0x8023014C: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80230334;
    }
    // 0x8023014C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80230150: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80230154: addu        $at, $at, $v0
    gpr jr_addend_8023015C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80230158: lw          $v0, 0xEF0($at)
    ctx->r2 = ADD32(ctx->r1, 0XEF0);
    // 0x8023015C: jr          $v0
    // 0x80230160: nop

    switch (jr_addend_8023015C >> 2) {
        case 0: goto L_80230164; break;
        case 1: goto L_802301F0; break;
        case 2: goto L_80230334; break;
        case 3: goto L_80230200; break;
        case 4: goto L_80230228; break;
        case 5: goto L_80230298; break;
        default: switch_error(__func__, 0x8023015C, 0x80240EF0);
    }
    // 0x80230160: nop

L_80230164:
    // 0x80230164: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80230168: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023016C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80230170: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80230174: jal         0x8004D5D4
    // 0x80230178: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_3;
    // 0x80230178: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_3:
    // 0x8023017C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230180: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x80230184: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80230188: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8023018C: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80230190: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80230194: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80230198: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8023019C: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x802301A0: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x802301A4: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x802301A8: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x802301AC: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x802301B0: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x802301B4: jal         0x80050294
    // 0x802301B8: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    func_80050294_2B694(rdram, ctx);
        goto after_4;
    // 0x802301B8: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    after_4:
    // 0x802301BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802301C0: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802301C4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802301C8: lui         $a2, 0x8024
    ctx->r6 = S32(0X8024 << 16);
    // 0x802301CC: addiu       $a2, $a2, 0x11F0
    ctx->r6 = ADD32(ctx->r6, 0X11F0);
    // 0x802301D0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802301D4: jal         0x80229ED0
    // 0x802301D8: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    func_80229ED0_ovl25(rdram, ctx);
        goto after_5;
    // 0x802301D8: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    after_5:
    // 0x802301DC: sw          $v0, 0xA0($s1)
    MEM_W(0XA0, ctx->r17) = ctx->r2;
    // 0x802301E0: lbu         $v1, 0x6($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X6);
    // 0x802301E4: ori         $v1, $v1, 0x20
    ctx->r3 = ctx->r3 | 0X20;
    // 0x802301E8: j           L_80230334
    // 0x802301EC: sb          $v1, 0x6($v0)
    MEM_B(0X6, ctx->r2) = ctx->r3;
        goto L_80230334;
    // 0x802301EC: sb          $v1, 0x6($v0)
    MEM_B(0X6, ctx->r2) = ctx->r3;
L_802301F0:
    // 0x802301F0: jal         0x8005044C
    // 0x802301F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_6;
    // 0x802301F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x802301F8: j           L_80230334
    // 0x802301FC: nop

        goto L_80230334;
    // 0x802301FC: nop

L_80230200:
    // 0x80230200: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230204: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x80230208: jal         0x800504EC
    // 0x8023020C: sh          $v0, 0x58($s0)
    MEM_H(0X58, ctx->r16) = ctx->r2;
    func_800504EC_2B8EC(rdram, ctx);
        goto after_7;
    // 0x8023020C: sh          $v0, 0x58($s0)
    MEM_H(0X58, ctx->r16) = ctx->r2;
    after_7:
    // 0x80230210: jal         0x8005129C
    // 0x80230214: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005129C_2C69C(rdram, ctx);
        goto after_8;
    // 0x80230214: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
    // 0x80230218: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8023021C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80230220: j           L_80230334
    // 0x80230224: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_80230334;
    // 0x80230224: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80230228:
    // 0x80230228: lw          $v0, 0x10($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X10);
    // 0x8023022C: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x80230230: beq         $v0, $zero, L_80230244
    if (ctx->r2 == 0) {
        // 0x80230234: nop
    
            goto L_80230244;
    }
    // 0x80230234: nop

    // 0x80230238: lhu         $v0, 0x58($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X58);
    // 0x8023023C: j           L_8023024C
    // 0x80230240: addiu       $v0, $v0, 0xA
    ctx->r2 = ADD32(ctx->r2, 0XA);
        goto L_8023024C;
    // 0x80230240: addiu       $v0, $v0, 0xA
    ctx->r2 = ADD32(ctx->r2, 0XA);
L_80230244:
    // 0x80230244: lhu         $v0, 0x58($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X58);
    // 0x80230248: addiu       $v0, $v0, -0xA
    ctx->r2 = ADD32(ctx->r2, -0XA);
L_8023024C:
    // 0x8023024C: sh          $v0, 0x58($s0)
    MEM_H(0X58, ctx->r16) = ctx->r2;
    // 0x80230250: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
    // 0x80230254: addiu       $v0, $zero, 0x5A
    ctx->r2 = ADD32(0, 0X5A);
    // 0x80230258: bne         $v1, $v0, L_80230324
    if (ctx->r3 != ctx->r2) {
        // 0x8023025C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80230324;
    }
    // 0x8023025C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230260: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80230264: addiu       $v0, $zero, -0x14
    ctx->r2 = ADD32(0, -0X14);
    // 0x80230268: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8023026C: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80230270: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x80230274: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80230278: sh          $v0, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r2;
    // 0x8023027C: addiu       $v0, $zero, -0x140
    ctx->r2 = ADD32(0, -0X140);
    // 0x80230280: sh          $v0, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r2;
    // 0x80230284: addiu       $v0, $zero, -0x4
    ctx->r2 = ADD32(0, -0X4);
    // 0x80230288: sh          $v0, 0x50($s0)
    MEM_H(0X50, ctx->r16) = ctx->r2;
    // 0x8023028C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80230290: j           L_80230324
    // 0x80230294: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
        goto L_80230324;
    // 0x80230294: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
L_80230298:
    // 0x80230298: lhu         $a2, 0x48($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X48);
    // 0x8023029C: lhu         $v1, 0x50($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X50);
    // 0x802302A0: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x802302A4: lhu         $a1, 0x44($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X44);
    // 0x802302A8: lhu         $t0, 0x46($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X46);
    // 0x802302AC: lhu         $a3, 0x4E($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0X4E);
    // 0x802302B0: addu        $a2, $a2, $v1
    ctx->r6 = ADD32(ctx->r6, ctx->r3);
    // 0x802302B4: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x802302B8: addu        $t0, $t0, $a3
    ctx->r8 = ADD32(ctx->r8, ctx->r7);
    // 0x802302BC: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x802302C0: sll         $v0, $t0, 16
    ctx->r2 = S32(ctx->r8 << 16);
    // 0x802302C4: lhu         $v1, 0x16($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X16);
    // 0x802302C8: lhu         $a1, 0x18($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X18);
    // 0x802302CC: sra         $v0, $v0, 20
    ctx->r2 = S32(SIGNED(ctx->r2) >> 20);
    // 0x802302D0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802302D4: lhu         $v0, 0x58($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X58);
    // 0x802302D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802302DC: sh          $a2, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r6;
    // 0x802302E0: sh          $v1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r3;
    // 0x802302E4: lh          $v1, 0x14($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X14);
    // 0x802302E8: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x802302EC: sra         $a2, $a2, 20
    ctx->r6 = S32(SIGNED(ctx->r6) >> 20);
    // 0x802302F0: sh          $t0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r8;
    // 0x802302F4: addiu       $a1, $a1, 0xF
    ctx->r5 = ADD32(ctx->r5, 0XF);
    // 0x802302F8: sh          $a1, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r5;
    // 0x802302FC: lh          $a1, 0x16($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X16);
    // 0x80230300: lh          $a3, 0x18($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X18);
    // 0x80230304: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80230308: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8023030C: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x80230310: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x80230314: sh          $v0, 0x58($s0)
    MEM_H(0X58, ctx->r16) = ctx->r2;
    // 0x80230318: sw          $v1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r3;
    // 0x8023031C: sw          $a1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r5;
    // 0x80230320: sw          $a3, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r7;
L_80230324:
    // 0x80230324: jal         0x800504EC
    // 0x80230328: nop

    func_800504EC_2B8EC(rdram, ctx);
        goto after_9;
    // 0x80230328: nop

    after_9:
    // 0x8023032C: jal         0x8005129C
    // 0x80230330: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005129C_2C69C(rdram, ctx);
        goto after_10;
    // 0x80230330: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_10:
L_80230334:
    // 0x80230334: lui         $s2, 0x8024
    ctx->r18 = S32(0X8024 << 16);
    // 0x80230338: addiu       $s2, $s2, -0x1570
    ctx->r18 = ADD32(ctx->r18, -0X1570);
    // 0x8023033C: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
L_80230340:
    // 0x80230340: addiu       $a0, $s0, 0x54
    ctx->r4 = ADD32(ctx->r16, 0X54);
    // 0x80230344: jal         0x80031600
    // 0x80230348: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_80031600_CA00(rdram, ctx);
        goto after_11;
    // 0x80230348: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_11:
    // 0x8023034C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80230350: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80230354: jal         0x80031270
    // 0x80230358: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    func_80031270_C670(rdram, ctx);
        goto after_12;
    // 0x80230358: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    after_12:
    // 0x8023035C: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x80230360: lhu         $v1, 0x30($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X30);
    // 0x80230364: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80230368: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023036C: addu        $at, $at, $s1
    ctx->r1 = ADD32(ctx->r1, ctx->r17);
    // 0x80230370: sh          $v0, 0x11F0($at)
    MEM_H(0X11F0, ctx->r1) = ctx->r2;
    // 0x80230374: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x80230378: lhu         $v1, 0x32($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X32);
    // 0x8023037C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80230380: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80230384: addu        $at, $at, $s1
    ctx->r1 = ADD32(ctx->r1, ctx->r17);
    // 0x80230388: sh          $v0, 0x11F2($at)
    MEM_H(0X11F2, ctx->r1) = ctx->r2;
    // 0x8023038C: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x80230390: lhu         $v1, 0x34($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X34);
    // 0x80230394: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80230398: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023039C: addu        $at, $at, $s1
    ctx->r1 = ADD32(ctx->r1, ctx->r17);
    // 0x802303A0: sh          $v0, 0x11F4($at)
    MEM_H(0X11F4, ctx->r1) = ctx->r2;
    // 0x802303A4: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x802303A8: slti        $v0, $s1, 0x38
    ctx->r2 = SIGNED(ctx->r17) < 0X38 ? 1 : 0;
    // 0x802303AC: bne         $v0, $zero, L_80230340
    if (ctx->r2 != 0) {
        // 0x802303B0: addiu       $s2, $s2, 0x8
        ctx->r18 = ADD32(ctx->r18, 0X8);
            goto L_80230340;
    }
    // 0x802303B0: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x802303B4: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x802303B8: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x802303BC: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x802303C0: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x802303C4: jr          $ra
    // 0x802303C8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x802303C8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x802303CC: nop

;}
RECOMP_FUNC void func_80226268_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226268: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x8022626C: bne         $v0, $zero, L_8022629C
    if (ctx->r2 != 0) {
        // 0x80226270: addiu       $v1, $zero, -0x7D0
        ctx->r3 = ADD32(0, -0X7D0);
            goto L_8022629C;
    }
    // 0x80226270: addiu       $v1, $zero, -0x7D0
    ctx->r3 = ADD32(0, -0X7D0);
    // 0x80226274: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80226278: sh          $v1, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r3;
    // 0x8022627C: addiu       $v1, $zero, -0x4B0
    ctx->r3 = ADD32(0, -0X4B0);
    // 0x80226280: sh          $zero, 0x14($a0)
    MEM_H(0X14, ctx->r4) = 0;
    // 0x80226284: sh          $v1, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r3;
    // 0x80226288: sh          $zero, 0x54($a0)
    MEM_H(0X54, ctx->r4) = 0;
    // 0x8022628C: sh          $zero, 0x56($a0)
    MEM_H(0X56, ctx->r4) = 0;
    // 0x80226290: sh          $zero, 0x58($a0)
    MEM_H(0X58, ctx->r4) = 0;
    // 0x80226294: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226298: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_8022629C:
    // 0x8022629C: lhu         $v0, 0x18($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X18);
    // 0x802262A0: addiu       $v0, $v0, -0x20
    ctx->r2 = ADD32(ctx->r2, -0X20);
    // 0x802262A4: jr          $ra
    // 0x802262A8: sh          $v0, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x802262A8: sh          $v0, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_80233B3C_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233B3C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80233B40: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80233B44: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80233B48: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80233B4C: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x80233B50: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80233B54: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80233B58: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80233B5C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80233B60: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80233B64: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x80233B68: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x80233B6C: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x80233B70: lbu         $a1, -0x1371($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X1371);
    // 0x80233B74: addiu       $v0, $s0, 0xC8
    ctx->r2 = ADD32(ctx->r16, 0XC8);
    // 0x80233B78: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80233B7C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x80233B80: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x80233B84: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80233B88: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80233B8C: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80233B90: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80233B94: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80233B98: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80233B9C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80233BA0: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80233BA4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80233BA8: lbu         $v1, -0x136F($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X136F);
    // 0x80233BAC: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x80233BB0: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80233BB4: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80233BB8: lui         $v0, 0x40A
    ctx->r2 = S32(0X40A << 16);
    // 0x80233BBC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80233BC0: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80233BC4: jal         0x80051E18
    // 0x80233BC8: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_0;
    // 0x80233BC8: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_0:
    // 0x80233BCC: sw          $zero, 0xC8($s0)
    MEM_W(0XC8, ctx->r16) = 0;
    // 0x80233BD0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80233BD4: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80233BD8: jr          $ra
    // 0x80233BDC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80233BDC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8023B6F8_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B6F8: jr          $ra
    // 0x8023B6FC: nop

    TRACE_RETURN()
    return;
    // 0x8023B6FC: nop

;}
RECOMP_FUNC void func_80230C80_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230C80: addu        $t0, $a0, $zero
    ctx->r8 = ADD32(ctx->r4, 0);
    // 0x80230C84: lbu         $v1, 0xA($t0)
    ctx->r3 = MEM_BU(ctx->r8, 0XA);
    // 0x80230C88: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80230C8C: beq         $v1, $v0, L_80230CDC
    if (ctx->r3 == ctx->r2) {
        // 0x80230C90: addu        $t1, $a1, $zero
        ctx->r9 = ADD32(ctx->r5, 0);
            goto L_80230CDC;
    }
    // 0x80230C90: addu        $t1, $a1, $zero
    ctx->r9 = ADD32(ctx->r5, 0);
    // 0x80230C94: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80230C98: beql        $v0, $zero, L_80230CB0
    if (ctx->r2 == 0) {
        // 0x80230C9C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80230CB0;
    }
    goto skip_0;
    // 0x80230C9C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80230CA0: beql        $v1, $zero, L_80230CC0
    if (ctx->r3 == 0) {
        // 0x80230CA4: sh          $zero, 0x18($t1)
        MEM_H(0X18, ctx->r9) = 0;
            goto L_80230CC0;
    }
    goto skip_1;
    // 0x80230CA4: sh          $zero, 0x18($t1)
    MEM_H(0X18, ctx->r9) = 0;
    skip_1:
    // 0x80230CA8: j           L_80230DF0
    // 0x80230CAC: nop

        goto L_80230DF0;
    // 0x80230CAC: nop

L_80230CB0:
    // 0x80230CB0: beq         $v1, $v0, L_80230D3C
    if (ctx->r3 == ctx->r2) {
        // 0x80230CB4: nop
    
            goto L_80230D3C;
    }
    // 0x80230CB4: nop

    // 0x80230CB8: j           L_80230DF0
    // 0x80230CBC: nop

        goto L_80230DF0;
    // 0x80230CBC: nop

L_80230CC0:
    // 0x80230CC0: lbu         $v0, 0xA($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0XA);
    // 0x80230CC4: sh          $zero, 0x4C($t0)
    MEM_H(0X4C, ctx->r8) = 0;
    // 0x80230CC8: sh          $zero, 0x4E($t0)
    MEM_H(0X4E, ctx->r8) = 0;
    // 0x80230CCC: sh          $zero, 0x50($t0)
    MEM_H(0X50, ctx->r8) = 0;
    // 0x80230CD0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80230CD4: j           L_80230DF0
    // 0x80230CD8: sb          $v0, 0xA($t0)
    MEM_B(0XA, ctx->r8) = ctx->r2;
        goto L_80230DF0;
    // 0x80230CD8: sb          $v0, 0xA($t0)
    MEM_B(0XA, ctx->r8) = ctx->r2;
L_80230CDC:
    // 0x80230CDC: lh          $v1, 0x18($t1)
    ctx->r3 = MEM_H(ctx->r9, 0X18);
    // 0x80230CE0: slti        $v0, $v1, 0xD0
    ctx->r2 = SIGNED(ctx->r3) < 0XD0 ? 1 : 0;
    // 0x80230CE4: beq         $v0, $zero, L_80230D1C
    if (ctx->r2 == 0) {
        // 0x80230CE8: addiu       $v0, $zero, 0x10
        ctx->r2 = ADD32(0, 0X10);
            goto L_80230D1C;
    }
    // 0x80230CE8: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80230CEC: beq         $v1, $v0, L_80230D94
    if (ctx->r3 == ctx->r2) {
        // 0x80230CF0: slti        $v0, $v1, 0x11
        ctx->r2 = SIGNED(ctx->r3) < 0X11 ? 1 : 0;
            goto L_80230D94;
    }
    // 0x80230CF0: slti        $v0, $v1, 0x11
    ctx->r2 = SIGNED(ctx->r3) < 0X11 ? 1 : 0;
    // 0x80230CF4: beql        $v0, $zero, L_80230D0C
    if (ctx->r2 == 0) {
        // 0x80230CF8: addiu       $v0, $zero, 0xC0
        ctx->r2 = ADD32(0, 0XC0);
            goto L_80230D0C;
    }
    goto skip_2;
    // 0x80230CF8: addiu       $v0, $zero, 0xC0
    ctx->r2 = ADD32(0, 0XC0);
    skip_2:
    // 0x80230CFC: beq         $v1, $zero, L_80230DB4
    if (ctx->r3 == 0) {
        // 0x80230D00: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80230DB4;
    }
    // 0x80230D00: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80230D04: j           L_80230DB8
    // 0x80230D08: nop

        goto L_80230DB8;
    // 0x80230D08: nop

L_80230D0C:
    // 0x80230D0C: beq         $v1, $v0, L_80230DB4
    if (ctx->r3 == ctx->r2) {
        // 0x80230D10: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80230DB4;
    }
    // 0x80230D10: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80230D14: j           L_80230DB8
    // 0x80230D18: nop

        goto L_80230DB8;
    // 0x80230D18: nop

L_80230D1C:
    // 0x80230D1C: lhu         $v0, 0x14($t1)
    ctx->r2 = MEM_HU(ctx->r9, 0X14);
    // 0x80230D20: sh          $zero, 0x18($t1)
    MEM_H(0X18, ctx->r9) = 0;
    // 0x80230D24: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
    // 0x80230D28: sh          $v0, 0x14($t1)
    MEM_H(0X14, ctx->r9) = ctx->r2;
    // 0x80230D2C: sh          $zero, 0x4C($t0)
    MEM_H(0X4C, ctx->r8) = 0;
    // 0x80230D30: sh          $zero, 0x4E($t0)
    MEM_H(0X4E, ctx->r8) = 0;
    // 0x80230D34: j           L_80230DF0
    // 0x80230D38: sh          $zero, 0x50($t0)
    MEM_H(0X50, ctx->r8) = 0;
        goto L_80230DF0;
    // 0x80230D38: sh          $zero, 0x50($t0)
    MEM_H(0X50, ctx->r8) = 0;
L_80230D3C:
    // 0x80230D3C: lh          $v1, 0x18($t1)
    ctx->r3 = MEM_H(ctx->r9, 0X18);
    // 0x80230D40: slti        $v0, $v1, 0x1F0
    ctx->r2 = SIGNED(ctx->r3) < 0X1F0 ? 1 : 0;
    // 0x80230D44: beq         $v0, $zero, L_80230DC8
    if (ctx->r2 == 0) {
        // 0x80230D48: addiu       $v0, $zero, 0x100
        ctx->r2 = ADD32(0, 0X100);
            goto L_80230DC8;
    }
    // 0x80230D48: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x80230D4C: beq         $v1, $v0, L_80230D9C
    if (ctx->r3 == ctx->r2) {
        // 0x80230D50: slti        $v0, $v1, 0x101
        ctx->r2 = SIGNED(ctx->r3) < 0X101 ? 1 : 0;
            goto L_80230D9C;
    }
    // 0x80230D50: slti        $v0, $v1, 0x101
    ctx->r2 = SIGNED(ctx->r3) < 0X101 ? 1 : 0;
    // 0x80230D54: beql        $v0, $zero, L_80230D74
    if (ctx->r2 == 0) {
        // 0x80230D58: addiu       $v0, $zero, 0x110
        ctx->r2 = ADD32(0, 0X110);
            goto L_80230D74;
    }
    goto skip_3;
    // 0x80230D58: addiu       $v0, $zero, 0x110
    ctx->r2 = ADD32(0, 0X110);
    skip_3:
    // 0x80230D5C: beq         $v1, $zero, L_80230D8C
    if (ctx->r3 == 0) {
        // 0x80230D60: addiu       $v0, $zero, 0x10
        ctx->r2 = ADD32(0, 0X10);
            goto L_80230D8C;
    }
    // 0x80230D60: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80230D64: beql        $v1, $v0, L_80230DB8
    if (ctx->r3 == ctx->r2) {
        // 0x80230D68: sh          $zero, 0x50($t0)
        MEM_H(0X50, ctx->r8) = 0;
            goto L_80230DB8;
    }
    goto skip_4;
    // 0x80230D68: sh          $zero, 0x50($t0)
    MEM_H(0X50, ctx->r8) = 0;
    skip_4:
    // 0x80230D6C: j           L_80230DB8
    // 0x80230D70: nop

        goto L_80230DB8;
    // 0x80230D70: nop

L_80230D74:
    // 0x80230D74: beq         $v1, $v0, L_80230DA8
    if (ctx->r3 == ctx->r2) {
        // 0x80230D78: addiu       $v0, $zero, 0x1E0
        ctx->r2 = ADD32(0, 0X1E0);
            goto L_80230DA8;
    }
    // 0x80230D78: addiu       $v0, $zero, 0x1E0
    ctx->r2 = ADD32(0, 0X1E0);
    // 0x80230D7C: beq         $v1, $v0, L_80230DB0
    if (ctx->r3 == ctx->r2) {
        // 0x80230D80: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80230DB0;
    }
    // 0x80230D80: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80230D84: j           L_80230DB8
    // 0x80230D88: nop

        goto L_80230DB8;
    // 0x80230D88: nop

L_80230D8C:
    // 0x80230D8C: j           L_80230DB4
    // 0x80230D90: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80230DB4;
    // 0x80230D90: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80230D94:
    // 0x80230D94: j           L_80230DB8
    // 0x80230D98: sh          $zero, 0x50($t0)
    MEM_H(0X50, ctx->r8) = 0;
        goto L_80230DB8;
    // 0x80230D98: sh          $zero, 0x50($t0)
    MEM_H(0X50, ctx->r8) = 0;
L_80230D9C:
    // 0x80230D9C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80230DA0: j           L_80230DB8
    // 0x80230DA4: sh          $v0, 0x4E($t0)
    MEM_H(0X4E, ctx->r8) = ctx->r2;
        goto L_80230DB8;
    // 0x80230DA4: sh          $v0, 0x4E($t0)
    MEM_H(0X4E, ctx->r8) = ctx->r2;
L_80230DA8:
    // 0x80230DA8: j           L_80230DB8
    // 0x80230DAC: sh          $zero, 0x4E($t0)
    MEM_H(0X4E, ctx->r8) = 0;
        goto L_80230DB8;
    // 0x80230DAC: sh          $zero, 0x4E($t0)
    MEM_H(0X4E, ctx->r8) = 0;
L_80230DB0:
    // 0x80230DB0: sh          $v0, 0x4E($t0)
    MEM_H(0X4E, ctx->r8) = ctx->r2;
L_80230DB4:
    // 0x80230DB4: sh          $v0, 0x50($t0)
    MEM_H(0X50, ctx->r8) = ctx->r2;
L_80230DB8:
    // 0x80230DB8: lhu         $v0, 0x18($t1)
    ctx->r2 = MEM_HU(ctx->r9, 0X18);
    // 0x80230DBC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80230DC0: j           L_80230DF0
    // 0x80230DC4: sh          $v0, 0x18($t1)
    MEM_H(0X18, ctx->r9) = ctx->r2;
        goto L_80230DF0;
    // 0x80230DC4: sh          $v0, 0x18($t1)
    MEM_H(0X18, ctx->r9) = ctx->r2;
L_80230DC8:
    // 0x80230DC8: lhu         $v0, 0x14($t1)
    ctx->r2 = MEM_HU(ctx->r9, 0X14);
    // 0x80230DCC: sh          $zero, 0x18($t1)
    MEM_H(0X18, ctx->r9) = 0;
    // 0x80230DD0: ori         $v0, $v0, 0x5
    ctx->r2 = ctx->r2 | 0X5;
    // 0x80230DD4: sh          $v0, 0x14($t1)
    MEM_H(0X14, ctx->r9) = ctx->r2;
    // 0x80230DD8: sh          $zero, 0x4C($t0)
    MEM_H(0X4C, ctx->r8) = 0;
    // 0x80230DDC: sh          $zero, 0x4E($t0)
    MEM_H(0X4E, ctx->r8) = 0;
    // 0x80230DE0: sh          $zero, 0x50($t0)
    MEM_H(0X50, ctx->r8) = 0;
    // 0x80230DE4: lbu         $v0, 0x140($t1)
    ctx->r2 = MEM_BU(ctx->r9, 0X140);
    // 0x80230DE8: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80230DEC: sb          $v0, 0x140($t1)
    MEM_B(0X140, ctx->r9) = ctx->r2;
L_80230DF0:
    // 0x80230DF0: lhu         $v0, 0x44($t0)
    ctx->r2 = MEM_HU(ctx->r8, 0X44);
    // 0x80230DF4: lhu         $a1, 0x4C($t0)
    ctx->r5 = MEM_HU(ctx->r8, 0X4C);
    // 0x80230DF8: lhu         $v1, 0x46($t0)
    ctx->r3 = MEM_HU(ctx->r8, 0X46);
    // 0x80230DFC: lhu         $a2, 0x4E($t0)
    ctx->r6 = MEM_HU(ctx->r8, 0X4E);
    // 0x80230E00: lhu         $a0, 0x48($t0)
    ctx->r4 = MEM_HU(ctx->r8, 0X48);
    // 0x80230E04: lhu         $a3, 0x50($t0)
    ctx->r7 = MEM_HU(ctx->r8, 0X50);
    // 0x80230E08: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80230E0C: sh          $v0, 0x44($t0)
    MEM_H(0X44, ctx->r8) = ctx->r2;
    // 0x80230E10: lhu         $v0, 0x14($t0)
    ctx->r2 = MEM_HU(ctx->r8, 0X14);
    // 0x80230E14: lhu         $a1, 0x44($t0)
    ctx->r5 = MEM_HU(ctx->r8, 0X44);
    // 0x80230E18: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x80230E1C: sh          $v1, 0x46($t0)
    MEM_H(0X46, ctx->r8) = ctx->r3;
    // 0x80230E20: lhu         $v1, 0x16($t0)
    ctx->r3 = MEM_HU(ctx->r8, 0X16);
    // 0x80230E24: lhu         $a2, 0x46($t0)
    ctx->r6 = MEM_HU(ctx->r8, 0X46);
    // 0x80230E28: addu        $a0, $a0, $a3
    ctx->r4 = ADD32(ctx->r4, ctx->r7);
    // 0x80230E2C: sh          $a0, 0x48($t0)
    MEM_H(0X48, ctx->r8) = ctx->r4;
    // 0x80230E30: lhu         $a0, 0x18($t0)
    ctx->r4 = MEM_HU(ctx->r8, 0X18);
    // 0x80230E34: lhu         $a3, 0x48($t0)
    ctx->r7 = MEM_HU(ctx->r8, 0X48);
    // 0x80230E38: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80230E3C: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x80230E40: addu        $a0, $a0, $a3
    ctx->r4 = ADD32(ctx->r4, ctx->r7);
    // 0x80230E44: sh          $v0, 0x14($t0)
    MEM_H(0X14, ctx->r8) = ctx->r2;
    // 0x80230E48: sh          $v1, 0x16($t0)
    MEM_H(0X16, ctx->r8) = ctx->r3;
    // 0x80230E4C: sh          $a0, 0x18($t0)
    MEM_H(0X18, ctx->r8) = ctx->r4;
    // 0x80230E50: lhu         $v0, 0x14($t1)
    ctx->r2 = MEM_HU(ctx->r9, 0X14);
    // 0x80230E54: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x80230E58: beq         $v0, $zero, L_80230EAC
    if (ctx->r2 == 0) {
        // 0x80230E5C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80230EAC;
    }
    // 0x80230E5C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80230E60: lbu         $v1, 0xA($t0)
    ctx->r3 = MEM_BU(ctx->r8, 0XA);
    // 0x80230E64: bne         $v1, $v0, L_80230E90
    if (ctx->r3 != ctx->r2) {
        // 0x80230E68: addiu       $v0, $zero, -0xC00
        ctx->r2 = ADD32(0, -0XC00);
            goto L_80230E90;
    }
    // 0x80230E68: addiu       $v0, $zero, -0xC00
    ctx->r2 = ADD32(0, -0XC00);
    // 0x80230E6C: lbu         $v0, 0xA($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0XA);
    // 0x80230E70: addiu       $v1, $zero, -0x1A00
    ctx->r3 = ADD32(0, -0X1A00);
    // 0x80230E74: sh          $v1, 0x16($t0)
    MEM_H(0X16, ctx->r8) = ctx->r3;
    // 0x80230E78: addiu       $v1, $zero, -0x600
    ctx->r3 = ADD32(0, -0X600);
    // 0x80230E7C: sh          $zero, 0x14($t0)
    MEM_H(0X14, ctx->r8) = 0;
    // 0x80230E80: sh          $v1, 0x18($t0)
    MEM_H(0X18, ctx->r8) = ctx->r3;
    // 0x80230E84: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80230E88: j           L_80230EA0
    // 0x80230E8C: sb          $v0, 0xA($t0)
    MEM_B(0XA, ctx->r8) = ctx->r2;
        goto L_80230EA0;
    // 0x80230E8C: sb          $v0, 0xA($t0)
    MEM_B(0XA, ctx->r8) = ctx->r2;
L_80230E90:
    // 0x80230E90: sh          $v0, 0x16($t0)
    MEM_H(0X16, ctx->r8) = ctx->r2;
    // 0x80230E94: addiu       $v0, $zero, 0x1800
    ctx->r2 = ADD32(0, 0X1800);
    // 0x80230E98: sh          $zero, 0x14($t0)
    MEM_H(0X14, ctx->r8) = 0;
    // 0x80230E9C: sh          $v0, 0x18($t0)
    MEM_H(0X18, ctx->r8) = ctx->r2;
L_80230EA0:
    // 0x80230EA0: lhu         $v0, 0x14($t1)
    ctx->r2 = MEM_HU(ctx->r9, 0X14);
    // 0x80230EA4: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x80230EA8: sh          $v0, 0x14($t1)
    MEM_H(0X14, ctx->r9) = ctx->r2;
L_80230EAC:
    // 0x80230EAC: lh          $v0, 0x14($t0)
    ctx->r2 = MEM_H(ctx->r8, 0X14);
    // 0x80230EB0: lh          $v1, 0x16($t0)
    ctx->r3 = MEM_H(ctx->r8, 0X16);
    // 0x80230EB4: lh          $a0, 0x18($t0)
    ctx->r4 = MEM_H(ctx->r8, 0X18);
    // 0x80230EB8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80230EBC: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80230EC0: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80230EC4: sw          $v0, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->r2;
    // 0x80230EC8: sw          $v1, 0x20($t0)
    MEM_W(0X20, ctx->r8) = ctx->r3;
    // 0x80230ECC: jr          $ra
    // 0x80230ED0: sw          $a0, 0x24($t0)
    MEM_W(0X24, ctx->r8) = ctx->r4;
    TRACE_RETURN()
    return;
    // 0x80230ED0: sw          $a0, 0x24($t0)
    MEM_W(0X24, ctx->r8) = ctx->r4;
;}
RECOMP_FUNC void func_8022FCDC_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FCDC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022FCE0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022FCE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022FCE8: jal         0x8022F604
    // 0x8022FCEC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8022F604_ovl25(rdram, ctx);
        goto after_0;
    // 0x8022FCEC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x8022FCF0: jal         0x8005044C
    // 0x8022FCF4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_1;
    // 0x8022FCF4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022FCF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022FCFC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022FD00: jr          $ra
    // 0x8022FD04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022FD04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022FD08: nop

    // 0x8022FD0C: nop

;}
RECOMP_FUNC void func_80234828_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234828: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023482C: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x80234830: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80234834: lw          $a0, 0xD0($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XD0);
    // 0x80234838: sltiu       $v0, $a0, 0x4
    ctx->r2 = ctx->r4 < 0X4 ? 1 : 0;
    // 0x8023483C: beq         $v0, $zero, L_80234888
    if (ctx->r2 == 0) {
        // 0x80234840: sll         $v0, $a0, 4
        ctx->r2 = S32(ctx->r4 << 4);
            goto L_80234888;
    }
    // 0x80234840: sll         $v0, $a0, 4
    ctx->r2 = S32(ctx->r4 << 4);
    // 0x80234844: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x80234848: subu        $a1, $a1, $v0
    ctx->r5 = SUB32(ctx->r5, ctx->r2);
    // 0x8023484C: sll         $v1, $a0, 3
    ctx->r3 = S32(ctx->r4 << 3);
    // 0x80234850: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x80234854: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80234858: addiu       $v0, $zero, 0xE0
    ctx->r2 = ADD32(0, 0XE0);
    // 0x8023485C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80234860: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x80234864: sll         $a0, $a1, 16
    ctx->r4 = S32(ctx->r5 << 16);
    // 0x80234868: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8023486C: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80234870: lui         $v1, 0x2E00
    ctx->r3 = S32(0X2E00 << 16);
    // 0x80234874: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80234878: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x8023487C: or          $a0, $a0, $a1
    ctx->r4 = ctx->r4 | ctx->r5;
    // 0x80234880: j           L_8023489C
    // 0x80234884: sw          $a0, 0x8C($a2)
    MEM_W(0X8C, ctx->r6) = ctx->r4;
        goto L_8023489C;
    // 0x80234884: sw          $a0, 0x8C($a2)
    MEM_W(0X8C, ctx->r6) = ctx->r4;
L_80234888:
    // 0x80234888: lbu         $v0, 0x0($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X0);
    // 0x8023488C: lui         $v1, 0x2E00
    ctx->r3 = S32(0X2E00 << 16);
    // 0x80234890: sw          $v1, 0x8C($a2)
    MEM_W(0X8C, ctx->r6) = ctx->r3;
    // 0x80234894: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x80234898: sb          $v0, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r2;
L_8023489C:
    // 0x8023489C: lw          $v0, 0xD0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0XD0);
    // 0x802348A0: lbu         $v1, 0xB($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0XB);
    // 0x802348A4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802348A8: bne         $v1, $zero, L_802348C0
    if (ctx->r3 != 0) {
        // 0x802348AC: sw          $v0, 0xD0($a2)
        MEM_W(0XD0, ctx->r6) = ctx->r2;
            goto L_802348C0;
    }
    // 0x802348AC: sw          $v0, 0xD0($a2)
    MEM_W(0XD0, ctx->r6) = ctx->r2;
    // 0x802348B0: jal         0x8004F4F8
    // 0x802348B4: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_0;
    // 0x802348B4: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
    after_0:
    // 0x802348B8: j           L_802348C8
    // 0x802348BC: nop

        goto L_802348C8;
    // 0x802348BC: nop

L_802348C0:
    // 0x802348C0: jal         0x80234D20
    // 0x802348C4: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
    func_80234D20_ovl25(rdram, ctx);
        goto after_1;
    // 0x802348C4: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
    after_1:
L_802348C8:
    // 0x802348C8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802348CC: jr          $ra
    // 0x802348D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802348D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023D180_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023D180: jr          $ra
    // 0x8023D184: nop

    TRACE_RETURN()
    return;
    // 0x8023D184: nop

;}
RECOMP_FUNC void func_80237CC4_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237CC4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80237CC8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80237CCC: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x80237CD0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80237CD4: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x80237CD8: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x80237CDC: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x80237CE0: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80237CE4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80237CE8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80237CEC: lb          $v0, 0xF($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XF);
    // 0x80237CF0: bne         $v0, $zero, L_80237D9C
    if (ctx->r2 != 0) {
        // 0x80237CF4: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_80237D9C;
    }
    // 0x80237CF4: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x80237CF8: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x80237CFC: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80237D00: lb          $v0, -0x3BC8($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC8);
    // 0x80237D04: addiu       $s6, $zero, 0x6
    ctx->r22 = ADD32(0, 0X6);
    // 0x80237D08: lui         $s5, 0x8024
    ctx->r21 = S32(0X8024 << 16);
    // 0x80237D0C: addiu       $s5, $s5, -0xD40
    ctx->r21 = ADD32(ctx->r21, -0XD40);
    // 0x80237D10: xori        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 ^ 0X2;
    // 0x80237D14: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x80237D18: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80237D1C: andi        $s4, $v0, 0x5
    ctx->r20 = ctx->r2 & 0X5;
L_80237D20:
    // 0x80237D20: jal         0x8004F228
    // 0x80237D24: nop

    func_8004F228_2A628(rdram, ctx);
        goto after_0;
    // 0x80237D24: nop

    after_0:
    // 0x80237D28: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80237D2C: beql        $s0, $zero, L_80237D80
    if (ctx->r16 == 0) {
        // 0x80237D30: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_80237D80;
    }
    goto skip_0;
    // 0x80237D30: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_0:
    // 0x80237D34: addu        $v0, $s1, $s4
    ctx->r2 = ADD32(ctx->r17, ctx->r20);
    // 0x80237D38: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80237D3C: addu        $v0, $v0, $s5
    ctx->r2 = ADD32(ctx->r2, ctx->r21);
    // 0x80237D40: sb          $s3, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r19;
    // 0x80237D44: sb          $s6, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r22;
    // 0x80237D48: sb          $s1, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r17;
    // 0x80237D4C: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x80237D50: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x80237D54: sb          $s3, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r19;
    // 0x80237D58: jal         0x80071A70
    // 0x80237D5C: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    func_80071A70_4CE70(rdram, ctx);
        goto after_1;
    // 0x80237D5C: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    after_1:
    // 0x80237D60: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x80237D64: lbu         $v0, 0x6($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X6);
    // 0x80237D68: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x80237D6C: beq         $v0, $zero, L_80237D80
    if (ctx->r2 == 0) {
        // 0x80237D70: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_80237D80;
    }
    // 0x80237D70: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80237D74: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x80237D78: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x80237D7C: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
L_80237D80:
    // 0x80237D80: slti        $v0, $s1, 0x5
    ctx->r2 = SIGNED(ctx->r17) < 0X5 ? 1 : 0;
    // 0x80237D84: bne         $v0, $zero, L_80237D20
    if (ctx->r2 != 0) {
        // 0x80237D88: nop
    
            goto L_80237D20;
    }
    // 0x80237D88: nop

    // 0x80237D8C: jal         0x8004F62C
    // 0x80237D90: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8004F62C_2AA2C(rdram, ctx);
        goto after_2;
    // 0x80237D90: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_2:
    // 0x80237D94: j           L_80237DB8
    // 0x80237D98: nop

        goto L_80237DB8;
    // 0x80237D98: nop

L_80237D9C:
    // 0x80237D9C: lbu         $v0, 0x3($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X3);
    // 0x80237DA0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80237DA4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80237DA8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80237DAC: lw          $v0, -0xCC4($at)
    ctx->r2 = MEM_W(ctx->r1, -0XCC4);
    // 0x80237DB0: jalr        $v0
    // 0x80237DB4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x80237DB4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_3:
L_80237DB8:
    // 0x80237DB8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80237DBC: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x80237DC0: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x80237DC4: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x80237DC8: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80237DCC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80237DD0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80237DD4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80237DD8: jr          $ra
    // 0x80237DDC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80237DDC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80226BA8_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226BA8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80226BAC: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80226BB0: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x80226BB4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80226BB8: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x80226BBC: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80226BC0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80226BC4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226BC8: andi        $v0, $s1, 0xFF
    ctx->r2 = ctx->r17 & 0XFF;
L_80226BCC:
    // 0x80226BCC: addu        $v0, $s3, $v0
    ctx->r2 = ADD32(ctx->r19, ctx->r2);
    // 0x80226BD0: lbu         $v0, 0x4($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4);
    // 0x80226BD4: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
    // 0x80226BD8: beq         $v0, $zero, L_80226C08
    if (ctx->r2 == 0) {
        // 0x80226BDC: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_80226C08;
    }
    // 0x80226BDC: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x80226BE0: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x80226BE4: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_80226BE8:
    // 0x80226BE8: andi        $a1, $s1, 0xFF
    ctx->r5 = ctx->r17 & 0XFF;
    // 0x80226BEC: jal         0x80226C60
    // 0x80226BF0: andi        $a2, $s0, 0xFF
    ctx->r6 = ctx->r16 & 0XFF;
    func_80226C60_ovl25(rdram, ctx);
        goto after_0;
    // 0x80226BF0: andi        $a2, $s0, 0xFF
    ctx->r6 = ctx->r16 & 0XFF;
    after_0:
    // 0x80226BF4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80226BF8: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
    // 0x80226BFC: sltu        $v0, $v0, $s2
    ctx->r2 = ctx->r2 < ctx->r18 ? 1 : 0;
    // 0x80226C00: bne         $v0, $zero, L_80226BE8
    if (ctx->r2 != 0) {
        // 0x80226C04: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_80226BE8;
    }
    // 0x80226C04: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_80226C08:
    // 0x80226C08: andi        $v0, $s1, 0xFF
    ctx->r2 = ctx->r17 & 0XFF;
    // 0x80226C0C: addu        $a0, $s3, $v0
    ctx->r4 = ADD32(ctx->r19, ctx->r2);
    // 0x80226C10: lbu         $v1, 0x4($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X4);
    // 0x80226C14: sltiu       $v0, $v1, 0x40
    ctx->r2 = ctx->r3 < 0X40 ? 1 : 0;
    // 0x80226C18: beq         $v0, $zero, L_80226C24
    if (ctx->r2 == 0) {
        // 0x80226C1C: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_80226C24;
    }
    // 0x80226C1C: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x80226C20: sb          $v0, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r2;
L_80226C24:
    // 0x80226C24: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80226C28: andi        $v0, $s1, 0xFF
    ctx->r2 = ctx->r17 & 0XFF;
    // 0x80226C2C: sltiu       $v0, $v0, 0x6
    ctx->r2 = ctx->r2 < 0X6 ? 1 : 0;
    // 0x80226C30: bne         $v0, $zero, L_80226BCC
    if (ctx->r2 != 0) {
        // 0x80226C34: andi        $v0, $s1, 0xFF
        ctx->r2 = ctx->r17 & 0XFF;
            goto L_80226BCC;
    }
    // 0x80226C34: andi        $v0, $s1, 0xFF
    ctx->r2 = ctx->r17 & 0XFF;
    // 0x80226C38: lw          $v0, 0xC($s3)
    ctx->r2 = MEM_W(ctx->r19, 0XC);
    // 0x80226C3C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226C40: sw          $v0, 0xC($s3)
    MEM_W(0XC, ctx->r19) = ctx->r2;
    // 0x80226C44: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80226C48: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80226C4C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80226C50: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80226C54: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226C58: jr          $ra
    // 0x80226C5C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80226C5C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022D834_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D834: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022D838: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8022D83C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x8022D840: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8022D844: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8022D848: lb          $v0, 0xE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE);
    // 0x8022D84C: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x8022D850: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022D854: addu        $v1, $v0, $v1
    ctx->r3 = ADD32(ctx->r2, ctx->r3);
    // 0x8022D858: lb          $a0, 0x1($v1)
    ctx->r4 = MEM_B(ctx->r3, 0X1);
    // 0x8022D85C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022D860: addiu       $v0, $zero, 0x7E
    ctx->r2 = ADD32(0, 0X7E);
    // 0x8022D864: beq         $a0, $v0, L_8022D880
    if (ctx->r4 == ctx->r2) {
        // 0x8022D868: addiu       $v0, $zero, 0x7F
        ctx->r2 = ADD32(0, 0X7F);
            goto L_8022D880;
    }
    // 0x8022D868: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x8022D86C: bne         $a0, $v0, L_8022D87C
    if (ctx->r4 != ctx->r2) {
        // 0x8022D870: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_8022D87C;
    }
    // 0x8022D870: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8022D874: j           L_8022D880
    // 0x8022D878: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
        goto L_8022D880;
    // 0x8022D878: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
L_8022D87C:
    // 0x8022D87C: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
L_8022D880:
    // 0x8022D880: lb          $v1, 0xE($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XE);
    // 0x8022D884: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x8022D888: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022D88C: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x8022D890: lb          $v1, 0xD($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XD);
    // 0x8022D894: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x8022D898: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022D89C: sra         $a0, $v0, 24
    ctx->r4 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8022D8A0: beq         $a0, $v1, L_8022D8C8
    if (ctx->r4 == ctx->r3) {
        // 0x8022D8A4: addiu       $a1, $zero, 0x2A
        ctx->r5 = ADD32(0, 0X2A);
            goto L_8022D8C8;
    }
    // 0x8022D8A4: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x8022D8A8: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x8022D8AC: jal         0x8003B85C
    // 0x8022D8B0: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_0;
    // 0x8022D8B0: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_0:
    // 0x8022D8B4: lw          $a0, 0x88($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X88);
    // 0x8022D8B8: lui         $a1, 0x11
    ctx->r5 = S32(0X11 << 16);
    // 0x8022D8BC: ori         $a1, $a1, 0x10
    ctx->r5 = ctx->r5 | 0X10;
    // 0x8022D8C0: jal         0x8003B840
    // 0x8022D8C4: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_1;
    // 0x8022D8C4: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_1:
L_8022D8C8:
    // 0x8022D8C8: lb          $a0, 0x11($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X11);
    // 0x8022D8CC: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x8022D8D0: lbu         $v1, 0xC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XC);
    // 0x8022D8D4: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x8022D8D8: sb          $v1, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r3;
    // 0x8022D8DC: lb          $v1, 0x1($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X1);
    // 0x8022D8E0: addiu       $v0, $zero, 0x7E
    ctx->r2 = ADD32(0, 0X7E);
    // 0x8022D8E4: beq         $v1, $v0, L_8022D900
    if (ctx->r3 == ctx->r2) {
        // 0x8022D8E8: addiu       $v0, $zero, 0x7F
        ctx->r2 = ADD32(0, 0X7F);
            goto L_8022D900;
    }
    // 0x8022D8E8: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x8022D8EC: bne         $v1, $v0, L_8022D8FC
    if (ctx->r3 != ctx->r2) {
        // 0x8022D8F0: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_8022D8FC;
    }
    // 0x8022D8F0: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x8022D8F4: j           L_8022D900
    // 0x8022D8F8: sb          $zero, 0x11($s0)
    MEM_B(0X11, ctx->r16) = 0;
        goto L_8022D900;
    // 0x8022D8F8: sb          $zero, 0x11($s0)
    MEM_B(0X11, ctx->r16) = 0;
L_8022D8FC:
    // 0x8022D8FC: sb          $v0, 0x11($s0)
    MEM_B(0X11, ctx->r16) = ctx->r2;
L_8022D900:
    // 0x8022D900: lb          $v1, 0x11($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X11);
    // 0x8022D904: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x8022D908: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022D90C: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x8022D910: lb          $v1, 0x10($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X10);
    // 0x8022D914: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
    // 0x8022D918: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022D91C: sra         $a0, $v0, 24
    ctx->r4 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8022D920: beq         $a0, $v1, L_8022D948
    if (ctx->r4 == ctx->r3) {
        // 0x8022D924: addiu       $a1, $zero, 0x2A
        ctx->r5 = ADD32(0, 0X2A);
            goto L_8022D948;
    }
    // 0x8022D924: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x8022D928: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x8022D92C: jal         0x8003B85C
    // 0x8022D930: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_2;
    // 0x8022D930: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_2:
    // 0x8022D934: lw          $a0, 0x88($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X88);
    // 0x8022D938: lui         $a1, 0x13
    ctx->r5 = S32(0X13 << 16);
    // 0x8022D93C: ori         $a1, $a1, 0x12
    ctx->r5 = ctx->r5 | 0X12;
    // 0x8022D940: jal         0x8003B840
    // 0x8022D944: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_3;
    // 0x8022D944: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_3:
L_8022D948:
    // 0x8022D948: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x8022D94C: sb          $v0, 0x10($s0)
    MEM_B(0X10, ctx->r16) = ctx->r2;
    // 0x8022D950: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8022D954: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8022D958: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8022D95C: jr          $ra
    // 0x8022D960: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022D960: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8022D964: nop

    // 0x8022D968: nop

    // 0x8022D96C: nop

;}
RECOMP_FUNC void func_80232E68_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232E68: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80232E6C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80232E70: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80232E74: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x80232E78: lbu         $a0, -0x3A47($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X3A47);
    // 0x80232E7C: xori        $v1, $a0, 0x1
    ctx->r3 = ctx->r4 ^ 0X1;
    // 0x80232E80: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x80232E84: xori        $v0, $a0, 0x3
    ctx->r2 = ctx->r4 ^ 0X3;
    // 0x80232E88: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80232E8C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80232E90: beq         $v1, $zero, L_80232ED8
    if (ctx->r3 == 0) {
        // 0x80232E94: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80232ED8;
    }
    // 0x80232E94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80232E98: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x80232E9C: slti        $v0, $v0, 0x78
    ctx->r2 = SIGNED(ctx->r2) < 0X78 ? 1 : 0;
    // 0x80232EA0: beq         $v0, $zero, L_80232EC0
    if (ctx->r2 == 0) {
        // 0x80232EA4: nop
    
            goto L_80232EC0;
    }
    // 0x80232EA4: nop

    // 0x80232EA8: lhu         $v0, 0x54($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X54);
    // 0x80232EAC: lbu         $v1, 0xC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XC);
    // 0x80232EB0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80232EB4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80232EB8: sh          $v0, 0x54($s0)
    MEM_H(0X54, ctx->r16) = ctx->r2;
    // 0x80232EBC: sb          $v1, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r3;
L_80232EC0:
    // 0x80232EC0: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x80232EC4: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80232EC8: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80232ECC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80232ED0: j           L_80232EF4
    // 0x80232ED4: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
        goto L_80232EF4;
    // 0x80232ED4: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
L_80232ED8:
    // 0x80232ED8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80232EDC: bne         $a0, $v0, L_80232EF4
    if (ctx->r4 != ctx->r2) {
        // 0x80232EE0: nop
    
            goto L_80232EF4;
    }
    // 0x80232EE0: nop

    // 0x80232EE4: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80232EE8: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x80232EEC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80232EF0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80232EF4:
    // 0x80232EF4: jal         0x800504EC
    // 0x80232EF8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800504EC_2B8EC(rdram, ctx);
        goto after_0;
    // 0x80232EF8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80232EFC: jal         0x8005129C
    // 0x80232F00: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005129C_2C69C(rdram, ctx);
        goto after_1;
    // 0x80232F00: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80232F04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80232F08: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80232F0C: jr          $ra
    // 0x80232F10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80232F10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80233370_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233370: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x80233374: sw          $s0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r16;
    // 0x80233378: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023337C: addiu       $a0, $s0, 0x8C
    ctx->r4 = ADD32(ctx->r16, 0X8C);
    // 0x80233380: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x80233384: sw          $ra, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r31;
    // 0x80233388: sw          $s3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r19;
    // 0x8023338C: sw          $s2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r18;
    // 0x80233390: sw          $s1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r17;
    // 0x80233394: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80233398: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8023339C: addiu       $s1, $sp, 0x28
    ctx->r17 = ADD32(ctx->r29, 0X28);
    // 0x802333A0: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x802333A4: lui         $s2, 0x8024
    ctx->r18 = S32(0X8024 << 16);
    // 0x802333A8: addiu       $s2, $s2, -0x1380
    ctx->r18 = ADD32(ctx->r18, -0X1380);
    // 0x802333AC: sw          $zero, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = 0;
    // 0x802333B0: sw          $zero, 0xC4($s0)
    MEM_W(0XC4, ctx->r16) = 0;
    // 0x802333B4: sw          $zero, 0xC8($s0)
    MEM_W(0XC8, ctx->r16) = 0;
    // 0x802333B8: sw          $zero, 0xCC($s0)
    MEM_W(0XCC, ctx->r16) = 0;
    // 0x802333BC: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x802333C0: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x802333C4: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x802333C8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802333CC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802333D0: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x802333D4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802333D8: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x802333DC: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    // 0x802333E0: addiu       $v0, $zero, -0x1000
    ctx->r2 = ADD32(0, -0X1000);
    // 0x802333E4: sh          $zero, 0x10($sp)
    MEM_H(0X10, ctx->r29) = 0;
    // 0x802333E8: sh          $zero, 0x12($sp)
    MEM_H(0X12, ctx->r29) = 0;
    // 0x802333EC: jal         0x800308E8
    // 0x802333F0: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    func_800308E8_BCE8(rdram, ctx);
        goto after_0;
    // 0x802333F0: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    after_0:
    // 0x802333F4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802333F8: jal         0x800321EC
    // 0x802333FC: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    func_800321EC_D5EC(rdram, ctx);
        goto after_1;
    // 0x802333FC: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    after_1:
    // 0x80233400: addiu       $a0, $s0, 0xD0
    ctx->r4 = ADD32(ctx->r16, 0XD0);
    // 0x80233404: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x80233408: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x8023340C: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x80233410: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x80233414: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80233418: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x8023341C: sh          $v1, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r3;
    // 0x80233420: jal         0x8009A3B4
    // 0x80233424: sh          $a3, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r7;
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80233424: sh          $a3, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r7;
    after_2:
    // 0x80233428: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8023342C: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80233430: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80233434: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80233438: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8023343C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80233440: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80233444: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80233448: lhu         $v0, -0x138E($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X138E);
    // 0x8023344C: sh          $v0, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r2;
    // 0x80233450: lh          $v1, 0x10($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X10);
    // 0x80233454: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80233458: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023345C: mult        $v1, $a0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80233460: mflo        $v1
    ctx->r3 = lo;
    // 0x80233464: sra         $v1, $v1, 4
    ctx->r3 = S32(SIGNED(ctx->r3) >> 4);
    // 0x80233468: sh          $v1, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r3;
    // 0x8023346C: lh          $v0, 0x12($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X12);
    // 0x80233470: mult        $v0, $a0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80233474: mflo        $v0
    ctx->r2 = lo;
    // 0x80233478: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x8023347C: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x80233480: lh          $v0, 0x14($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X14);
    // 0x80233484: mult        $v0, $a0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80233488: mflo        $v0
    ctx->r2 = lo;
    // 0x8023348C: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x80233490: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x80233494: sh          $v0, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r2;
    // 0x80233498: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8023349C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802334A0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802334A4: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x802334A8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802334AC: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x802334B0: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x802334B4: lh          $a0, -0x138C($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X138C);
    // 0x802334B8: lh          $v0, 0x10($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X10);
    // 0x802334BC: mult        $v0, $a0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802334C0: mflo        $v0
    ctx->r2 = lo;
    // 0x802334C4: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x802334C8: sh          $v0, 0x4C($s0)
    MEM_H(0X4C, ctx->r16) = ctx->r2;
    // 0x802334CC: lh          $v0, 0x12($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X12);
    // 0x802334D0: mult        $v0, $a0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802334D4: mflo        $v0
    ctx->r2 = lo;
    // 0x802334D8: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x802334DC: sh          $v0, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r2;
    // 0x802334E0: lh          $v0, 0x14($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X14);
    // 0x802334E4: mult        $v0, $a0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802334E8: mflo        $v0
    ctx->r2 = lo;
    // 0x802334EC: addiu       $s2, $s2, -0xF
    ctx->r18 = ADD32(ctx->r18, -0XF);
    // 0x802334F0: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x802334F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802334F8: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x802334FC: sh          $v0, 0x50($s0)
    MEM_H(0X50, ctx->r16) = ctx->r2;
    // 0x80233500: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80233504: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80233508: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023350C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80233510: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x80233514: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80233518: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023351C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80233520: lbu         $v0, -0x1390($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X1390);
    // 0x80233524: sll         $a1, $v1, 1
    ctx->r5 = S32(ctx->r3 << 1);
    // 0x80233528: addu        $a1, $a1, $v1
    ctx->r5 = ADD32(ctx->r5, ctx->r3);
    // 0x8023352C: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x80233530: subu        $a1, $a1, $v1
    ctx->r5 = SUB32(ctx->r5, ctx->r3);
    // 0x80233534: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x80233538: addu        $a1, $a1, $s2
    ctx->r5 = ADD32(ctx->r5, ctx->r18);
    // 0x8023353C: jal         0x8004D5D4
    // 0x80233540: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_3;
    // 0x80233540: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    after_3:
    // 0x80233544: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80233548: lhu         $t0, 0x14($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X14);
    // 0x8023354C: lhu         $t1, 0x16($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X16);
    // 0x80233550: lhu         $t2, 0x18($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X18);
    // 0x80233554: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x80233558: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x8023355C: lh          $a3, 0x18($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X18);
    // 0x80233560: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80233564: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80233568: sb          $zero, 0x2($s0)
    MEM_B(0X2, ctx->r16) = 0;
    // 0x8023356C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80233570: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80233574: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x80233578: sh          $t0, 0xAC($s0)
    MEM_H(0XAC, ctx->r16) = ctx->r8;
    // 0x8023357C: sh          $t1, 0xAE($s0)
    MEM_H(0XAE, ctx->r16) = ctx->r9;
    // 0x80233580: sh          $t2, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r10;
    // 0x80233584: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x80233588: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x8023358C: jal         0x8009A3B4
    // 0x80233590: sw          $a3, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r7;
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x80233590: sw          $a3, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r7;
    after_4:
    // 0x80233594: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80233598: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x8023359C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802335A0: jal         0x8009A3B4
    // 0x802335A4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x802335A4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_5:
    // 0x802335A8: addiu       $s2, $s0, 0xD8
    ctx->r18 = ADD32(ctx->r16, 0XD8);
    // 0x802335AC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x802335B0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802335B4: jal         0x8009A3B4
    // 0x802335B8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x802335B8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_6:
    // 0x802335BC: addiu       $s3, $s0, 0xE0
    ctx->r19 = ADD32(ctx->r16, 0XE0);
    // 0x802335C0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x802335C4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x802335C8: jal         0x8009A3B4
    // 0x802335CC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x802335CC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_7:
    // 0x802335D0: addiu       $s1, $s0, 0xE8
    ctx->r17 = ADD32(ctx->r16, 0XE8);
    // 0x802335D4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802335D8: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x802335DC: jal         0x8009A3B4
    // 0x802335E0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x802335E0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_8:
    // 0x802335E4: addiu       $a0, $s0, 0xF0
    ctx->r4 = ADD32(ctx->r16, 0XF0);
    // 0x802335E8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802335EC: jal         0x8009A3B4
    // 0x802335F0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_9;
    // 0x802335F0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_9:
    // 0x802335F4: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802335F8: lbu         $a0, 0x3($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X3);
    // 0x802335FC: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
    // 0x80233600: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x80233604: sw          $v1, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r3;
    // 0x80233608: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023360C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80233610: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x80233614: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80233618: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023361C: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x80233620: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80233624: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80233628: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023362C: lbu         $v0, -0x1370($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X1370);
    // 0x80233630: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80233634: jal         0x80233B3C
    // 0x80233638: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    func_80233B3C_ovl25(rdram, ctx);
        goto after_10;
    // 0x80233638: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    after_10:
    // 0x8023363C: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x80233640: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80233644: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80233648: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023364C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80233650: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80233654: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80233658: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023365C: lbu         $v0, -0x1374($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X1374);
    // 0x80233660: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80233664: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80233668: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023366C: lw          $v0, -0x125C($at)
    ctx->r2 = MEM_W(ctx->r1, -0X125C);
    // 0x80233670: jalr        $v0
    // 0x80233674: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_11;
    // 0x80233674: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_11:
    // 0x80233678: lw          $ra, 0x68($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X68);
    // 0x8023367C: lw          $s3, 0x64($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X64);
    // 0x80233680: lw          $s2, 0x60($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X60);
    // 0x80233684: lw          $s1, 0x5C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X5C);
    // 0x80233688: lw          $s0, 0x58($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X58);
    // 0x8023368C: jr          $ra
    // 0x80233690: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    TRACE_RETURN()
    return;
    // 0x80233690: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_80233AB4_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233AB4: jr          $ra
    // 0x80233AB8: nop

    TRACE_RETURN()
    return;
    // 0x80233AB8: nop

;}
RECOMP_FUNC void func_8023B914_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B914: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x8023B918: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023B91C: sb          $zero, 0x327A($at)
    MEM_B(0X327A, ctx->r1) = 0;
    // 0x8023B920: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023B924: sb          $zero, 0x3279($at)
    MEM_B(0X3279, ctx->r1) = 0;
    // 0x8023B928: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023B92C: sb          $zero, 0x3278($at)
    MEM_B(0X3278, ctx->r1) = 0;
    // 0x8023B930: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8023B934: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8023B938: lw          $v0, 0x124($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X124);
    // 0x8023B93C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023B940: jr          $ra
    // 0x8023B944: sw          $v0, 0x3270($at)
    MEM_W(0X3270, ctx->r1) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x8023B944: sw          $v0, 0x3270($at)
    MEM_W(0X3270, ctx->r1) = ctx->r2;
;}
RECOMP_FUNC void func_80233B04_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233B04: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80233B08: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80233B0C: jal         0x80233C90
    // 0x80233B10: nop

    func_80233C90_ovl25(rdram, ctx);
        goto after_0;
    // 0x80233B10: nop

    after_0:
    // 0x80233B14: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80233B18: jr          $ra
    // 0x80233B1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80233B1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023055C_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023055C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80230560: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80230564: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80230568: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023056C: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x80230570: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80230574: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80230578: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023057C: jal         0x8009A3B4
    // 0x80230580: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80230580: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x80230584: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80230588: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8023058C: jal         0x8009A3B4
    // 0x80230590: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80230590: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80230594: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80230598: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8023059C: jal         0x8009A3B4
    // 0x802305A0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x802305A0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x802305A4: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x802305A8: jal         0x800A3450
    // 0x802305AC: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x802305AC: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    after_3:
    // 0x802305B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802305B4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802305B8: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x802305BC: addiu       $a3, $zero, 0x4210
    ctx->r7 = ADD32(0, 0X4210);
    // 0x802305C0: jal         0x802325F8
    // 0x802305C4: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    func_802325F8_ovl25(rdram, ctx);
        goto after_4;
    // 0x802305C4: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    after_4:
    // 0x802305C8: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802305CC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802305D0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802305D4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802305D8: lw          $v0, -0x1528($at)
    ctx->r2 = MEM_W(ctx->r1, -0X1528);
    // 0x802305DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802305E0: jalr        $v0
    // 0x802305E4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_5;
    // 0x802305E4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_5:
    // 0x802305E8: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x802305EC: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x802305F0: beq         $a1, $v0, L_80230608
    if (ctx->r5 == ctx->r2) {
        // 0x802305F4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80230608;
    }
    // 0x802305F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802305F8: jal         0x80050294
    // 0x802305FC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_6;
    // 0x802305FC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_6:
    // 0x80230600: j           L_80230610
    // 0x80230604: nop

        goto L_80230610;
    // 0x80230604: nop

L_80230608:
    // 0x80230608: jal         0x8005044C
    // 0x8023060C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_7;
    // 0x8023060C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
L_80230610:
    // 0x80230610: lhu         $v0, 0x142($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X142);
    // 0x80230614: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80230618: sh          $v0, 0x142($s1)
    MEM_H(0X142, ctx->r17) = ctx->r2;
    // 0x8023061C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80230620: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80230624: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80230628: jr          $ra
    // 0x8023062C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023062C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80230400_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230400: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80230404: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80230408: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023040C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80230410: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80230414: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80230418: jal         0x8009A3B4
    // 0x8023041C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8023041C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x80230420: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80230424: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80230428: jal         0x8009A3B4
    // 0x8023042C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8023042C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80230430: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80230434: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80230438: jal         0x8009A3B4
    // 0x8023043C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8023043C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80230440: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x80230444: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80230448: bne         $v1, $zero, L_802304A4
    if (ctx->r3 != 0) {
        // 0x8023044C: sb          $v0, 0xAD($s0)
        MEM_B(0XAD, ctx->r16) = ctx->r2;
            goto L_802304A4;
    }
    // 0x8023044C: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x80230450: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80230454: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230458: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8023045C: ori         $v0, $v0, 0x42
    ctx->r2 = ctx->r2 | 0X42;
    // 0x80230460: jal         0x8004D5FC
    // 0x80230464: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5FC_289FC(rdram, ctx);
        goto after_3;
    // 0x80230464: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_3:
    // 0x80230468: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8023046C: addiu       $v0, $zero, 0xC00
    ctx->r2 = ADD32(0, 0XC00);
    // 0x80230470: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80230474: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80230478: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8023047C: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80230480: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80230484: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80230488: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x8023048C: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x80230490: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x80230494: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x80230498: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8023049C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802304A0: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
L_802304A4:
    // 0x802304A4: lb          $a0, 0xC($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XC);
    // 0x802304A8: slti        $v0, $a0, 0x5
    ctx->r2 = SIGNED(ctx->r4) < 0X5 ? 1 : 0;
    // 0x802304AC: beq         $v0, $zero, L_8023050C
    if (ctx->r2 == 0) {
        // 0x802304B0: sll         $v0, $a0, 2
        ctx->r2 = S32(ctx->r4 << 2);
            goto L_8023050C;
    }
    // 0x802304B0: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x802304B4: lh          $v1, 0x18($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X18);
    // 0x802304B8: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x802304BC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802304C0: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x802304C4: sll         $v0, $v0, 6
    ctx->r2 = S32(ctx->r2 << 6);
    // 0x802304C8: addiu       $v0, $v0, 0x1E00
    ctx->r2 = ADD32(ctx->r2, 0X1E00);
    // 0x802304CC: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x802304D0: beq         $v0, $zero, L_802304EC
    if (ctx->r2 == 0) {
        // 0x802304D4: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_802304EC;
    }
    // 0x802304D4: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802304D8: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x802304DC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802304E0: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x802304E4: j           L_8023050C
    // 0x802304E8: sh          $v0, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r2;
        goto L_8023050C;
    // 0x802304E8: sh          $v0, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r2;
L_802304EC:
    // 0x802304EC: lh          $v0, 0x48($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X48);
    // 0x802304F0: bgez        $v0, L_8023050C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802304F4: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8023050C;
    }
    // 0x802304F4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802304F8: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x802304FC: sh          $v0, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r2;
    // 0x80230500: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80230504: bgtzl       $v0, L_8023050C
    if (SIGNED(ctx->r2) > 0) {
        // 0x80230508: sh          $zero, 0x48($s0)
        MEM_H(0X48, ctx->r16) = 0;
            goto L_8023050C;
    }
    goto skip_0;
    // 0x80230508: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    skip_0:
L_8023050C:
    // 0x8023050C: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x80230510: lhu         $v1, 0x48($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X48);
    // 0x80230514: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x80230518: lbu         $a0, 0xAD($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XAD);
    // 0x8023051C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80230520: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x80230524: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80230528: beq         $a1, $a0, L_80230544
    if (ctx->r5 == ctx->r4) {
        // 0x8023052C: sw          $v0, 0x24($s0)
        MEM_W(0X24, ctx->r16) = ctx->r2;
            goto L_80230544;
    }
    // 0x8023052C: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    // 0x80230530: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230534: jal         0x80050294
    // 0x80230538: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_4;
    // 0x80230538: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
    // 0x8023053C: j           L_8023054C
    // 0x80230540: nop

        goto L_8023054C;
    // 0x80230540: nop

L_80230544:
    // 0x80230544: jal         0x8005044C
    // 0x80230548: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_5;
    // 0x80230548: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
L_8023054C:
    // 0x8023054C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80230550: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80230554: jr          $ra
    // 0x80230558: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80230558: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022EAF4_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022EAF4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8022EAF8: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x8022EAFC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022EB00: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x8022EB04: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8022EB08: lh          $a1, 0x44($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X44);
    // 0x8022EB0C: lh          $a2, 0x46($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X46);
    // 0x8022EB10: jal         0x8004DA90
    // 0x8022EB14: lh          $a3, 0x48($s1)
    ctx->r7 = MEM_H(ctx->r17, 0X48);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x8022EB14: lh          $a3, 0x48($s1)
    ctx->r7 = MEM_H(ctx->r17, 0X48);
    after_0:
    // 0x8022EB18: lh          $v0, 0x4E2($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X4E2);
    // 0x8022EB1C: bne         $v0, $zero, L_8022EBBC
    if (ctx->r2 != 0) {
        // 0x8022EB20: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022EBBC;
    }
    // 0x8022EB20: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022EB24: addiu       $s0, $s1, 0x4FA
    ctx->r16 = ADD32(ctx->r17, 0X4FA);
    // 0x8022EB28: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022EB2C: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x8022EB30: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022EB34: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022EB38: jal         0x8009A3B4
    // 0x8022EB3C: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022EB3C: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    after_1:
    // 0x8022EB40: lhu         $v0, 0x56($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X56);
    // 0x8022EB44: lh          $v1, 0x4FA($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X4FA);
    // 0x8022EB48: addiu       $v0, $v0, -0x400
    ctx->r2 = ADD32(ctx->r2, -0X400);
    // 0x8022EB4C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022EB50: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022EB54: sh          $v0, 0x502($s1)
    MEM_H(0X502, ctx->r17) = ctx->r2;
    // 0x8022EB58: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x8022EB5C: lh          $v0, 0x4FC($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X4FC);
    // 0x8022EB60: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022EB64: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8022EB68: lh          $v0, 0x4FE($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X4FE);
    // 0x8022EB6C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022EB70: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022EB74: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8022EB78: lh          $a2, 0x502($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X502);
    // 0x8022EB7C: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x8022EB80: addiu       $a3, $zero, 0x7000
    ctx->r7 = ADD32(0, 0X7000);
    // 0x8022EB84: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8022EB88: jal         0x8004DBA0
    // 0x8022EB8C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_2;
    // 0x8022EB8C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_2:
    // 0x8022EB90: lhu         $v1, 0x502($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X502);
    // 0x8022EB94: lbu         $a0, 0xA($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0XA);
    // 0x8022EB98: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8022EB9C: sh          $v0, 0x4E2($s1)
    MEM_H(0X4E2, ctx->r17) = ctx->r2;
    // 0x8022EBA0: sh          $zero, 0x4E4($s1)
    MEM_H(0X4E4, ctx->r17) = 0;
    // 0x8022EBA4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8022EBA8: addiu       $v1, $v1, 0x800
    ctx->r3 = ADD32(ctx->r3, 0X800);
    // 0x8022EBAC: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022EBB0: sh          $v1, 0x502($s1)
    MEM_H(0X502, ctx->r17) = ctx->r3;
    // 0x8022EBB4: j           L_8022EBC4
    // 0x8022EBB8: sb          $a0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r4;
        goto L_8022EBC4;
    // 0x8022EBB8: sb          $a0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r4;
L_8022EBBC:
    // 0x8022EBBC: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022EBC0: sh          $v0, 0x4E2($s1)
    MEM_H(0X4E2, ctx->r17) = ctx->r2;
L_8022EBC4:
    // 0x8022EBC4: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x8022EBC8: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x8022EBCC: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8022EBD0: jr          $ra
    // 0x8022EBD4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8022EBD4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
