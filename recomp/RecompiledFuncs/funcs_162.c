#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80236E7C_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236E7C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80236E80: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80236E84: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80236E88: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80236E8C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80236E90: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80236E94: lw          $v0, -0x1040($at)
    ctx->r2 = MEM_W(ctx->r1, -0X1040);
    // 0x80236E98: jalr        $v0
    // 0x80236E9C: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80236E9C: nop

    after_0:
    // 0x80236EA0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80236EA4: jr          $ra
    // 0x80236EA8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80236EA8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023A7BC_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023A7BC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023A7C0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023A7C4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8023A7C8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023A7CC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023A7D0: lw          $v0, 0x10($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X10);
    // 0x8023A7D4: bne         $v0, $zero, L_8023A83C
    if (ctx->r2 != 0) {
        // 0x8023A7D8: addiu       $a0, $zero, 0xB
        ctx->r4 = ADD32(0, 0XB);
            goto L_8023A83C;
    }
    // 0x8023A7D8: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    // 0x8023A7DC: jal         0x8023AB14
    // 0x8023A7E0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8023AB14_ovl25(rdram, ctx);
        goto after_0;
    // 0x8023A7E0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x8023A7E4: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x8023A7E8: addiu       $s0, $zero, 0x3
    ctx->r16 = ADD32(0, 0X3);
    // 0x8023A7EC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8023A7F0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023A7F4: sb          $s0, 0x4430($at)
    MEM_B(0X4430, ctx->r1) = ctx->r16;
    // 0x8023A7F8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023A7FC: sb          $v0, 0x445F($at)
    MEM_B(0X445F, ctx->r1) = ctx->r2;
    // 0x8023A800: jal         0x8023AB14
    // 0x8023A804: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8023AB14_ovl25(rdram, ctx);
        goto after_1;
    // 0x8023A804: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x8023A808: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8023A80C: addiu       $a0, $a0, -0xC50
    ctx->r4 = ADD32(ctx->r4, -0XC50);
    // 0x8023A810: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x8023A814: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023A818: sb          $s0, 0x4468($at)
    MEM_B(0X4468, ctx->r1) = ctx->r16;
    // 0x8023A81C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023A820: jal         0x8005FA7C
    // 0x8023A824: sb          $v0, 0x4497($at)
    MEM_B(0X4497, ctx->r1) = ctx->r2;
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_2;
    // 0x8023A824: sb          $v0, 0x4497($at)
    MEM_B(0X4497, ctx->r1) = ctx->r2;
    after_2:
    // 0x8023A828: lw          $v1, 0x24($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X24);
    // 0x8023A82C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8023A830: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x8023A834: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
    // 0x8023A838: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
L_8023A83C:
    // 0x8023A83C: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
    // 0x8023A840: addiu       $v0, $zero, 0x7A
    ctx->r2 = ADD32(0, 0X7A);
    // 0x8023A844: bne         $v1, $v0, L_8023A854
    if (ctx->r3 != ctx->r2) {
        // 0x8023A848: addiu       $v0, $zero, 0xC
        ctx->r2 = ADD32(0, 0XC);
            goto L_8023A854;
    }
    // 0x8023A848: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x8023A84C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023A850: sb          $v0, 0x445F($at)
    MEM_B(0X445F, ctx->r1) = ctx->r2;
L_8023A854:
    // 0x8023A854: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8023A858: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023A85C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023A860: jr          $ra
    // 0x8023A864: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023A864: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023A394_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023A394: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023A398: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8023A39C: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x8023A3A0: bne         $v0, $zero, L_8023A3D0
    if (ctx->r2 != 0) {
        // 0x8023A3A4: nop
    
            goto L_8023A3D0;
    }
    // 0x8023A3A4: nop

    // 0x8023A3A8: lw          $v1, 0x28($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X28);
    // 0x8023A3AC: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8023A3B0: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8023A3B4: addiu       $a0, $a0, -0xC28
    ctx->r4 = ADD32(ctx->r4, -0XC28);
    // 0x8023A3B8: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x8023A3BC: jal         0x8005FA7C
    // 0x8023A3C0: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_0;
    // 0x8023A3C0: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    after_0:
    // 0x8023A3C4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8023A3C8: jal         0x8023A980
    // 0x8023A3CC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8023A980_ovl25(rdram, ctx);
        goto after_1;
    // 0x8023A3CC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
L_8023A3D0:
    // 0x8023A3D0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8023A3D4: jr          $ra
    // 0x8023A3D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023A3D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80232700_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232700: lhu         $v0, 0x16($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X16);
    // 0x80232704: lbu         $v1, 0x9($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X9);
    // 0x80232708: srl         $v0, $v0, 5
    ctx->r2 = S32(U32(ctx->r2) >> 5);
    // 0x8023270C: andi        $a0, $v0, 0x7
    ctx->r4 = ctx->r2 & 0X7;
    // 0x80232710: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80232714: beq         $v1, $v0, L_80232784
    if (ctx->r3 == ctx->r2) {
        // 0x80232718: slti        $v0, $v1, 0x9
        ctx->r2 = SIGNED(ctx->r3) < 0X9 ? 1 : 0;
            goto L_80232784;
    }
    // 0x80232718: slti        $v0, $v1, 0x9
    ctx->r2 = SIGNED(ctx->r3) < 0X9 ? 1 : 0;
    // 0x8023271C: beq         $v0, $zero, L_80232734
    if (ctx->r2 == 0) {
        // 0x80232720: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_80232734;
    }
    // 0x80232720: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80232724: beq         $v1, $v0, L_80232748
    if (ctx->r3 == ctx->r2) {
        // 0x80232728: nop
    
            goto L_80232748;
    }
    // 0x80232728: nop

    // 0x8023272C: j           L_80232820
    // 0x80232730: nop

        goto L_80232820;
    // 0x80232730: nop

L_80232734:
    // 0x80232734: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x80232738: beq         $v1, $v0, L_802327D8
    if (ctx->r3 == ctx->r2) {
        // 0x8023273C: nop
    
            goto L_802327D8;
    }
    // 0x8023273C: nop

    // 0x80232740: j           L_80232820
    // 0x80232744: nop

        goto L_80232820;
    // 0x80232744: nop

L_80232748:
    // 0x80232748: lbu         $v1, 0x13D($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X13D);
    // 0x8023274C: lbu         $v0, 0x13E($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X13E);
    // 0x80232750: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x80232754: bne         $v0, $zero, L_80232770
    if (ctx->r2 != 0) {
        // 0x80232758: nop
    
            goto L_80232770;
    }
    // 0x80232758: nop

    // 0x8023275C: bne         $a0, $zero, L_80232814
    if (ctx->r4 != 0) {
        // 0x80232760: nop
    
            goto L_80232814;
    }
    // 0x80232760: nop

    // 0x80232764: lhu         $v0, 0x14($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X14);
    // 0x80232768: j           L_8023281C
    // 0x8023276C: ori         $v0, $v0, 0x21
    ctx->r2 = ctx->r2 | 0X21;
        goto L_8023281C;
    // 0x8023276C: ori         $v0, $v0, 0x21
    ctx->r2 = ctx->r2 | 0X21;
L_80232770:
    // 0x80232770: beq         $a0, $zero, L_80232814
    if (ctx->r4 == 0) {
        // 0x80232774: nop
    
            goto L_80232814;
    }
    // 0x80232774: nop

    // 0x80232778: lhu         $v0, 0x14($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X14);
    // 0x8023277C: j           L_8023281C
    // 0x80232780: ori         $v0, $v0, 0x21
    ctx->r2 = ctx->r2 | 0X21;
        goto L_8023281C;
    // 0x80232780: ori         $v0, $v0, 0x21
    ctx->r2 = ctx->r2 | 0X21;
L_80232784:
    // 0x80232784: lbu         $v1, 0x13C($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X13C);
    // 0x80232788: lbu         $v0, 0x13E($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X13E);
    // 0x8023278C: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x80232790: bne         $v0, $zero, L_802327B8
    if (ctx->r2 != 0) {
        // 0x80232794: nop
    
            goto L_802327B8;
    }
    // 0x80232794: nop

    // 0x80232798: bne         $a0, $zero, L_802327AC
    if (ctx->r4 != 0) {
        // 0x8023279C: nop
    
            goto L_802327AC;
    }
    // 0x8023279C: nop

    // 0x802327A0: lhu         $v0, 0x14($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X14);
    // 0x802327A4: j           L_8023281C
    // 0x802327A8: ori         $v0, $v0, 0x21
    ctx->r2 = ctx->r2 | 0X21;
        goto L_8023281C;
    // 0x802327A8: ori         $v0, $v0, 0x21
    ctx->r2 = ctx->r2 | 0X21;
L_802327AC:
    // 0x802327AC: lhu         $v0, 0x14($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X14);
    // 0x802327B0: j           L_8023281C
    // 0x802327B4: ori         $v0, $v0, 0x9
    ctx->r2 = ctx->r2 | 0X9;
        goto L_8023281C;
    // 0x802327B4: ori         $v0, $v0, 0x9
    ctx->r2 = ctx->r2 | 0X9;
L_802327B8:
    // 0x802327B8: bne         $a0, $zero, L_802327CC
    if (ctx->r4 != 0) {
        // 0x802327BC: nop
    
            goto L_802327CC;
    }
    // 0x802327BC: nop

    // 0x802327C0: lhu         $v0, 0x14($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X14);
    // 0x802327C4: j           L_8023281C
    // 0x802327C8: ori         $v0, $v0, 0x9
    ctx->r2 = ctx->r2 | 0X9;
        goto L_8023281C;
    // 0x802327C8: ori         $v0, $v0, 0x9
    ctx->r2 = ctx->r2 | 0X9;
L_802327CC:
    // 0x802327CC: lhu         $v0, 0x14($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X14);
    // 0x802327D0: j           L_8023281C
    // 0x802327D4: ori         $v0, $v0, 0x21
    ctx->r2 = ctx->r2 | 0X21;
        goto L_8023281C;
    // 0x802327D4: ori         $v0, $v0, 0x21
    ctx->r2 = ctx->r2 | 0X21;
L_802327D8:
    // 0x802327D8: lbu         $v1, 0x13C($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X13C);
    // 0x802327DC: lbu         $v0, 0x13D($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X13D);
    // 0x802327E0: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x802327E4: bne         $v0, $zero, L_80232800
    if (ctx->r2 != 0) {
        // 0x802327E8: nop
    
            goto L_80232800;
    }
    // 0x802327E8: nop

    // 0x802327EC: beq         $a0, $zero, L_80232814
    if (ctx->r4 == 0) {
        // 0x802327F0: nop
    
            goto L_80232814;
    }
    // 0x802327F0: nop

    // 0x802327F4: lhu         $v0, 0x14($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X14);
    // 0x802327F8: j           L_8023281C
    // 0x802327FC: ori         $v0, $v0, 0x9
    ctx->r2 = ctx->r2 | 0X9;
        goto L_8023281C;
    // 0x802327FC: ori         $v0, $v0, 0x9
    ctx->r2 = ctx->r2 | 0X9;
L_80232800:
    // 0x80232800: bne         $a0, $zero, L_80232814
    if (ctx->r4 != 0) {
        // 0x80232804: nop
    
            goto L_80232814;
    }
    // 0x80232804: nop

    // 0x80232808: lhu         $v0, 0x14($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X14);
    // 0x8023280C: j           L_8023281C
    // 0x80232810: ori         $v0, $v0, 0x9
    ctx->r2 = ctx->r2 | 0X9;
        goto L_8023281C;
    // 0x80232810: ori         $v0, $v0, 0x9
    ctx->r2 = ctx->r2 | 0X9;
L_80232814:
    // 0x80232814: lhu         $v0, 0x14($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X14);
    // 0x80232818: ori         $v0, $v0, 0x11
    ctx->r2 = ctx->r2 | 0X11;
L_8023281C:
    // 0x8023281C: sh          $v0, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r2;
L_80232820:
    // 0x80232820: jr          $ra
    // 0x80232824: nop

    TRACE_RETURN()
    return;
    // 0x80232824: nop

;}
RECOMP_FUNC void func_80239168_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80239168: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8023916C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80239170: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x80239174: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80239178: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x8023917C: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x80239180: lui         $s5, 0x8024
    ctx->r21 = S32(0X8024 << 16);
    // 0x80239184: addiu       $s5, $s5, 0x10C8
    ctx->r21 = ADD32(ctx->r21, 0X10C8);
    // 0x80239188: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8023918C: addiu       $s2, $zero, 0x2600
    ctx->r18 = ADD32(0, 0X2600);
    // 0x80239190: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80239194: addiu       $s1, $zero, 0x2300
    ctx->r17 = ADD32(0, 0X2300);
    // 0x80239198: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x8023919C: lui         $s4, 0x8024
    ctx->r20 = S32(0X8024 << 16);
    // 0x802391A0: addiu       $s4, $s4, 0x3240
    ctx->r20 = ADD32(ctx->r20, 0X3240);
    // 0x802391A4: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
L_802391A8:
    // 0x802391A8: jal         0x8004EEAC
    // 0x802391AC: nop

    func_8004EEAC_2A2AC(rdram, ctx);
        goto after_0;
    // 0x802391AC: nop

    after_0:
    // 0x802391B0: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x802391B4: beq         $a1, $zero, L_80239294
    if (ctx->r5 == 0) {
        // 0x802391B8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80239294;
    }
    // 0x802391B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802391BC: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x802391C0: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
    // 0x802391C4: sb          $v0, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r2;
    // 0x802391C8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802391CC: sb          $v0, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r2;
    // 0x802391D0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802391D4: sb          $v0, 0xE($a1)
    MEM_B(0XE, ctx->r5) = ctx->r2;
    // 0x802391D8: sll         $v0, $s0, 24
    ctx->r2 = S32(ctx->r16 << 24);
    // 0x802391DC: sra         $v1, $v0, 24
    ctx->r3 = S32(SIGNED(ctx->r2) >> 24);
    // 0x802391E0: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x802391E4: sb          $zero, 0x3($a1)
    MEM_B(0X3, ctx->r5) = 0;
    // 0x802391E8: sb          $s0, 0xC($a1)
    MEM_B(0XC, ctx->r5) = ctx->r16;
    // 0x802391EC: sb          $s0, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r16;
    // 0x802391F0: beq         $v0, $zero, L_80239248
    if (ctx->r2 == 0) {
        // 0x802391F4: sb          $zero, 0xF($a1)
        MEM_B(0XF, ctx->r5) = 0;
            goto L_80239248;
    }
    // 0x802391F4: sb          $zero, 0xF($a1)
    MEM_B(0XF, ctx->r5) = 0;
    // 0x802391F8: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x802391FC: addu        $v0, $v0, $s5
    gpr jr_addend_80239204 = ctx->r2;
    ctx->r2 = ADD32(ctx->r2, ctx->r21);
    // 0x80239200: lw          $v0, 0x0($v0)
    ctx->r2 = ADD32(ctx->r2, 0X0);
    // 0x80239204: jr          $v0
    // 0x80239208: nop

    switch (jr_addend_80239204 >> 2) {
        case 0: goto L_8023921C; break;
        case 1: goto L_80239214; break;
        case 2: goto L_8023922C; break;
        case 3: goto L_8023920C; break;
        case 4: goto L_8023923C; break;
        default: switch_error(__func__, 0x80239204, 0x802410C8);
    }
    // 0x80239208: nop

L_8023920C:
    // 0x8023920C: j           L_80239240
    // 0x80239210: addiu       $v0, $zero, -0x400
    ctx->r2 = ADD32(0, -0X400);
        goto L_80239240;
    // 0x80239210: addiu       $v0, $zero, -0x400
    ctx->r2 = ADD32(0, -0X400);
L_80239214:
    // 0x80239214: j           L_80239230
    // 0x80239218: addiu       $v0, $zero, -0x200
    ctx->r2 = ADD32(0, -0X200);
        goto L_80239230;
    // 0x80239218: addiu       $v0, $zero, -0x200
    ctx->r2 = ADD32(0, -0X200);
L_8023921C:
    // 0x8023921C: addiu       $v0, $zero, 0x2000
    ctx->r2 = ADD32(0, 0X2000);
    // 0x80239220: sh          $zero, 0x14($a1)
    MEM_H(0X14, ctx->r5) = 0;
    // 0x80239224: j           L_80239248
    // 0x80239228: sh          $v0, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r2;
        goto L_80239248;
    // 0x80239228: sh          $v0, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r2;
L_8023922C:
    // 0x8023922C: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
L_80239230:
    // 0x80239230: sh          $v0, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r2;
    // 0x80239234: j           L_80239248
    // 0x80239238: sh          $s1, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r17;
        goto L_80239248;
    // 0x80239238: sh          $s1, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r17;
L_8023923C:
    // 0x8023923C: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
L_80239240:
    // 0x80239240: sh          $v0, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r2;
    // 0x80239244: sh          $s2, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r18;
L_80239248:
    // 0x80239248: addiu       $v0, $zero, -0x880
    ctx->r2 = ADD32(0, -0X880);
    // 0x8023924C: sh          $v0, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r2;
    // 0x80239250: lh          $v0, 0x14($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X14);
    // 0x80239254: lh          $v1, 0x16($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X16);
    // 0x80239258: lh          $a0, 0x18($a1)
    ctx->r4 = MEM_H(ctx->r5, 0X18);
    // 0x8023925C: sh          $zero, 0x58($a1)
    MEM_H(0X58, ctx->r5) = 0;
    // 0x80239260: sh          $zero, 0x56($a1)
    MEM_H(0X56, ctx->r5) = 0;
    // 0x80239264: sh          $zero, 0x54($a1)
    MEM_H(0X54, ctx->r5) = 0;
    // 0x80239268: sw          $s3, 0x308($a1)
    MEM_W(0X308, ctx->r5) = ctx->r19;
    // 0x8023926C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80239270: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80239274: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80239278: sw          $v0, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->r2;
    // 0x8023927C: sll         $v0, $s0, 24
    ctx->r2 = S32(ctx->r16 << 24);
    // 0x80239280: sra         $v0, $v0, 22
    ctx->r2 = S32(SIGNED(ctx->r2) >> 22);
    // 0x80239284: addu        $v0, $v0, $s4
    ctx->r2 = ADD32(ctx->r2, ctx->r20);
    // 0x80239288: sw          $v1, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->r3;
    // 0x8023928C: sw          $a0, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->r4;
    // 0x80239290: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
L_80239294:
    // 0x80239294: addiu       $v0, $s0, 0x1
    ctx->r2 = ADD32(ctx->r16, 0X1);
    // 0x80239298: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8023929C: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x802392A0: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x802392A4: slti        $v0, $v0, 0x5
    ctx->r2 = SIGNED(ctx->r2) < 0X5 ? 1 : 0;
    // 0x802392A8: bne         $v0, $zero, L_802391A8
    if (ctx->r2 != 0) {
        // 0x802392AC: nop
    
            goto L_802391A8;
    }
    // 0x802392AC: nop

    // 0x802392B0: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x802392B4: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x802392B8: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x802392BC: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x802392C0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x802392C4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802392C8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802392CC: jr          $ra
    // 0x802392D0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x802392D0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80227938_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227938: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022793C: lw          $v1, -0x3A40($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A40);
    // 0x80227940: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227944: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227948: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022794C: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    // 0x80227950: beq         $v1, $v0, L_80227988
    if (ctx->r3 == ctx->r2) {
        // 0x80227954: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80227988;
    }
    // 0x80227954: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227958: slti        $v0, $v1, 0x51
    ctx->r2 = SIGNED(ctx->r3) < 0X51 ? 1 : 0;
    // 0x8022795C: beq         $v0, $zero, L_80227974
    if (ctx->r2 == 0) {
        // 0x80227960: addiu       $v0, $zero, 0x14
        ctx->r2 = ADD32(0, 0X14);
            goto L_80227974;
    }
    // 0x80227960: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x80227964: beq         $v1, $v0, L_8022798C
    if (ctx->r3 == ctx->r2) {
        // 0x80227968: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022798C;
    }
    // 0x80227968: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022796C: j           L_802279A0
    // 0x80227970: nop

        goto L_802279A0;
    // 0x80227970: nop

L_80227974:
    // 0x80227974: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x80227978: beq         $v1, $v0, L_80227994
    if (ctx->r3 == ctx->r2) {
        // 0x8022797C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227994;
    }
    // 0x8022797C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227980: j           L_802279A0
    // 0x80227984: nop

        goto L_802279A0;
    // 0x80227984: nop

L_80227988:
    // 0x80227988: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022798C:
    // 0x8022798C: j           L_80227998
    // 0x80227990: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
        goto L_80227998;
    // 0x80227990: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
L_80227994:
    // 0x80227994: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
L_80227998:
    // 0x80227998: jal         0x80050294
    // 0x8022799C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x8022799C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
L_802279A0:
    // 0x802279A0: jal         0x8005044C
    // 0x802279A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_1;
    // 0x802279A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x802279A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802279AC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802279B0: jr          $ra
    // 0x802279B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802279B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802279B8: nop

    // 0x802279BC: nop

;}
RECOMP_FUNC void func_8023C368_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023C368: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023C36C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023C370: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023C374: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023C378: lbu         $v1, 0x6($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X6);
    // 0x8023C37C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023C380: beq         $v1, $v0, L_8023C3B4
    if (ctx->r3 == ctx->r2) {
        // 0x8023C384: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8023C3B4;
    }
    // 0x8023C384: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8023C388: beq         $v0, $zero, L_8023C3D4
    if (ctx->r2 == 0) {
        // 0x8023C38C: nop
    
            goto L_8023C3D4;
    }
    // 0x8023C38C: nop

    // 0x8023C390: bne         $v1, $zero, L_8023C3D4
    if (ctx->r3 != 0) {
        // 0x8023C394: nop
    
            goto L_8023C3D4;
    }
    // 0x8023C394: nop

    // 0x8023C398: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8023C39C: jal         0x8005FA7C
    // 0x8023C3A0: addiu       $a0, $a0, 0x1A0
    ctx->r4 = ADD32(ctx->r4, 0X1A0);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_0;
    // 0x8023C3A0: addiu       $a0, $a0, 0x1A0
    ctx->r4 = ADD32(ctx->r4, 0X1A0);
    after_0:
    // 0x8023C3A4: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x8023C3A8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023C3AC: j           L_8023C3D4
    // 0x8023C3B0: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
        goto L_8023C3D4;
    // 0x8023C3B0: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
L_8023C3B4:
    // 0x8023C3B4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8023C3B8: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x8023C3BC: bne         $v0, $zero, L_8023C3D4
    if (ctx->r2 != 0) {
        // 0x8023C3C0: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_8023C3D4;
    }
    // 0x8023C3C0: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x8023C3C4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8023C3C8: sb          $v1, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r3;
    // 0x8023C3CC: andi        $v0, $v0, 0x7F
    ctx->r2 = ctx->r2 & 0X7F;
    // 0x8023C3D0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8023C3D4:
    // 0x8023C3D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023C3D8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023C3DC: jr          $ra
    // 0x8023C3E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023C3E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022CB30_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CB30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022CB34: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022CB38: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022CB3C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022CB40: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022CB44: bne         $v0, $zero, L_8022CB98
    if (ctx->r2 != 0) {
        // 0x8022CB48: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_8022CB98;
    }
    // 0x8022CB48: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022CB4C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022CB50: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022CB54: jal         0x8004D5D4
    // 0x8022CB58: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8022CB58: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022CB5C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022CB60: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022CB64: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022CB68: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8022CB6C: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022CB70: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022CB74: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022CB78: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022CB7C: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022CB80: jal         0x80050294
    // 0x8022CB84: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x8022CB84: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    after_1:
    // 0x8022CB88: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022CB8C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022CB90: j           L_8022CBA0
    // 0x8022CB94: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_8022CBA0;
    // 0x8022CB94: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022CB98:
    // 0x8022CB98: jal         0x8005044C
    // 0x8022CB9C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_2;
    // 0x8022CB9C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
L_8022CBA0:
    // 0x8022CBA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022CBA4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022CBA8: jr          $ra
    // 0x8022CBAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022CBAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80229670_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229670: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80229674: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80229678: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022967C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80229680: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80229684: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80229688: jal         0x8009A3B4
    // 0x8022968C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022968C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x80229690: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80229694: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80229698: jal         0x8009A3B4
    // 0x8022969C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022969C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x802296A0: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x802296A4: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x802296A8: jal         0x8009A3B4
    // 0x802296AC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x802296AC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x802296B0: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x802296B4: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x802296B8: bne         $v1, $zero, L_80229714
    if (ctx->r3 != 0) {
        // 0x802296BC: sb          $v0, 0xAD($s0)
        MEM_B(0XAD, ctx->r16) = ctx->r2;
            goto L_80229714;
    }
    // 0x802296BC: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x802296C0: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x802296C4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802296C8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802296CC: ori         $v0, $v0, 0x42
    ctx->r2 = ctx->r2 | 0X42;
    // 0x802296D0: jal         0x8004D5D4
    // 0x802296D4: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_3;
    // 0x802296D4: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_3:
    // 0x802296D8: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x802296DC: addiu       $v0, $zero, 0xC00
    ctx->r2 = ADD32(0, 0XC00);
    // 0x802296E0: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x802296E4: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x802296E8: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x802296EC: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x802296F0: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x802296F4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802296F8: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x802296FC: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x80229700: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x80229704: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x80229708: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022970C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80229710: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
L_80229714:
    // 0x80229714: lb          $a0, 0xC($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XC);
    // 0x80229718: slti        $v0, $a0, 0x5
    ctx->r2 = SIGNED(ctx->r4) < 0X5 ? 1 : 0;
    // 0x8022971C: beq         $v0, $zero, L_8022977C
    if (ctx->r2 == 0) {
        // 0x80229720: sll         $v0, $a0, 4
        ctx->r2 = S32(ctx->r4 << 4);
            goto L_8022977C;
    }
    // 0x80229720: sll         $v0, $a0, 4
    ctx->r2 = S32(ctx->r4 << 4);
    // 0x80229724: lh          $v1, 0x18($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X18);
    // 0x80229728: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8022972C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80229730: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x80229734: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80229738: addiu       $v0, $v0, 0x1E00
    ctx->r2 = ADD32(ctx->r2, 0X1E00);
    // 0x8022973C: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80229740: beq         $v0, $zero, L_8022975C
    if (ctx->r2 == 0) {
        // 0x80229744: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_8022975C;
    }
    // 0x80229744: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80229748: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8022974C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80229750: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80229754: j           L_8022977C
    // 0x80229758: sh          $v0, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r2;
        goto L_8022977C;
    // 0x80229758: sh          $v0, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r2;
L_8022975C:
    // 0x8022975C: lh          $v0, 0x48($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X48);
    // 0x80229760: bgez        $v0, L_8022977C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80229764: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022977C;
    }
    // 0x80229764: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80229768: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x8022976C: sh          $v0, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r2;
    // 0x80229770: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229774: bgtzl       $v0, L_8022977C
    if (SIGNED(ctx->r2) > 0) {
        // 0x80229778: sh          $zero, 0x48($s0)
        MEM_H(0X48, ctx->r16) = 0;
            goto L_8022977C;
    }
    goto skip_0;
    // 0x80229778: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    skip_0:
L_8022977C:
    // 0x8022977C: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x80229780: lhu         $v1, 0x48($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X48);
    // 0x80229784: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x80229788: lbu         $a0, 0xAD($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XAD);
    // 0x8022978C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80229790: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x80229794: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229798: beq         $a1, $a0, L_802297B4
    if (ctx->r5 == ctx->r4) {
        // 0x8022979C: sw          $v0, 0x24($s0)
        MEM_W(0X24, ctx->r16) = ctx->r2;
            goto L_802297B4;
    }
    // 0x8022979C: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    // 0x802297A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802297A4: jal         0x80050294
    // 0x802297A8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_4;
    // 0x802297A8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
    // 0x802297AC: j           L_802297BC
    // 0x802297B0: nop

        goto L_802297BC;
    // 0x802297B0: nop

L_802297B4:
    // 0x802297B4: jal         0x8005044C
    // 0x802297B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_5;
    // 0x802297B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
L_802297BC:
    // 0x802297BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802297C0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802297C4: jr          $ra
    // 0x802297C8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802297C8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802297CC: nop

;}
RECOMP_FUNC void func_802291C8_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802291C8: lh          $v1, 0xE($a1)
    ctx->r3 = MEM_H(ctx->r5, 0XE);
    // 0x802291CC: slti        $v0, $v1, 0x8A
    ctx->r2 = SIGNED(ctx->r3) < 0X8A ? 1 : 0;
    // 0x802291D0: beq         $v0, $zero, L_8022932C
    if (ctx->r2 == 0) {
        // 0x802291D4: addiu       $v0, $zero, 0x49
        ctx->r2 = ADD32(0, 0X49);
            goto L_8022932C;
    }
    // 0x802291D4: addiu       $v0, $zero, 0x49
    ctx->r2 = ADD32(0, 0X49);
    // 0x802291D8: beq         $v1, $v0, L_802292D8
    if (ctx->r3 == ctx->r2) {
        // 0x802291DC: slti        $v0, $v1, 0x4A
        ctx->r2 = SIGNED(ctx->r3) < 0X4A ? 1 : 0;
            goto L_802292D8;
    }
    // 0x802291DC: slti        $v0, $v1, 0x4A
    ctx->r2 = SIGNED(ctx->r3) < 0X4A ? 1 : 0;
    // 0x802291E0: beq         $v0, $zero, L_8022922C
    if (ctx->r2 == 0) {
        // 0x802291E4: addiu       $v0, $zero, 0x30
        ctx->r2 = ADD32(0, 0X30);
            goto L_8022922C;
    }
    // 0x802291E4: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x802291E8: beq         $v1, $v0, L_80229288
    if (ctx->r3 == ctx->r2) {
        // 0x802291EC: slti        $v0, $v1, 0x31
        ctx->r2 = SIGNED(ctx->r3) < 0X31 ? 1 : 0;
            goto L_80229288;
    }
    // 0x802291EC: slti        $v0, $v1, 0x31
    ctx->r2 = SIGNED(ctx->r3) < 0X31 ? 1 : 0;
    // 0x802291F0: beql        $v0, $zero, L_80229210
    if (ctx->r2 == 0) {
        // 0x802291F4: addiu       $v0, $zero, 0x31
        ctx->r2 = ADD32(0, 0X31);
            goto L_80229210;
    }
    goto skip_0;
    // 0x802291F4: addiu       $v0, $zero, 0x31
    ctx->r2 = ADD32(0, 0X31);
    skip_0:
    // 0x802291F8: beq         $v1, $zero, L_80229274
    if (ctx->r3 == 0) {
        // 0x802291FC: addiu       $v0, $zero, 0x15
        ctx->r2 = ADD32(0, 0X15);
            goto L_80229274;
    }
    // 0x802291FC: addiu       $v0, $zero, 0x15
    ctx->r2 = ADD32(0, 0X15);
    // 0x80229200: beql        $v1, $v0, L_8022931C
    if (ctx->r3 == ctx->r2) {
        // 0x80229204: sh          $zero, 0x16($a1)
        MEM_H(0X16, ctx->r5) = 0;
            goto L_8022931C;
    }
    goto skip_1;
    // 0x80229204: sh          $zero, 0x16($a1)
    MEM_H(0X16, ctx->r5) = 0;
    skip_1:
    // 0x80229208: j           L_8022931C
    // 0x8022920C: nop

        goto L_8022931C;
    // 0x8022920C: nop

L_80229210:
    // 0x80229210: beql        $v1, $v0, L_802292C8
    if (ctx->r3 == ctx->r2) {
        // 0x80229214: addiu       $v1, $zero, -0x4
        ctx->r3 = ADD32(0, -0X4);
            goto L_802292C8;
    }
    goto skip_2;
    // 0x80229214: addiu       $v1, $zero, -0x4
    ctx->r3 = ADD32(0, -0X4);
    skip_2:
    // 0x80229218: addiu       $v0, $zero, 0x41
    ctx->r2 = ADD32(0, 0X41);
    // 0x8022921C: beql        $v1, $v0, L_8022931C
    if (ctx->r3 == ctx->r2) {
        // 0x80229220: sh          $zero, 0x12($a1)
        MEM_H(0X12, ctx->r5) = 0;
            goto L_8022931C;
    }
    goto skip_3;
    // 0x80229220: sh          $zero, 0x12($a1)
    MEM_H(0X12, ctx->r5) = 0;
    skip_3:
    // 0x80229224: j           L_8022931C
    // 0x80229228: nop

        goto L_8022931C;
    // 0x80229228: nop

L_8022922C:
    // 0x8022922C: addiu       $v0, $zero, 0x6A
    ctx->r2 = ADD32(0, 0X6A);
    // 0x80229230: beq         $v1, $v0, L_80229300
    if (ctx->r3 == ctx->r2) {
        // 0x80229234: slti        $v0, $v1, 0x6B
        ctx->r2 = SIGNED(ctx->r3) < 0X6B ? 1 : 0;
            goto L_80229300;
    }
    // 0x80229234: slti        $v0, $v1, 0x6B
    ctx->r2 = SIGNED(ctx->r3) < 0X6B ? 1 : 0;
    // 0x80229238: beq         $v0, $zero, L_80229258
    if (ctx->r2 == 0) {
        // 0x8022923C: addiu       $v0, $zero, 0x59
        ctx->r2 = ADD32(0, 0X59);
            goto L_80229258;
    }
    // 0x8022923C: addiu       $v0, $zero, 0x59
    ctx->r2 = ADD32(0, 0X59);
    // 0x80229240: beq         $v1, $v0, L_802292F8
    if (ctx->r3 == ctx->r2) {
        // 0x80229244: addiu       $v0, $zero, 0x5A
        ctx->r2 = ADD32(0, 0X5A);
            goto L_802292F8;
    }
    // 0x80229244: addiu       $v0, $zero, 0x5A
    ctx->r2 = ADD32(0, 0X5A);
    // 0x80229248: beq         $v1, $v0, L_802292A0
    if (ctx->r3 == ctx->r2) {
        // 0x8022924C: nop
    
            goto L_802292A0;
    }
    // 0x8022924C: nop

    // 0x80229250: j           L_8022931C
    // 0x80229254: nop

        goto L_8022931C;
    // 0x80229254: nop

L_80229258:
    // 0x80229258: addiu       $v0, $zero, 0x75
    ctx->r2 = ADD32(0, 0X75);
    // 0x8022925C: beq         $v1, $v0, L_802292BC
    if (ctx->r3 == ctx->r2) {
        // 0x80229260: addiu       $v0, $zero, 0x7A
        ctx->r2 = ADD32(0, 0X7A);
            goto L_802292BC;
    }
    // 0x80229260: addiu       $v0, $zero, 0x7A
    ctx->r2 = ADD32(0, 0X7A);
    // 0x80229264: beq         $v1, $v0, L_80229308
    if (ctx->r3 == ctx->r2) {
        // 0x80229268: nop
    
            goto L_80229308;
    }
    // 0x80229268: nop

    // 0x8022926C: j           L_8022931C
    // 0x80229270: nop

        goto L_8022931C;
    // 0x80229270: nop

L_80229274:
    // 0x80229274: addiu       $v0, $zero, -0x4
    ctx->r2 = ADD32(0, -0X4);
    // 0x80229278: sh          $zero, 0x12($a1)
    MEM_H(0X12, ctx->r5) = 0;
    // 0x8022927C: sh          $zero, 0x14($a1)
    MEM_H(0X14, ctx->r5) = 0;
    // 0x80229280: j           L_8022931C
    // 0x80229284: sh          $v0, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r2;
        goto L_8022931C;
    // 0x80229284: sh          $v0, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r2;
L_80229288:
    // 0x80229288: lhu         $v0, 0x4($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X4);
    // 0x8022928C: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x80229290: sh          $v1, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r3;
    // 0x80229294: ori         $v0, $v0, 0x8
    ctx->r2 = ctx->r2 | 0X8;
    // 0x80229298: j           L_8022931C
    // 0x8022929C: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
        goto L_8022931C;
    // 0x8022929C: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
L_802292A0:
    // 0x802292A0: lhu         $v0, 0x4($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X4);
    // 0x802292A4: sh          $zero, 0x16($a1)
    MEM_H(0X16, ctx->r5) = 0;
    // 0x802292A8: andi        $v0, $v0, 0xFFF7
    ctx->r2 = ctx->r2 & 0XFFF7;
    // 0x802292AC: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
    // 0x802292B0: lh          $v0, 0x14($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X14);
    // 0x802292B4: j           L_80229310
    // 0x802292B8: nor         $v0, $zero, $v0
    ctx->r2 = ~(0 | ctx->r2);
        goto L_80229310;
    // 0x802292B8: nor         $v0, $zero, $v0
    ctx->r2 = ~(0 | ctx->r2);
L_802292BC:
    // 0x802292BC: addiu       $v0, $zero, -0x4
    ctx->r2 = ADD32(0, -0X4);
    // 0x802292C0: j           L_8022931C
    // 0x802292C4: sh          $v0, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r2;
        goto L_8022931C;
    // 0x802292C4: sh          $v0, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r2;
L_802292C8:
    // 0x802292C8: lh          $v0, 0x14($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X14);
    // 0x802292CC: nor         $v0, $zero, $v0
    ctx->r2 = ~(0 | ctx->r2);
    // 0x802292D0: j           L_802292E8
    // 0x802292D4: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
        goto L_802292E8;
    // 0x802292D4: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
L_802292D8:
    // 0x802292D8: lh          $v0, 0x14($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X14);
    // 0x802292DC: addiu       $v1, $zero, -0x4
    ctx->r3 = ADD32(0, -0X4);
    // 0x802292E0: slt         $v0, $zero, $v0
    ctx->r2 = SIGNED(0) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x802292E4: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
L_802292E8:
    // 0x802292E8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x802292EC: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
    // 0x802292F0: j           L_8022931C
    // 0x802292F4: sh          $v0, 0x12($a1)
    MEM_H(0X12, ctx->r5) = ctx->r2;
        goto L_8022931C;
    // 0x802292F4: sh          $v0, 0x12($a1)
    MEM_H(0X12, ctx->r5) = ctx->r2;
L_802292F8:
    // 0x802292F8: j           L_8022931C
    // 0x802292FC: sh          $zero, 0x12($a1)
    MEM_H(0X12, ctx->r5) = 0;
        goto L_8022931C;
    // 0x802292FC: sh          $zero, 0x12($a1)
    MEM_H(0X12, ctx->r5) = 0;
L_80229300:
    // 0x80229300: j           L_8022931C
    // 0x80229304: sh          $zero, 0x14($a1)
    MEM_H(0X14, ctx->r5) = 0;
        goto L_8022931C;
    // 0x80229304: sh          $zero, 0x14($a1)
    MEM_H(0X14, ctx->r5) = 0;
L_80229308:
    // 0x80229308: lhu         $v0, 0x14($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X14);
    // 0x8022930C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
L_80229310:
    // 0x80229310: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x80229314: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80229318: sh          $v0, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r2;
L_8022931C:
    // 0x8022931C: lhu         $v0, 0xE($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0XE);
    // 0x80229320: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80229324: j           L_80229354
    // 0x80229328: sh          $v0, 0xE($a1)
    MEM_H(0XE, ctx->r5) = ctx->r2;
        goto L_80229354;
    // 0x80229328: sh          $v0, 0xE($a1)
    MEM_H(0XE, ctx->r5) = ctx->r2;
L_8022932C:
    // 0x8022932C: lhu         $v0, 0x4($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X4);
    // 0x80229330: sh          $zero, 0x12($a1)
    MEM_H(0X12, ctx->r5) = 0;
    // 0x80229334: sh          $zero, 0x14($a1)
    MEM_H(0X14, ctx->r5) = 0;
    // 0x80229338: sh          $zero, 0x16($a1)
    MEM_H(0X16, ctx->r5) = 0;
    // 0x8022933C: sh          $zero, 0xE($a1)
    MEM_H(0XE, ctx->r5) = 0;
    // 0x80229340: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    // 0x80229344: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
    // 0x80229348: lbu         $v0, 0xB($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XB);
    // 0x8022934C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80229350: sb          $v0, 0xB($a0)
    MEM_B(0XB, ctx->r4) = ctx->r2;
L_80229354:
    // 0x80229354: jr          $ra
    // 0x80229358: nop

    TRACE_RETURN()
    return;
    // 0x80229358: nop

;}
RECOMP_FUNC void func_8022E824_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E824: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8022E828: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x8022E82C: addu        $s5, $a0, $zero
    ctx->r21 = ADD32(ctx->r4, 0);
    // 0x8022E830: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8022E834: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x8022E838: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x8022E83C: lui         $s6, 0x408
    ctx->r22 = S32(0X408 << 16);
    // 0x8022E840: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x8022E844: lui         $fp, 0x8024
    ctx->r30 = S32(0X8024 << 16);
    // 0x8022E848: addiu       $fp, $fp, 0x11B0
    ctx->r30 = ADD32(ctx->r30, 0X11B0);
    // 0x8022E84C: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x8022E850: addu        $s4, $fp, $zero
    ctx->r20 = ADD32(ctx->r30, 0);
    // 0x8022E854: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x8022E858: lui         $s3, 0x8024
    ctx->r19 = S32(0X8024 << 16);
    // 0x8022E85C: addiu       $s3, $s3, -0x1650
    ctx->r19 = ADD32(ctx->r19, -0X1650);
    // 0x8022E860: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x8022E864: lui         $s7, 0x8024
    ctx->r23 = S32(0X8024 << 16);
    // 0x8022E868: addiu       $s7, $s7, 0x1170
    ctx->r23 = ADD32(ctx->r23, 0X1170);
    // 0x8022E86C: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8022E870: addu        $s1, $s7, $zero
    ctx->r17 = ADD32(ctx->r23, 0);
    // 0x8022E874: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x8022E878: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x8022E87C: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
L_8022E880:
    // 0x8022E880: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x8022E884: addu        $a1, $a1, $s0
    ctx->r5 = ADD32(ctx->r5, ctx->r16);
    // 0x8022E888: lb          $a1, -0x1658($a1)
    ctx->r5 = MEM_B(ctx->r5, -0X1658);
    // 0x8022E88C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022E890: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022E894: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022E898: addu        $at, $at, $s2
    ctx->r1 = ADD32(ctx->r1, ctx->r18);
    // 0x8022E89C: sw          $zero, 0x11B0($at)
    MEM_W(0X11B0, ctx->r1) = 0;
    // 0x8022E8A0: sll         $a1, $a1, 3
    ctx->r5 = S32(ctx->r5 << 3);
    // 0x8022E8A4: addu        $a1, $a1, $s5
    ctx->r5 = ADD32(ctx->r5, ctx->r21);
    // 0x8022E8A8: jal         0x8009A3B4
    // 0x8022E8AC: addiu       $a1, $a1, 0x180
    ctx->r5 = ADD32(ctx->r5, 0X180);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022E8AC: addiu       $a1, $a1, 0x180
    ctx->r5 = ADD32(ctx->r5, 0X180);
    after_0:
    // 0x8022E8B0: bne         $s0, $zero, L_8022E8E8
    if (ctx->r16 != 0) {
        // 0x8022E8B4: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8022E8E8;
    }
    // 0x8022E8B4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022E8B8: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
    // 0x8022E8BC: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x8022E8C0: lh          $a1, -0x1650($a1)
    ctx->r5 = MEM_H(ctx->r5, -0X1650);
    // 0x8022E8C4: lbu         $v0, 0x1($s5)
    ctx->r2 = MEM_BU(ctx->r21, 0X1);
    // 0x8022E8C8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022E8CC: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x8022E8D0: sw          $fp, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r30;
    // 0x8022E8D4: sw          $s6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r22;
    // 0x8022E8D8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8022E8DC: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8022E8E0: j           L_8022E910
    // 0x8022E8E4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
        goto L_8022E910;
    // 0x8022E8E4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
L_8022E8E8:
    // 0x8022E8E8: lh          $a1, 0x0($s3)
    ctx->r5 = MEM_H(ctx->r19, 0X0);
    // 0x8022E8EC: lbu         $v1, 0x1($s5)
    ctx->r3 = MEM_BU(ctx->r21, 0X1);
    // 0x8022E8F0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022E8F4: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x8022E8F8: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022E8FC: sw          $s4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r20;
    // 0x8022E900: sw          $s6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r22;
    // 0x8022E904: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8022E908: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8022E90C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
L_8022E910:
    // 0x8022E910: jal         0x80051E18
    // 0x8022E914: addiu       $s4, $s4, 0x8
    ctx->r20 = ADD32(ctx->r20, 0X8);
    func_80051E18_2D218(rdram, ctx);
        goto after_1;
    // 0x8022E914: addiu       $s4, $s4, 0x8
    ctx->r20 = ADD32(ctx->r20, 0X8);
    after_1:
    // 0x8022E918: addiu       $s3, $s3, 0x2
    ctx->r19 = ADD32(ctx->r19, 0X2);
    // 0x8022E91C: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x8022E920: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8022E924: sltiu       $v0, $s0, 0x8
    ctx->r2 = ctx->r16 < 0X8 ? 1 : 0;
    // 0x8022E928: bne         $v0, $zero, L_8022E880
    if (ctx->r2 != 0) {
        // 0x8022E92C: addiu       $s2, $s2, 0x8
        ctx->r18 = ADD32(ctx->r18, 0X8);
            goto L_8022E880;
    }
    // 0x8022E92C: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x8022E930: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x8022E934: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x8022E938: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x8022E93C: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x8022E940: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x8022E944: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x8022E948: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x8022E94C: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x8022E950: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8022E954: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8022E958: jr          $ra
    // 0x8022E95C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x8022E95C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_8023007C_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023007C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80230080: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80230084: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80230088: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8023008C: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x80230090: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80230094: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x80230098: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8023009C: sll         $a1, $s0, 24
    ctx->r5 = S32(ctx->r16 << 24);
L_802300A0:
    // 0x802300A0: sra         $a1, $a1, 21
    ctx->r5 = S32(SIGNED(ctx->r5) >> 21);
    // 0x802300A4: addu        $a0, $a1, $s2
    ctx->r4 = ADD32(ctx->r5, ctx->r18);
    // 0x802300A8: addu        $a1, $s1, $a1
    ctx->r5 = ADD32(ctx->r17, ctx->r5);
    // 0x802300AC: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x802300B0: addiu       $a1, $a1, 0x188
    ctx->r5 = ADD32(ctx->r5, 0X188);
    // 0x802300B4: jal         0x8009A3B4
    // 0x802300B8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x802300B8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x802300BC: addiu       $v0, $s0, 0x1
    ctx->r2 = ADD32(ctx->r16, 0X1);
    // 0x802300C0: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x802300C4: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x802300C8: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x802300CC: slti        $v0, $v0, 0x9
    ctx->r2 = SIGNED(ctx->r2) < 0X9 ? 1 : 0;
    // 0x802300D0: bne         $v0, $zero, L_802300A0
    if (ctx->r2 != 0) {
        // 0x802300D4: sll         $a1, $s0, 24
        ctx->r5 = S32(ctx->r16 << 24);
            goto L_802300A0;
    }
    // 0x802300D4: sll         $a1, $s0, 24
    ctx->r5 = S32(ctx->r16 << 24);
    // 0x802300D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802300DC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x802300E0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802300E4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802300E8: jr          $ra
    // 0x802300EC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802300EC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022F12C_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F12C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022F130: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022F134: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F138: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022F13C: lh          $v0, 0x4E2($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X4E2);
    // 0x8022F140: bne         $v0, $zero, L_8022F160
    if (ctx->r2 != 0) {
        // 0x8022F144: addiu       $v0, $zero, 0x5A
        ctx->r2 = ADD32(0, 0X5A);
            goto L_8022F160;
    }
    // 0x8022F144: addiu       $v0, $zero, 0x5A
    ctx->r2 = ADD32(0, 0X5A);
    // 0x8022F148: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022F14C: sh          $v0, 0x4E2($s0)
    MEM_H(0X4E2, ctx->r16) = ctx->r2;
    // 0x8022F150: sh          $zero, 0x4E4($s0)
    MEM_H(0X4E4, ctx->r16) = 0;
    // 0x8022F154: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022F158: j           L_8022F180
    // 0x8022F15C: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
        goto L_8022F180;
    // 0x8022F15C: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_8022F160:
    // 0x8022F160: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022F164: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x8022F168: lh          $a3, 0x48($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X48);
    // 0x8022F16C: jal         0x8004DA90
    // 0x8022F170: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x8022F170: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8022F174: lhu         $v0, 0x4E2($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4E2);
    // 0x8022F178: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022F17C: sh          $v0, 0x4E2($s0)
    MEM_H(0X4E2, ctx->r16) = ctx->r2;
L_8022F180:
    // 0x8022F180: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022F184: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022F188: jr          $ra
    // 0x8022F18C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022F18C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023C430_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023C430: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023C434: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8023C438: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x8023C43C: bne         $v0, $zero, L_8023C450
    if (ctx->r2 != 0) {
        // 0x8023C440: nop
    
            goto L_8023C450;
    }
    // 0x8023C440: nop

    // 0x8023C444: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8023C448: jal         0x8005FA7C
    // 0x8023C44C: addiu       $a0, $a0, 0x1DC
    ctx->r4 = ADD32(ctx->r4, 0X1DC);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_0;
    // 0x8023C44C: addiu       $a0, $a0, 0x1DC
    ctx->r4 = ADD32(ctx->r4, 0X1DC);
    after_0:
L_8023C450:
    // 0x8023C450: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8023C454: jr          $ra
    // 0x8023C458: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023C458: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225394_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225394: jr          $ra
    // 0x80225398: nop

    TRACE_RETURN()
    return;
    // 0x80225398: nop

;}
RECOMP_FUNC void func_8022A4E4_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A4E4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022A4E8: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022A4EC: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x8022A4F0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022A4F4: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x8022A4F8: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8022A4FC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022A500: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A504: andi        $v0, $s1, 0xFF
    ctx->r2 = ctx->r17 & 0XFF;
L_8022A508:
    // 0x8022A508: addu        $v0, $s3, $v0
    ctx->r2 = ADD32(ctx->r19, ctx->r2);
    // 0x8022A50C: lbu         $v0, 0x3($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3);
    // 0x8022A510: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
    // 0x8022A514: beq         $v0, $zero, L_8022A544
    if (ctx->r2 == 0) {
        // 0x8022A518: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_8022A544;
    }
    // 0x8022A518: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x8022A51C: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x8022A520: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_8022A524:
    // 0x8022A524: andi        $a1, $s1, 0xFF
    ctx->r5 = ctx->r17 & 0XFF;
    // 0x8022A528: jal         0x8022A59C
    // 0x8022A52C: andi        $a2, $s0, 0xFF
    ctx->r6 = ctx->r16 & 0XFF;
    func_8022A59C_ovl25(rdram, ctx);
        goto after_0;
    // 0x8022A52C: andi        $a2, $s0, 0xFF
    ctx->r6 = ctx->r16 & 0XFF;
    after_0:
    // 0x8022A530: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8022A534: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
    // 0x8022A538: sltu        $v0, $v0, $s2
    ctx->r2 = ctx->r2 < ctx->r18 ? 1 : 0;
    // 0x8022A53C: bne         $v0, $zero, L_8022A524
    if (ctx->r2 != 0) {
        // 0x8022A540: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_8022A524;
    }
    // 0x8022A540: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_8022A544:
    // 0x8022A544: andi        $v0, $s1, 0xFF
    ctx->r2 = ctx->r17 & 0XFF;
    // 0x8022A548: addu        $a0, $s3, $v0
    ctx->r4 = ADD32(ctx->r19, ctx->r2);
    // 0x8022A54C: lbu         $v1, 0x3($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X3);
    // 0x8022A550: sltiu       $v0, $v1, 0x40
    ctx->r2 = ctx->r3 < 0X40 ? 1 : 0;
    // 0x8022A554: beq         $v0, $zero, L_8022A560
    if (ctx->r2 == 0) {
        // 0x8022A558: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_8022A560;
    }
    // 0x8022A558: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8022A55C: sb          $v0, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r2;
L_8022A560:
    // 0x8022A560: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8022A564: andi        $v0, $s1, 0xFF
    ctx->r2 = ctx->r17 & 0XFF;
    // 0x8022A568: sltiu       $v0, $v0, 0x7
    ctx->r2 = ctx->r2 < 0X7 ? 1 : 0;
    // 0x8022A56C: bne         $v0, $zero, L_8022A508
    if (ctx->r2 != 0) {
        // 0x8022A570: andi        $v0, $s1, 0xFF
        ctx->r2 = ctx->r17 & 0XFF;
            goto L_8022A508;
    }
    // 0x8022A570: andi        $v0, $s1, 0xFF
    ctx->r2 = ctx->r17 & 0XFF;
    // 0x8022A574: lhu         $v0, 0x12($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X12);
    // 0x8022A578: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022A57C: sh          $v0, 0x12($s3)
    MEM_H(0X12, ctx->r19) = ctx->r2;
    // 0x8022A580: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022A584: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022A588: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022A58C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022A590: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A594: jr          $ra
    // 0x8022A598: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022A598: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_802348D4_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802348D4: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x802348D8: lh          $v1, 0x49C4($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X49C4);
    // 0x802348DC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802348E0: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x802348E4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802348E8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802348EC: lh          $v0, 0x14($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X14);
    // 0x802348F0: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x802348F4: lh          $a0, 0x49C6($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X49C6);
    // 0x802348F8: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x802348FC: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x80234900: lh          $v0, 0x16($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X16);
    // 0x80234904: subu        $a2, $a0, $v0
    ctx->r6 = SUB32(ctx->r4, ctx->r2);
    // 0x80234908: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8023490C: lh          $a0, 0x49C8($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X49C8);
    // 0x80234910: addiu       $v1, $v1, 0x687E
    ctx->r3 = ADD32(ctx->r3, 0X687E);
    // 0x80234914: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x80234918: lh          $v0, 0x18($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X18);
    // 0x8023491C: ori         $a1, $zero, 0xD0FC
    ctx->r5 = 0 | 0XD0FC;
    // 0x80234920: sltu        $v1, $a1, $v1
    ctx->r3 = ctx->r5 < ctx->r3 ? 1 : 0;
    // 0x80234924: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x80234928: bne         $v1, $zero, L_8023494C
    if (ctx->r3 != 0) {
        // 0x8023492C: sw          $a0, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r4;
            goto L_8023494C;
    }
    // 0x8023492C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80234930: addiu       $v0, $a2, 0x687E
    ctx->r2 = ADD32(ctx->r6, 0X687E);
    // 0x80234934: sltu        $v0, $a1, $v0
    ctx->r2 = ctx->r5 < ctx->r2 ? 1 : 0;
    // 0x80234938: bne         $v0, $zero, L_8023494C
    if (ctx->r2 != 0) {
        // 0x8023493C: addiu       $v0, $a0, 0x687E
        ctx->r2 = ADD32(ctx->r4, 0X687E);
            goto L_8023494C;
    }
    // 0x8023493C: addiu       $v0, $a0, 0x687E
    ctx->r2 = ADD32(ctx->r4, 0X687E);
    // 0x80234940: sltu        $v0, $a1, $v0
    ctx->r2 = ctx->r5 < ctx->r2 ? 1 : 0;
    // 0x80234944: beq         $v0, $zero, L_80234974
    if (ctx->r2 == 0) {
        // 0x80234948: addiu       $a0, $sp, 0x18
        ctx->r4 = ADD32(ctx->r29, 0X18);
            goto L_80234974;
    }
    // 0x80234948: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
L_8023494C:
    // 0x8023494C: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x80234950: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x80234954: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80234958: sra         $v0, $v0, 2
    ctx->r2 = S32(SIGNED(ctx->r2) >> 2);
    // 0x8023495C: sra         $v1, $v1, 2
    ctx->r3 = S32(SIGNED(ctx->r3) >> 2);
    // 0x80234960: sra         $a0, $a0, 2
    ctx->r4 = S32(SIGNED(ctx->r4) >> 2);
    // 0x80234964: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80234968: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x8023496C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80234970: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
L_80234974:
    // 0x80234974: jal         0x80032308
    // 0x80234978: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_80032308_D708(rdram, ctx);
        goto after_0;
    // 0x80234978: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_0:
    // 0x8023497C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80234980: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x80234984: jal         0x8009A3B4
    // 0x80234988: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80234988: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x8023498C: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x80234990: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80234994: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80234998: jr          $ra
    // 0x8023499C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8023499C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80239600_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80239600: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80239604: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80239608: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023960C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80239610: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80239614: lbu         $a0, 0xB($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XB);
    // 0x80239618: lui         $s1, 0x801C
    ctx->r17 = S32(0X801C << 16);
    // 0x8023961C: lhu         $s1, -0x3BBC($s1)
    ctx->r17 = MEM_HU(ctx->r17, -0X3BBC);
    // 0x80239620: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80239624: lhu         $v1, -0x3BBA($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X3BBA);
    // 0x80239628: sltiu       $v0, $a0, 0x6
    ctx->r2 = ctx->r4 < 0X6 ? 1 : 0;
    // 0x8023962C: beq         $v0, $zero, L_80239784
    if (ctx->r2 == 0) {
        // 0x80239630: sll         $v0, $a0, 2
        ctx->r2 = S32(ctx->r4 << 2);
            goto L_80239784;
    }
    // 0x80239630: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x80239634: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80239638: addu        $at, $at, $v0
    gpr jr_addend_80239640 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023963C: lw          $v0, 0x1108($at)
    ctx->r2 = ADD32(ctx->r1, 0X1108);
    // 0x80239640: jr          $v0
    // 0x80239644: nop

    switch (jr_addend_80239640 >> 2) {
        case 0: goto L_80239648; break;
        case 1: goto L_802396C4; break;
        case 2: goto L_802396FC; break;
        case 3: goto L_8023972C; break;
        case 4: goto L_8023976C; break;
        case 5: goto L_80239784; break;
        default: switch_error(__func__, 0x80239640, 0x80241108);
    }
    // 0x80239644: nop

L_80239648:
    // 0x80239648: sll         $a2, $v1, 16
    ctx->r6 = S32(ctx->r3 << 16);
    // 0x8023964C: sra         $v1, $a2, 16
    ctx->r3 = S32(SIGNED(ctx->r6) >> 16);
    // 0x80239650: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x80239654: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x80239658: bgez        $v1, L_80239664
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8023965C: sra         $a1, $v0, 16
        ctx->r5 = S32(SIGNED(ctx->r2) >> 16);
            goto L_80239664;
    }
    // 0x8023965C: sra         $a1, $v0, 16
    ctx->r5 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80239660: addiu       $a0, $v1, 0x3
    ctx->r4 = ADD32(ctx->r3, 0X3);
L_80239664:
    // 0x80239664: sra         $a0, $a0, 2
    ctx->r4 = S32(SIGNED(ctx->r4) >> 2);
    // 0x80239668: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x8023966C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80239670: slt         $v0, $v0, $a1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x80239674: beq         $v0, $zero, L_80239684
    if (ctx->r2 == 0) {
        // 0x80239678: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80239684;
    }
    // 0x80239678: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023967C: j           L_80239784
    // 0x80239680: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
        goto L_80239784;
    // 0x80239680: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
L_80239684:
    // 0x80239684: srl         $v0, $a2, 31
    ctx->r2 = S32(U32(ctx->r6) >> 31);
    // 0x80239688: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x8023968C: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x80239690: slt         $v0, $v0, $a1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x80239694: beq         $v0, $zero, L_802396A4
    if (ctx->r2 == 0) {
        // 0x80239698: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802396A4;
    }
    // 0x80239698: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023969C: j           L_80239784
    // 0x802396A0: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
        goto L_80239784;
    // 0x802396A0: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
L_802396A4:
    // 0x802396A4: slt         $v0, $a0, $a1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x802396A8: beq         $v0, $zero, L_802396B8
    if (ctx->r2 == 0) {
        // 0x802396AC: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_802396B8;
    }
    // 0x802396AC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802396B0: j           L_80239784
    // 0x802396B4: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
        goto L_80239784;
    // 0x802396B4: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
L_802396B8:
    // 0x802396B8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802396BC: j           L_80239784
    // 0x802396C0: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
        goto L_80239784;
    // 0x802396C0: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
L_802396C4:
    // 0x802396C4: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x802396C8: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802396CC: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x802396D0: bgez        $v1, L_802396DC
    if (SIGNED(ctx->r3) >= 0) {
        // 0x802396D4: sra         $a0, $v0, 16
        ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
            goto L_802396DC;
    }
    // 0x802396D4: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802396D8: addiu       $v1, $v1, 0x3
    ctx->r3 = ADD32(ctx->r3, 0X3);
L_802396DC:
    // 0x802396DC: sra         $v1, $v1, 2
    ctx->r3 = S32(SIGNED(ctx->r3) >> 2);
    // 0x802396E0: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x802396E4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802396E8: slt         $v0, $v0, $a0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x802396EC: bne         $v0, $zero, L_80239784
    if (ctx->r2 != 0) {
        // 0x802396F0: addiu       $a0, $zero, 0x4
        ctx->r4 = ADD32(0, 0X4);
            goto L_80239784;
    }
    // 0x802396F0: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x802396F4: j           L_80239758
    // 0x802396F8: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
        goto L_80239758;
    // 0x802396F8: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
L_802396FC:
    // 0x802396FC: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x80239700: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80239704: srl         $v0, $v0, 31
    ctx->r2 = S32(U32(ctx->r2) >> 31);
    // 0x80239708: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023970C: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x80239710: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80239714: sra         $v1, $v1, 1
    ctx->r3 = S32(SIGNED(ctx->r3) >> 1);
    // 0x80239718: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8023971C: bne         $v1, $zero, L_80239784
    if (ctx->r3 != 0) {
        // 0x80239720: addiu       $a0, $zero, 0x4
        ctx->r4 = ADD32(0, 0X4);
            goto L_80239784;
    }
    // 0x80239720: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x80239724: j           L_80239758
    // 0x80239728: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
        goto L_80239758;
    // 0x80239728: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
L_8023972C:
    // 0x8023972C: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x80239730: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80239734: bltzl       $v0, L_8023973C
    if (SIGNED(ctx->r2) < 0) {
        // 0x80239738: addiu       $v0, $v0, 0x3
        ctx->r2 = ADD32(ctx->r2, 0X3);
            goto L_8023973C;
    }
    goto skip_0;
    // 0x80239738: addiu       $v0, $v0, 0x3
    ctx->r2 = ADD32(ctx->r2, 0X3);
    skip_0:
L_8023973C:
    // 0x8023973C: sll         $v1, $s1, 16
    ctx->r3 = S32(ctx->r17 << 16);
    // 0x80239740: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80239744: sra         $v0, $v0, 2
    ctx->r2 = S32(SIGNED(ctx->r2) >> 2);
    // 0x80239748: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8023974C: bne         $v0, $zero, L_80239784
    if (ctx->r2 != 0) {
        // 0x80239750: addiu       $a0, $zero, 0x4
        ctx->r4 = ADD32(0, 0X4);
            goto L_80239784;
    }
    // 0x80239750: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x80239754: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
L_80239758:
    // 0x80239758: jal         0x800616FC
    // 0x8023975C: nop

    func_800616FC_3CAFC(rdram, ctx);
        goto after_0;
    // 0x8023975C: nop

    after_0:
    // 0x80239760: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80239764: j           L_80239784
    // 0x80239768: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
        goto L_80239784;
    // 0x80239768: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
L_8023976C:
    // 0x8023976C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80239770: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80239774: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
    // 0x80239778: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8023977C: beql        $v0, $zero, L_80239784
    if (ctx->r2 == 0) {
        // 0x80239780: sb          $zero, 0xB($s0)
        MEM_B(0XB, ctx->r16) = 0;
            goto L_80239784;
    }
    goto skip_1;
    // 0x80239780: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    skip_1:
L_80239784:
    // 0x80239784: bne         $s1, $zero, L_80239798
    if (ctx->r17 != 0) {
        // 0x80239788: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80239798;
    }
    // 0x80239788: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023978C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80239790: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80239794: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_80239798:
    // 0x80239798: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8023979C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802397A0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802397A4: jr          $ra
    // 0x802397A8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802397A8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802374BC_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802374BC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802374C0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802374C4: lui         $s0, 0x801A
    ctx->r16 = S32(0X801A << 16);
    // 0x802374C8: lw          $s0, -0x5858($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X5858);
    // 0x802374CC: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x802374D0: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    // 0x802374D4: sll         $a0, $a0, 5
    ctx->r4 = S32(ctx->r4 << 5);
    // 0x802374D8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802374DC: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x802374E0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x802374E4: sb          $v0, 0x7($s0)
    MEM_B(0X7, ctx->r16) = ctx->r2;
    // 0x802374E8: lbu         $v1, 0x7($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X7);
    // 0x802374EC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802374F0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802374F4: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x802374F8: sb          $a0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r4;
    // 0x802374FC: sb          $a0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r4;
    // 0x80237500: sb          $a0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r4;
    // 0x80237504: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80237508: sb          $v1, 0x7($s0)
    MEM_B(0X7, ctx->r16) = ctx->r3;
    // 0x8023750C: lui         $s1, 0x801A
    ctx->r17 = S32(0X801A << 16);
    // 0x80237510: lw          $s1, -0x5858($s1)
    ctx->r17 = MEM_W(ctx->r17, -0X5858);
    // 0x80237514: addiu       $a3, $zero, 0x2F
    ctx->r7 = ADD32(0, 0X2F);
    // 0x80237518: addiu       $v0, $zero, 0x140
    ctx->r2 = ADD32(0, 0X140);
    // 0x8023751C: sh          $v0, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r2;
    // 0x80237520: addiu       $v0, $zero, 0xF0
    ctx->r2 = ADD32(0, 0XF0);
    // 0x80237524: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x80237528: sh          $zero, 0x8($s0)
    MEM_H(0X8, ctx->r16) = 0;
    // 0x8023752C: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
    // 0x80237530: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80237534: addiu       $s1, $s1, 0x28
    ctx->r17 = ADD32(ctx->r17, 0X28);
    // 0x80237538: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x8023753C: sw          $s1, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r17;
    // 0x80237540: jal         0x8003055C
    // 0x80237544: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8003055C_B95C(rdram, ctx);
        goto after_0;
    // 0x80237544: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_0:
    // 0x80237548: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8023754C: lw          $a0, 0x497C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X497C);
    // 0x80237550: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x80237554: lw          $v0, -0x5858($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5858);
    // 0x80237558: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8023755C: addiu       $v0, $v0, 0x28
    ctx->r2 = ADD32(ctx->r2, 0X28);
    // 0x80237560: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x80237564: sw          $v0, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r2;
    // 0x80237568: jal         0x8002FD30
    // 0x8023756C: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    func_8002FD30_B130(rdram, ctx);
        goto after_1;
    // 0x8023756C: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    after_1:
    // 0x80237570: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80237574: lw          $a0, 0x497C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X497C);
    // 0x80237578: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023757C: jal         0x8002FD30
    // 0x80237580: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    func_8002FD30_B130(rdram, ctx);
        goto after_2;
    // 0x80237580: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    after_2:
    // 0x80237584: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80237588: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8023758C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80237590: jr          $ra
    // 0x80237594: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80237594: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80237598: nop

    // 0x8023759C: nop

;}
RECOMP_FUNC void func_8023A328_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023A328: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023A32C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023A330: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023A334: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023A338: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x8023A33C: bne         $v0, $zero, L_8023A384
    if (ctx->r2 != 0) {
        // 0x8023A340: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_8023A384;
    }
    // 0x8023A340: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8023A344: jal         0x8023AB14
    // 0x8023A348: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8023AB14_ovl25(rdram, ctx);
        goto after_0;
    // 0x8023A348: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x8023A34C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023A350: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023A354: sb          $v0, 0x4468($at)
    MEM_B(0X4468, ctx->r1) = ctx->r2;
    // 0x8023A358: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x8023A35C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023A360: sb          $v0, 0x4497($at)
    MEM_B(0X4497, ctx->r1) = ctx->r2;
    // 0x8023A364: jal         0x8004F488
    // 0x8023A368: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    func_8004F488_2A888(rdram, ctx);
        goto after_1;
    // 0x8023A368: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    after_1:
    // 0x8023A36C: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8023A370: jal         0x8005FA7C
    // 0x8023A374: addiu       $a0, $a0, -0xBC4
    ctx->r4 = ADD32(ctx->r4, -0XBC4);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_2;
    // 0x8023A374: addiu       $a0, $a0, -0xBC4
    ctx->r4 = ADD32(ctx->r4, -0XBC4);
    after_2:
    // 0x8023A378: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8023A37C: jal         0x8023A980
    // 0x8023A380: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8023A980_ovl25(rdram, ctx);
        goto after_3;
    // 0x8023A380: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_3:
L_8023A384:
    // 0x8023A384: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023A388: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023A38C: jr          $ra
    // 0x8023A390: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023A390: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802399F0_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802399F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802399F4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802399F8: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x802399FC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80239A00: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80239A04: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80239A08: lw          $v0, -0xC80($at)
    ctx->r2 = MEM_W(ctx->r1, -0XC80);
    // 0x80239A0C: jalr        $v0
    // 0x80239A10: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80239A10: nop

    after_0:
    // 0x80239A14: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80239A18: jr          $ra
    // 0x80239A1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80239A1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80238390_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80238390: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80238394: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80238398: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023839C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802383A0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802383A4: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x802383A8: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x802383AC: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x802383B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802383B4: beq         $v1, $v0, L_802384C8
    if (ctx->r3 == ctx->r2) {
        // 0x802383B8: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_802384C8;
    }
    // 0x802383B8: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x802383BC: beql        $v0, $zero, L_802383D4
    if (ctx->r2 == 0) {
        // 0x802383C0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802383D4;
    }
    goto skip_0;
    // 0x802383C0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x802383C4: beq         $v1, $zero, L_802383EC
    if (ctx->r3 == 0) {
        // 0x802383C8: nop
    
            goto L_802383EC;
    }
    // 0x802383C8: nop

    // 0x802383CC: j           L_80238544
    // 0x802383D0: nop

        goto L_80238544;
    // 0x802383D0: nop

L_802383D4:
    // 0x802383D4: beq         $v1, $v0, L_802384EC
    if (ctx->r3 == ctx->r2) {
        // 0x802383D8: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_802384EC;
    }
    // 0x802383D8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802383DC: beq         $v1, $v0, L_80238510
    if (ctx->r3 == ctx->r2) {
        // 0x802383E0: nop
    
            goto L_80238510;
    }
    // 0x802383E0: nop

    // 0x802383E4: j           L_80238544
    // 0x802383E8: nop

        goto L_80238544;
    // 0x802383E8: nop

L_802383EC:
    // 0x802383EC: jal         0x80238DD4
    // 0x802383F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80238DD4_ovl25(rdram, ctx);
        goto after_0;
    // 0x802383F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x802383F4: addiu       $a0, $s1, 0x2C
    ctx->r4 = ADD32(ctx->r17, 0X2C);
    // 0x802383F8: lbu         $v1, 0x0($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X0);
    // 0x802383FC: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x80238400: lbu         $a3, 0x4A6D($a3)
    ctx->r7 = MEM_BU(ctx->r7, 0X4A6D);
    // 0x80238404: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x80238408: addiu       $v0, $zero, -0x5C1
    ctx->r2 = ADD32(0, -0X5C1);
    // 0x8023840C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80238410: sh          $v0, 0x49C6($at)
    MEM_H(0X49C6, ctx->r1) = ctx->r2;
    // 0x80238414: addiu       $v0, $zero, -0x100
    ctx->r2 = ADD32(0, -0X100);
    // 0x80238418: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023841C: sh          $v0, 0x49C8($at)
    MEM_H(0X49C8, ctx->r1) = ctx->r2;
    // 0x80238420: lui         $v0, 0xFA3F
    ctx->r2 = S32(0XFA3F << 16);
    // 0x80238424: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80238428: sw          $v0, 0x49D0($at)
    MEM_W(0X49D0, ctx->r1) = ctx->r2;
    // 0x8023842C: lui         $v0, 0xFF00
    ctx->r2 = S32(0XFF00 << 16);
    // 0x80238430: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80238434: sw          $v0, 0x49D4($at)
    MEM_W(0X49D4, ctx->r1) = ctx->r2;
    // 0x80238438: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x8023843C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80238440: sh          $zero, 0x49C4($at)
    MEM_H(0X49C4, ctx->r1) = 0;
    // 0x80238444: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80238448: sw          $zero, 0x49CC($at)
    MEM_W(0X49CC, ctx->r1) = 0;
    // 0x8023844C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80238450: sh          $zero, 0x4A08($at)
    MEM_H(0X4A08, ctx->r1) = 0;
    // 0x80238454: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80238458: sh          $zero, 0x4A04($at)
    MEM_H(0X4A04, ctx->r1) = 0;
    // 0x8023845C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80238460: sh          $v0, 0x4A06($at)
    MEM_H(0X4A06, ctx->r1) = ctx->r2;
    // 0x80238464: ori         $v1, $v1, 0x3
    ctx->r3 = ctx->r3 | 0X3;
    // 0x80238468: ori         $a3, $a3, 0x40
    ctx->r7 = ctx->r7 | 0X40;
    // 0x8023846C: sb          $v1, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r3;
    // 0x80238470: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80238474: sb          $a3, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r7;
    // 0x80238478: jal         0x8009A3B4
    // 0x8023847C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8023847C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x80238480: addiu       $a0, $s1, 0x34
    ctx->r4 = ADD32(ctx->r17, 0X34);
    // 0x80238484: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    // 0x80238488: jal         0x8009A3B4
    // 0x8023848C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8023848C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_2:
    // 0x80238490: addiu       $a0, $s1, 0x5C
    ctx->r4 = ADD32(ctx->r17, 0X5C);
    // 0x80238494: addiu       $a1, $s1, 0x54
    ctx->r5 = ADD32(ctx->r17, 0X54);
    // 0x80238498: jal         0x8009A3B4
    // 0x8023849C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8023849C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x802384A0: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x802384A4: lw          $v1, 0x3230($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3230);
    // 0x802384A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802384AC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802384B0: sb          $v0, 0x4A26($at)
    MEM_B(0X4A26, ctx->r1) = ctx->r2;
    // 0x802384B4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802384B8: sb          $zero, 0x4A24($at)
    MEM_B(0X4A24, ctx->r1) = 0;
    // 0x802384BC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802384C0: j           L_80238500
    // 0x802384C4: sw          $v1, 0x4A70($at)
    MEM_W(0X4A70, ctx->r1) = ctx->r3;
        goto L_80238500;
    // 0x802384C4: sw          $v1, 0x4A70($at)
    MEM_W(0X4A70, ctx->r1) = ctx->r3;
L_802384C8:
    // 0x802384C8: jal         0x8006FF84
    // 0x802384CC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_4;
    // 0x802384CC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_4:
    // 0x802384D0: beq         $v0, $zero, L_80238544
    if (ctx->r2 == 0) {
        // 0x802384D4: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80238544;
    }
    // 0x802384D4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802384D8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802384DC: sb          $v0, 0x49B8($at)
    MEM_B(0X49B8, ctx->r1) = ctx->r2;
    // 0x802384E0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802384E4: j           L_80238500
    // 0x802384E8: sb          $zero, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = 0;
        goto L_80238500;
    // 0x802384E8: sb          $zero, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = 0;
L_802384EC:
    // 0x802384EC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802384F0: lbu         $v0, 0x49B9($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X49B9);
    // 0x802384F4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802384F8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802384FC: sb          $v0, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = ctx->r2;
L_80238500:
    // 0x80238500: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80238504: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80238508: j           L_80238544
    // 0x8023850C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_80238544;
    // 0x8023850C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80238510:
    // 0x80238510: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80238514: lbu         $v0, 0x4A6D($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4A6D);
    // 0x80238518: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023851C: sh          $zero, -0xCBE($at)
    MEM_H(-0XCBE, ctx->r1) = 0;
    // 0x80238520: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x80238524: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x80238528: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023852C: sb          $v0, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r2;
    // 0x80238530: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80238534: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80238538: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8023853C: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80238540: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
L_80238544:
    // 0x80238544: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80238548: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023854C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80238550: jr          $ra
    // 0x80238554: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80238554: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80225790_ovl26(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225790: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225794: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80225798: jal         0x8004F5C4
    // 0x8022579C: nop

    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x8022579C: nop

    after_0:
    // 0x802257A0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802257A4: jr          $ra
    // 0x802257A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802257A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802264A8_ovl26(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802264A8: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x802264AC: bne         $v0, $zero, L_8022654C
    if (ctx->r2 != 0) {
        // 0x802264B0: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_8022654C;
    }
    // 0x802264B0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802264B4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802264B8: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x802264BC: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    // 0x802264C0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802264C4: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x802264C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802264CC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802264D0: sb          $v0, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r2;
    // 0x802264D4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802264D8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802264DC: sh          $zero, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = 0;
    // 0x802264E0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802264E4: sh          $zero, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = 0;
    // 0x802264E8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802264EC: sh          $zero, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = 0;
    // 0x802264F0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802264F4: sh          $zero, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = 0;
    // 0x802264F8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802264FC: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x80226500: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226504: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x80226508: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022650C: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    // 0x80226510: lw          $v1, 0x24($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X24);
    // 0x80226514: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80226518: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x8022651C: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80226520: lw          $a1, 0x28($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X28);
    // 0x80226524: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x80226528: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022652C: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x80226530: lw          $a1, 0x2C($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X2C);
    // 0x80226534: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x80226538: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022653C: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x80226540: sb          $zero, 0xA($a1)
    MEM_B(0XA, ctx->r5) = 0;
    // 0x80226544: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80226548: sb          $v1, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r3;
L_8022654C:
    // 0x8022654C: jr          $ra
    // 0x80226550: nop

    TRACE_RETURN()
    return;
    // 0x80226550: nop

;}
RECOMP_FUNC void func_80226880_ovl26(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226880: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226884: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226888: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022688C: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x80226890: addiu       $a1, $a1, -0x75A0
    ctx->r5 = ADD32(ctx->r5, -0X75A0);
    // 0x80226894: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226898: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
    // 0x8022689C: beq         $a0, $zero, L_8022692C
    if (ctx->r4 == 0) {
        // 0x802268A0: nop
    
            goto L_8022692C;
    }
    // 0x802268A0: nop

    // 0x802268A4: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x802268A8: lw          $v1, -0x75A0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X75A0);
    // 0x802268AC: lh          $v0, 0x2($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X2);
    // 0x802268B0: beq         $v0, $zero, L_8022692C
    if (ctx->r2 == 0) {
        // 0x802268B4: nop
    
            goto L_8022692C;
    }
    // 0x802268B4: nop

    // 0x802268B8: bgez        $v0, L_802268C8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802268BC: sll         $v0, $v0, 2
        ctx->r2 = S32(ctx->r2 << 2);
            goto L_802268C8;
    }
    // 0x802268BC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802268C0: j           L_802268F0
    // 0x802268C4: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
        goto L_802268F0;
    // 0x802268C4: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
L_802268C8:
    // 0x802268C8: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802268CC: lhu         $v0, -0x759C($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X759C);
    // 0x802268D0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802268D4: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802268D8: sh          $v0, -0x759C($at)
    MEM_H(-0X759C, ctx->r1) = ctx->r2;
    // 0x802268DC: lh          $v1, 0x2($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X2);
    // 0x802268E0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802268E4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802268E8: bne         $v0, $v1, L_8022692C
    if (ctx->r2 != ctx->r3) {
        // 0x802268EC: addiu       $v0, $a0, 0x4
        ctx->r2 = ADD32(ctx->r4, 0X4);
            goto L_8022692C;
    }
    // 0x802268EC: addiu       $v0, $a0, 0x4
    ctx->r2 = ADD32(ctx->r4, 0X4);
L_802268F0:
    // 0x802268F0: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x802268F4: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802268F8: lw          $v0, -0x75A0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X75A0);
    // 0x802268FC: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x80226900: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80226904: sh          $zero, -0x759C($at)
    MEM_H(-0X759C, ctx->r1) = 0;
    // 0x80226908: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x8022690C: addiu       $a2, $zero, 0x33
    ctx->r6 = ADD32(0, 0X33);
    // 0x80226910: jal         0x8003B85C
    // 0x80226914: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_0;
    // 0x80226914: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_0:
    // 0x80226918: lw          $a0, 0x88($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X88);
    // 0x8022691C: lui         $a1, 0x11
    ctx->r5 = S32(0X11 << 16);
    // 0x80226920: ori         $a1, $a1, 0x10
    ctx->r5 = ctx->r5 | 0X10;
    // 0x80226924: jal         0x8003B840
    // 0x80226928: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_1;
    // 0x80226928: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_1:
L_8022692C:
    // 0x8022692C: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x80226930: addiu       $a1, $a1, -0x7598
    ctx->r5 = ADD32(ctx->r5, -0X7598);
    // 0x80226934: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
    // 0x80226938: beq         $a0, $zero, L_802269C8
    if (ctx->r4 == 0) {
        // 0x8022693C: nop
    
            goto L_802269C8;
    }
    // 0x8022693C: nop

    // 0x80226940: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x80226944: lw          $v1, -0x7598($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7598);
    // 0x80226948: lh          $v0, 0x2($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X2);
    // 0x8022694C: beq         $v0, $zero, L_802269C8
    if (ctx->r2 == 0) {
        // 0x80226950: nop
    
            goto L_802269C8;
    }
    // 0x80226950: nop

    // 0x80226954: bgez        $v0, L_80226964
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80226958: sll         $v0, $v0, 2
        ctx->r2 = S32(ctx->r2 << 2);
            goto L_80226964;
    }
    // 0x80226958: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022695C: j           L_8022698C
    // 0x80226960: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
        goto L_8022698C;
    // 0x80226960: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
L_80226964:
    // 0x80226964: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80226968: lhu         $v0, -0x7594($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X7594);
    // 0x8022696C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226970: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80226974: sh          $v0, -0x7594($at)
    MEM_H(-0X7594, ctx->r1) = ctx->r2;
    // 0x80226978: lh          $v1, 0x2($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X2);
    // 0x8022697C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80226980: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80226984: bne         $v0, $v1, L_802269C8
    if (ctx->r2 != ctx->r3) {
        // 0x80226988: addiu       $v0, $a0, 0x4
        ctx->r2 = ADD32(ctx->r4, 0X4);
            goto L_802269C8;
    }
    // 0x80226988: addiu       $v0, $a0, 0x4
    ctx->r2 = ADD32(ctx->r4, 0X4);
L_8022698C:
    // 0x8022698C: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x80226990: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80226994: lw          $v0, -0x7598($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7598);
    // 0x80226998: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x8022699C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802269A0: sh          $zero, -0x7594($at)
    MEM_H(-0X7594, ctx->r1) = 0;
    // 0x802269A4: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x802269A8: addiu       $a2, $zero, 0x33
    ctx->r6 = ADD32(0, 0X33);
    // 0x802269AC: jal         0x8003B85C
    // 0x802269B0: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_2;
    // 0x802269B0: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_2:
    // 0x802269B4: lw          $a0, 0x88($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X88);
    // 0x802269B8: lui         $a1, 0x13
    ctx->r5 = S32(0X13 << 16);
    // 0x802269BC: ori         $a1, $a1, 0x12
    ctx->r5 = ctx->r5 | 0X12;
    // 0x802269C0: jal         0x8003B840
    // 0x802269C4: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_3;
    // 0x802269C4: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_3:
L_802269C8:
    // 0x802269C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802269CC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802269D0: jr          $ra
    // 0x802269D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802269D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802260B4_ovl26(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802260B4: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x802260B8: bne         $v0, $zero, L_80226180
    if (ctx->r2 != 0) {
        // 0x802260BC: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80226180;
    }
    // 0x802260BC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802260C0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802260C4: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x802260C8: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    // 0x802260CC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802260D0: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x802260D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802260D8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802260DC: sb          $v0, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r2;
    // 0x802260E0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802260E4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802260E8: sh          $zero, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = 0;
    // 0x802260EC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802260F0: sh          $zero, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = 0;
    // 0x802260F4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802260F8: sh          $zero, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = 0;
    // 0x802260FC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226100: sh          $zero, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = 0;
    // 0x80226104: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226108: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x8022610C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226110: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x80226114: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226118: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    // 0x8022611C: lw          $v1, 0x24($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X24);
    // 0x80226120: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80226124: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x80226128: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8022612C: lw          $a1, 0x28($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X28);
    // 0x80226130: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x80226134: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x80226138: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x8022613C: lui         $v0, 0xFE48
    ctx->r2 = S32(0XFE48 << 16);
    // 0x80226140: sw          $v0, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->r2;
    // 0x80226144: lui         $v0, 0xFE70
    ctx->r2 = S32(0XFE70 << 16);
    // 0x80226148: sb          $zero, 0xA($a1)
    MEM_B(0XA, ctx->r5) = 0;
    // 0x8022614C: sw          $v0, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->r2;
    // 0x80226150: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80226154: sb          $v1, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r3;
    // 0x80226158: lw          $a1, 0x2C($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X2C);
    // 0x8022615C: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x80226160: sb          $zero, 0x9($a1)
    MEM_B(0X9, ctx->r5) = 0;
    // 0x80226164: sb          $zero, 0xA($a1)
    MEM_B(0XA, ctx->r5) = 0;
    // 0x80226168: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022616C: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x80226170: lw          $v1, 0x30($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X30);
    // 0x80226174: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80226178: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022617C: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
L_80226180:
    // 0x80226180: jr          $ra
    // 0x80226184: nop

    TRACE_RETURN()
    return;
    // 0x80226184: nop

;}
RECOMP_FUNC void func_8022586C_ovl26(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022586C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225870: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80225874: jal         0x8004F5C4
    // 0x80225878: nop

    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x80225878: nop

    after_0:
    // 0x8022587C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80225880: jr          $ra
    // 0x80225884: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225884: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80225888: nop

    // 0x8022588C: nop

;}
RECOMP_FUNC void func_802257AC_ovl26(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802257AC: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x802257B0: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x802257B4: sb          $v1, 0xD($a0)
    MEM_B(0XD, ctx->r4) = ctx->r3;
    // 0x802257B8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802257BC: jr          $ra
    // 0x802257C0: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x802257C0: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_80225684_ovl26(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225684: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80225688: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022568C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225690: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80225694: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x80225698: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022569C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802256A0: jal         0x8004F144
    // 0x802256A4: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x802256A4: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    after_0:
    // 0x802256A8: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x802256AC: bne         $a1, $zero, L_802256BC
    if (ctx->r5 != 0) {
        // 0x802256B0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802256BC;
    }
    // 0x802256B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802256B4: j           L_802256FC
    // 0x802256B8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_802256FC;
    // 0x802256B8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_802256BC:
    // 0x802256BC: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x802256C0: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x802256C4: sb          $v0, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r2;
    // 0x802256C8: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x802256CC: lbu         $v1, 0x6($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X6);
    // 0x802256D0: sh          $v0, 0x1C($a1)
    MEM_H(0X1C, ctx->r5) = ctx->r2;
    // 0x802256D4: lhu         $v0, 0x2($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X2);
    // 0x802256D8: sh          $v0, 0x1E($a1)
    MEM_H(0X1E, ctx->r5) = ctx->r2;
    // 0x802256DC: lhu         $a0, 0x4($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X4);
    // 0x802256E0: ori         $v1, $v1, 0x20
    ctx->r3 = ctx->r3 | 0X20;
    // 0x802256E4: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
    // 0x802256E8: sb          $zero, 0xC($v0)
    MEM_B(0XC, ctx->r2) = 0;
    // 0x802256EC: sb          $s1, 0x3($v0)
    MEM_B(0X3, ctx->r2) = ctx->r17;
    // 0x802256F0: sb          $v1, 0x6($v0)
    MEM_B(0X6, ctx->r2) = ctx->r3;
    // 0x802256F4: sh          $s2, 0x28($v0)
    MEM_H(0X28, ctx->r2) = ctx->r18;
    // 0x802256F8: sh          $a0, 0x20($v0)
    MEM_H(0X20, ctx->r2) = ctx->r4;
L_802256FC:
    // 0x802256FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80225700: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80225704: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80225708: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022570C: jr          $ra
    // 0x80225710: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80225710: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802257C4_ovl26(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802257C4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802257C8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802257CC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802257D0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802257D4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802257D8: lbu         $v0, 0xD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XD);
    // 0x802257DC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802257E0: sb          $v0, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r2;
    // 0x802257E4: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x802257E8: bne         $v0, $zero, L_80225858
    if (ctx->r2 != 0) {
        // 0x802257EC: nop
    
            goto L_80225858;
    }
    // 0x802257EC: nop

    // 0x802257F0: jal         0x8004F144
    // 0x802257F4: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x802257F4: nop

    after_0:
    // 0x802257F8: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x802257FC: beq         $s0, $zero, L_80225850
    if (ctx->r16 == 0) {
        // 0x80225800: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_80225850;
    }
    // 0x80225800: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80225804: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x80225808: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    // 0x8022580C: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x80225810: lbu         $a0, 0x3($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X3);
    // 0x80225814: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x80225818: sb          $v1, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r3;
    // 0x8022581C: sw          $s1, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r17;
    // 0x80225820: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x80225824: sb          $a0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r4;
    // 0x80225828: jal         0x800A3450
    // 0x8022582C: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x8022582C: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
    after_1:
    // 0x80225830: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80225834: sh          $v0, 0x3E($s0)
    MEM_H(0X3E, ctx->r16) = ctx->r2;
    // 0x80225838: lh          $v0, 0x28($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X28);
    // 0x8022583C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80225840: sw          $v0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r2;
    // 0x80225844: lh          $v0, 0x1E($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X1E);
    // 0x80225848: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022584C: sw          $v0, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r2;
L_80225850:
    // 0x80225850: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80225854: sb          $v0, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r2;
L_80225858:
    // 0x80225858: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022585C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80225860: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225864: jr          $ra
    // 0x80225868: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80225868: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80227B14_ovl26(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227B14: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227B18: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227B1C: jal         0x8004F228
    // 0x80227B20: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8004F228_2A628(rdram, ctx);
        goto after_0;
    // 0x80227B20: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x80227B24: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80227B28: beq         $s0, $zero, L_80227B50
    if (ctx->r16 == 0) {
        // 0x80227B2C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80227B50;
    }
    // 0x80227B2C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227B30: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80227B34: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x80227B38: lui         $a0, 0xC
    ctx->r4 = S32(0XC << 16);
    // 0x80227B3C: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x80227B40: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x80227B44: jal         0x80071A70
    // 0x80227B48: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    func_80071A70_4CE70(rdram, ctx);
        goto after_1;
    // 0x80227B48: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    after_1:
    // 0x80227B4C: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
L_80227B50:
    // 0x80227B50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227B54: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227B58: jr          $ra
    // 0x80227B5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227B5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226E84_ovl26(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226E84: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226E88: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226E8C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226E90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226E94: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80226E98: bne         $v0, $zero, L_80226EB4
    if (ctx->r2 != 0) {
        // 0x80226E9C: addiu       $a1, $zero, 0x14
        ctx->r5 = ADD32(0, 0X14);
            goto L_80226EB4;
    }
    // 0x80226E9C: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x80226EA0: jal         0x80050294
    // 0x80226EA4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80226EA4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80226EA8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80226EAC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226EB0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80226EB4:
    // 0x80226EB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226EB8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226EBC: jr          $ra
    // 0x80226EC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226EC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802276B8_ovl26(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802276B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802276BC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802276C0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802276C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802276C8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802276CC: bne         $v0, $zero, L_802276E8
    if (ctx->r2 != 0) {
        // 0x802276D0: addiu       $a1, $zero, 0x4
        ctx->r5 = ADD32(0, 0X4);
            goto L_802276E8;
    }
    // 0x802276D0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x802276D4: jal         0x80050294
    // 0x802276D8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x802276D8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x802276DC: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802276E0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802276E4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802276E8:
    // 0x802276E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802276EC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802276F0: jr          $ra
    // 0x802276F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802276F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802251BC_ovl26(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802251BC: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x802251C0: lb          $v0, -0x3BC7($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC7);
    // 0x802251C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802251C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802251CC: bne         $v0, $zero, L_802251E8
    if (ctx->r2 != 0) {
        // 0x802251D0: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_802251E8;
    }
    // 0x802251D0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802251D4: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x802251D8: lw          $a0, 0x984($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X984);
    // 0x802251DC: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x802251E0: j           L_802251F0
    // 0x802251E4: addiu       $a1, $a1, 0x7DEC
    ctx->r5 = ADD32(ctx->r5, 0X7DEC);
        goto L_802251F0;
    // 0x802251E4: addiu       $a1, $a1, 0x7DEC
    ctx->r5 = ADD32(ctx->r5, 0X7DEC);
L_802251E8:
    // 0x802251E8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802251EC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_802251F0:
    // 0x802251F0: jal         0x80037D80
    // 0x802251F4: nop

    func_80037D80_13180(rdram, ctx);
        goto after_0;
    // 0x802251F4: nop

    after_0:
    // 0x802251F8: lui         $s0, 0x801C
    ctx->r16 = S32(0X801C << 16);
    // 0x802251FC: addiu       $s0, $s0, -0x3BC7
    ctx->r16 = ADD32(ctx->r16, -0X3BC7);
    // 0x80225200: lb          $t0, 0x0($s0)
    ctx->r8 = MEM_B(ctx->r16, 0X0);
    // 0x80225204: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80225208: lb          $a1, 0x47CD($a1)
    ctx->r5 = MEM_B(ctx->r5, 0X47CD);
    // 0x8022520C: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x80225210: addiu       $a2, $a2, 0xCB4
    ctx->r6 = ADD32(ctx->r6, 0XCB4);
    // 0x80225214: sll         $v0, $t0, 3
    ctx->r2 = S32(ctx->r8 << 3);
    // 0x80225218: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x8022521C: lbu         $v1, 0x2($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X2);
    // 0x80225220: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225224: sh          $v1, 0x49AE($at)
    MEM_H(0X49AE, ctx->r1) = ctx->r3;
    // 0x80225228: lbu         $a3, 0x3($v0)
    ctx->r7 = MEM_BU(ctx->r2, 0X3);
    // 0x8022522C: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x80225230: sh          $a3, -0x7386($at)
    MEM_H(-0X7386, ctx->r1) = ctx->r7;
    // 0x80225234: lbu         $t1, 0x0($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X0);
    // 0x80225238: lui         $t2, 0x7FE9
    ctx->r10 = S32(0X7FE9 << 16);
    // 0x8022523C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225240: sb          $t1, 0x6B40($at)
    MEM_B(0X6B40, ctx->r1) = ctx->r9;
    // 0x80225244: lbu         $t3, 0x1($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X1);
    // 0x80225248: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x8022524C: ori         $t2, $t2, 0xC000
    ctx->r10 = ctx->r10 | 0XC000;
    // 0x80225250: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80225254: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225258: sb          $zero, 0x4DFE($at)
    MEM_B(0X4DFE, ctx->r1) = 0;
    // 0x8022525C: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x80225260: addu        $a0, $a0, $t0
    ctx->r4 = ADD32(ctx->r4, ctx->r8);
    // 0x80225264: lw          $a0, 0x7D0C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7D0C);
    // 0x80225268: addiu       $a2, $a2, -0x4
    ctx->r6 = ADD32(ctx->r6, -0X4);
    // 0x8022526C: addu        $v1, $v1, $t1
    ctx->r3 = ADD32(ctx->r3, ctx->r9);
    // 0x80225270: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80225274: sb          $v1, -0x35BC($at)
    MEM_B(-0X35BC, ctx->r1) = ctx->r3;
    // 0x80225278: addu        $v0, $v0, $t2
    ctx->r2 = ADD32(ctx->r2, ctx->r10);
    // 0x8022527C: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
    // 0x80225280: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80225284: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80225288: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8022528C: sw          $v0, -0x35C0($at)
    MEM_W(-0X35C0, ctx->r1) = ctx->r2;
    // 0x80225290: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80225294: addiu       $v0, $v0, 0x5080
    ctx->r2 = ADD32(ctx->r2, 0X5080);
    // 0x80225298: addu        $a3, $a3, $t3
    ctx->r7 = ADD32(ctx->r7, ctx->r11);
    // 0x8022529C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x802252A0: sw          $v0, 0xB5C($at)
    MEM_W(0XB5C, ctx->r1) = ctx->r2;
    // 0x802252A4: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x802252A8: sb          $t3, -0x39A6($at)
    MEM_B(-0X39A6, ctx->r1) = ctx->r11;
    // 0x802252AC: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x802252B0: sb          $a3, 0x53D4($at)
    MEM_B(0X53D4, ctx->r1) = ctx->r7;
    // 0x802252B4: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x802252B8: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x802252BC: lw          $v0, 0x7D30($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7D30);
    // 0x802252C0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802252C4: jal         0x8004C790
    // 0x802252C8: sw          $v0, 0x6B44($at)
    MEM_W(0X6B44, ctx->r1) = ctx->r2;
    func_8004C790_27B90(rdram, ctx);
        goto after_1;
    // 0x802252C8: sw          $v0, 0x6B44($at)
    MEM_W(0X6B44, ctx->r1) = ctx->r2;
    after_1:
    // 0x802252CC: lb          $v0, 0x0($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X0);
    // 0x802252D0: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x802252D4: addiu       $a0, $a0, 0x7D60
    ctx->r4 = ADD32(ctx->r4, 0X7D60);
    // 0x802252D8: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x802252DC: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x802252E0: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x802252E4: lw          $v1, 0x7DE0($at)
    ctx->r3 = MEM_W(ctx->r1, 0X7DE0);
    // 0x802252E8: sll         $a1, $v0, 1
    ctx->r5 = S32(ctx->r2 << 1);
    // 0x802252EC: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x802252F0: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x802252F4: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x802252F8: addiu       $v0, $v0, 0x7D3C
    ctx->r2 = ADD32(ctx->r2, 0X7D3C);
    // 0x802252FC: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x80225300: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80225304: jal         0x80054FB8
    // 0x80225308: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    func_80054FB8_303B8(rdram, ctx);
        goto after_2;
    // 0x80225308: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    after_2:
    // 0x8022530C: jal         0x8004A614
    // 0x80225310: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_8004A614_25A14(rdram, ctx);
        goto after_3;
    // 0x80225310: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_3:
    // 0x80225314: jal         0x80225330
    // 0x80225318: nop

    func_80225330_ovl26(rdram, ctx);
        goto after_4;
    // 0x80225318: nop

    after_4:
    // 0x8022531C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225320: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225324: jr          $ra
    // 0x80225328: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225328: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022532C: nop

;}
RECOMP_FUNC void func_80227048_ovl26(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227048: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022704C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227050: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227054: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227058: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022705C: bne         $v0, $zero, L_80227078
    if (ctx->r2 != 0) {
        // 0x80227060: addiu       $a1, $zero, 0x1A
        ctx->r5 = ADD32(0, 0X1A);
            goto L_80227078;
    }
    // 0x80227060: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    // 0x80227064: jal         0x80050294
    // 0x80227068: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80227068: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8022706C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80227070: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227074: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80227078:
    // 0x80227078: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022707C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227080: jr          $ra
    // 0x80227084: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227084: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227800_ovl26(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227800: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227804: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227808: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022780C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227810: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80227814: bne         $v0, $zero, L_80227860
    if (ctx->r2 != 0) {
        // 0x80227818: nop
    
            goto L_80227860;
    }
    // 0x80227818: nop

    // 0x8022781C: jal         0x8004D5D4
    // 0x80227820: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80227820: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x80227824: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227828: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022782C: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80227830: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80227834: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80227838: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022783C: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80227840: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80227844: lui         $v0, 0xFE70
    ctx->r2 = S32(0XFE70 << 16);
    // 0x80227848: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022784C: jal         0x80050294
    // 0x80227850: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x80227850: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    after_1:
    // 0x80227854: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80227858: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022785C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80227860:
    // 0x80227860: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80227864: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80227868: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022786C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80227870: lw          $v0, -0x7610($at)
    ctx->r2 = MEM_W(ctx->r1, -0X7610);
    // 0x80227874: jalr        $v0
    // 0x80227878: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x80227878: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022787C: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80227880: jal         0x8004DD04
    // 0x80227884: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8004DD04_29104(rdram, ctx);
        goto after_3;
    // 0x80227884: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_3:
    // 0x80227888: jal         0x800504EC
    // 0x8022788C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800504EC_2B8EC(rdram, ctx);
        goto after_4;
    // 0x8022788C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80227890: jal         0x8005129C
    // 0x80227894: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005129C_2C69C(rdram, ctx);
        goto after_5;
    // 0x80227894: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80227898: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022789C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802278A0: jr          $ra
    // 0x802278A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802278A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227008_ovl26(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227008: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022700C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227010: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227014: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227018: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022701C: bne         $v0, $zero, L_80227038
    if (ctx->r2 != 0) {
        // 0x80227020: addiu       $a1, $zero, 0x19
        ctx->r5 = ADD32(0, 0X19);
            goto L_80227038;
    }
    // 0x80227020: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    // 0x80227024: jal         0x80050294
    // 0x80227028: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80227028: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8022702C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80227030: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227034: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80227038:
    // 0x80227038: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022703C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227040: jr          $ra
    // 0x80227044: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227044: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225388_ovl26(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225388: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022538C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225390: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225394: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225398: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8022539C: bne         $v0, $zero, L_802253B8
    if (ctx->r2 != 0) {
        // 0x802253A0: nop
    
            goto L_802253B8;
    }
    // 0x802253A0: nop

    // 0x802253A4: jal         0x80060690
    // 0x802253A8: addiu       $a0, $zero, 0x30
    ctx->r4 = ADD32(0, 0X30);
    func_80060690_3BA90(rdram, ctx);
        goto after_0;
    // 0x802253A8: addiu       $a0, $zero, 0x30
    ctx->r4 = ADD32(0, 0X30);
    after_0:
    // 0x802253AC: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x802253B0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802253B4: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_802253B8:
    // 0x802253B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802253BC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802253C0: jr          $ra
    // 0x802253C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802253C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226188_ovl26(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226188: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x8022618C: bne         $v0, $zero, L_802261BC
    if (ctx->r2 != 0) {
        // 0x80226190: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802261BC;
    }
    // 0x80226190: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226194: lw          $v1, 0x2C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X2C);
    // 0x80226198: lbu         $a0, 0x0($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X0);
    // 0x8022619C: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x802261A0: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x802261A4: sh          $v0, 0x56($v1)
    MEM_H(0X56, ctx->r3) = ctx->r2;
    // 0x802261A8: lui         $v0, 0xFEA2
    ctx->r2 = S32(0XFEA2 << 16);
    // 0x802261AC: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    // 0x802261B0: sw          $v0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r2;
    // 0x802261B4: ori         $a0, $a0, 0x2
    ctx->r4 = ctx->r4 | 0X2;
    // 0x802261B8: sb          $a0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r4;
L_802261BC:
    // 0x802261BC: jr          $ra
    // 0x802261C0: nop

    TRACE_RETURN()
    return;
    // 0x802261C0: nop

;}
RECOMP_FUNC void func_802277B8_ovl26(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802277B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802277BC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802277C0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802277C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802277C8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802277CC: bne         $v0, $zero, L_802277E8
    if (ctx->r2 != 0) {
        // 0x802277D0: addiu       $a1, $zero, 0x8
        ctx->r5 = ADD32(0, 0X8);
            goto L_802277E8;
    }
    // 0x802277D0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x802277D4: jal         0x80050294
    // 0x802277D8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x802277D8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x802277DC: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802277E0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802277E4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802277E8:
    // 0x802277E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802277EC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802277F0: jr          $ra
    // 0x802277F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802277F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802277F8: nop

    // 0x802277FC: nop

;}
RECOMP_FUNC void func_80226258_ovl26(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226258: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x8022625C: bne         $v0, $zero, L_80226280
    if (ctx->r2 != 0) {
        // 0x80226260: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80226280;
    }
    // 0x80226260: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226264: lw          $v1, 0x2C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X2C);
    // 0x80226268: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x8022626C: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    // 0x80226270: lw          $v1, 0x30($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X30);
    // 0x80226274: addiu       $v0, $zero, -0x80
    ctx->r2 = ADD32(0, -0X80);
    // 0x80226278: sw          $zero, 0x64($a0)
    MEM_W(0X64, ctx->r4) = 0;
    // 0x8022627C: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
L_80226280:
    // 0x80226280: jr          $ra
    // 0x80226284: nop

    TRACE_RETURN()
    return;
    // 0x80226284: nop

;}
RECOMP_FUNC void func_80227948_ovl26(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227948: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022794C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227950: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227954: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227958: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022795C: bne         $v0, $zero, L_80227978
    if (ctx->r2 != 0) {
        // 0x80227960: nop
    
            goto L_80227978;
    }
    // 0x80227960: nop

    // 0x80227964: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80227968: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x8022796C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227970: j           L_802279A8
    // 0x80227974: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_802279A8;
    // 0x80227974: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80227978:
    // 0x80227978: lbu         $a0, 0xC($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XC);
    // 0x8022797C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80227980: sb          $a0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r4;
    // 0x80227984: sll         $a0, $a0, 24
    ctx->r4 = S32(ctx->r4 << 24);
    // 0x80227988: jal         0x800324B4
    // 0x8022798C: sra         $a0, $a0, 18
    ctx->r4 = S32(SIGNED(ctx->r4) >> 18);
    func_800324B4_D8B4(rdram, ctx);
        goto after_0;
    // 0x8022798C: sra         $a0, $a0, 18
    ctx->r4 = S32(SIGNED(ctx->r4) >> 18);
    after_0:
    // 0x80227990: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x80227994: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80227998: sll         $v1, $v1, 6
    ctx->r3 = S32(ctx->r3 << 6);
    // 0x8022799C: lui         $v0, 0xFC18
    ctx->r2 = S32(0XFC18 << 16);
    // 0x802279A0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802279A4: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
L_802279A8:
    // 0x802279A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802279AC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802279B0: jr          $ra
    // 0x802279B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802279B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802279B8: nop

    // 0x802279BC: nop

;}
RECOMP_FUNC void func_80225998_ovl26(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225998: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x8022599C: lw          $v0, 0x10($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X10);
    // 0x802259A0: bne         $v0, $zero, L_80225A70
    if (ctx->r2 != 0) {
        // 0x802259A4: addiu       $sp, $sp, -0x50
        ctx->r29 = ADD32(ctx->r29, -0X50);
            goto L_80225A70;
    }
    // 0x802259A4: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x802259A8: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x802259AC: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    // 0x802259B0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802259B4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802259B8: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x802259BC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802259C0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802259C4: sb          $a0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r4;
    // 0x802259C8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802259CC: sb          $a1, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r5;
    // 0x802259D0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802259D4: sh          $zero, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = 0;
    // 0x802259D8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802259DC: sh          $zero, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = 0;
    // 0x802259E0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802259E4: sh          $zero, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = 0;
    // 0x802259E8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802259EC: sh          $zero, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = 0;
    // 0x802259F0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802259F4: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x802259F8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802259FC: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x80225A00: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225A04: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    // 0x80225A08: lw          $a2, 0x28($a3)
    ctx->r6 = MEM_W(ctx->r7, 0X28);
    // 0x80225A0C: lbu         $v1, 0x0($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X0);
    // 0x80225A10: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80225A14: sb          $v0, 0x9($a2)
    MEM_B(0X9, ctx->r6) = ctx->r2;
    // 0x80225A18: lui         $v0, 0xFE59
    ctx->r2 = S32(0XFE59 << 16);
    // 0x80225A1C: sw          $v0, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->r2;
    // 0x80225A20: lui         $v0, 0xFF3D
    ctx->r2 = S32(0XFF3D << 16);
    // 0x80225A24: sb          $zero, 0xA($a2)
    MEM_B(0XA, ctx->r6) = 0;
    // 0x80225A28: sw          $v0, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->r2;
    // 0x80225A2C: sb          $zero, 0x10B($a2)
    MEM_B(0X10B, ctx->r6) = 0;
    // 0x80225A30: sb          $zero, 0x117($a2)
    MEM_B(0X117, ctx->r6) = 0;
    // 0x80225A34: sb          $a0, 0x143($a2)
    MEM_B(0X143, ctx->r6) = ctx->r4;
    // 0x80225A38: sb          $a0, 0x147($a2)
    MEM_B(0X147, ctx->r6) = ctx->r4;
    // 0x80225A3C: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80225A40: sb          $v1, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r3;
    // 0x80225A44: lw          $a2, 0x2C($a3)
    ctx->r6 = MEM_W(ctx->r7, 0X2C);
    // 0x80225A48: lbu         $v0, 0x0($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X0);
    // 0x80225A4C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80225A50: sb          $v0, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r2;
    // 0x80225A54: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80225A58: sw          $a1, 0x64($a3)
    MEM_W(0X64, ctx->r7) = ctx->r5;
    // 0x80225A5C: sw          $v0, 0x74($a3)
    MEM_W(0X74, ctx->r7) = ctx->r2;
    // 0x80225A60: sw          $zero, 0x70($a3)
    MEM_W(0X70, ctx->r7) = 0;
    // 0x80225A64: sw          $zero, 0x6C($a3)
    MEM_W(0X6C, ctx->r7) = 0;
    // 0x80225A68: sw          $zero, 0x68($a3)
    MEM_W(0X68, ctx->r7) = 0;
    // 0x80225A6C: lw          $v0, 0x10($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X10);
L_80225A70:
    // 0x80225A70: addiu       $v0, $v0, -0xE
    ctx->r2 = ADD32(ctx->r2, -0XE);
    // 0x80225A74: sltiu       $v0, $v0, 0x7
    ctx->r2 = ctx->r2 < 0X7 ? 1 : 0;
    // 0x80225A78: beq         $v0, $zero, L_80225C38
    if (ctx->r2 == 0) {
        // 0x80225A7C: addiu       $a0, $zero, 0x4210
        ctx->r4 = ADD32(0, 0X4210);
            goto L_80225C38;
    }
    // 0x80225A7C: addiu       $a0, $zero, 0x4210
    ctx->r4 = ADD32(0, 0X4210);
    // 0x80225A80: lw          $a2, 0x28($a3)
    ctx->r6 = MEM_W(ctx->r7, 0X28);
    // 0x80225A84: lh          $v0, 0x18E($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X18E);
    // 0x80225A88: beq         $v0, $a0, L_80225AAC
    if (ctx->r2 == ctx->r4) {
        // 0x80225A8C: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80225AAC;
    }
    // 0x80225A8C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80225A90: addiu       $v0, $v1, 0x421
    ctx->r2 = ADD32(ctx->r3, 0X421);
    // 0x80225A94: sh          $v0, 0x18E($a2)
    MEM_H(0X18E, ctx->r6) = ctx->r2;
    // 0x80225A98: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80225A9C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80225AA0: bne         $v0, $a0, L_80225AAC
    if (ctx->r2 != ctx->r4) {
        // 0x80225AA4: addiu       $v0, $zero, 0x4210
        ctx->r2 = ADD32(0, 0X4210);
            goto L_80225AAC;
    }
    // 0x80225AA4: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80225AA8: sh          $v0, 0x18E($a2)
    MEM_H(0X18E, ctx->r6) = ctx->r2;
L_80225AAC:
    // 0x80225AAC: lh          $v0, 0x19E($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X19E);
    // 0x80225AB0: addiu       $a0, $zero, 0x4210
    ctx->r4 = ADD32(0, 0X4210);
    // 0x80225AB4: beq         $v0, $a0, L_80225AD8
    if (ctx->r2 == ctx->r4) {
        // 0x80225AB8: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80225AD8;
    }
    // 0x80225AB8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80225ABC: addiu       $v0, $v1, 0x421
    ctx->r2 = ADD32(ctx->r3, 0X421);
    // 0x80225AC0: sh          $v0, 0x19E($a2)
    MEM_H(0X19E, ctx->r6) = ctx->r2;
    // 0x80225AC4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80225AC8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80225ACC: bne         $v0, $a0, L_80225AD8
    if (ctx->r2 != ctx->r4) {
        // 0x80225AD0: addiu       $v0, $zero, 0x4210
        ctx->r2 = ADD32(0, 0X4210);
            goto L_80225AD8;
    }
    // 0x80225AD0: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80225AD4: sh          $v0, 0x19E($a2)
    MEM_H(0X19E, ctx->r6) = ctx->r2;
L_80225AD8:
    // 0x80225AD8: lh          $v0, 0x1B6($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X1B6);
    // 0x80225ADC: addiu       $a0, $zero, 0x4210
    ctx->r4 = ADD32(0, 0X4210);
    // 0x80225AE0: beq         $v0, $a0, L_80225B04
    if (ctx->r2 == ctx->r4) {
        // 0x80225AE4: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80225B04;
    }
    // 0x80225AE4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80225AE8: addiu       $v0, $v1, 0x421
    ctx->r2 = ADD32(ctx->r3, 0X421);
    // 0x80225AEC: sh          $v0, 0x1B6($a2)
    MEM_H(0X1B6, ctx->r6) = ctx->r2;
    // 0x80225AF0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80225AF4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80225AF8: bne         $v0, $a0, L_80225B04
    if (ctx->r2 != ctx->r4) {
        // 0x80225AFC: addiu       $v0, $zero, 0x4210
        ctx->r2 = ADD32(0, 0X4210);
            goto L_80225B04;
    }
    // 0x80225AFC: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80225B00: sh          $v0, 0x1B6($a2)
    MEM_H(0X1B6, ctx->r6) = ctx->r2;
L_80225B04:
    // 0x80225B04: lh          $v0, 0x1BE($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X1BE);
    // 0x80225B08: addiu       $a0, $zero, 0x4210
    ctx->r4 = ADD32(0, 0X4210);
    // 0x80225B0C: beq         $v0, $a0, L_80225B30
    if (ctx->r2 == ctx->r4) {
        // 0x80225B10: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80225B30;
    }
    // 0x80225B10: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80225B14: addiu       $v0, $v1, 0x421
    ctx->r2 = ADD32(ctx->r3, 0X421);
    // 0x80225B18: sh          $v0, 0x1BE($a2)
    MEM_H(0X1BE, ctx->r6) = ctx->r2;
    // 0x80225B1C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80225B20: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80225B24: bne         $v0, $a0, L_80225B30
    if (ctx->r2 != ctx->r4) {
        // 0x80225B28: addiu       $v0, $zero, 0x4210
        ctx->r2 = ADD32(0, 0X4210);
            goto L_80225B30;
    }
    // 0x80225B28: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80225B2C: sh          $v0, 0x1BE($a2)
    MEM_H(0X1BE, ctx->r6) = ctx->r2;
L_80225B30:
    // 0x80225B30: lh          $v0, 0x1A6($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X1A6);
    // 0x80225B34: addiu       $a0, $zero, 0x4210
    ctx->r4 = ADD32(0, 0X4210);
    // 0x80225B38: beq         $v0, $a0, L_80225B5C
    if (ctx->r2 == ctx->r4) {
        // 0x80225B3C: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80225B5C;
    }
    // 0x80225B3C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80225B40: addiu       $v0, $v1, 0x421
    ctx->r2 = ADD32(ctx->r3, 0X421);
    // 0x80225B44: sh          $v0, 0x1A6($a2)
    MEM_H(0X1A6, ctx->r6) = ctx->r2;
    // 0x80225B48: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80225B4C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80225B50: bne         $v0, $a0, L_80225B5C
    if (ctx->r2 != ctx->r4) {
        // 0x80225B54: addiu       $v0, $zero, 0x4210
        ctx->r2 = ADD32(0, 0X4210);
            goto L_80225B5C;
    }
    // 0x80225B54: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80225B58: sh          $v0, 0x1A6($a2)
    MEM_H(0X1A6, ctx->r6) = ctx->r2;
L_80225B5C:
    // 0x80225B5C: lh          $v0, 0x1FE($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X1FE);
    // 0x80225B60: addiu       $a0, $zero, 0x4210
    ctx->r4 = ADD32(0, 0X4210);
    // 0x80225B64: beq         $v0, $a0, L_80225B88
    if (ctx->r2 == ctx->r4) {
        // 0x80225B68: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80225B88;
    }
    // 0x80225B68: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80225B6C: addiu       $v0, $v1, 0x421
    ctx->r2 = ADD32(ctx->r3, 0X421);
    // 0x80225B70: sh          $v0, 0x1FE($a2)
    MEM_H(0X1FE, ctx->r6) = ctx->r2;
    // 0x80225B74: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80225B78: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80225B7C: bne         $v0, $a0, L_80225B88
    if (ctx->r2 != ctx->r4) {
        // 0x80225B80: addiu       $v0, $zero, 0x4210
        ctx->r2 = ADD32(0, 0X4210);
            goto L_80225B88;
    }
    // 0x80225B80: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80225B84: sh          $v0, 0x1FE($a2)
    MEM_H(0X1FE, ctx->r6) = ctx->r2;
L_80225B88:
    // 0x80225B88: lh          $v0, 0x206($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X206);
    // 0x80225B8C: addiu       $a0, $zero, 0x4210
    ctx->r4 = ADD32(0, 0X4210);
    // 0x80225B90: beq         $v0, $a0, L_80225BB4
    if (ctx->r2 == ctx->r4) {
        // 0x80225B94: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80225BB4;
    }
    // 0x80225B94: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80225B98: addiu       $v0, $v1, 0x421
    ctx->r2 = ADD32(ctx->r3, 0X421);
    // 0x80225B9C: sh          $v0, 0x206($a2)
    MEM_H(0X206, ctx->r6) = ctx->r2;
    // 0x80225BA0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80225BA4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80225BA8: bne         $v0, $a0, L_80225BB4
    if (ctx->r2 != ctx->r4) {
        // 0x80225BAC: addiu       $v0, $zero, 0x4210
        ctx->r2 = ADD32(0, 0X4210);
            goto L_80225BB4;
    }
    // 0x80225BAC: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80225BB0: sh          $v0, 0x206($a2)
    MEM_H(0X206, ctx->r6) = ctx->r2;
L_80225BB4:
    // 0x80225BB4: lh          $v0, 0x20E($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X20E);
    // 0x80225BB8: addiu       $a0, $zero, 0x4210
    ctx->r4 = ADD32(0, 0X4210);
    // 0x80225BBC: beq         $v0, $a0, L_80225BE0
    if (ctx->r2 == ctx->r4) {
        // 0x80225BC0: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80225BE0;
    }
    // 0x80225BC0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80225BC4: addiu       $v0, $v1, 0x421
    ctx->r2 = ADD32(ctx->r3, 0X421);
    // 0x80225BC8: sh          $v0, 0x20E($a2)
    MEM_H(0X20E, ctx->r6) = ctx->r2;
    // 0x80225BCC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80225BD0: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80225BD4: bne         $v0, $a0, L_80225BE0
    if (ctx->r2 != ctx->r4) {
        // 0x80225BD8: addiu       $v0, $zero, 0x4210
        ctx->r2 = ADD32(0, 0X4210);
            goto L_80225BE0;
    }
    // 0x80225BD8: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80225BDC: sh          $v0, 0x20E($a2)
    MEM_H(0X20E, ctx->r6) = ctx->r2;
L_80225BE0:
    // 0x80225BE0: lh          $v0, 0x216($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X216);
    // 0x80225BE4: addiu       $a0, $zero, 0x4210
    ctx->r4 = ADD32(0, 0X4210);
    // 0x80225BE8: beq         $v0, $a0, L_80225C0C
    if (ctx->r2 == ctx->r4) {
        // 0x80225BEC: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80225C0C;
    }
    // 0x80225BEC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80225BF0: addiu       $v0, $v1, 0x421
    ctx->r2 = ADD32(ctx->r3, 0X421);
    // 0x80225BF4: sh          $v0, 0x216($a2)
    MEM_H(0X216, ctx->r6) = ctx->r2;
    // 0x80225BF8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80225BFC: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80225C00: bne         $v0, $a0, L_80225C0C
    if (ctx->r2 != ctx->r4) {
        // 0x80225C04: addiu       $v0, $zero, 0x4210
        ctx->r2 = ADD32(0, 0X4210);
            goto L_80225C0C;
    }
    // 0x80225C04: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80225C08: sh          $v0, 0x216($a2)
    MEM_H(0X216, ctx->r6) = ctx->r2;
L_80225C0C:
    // 0x80225C0C: lh          $v0, 0x21E($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X21E);
    // 0x80225C10: addiu       $a0, $zero, 0x4210
    ctx->r4 = ADD32(0, 0X4210);
    // 0x80225C14: beq         $v0, $a0, L_80225C38
    if (ctx->r2 == ctx->r4) {
        // 0x80225C18: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80225C38;
    }
    // 0x80225C18: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80225C1C: addiu       $v0, $v1, 0x421
    ctx->r2 = ADD32(ctx->r3, 0X421);
    // 0x80225C20: sh          $v0, 0x21E($a2)
    MEM_H(0X21E, ctx->r6) = ctx->r2;
    // 0x80225C24: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80225C28: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80225C2C: bne         $v0, $a0, L_80225C38
    if (ctx->r2 != ctx->r4) {
        // 0x80225C30: addiu       $v0, $zero, 0x4210
        ctx->r2 = ADD32(0, 0X4210);
            goto L_80225C38;
    }
    // 0x80225C30: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80225C34: sh          $v0, 0x21E($a2)
    MEM_H(0X21E, ctx->r6) = ctx->r2;
L_80225C38:
    // 0x80225C38: lw          $v1, 0x10($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X10);
    // 0x80225C3C: addiu       $v0, $zero, 0x39
    ctx->r2 = ADD32(0, 0X39);
    // 0x80225C40: bne         $v1, $v0, L_80225C5C
    if (ctx->r3 != ctx->r2) {
        // 0x80225C44: addiu       $v0, $zero, 0x57
        ctx->r2 = ADD32(0, 0X57);
            goto L_80225C5C;
    }
    // 0x80225C44: addiu       $v0, $zero, 0x57
    ctx->r2 = ADD32(0, 0X57);
    // 0x80225C48: lw          $a2, 0x28($a3)
    ctx->r6 = MEM_W(ctx->r7, 0X28);
    // 0x80225C4C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225C50: sb          $v0, 0xD($a2)
    MEM_B(0XD, ctx->r6) = ctx->r2;
    // 0x80225C54: lw          $v1, 0x10($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X10);
    // 0x80225C58: addiu       $v0, $zero, 0x57
    ctx->r2 = ADD32(0, 0X57);
L_80225C5C:
    // 0x80225C5C: bne         $v1, $v0, L_80225C6C
    if (ctx->r3 != ctx->r2) {
        // 0x80225C60: nop
    
            goto L_80225C6C;
    }
    // 0x80225C60: nop

    // 0x80225C64: lw          $a2, 0x28($a3)
    ctx->r6 = MEM_W(ctx->r7, 0X28);
    // 0x80225C68: sb          $zero, 0xD($a2)
    MEM_B(0XD, ctx->r6) = 0;
L_80225C6C:
    // 0x80225C6C: lw          $v0, 0x10($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X10);
    // 0x80225C70: addiu       $v0, $v0, -0x5A
    ctx->r2 = ADD32(ctx->r2, -0X5A);
    // 0x80225C74: sltiu       $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 < 0X1F ? 1 : 0;
    // 0x80225C78: beq         $v0, $zero, L_80225CC0
    if (ctx->r2 == 0) {
        // 0x80225C7C: nop
    
            goto L_80225CC0;
    }
    // 0x80225C7C: nop

    // 0x80225C80: lw          $v0, 0x68($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X68);
    // 0x80225C84: lw          $v1, 0x70($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X70);
    // 0x80225C88: addiu       $v0, $v0, 0x9
    ctx->r2 = ADD32(ctx->r2, 0X9);
    // 0x80225C8C: sw          $v0, 0x68($a3)
    MEM_W(0X68, ctx->r7) = ctx->r2;
    // 0x80225C90: lw          $v0, 0x6C($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X6C);
    // 0x80225C94: lw          $a0, 0x68($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X68);
    // 0x80225C98: addiu       $v1, $v1, 0x9
    ctx->r3 = ADD32(ctx->r3, 0X9);
    // 0x80225C9C: sw          $v1, 0x70($a3)
    MEM_W(0X70, ctx->r7) = ctx->r3;
    // 0x80225CA0: addiu       $v0, $v0, 0x9
    ctx->r2 = ADD32(ctx->r2, 0X9);
    // 0x80225CA4: sltiu       $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 < 0XFF ? 1 : 0;
    // 0x80225CA8: bne         $a0, $zero, L_80225CC0
    if (ctx->r4 != 0) {
        // 0x80225CAC: sw          $v0, 0x6C($a3)
        MEM_W(0X6C, ctx->r7) = ctx->r2;
            goto L_80225CC0;
    }
    // 0x80225CAC: sw          $v0, 0x6C($a3)
    MEM_W(0X6C, ctx->r7) = ctx->r2;
    // 0x80225CB0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225CB4: sw          $v0, 0x70($a3)
    MEM_W(0X70, ctx->r7) = ctx->r2;
    // 0x80225CB8: sw          $v0, 0x6C($a3)
    MEM_W(0X6C, ctx->r7) = ctx->r2;
    // 0x80225CBC: sw          $v0, 0x68($a3)
    MEM_W(0X68, ctx->r7) = ctx->r2;
L_80225CC0:
    // 0x80225CC0: jr          $ra
    // 0x80225CC4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x80225CC4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_802263B8_ovl26(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802263B8: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x802263BC: bne         $v0, $zero, L_802263D0
    if (ctx->r2 != 0) {
        // 0x802263C0: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_802263D0;
    }
    // 0x802263C0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802263C4: lw          $v1, 0x2C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X2C);
    // 0x802263C8: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x802263CC: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
L_802263D0:
    // 0x802263D0: jr          $ra
    // 0x802263D4: nop

    TRACE_RETURN()
    return;
    // 0x802263D4: nop

;}
RECOMP_FUNC void func_80225890_ovl26(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225890: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80225894: bne         $v0, $zero, L_802258CC
    if (ctx->r2 != 0) {
        // 0x80225898: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802258CC;
    }
    // 0x80225898: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022589C: lw          $a1, 0x28($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X28);
    // 0x802258A0: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x802258A4: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x802258A8: lui         $v0, 0xFE5C
    ctx->r2 = S32(0XFE5C << 16);
    // 0x802258AC: sw          $v0, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->r2;
    // 0x802258B0: lui         $v0, 0xFF38
    ctx->r2 = S32(0XFF38 << 16);
    // 0x802258B4: sw          $v0, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->r2;
    // 0x802258B8: addiu       $v0, $zero, 0xC00
    ctx->r2 = ADD32(0, 0XC00);
    // 0x802258BC: sb          $zero, 0xA($a1)
    MEM_B(0XA, ctx->r5) = 0;
    // 0x802258C0: sh          $v0, 0x56($a1)
    MEM_H(0X56, ctx->r5) = ctx->r2;
    // 0x802258C4: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x802258C8: sb          $v1, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r3;
L_802258CC:
    // 0x802258CC: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x802258D0: addiu       $v0, $zero, 0x3E
    ctx->r2 = ADD32(0, 0X3E);
    // 0x802258D4: bne         $v1, $v0, L_802258F4
    if (ctx->r3 != ctx->r2) {
        // 0x802258D8: addiu       $v0, $zero, 0x52
        ctx->r2 = ADD32(0, 0X52);
            goto L_802258F4;
    }
    // 0x802258D8: addiu       $v0, $zero, 0x52
    ctx->r2 = ADD32(0, 0X52);
    // 0x802258DC: lw          $a1, 0x28($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X28);
    // 0x802258E0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802258E4: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x802258E8: sb          $zero, 0xA($a1)
    MEM_B(0XA, ctx->r5) = 0;
    // 0x802258EC: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x802258F0: addiu       $v0, $zero, 0x52
    ctx->r2 = ADD32(0, 0X52);
L_802258F4:
    // 0x802258F4: bne         $v1, $v0, L_80225910
    if (ctx->r3 != ctx->r2) {
        // 0x802258F8: lui         $v0, 0xFF42
        ctx->r2 = S32(0XFF42 << 16);
            goto L_80225910;
    }
    // 0x802258F8: lui         $v0, 0xFF42
    ctx->r2 = S32(0XFF42 << 16);
    // 0x802258FC: lw          $a1, 0x28($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X28);
    // 0x80225900: sw          $v0, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->r2;
    // 0x80225904: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80225908: sb          $v0, 0x14B($a1)
    MEM_B(0X14B, ctx->r5) = ctx->r2;
    // 0x8022590C: sb          $v0, 0x14F($a1)
    MEM_B(0X14F, ctx->r5) = ctx->r2;
L_80225910:
    // 0x80225910: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80225914: addiu       $v0, $zero, 0x79
    ctx->r2 = ADD32(0, 0X79);
    // 0x80225918: bne         $v1, $v0, L_80225938
    if (ctx->r3 != ctx->r2) {
        // 0x8022591C: addiu       $v0, $zero, 0xD2
        ctx->r2 = ADD32(0, 0XD2);
            goto L_80225938;
    }
    // 0x8022591C: addiu       $v0, $zero, 0xD2
    ctx->r2 = ADD32(0, 0XD2);
    // 0x80225920: lw          $a1, 0x28($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X28);
    // 0x80225924: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80225928: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x8022592C: sb          $zero, 0xA($a1)
    MEM_B(0XA, ctx->r5) = 0;
    // 0x80225930: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80225934: addiu       $v0, $zero, 0xD2
    ctx->r2 = ADD32(0, 0XD2);
L_80225938:
    // 0x80225938: bne         $v1, $v0, L_80225990
    if (ctx->r3 != ctx->r2) {
        // 0x8022593C: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80225990;
    }
    // 0x8022593C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80225940: lw          $a1, 0x28($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X28);
    // 0x80225944: addiu       $v1, $zero, 0x2D6B
    ctx->r3 = ADD32(0, 0X2D6B);
    // 0x80225948: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x8022594C: addiu       $v0, $zero, 0x2108
    ctx->r2 = ADD32(0, 0X2108);
    // 0x80225950: sh          $v0, 0x18E($a1)
    MEM_H(0X18E, ctx->r5) = ctx->r2;
    // 0x80225954: sh          $v0, 0x1A6($a1)
    MEM_H(0X1A6, ctx->r5) = ctx->r2;
    // 0x80225958: sh          $v0, 0x1BE($a1)
    MEM_H(0X1BE, ctx->r5) = ctx->r2;
    // 0x8022595C: sh          $v0, 0x1FE($a1)
    MEM_H(0X1FE, ctx->r5) = ctx->r2;
    // 0x80225960: sh          $v0, 0x206($a1)
    MEM_H(0X206, ctx->r5) = ctx->r2;
    // 0x80225964: sh          $v0, 0x20E($a1)
    MEM_H(0X20E, ctx->r5) = ctx->r2;
    // 0x80225968: sh          $v0, 0x216($a1)
    MEM_H(0X216, ctx->r5) = ctx->r2;
    // 0x8022596C: sh          $v0, 0x21E($a1)
    MEM_H(0X21E, ctx->r5) = ctx->r2;
    // 0x80225970: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80225974: sb          $zero, 0xA($a1)
    MEM_B(0XA, ctx->r5) = 0;
    // 0x80225978: sh          $v1, 0x19E($a1)
    MEM_H(0X19E, ctx->r5) = ctx->r3;
    // 0x8022597C: sh          $v1, 0x1B6($a1)
    MEM_H(0X1B6, ctx->r5) = ctx->r3;
    // 0x80225980: sb          $v0, 0x10B($a1)
    MEM_B(0X10B, ctx->r5) = ctx->r2;
    // 0x80225984: sb          $v0, 0x117($a1)
    MEM_B(0X117, ctx->r5) = ctx->r2;
    // 0x80225988: sb          $zero, 0x143($a1)
    MEM_B(0X143, ctx->r5) = 0;
    // 0x8022598C: sb          $zero, 0x147($a1)
    MEM_B(0X147, ctx->r5) = 0;
L_80225990:
    // 0x80225990: jr          $ra
    // 0x80225994: nop

    TRACE_RETURN()
    return;
    // 0x80225994: nop

;}
RECOMP_FUNC void func_80225330_ovl26(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225330: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80225334: jr          $ra
    // 0x80225338: sw          $zero, -0x359C($at)
    MEM_W(-0X359C, ctx->r1) = 0;
    TRACE_RETURN()
    return;
    // 0x80225338: sw          $zero, -0x359C($at)
    MEM_W(-0X359C, ctx->r1) = 0;
;}
RECOMP_FUNC void func_8022602C_ovl26(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022602C: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80226030: bne         $v0, $zero, L_802260AC
    if (ctx->r2 != 0) {
        // 0x80226034: nop
    
            goto L_802260AC;
    }
    // 0x80226034: nop

    // 0x80226038: lw          $v0, 0x24($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X24);
    // 0x8022603C: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x80226040: sb          $zero, 0x9($v0)
    MEM_B(0X9, ctx->r2) = 0;
    // 0x80226044: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
    // 0x80226048: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8022604C: sb          $v1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r3;
    // 0x80226050: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80226054: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226058: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x8022605C: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    // 0x80226060: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226064: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x80226068: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022606C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226070: sb          $zero, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = 0;
    // 0x80226074: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226078: sh          $zero, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = 0;
    // 0x8022607C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226080: sh          $zero, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = 0;
    // 0x80226084: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226088: sh          $zero, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = 0;
    // 0x8022608C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226090: sh          $zero, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = 0;
    // 0x80226094: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226098: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x8022609C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802260A0: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x802260A4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802260A8: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
L_802260AC:
    // 0x802260AC: jr          $ra
    // 0x802260B0: nop

    TRACE_RETURN()
    return;
    // 0x802260B0: nop

;}
RECOMP_FUNC void func_80225150_ovl26(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225150: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x80225154: addiu       $v0, $v0, 0x7B6C
    ctx->r2 = ADD32(ctx->r2, 0X7B6C);
    // 0x80225158: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022515C: sw          $v0, 0x4020($at)
    MEM_W(0X4020, ctx->r1) = ctx->r2;
    // 0x80225160: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x80225164: addiu       $v0, $v0, 0x7B98
    ctx->r2 = ADD32(ctx->r2, 0X7B98);
    // 0x80225168: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8022516C: sw          $v0, -0x22A0($at)
    MEM_W(-0X22A0, ctx->r1) = ctx->r2;
    // 0x80225170: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x80225174: addiu       $v0, $v0, 0x7BB4
    ctx->r2 = ADD32(ctx->r2, 0X7BB4);
    // 0x80225178: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x8022517C: sw          $v0, -0x26A8($at)
    MEM_W(-0X26A8, ctx->r1) = ctx->r2;
    // 0x80225180: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x80225184: addiu       $v0, $v0, 0x7BB8
    ctx->r2 = ADD32(ctx->r2, 0X7BB8);
    // 0x80225188: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8022518C: sw          $v0, -0xBD8($at)
    MEM_W(-0XBD8, ctx->r1) = ctx->r2;
    // 0x80225190: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x80225194: addiu       $v0, $v0, 0x7BF4
    ctx->r2 = ADD32(ctx->r2, 0X7BF4);
    // 0x80225198: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8022519C: sw          $v0, 0xC68($at)
    MEM_W(0XC68, ctx->r1) = ctx->r2;
    // 0x802251A0: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x802251A4: addiu       $v0, $v0, 0x7C24
    ctx->r2 = ADD32(ctx->r2, 0X7C24);
    // 0x802251A8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x802251AC: sw          $v0, -0x2344($at)
    MEM_W(-0X2344, ctx->r1) = ctx->r2;
    // 0x802251B0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802251B4: jr          $ra
    // 0x802251B8: sb          $zero, 0x4B20($at)
    MEM_B(0X4B20, ctx->r1) = 0;
    TRACE_RETURN()
    return;
    // 0x802251B8: sb          $zero, 0x4B20($at)
    MEM_B(0X4B20, ctx->r1) = 0;
;}
RECOMP_FUNC void func_802269D8_ovl26(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802269D8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802269DC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802269E0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802269E4: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802269E8: lw          $a0, -0x7590($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X7590);
    // 0x802269EC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802269F0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802269F4: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x802269F8: lui         $s1, 0x801C
    ctx->r17 = S32(0X801C << 16);
    // 0x802269FC: addiu       $s1, $s1, -0x3A50
    ctx->r17 = ADD32(ctx->r17, -0X3A50);
    // 0x80226A00: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80226A04: beq         $v1, $v0, L_80226A98
    if (ctx->r3 == ctx->r2) {
        // 0x80226A08: nop
    
            goto L_80226A98;
    }
    // 0x80226A08: nop

    // 0x80226A0C: lhu         $v1, 0x0($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X0);
    // 0x80226A10: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80226A14: lhu         $v0, -0x3A48($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3A48);
    // 0x80226A18: bne         $v1, $v0, L_80226A98
    if (ctx->r3 != ctx->r2) {
        // 0x80226A1C: nop
    
            goto L_80226A98;
    }
    // 0x80226A1C: nop

    // 0x80226A20: lhu         $v1, 0x2($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X2);
    // 0x80226A24: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80226A28: lw          $v0, -0x3A34($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A34);
    // 0x80226A2C: bne         $v1, $v0, L_80226A98
    if (ctx->r3 != ctx->r2) {
        // 0x80226A30: addiu       $a1, $zero, 0x2A
        ctx->r5 = ADD32(0, 0X2A);
            goto L_80226A98;
    }
    // 0x80226A30: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x80226A34: lhu         $v0, 0x4($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X4);
    // 0x80226A38: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80226A3C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80226A40: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80226A44: lw          $v0, -0x7AB8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X7AB8);
    // 0x80226A48: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80226A4C: sw          $v0, -0x75A0($at)
    MEM_W(-0X75A0, ctx->r1) = ctx->r2;
    // 0x80226A50: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80226A54: lw          $v0, -0x75A0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X75A0);
    // 0x80226A58: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80226A5C: sh          $zero, -0x759C($at)
    MEM_H(-0X759C, ctx->r1) = 0;
    // 0x80226A60: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x80226A64: addiu       $a2, $zero, 0x33
    ctx->r6 = ADD32(0, 0X33);
    // 0x80226A68: jal         0x8003B85C
    // 0x80226A6C: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_0;
    // 0x80226A6C: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_0:
    // 0x80226A70: lw          $a0, 0x88($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X88);
    // 0x80226A74: lui         $a1, 0x11
    ctx->r5 = S32(0X11 << 16);
    // 0x80226A78: ori         $a1, $a1, 0x10
    ctx->r5 = ctx->r5 | 0X10;
    // 0x80226A7C: jal         0x8003B840
    // 0x80226A80: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_1;
    // 0x80226A80: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_1:
    // 0x80226A84: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80226A88: lw          $v0, -0x7590($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7590);
    // 0x80226A8C: addiu       $v0, $v0, 0x6
    ctx->r2 = ADD32(ctx->r2, 0X6);
    // 0x80226A90: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80226A94: sw          $v0, -0x7590($at)
    MEM_W(-0X7590, ctx->r1) = ctx->r2;
L_80226A98:
    // 0x80226A98: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80226A9C: lw          $a0, -0x758C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X758C);
    // 0x80226AA0: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x80226AA4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80226AA8: beq         $v1, $v0, L_80226B34
    if (ctx->r3 == ctx->r2) {
        // 0x80226AAC: nop
    
            goto L_80226B34;
    }
    // 0x80226AAC: nop

    // 0x80226AB0: lhu         $v1, 0x0($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X0);
    // 0x80226AB4: lhu         $v0, 0x8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8);
    // 0x80226AB8: bne         $v1, $v0, L_80226B34
    if (ctx->r3 != ctx->r2) {
        // 0x80226ABC: nop
    
            goto L_80226B34;
    }
    // 0x80226ABC: nop

    // 0x80226AC0: lhu         $v1, 0x2($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X2);
    // 0x80226AC4: lw          $v0, 0x1C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X1C);
    // 0x80226AC8: bne         $v1, $v0, L_80226B34
    if (ctx->r3 != ctx->r2) {
        // 0x80226ACC: addiu       $a1, $zero, 0x2A
        ctx->r5 = ADD32(0, 0X2A);
            goto L_80226B34;
    }
    // 0x80226ACC: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x80226AD0: lhu         $v0, 0x4($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X4);
    // 0x80226AD4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80226AD8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80226ADC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80226AE0: lw          $v0, -0x7A88($at)
    ctx->r2 = MEM_W(ctx->r1, -0X7A88);
    // 0x80226AE4: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80226AE8: sw          $v0, -0x7598($at)
    MEM_W(-0X7598, ctx->r1) = ctx->r2;
    // 0x80226AEC: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80226AF0: lw          $v0, -0x7598($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7598);
    // 0x80226AF4: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80226AF8: sh          $zero, -0x7594($at)
    MEM_H(-0X7594, ctx->r1) = 0;
    // 0x80226AFC: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x80226B00: addiu       $a2, $zero, 0x33
    ctx->r6 = ADD32(0, 0X33);
    // 0x80226B04: jal         0x8003B85C
    // 0x80226B08: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_2;
    // 0x80226B08: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_2:
    // 0x80226B0C: lw          $a0, 0x88($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X88);
    // 0x80226B10: lui         $a1, 0x13
    ctx->r5 = S32(0X13 << 16);
    // 0x80226B14: ori         $a1, $a1, 0x12
    ctx->r5 = ctx->r5 | 0X12;
    // 0x80226B18: jal         0x8003B840
    // 0x80226B1C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_3;
    // 0x80226B1C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_3:
    // 0x80226B20: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80226B24: lw          $v0, -0x758C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X758C);
    // 0x80226B28: addiu       $v0, $v0, 0x6
    ctx->r2 = ADD32(ctx->r2, 0X6);
    // 0x80226B2C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80226B30: sw          $v0, -0x758C($at)
    MEM_W(-0X758C, ctx->r1) = ctx->r2;
L_80226B34:
    // 0x80226B34: jal         0x80226880
    // 0x80226B38: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80226880_ovl26(rdram, ctx);
        goto after_4;
    // 0x80226B38: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80226B3C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80226B40: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80226B44: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226B48: jr          $ra
    // 0x80226B4C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80226B4C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80227270_ovl26(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227270: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227274: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227278: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022727C: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x80227280: addiu       $a1, $a1, -0x7580
    ctx->r5 = ADD32(ctx->r5, -0X7580);
    // 0x80227284: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227288: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
    // 0x8022728C: beq         $a0, $zero, L_8022731C
    if (ctx->r4 == 0) {
        // 0x80227290: nop
    
            goto L_8022731C;
    }
    // 0x80227290: nop

    // 0x80227294: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x80227298: lw          $v1, -0x7580($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7580);
    // 0x8022729C: lh          $v0, 0x2($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X2);
    // 0x802272A0: beq         $v0, $zero, L_8022731C
    if (ctx->r2 == 0) {
        // 0x802272A4: nop
    
            goto L_8022731C;
    }
    // 0x802272A4: nop

    // 0x802272A8: bgez        $v0, L_802272B8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802272AC: sll         $v0, $v0, 2
        ctx->r2 = S32(ctx->r2 << 2);
            goto L_802272B8;
    }
    // 0x802272AC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802272B0: j           L_802272E0
    // 0x802272B4: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
        goto L_802272E0;
    // 0x802272B4: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
L_802272B8:
    // 0x802272B8: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802272BC: lhu         $v0, -0x757C($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X757C);
    // 0x802272C0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802272C4: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802272C8: sh          $v0, -0x757C($at)
    MEM_H(-0X757C, ctx->r1) = ctx->r2;
    // 0x802272CC: lh          $v1, 0x2($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X2);
    // 0x802272D0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802272D4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802272D8: bne         $v0, $v1, L_8022731C
    if (ctx->r2 != ctx->r3) {
        // 0x802272DC: addiu       $v0, $a0, 0x4
        ctx->r2 = ADD32(ctx->r4, 0X4);
            goto L_8022731C;
    }
    // 0x802272DC: addiu       $v0, $a0, 0x4
    ctx->r2 = ADD32(ctx->r4, 0X4);
L_802272E0:
    // 0x802272E0: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x802272E4: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802272E8: lw          $v0, -0x7580($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7580);
    // 0x802272EC: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    // 0x802272F0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802272F4: sh          $zero, -0x757C($at)
    MEM_H(-0X757C, ctx->r1) = 0;
    // 0x802272F8: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x802272FC: addiu       $a2, $zero, 0x37
    ctx->r6 = ADD32(0, 0X37);
    // 0x80227300: jal         0x8003B85C
    // 0x80227304: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_0;
    // 0x80227304: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_0:
    // 0x80227308: lw          $a0, 0x88($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X88);
    // 0x8022730C: lui         $a1, 0x11
    ctx->r5 = S32(0X11 << 16);
    // 0x80227310: ori         $a1, $a1, 0x10
    ctx->r5 = ctx->r5 | 0X10;
    // 0x80227314: jal         0x8003B840
    // 0x80227318: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_1;
    // 0x80227318: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_1:
L_8022731C:
    // 0x8022731C: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x80227320: addiu       $a1, $a1, -0x7578
    ctx->r5 = ADD32(ctx->r5, -0X7578);
    // 0x80227324: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
    // 0x80227328: beq         $a0, $zero, L_802273B8
    if (ctx->r4 == 0) {
        // 0x8022732C: nop
    
            goto L_802273B8;
    }
    // 0x8022732C: nop

    // 0x80227330: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x80227334: lw          $v1, -0x7578($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7578);
    // 0x80227338: lh          $v0, 0x2($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X2);
    // 0x8022733C: beq         $v0, $zero, L_802273B8
    if (ctx->r2 == 0) {
        // 0x80227340: nop
    
            goto L_802273B8;
    }
    // 0x80227340: nop

    // 0x80227344: bgez        $v0, L_80227354
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80227348: sll         $v0, $v0, 2
        ctx->r2 = S32(ctx->r2 << 2);
            goto L_80227354;
    }
    // 0x80227348: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022734C: j           L_8022737C
    // 0x80227350: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
        goto L_8022737C;
    // 0x80227350: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
L_80227354:
    // 0x80227354: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80227358: lhu         $v0, -0x7574($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X7574);
    // 0x8022735C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227360: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227364: sh          $v0, -0x7574($at)
    MEM_H(-0X7574, ctx->r1) = ctx->r2;
    // 0x80227368: lh          $v1, 0x2($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X2);
    // 0x8022736C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227370: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80227374: bne         $v0, $v1, L_802273B8
    if (ctx->r2 != ctx->r3) {
        // 0x80227378: addiu       $v0, $a0, 0x4
        ctx->r2 = ADD32(ctx->r4, 0X4);
            goto L_802273B8;
    }
    // 0x80227378: addiu       $v0, $a0, 0x4
    ctx->r2 = ADD32(ctx->r4, 0X4);
L_8022737C:
    // 0x8022737C: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x80227380: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80227384: lw          $v0, -0x7578($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7578);
    // 0x80227388: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    // 0x8022738C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227390: sh          $zero, -0x7574($at)
    MEM_H(-0X7574, ctx->r1) = 0;
    // 0x80227394: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x80227398: addiu       $a2, $zero, 0x37
    ctx->r6 = ADD32(0, 0X37);
    // 0x8022739C: jal         0x8003B85C
    // 0x802273A0: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_2;
    // 0x802273A0: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_2:
    // 0x802273A4: lw          $a0, 0x88($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X88);
    // 0x802273A8: lui         $a1, 0x13
    ctx->r5 = S32(0X13 << 16);
    // 0x802273AC: ori         $a1, $a1, 0x12
    ctx->r5 = ctx->r5 | 0X12;
    // 0x802273B0: jal         0x8003B840
    // 0x802273B4: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_3;
    // 0x802273B4: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_3:
L_802273B8:
    // 0x802273B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802273BC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802273C0: jr          $ra
    // 0x802273C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802273C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
