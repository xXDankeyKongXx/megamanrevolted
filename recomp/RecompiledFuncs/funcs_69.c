#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80227810_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227810: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227814: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80227818: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x8022781C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80227820: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80227824: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80227828: lw          $v0, 0x3F00($at)
    ctx->r2 = MEM_W(ctx->r1, 0X3F00);
    // 0x8022782C: jalr        $v0
    // 0x80227830: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80227830: nop

    after_0:
    // 0x80227834: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80227838: jr          $ra
    // 0x8022783C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022783C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802285B4_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802285B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802285B8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802285BC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802285C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802285C4: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x802285C8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802285CC: beq         $v1, $v0, L_80228604
    if (ctx->r3 == ctx->r2) {
        // 0x802285D0: addiu       $a0, $zero, 0x14
        ctx->r4 = ADD32(0, 0X14);
            goto L_80228604;
    }
    // 0x802285D0: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    // 0x802285D4: lw          $v0, 0xA4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA4);
    // 0x802285D8: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x802285DC: jalr        $v0
    // 0x802285E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802285E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x802285E4: jal         0x8006072C
    // 0x802285E8: nop

    func_8006072C_3BB2C(rdram, ctx);
        goto after_1;
    // 0x802285E8: nop

    after_1:
    // 0x802285EC: bne         $v0, $zero, L_80228604
    if (ctx->r2 != 0) {
        // 0x802285F0: addiu       $a0, $zero, 0x8
        ctx->r4 = ADD32(0, 0X8);
            goto L_80228604;
    }
    // 0x802285F0: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x802285F4: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x802285F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802285FC: bne         $v1, $v0, L_8022861C
    if (ctx->r3 != ctx->r2) {
        // 0x80228600: nop
    
            goto L_8022861C;
    }
    // 0x80228600: nop

L_80228604:
    // 0x80228604: jal         0x80036E48
    // 0x80228608: nop

    func_80036E48_12248(rdram, ctx);
        goto after_2;
    // 0x80228608: nop

    after_2:
    // 0x8022860C: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80228610: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x80228614: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228618: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_8022861C:
    // 0x8022861C: jal         0x8005FB90
    // 0x80228620: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_3;
    // 0x80228620: nop

    after_3:
    // 0x80228624: jal         0x80060018
    // 0x80228628: nop

    func_80060018_3B418(rdram, ctx);
        goto after_4;
    // 0x80228628: nop

    after_4:
    // 0x8022862C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80228630: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228634: jr          $ra
    // 0x80228638: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228638: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023B294_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B294: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023B298: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023B29C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023B2A0: lui         $v1, 0xFF
    ctx->r3 = S32(0XFF << 16);
    // 0x8023B2A4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8023B2A8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8023B2AC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023B2B0: lw          $a0, 0x458($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X458);
    // 0x8023B2B4: lhu         $v0, 0x440($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X440);
    // 0x8023B2B8: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x8023B2BC: addiu       $s2, $s0, 0x440
    ctx->r18 = ADD32(ctx->r16, 0X440);
    // 0x8023B2C0: and         $s1, $a0, $v1
    ctx->r17 = ctx->r4 & ctx->r3;
    // 0x8023B2C4: andi        $v0, $v0, 0xF6FF
    ctx->r2 = ctx->r2 & 0XF6FF;
    // 0x8023B2C8: beq         $s1, $zero, L_8023B410
    if (ctx->r17 == 0) {
        // 0x8023B2CC: sh          $v0, 0x440($s0)
        MEM_H(0X440, ctx->r16) = ctx->r2;
            goto L_8023B410;
    }
    // 0x8023B2CC: sh          $v0, 0x440($s0)
    MEM_H(0X440, ctx->r16) = ctx->r2;
    // 0x8023B2D0: lui         $v0, 0x3800
    ctx->r2 = S32(0X3800 << 16);
    // 0x8023B2D4: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x8023B2D8: beql        $v0, $zero, L_8023B408
    if (ctx->r2 == 0) {
        // 0x8023B2DC: addiu       $a0, $zero, 0xA3
        ctx->r4 = ADD32(0, 0XA3);
            goto L_8023B408;
    }
    goto skip_0;
    // 0x8023B2DC: addiu       $a0, $zero, 0xA3
    ctx->r4 = ADD32(0, 0XA3);
    skip_0:
    // 0x8023B2E0: lhu         $v0, 0x44E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X44E);
    // 0x8023B2E4: bne         $v0, $zero, L_8023B2F8
    if (ctx->r2 != 0) {
        // 0x8023B2E8: sh          $zero, 0x44C($s0)
        MEM_H(0X44C, ctx->r16) = 0;
            goto L_8023B2F8;
    }
    // 0x8023B2E8: sh          $zero, 0x44C($s0)
    MEM_H(0X44C, ctx->r16) = 0;
    // 0x8023B2EC: lhu         $v0, 0x440($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X440);
    // 0x8023B2F0: andi        $v0, $v0, 0xFBFF
    ctx->r2 = ctx->r2 & 0XFBFF;
    // 0x8023B2F4: sh          $v0, 0x440($s0)
    MEM_H(0X440, ctx->r16) = ctx->r2;
L_8023B2F8:
    // 0x8023B2F8: lhu         $v0, 0x440($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X440);
    // 0x8023B2FC: lhu         $v1, 0x6E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X6E);
    // 0x8023B300: lhu         $a0, 0x6E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X6E);
    // 0x8023B304: ori         $v0, $v0, 0x900
    ctx->r2 = ctx->r2 | 0X900;
    // 0x8023B308: subu        $v1, $v1, $s1
    ctx->r3 = SUB32(ctx->r3, ctx->r17);
    // 0x8023B30C: sh          $v1, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r3;
    // 0x8023B310: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8023B314: sh          $v0, 0x440($s0)
    MEM_H(0X440, ctx->r16) = ctx->r2;
    // 0x8023B318: bgtz        $v1, L_8023B384
    if (SIGNED(ctx->r3) > 0) {
        // 0x8023B31C: sh          $a0, 0xB2($s0)
        MEM_H(0XB2, ctx->r16) = ctx->r4;
            goto L_8023B384;
    }
    // 0x8023B31C: sh          $a0, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r4;
    // 0x8023B320: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8023B324: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023B328: beq         $v1, $v0, L_8023B380
    if (ctx->r3 == ctx->r2) {
        // 0x8023B32C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023B380;
    }
    // 0x8023B32C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023B330: jal         0x8006FF58
    // 0x8023B334: nop

    func_8006FF58_4B358(rdram, ctx);
        goto after_0;
    // 0x8023B334: nop

    after_0:
    // 0x8023B338: beq         $v0, $zero, L_8023B380
    if (ctx->r2 == 0) {
        // 0x8023B33C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023B380;
    }
    // 0x8023B33C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023B340: lhu         $v1, 0x440($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X440);
    // 0x8023B344: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x8023B348: lui         $a0, 0x8019
    ctx->r4 = S32(0X8019 << 16);
    // 0x8023B34C: lw          $a0, 0x3C60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3C60);
    // 0x8023B350: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    // 0x8023B354: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
    // 0x8023B358: andi        $v1, $v1, 0xFFF3
    ctx->r3 = ctx->r3 & 0XFFF3;
    // 0x8023B35C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023B360: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8023B364: sh          $v1, 0x440($s0)
    MEM_H(0X440, ctx->r16) = ctx->r3;
    // 0x8023B368: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8023B36C: lbu         $s1, 0x9($v0)
    ctx->r17 = MEM_BU(ctx->r2, 0X9);
    // 0x8023B370: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8023B374: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8023B378: j           L_8023B384
    // 0x8023B37C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
        goto L_8023B384;
    // 0x8023B37C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_8023B380:
    // 0x8023B380: sh          $v0, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r2;
L_8023B384:
    // 0x8023B384: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x8023B388: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x8023B38C: beq         $v0, $zero, L_8023B3F4
    if (ctx->r2 == 0) {
        // 0x8023B390: addiu       $a0, $zero, 0xA0
        ctx->r4 = ADD32(0, 0XA0);
            goto L_8023B3F4;
    }
    // 0x8023B390: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x8023B394: lhu         $v0, 0xA($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0XA);
    // 0x8023B398: lw          $v1, 0x18($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X18);
    // 0x8023B39C: addu        $a0, $v0, $s1
    ctx->r4 = ADD32(ctx->r2, ctx->r17);
    // 0x8023B3A0: lui         $v0, 0x2000
    ctx->r2 = S32(0X2000 << 16);
    // 0x8023B3A4: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x8023B3A8: bne         $v1, $zero, L_8023B3E0
    if (ctx->r3 != 0) {
        // 0x8023B3AC: sh          $a0, 0xA($s2)
        MEM_H(0XA, ctx->r18) = ctx->r4;
            goto L_8023B3E0;
    }
    // 0x8023B3AC: sh          $a0, 0xA($s2)
    MEM_H(0XA, ctx->r18) = ctx->r4;
    // 0x8023B3B0: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x8023B3B4: lui         $v1, 0x8019
    ctx->r3 = S32(0X8019 << 16);
    // 0x8023B3B8: lw          $v1, 0x3C60($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3C60);
    // 0x8023B3BC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023B3C0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023B3C4: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8023B3C8: lbu         $v1, 0x9($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X9);
    // 0x8023B3CC: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x8023B3D0: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023B3D4: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8023B3D8: bne         $v0, $zero, L_8023B400
    if (ctx->r2 != 0) {
        // 0x8023B3DC: addiu       $v0, $zero, 0x7FFF
        ctx->r2 = ADD32(0, 0X7FFF);
            goto L_8023B400;
    }
    // 0x8023B3DC: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
L_8023B3E0:
    // 0x8023B3E0: addiu       $a0, $zero, 0xA2
    ctx->r4 = ADD32(0, 0XA2);
    // 0x8023B3E4: jal         0x8002A33C
    // 0x8023B3E8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x8023B3E8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_1:
    // 0x8023B3EC: j           L_8023B3FC
    // 0x8023B3F0: sh          $zero, 0xA($s2)
    MEM_H(0XA, ctx->r18) = 0;
        goto L_8023B3FC;
    // 0x8023B3F0: sh          $zero, 0xA($s2)
    MEM_H(0XA, ctx->r18) = 0;
L_8023B3F4:
    // 0x8023B3F4: jal         0x8002A33C
    // 0x8023B3F8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x8023B3F8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_2:
L_8023B3FC:
    // 0x8023B3FC: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
L_8023B400:
    // 0x8023B400: j           L_8023B410
    // 0x8023B404: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
        goto L_8023B410;
    // 0x8023B404: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
L_8023B408:
    // 0x8023B408: jal         0x8002A33C
    // 0x8023B40C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_3;
    // 0x8023B40C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_3:
L_8023B410:
    // 0x8023B410: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023B414: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8023B418: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8023B41C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023B420: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023B424: jr          $ra
    // 0x8023B428: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023B428: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8023B42C: nop

;}
RECOMP_FUNC void func_802340E0_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802340E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802340E4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802340E8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802340EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802340F0: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x802340F4: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    // 0x802340F8: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x802340FC: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80234100: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x80234104: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80234108: jal         0x8004D5D4
    // 0x8023410C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8023410C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x80234110: lbu         $a0, 0x3($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X3);
    // 0x80234114: lbu         $v1, 0x32F($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X32F);
    // 0x80234118: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8023411C: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80234120: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80234124: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80234128: addiu       $v0, $zero, 0x5E
    ctx->r2 = ADD32(0, 0X5E);
    // 0x8023412C: sh          $v0, 0x32C($s0)
    MEM_H(0X32C, ctx->r16) = ctx->r2;
    // 0x80234130: sw          $zero, 0x330($s0)
    MEM_W(0X330, ctx->r16) = 0;
    // 0x80234134: sw          $zero, 0x334($s0)
    MEM_W(0X334, ctx->r16) = 0;
    // 0x80234138: sw          $zero, 0x340($s0)
    MEM_W(0X340, ctx->r16) = 0;
    // 0x8023413C: sw          $zero, 0x344($s0)
    MEM_W(0X344, ctx->r16) = 0;
    // 0x80234140: sw          $zero, 0x354($s0)
    MEM_W(0X354, ctx->r16) = 0;
    // 0x80234144: sb          $zero, 0x36C($s0)
    MEM_B(0X36C, ctx->r16) = 0;
    // 0x80234148: sb          $zero, 0x36B($s0)
    MEM_B(0X36B, ctx->r16) = 0;
    // 0x8023414C: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x80234150: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80234154: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80234158: andi        $v1, $v1, 0x1
    ctx->r3 = ctx->r3 & 0X1;
    // 0x8023415C: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80234160: sb          $v1, 0x36A($s0)
    MEM_B(0X36A, ctx->r16) = ctx->r3;
    // 0x80234164: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80234168: lw          $a1, 0x298($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X298);
    // 0x8023416C: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80234170: addiu       $v1, $v1, 0x5D7C
    ctx->r3 = ADD32(ctx->r3, 0X5D7C);
    // 0x80234174: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80234178: sw          $v0, 0x364($s0)
    MEM_W(0X364, ctx->r16) = ctx->r2;
    // 0x8023417C: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x80234180: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    // 0x80234184: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80234188: lbu         $a0, 0xC($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XC);
    // 0x8023418C: lbu         $v1, 0x8($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X8);
    // 0x80234190: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80234194: addiu       $v0, $v0, 0x5D70
    ctx->r2 = ADD32(ctx->r2, 0X5D70);
    // 0x80234198: andi        $a0, $a0, 0x10
    ctx->r4 = ctx->r4 & 0X10;
    // 0x8023419C: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    // 0x802341A0: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x802341A4: sh          $v1, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r3;
    // 0x802341A8: sh          $v1, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r3;
    // 0x802341AC: beq         $a0, $zero, L_802341BC
    if (ctx->r4 == 0) {
        // 0x802341B0: sh          $v1, 0xB2($s0)
        MEM_H(0XB2, ctx->r16) = ctx->r3;
            goto L_802341BC;
    }
    // 0x802341B0: sh          $v1, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r3;
    // 0x802341B4: j           L_802341C0
    // 0x802341B8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_802341C0;
    // 0x802341B8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_802341BC:
    // 0x802341BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802341C0:
    // 0x802341C0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x802341C4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802341C8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x802341CC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802341D0: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x802341D4: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x802341D8: jal         0x80050294
    // 0x802341DC: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x802341DC: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    after_1:
    // 0x802341E0: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x802341E4: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x802341E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802341EC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802341F0: jr          $ra
    // 0x802341F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802341F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023569C_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023569C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802356A0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802356A4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802356A8: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x802356AC: addiu       $a0, $a0, -0x3A50
    ctx->r4 = ADD32(ctx->r4, -0X3A50);
    // 0x802356B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802356B4: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x802356B8: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x802356BC: addiu       $a1, $a1, 0x49B0
    ctx->r5 = ADD32(ctx->r5, 0X49B0);
    // 0x802356C0: bne         $v0, $zero, L_802356CC
    if (ctx->r2 != 0) {
        // 0x802356C4: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_802356CC;
    }
    // 0x802356C4: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x802356C8: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_802356CC:
    // 0x802356CC: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x802356D0: sltiu       $v0, $v1, 0xB
    ctx->r2 = ctx->r3 < 0XB ? 1 : 0;
    // 0x802356D4: beq         $v0, $zero, L_8023590C
    if (ctx->r2 == 0) {
        // 0x802356D8: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8023590C;
    }
    // 0x802356D8: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x802356DC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802356E0: addu        $at, $at, $v0
    gpr jr_addend_802356E8 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802356E4: lw          $v0, 0x72C0($at)
    ctx->r2 = ADD32(ctx->r1, 0X72C0);
    // 0x802356E8: jr          $v0
    // 0x802356EC: nop

    switch (jr_addend_802356E8 >> 2) {
        case 0: goto L_802356F0; break;
        case 1: goto L_80235704; break;
        case 2: goto L_8023573C; break;
        case 3: goto L_80235768; break;
        case 4: goto L_802357A8; break;
        case 5: goto L_802357DC; break;
        case 6: goto L_802357F8; break;
        case 7: goto L_80235844; break;
        case 8: goto L_802358DC; break;
        case 9: goto L_8023590C; break;
        case 10: goto L_802358FC; break;
        default: switch_error(__func__, 0x802356E8, 0x802472C0);
    }
    // 0x802356EC: nop

L_802356F0:
    // 0x802356F0: jal         0x80235A78
    // 0x802356F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80235A78_ovl5(rdram, ctx);
        goto after_0;
    // 0x802356F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x802356F8: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802356FC: j           L_802358D4
    // 0x80235700: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_802358D4;
    // 0x80235700: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80235704:
    // 0x80235704: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80235708: lb          $v1, -0x3C17($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3C17);
    // 0x8023570C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80235710: bne         $v1, $v0, L_8023590C
    if (ctx->r3 != ctx->r2) {
        // 0x80235714: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8023590C;
    }
    // 0x80235714: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80235718: jal         0x800616FC
    // 0x8023571C: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_1;
    // 0x8023571C: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    after_1:
    // 0x80235720: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235724: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x80235728: jal         0x80050294
    // 0x8023572C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x8023572C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x80235730: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80235734: j           L_802358D4
    // 0x80235738: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_802358D4;
    // 0x80235738: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8023573C:
    // 0x8023573C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80235740: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80235744: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80235748: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8023574C: bne         $v0, $zero, L_8023590C
    if (ctx->r2 != 0) {
        // 0x80235750: nop
    
            goto L_8023590C;
    }
    // 0x80235750: nop

    // 0x80235754: jal         0x800600F8
    // 0x80235758: nop

    func_800600F8_3B4F8(rdram, ctx);
        goto after_3;
    // 0x80235758: nop

    after_3:
    // 0x8023575C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80235760: j           L_802358D4
    // 0x80235764: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_802358D4;
    // 0x80235764: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80235768:
    // 0x80235768: lbu         $v1, 0x9($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X9);
    // 0x8023576C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80235770: bne         $v1, $v0, L_8023579C
    if (ctx->r3 != ctx->r2) {
        // 0x80235774: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8023579C;
    }
    // 0x80235774: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80235778: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8023577C: lh          $a3, 0x64($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X64);
    // 0x80235780: jal         0x8004F820
    // 0x80235784: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_4;
    // 0x80235784: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_4:
    // 0x80235788: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8023578C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80235790: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80235794: j           L_8023590C
    // 0x80235798: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
        goto L_8023590C;
    // 0x80235798: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
L_8023579C:
    // 0x8023579C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802357A0: j           L_802358D4
    // 0x802357A4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_802358D4;
    // 0x802357A4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_802357A8:
    // 0x802357A8: lbu         $v1, 0x9($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X9);
    // 0x802357AC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802357B0: bne         $v1, $v0, L_8023590C
    if (ctx->r3 != ctx->r2) {
        // 0x802357B4: addiu       $v0, $zero, 0xA0
        ctx->r2 = ADD32(0, 0XA0);
            goto L_8023590C;
    }
    // 0x802357B4: addiu       $v0, $zero, 0xA0
    ctx->r2 = ADD32(0, 0XA0);
    // 0x802357B8: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x802357BC: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x802357C0: addiu       $v0, $zero, -0x12C
    ctx->r2 = ADD32(0, -0X12C);
    // 0x802357C4: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x802357C8: addiu       $v0, $zero, 0x700
    ctx->r2 = ADD32(0, 0X700);
    // 0x802357CC: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x802357D0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802357D4: j           L_8023590C
    // 0x802357D8: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
        goto L_8023590C;
    // 0x802357D8: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
L_802357DC:
    // 0x802357DC: lbu         $v1, 0x9($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X9);
    // 0x802357E0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802357E4: bne         $v1, $v0, L_8023590C
    if (ctx->r3 != ctx->r2) {
        // 0x802357E8: nop
    
            goto L_8023590C;
    }
    // 0x802357E8: nop

    // 0x802357EC: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802357F0: j           L_802358D4
    // 0x802357F4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_802358D4;
    // 0x802357F4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_802357F8:
    // 0x802357F8: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x802357FC: lh          $a3, 0x64($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X64);
    // 0x80235800: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80235804: jal         0x8004F820
    // 0x80235808: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_5;
    // 0x80235808: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_5:
    // 0x8023580C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80235810: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80235814: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80235818: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023581C: bne         $v0, $zero, L_8023590C
    if (ctx->r2 != 0) {
        // 0x80235820: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_8023590C;
    }
    // 0x80235820: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x80235824: jal         0x8003516C
    // 0x80235828: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_6;
    // 0x80235828: nop

    after_6:
    // 0x8023582C: bne         $v0, $zero, L_8023590C
    if (ctx->r2 != 0) {
        // 0x80235830: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8023590C;
    }
    // 0x80235830: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80235834: jal         0x800616FC
    // 0x80235838: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_7;
    // 0x80235838: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    after_7:
    // 0x8023583C: j           L_802358C8
    // 0x80235840: nop

        goto L_802358C8;
    // 0x80235840: nop

L_80235844:
    // 0x80235844: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80235848: lw          $v1, 0x3FF0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3FF0);
    // 0x8023584C: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x80235850: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x80235854: bne         $v0, $zero, L_8023590C
    if (ctx->r2 != 0) {
        // 0x80235858: andi        $v0, $v1, 0xFF
        ctx->r2 = ctx->r3 & 0XFF;
            goto L_8023590C;
    }
    // 0x80235858: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x8023585C: bne         $v0, $zero, L_80235878
    if (ctx->r2 != 0) {
        // 0x80235860: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80235878;
    }
    // 0x80235860: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80235864: jal         0x800600F8
    // 0x80235868: nop

    func_800600F8_3B4F8(rdram, ctx);
        goto after_8;
    // 0x80235868: nop

    after_8:
    // 0x8023586C: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80235870: j           L_8023590C
    // 0x80235874: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_8023590C;
    // 0x80235874: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80235878:
    // 0x80235878: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8023587C: lh          $a3, 0x64($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X64);
    // 0x80235880: jal         0x8004F820
    // 0x80235884: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_9;
    // 0x80235884: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_9:
    // 0x80235888: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8023588C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80235890: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80235894: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80235898: bne         $v0, $zero, L_8023590C
    if (ctx->r2 != 0) {
        // 0x8023589C: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_8023590C;
    }
    // 0x8023589C: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x802358A0: jal         0x8003516C
    // 0x802358A4: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_10;
    // 0x802358A4: nop

    after_10:
    // 0x802358A8: bne         $v0, $zero, L_8023590C
    if (ctx->r2 != 0) {
        // 0x802358AC: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8023590C;
    }
    // 0x802358AC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802358B0: jal         0x800616FC
    // 0x802358B4: addiu       $a1, $zero, 0x31
    ctx->r5 = ADD32(0, 0X31);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_11;
    // 0x802358B4: addiu       $a1, $zero, 0x31
    ctx->r5 = ADD32(0, 0X31);
    after_11:
    // 0x802358B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802358BC: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x802358C0: jal         0x80050294
    // 0x802358C4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_12;
    // 0x802358C4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_12:
L_802358C8:
    // 0x802358C8: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802358CC: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x802358D0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_802358D4:
    // 0x802358D4: j           L_8023590C
    // 0x802358D8: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_8023590C;
    // 0x802358D8: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_802358DC:
    // 0x802358DC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802358E0: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x802358E4: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x802358E8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x802358EC: bne         $v0, $zero, L_8023590C
    if (ctx->r2 != 0) {
        // 0x802358F0: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_8023590C;
    }
    // 0x802358F0: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x802358F4: j           L_8023590C
    // 0x802358F8: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_8023590C;
    // 0x802358F8: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_802358FC:
    // 0x802358FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80235900: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x80235904: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80235908: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_8023590C:
    // 0x8023590C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80235910: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80235914: jr          $ra
    // 0x80235918: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80235918: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802332B8_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802332B8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802332BC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802332C0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802332C4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802332C8: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x802332CC: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x802332D0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x802332D4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802332D8: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x802332DC: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
    // 0x802332E0: bne         $v0, $zero, L_80233348
    if (ctx->r2 != 0) {
        // 0x802332E4: addiu       $s3, $s0, 0x328
        ctx->r19 = ADD32(ctx->r16, 0X328);
            goto L_80233348;
    }
    // 0x802332E4: addiu       $s3, $s0, 0x328
    ctx->r19 = ADD32(ctx->r16, 0X328);
    // 0x802332E8: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x802332EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802332F0: beq         $v1, $zero, L_8023330C
    if (ctx->r3 == 0) {
        // 0x802332F4: sb          $v0, 0xB($s0)
        MEM_B(0XB, ctx->r16) = ctx->r2;
            goto L_8023330C;
    }
    // 0x802332F4: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x802332F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802332FC: beq         $v1, $v0, L_80233324
    if (ctx->r3 == ctx->r2) {
        // 0x80233300: nop
    
            goto L_80233324;
    }
    // 0x80233300: nop

    // 0x80233304: j           L_802334CC
    // 0x80233308: nop

        goto L_802334CC;
    // 0x80233308: nop

L_8023330C:
    // 0x8023330C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80233310: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80233314: addiu       $v0, $zero, 0x8D
    ctx->r2 = ADD32(0, 0X8D);
    // 0x80233318: sh          $v0, 0x330($s0)
    MEM_H(0X330, ctx->r16) = ctx->r2;
    // 0x8023331C: j           L_802334CC
    // 0x80233320: sh          $zero, 0x332($s0)
    MEM_H(0X332, ctx->r16) = 0;
        goto L_802334CC;
    // 0x80233320: sh          $zero, 0x332($s0)
    MEM_H(0X332, ctx->r16) = 0;
L_80233324:
    // 0x80233324: lhu         $v0, 0x332($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X332);
    // 0x80233328: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8023332C: beq         $v0, $zero, L_8023333C
    if (ctx->r2 == 0) {
        // 0x80233330: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_8023333C;
    }
    // 0x80233330: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80233334: j           L_802334CC
    // 0x80233338: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_802334CC;
    // 0x80233338: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8023333C:
    // 0x8023333C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80233340: j           L_802334CC
    // 0x80233344: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_802334CC;
    // 0x80233344: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_80233348:
    // 0x80233348: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8023334C: beq         $v1, $zero, L_80233364
    if (ctx->r3 == 0) {
        // 0x80233350: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80233364;
    }
    // 0x80233350: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80233354: beq         $v1, $v0, L_802334A8
    if (ctx->r3 == ctx->r2) {
        // 0x80233358: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_802334A8;
    }
    // 0x80233358: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8023335C: j           L_802334CC
    // 0x80233360: nop

        goto L_802334CC;
    // 0x80233360: nop

L_80233364:
    // 0x80233364: lhu         $v0, 0x330($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X330);
    // 0x80233368: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023336C: sh          $v0, 0x330($s0)
    MEM_H(0X330, ctx->r16) = ctx->r2;
    // 0x80233370: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80233374: beq         $v0, $zero, L_80233484
    if (ctx->r2 == 0) {
        // 0x80233378: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80233484;
    }
    // 0x80233378: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023337C: lb          $v1, 0xA6($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA6);
    // 0x80233380: bne         $v1, $v0, L_8023348C
    if (ctx->r3 != ctx->r2) {
        // 0x80233384: andi        $v0, $s4, 0xFF
        ctx->r2 = ctx->r20 & 0XFF;
            goto L_8023348C;
    }
    // 0x80233384: andi        $v0, $s4, 0xFF
    ctx->r2 = ctx->r20 & 0XFF;
    // 0x80233388: lhu         $v0, 0x332($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X332);
    // 0x8023338C: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x80233390: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80233394: bne         $v1, $zero, L_802333A4
    if (ctx->r3 != 0) {
        // 0x80233398: sh          $v0, 0x332($s0)
        MEM_H(0X332, ctx->r16) = ctx->r2;
            goto L_802333A4;
    }
    // 0x80233398: sh          $v0, 0x332($s0)
    MEM_H(0X332, ctx->r16) = ctx->r2;
    // 0x8023339C: j           L_802333A8
    // 0x802333A0: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
        goto L_802333A8;
    // 0x802333A0: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
L_802333A4:
    // 0x802333A4: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
L_802333A8:
    // 0x802333A8: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x802333AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802333B0: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x802333B4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802333B8: jal         0x8004DA90
    // 0x802333BC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x802333BC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x802333C0: jal         0x8003F754
    // 0x802333C4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003F754_1AB54(rdram, ctx);
        goto after_1;
    // 0x802333C4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x802333C8: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x802333CC: beql        $s1, $zero, L_8023345C
    if (ctx->r17 == 0) {
        // 0x802333D0: addiu       $s4, $zero, 0x1
        ctx->r20 = ADD32(0, 0X1);
            goto L_8023345C;
    }
    goto skip_0;
    // 0x802333D0: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    skip_0:
    // 0x802333D4: jal         0x800715F8
    // 0x802333D8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_800715F8_4C9F8(rdram, ctx);
        goto after_2;
    // 0x802333D8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
    // 0x802333DC: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x802333E0: lbu         $v1, -0x3A50($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3A50);
    // 0x802333E4: bne         $v1, $zero, L_8023345C
    if (ctx->r3 != 0) {
        // 0x802333E8: addu        $s2, $v0, $zero
        ctx->r18 = ADD32(ctx->r2, 0);
            goto L_8023345C;
    }
    // 0x802333E8: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x802333EC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802333F0: jal         0x800711A8
    // 0x802333F4: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_800711A8_4C5A8(rdram, ctx);
        goto after_3;
    // 0x802333F4: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_3:
    // 0x802333F8: beql        $s2, $zero, L_8023345C
    if (ctx->r18 == 0) {
        // 0x802333FC: addiu       $s4, $zero, 0x1
        ctx->r20 = ADD32(0, 0X1);
            goto L_8023345C;
    }
    goto skip_1;
    // 0x802333FC: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    skip_1:
    // 0x80233400: lhu         $v0, 0xA($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0XA);
    // 0x80233404: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80233408: bne         $v0, $zero, L_80233414
    if (ctx->r2 != 0) {
        // 0x8023340C: addiu       $a0, $s0, 0x190
        ctx->r4 = ADD32(ctx->r16, 0X190);
            goto L_80233414;
    }
    // 0x8023340C: addiu       $a0, $s0, 0x190
    ctx->r4 = ADD32(ctx->r16, 0X190);
    // 0x80233410: addiu       $a0, $s0, 0x1A0
    ctx->r4 = ADD32(ctx->r16, 0X1A0);
L_80233414:
    // 0x80233414: jal         0x80233B98
    // 0x80233418: nop

    func_80233B98_ovl5(rdram, ctx);
        goto after_4;
    // 0x80233418: nop

    after_4:
    // 0x8023341C: slti        $v0, $s2, 0x6
    ctx->r2 = SIGNED(ctx->r18) < 0X6 ? 1 : 0;
    // 0x80233420: bnel        $v0, $zero, L_80233448
    if (ctx->r2 != 0) {
        // 0x80233424: addiu       $s4, $zero, 0x1
        ctx->r20 = ADD32(0, 0X1);
            goto L_80233448;
    }
    goto skip_2;
    // 0x80233424: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    skip_2:
    // 0x80233428: lh          $v1, 0xA($s3)
    ctx->r3 = MEM_H(ctx->r19, 0XA);
    // 0x8023342C: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x80233430: bne         $v1, $v0, L_8023344C
    if (ctx->r3 != ctx->r2) {
        // 0x80233434: addiu       $a0, $zero, 0xEC
        ctx->r4 = ADD32(0, 0XEC);
            goto L_8023344C;
    }
    // 0x80233434: addiu       $a0, $zero, 0xEC
    ctx->r4 = ADD32(0, 0XEC);
    // 0x80233438: lhu         $v0, 0x4($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X4);
    // 0x8023343C: ori         $v0, $v0, 0x400
    ctx->r2 = ctx->r2 | 0X400;
    // 0x80233440: j           L_8023344C
    // 0x80233444: sh          $v0, 0x4($s3)
    MEM_H(0X4, ctx->r19) = ctx->r2;
        goto L_8023344C;
    // 0x80233444: sh          $v0, 0x4($s3)
    MEM_H(0X4, ctx->r19) = ctx->r2;
L_80233448:
    // 0x80233448: addiu       $a0, $zero, 0xEC
    ctx->r4 = ADD32(0, 0XEC);
L_8023344C:
    // 0x8023344C: jal         0x8002A33C
    // 0x80233450: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_5;
    // 0x80233450: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_5:
    // 0x80233454: j           L_80233460
    // 0x80233458: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
        goto L_80233460;
    // 0x80233458: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
L_8023345C:
    // 0x8023345C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
L_80233460:
    // 0x80233460: addiu       $a1, $s0, 0x2C
    ctx->r5 = ADD32(ctx->r16, 0X2C);
    // 0x80233464: jal         0x8009A3B4
    // 0x80233468: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x80233468: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_6:
    // 0x8023346C: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80233470: addiu       $a1, $s0, 0x34
    ctx->r5 = ADD32(ctx->r16, 0X34);
    // 0x80233474: jal         0x8009A3B4
    // 0x80233478: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x80233478: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_7:
    // 0x8023347C: j           L_80233488
    // 0x80233480: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
        goto L_80233488;
    // 0x80233480: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
L_80233484:
    // 0x80233484: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
L_80233488:
    // 0x80233488: andi        $v0, $s4, 0xFF
    ctx->r2 = ctx->r20 & 0XFF;
L_8023348C:
    // 0x8023348C: beq         $v0, $zero, L_802334CC
    if (ctx->r2 == 0) {
        // 0x80233490: nop
    
            goto L_802334CC;
    }
    // 0x80233490: nop

    // 0x80233494: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80233498: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x8023349C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802334A0: j           L_802334CC
    // 0x802334A4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_802334CC;
    // 0x802334A4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802334A8:
    // 0x802334A8: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x802334AC: bne         $v1, $v0, L_802334CC
    if (ctx->r3 != ctx->r2) {
        // 0x802334B0: nop
    
            goto L_802334CC;
    }
    // 0x802334B0: nop

    // 0x802334B4: lhu         $v0, 0x32C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X32C);
    // 0x802334B8: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x802334BC: sh          $zero, 0x332($s0)
    MEM_H(0X332, ctx->r16) = 0;
    // 0x802334C0: sh          $zero, 0x330($s0)
    MEM_H(0X330, ctx->r16) = 0;
    // 0x802334C4: ori         $v0, $v0, 0x801
    ctx->r2 = ctx->r2 | 0X801;
    // 0x802334C8: sh          $v0, 0x32C($s0)
    MEM_H(0X32C, ctx->r16) = ctx->r2;
L_802334CC:
    // 0x802334CC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802334D0: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x802334D4: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x802334D8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x802334DC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802334E0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802334E4: jr          $ra
    // 0x802334E8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x802334E8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_802380B0_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802380B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802380B4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802380B8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802380BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802380C0: lbu         $a0, 0x9($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X9);
    // 0x802380C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802380C8: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x802380CC: beq         $v1, $v0, L_8023810C
    if (ctx->r3 == ctx->r2) {
        // 0x802380D0: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8023810C;
    }
    // 0x802380D0: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x802380D4: beq         $v0, $zero, L_802381BC
    if (ctx->r2 == 0) {
        // 0x802380D8: nop
    
            goto L_802381BC;
    }
    // 0x802380D8: nop

    // 0x802380DC: bne         $v1, $zero, L_802381BC
    if (ctx->r3 != 0) {
        // 0x802380E0: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_802381BC;
    }
    // 0x802380E0: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x802380E4: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x802380E8: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x802380EC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x802380F0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802380F4: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x802380F8: addiu       $v0, $zero, -0x40
    ctx->r2 = ADD32(0, -0X40);
    // 0x802380FC: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x80238100: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80238104: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x80238108: sh          $v0, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r2;
L_8023810C:
    // 0x8023810C: lhu         $a1, 0x44($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X44);
    // 0x80238110: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80238114: lhu         $a2, 0x46($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X46);
    // 0x80238118: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8023811C: sll         $a1, $a1, 20
    ctx->r5 = S32(ctx->r5 << 20);
    // 0x80238120: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x80238124: sll         $a2, $a2, 20
    ctx->r6 = S32(ctx->r6 << 20);
    // 0x80238128: jal         0x8004DA90
    // 0x8023812C: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x8023812C: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    after_0:
    // 0x80238130: lhu         $v0, 0x46($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X46);
    // 0x80238134: lhu         $v1, 0x4E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X4E);
    // 0x80238138: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023813C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80238140: jal         0x80040F30
    // 0x80238144: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    func_80040F30_1C330(rdram, ctx);
        goto after_1;
    // 0x80238144: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    after_1:
    // 0x80238148: andi        $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 & 0X1000;
    // 0x8023814C: beq         $v0, $zero, L_80238194
    if (ctx->r2 == 0) {
        // 0x80238150: nop
    
            goto L_80238194;
    }
    // 0x80238150: nop

    // 0x80238154: addiu       $a0, $zero, 0x155
    ctx->r4 = ADD32(0, 0X155);
    // 0x80238158: jal         0x8002A33C
    // 0x8023815C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x8023815C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_2:
    // 0x80238160: lhu         $a0, 0x4E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X4E);
    // 0x80238164: lbu         $v1, 0xB($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XB);
    // 0x80238168: addiu       $v0, $zero, -0x40
    ctx->r2 = ADD32(0, -0X40);
    // 0x8023816C: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x80238170: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x80238174: sll         $a0, $a0, 1
    ctx->r4 = S32(ctx->r4 << 1);
    // 0x80238178: sb          $v1, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r3;
    // 0x8023817C: andi        $v1, $v1, 0xFF
    ctx->r3 = ctx->r3 & 0XFF;
    // 0x80238180: bne         $v1, $zero, L_80238194
    if (ctx->r3 != 0) {
        // 0x80238184: sh          $a0, 0x4E($s0)
        MEM_H(0X4E, ctx->r16) = ctx->r4;
            goto L_80238194;
    }
    // 0x80238184: sh          $a0, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r4;
    // 0x80238188: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8023818C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80238190: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80238194:
    // 0x80238194: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80238198: bnel        $v0, $zero, L_802381B8
    if (ctx->r2 != 0) {
        // 0x8023819C: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_802381B8;
    }
    goto skip_0;
    // 0x8023819C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    skip_0:
    // 0x802381A0: jal         0x8006036C
    // 0x802381A4: addiu       $a0, $zero, 0x640
    ctx->r4 = ADD32(0, 0X640);
    func_8006036C_3B76C(rdram, ctx);
        goto after_3;
    // 0x802381A4: addiu       $a0, $zero, 0x640
    ctx->r4 = ADD32(0, 0X640);
    after_3:
    // 0x802381A8: jal         0x8006036C
    // 0x802381AC: addiu       $a0, $zero, 0x51
    ctx->r4 = ADD32(0, 0X51);
    func_8006036C_3B76C(rdram, ctx);
        goto after_4;
    // 0x802381AC: addiu       $a0, $zero, 0x51
    ctx->r4 = ADD32(0, 0X51);
    after_4:
    // 0x802381B0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802381B4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_802381B8:
    // 0x802381B8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802381BC:
    // 0x802381BC: jal         0x8005044C
    // 0x802381C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_5;
    // 0x802381C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x802381C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802381C8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802381CC: jr          $ra
    // 0x802381D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802381D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802381D4: nop

    // 0x802381D8: nop

    // 0x802381DC: nop

;}
RECOMP_FUNC void func_80232B2C_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232B2C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80232B30: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80232B34: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80232B38: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80232B3C: lhu         $v0, 0x32C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X32C);
    // 0x80232B40: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80232B44: beq         $v0, $zero, L_80232B54
    if (ctx->r2 == 0) {
        // 0x80232B48: nop
    
            goto L_80232B54;
    }
    // 0x80232B48: nop

    // 0x80232B4C: jal         0x80233F24
    // 0x80232B50: nop

    func_80233F24_ovl5(rdram, ctx);
        goto after_0;
    // 0x80232B50: nop

    after_0:
L_80232B54:
    // 0x80232B54: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80232B58: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80232B5C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80232B60: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80232B64: lw          $v0, 0x5D34($at)
    ctx->r2 = MEM_W(ctx->r1, 0X5D34);
    // 0x80232B68: jalr        $v0
    // 0x80232B6C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x80232B6C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80232B70: lhu         $v0, 0x32C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X32C);
    // 0x80232B74: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80232B78: beq         $v0, $zero, L_80232B9C
    if (ctx->r2 == 0) {
        // 0x80232B7C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80232B9C;
    }
    // 0x80232B7C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80232B80: jal         0x80233BF4
    // 0x80232B84: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80233BF4_ovl5(rdram, ctx);
        goto after_2;
    // 0x80232B84: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80232B88: lhu         $v0, 0x32C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X32C);
    // 0x80232B8C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x80232B90: andi        $v0, $v0, 0xFFFE
    ctx->r2 = ctx->r2 & 0XFFFE;
    // 0x80232B94: sh          $v0, 0x32C($s0)
    MEM_H(0X32C, ctx->r16) = ctx->r2;
    // 0x80232B98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80232B9C:
    // 0x80232B9C: lui         $a3, 0x100
    ctx->r7 = S32(0X100 << 16);
    // 0x80232BA0: ori         $a3, $a3, 0x8
    ctx->r7 = ctx->r7 | 0X8;
    // 0x80232BA4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80232BA8: jal         0x80047284
    // 0x80232BAC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_3;
    // 0x80232BAC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
    // 0x80232BB0: sw          $zero, 0x340($s0)
    MEM_W(0X340, ctx->r16) = 0;
    // 0x80232BB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80232BB8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80232BBC: jr          $ra
    // 0x80232BC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80232BC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022D4B8_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D4B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022D4BC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022D4C0: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x8022D4C4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022D4C8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022D4CC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022D4D0: lw          $v0, 0x5A3C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X5A3C);
    // 0x8022D4D4: jalr        $v0
    // 0x8022D4D8: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022D4D8: nop

    after_0:
    // 0x8022D4DC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022D4E0: jr          $ra
    // 0x8022D4E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022D4E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802294A4_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802294A4: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x802294A8: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x802294AC: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x802294B0: sw          $ra, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r31;
    // 0x802294B4: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
    // 0x802294B8: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x802294BC: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x802294C0: lw          $s0, 0x28($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X28);
    // 0x802294C4: lhu         $v0, 0x2C($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X2C);
    // 0x802294C8: lhu         $s3, 0x56($s0)
    ctx->r19 = MEM_HU(ctx->r16, 0X56);
    // 0x802294CC: sh          $v0, 0x30($sp)
    MEM_H(0X30, ctx->r29) = ctx->r2;
    // 0x802294D0: lhu         $v0, 0x2E($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X2E);
    // 0x802294D4: sh          $v0, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r2;
    // 0x802294D8: lhu         $v0, 0x30($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X30);
    // 0x802294DC: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x802294E0: jal         0x8002C654
    // 0x802294E4: sh          $v0, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r2;
    func_8002C654_7A54(rdram, ctx);
        goto after_0;
    // 0x802294E4: sh          $v0, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r2;
    after_0:
    // 0x802294E8: sll         $a0, $s3, 16
    ctx->r4 = S32(ctx->r19 << 16);
    // 0x802294EC: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x802294F0: jal         0x800319B4
    // 0x802294F4: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_800319B4_CDB4(rdram, ctx);
        goto after_1;
    // 0x802294F4: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_1:
    // 0x802294F8: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x802294FC: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x80229500: jal         0x80031270
    // 0x80229504: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    func_80031270_C670(rdram, ctx);
        goto after_2;
    // 0x80229504: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    after_2:
    // 0x80229508: lh          $v1, 0x1C($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X1C);
    // 0x8022950C: lhu         $v0, 0x38($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X38);
    // 0x80229510: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80229514: sh          $v0, 0x1C($s2)
    MEM_H(0X1C, ctx->r18) = ctx->r2;
    // 0x80229518: lh          $a0, 0x20($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X20);
    // 0x8022951C: lhu         $v0, 0x3A($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X3A);
    // 0x80229520: lw          $a1, 0x34($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X34);
    // 0x80229524: lui         $v1, 0x8F
    ctx->r3 = S32(0X8F << 16);
    // 0x80229528: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8022952C: sh          $v0, 0x1E($s2)
    MEM_H(0X1E, ctx->r18) = ctx->r2;
    // 0x80229530: lh          $a0, 0x24($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X24);
    // 0x80229534: lhu         $v0, 0x3C($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X3C);
    // 0x80229538: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x8022953C: slt         $v1, $v1, $a1
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x80229540: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80229544: bne         $v1, $zero, L_80229578
    if (ctx->r3 != 0) {
        // 0x80229548: sh          $v0, 0x20($s2)
        MEM_H(0X20, ctx->r18) = ctx->r2;
            goto L_80229578;
    }
    // 0x80229548: sh          $v0, 0x20($s2)
    MEM_H(0X20, ctx->r18) = ctx->r2;
    // 0x8022954C: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x80229550: ori         $v0, $v0, 0x70A3
    ctx->r2 = ctx->r2 | 0X70A3;
    // 0x80229554: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x80229558: sw          $v0, 0x34($s2)
    MEM_W(0X34, ctx->r18) = ctx->r2;
    // 0x8022955C: lw          $v0, 0x38($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X38);
    // 0x80229560: lw          $a0, 0x3C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X3C);
    // 0x80229564: ori         $v1, $zero, 0x8000
    ctx->r3 = 0 | 0X8000;
    // 0x80229568: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022956C: addiu       $a0, $a0, -0x147A
    ctx->r4 = ADD32(ctx->r4, -0X147A);
    // 0x80229570: sw          $v0, 0x38($s2)
    MEM_W(0X38, ctx->r18) = ctx->r2;
    // 0x80229574: sw          $a0, 0x3C($s2)
    MEM_W(0X3C, ctx->r18) = ctx->r4;
L_80229578:
    // 0x80229578: lhu         $v0, 0x26($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X26);
    // 0x8022957C: lh          $v1, 0x34($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X34);
    // 0x80229580: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80229584: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80229588: sh          $v0, 0x26($s2)
    MEM_H(0X26, ctx->r18) = ctx->r2;
    // 0x8022958C: lhu         $v0, 0x26($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X26);
    // 0x80229590: sh          $v1, 0x24($s2)
    MEM_H(0X24, ctx->r18) = ctx->r3;
    // 0x80229594: lhu         $v1, 0x26($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X26);
    // 0x80229598: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022959C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802295A0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802295A4: lbu         $v0, -0x3B50($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X3B50);
    // 0x802295A8: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x802295AC: sb          $v0, 0x22($s2)
    MEM_B(0X22, ctx->r18) = ctx->r2;
    // 0x802295B0: lbu         $v0, 0xE($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XE);
    // 0x802295B4: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802295B8: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x802295BC: lbu         $v1, -0x3B4F($at)
    ctx->r3 = MEM_BU(ctx->r1, -0X3B4F);
    // 0x802295C0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802295C4: sb          $v0, 0xE($s2)
    MEM_B(0XE, ctx->r18) = ctx->r2;
    // 0x802295C8: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x802295CC: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x802295D0: sb          $v1, 0x23($s2)
    MEM_B(0X23, ctx->r18) = ctx->r3;
    // 0x802295D4: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x802295D8: bne         $v0, $v1, L_80229674
    if (ctx->r2 != ctx->r3) {
        // 0x802295DC: nop
    
            goto L_80229674;
    }
    // 0x802295DC: nop

    // 0x802295E0: jal         0x8004F144
    // 0x802295E4: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_3;
    // 0x802295E4: nop

    after_3:
    // 0x802295E8: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x802295EC: beq         $s1, $zero, L_80229670
    if (ctx->r17 == 0) {
        // 0x802295F0: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_80229670;
    }
    // 0x802295F0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802295F4: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x802295F8: sb          $v1, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r3;
    // 0x802295FC: sb          $v0, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r2;
    // 0x80229600: sb          $zero, 0x3($s1)
    MEM_B(0X3, ctx->r17) = 0;
    // 0x80229604: sb          $v0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r2;
    // 0x80229608: jal         0x800A3450
    // 0x8022960C: sb          $v1, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_4;
    // 0x8022960C: sb          $v1, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r3;
    after_4:
    // 0x80229610: jal         0x800A3450
    // 0x80229614: andi        $s0, $v0, 0xFFF
    ctx->r16 = ctx->r2 & 0XFFF;
    func_800A3450_7E850(rdram, ctx);
        goto after_5;
    // 0x80229614: andi        $s0, $v0, 0xFFF
    ctx->r16 = ctx->r2 & 0XFFF;
    after_5:
    // 0x80229618: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x8022961C: addiu       $v0, $v0, 0x64
    ctx->r2 = ADD32(ctx->r2, 0X64);
    // 0x80229620: lui         $v1, 0x3C48
    ctx->r3 = S32(0X3C48 << 16);
    // 0x80229624: ori         $v1, $v1, 0x2E
    ctx->r3 = ctx->r3 | 0X2E;
    // 0x80229628: lui         $a0, 0x2E20
    ctx->r4 = S32(0X2E20 << 16);
    // 0x8022962C: ori         $a0, $a0, 0x2020
    ctx->r4 = ctx->r4 | 0X2020;
    // 0x80229630: sw          $v1, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r3;
    // 0x80229634: addiu       $v1, $zero, 0x12
    ctx->r3 = ADD32(0, 0X12);
    // 0x80229638: sh          $v1, 0x24($s1)
    MEM_H(0X24, ctx->r17) = ctx->r3;
    // 0x8022963C: addiu       $v1, $zero, 0x80
    ctx->r3 = ADD32(0, 0X80);
    // 0x80229640: sb          $v1, 0x22($s1)
    MEM_B(0X22, ctx->r17) = ctx->r3;
    // 0x80229644: addiu       $v1, $zero, 0xA0
    ctx->r3 = ADD32(0, 0XA0);
    // 0x80229648: sw          $a0, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r4;
    // 0x8022964C: sb          $v1, 0x23($s1)
    MEM_B(0X23, ctx->r17) = ctx->r3;
    // 0x80229650: sw          $s2, 0x28($s1)
    MEM_W(0X28, ctx->r17) = ctx->r18;
    // 0x80229654: sh          $s0, 0x2C($s1)
    MEM_H(0X2C, ctx->r17) = ctx->r16;
    // 0x80229658: sh          $v0, 0x2E($s1)
    MEM_H(0X2E, ctx->r17) = ctx->r2;
    // 0x8022965C: sh          $s3, 0x30($s1)
    MEM_H(0X30, ctx->r17) = ctx->r19;
    // 0x80229660: lw          $v0, 0x38($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X38);
    // 0x80229664: sw          $v0, 0x34($s1)
    MEM_W(0X34, ctx->r17) = ctx->r2;
    // 0x80229668: lw          $v0, 0x3C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X3C);
    // 0x8022966C: sw          $v0, 0x38($s1)
    MEM_W(0X38, ctx->r17) = ctx->r2;
L_80229670:
    // 0x80229670: sb          $zero, 0xE($s2)
    MEM_B(0XE, ctx->r18) = 0;
L_80229674:
    // 0x80229674: lw          $ra, 0x50($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X50);
    // 0x80229678: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x8022967C: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x80229680: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x80229684: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x80229688: jr          $ra
    // 0x8022968C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    TRACE_RETURN()
    return;
    // 0x8022968C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_80228C7C_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228C7C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228C80: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228C84: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228C88: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80228C8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80228C90: jal         0x8004DD04
    // 0x80228C94: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8004DD04_29104(rdram, ctx);
        goto after_0;
    // 0x80228C94: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x80228C98: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80228C9C: bne         $v0, $zero, L_80228CC4
    if (ctx->r2 != 0) {
        // 0x80228CA0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80228CC4;
    }
    // 0x80228CA0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228CA4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80228CA8: jal         0x80050294
    // 0x80228CAC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x80228CAC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x80228CB0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80228CB4: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x80228CB8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228CBC: j           L_80228CCC
    // 0x80228CC0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_80228CCC;
    // 0x80228CC0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80228CC4:
    // 0x80228CC4: jal         0x8005044C
    // 0x80228CC8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_2;
    // 0x80228CC8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
L_80228CCC:
    // 0x80228CCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80228CD0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228CD4: jr          $ra
    // 0x80228CD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228CD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80228CDC: nop

;}
RECOMP_FUNC void func_802277AC_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802277AC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802277B0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x802277B4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802277B8: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x802277BC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802277C0: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x802277C4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802277C8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802277CC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802277D0: lw          $v0, -0x413C($at)
    ctx->r2 = MEM_W(ctx->r1, -0X413C);
    // 0x802277D4: jalr        $v0
    // 0x802277D8: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802277D8: nop

    after_0:
    // 0x802277DC: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x802277E0: lhu         $v0, -0x730C($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X730C);
    // 0x802277E4: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x802277E8: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x802277EC: bne         $v0, $v1, L_80227824
    if (ctx->r2 != ctx->r3) {
        // 0x802277F0: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80227824;
    }
    // 0x802277F0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802277F4: addiu       $a1, $zero, 0x190
    ctx->r5 = ADD32(0, 0X190);
    // 0x802277F8: addiu       $a2, $zero, -0x64
    ctx->r6 = ADD32(0, -0X64);
    // 0x802277FC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80227800: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x80227804: jal         0x80229D40
    // 0x80227808: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_80229D40_ovl6(rdram, ctx);
        goto after_1;
    // 0x80227808: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_1:
    // 0x8022780C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80227810: addiu       $a1, $zero, -0x190
    ctx->r5 = ADD32(0, -0X190);
    // 0x80227814: addiu       $a2, $zero, -0x64
    ctx->r6 = ADD32(0, -0X64);
    // 0x80227818: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    // 0x8022781C: jal         0x80229D40
    // 0x80227820: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_80229D40_ovl6(rdram, ctx);
        goto after_2;
    // 0x80227820: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_2:
L_80227824:
    // 0x80227824: lhu         $v0, 0x46($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X46);
    // 0x80227828: lhu         $v1, 0x4A($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X4A);
    // 0x8022782C: lhu         $a2, 0x4E($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X4E);
    // 0x80227830: addiu       $a0, $s1, 0x1C
    ctx->r4 = ADD32(ctx->r17, 0X1C);
    // 0x80227834: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x80227838: sh          $v0, 0x54($s1)
    MEM_H(0X54, ctx->r17) = ctx->r2;
    // 0x8022783C: sh          $v1, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r3;
    // 0x80227840: jal         0x8004DD04
    // 0x80227844: sh          $a2, 0x58($s1)
    MEM_H(0X58, ctx->r17) = ctx->r6;
    func_8004DD04_29104(rdram, ctx);
        goto after_3;
    // 0x80227844: sh          $a2, 0x58($s1)
    MEM_H(0X58, ctx->r17) = ctx->r6;
    after_3:
    // 0x80227848: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022784C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80227850: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80227854: jr          $ra
    // 0x80227858: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80227858: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80226910_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226910: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80226914: lw          $a1, 0x28($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X28);
    // 0x80226918: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x8022691C: bne         $v1, $v0, L_80226938
    if (ctx->r3 != ctx->r2) {
        // 0x80226920: addiu       $v0, $zero, 0xB4
        ctx->r2 = ADD32(0, 0XB4);
            goto L_80226938;
    }
    // 0x80226920: addiu       $v0, $zero, 0xB4
    ctx->r2 = ADD32(0, 0XB4);
    // 0x80226924: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80226928: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x8022692C: sb          $zero, 0xA($a1)
    MEM_B(0XA, ctx->r5) = 0;
    // 0x80226930: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80226934: addiu       $v0, $zero, 0xB4
    ctx->r2 = ADD32(0, 0XB4);
L_80226938:
    // 0x80226938: bne         $v1, $v0, L_80226948
    if (ctx->r3 != ctx->r2) {
        // 0x8022693C: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80226948;
    }
    // 0x8022693C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80226940: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x80226944: sb          $zero, 0xA($a1)
    MEM_B(0XA, ctx->r5) = 0;
L_80226948:
    // 0x80226948: jr          $ra
    // 0x8022694C: nop

    TRACE_RETURN()
    return;
    // 0x8022694C: nop

;}
RECOMP_FUNC void func_80228110_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228110: lbu         $v0, 0xC($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XC);
    // 0x80228114: lw          $v1, 0x98($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X98);
    // 0x80228118: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022811C: sb          $v0, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r2;
    // 0x80228120: lbu         $v1, 0x0($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X0);
    // 0x80228124: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80228128: bne         $v1, $v0, L_8022813C
    if (ctx->r3 != ctx->r2) {
        // 0x8022812C: nop
    
            goto L_8022813C;
    }
    // 0x8022812C: nop

    // 0x80228130: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80228134: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228138: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_8022813C:
    // 0x8022813C: jr          $ra
    // 0x80228140: nop

    TRACE_RETURN()
    return;
    // 0x80228140: nop

;}
RECOMP_FUNC void func_80226830_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226830: jr          $ra
    // 0x80226834: nop

    TRACE_RETURN()
    return;
    // 0x80226834: nop

;}
RECOMP_FUNC void func_80228014_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228014: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228018: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022801C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228020: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80228024: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80228028: bne         $v0, $zero, L_80228044
    if (ctx->r2 != 0) {
        // 0x8022802C: addiu       $a1, $zero, 0x17
        ctx->r5 = ADD32(0, 0X17);
            goto L_80228044;
    }
    // 0x8022802C: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    // 0x80228030: jal         0x80050294
    // 0x80228034: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80228034: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80228038: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022803C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228040: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80228044:
    // 0x80228044: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80228048: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022804C: jr          $ra
    // 0x80228050: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228050: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80229A48_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229A48: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229A4C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80229A50: lb          $v0, 0xD($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XD);
    // 0x80229A54: bne         $v0, $zero, L_80229AE0
    if (ctx->r2 != 0) {
        // 0x80229A58: nop
    
            goto L_80229AE0;
    }
    // 0x80229A58: nop

    // 0x80229A5C: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80229A60: bne         $v0, $zero, L_80229AD0
    if (ctx->r2 != 0) {
        // 0x80229A64: nop
    
            goto L_80229AD0;
    }
    // 0x80229A64: nop

    // 0x80229A68: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x80229A6C: sb          $zero, 0xE($a0)
    MEM_B(0XE, ctx->r4) = 0;
    // 0x80229A70: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80229A74: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x80229A78: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80229A7C: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x80229A80: addiu       $v0, $zero, 0x16
    ctx->r2 = ADD32(0, 0X16);
    // 0x80229A84: bnel        $v1, $v0, L_80229A98
    if (ctx->r3 != ctx->r2) {
        // 0x80229A88: lui         $v0, 0x3C88
        ctx->r2 = S32(0X3C88 << 16);
            goto L_80229A98;
    }
    goto skip_0;
    // 0x80229A88: lui         $v0, 0x3C88
    ctx->r2 = S32(0X3C88 << 16);
    skip_0:
    // 0x80229A8C: lui         $v0, 0x3CC8
    ctx->r2 = S32(0X3CC8 << 16);
    // 0x80229A90: j           L_80229A9C
    // 0x80229A94: ori         $v0, $v0, 0x27
    ctx->r2 = ctx->r2 | 0X27;
        goto L_80229A9C;
    // 0x80229A94: ori         $v0, $v0, 0x27
    ctx->r2 = ctx->r2 | 0X27;
L_80229A98:
    // 0x80229A98: ori         $v0, $v0, 0x26
    ctx->r2 = ctx->r2 | 0X26;
L_80229A9C:
    // 0x80229A9C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x80229AA0: lbu         $v1, 0x8($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X8);
    // 0x80229AA4: lui         $v0, 0x2E80
    ctx->r2 = S32(0X2E80 << 16);
    // 0x80229AA8: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x80229AAC: sw          $v0, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r2;
    // 0x80229AB0: lui         $v0, 0xA
    ctx->r2 = S32(0XA << 16);
    // 0x80229AB4: sw          $v0, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->r2;
    // 0x80229AB8: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x80229ABC: sh          $zero, 0x26($a0)
    MEM_H(0X26, ctx->r4) = 0;
    // 0x80229AC0: sw          $zero, 0x34($a0)
    MEM_W(0X34, ctx->r4) = 0;
    // 0x80229AC4: sw          $v0, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->r2;
    // 0x80229AC8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80229ACC: sb          $v1, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r3;
L_80229AD0:
    // 0x80229AD0: jal         0x802294A4
    // 0x80229AD4: nop

    func_802294A4_ovl6(rdram, ctx);
        goto after_0;
    // 0x80229AD4: nop

    after_0:
    // 0x80229AD8: j           L_80229B0C
    // 0x80229ADC: nop

        goto L_80229B0C;
    // 0x80229ADC: nop

L_80229AE0:
    // 0x80229AE0: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80229AE4: bne         $v0, $zero, L_80229B04
    if (ctx->r2 != 0) {
        // 0x80229AE8: nop
    
            goto L_80229B04;
    }
    // 0x80229AE8: nop

    // 0x80229AEC: lbu         $v1, 0x8($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X8);
    // 0x80229AF0: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x80229AF4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80229AF8: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80229AFC: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x80229B00: sb          $v1, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r3;
L_80229B04:
    // 0x80229B04: jal         0x80229390
    // 0x80229B08: nop

    func_80229390_ovl6(rdram, ctx);
        goto after_1;
    // 0x80229B08: nop

    after_1:
L_80229B0C:
    // 0x80229B0C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80229B10: jr          $ra
    // 0x80229B14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80229B14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225DE0_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225DE0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80225DE4: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80225DE8: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x80225DEC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80225DF0: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80225DF4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80225DF8: lw          $v0, 0x10($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X10);
    // 0x80225DFC: bne         $v0, $zero, L_80225F00
    if (ctx->r2 != 0) {
        // 0x80225E00: addiu       $v1, $zero, -0x3
        ctx->r3 = ADD32(0, -0X3);
            goto L_80225F00;
    }
    // 0x80225E00: addiu       $v1, $zero, -0x3
    ctx->r3 = ADD32(0, -0X3);
    // 0x80225E04: lw          $a0, 0x24($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X24);
    // 0x80225E08: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x80225E0C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80225E10: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x80225E14: lw          $a0, 0x28($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X28);
    // 0x80225E18: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x80225E1C: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x80225E20: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80225E24: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80225E28: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x80225E2C: lw          $t0, 0x34($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X34);
    // 0x80225E30: addiu       $a3, $zero, 0x1E
    ctx->r7 = ADD32(0, 0X1E);
    // 0x80225E34: addiu       $s0, $zero, 0x1900
    ctx->r16 = ADD32(0, 0X1900);
    // 0x80225E38: lbu         $v0, 0x0($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0X0);
    // 0x80225E3C: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x80225E40: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x80225E44: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80225E48: sb          $v0, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r2;
    // 0x80225E4C: addiu       $v0, $zero, 0x12C
    ctx->r2 = ADD32(0, 0X12C);
    // 0x80225E50: sh          $v0, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r2;
    // 0x80225E54: addiu       $v0, $zero, -0x1F4
    ctx->r2 = ADD32(0, -0X1F4);
    // 0x80225E58: sh          $v0, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r2;
    // 0x80225E5C: sh          $s0, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r16;
    // 0x80225E60: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x80225E64: jal         0x80228F48
    // 0x80225E68: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    func_80228F48_ovl6(rdram, ctx);
        goto after_0;
    // 0x80225E68: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_0:
    // 0x80225E6C: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x80225E70: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x80225E74: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80225E78: addiu       $a3, $zero, 0x1E
    ctx->r7 = ADD32(0, 0X1E);
    // 0x80225E7C: addiu       $v0, $zero, -0x12C
    ctx->r2 = ADD32(0, -0X12C);
    // 0x80225E80: sh          $v0, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r2;
    // 0x80225E84: addiu       $v0, $zero, -0x190
    ctx->r2 = ADD32(0, -0X190);
    // 0x80225E88: sh          $v0, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r2;
    // 0x80225E8C: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
    // 0x80225E90: sh          $s0, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r16;
    // 0x80225E94: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80225E98: jal         0x80228F48
    // 0x80225E9C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    func_80228F48_ovl6(rdram, ctx);
        goto after_1;
    // 0x80225E9C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_1:
    // 0x80225EA0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80225EA4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225EA8: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x80225EAC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80225EB0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225EB4: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x80225EB8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80225EBC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225EC0: sb          $v0, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r2;
    // 0x80225EC4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225EC8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225ECC: sh          $zero, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = 0;
    // 0x80225ED0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225ED4: sh          $zero, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = 0;
    // 0x80225ED8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225EDC: sh          $zero, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = 0;
    // 0x80225EE0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225EE4: sh          $zero, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = 0;
    // 0x80225EE8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225EEC: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x80225EF0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225EF4: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x80225EF8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225EFC: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
L_80225F00:
    // 0x80225F00: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x80225F04: addiu       $v0, $zero, 0x3B
    ctx->r2 = ADD32(0, 0X3B);
    // 0x80225F08: bne         $v1, $v0, L_80225F18
    if (ctx->r3 != ctx->r2) {
        // 0x80225F0C: addiu       $a0, $zero, 0x40
        ctx->r4 = ADD32(0, 0X40);
            goto L_80225F18;
    }
    // 0x80225F0C: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x80225F10: jal         0x8004CB2C
    // 0x80225F14: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_2;
    // 0x80225F14: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_2:
L_80225F18:
    // 0x80225F18: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80225F1C: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80225F20: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80225F24: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80225F28: jr          $ra
    // 0x80225F2C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80225F2C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80226CF4_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226CF4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80226CF8: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x80226CFC: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80226D00: addiu       $a0, $a0, 0x45A0
    ctx->r4 = ADD32(ctx->r4, 0X45A0);
    // 0x80226D04: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80226D08: lhu         $v0, 0x0($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X0);
    // 0x80226D0C: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x80226D10: lhu         $v1, -0x730C($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X730C);
    // 0x80226D14: addiu       $v0, $v0, 0x16
    ctx->r2 = ADD32(ctx->r2, 0X16);
    // 0x80226D18: andi        $v1, $v1, 0x7
    ctx->r3 = ctx->r3 & 0X7;
    // 0x80226D1C: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x80226D20: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80226D24: bne         $v1, $v0, L_80226D44
    if (ctx->r3 != ctx->r2) {
        // 0x80226D28: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80226D44;
    }
    // 0x80226D28: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226D2C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80226D30: lw          $a0, 0x30($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X30);
    // 0x80226D34: addiu       $a1, $zero, 0x190
    ctx->r5 = ADD32(0, 0X190);
    // 0x80226D38: addiu       $a2, $zero, -0x64
    ctx->r6 = ADD32(0, -0X64);
    // 0x80226D3C: jal         0x80229D40
    // 0x80226D40: addiu       $a3, $zero, 0x12C
    ctx->r7 = ADD32(0, 0X12C);
    func_80229D40_ovl6(rdram, ctx);
        goto after_0;
    // 0x80226D40: addiu       $a3, $zero, 0x12C
    ctx->r7 = ADD32(0, 0X12C);
    after_0:
L_80226D44:
    // 0x80226D44: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80226D48: jr          $ra
    // 0x80226D4C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80226D4C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80229390_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229390: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80229394: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x80229398: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022939C: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x802293A0: lw          $v0, 0x34($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X34);
    // 0x802293A4: lw          $a0, 0x38($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X38);
    // 0x802293A8: ori         $v1, $zero, 0x8000
    ctx->r3 = 0 | 0X8000;
    // 0x802293AC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802293B0: sw          $v0, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r2;
    // 0x802293B4: lhu         $v0, 0x2E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X2E);
    // 0x802293B8: lh          $a1, 0x34($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X34);
    // 0x802293BC: lhu         $v1, 0x2C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X2C);
    // 0x802293C0: addiu       $a0, $a0, -0x147A
    ctx->r4 = ADD32(ctx->r4, -0X147A);
    // 0x802293C4: sw          $a0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r4;
    // 0x802293C8: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x802293CC: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x802293D0: sh          $v0, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r2;
    // 0x802293D4: lh          $v0, 0x2E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X2E);
    // 0x802293D8: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x802293DC: andi        $a0, $v1, 0xFFF
    ctx->r4 = ctx->r3 & 0XFFF;
    // 0x802293E0: bgez        $v0, L_802293F8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802293E4: sh          $a0, 0x2C($s0)
        MEM_H(0X2C, ctx->r16) = ctx->r4;
            goto L_802293F8;
    }
    // 0x802293E4: sh          $a0, 0x2C($s0)
    MEM_H(0X2C, ctx->r16) = ctx->r4;
    // 0x802293E8: jal         0x8004F5C4
    // 0x802293EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x802293EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x802293F0: j           L_80229494
    // 0x802293F4: nop

        goto L_80229494;
    // 0x802293F4: nop

L_802293F8:
    // 0x802293F8: jal         0x80032498
    // 0x802293FC: nop

    func_80032498_D898(rdram, ctx);
        goto after_1;
    // 0x802293FC: nop

    after_1:
    // 0x80229400: lh          $v1, 0x2E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2E);
    // 0x80229404: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80229408: mflo        $v0
    ctx->r2 = lo;
    // 0x8022940C: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x80229410: sh          $v0, 0x30($sp)
    MEM_H(0X30, ctx->r29) = ctx->r2;
    // 0x80229414: jal         0x800324B4
    // 0x80229418: lh          $a0, 0x2C($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X2C);
    func_800324B4_D8B4(rdram, ctx);
        goto after_2;
    // 0x80229418: lh          $a0, 0x2C($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X2C);
    after_2:
    // 0x8022941C: lh          $v1, 0x2E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2E);
    // 0x80229420: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80229424: mflo        $v0
    ctx->r2 = lo;
    // 0x80229428: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8022942C: sh          $zero, 0x34($sp)
    MEM_H(0X34, ctx->r29) = 0;
    // 0x80229430: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x80229434: jal         0x8002C654
    // 0x80229438: sh          $v0, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r2;
    func_8002C654_7A54(rdram, ctx);
        goto after_3;
    // 0x80229438: sh          $v0, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r2;
    after_3:
    // 0x8022943C: lh          $a0, 0x30($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X30);
    // 0x80229440: jal         0x800319B4
    // 0x80229444: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_800319B4_CDB4(rdram, ctx);
        goto after_4;
    // 0x80229444: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_4:
    // 0x80229448: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8022944C: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x80229450: jal         0x80031270
    // 0x80229454: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    func_80031270_C670(rdram, ctx);
        goto after_5;
    // 0x80229454: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    after_5:
    // 0x80229458: lw          $v0, 0x28($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X28);
    // 0x8022945C: lhu         $v1, 0x38($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X38);
    // 0x80229460: lhu         $v0, 0x1C($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X1C);
    // 0x80229464: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
    // 0x80229468: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022946C: sh          $v0, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r2;
    // 0x80229470: lhu         $v0, 0x1E($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X1E);
    // 0x80229474: lhu         $v1, 0x3A($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X3A);
    // 0x80229478: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
    // 0x8022947C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80229480: sh          $v0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r2;
    // 0x80229484: lhu         $v0, 0x20($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X20);
    // 0x80229488: lhu         $v1, 0x3C($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X3C);
    // 0x8022948C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80229490: sh          $v0, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r2;
L_80229494:
    // 0x80229494: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80229498: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x8022949C: jr          $ra
    // 0x802294A0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x802294A0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80225F30_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225F30: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80225F34: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x80225F38: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80225F3C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80225F40: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80225F44: bne         $v0, $zero, L_80226080
    if (ctx->r2 != 0) {
        // 0x80225F48: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80226080;
    }
    // 0x80225F48: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225F4C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80225F50: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x80225F54: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x80225F58: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225F5C: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x80225F60: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225F64: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225F68: sb          $t1, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r9;
    // 0x80225F6C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225F70: sb          $s1, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r17;
    // 0x80225F74: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225F78: sh          $zero, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = 0;
    // 0x80225F7C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225F80: sh          $zero, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = 0;
    // 0x80225F84: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225F88: sh          $zero, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = 0;
    // 0x80225F8C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225F90: sh          $zero, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = 0;
    // 0x80225F94: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225F98: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x80225F9C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225FA0: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x80225FA4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225FA8: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    // 0x80225FAC: lw          $v1, 0x2C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X2C);
    // 0x80225FB0: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x80225FB4: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80225FB8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80225FBC: addiu       $a3, $zero, 0x1E
    ctx->r7 = ADD32(0, 0X1E);
    // 0x80225FC0: lbu         $t0, 0x0($v1)
    ctx->r8 = MEM_BU(ctx->r3, 0X0);
    // 0x80225FC4: lui         $v0, 0xF868
    ctx->r2 = S32(0XF868 << 16);
    // 0x80225FC8: addiu       $s0, $zero, -0x2
    ctx->r16 = ADD32(0, -0X2);
    // 0x80225FCC: sw          $v0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r2;
    // 0x80225FD0: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x80225FD4: sw          $v0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r2;
    // 0x80225FD8: addiu       $v0, $zero, 0x130
    ctx->r2 = ADD32(0, 0X130);
    // 0x80225FDC: sh          $v0, 0x56($v1)
    MEM_H(0X56, ctx->r3) = ctx->r2;
    // 0x80225FE0: addiu       $v0, $zero, -0x7EE
    ctx->r2 = ADD32(0, -0X7EE);
    // 0x80225FE4: sb          $t1, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r9;
    // 0x80225FE8: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    // 0x80225FEC: sw          $zero, 0x20($v1)
    MEM_W(0X20, ctx->r3) = 0;
    // 0x80225FF0: ori         $t0, $t0, 0x2
    ctx->r8 = ctx->r8 | 0X2;
    // 0x80225FF4: sb          $t0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r8;
    // 0x80225FF8: sh          $v0, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r2;
    // 0x80225FFC: addiu       $v0, $zero, -0x17
    ctx->r2 = ADD32(0, -0X17);
    // 0x80226000: sh          $v0, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r2;
    // 0x80226004: addiu       $v0, $zero, 0x802
    ctx->r2 = ADD32(0, 0X802);
    // 0x80226008: sh          $v0, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r2;
    // 0x8022600C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226010: jal         0x80228F48
    // 0x80226014: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    func_80228F48_ovl6(rdram, ctx);
        goto after_0;
    // 0x80226014: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_0:
    // 0x80226018: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x8022601C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80226020: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80226024: addiu       $a3, $zero, 0x1E
    ctx->r7 = ADD32(0, 0X1E);
    // 0x80226028: addiu       $v0, $zero, -0x76C
    ctx->r2 = ADD32(0, -0X76C);
    // 0x8022602C: sh          $v0, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r2;
    // 0x80226030: addiu       $v0, $zero, -0xA
    ctx->r2 = ADD32(0, -0XA);
    // 0x80226034: sh          $v0, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r2;
    // 0x80226038: addiu       $v0, $zero, 0x7EE
    ctx->r2 = ADD32(0, 0X7EE);
    // 0x8022603C: sh          $v0, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r2;
    // 0x80226040: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226044: jal         0x80228F48
    // 0x80226048: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    func_80228F48_ovl6(rdram, ctx);
        goto after_1;
    // 0x80226048: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_1:
    // 0x8022604C: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x80226050: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80226054: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80226058: addiu       $a3, $zero, 0x1E
    ctx->r7 = ADD32(0, 0X1E);
    // 0x8022605C: addiu       $v0, $zero, -0x7C6
    ctx->r2 = ADD32(0, -0X7C6);
    // 0x80226060: sh          $v0, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r2;
    // 0x80226064: addiu       $v0, $zero, 0x866
    ctx->r2 = ADD32(0, 0X866);
    // 0x80226068: sh          $zero, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = 0;
    // 0x8022606C: sh          $v0, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r2;
    // 0x80226070: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226074: jal         0x80228F48
    // 0x80226078: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    func_80228F48_ovl6(rdram, ctx);
        goto after_2;
    // 0x80226078: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_2:
    // 0x8022607C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80226080:
    // 0x80226080: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80226084: sb          $v0, -0x36C3($at)
    MEM_B(-0X36C3, ctx->r1) = ctx->r2;
    // 0x80226088: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8022608C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80226090: sb          $v0, -0x36C0($at)
    MEM_B(-0X36C0, ctx->r1) = ctx->r2;
    // 0x80226094: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80226098: sb          $v0, -0x36C1($at)
    MEM_B(-0X36C1, ctx->r1) = ctx->r2;
    // 0x8022609C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802260A0: sb          $v0, -0x36C2($at)
    MEM_B(-0X36C2, ctx->r1) = ctx->r2;
    // 0x802260A4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802260A8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802260AC: sb          $v0, -0x36BF($at)
    MEM_B(-0X36BF, ctx->r1) = ctx->r2;
    // 0x802260B0: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x802260B4: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x802260B8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802260BC: jr          $ra
    // 0x802260C0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x802260C0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80227ED4_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227ED4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227ED8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227EDC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227EE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227EE4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80227EE8: bne         $v0, $zero, L_80227F04
    if (ctx->r2 != 0) {
        // 0x80227EEC: addiu       $a1, $zero, 0x12
        ctx->r5 = ADD32(0, 0X12);
            goto L_80227F04;
    }
    // 0x80227EEC: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    // 0x80227EF0: jal         0x80050294
    // 0x80227EF4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80227EF4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80227EF8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80227EFC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227F00: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80227F04:
    // 0x80227F04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227F08: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227F0C: jr          $ra
    // 0x80227F10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227F10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228EF0_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228EF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228EF4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80228EF8: lbu         $v1, 0x3($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X3);
    // 0x80228EFC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228F00: bne         $v1, $v0, L_80228F18
    if (ctx->r3 != ctx->r2) {
        // 0x80228F04: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80228F18;
    }
    // 0x80228F04: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80228F08: jal         0x80228CE0
    // 0x80228F0C: nop

    func_80228CE0_ovl6(rdram, ctx);
        goto after_0;
    // 0x80228F0C: nop

    after_0:
    // 0x80228F10: j           L_80228F3C
    // 0x80228F14: nop

        goto L_80228F3C;
    // 0x80228F14: nop

L_80228F18:
    // 0x80228F18: lbu         $v1, 0x8($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X8);
    // 0x80228F1C: beq         $v1, $v0, L_80228F34
    if (ctx->r3 == ctx->r2) {
        // 0x80228F20: nop
    
            goto L_80228F34;
    }
    // 0x80228F20: nop

    // 0x80228F24: jal         0x80228DB8
    // 0x80228F28: nop

    func_80228DB8_ovl6(rdram, ctx);
        goto after_1;
    // 0x80228F28: nop

    after_1:
    // 0x80228F2C: j           L_80228F3C
    // 0x80228F30: nop

        goto L_80228F3C;
    // 0x80228F30: nop

L_80228F34:
    // 0x80228F34: jal         0x8004F5C4
    // 0x80228F38: nop

    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_2;
    // 0x80228F38: nop

    after_2:
L_80228F3C:
    // 0x80228F3C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80228F40: jr          $ra
    // 0x80228F44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228F44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227EA4_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227EA4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227EA8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80227EAC: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80227EB0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80227EB4: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227EB8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80227EBC: lw          $v0, -0x3F30($at)
    ctx->r2 = MEM_W(ctx->r1, -0X3F30);
    // 0x80227EC0: jalr        $v0
    // 0x80227EC4: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80227EC4: nop

    after_0:
    // 0x80227EC8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80227ECC: jr          $ra
    // 0x80227ED0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227ED0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227F94_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227F94: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227F98: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227F9C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227FA0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227FA4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80227FA8: bne         $v0, $zero, L_80227FC4
    if (ctx->r2 != 0) {
        // 0x80227FAC: addiu       $a1, $zero, 0x15
        ctx->r5 = ADD32(0, 0X15);
            goto L_80227FC4;
    }
    // 0x80227FAC: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    // 0x80227FB0: jal         0x80050294
    // 0x80227FB4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80227FB4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80227FB8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80227FBC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227FC0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80227FC4:
    // 0x80227FC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227FC8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227FCC: jr          $ra
    // 0x80227FD0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227FD0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226D94_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226D94: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226D98: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80226D9C: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80226DA0: bne         $v0, $zero, L_80226E00
    if (ctx->r2 != 0) {
        // 0x80226DA4: nop
    
            goto L_80226E00;
    }
    // 0x80226DA4: nop

    // 0x80226DA8: lw          $a1, 0x24($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X24);
    // 0x80226DAC: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x80226DB0: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80226DB4: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x80226DB8: lw          $a1, 0x28($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X28);
    // 0x80226DBC: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x80226DC0: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80226DC4: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x80226DC8: lw          $v1, 0x34($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X34);
    // 0x80226DCC: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80226DD0: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x80226DD4: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80226DD8: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80226DDC: addiu       $v0, $zero, -0x50
    ctx->r2 = ADD32(0, -0X50);
    // 0x80226DE0: sb          $zero, 0x9($a1)
    MEM_B(0X9, ctx->r5) = 0;
    // 0x80226DE4: sb          $zero, 0xA($a1)
    MEM_B(0XA, ctx->r5) = 0;
    // 0x80226DE8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226DEC: sh          $v0, 0x45A0($at)
    MEM_H(0X45A0, ctx->r1) = ctx->r2;
    // 0x80226DF0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226DF4: sh          $zero, 0x45A2($at)
    MEM_H(0X45A2, ctx->r1) = 0;
    // 0x80226DF8: jal         0x8004CB2C
    // 0x80226DFC: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_0;
    // 0x80226DFC: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_0:
L_80226E00:
    // 0x80226E00: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80226E04: sb          $zero, -0x36C3($at)
    MEM_B(-0X36C3, ctx->r1) = 0;
    // 0x80226E08: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80226E0C: jr          $ra
    // 0x80226E10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226E10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227B38_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227B38: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80227B3C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227B40: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227B44: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80227B48: lw          $a0, -0x36A0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X36A0);
    // 0x80227B4C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80227B50: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80227B54: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x80227B58: lui         $s1, 0x801C
    ctx->r17 = S32(0X801C << 16);
    // 0x80227B5C: addiu       $s1, $s1, -0x3A50
    ctx->r17 = ADD32(ctx->r17, -0X3A50);
    // 0x80227B60: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80227B64: beq         $v1, $v0, L_80227BF0
    if (ctx->r3 == ctx->r2) {
        // 0x80227B68: nop
    
            goto L_80227BF0;
    }
    // 0x80227B68: nop

    // 0x80227B6C: lhu         $v1, 0x0($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X0);
    // 0x80227B70: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80227B74: lhu         $v0, -0x3A48($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3A48);
    // 0x80227B78: bne         $v1, $v0, L_80227BF0
    if (ctx->r3 != ctx->r2) {
        // 0x80227B7C: nop
    
            goto L_80227BF0;
    }
    // 0x80227B7C: nop

    // 0x80227B80: lhu         $v1, 0x2($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X2);
    // 0x80227B84: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80227B88: lw          $v0, -0x3A34($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A34);
    // 0x80227B8C: bne         $v1, $v0, L_80227BF0
    if (ctx->r3 != ctx->r2) {
        // 0x80227B90: addiu       $a1, $zero, 0x2A
        ctx->r5 = ADD32(0, 0X2A);
            goto L_80227BF0;
    }
    // 0x80227B90: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x80227B94: lhu         $v0, 0x4($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X4);
    // 0x80227B98: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80227B9C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227BA0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80227BA4: lw          $v0, -0x403C($at)
    ctx->r2 = MEM_W(ctx->r1, -0X403C);
    // 0x80227BA8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227BAC: sh          $zero, -0x36AC($at)
    MEM_H(-0X36AC, ctx->r1) = 0;
    // 0x80227BB0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227BB4: sw          $v0, -0x36B0($at)
    MEM_W(-0X36B0, ctx->r1) = ctx->r2;
    // 0x80227BB8: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x80227BBC: addiu       $a2, $zero, 0x33
    ctx->r6 = ADD32(0, 0X33);
    // 0x80227BC0: jal         0x8003B85C
    // 0x80227BC4: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_0;
    // 0x80227BC4: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_0:
    // 0x80227BC8: lw          $a0, 0x88($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X88);
    // 0x80227BCC: lui         $a1, 0x11
    ctx->r5 = S32(0X11 << 16);
    // 0x80227BD0: ori         $a1, $a1, 0x10
    ctx->r5 = ctx->r5 | 0X10;
    // 0x80227BD4: jal         0x8003B840
    // 0x80227BD8: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_1;
    // 0x80227BD8: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_1:
    // 0x80227BDC: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80227BE0: lw          $v0, -0x36A0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X36A0);
    // 0x80227BE4: addiu       $v0, $v0, 0x6
    ctx->r2 = ADD32(ctx->r2, 0X6);
    // 0x80227BE8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227BEC: sw          $v0, -0x36A0($at)
    MEM_W(-0X36A0, ctx->r1) = ctx->r2;
L_80227BF0:
    // 0x80227BF0: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80227BF4: lw          $a0, -0x369C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X369C);
    // 0x80227BF8: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x80227BFC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80227C00: beq         $v1, $v0, L_80227C84
    if (ctx->r3 == ctx->r2) {
        // 0x80227C04: nop
    
            goto L_80227C84;
    }
    // 0x80227C04: nop

    // 0x80227C08: lhu         $v1, 0x0($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X0);
    // 0x80227C0C: lhu         $v0, 0x8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8);
    // 0x80227C10: bne         $v1, $v0, L_80227C84
    if (ctx->r3 != ctx->r2) {
        // 0x80227C14: nop
    
            goto L_80227C84;
    }
    // 0x80227C14: nop

    // 0x80227C18: lhu         $v1, 0x2($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X2);
    // 0x80227C1C: lw          $v0, 0x1C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X1C);
    // 0x80227C20: bne         $v1, $v0, L_80227C84
    if (ctx->r3 != ctx->r2) {
        // 0x80227C24: addiu       $a1, $zero, 0x2A
        ctx->r5 = ADD32(0, 0X2A);
            goto L_80227C84;
    }
    // 0x80227C24: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x80227C28: lhu         $v0, 0x4($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X4);
    // 0x80227C2C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80227C30: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227C34: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80227C38: lw          $v0, -0x4018($at)
    ctx->r2 = MEM_W(ctx->r1, -0X4018);
    // 0x80227C3C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227C40: sh          $zero, -0x36A4($at)
    MEM_H(-0X36A4, ctx->r1) = 0;
    // 0x80227C44: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227C48: sw          $v0, -0x36A8($at)
    MEM_W(-0X36A8, ctx->r1) = ctx->r2;
    // 0x80227C4C: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x80227C50: addiu       $a2, $zero, 0x33
    ctx->r6 = ADD32(0, 0X33);
    // 0x80227C54: jal         0x8003B85C
    // 0x80227C58: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_2;
    // 0x80227C58: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_2:
    // 0x80227C5C: lw          $a0, 0x88($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X88);
    // 0x80227C60: lui         $a1, 0x13
    ctx->r5 = S32(0X13 << 16);
    // 0x80227C64: ori         $a1, $a1, 0x12
    ctx->r5 = ctx->r5 | 0X12;
    // 0x80227C68: jal         0x8003B840
    // 0x80227C6C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_3;
    // 0x80227C6C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_3:
    // 0x80227C70: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80227C74: lw          $v0, -0x369C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X369C);
    // 0x80227C78: addiu       $v0, $v0, 0x6
    ctx->r2 = ADD32(ctx->r2, 0X6);
    // 0x80227C7C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227C80: sw          $v0, -0x369C($at)
    MEM_W(-0X369C, ctx->r1) = ctx->r2;
L_80227C84:
    // 0x80227C84: jal         0x802279F0
    // 0x80227C88: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802279F0_ovl6(rdram, ctx);
        goto after_4;
    // 0x80227C88: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80227C8C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80227C90: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227C94: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227C98: jr          $ra
    // 0x80227C9C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80227C9C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022A24C_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A24C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022A250: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x8022A254: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022A258: lbu         $v0, 0x8($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0X8);
    // 0x8022A25C: bne         $v0, $zero, L_8022A2A4
    if (ctx->r2 != 0) {
        // 0x8022A260: lui         $a1, 0x3C80
        ctx->r5 = S32(0X3C80 << 16);
            goto L_8022A2A4;
    }
    // 0x8022A260: lui         $a1, 0x3C80
    ctx->r5 = S32(0X3C80 << 16);
    // 0x8022A264: ori         $a1, $a1, 0xF
    ctx->r5 = ctx->r5 | 0XF;
    // 0x8022A268: lui         $a2, 0x2E80
    ctx->r6 = S32(0X2E80 << 16);
    // 0x8022A26C: lbu         $v1, 0x0($a3)
    ctx->r3 = MEM_BU(ctx->r7, 0X0);
    // 0x8022A270: lbu         $a0, 0x8($a3)
    ctx->r4 = MEM_BU(ctx->r7, 0X8);
    // 0x8022A274: ori         $a2, $a2, 0x8080
    ctx->r6 = ctx->r6 | 0X8080;
    // 0x8022A278: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x8022A27C: sh          $v0, 0x24($a3)
    MEM_H(0X24, ctx->r7) = ctx->r2;
    // 0x8022A280: addiu       $v0, $zero, 0xA0
    ctx->r2 = ADD32(0, 0XA0);
    // 0x8022A284: sw          $a1, 0x14($a3)
    MEM_W(0X14, ctx->r7) = ctx->r5;
    // 0x8022A288: sb          $zero, 0x22($a3)
    MEM_B(0X22, ctx->r7) = 0;
    // 0x8022A28C: sb          $v0, 0x23($a3)
    MEM_B(0X23, ctx->r7) = ctx->r2;
    // 0x8022A290: sw          $a2, 0x18($a3)
    MEM_W(0X18, ctx->r7) = ctx->r6;
    // 0x8022A294: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8022A298: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8022A29C: sb          $v1, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r3;
    // 0x8022A2A0: sb          $a0, 0x8($a3)
    MEM_B(0X8, ctx->r7) = ctx->r4;
L_8022A2A4:
    // 0x8022A2A4: lbu         $v1, 0x8($a3)
    ctx->r3 = MEM_BU(ctx->r7, 0X8);
    // 0x8022A2A8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022A2AC: bne         $v1, $v0, L_8022A2C4
    if (ctx->r3 != ctx->r2) {
        // 0x8022A2B0: nop
    
            goto L_8022A2C4;
    }
    // 0x8022A2B0: nop

    // 0x8022A2B4: jal         0x8004F5C4
    // 0x8022A2B8: addu        $a0, $a3, $zero
    ctx->r4 = ADD32(ctx->r7, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x8022A2B8: addu        $a0, $a3, $zero
    ctx->r4 = ADD32(ctx->r7, 0);
    after_0:
    // 0x8022A2BC: j           L_8022A2F8
    // 0x8022A2C0: nop

        goto L_8022A2F8;
    // 0x8022A2C0: nop

L_8022A2C4:
    // 0x8022A2C4: lw          $a0, 0x28($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X28);
    // 0x8022A2C8: lw          $v1, 0x2C($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X2C);
    // 0x8022A2CC: lh          $v0, 0x1C($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X1C);
    // 0x8022A2D0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022A2D4: sh          $v0, 0x1C($a3)
    MEM_H(0X1C, ctx->r7) = ctx->r2;
    // 0x8022A2D8: lh          $v0, 0x20($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X20);
    // 0x8022A2DC: lw          $v1, 0x30($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X30);
    // 0x8022A2E0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022A2E4: sh          $v0, 0x1E($a3)
    MEM_H(0X1E, ctx->r7) = ctx->r2;
    // 0x8022A2E8: lh          $v0, 0x24($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X24);
    // 0x8022A2EC: lw          $v1, 0x34($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X34);
    // 0x8022A2F0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022A2F4: sh          $v0, 0x20($a3)
    MEM_H(0X20, ctx->r7) = ctx->r2;
L_8022A2F8:
    // 0x8022A2F8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022A2FC: jr          $ra
    // 0x8022A300: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022A300: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022853C_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022853C: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x80228540: lw          $a1, -0x3A1C($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3A1C);
    // 0x80228544: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228548: sb          $v0, 0xC($a1)
    MEM_B(0XC, ctx->r5) = ctx->r2;
    // 0x8022854C: lbu         $v1, 0xAC($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XAC);
    // 0x80228550: sltiu       $v0, $v1, 0xA
    ctx->r2 = ctx->r3 < 0XA ? 1 : 0;
    // 0x80228554: beq         $v0, $zero, L_80228674
    if (ctx->r2 == 0) {
        // 0x80228558: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80228674;
    }
    // 0x80228558: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022855C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80228560: addu        $at, $at, $v0
    gpr jr_addend_80228568 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80228564: lw          $v0, -0x3700($at)
    ctx->r2 = ADD32(ctx->r1, -0X3700);
    // 0x80228568: jr          $v0
    // 0x8022856C: nop

    switch (jr_addend_80228568 >> 2) {
        case 0: goto L_80228674; break;
        case 1: goto L_80228570; break;
        case 2: goto L_80228590; break;
        case 3: goto L_802285B0; break;
        case 4: goto L_802285D0; break;
        case 5: goto L_802285F0; break;
        case 6: goto L_802285FC; break;
        case 7: goto L_80228608; break;
        case 8: goto L_8022864C; break;
        case 9: goto L_80228658; break;
        default: switch_error(__func__, 0x80228568, 0x8022C900);
    }
    // 0x8022856C: nop

L_80228570:
    // 0x80228570: lw          $v0, 0x98($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X98);
    // 0x80228574: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80228578: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022857C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80228580: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80228584: lh          $v0, -0x3C44($at)
    ctx->r2 = MEM_H(ctx->r1, -0X3C44);
    // 0x80228588: j           L_80228630
    // 0x8022858C: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
        goto L_80228630;
    // 0x8022858C: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
L_80228590:
    // 0x80228590: lw          $v0, 0x98($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X98);
    // 0x80228594: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80228598: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022859C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802285A0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802285A4: lh          $v0, -0x3C44($at)
    ctx->r2 = MEM_H(ctx->r1, -0X3C44);
    // 0x802285A8: j           L_80228630
    // 0x802285AC: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
        goto L_80228630;
    // 0x802285AC: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
L_802285B0:
    // 0x802285B0: lw          $v0, 0x98($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X98);
    // 0x802285B4: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x802285B8: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x802285BC: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802285C0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802285C4: lh          $v0, -0x3C44($at)
    ctx->r2 = MEM_H(ctx->r1, -0X3C44);
    // 0x802285C8: j           L_80228630
    // 0x802285CC: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
        goto L_80228630;
    // 0x802285CC: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
L_802285D0:
    // 0x802285D0: lw          $v0, 0x98($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X98);
    // 0x802285D4: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x802285D8: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x802285DC: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802285E0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802285E4: lh          $v0, -0x3C02($at)
    ctx->r2 = MEM_H(ctx->r1, -0X3C02);
    // 0x802285E8: j           L_80228630
    // 0x802285EC: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
        goto L_80228630;
    // 0x802285EC: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
L_802285F0:
    // 0x802285F0: addiu       $v0, $zero, 0x13E
    ctx->r2 = ADD32(0, 0X13E);
    // 0x802285F4: j           L_80228674
    // 0x802285F8: sh          $v0, 0x58($a1)
    MEM_H(0X58, ctx->r5) = ctx->r2;
        goto L_80228674;
    // 0x802285F8: sh          $v0, 0x58($a1)
    MEM_H(0X58, ctx->r5) = ctx->r2;
L_802285FC:
    // 0x802285FC: addiu       $v0, $zero, -0x3F
    ctx->r2 = ADD32(0, -0X3F);
    // 0x80228600: j           L_80228674
    // 0x80228604: sh          $v0, 0x58($a1)
    MEM_H(0X58, ctx->r5) = ctx->r2;
        goto L_80228674;
    // 0x80228604: sh          $v0, 0x58($a1)
    MEM_H(0X58, ctx->r5) = ctx->r2;
L_80228608:
    // 0x80228608: lw          $v0, 0x98($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X98);
    // 0x8022860C: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x80228610: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x80228614: addiu       $v1, $v1, -0x3BBC
    ctx->r3 = ADD32(ctx->r3, -0X3BBC);
    // 0x80228618: sltiu       $v0, $a0, 0x1F
    ctx->r2 = ctx->r4 < 0X1F ? 1 : 0;
    // 0x8022861C: beq         $v0, $zero, L_80228638
    if (ctx->r2 == 0) {
        // 0x80228620: sll         $v0, $a0, 1
        ctx->r2 = S32(ctx->r4 << 1);
            goto L_80228638;
    }
    // 0x80228620: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x80228624: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80228628: lh          $v0, 0x0($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X0);
    // 0x8022862C: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
L_80228630:
    // 0x80228630: j           L_80228674
    // 0x80228634: sh          $v0, 0x58($a1)
    MEM_H(0X58, ctx->r5) = ctx->r2;
        goto L_80228674;
    // 0x80228634: sh          $v0, 0x58($a1)
    MEM_H(0X58, ctx->r5) = ctx->r2;
L_80228638:
    // 0x80228638: lhu         $v0, 0x58($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X58);
    // 0x8022863C: sb          $zero, 0xC($a1)
    MEM_B(0XC, ctx->r5) = 0;
    // 0x80228640: addiu       $v0, $v0, -0x11C
    ctx->r2 = ADD32(ctx->r2, -0X11C);
    // 0x80228644: j           L_80228674
    // 0x80228648: sh          $v0, 0x58($a1)
    MEM_H(0X58, ctx->r5) = ctx->r2;
        goto L_80228674;
    // 0x80228648: sh          $v0, 0x58($a1)
    MEM_H(0X58, ctx->r5) = ctx->r2;
L_8022864C:
    // 0x8022864C: addiu       $v0, $zero, -0x13E
    ctx->r2 = ADD32(0, -0X13E);
    // 0x80228650: j           L_80228674
    // 0x80228654: sh          $v0, 0x58($a1)
    MEM_H(0X58, ctx->r5) = ctx->r2;
        goto L_80228674;
    // 0x80228654: sh          $v0, 0x58($a1)
    MEM_H(0X58, ctx->r5) = ctx->r2;
L_80228658:
    // 0x80228658: addiu       $v0, $zero, -0x13E
    ctx->r2 = ADD32(0, -0X13E);
    // 0x8022865C: sh          $v0, 0x58($a1)
    MEM_H(0X58, ctx->r5) = ctx->r2;
    // 0x80228660: lw          $v0, 0x98($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X98);
    // 0x80228664: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80228668: sltiu       $v0, $v0, 0x12
    ctx->r2 = ctx->r2 < 0X12 ? 1 : 0;
    // 0x8022866C: beql        $v0, $zero, L_80228674
    if (ctx->r2 == 0) {
        // 0x80228670: sb          $zero, 0xC($a1)
        MEM_B(0XC, ctx->r5) = 0;
            goto L_80228674;
    }
    goto skip_0;
    // 0x80228670: sb          $zero, 0xC($a1)
    MEM_B(0XC, ctx->r5) = 0;
    skip_0:
L_80228674:
    // 0x80228674: jr          $ra
    // 0x80228678: nop

    TRACE_RETURN()
    return;
    // 0x80228678: nop

;}
RECOMP_FUNC void func_80228834_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228834: jr          $ra
    // 0x80228838: nop

    TRACE_RETURN()
    return;
    // 0x80228838: nop

;}
RECOMP_FUNC void func_802299C0_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802299C0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802299C4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802299C8: lbu         $s0, 0x3B($sp)
    ctx->r16 = MEM_BU(ctx->r29, 0X3B);
    // 0x802299CC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802299D0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802299D4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x802299D8: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x802299DC: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x802299E0: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x802299E4: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x802299E8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802299EC: jal         0x8004F144
    // 0x802299F0: addu        $s4, $a3, $zero
    ctx->r20 = ADD32(ctx->r7, 0);
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x802299F0: addu        $s4, $a3, $zero
    ctx->r20 = ADD32(ctx->r7, 0);
    after_0:
    // 0x802299F4: bne         $v0, $zero, L_80229A04
    if (ctx->r2 != 0) {
        // 0x802299F8: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_80229A04;
    }
    // 0x802299F8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802299FC: j           L_80229A28
    // 0x80229A00: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_80229A28;
    // 0x80229A00: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80229A04:
    // 0x80229A04: sb          $v1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r3;
    // 0x80229A08: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
    // 0x80229A0C: sb          $v1, 0x2($v0)
    MEM_B(0X2, ctx->r2) = ctx->r3;
    // 0x80229A10: sb          $s0, 0x3($v0)
    MEM_B(0X3, ctx->r2) = ctx->r16;
    // 0x80229A14: sb          $zero, 0xD($v0)
    MEM_B(0XD, ctx->r2) = 0;
    // 0x80229A18: sw          $s1, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->r17;
    // 0x80229A1C: sh          $s2, 0x2C($v0)
    MEM_H(0X2C, ctx->r2) = ctx->r18;
    // 0x80229A20: sh          $s3, 0x2E($v0)
    MEM_H(0X2E, ctx->r2) = ctx->r19;
    // 0x80229A24: sh          $s4, 0x30($v0)
    MEM_H(0X30, ctx->r2) = ctx->r20;
L_80229A28:
    // 0x80229A28: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80229A2C: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x80229A30: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80229A34: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80229A38: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80229A3C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229A40: jr          $ra
    // 0x80229A44: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80229A44: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_802268D8_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802268D8: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x802268DC: lw          $a1, 0x24($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X24);
    // 0x802268E0: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
    // 0x802268E4: bne         $v1, $v0, L_802268F4
    if (ctx->r3 != ctx->r2) {
        // 0x802268E8: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_802268F4;
    }
    // 0x802268E8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802268EC: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x802268F0: sb          $zero, 0xA($a1)
    MEM_B(0XA, ctx->r5) = 0;
L_802268F4:
    // 0x802268F4: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x802268F8: bne         $v0, $zero, L_80226908
    if (ctx->r2 != 0) {
        // 0x802268FC: lw          $a1, 0x28($a0)
        ctx->r5 = MEM_W(ctx->r4, 0X28);
            goto L_80226908;
    }
    // 0x802268FC: lw          $a1, 0x28($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X28);
    // 0x80226900: sb          $zero, 0x9($a1)
    MEM_B(0X9, ctx->r5) = 0;
    // 0x80226904: sb          $zero, 0xA($a1)
    MEM_B(0XA, ctx->r5) = 0;
L_80226908:
    // 0x80226908: jr          $ra
    // 0x8022690C: nop

    TRACE_RETURN()
    return;
    // 0x8022690C: nop

;}
RECOMP_FUNC void func_8022A3D0_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A3D0: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x8022A3D4: sw          $s1, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r17;
    // 0x8022A3D8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022A3DC: sw          $ra, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r31;
    // 0x8022A3E0: sw          $s0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r16;
    // 0x8022A3E4: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x8022A3E8: bne         $v0, $zero, L_8022A42C
    if (ctx->r2 != 0) {
        // 0x8022A3EC: addiu       $s0, $sp, 0x28
        ctx->r16 = ADD32(ctx->r29, 0X28);
            goto L_8022A42C;
    }
    // 0x8022A3EC: addiu       $s0, $sp, 0x28
    ctx->r16 = ADD32(ctx->r29, 0X28);
    // 0x8022A3F0: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x8022A3F4: addiu       $a1, $sp, 0x88
    ctx->r5 = ADD32(ctx->r29, 0X88);
    // 0x8022A3F8: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x8022A3FC: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x8022A400: jal         0x8004D5D4
    // 0x8022A404: sb          $zero, 0x88($sp)
    MEM_B(0X88, ctx->r29) = 0;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8022A404: sb          $zero, 0x88($sp)
    MEM_B(0X88, ctx->r29) = 0;
    after_0:
    // 0x8022A408: lbu         $v1, 0x8($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X8);
    // 0x8022A40C: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x8022A410: sh          $v0, 0xE($s1)
    MEM_H(0XE, ctx->r17) = ctx->r2;
    // 0x8022A414: lui         $v0, 0xFFF0
    ctx->r2 = S32(0XFFF0 << 16);
    // 0x8022A418: sh          $zero, 0x10($s1)
    MEM_H(0X10, ctx->r17) = 0;
    // 0x8022A41C: sw          $v0, 0x44($s1)
    MEM_W(0X44, ctx->r17) = ctx->r2;
    // 0x8022A420: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022A424: sb          $v1, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r3;
    // 0x8022A428: addiu       $s0, $sp, 0x28
    ctx->r16 = ADD32(ctx->r29, 0X28);
L_8022A42C:
    // 0x8022A42C: jal         0x8002C654
    // 0x8022A430: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8002C654_7A54(rdram, ctx);
        goto after_1;
    // 0x8022A430: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022A434: lh          $a0, 0x10($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X10);
    // 0x8022A438: jal         0x80031BB4
    // 0x8022A43C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80031BB4_CFB4(rdram, ctx);
        goto after_2;
    // 0x8022A43C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022A440: lh          $a0, 0xE($s1)
    ctx->r4 = MEM_H(ctx->r17, 0XE);
    // 0x8022A444: jal         0x800319B4
    // 0x8022A448: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_800319B4_CDB4(rdram, ctx);
        goto after_3;
    // 0x8022A448: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022A44C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A450: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x8022A454: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022A458: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8022A45C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022A460: jal         0x80031DA8
    // 0x8022A464: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_4;
    // 0x8022A464: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_4:
    // 0x8022A468: addiu       $a0, $s1, 0x18
    ctx->r4 = ADD32(ctx->r17, 0X18);
    // 0x8022A46C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022A470: jal         0x8009A3B4
    // 0x8022A474: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x8022A474: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_5:
    // 0x8022A478: lw          $a3, 0x44($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X44);
    // 0x8022A47C: addiu       $a0, $s1, 0x38
    ctx->r4 = ADD32(ctx->r17, 0X38);
    // 0x8022A480: lhu         $v0, 0x38($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X38);
    // 0x8022A484: lhu         $v1, 0x3C($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X3C);
    // 0x8022A488: lhu         $t0, 0xE($s1)
    ctx->r8 = MEM_HU(ctx->r17, 0XE);
    // 0x8022A48C: lhu         $t1, 0x10($s1)
    ctx->r9 = MEM_HU(ctx->r17, 0X10);
    // 0x8022A490: addiu       $a1, $zero, 0x1F4
    ctx->r5 = ADD32(0, 0X1F4);
    // 0x8022A494: addiu       $v0, $v0, -0x17
    ctx->r2 = ADD32(ctx->r2, -0X17);
    // 0x8022A498: sh          $v0, 0x38($s1)
    MEM_H(0X38, ctx->r17) = ctx->r2;
    // 0x8022A49C: lhu         $v0, 0x3A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X3A);
    // 0x8022A4A0: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8022A4A4: addiu       $a3, $a3, 0x53A0
    ctx->r7 = ADD32(ctx->r7, 0X53A0);
    // 0x8022A4A8: sw          $a3, 0x44($s1)
    MEM_W(0X44, ctx->r17) = ctx->r7;
    // 0x8022A4AC: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    // 0x8022A4B0: addiu       $v1, $v1, -0x34
    ctx->r3 = ADD32(ctx->r3, -0X34);
    // 0x8022A4B4: addiu       $t0, $t0, 0x40
    ctx->r8 = ADD32(ctx->r8, 0X40);
    // 0x8022A4B8: addiu       $t1, $t1, -0x28
    ctx->r9 = ADD32(ctx->r9, -0X28);
    // 0x8022A4BC: sh          $v1, 0x3C($s1)
    MEM_H(0X3C, ctx->r17) = ctx->r3;
    // 0x8022A4C0: sh          $t0, 0xE($s1)
    MEM_H(0XE, ctx->r17) = ctx->r8;
    // 0x8022A4C4: sh          $t1, 0x10($s1)
    MEM_H(0X10, ctx->r17) = ctx->r9;
    // 0x8022A4C8: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x8022A4CC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022A4D0: jal         0x8003B6B8
    // 0x8022A4D4: sh          $v0, 0x3A($s1)
    MEM_H(0X3A, ctx->r17) = ctx->r2;
    func_8003B6B8_16AB8(rdram, ctx);
        goto after_6;
    // 0x8022A4D4: sh          $v0, 0x3A($s1)
    MEM_H(0X3A, ctx->r17) = ctx->r2;
    after_6:
    // 0x8022A4D8: lw          $ra, 0x98($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X98);
    // 0x8022A4DC: lw          $s1, 0x94($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X94);
    // 0x8022A4E0: lw          $s0, 0x90($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X90);
    // 0x8022A4E4: jr          $ra
    // 0x8022A4E8: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    TRACE_RETURN()
    return;
    // 0x8022A4E8: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
;}
RECOMP_FUNC void func_80225A90_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225A90: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80225A94: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x80225A98: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80225A9C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80225AA0: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80225AA4: bne         $v0, $zero, L_80225BCC
    if (ctx->r2 != 0) {
        // 0x80225AA8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80225BCC;
    }
    // 0x80225AA8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225AAC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80225AB0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225AB4: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x80225AB8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80225ABC: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x80225AC0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225AC4: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x80225AC8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225ACC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225AD0: sb          $s1, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r17;
    // 0x80225AD4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225AD8: sh          $zero, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = 0;
    // 0x80225ADC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225AE0: sh          $zero, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = 0;
    // 0x80225AE4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225AE8: sh          $zero, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = 0;
    // 0x80225AEC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225AF0: sh          $zero, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = 0;
    // 0x80225AF4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225AF8: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x80225AFC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225B00: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x80225B04: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225B08: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    // 0x80225B0C: lw          $v1, 0x2C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X2C);
    // 0x80225B10: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80225B14: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x80225B18: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x80225B1C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80225B20: jal         0x8004CB2C
    // 0x80225B24: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_0;
    // 0x80225B24: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    after_0:
    // 0x80225B28: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x80225B2C: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    // 0x80225B30: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80225B34: addiu       $a3, $zero, 0x1E
    ctx->r7 = ADD32(0, 0X1E);
    // 0x80225B38: addiu       $v0, $zero, -0x7DA
    ctx->r2 = ADD32(0, -0X7DA);
    // 0x80225B3C: sh          $v0, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r2;
    // 0x80225B40: addiu       $v0, $zero, -0x17
    ctx->r2 = ADD32(0, -0X17);
    // 0x80225B44: sh          $v0, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r2;
    // 0x80225B48: addiu       $v0, $zero, 0x82A
    ctx->r2 = ADD32(0, 0X82A);
    // 0x80225B4C: addiu       $s0, $zero, -0x3
    ctx->r16 = ADD32(0, -0X3);
    // 0x80225B50: sh          $v0, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r2;
    // 0x80225B54: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225B58: jal         0x80228F48
    // 0x80225B5C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    func_80228F48_ovl6(rdram, ctx);
        goto after_1;
    // 0x80225B5C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_1:
    // 0x80225B60: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x80225B64: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    // 0x80225B68: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80225B6C: addiu       $a3, $zero, 0x1E
    ctx->r7 = ADD32(0, 0X1E);
    // 0x80225B70: addiu       $v0, $zero, -0x7BC
    ctx->r2 = ADD32(0, -0X7BC);
    // 0x80225B74: sh          $v0, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r2;
    // 0x80225B78: addiu       $v0, $zero, -0x64
    ctx->r2 = ADD32(0, -0X64);
    // 0x80225B7C: sh          $v0, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r2;
    // 0x80225B80: addiu       $v0, $zero, 0x88E
    ctx->r2 = ADD32(0, 0X88E);
    // 0x80225B84: sh          $v0, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r2;
    // 0x80225B88: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225B8C: jal         0x80228F48
    // 0x80225B90: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    func_80228F48_ovl6(rdram, ctx);
        goto after_2;
    // 0x80225B90: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_2:
    // 0x80225B94: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x80225B98: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    // 0x80225B9C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80225BA0: addiu       $a3, $zero, 0x1E
    ctx->r7 = ADD32(0, 0X1E);
    // 0x80225BA4: addiu       $v0, $zero, -0x794
    ctx->r2 = ADD32(0, -0X794);
    // 0x80225BA8: sh          $v0, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r2;
    // 0x80225BAC: addiu       $v0, $zero, -0x14
    ctx->r2 = ADD32(0, -0X14);
    // 0x80225BB0: sh          $v0, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r2;
    // 0x80225BB4: addiu       $v0, $zero, 0x834
    ctx->r2 = ADD32(0, 0X834);
    // 0x80225BB8: sh          $v0, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r2;
    // 0x80225BBC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225BC0: jal         0x80228F48
    // 0x80225BC4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    func_80228F48_ovl6(rdram, ctx);
        goto after_3;
    // 0x80225BC4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_3:
    // 0x80225BC8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80225BCC:
    // 0x80225BCC: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80225BD0: sb          $v0, -0x36C3($at)
    MEM_B(-0X36C3, ctx->r1) = ctx->r2;
    // 0x80225BD4: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80225BD8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80225BDC: sb          $v0, -0x36C0($at)
    MEM_B(-0X36C0, ctx->r1) = ctx->r2;
    // 0x80225BE0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80225BE4: sb          $v0, -0x36C1($at)
    MEM_B(-0X36C1, ctx->r1) = ctx->r2;
    // 0x80225BE8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80225BEC: sb          $v0, -0x36C2($at)
    MEM_B(-0X36C2, ctx->r1) = ctx->r2;
    // 0x80225BF0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80225BF4: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80225BF8: sb          $v0, -0x36BF($at)
    MEM_B(-0X36BF, ctx->r1) = ctx->r2;
    // 0x80225BFC: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x80225C00: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80225C04: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80225C08: jr          $ra
    // 0x80225C0C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80225C0C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80225520_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225520: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80225524: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80225528: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022552C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80225530: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x80225534: bne         $v0, $zero, L_80225650
    if (ctx->r2 != 0) {
        // 0x80225538: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80225650;
    }
    // 0x80225538: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022553C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225540: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x80225544: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80225548: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022554C: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x80225550: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225554: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225558: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x8022555C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225560: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    // 0x80225564: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80225568: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022556C: sb          $v0, 0x45B8($at)
    MEM_B(0X45B8, ctx->r1) = ctx->r2;
    // 0x80225570: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225574: sb          $v0, 0x4660($at)
    MEM_B(0X4660, ctx->r1) = ctx->r2;
    // 0x80225578: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x8022557C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225580: sb          $zero, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = 0;
    // 0x80225584: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225588: sh          $zero, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = 0;
    // 0x8022558C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225590: sh          $zero, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = 0;
    // 0x80225594: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225598: sh          $zero, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = 0;
    // 0x8022559C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802255A0: sh          $zero, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = 0;
    // 0x802255A4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802255A8: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x802255AC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802255B0: sb          $zero, 0x4468($at)
    MEM_B(0X4468, ctx->r1) = 0;
    // 0x802255B4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802255B8: sb          $zero, 0x4430($at)
    MEM_B(0X4430, ctx->r1) = 0;
    // 0x802255BC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802255C0: sw          $zero, 0x4664($at)
    MEM_W(0X4664, ctx->r1) = 0;
    // 0x802255C4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802255C8: sw          $zero, 0x4668($at)
    MEM_W(0X4668, ctx->r1) = 0;
    // 0x802255CC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802255D0: sh          $zero, 0x4680($at)
    MEM_H(0X4680, ctx->r1) = 0;
    // 0x802255D4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802255D8: sh          $v0, 0x4682($at)
    MEM_H(0X4682, ctx->r1) = ctx->r2;
    // 0x802255DC: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x802255E0: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x802255E4: addiu       $a2, $zero, -0x3
    ctx->r6 = ADD32(0, -0X3);
    // 0x802255E8: and         $v0, $v0, $a2
    ctx->r2 = ctx->r2 & ctx->r6;
    // 0x802255EC: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x802255F0: lw          $v1, 0x28($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X28);
    // 0x802255F4: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x802255F8: and         $v0, $v0, $a2
    ctx->r2 = ctx->r2 & ctx->r6;
    // 0x802255FC: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80225600: lw          $v1, 0x2C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X2C);
    // 0x80225604: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80225608: and         $v0, $v0, $a2
    ctx->r2 = ctx->r2 & ctx->r6;
    // 0x8022560C: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80225610: lw          $v1, 0x30($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X30);
    // 0x80225614: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80225618: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022561C: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80225620: lw          $v1, 0x34($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X34);
    // 0x80225624: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80225628: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x8022562C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x80225630: and         $v0, $v0, $a2
    ctx->r2 = ctx->r2 & ctx->r6;
    // 0x80225634: jal         0x8004CB2C
    // 0x80225638: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_0;
    // 0x80225638: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    after_0:
    // 0x8022563C: lw          $a0, 0x30($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X30);
    // 0x80225640: addiu       $a1, $zero, 0x3E8
    ctx->r5 = ADD32(0, 0X3E8);
    // 0x80225644: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80225648: jal         0x80229E74
    // 0x8022564C: addiu       $a3, $zero, -0x1F4
    ctx->r7 = ADD32(0, -0X1F4);
    func_80229E74_ovl6(rdram, ctx);
        goto after_1;
    // 0x8022564C: addiu       $a3, $zero, -0x1F4
    ctx->r7 = ADD32(0, -0X1F4);
    after_1:
L_80225650:
    // 0x80225650: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80225654: lhu         $v0, -0x730C($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X730C);
    // 0x80225658: addiu       $v1, $zero, 0x7
    ctx->r3 = ADD32(0, 0X7);
    // 0x8022565C: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x80225660: bne         $v0, $v1, L_80225680
    if (ctx->r2 != ctx->r3) {
        // 0x80225664: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80225680;
    }
    // 0x80225664: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225668: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8022566C: lw          $a0, 0x30($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X30);
    // 0x80225670: addiu       $a1, $zero, 0x190
    ctx->r5 = ADD32(0, 0X190);
    // 0x80225674: addiu       $a2, $zero, -0x64
    ctx->r6 = ADD32(0, -0X64);
    // 0x80225678: jal         0x80229D40
    // 0x8022567C: addiu       $a3, $zero, 0x12C
    ctx->r7 = ADD32(0, 0X12C);
    func_80229D40_ovl6(rdram, ctx);
        goto after_2;
    // 0x8022567C: addiu       $a3, $zero, 0x12C
    ctx->r7 = ADD32(0, 0X12C);
    after_2:
L_80225680:
    // 0x80225680: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80225684: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80225688: jr          $ra
    // 0x8022568C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022568C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802270D0_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802270D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802270D4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802270D8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802270DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802270E0: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802270E4: bne         $v0, $zero, L_80227130
    if (ctx->r2 != 0) {
        // 0x802270E8: nop
    
            goto L_80227130;
    }
    // 0x802270E8: nop

    // 0x802270EC: jal         0x8004D5D4
    // 0x802270F0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x802270F0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x802270F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802270F8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802270FC: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80227100: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80227104: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80227108: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022710C: addiu       $v0, $zero, 0x2108
    ctx->r2 = ADD32(0, 0X2108);
    // 0x80227110: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80227114: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80227118: jal         0x80050294
    // 0x8022711C: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x8022711C: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    after_1:
    // 0x80227120: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80227124: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227128: j           L_8022715C
    // 0x8022712C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_8022715C;
    // 0x8022712C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80227130:
    // 0x80227130: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80227134: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80227138: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022713C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80227140: lw          $v0, -0x412C($at)
    ctx->r2 = MEM_W(ctx->r1, -0X412C);
    // 0x80227144: jalr        $v0
    // 0x80227148: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x80227148: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022714C: jal         0x800504EC
    // 0x80227150: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800504EC_2B8EC(rdram, ctx);
        goto after_3;
    // 0x80227150: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80227154: jal         0x8005129C
    // 0x80227158: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005129C_2C69C(rdram, ctx);
        goto after_4;
    // 0x80227158: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
L_8022715C:
    // 0x8022715C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227160: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227164: jr          $ra
    // 0x80227168: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227168: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022A5C0_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A5C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022A5C4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022A5C8: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8022A5CC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022A5D0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022A5D4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022A5D8: lw          $v0, -0x37D8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X37D8);
    // 0x8022A5DC: jalr        $v0
    // 0x8022A5E0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022A5E0: nop

    after_0:
    // 0x8022A5E4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022A5E8: jr          $ra
    // 0x8022A5EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022A5EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225320_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225320: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80225324: lbu         $v0, -0x359C($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X359C);
    // 0x80225328: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022532C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80225330: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80225334: bne         $v0, $zero, L_80225358
    if (ctx->r2 != 0) {
        // 0x80225338: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_80225358;
    }
    // 0x80225338: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022533C: jal         0x8006036C
    // 0x80225340: addiu       $a0, $zero, 0x600
    ctx->r4 = ADD32(0, 0X600);
    func_8006036C_3B76C(rdram, ctx);
        goto after_0;
    // 0x80225340: addiu       $a0, $zero, 0x600
    ctx->r4 = ADD32(0, 0X600);
    after_0:
    // 0x80225344: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80225348: lbu         $v0, -0x359C($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X359C);
    // 0x8022534C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225350: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80225354: sb          $v0, -0x359C($at)
    MEM_B(-0X359C, ctx->r1) = ctx->r2;
L_80225358:
    // 0x80225358: lui         $s0, 0x8023
    ctx->r16 = S32(0X8023 << 16);
    // 0x8022535C: addiu       $s0, $s0, -0x4A20
    ctx->r16 = ADD32(ctx->r16, -0X4A20);
    // 0x80225360: lhu         $a0, 0x0($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X0);
    // 0x80225364: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
    // 0x80225368: andi        $v1, $a0, 0xFFFF
    ctx->r3 = ctx->r4 & 0XFFFF;
    // 0x8022536C: beq         $v1, $v0, L_802253A4
    if (ctx->r3 == ctx->r2) {
        // 0x80225370: ori         $s1, $zero, 0xFFFF
        ctx->r17 = 0 | 0XFFFF;
            goto L_802253A4;
    }
    // 0x80225370: ori         $s1, $zero, 0xFFFF
    ctx->r17 = 0 | 0XFFFF;
L_80225374:
    // 0x80225374: jal         0x8006033C
    // 0x80225378: nop

    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x80225378: nop

    after_1:
    // 0x8022537C: beql        $v0, $zero, L_80225398
    if (ctx->r2 == 0) {
        // 0x80225380: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_80225398;
    }
    goto skip_0;
    // 0x80225380: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    skip_0:
    // 0x80225384: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80225388: jal         0x80060690
    // 0x8022538C: nop

    func_80060690_3BA90(rdram, ctx);
        goto after_2;
    // 0x8022538C: nop

    after_2:
    // 0x80225390: j           L_802253A4
    // 0x80225394: nop

        goto L_802253A4;
    // 0x80225394: nop

L_80225398:
    // 0x80225398: lhu         $a0, 0x0($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X0);
    // 0x8022539C: bne         $a0, $s1, L_80225374
    if (ctx->r4 != ctx->r17) {
        // 0x802253A0: nop
    
            goto L_80225374;
    }
    // 0x802253A0: nop

L_802253A4:
    // 0x802253A4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802253A8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802253AC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802253B0: jr          $ra
    // 0x802253B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802253B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802253B8: nop

    // 0x802253BC: nop

;}
RECOMP_FUNC void func_802280D4_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802280D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802280D8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802280DC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802280E0: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    // 0x802280E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802280E8: jal         0x80050294
    // 0x802280EC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x802280EC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x802280F0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802280F4: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x802280F8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802280FC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80228100: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80228104: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228108: jr          $ra
    // 0x8022810C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022810C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225C10_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225C10: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x80225C14: lw          $v0, 0x10($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X10);
    // 0x80225C18: bne         $v0, $zero, L_80225D54
    if (ctx->r2 != 0) {
        // 0x80225C1C: slti        $v0, $v0, 0x16
        ctx->r2 = SIGNED(ctx->r2) < 0X16 ? 1 : 0;
            goto L_80225D54;
    }
    // 0x80225C1C: slti        $v0, $v0, 0x16
    ctx->r2 = SIGNED(ctx->r2) < 0X16 ? 1 : 0;
    // 0x80225C20: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80225C24: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225C28: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x80225C2C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80225C30: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225C34: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x80225C38: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225C3C: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x80225C40: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225C44: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x80225C48: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225C4C: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    // 0x80225C50: lui         $v0, 0x140
    ctx->r2 = S32(0X140 << 16);
    // 0x80225C54: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225C58: sw          $v0, 0x4514($at)
    MEM_W(0X4514, ctx->r1) = ctx->r2;
    // 0x80225C5C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225C60: sw          $v0, 0x454C($at)
    MEM_W(0X454C, ctx->r1) = ctx->r2;
    // 0x80225C64: addiu       $v0, $zero, -0xE8B
    ctx->r2 = ADD32(0, -0XE8B);
    // 0x80225C68: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225C6C: sb          $zero, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = 0;
    // 0x80225C70: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225C74: sh          $zero, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = 0;
    // 0x80225C78: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225C7C: sh          $zero, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = 0;
    // 0x80225C80: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225C84: sh          $zero, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = 0;
    // 0x80225C88: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225C8C: sh          $zero, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = 0;
    // 0x80225C90: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225C94: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x80225C98: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225C9C: sb          $v1, 0x4510($at)
    MEM_B(0X4510, ctx->r1) = ctx->r3;
    // 0x80225CA0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225CA4: sw          $zero, 0x4518($at)
    MEM_W(0X4518, ctx->r1) = 0;
    // 0x80225CA8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225CAC: sb          $v1, 0x4548($at)
    MEM_B(0X4548, ctx->r1) = ctx->r3;
    // 0x80225CB0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225CB4: sw          $zero, 0x4550($at)
    MEM_W(0X4550, ctx->r1) = 0;
    // 0x80225CB8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225CBC: sh          $v0, 0x4568($at)
    MEM_H(0X4568, ctx->r1) = ctx->r2;
    // 0x80225CC0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225CC4: sh          $v0, 0x4530($at)
    MEM_H(0X4530, ctx->r1) = ctx->r2;
    // 0x80225CC8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225CCC: sh          $zero, 0x456A($at)
    MEM_H(0X456A, ctx->r1) = 0;
    // 0x80225CD0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225CD4: sh          $zero, 0x4532($at)
    MEM_H(0X4532, ctx->r1) = 0;
    // 0x80225CD8: lw          $a0, 0x30($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X30);
    // 0x80225CDC: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x80225CE0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80225CE4: sw          $zero, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = 0;
    // 0x80225CE8: sw          $zero, 0x20($a0)
    MEM_W(0X20, ctx->r4) = 0;
    // 0x80225CEC: sw          $zero, 0x24($a0)
    MEM_W(0X24, ctx->r4) = 0;
    // 0x80225CF0: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
    // 0x80225CF4: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    // 0x80225CF8: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80225CFC: sb          $v1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r3;
    // 0x80225D00: lw          $a0, 0x24($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X24);
    // 0x80225D04: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x80225D08: addiu       $v1, $zero, -0x3
    ctx->r3 = ADD32(0, -0X3);
    // 0x80225D0C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80225D10: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x80225D14: lw          $a0, 0x28($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X28);
    // 0x80225D18: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x80225D1C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80225D20: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x80225D24: lw          $a0, 0x2C($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X2C);
    // 0x80225D28: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x80225D2C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80225D30: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x80225D34: lw          $a0, 0x34($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X34);
    // 0x80225D38: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x80225D3C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80225D40: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x80225D44: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80225D48: sb          $zero, -0x36C4($at)
    MEM_B(-0X36C4, ctx->r1) = 0;
    // 0x80225D4C: lw          $v0, 0x10($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X10);
    // 0x80225D50: slti        $v0, $v0, 0x16
    ctx->r2 = SIGNED(ctx->r2) < 0X16 ? 1 : 0;
L_80225D54:
    // 0x80225D54: beq         $v0, $zero, L_80225D84
    if (ctx->r2 == 0) {
        // 0x80225D58: nop
    
            goto L_80225D84;
    }
    // 0x80225D58: nop

    // 0x80225D5C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80225D60: addiu       $v0, $v0, 0x4532
    ctx->r2 = ADD32(ctx->r2, 0X4532);
    // 0x80225D64: lhu         $v1, 0x0($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X0);
    // 0x80225D68: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80225D6C: lhu         $a0, 0x456A($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X456A);
    // 0x80225D70: addiu       $v1, $v1, 0xFE
    ctx->r3 = ADD32(ctx->r3, 0XFE);
    // 0x80225D74: addiu       $a0, $a0, 0xFE
    ctx->r4 = ADD32(ctx->r4, 0XFE);
    // 0x80225D78: sh          $v1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r3;
    // 0x80225D7C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225D80: sh          $a0, 0x456A($at)
    MEM_H(0X456A, ctx->r1) = ctx->r4;
L_80225D84:
    // 0x80225D84: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x80225D88: addiu       $v0, $zero, 0x16
    ctx->r2 = ADD32(0, 0X16);
    // 0x80225D8C: bne         $v1, $v0, L_80225DB0
    if (ctx->r3 != ctx->r2) {
        // 0x80225D90: addiu       $v0, $zero, 0x2C
        ctx->r2 = ADD32(0, 0X2C);
            goto L_80225DB0;
    }
    // 0x80225D90: addiu       $v0, $zero, 0x2C
    ctx->r2 = ADD32(0, 0X2C);
    // 0x80225D94: addiu       $v0, $zero, 0xE8B
    ctx->r2 = ADD32(0, 0XE8B);
    // 0x80225D98: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225D9C: sh          $v0, 0x4568($at)
    MEM_H(0X4568, ctx->r1) = ctx->r2;
    // 0x80225DA0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225DA4: sh          $v0, 0x4530($at)
    MEM_H(0X4530, ctx->r1) = ctx->r2;
    // 0x80225DA8: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x80225DAC: addiu       $v0, $zero, 0x2C
    ctx->r2 = ADD32(0, 0X2C);
L_80225DB0:
    // 0x80225DB0: bne         $v1, $v0, L_80225DD8
    if (ctx->r3 != ctx->r2) {
        // 0x80225DB4: nop
    
            goto L_80225DD8;
    }
    // 0x80225DB4: nop

    // 0x80225DB8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225DBC: sh          $zero, 0x4568($at)
    MEM_H(0X4568, ctx->r1) = 0;
    // 0x80225DC0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225DC4: sh          $zero, 0x4530($at)
    MEM_H(0X4530, ctx->r1) = 0;
    // 0x80225DC8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225DCC: sh          $zero, 0x456A($at)
    MEM_H(0X456A, ctx->r1) = 0;
    // 0x80225DD0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225DD4: sh          $zero, 0x4532($at)
    MEM_H(0X4532, ctx->r1) = 0;
L_80225DD8:
    // 0x80225DD8: jr          $ra
    // 0x80225DDC: nop

    TRACE_RETURN()
    return;
    // 0x80225DDC: nop

;}
RECOMP_FUNC void func_8022AB30_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AB30: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8022AB34: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x8022AB38: sw          $ra, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r31;
    // 0x8022AB3C: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x8022AB40: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x8022AB44: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x8022AB48: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x8022AB4C: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x8022AB50: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8022AB54: lbu         $v0, 0xC($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XC);
    // 0x8022AB58: lb          $a0, 0xD($a1)
    ctx->r4 = MEM_B(ctx->r5, 0XD);
    // 0x8022AB5C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022AB60: sb          $v0, 0xC($a1)
    MEM_B(0XC, ctx->r5) = ctx->r2;
    // 0x8022AB64: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022AB68: sll         $v1, $a0, 1
    ctx->r3 = S32(ctx->r4 << 1);
    // 0x8022AB6C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022AB70: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8022AB74: lbu         $v1, -0x376B($at)
    ctx->r3 = MEM_BU(ctx->r1, -0X376B);
    // 0x8022AB78: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8022AB7C: bne         $v0, $v1, L_8022AB9C
    if (ctx->r2 != ctx->r3) {
        // 0x8022AB80: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_8022AB9C;
    }
    // 0x8022AB80: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x8022AB84: sb          $v0, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r2;
    // 0x8022AB88: lb          $v1, 0xD($a1)
    ctx->r3 = MEM_B(ctx->r5, 0XD);
    // 0x8022AB8C: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x8022AB90: bne         $v1, $v0, L_8022AB9C
    if (ctx->r3 != ctx->r2) {
        // 0x8022AB94: sb          $zero, 0xC($a1)
        MEM_B(0XC, ctx->r5) = 0;
            goto L_8022AB9C;
    }
    // 0x8022AB94: sb          $zero, 0xC($a1)
    MEM_B(0XC, ctx->r5) = 0;
    // 0x8022AB98: sb          $zero, 0xD($a1)
    MEM_B(0XD, ctx->r5) = 0;
L_8022AB9C:
    // 0x8022AB9C: lb          $v0, 0xD($a1)
    ctx->r2 = MEM_B(ctx->r5, 0XD);
    // 0x8022ABA0: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022ABA4: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x8022ABA8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022ABAC: lbu         $v1, -0x376C($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X376C);
    // 0x8022ABB0: lui         $v0, 0xAAAA
    ctx->r2 = S32(0XAAAA << 16);
    // 0x8022ABB4: ori         $v0, $v0, 0xAAAB
    ctx->r2 = ctx->r2 | 0XAAAB;
    // 0x8022ABB8: multu       $v1, $v0
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022ABBC: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8022ABC0: lw          $a1, 0x1C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X1C);
    // 0x8022ABC4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022ABC8: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    // 0x8022ABCC: mfhi        $t1
    ctx->r9 = hi;
    // 0x8022ABD0: srl         $t0, $t1, 2
    ctx->r8 = S32(U32(ctx->r9) >> 2);
    // 0x8022ABD4: sll         $v0, $t0, 1
    ctx->r2 = S32(ctx->r8 << 1);
    // 0x8022ABD8: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x8022ABDC: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022ABE0: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8022ABE4: andi        $v1, $v1, 0xFF
    ctx->r3 = ctx->r3 & 0XFF;
    // 0x8022ABE8: sll         $s0, $v1, 2
    ctx->r16 = S32(ctx->r3 << 2);
    // 0x8022ABEC: addu        $s0, $s0, $v1
    ctx->r16 = ADD32(ctx->r16, ctx->r3);
    // 0x8022ABF0: sll         $s0, $s0, 3
    ctx->r16 = S32(ctx->r16 << 3);
    // 0x8022ABF4: andi        $t0, $t0, 0xFF
    ctx->r8 = ctx->r8 & 0XFF;
    // 0x8022ABF8: sll         $s1, $t0, 2
    ctx->r17 = S32(ctx->r8 << 2);
    // 0x8022ABFC: addu        $s1, $s1, $t0
    ctx->r17 = ADD32(ctx->r17, ctx->r8);
    // 0x8022AC00: jal         0x8003BA58
    // 0x8022AC04: sll         $s1, $s1, 3
    ctx->r17 = S32(ctx->r17 << 3);
    func_8003BA58_16E58(rdram, ctx);
        goto after_0;
    // 0x8022AC04: sll         $s1, $s1, 3
    ctx->r17 = S32(ctx->r17 << 3);
    after_0:
    // 0x8022AC08: addiu       $s3, $sp, 0x20
    ctx->r19 = ADD32(ctx->r29, 0X20);
    // 0x8022AC0C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x8022AC10: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x8022AC14: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022AC18: jal         0x8003BB80
    // 0x8022AC1C: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
    func_8003BB80_16F80(rdram, ctx);
        goto after_1;
    // 0x8022AC1C: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
    after_1:
    // 0x8022AC20: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8022AC24: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022AC28: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    // 0x8022AC2C: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
    // 0x8022AC30: addiu       $s5, $s0, 0x23
    ctx->r21 = ADD32(ctx->r16, 0X23);
    // 0x8022AC34: addiu       $v0, $s0, 0x26
    ctx->r2 = ADD32(ctx->r16, 0X26);
    // 0x8022AC38: addiu       $s4, $s0, 0x4
    ctx->r20 = ADD32(ctx->r16, 0X4);
    // 0x8022AC3C: sb          $v0, 0x22($sp)
    MEM_B(0X22, ctx->r29) = ctx->r2;
    // 0x8022AC40: addiu       $v0, $s0, 0x1
    ctx->r2 = ADD32(ctx->r16, 0X1);
    // 0x8022AC44: addiu       $s2, $s1, 0x54
    ctx->r18 = ADD32(ctx->r17, 0X54);
    // 0x8022AC48: sb          $v0, 0x26($sp)
    MEM_B(0X26, ctx->r29) = ctx->r2;
    // 0x8022AC4C: addiu       $v0, $s1, 0x67
    ctx->r2 = ADD32(ctx->r17, 0X67);
    // 0x8022AC50: sb          $s5, 0x20($sp)
    MEM_B(0X20, ctx->r29) = ctx->r21;
    // 0x8022AC54: sb          $s4, 0x24($sp)
    MEM_B(0X24, ctx->r29) = ctx->r20;
    // 0x8022AC58: sb          $s2, 0x21($sp)
    MEM_B(0X21, ctx->r29) = ctx->r18;
    // 0x8022AC5C: sb          $v0, 0x23($sp)
    MEM_B(0X23, ctx->r29) = ctx->r2;
    // 0x8022AC60: sb          $s2, 0x25($sp)
    MEM_B(0X25, ctx->r29) = ctx->r18;
    // 0x8022AC64: jal         0x8003BC68
    // 0x8022AC68: sb          $v0, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r2;
    func_8003BC68_17068(rdram, ctx);
        goto after_2;
    // 0x8022AC68: sb          $v0, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r2;
    after_2:
    // 0x8022AC6C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x8022AC70: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x8022AC74: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8022AC78: jal         0x8003BB80
    // 0x8022AC7C: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
    func_8003BB80_16F80(rdram, ctx);
        goto after_3;
    // 0x8022AC7C: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
    after_3:
    // 0x8022AC80: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8022AC84: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022AC88: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    // 0x8022AC8C: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
    // 0x8022AC90: addiu       $v0, $s0, 0x20
    ctx->r2 = ADD32(ctx->r16, 0X20);
    // 0x8022AC94: addiu       $s0, $s0, 0x7
    ctx->r16 = ADD32(ctx->r16, 0X7);
    // 0x8022AC98: addiu       $s1, $s1, 0x41
    ctx->r17 = ADD32(ctx->r17, 0X41);
    // 0x8022AC9C: sb          $v0, 0x20($sp)
    MEM_B(0X20, ctx->r29) = ctx->r2;
    // 0x8022ACA0: sb          $s5, 0x22($sp)
    MEM_B(0X22, ctx->r29) = ctx->r21;
    // 0x8022ACA4: sb          $s0, 0x24($sp)
    MEM_B(0X24, ctx->r29) = ctx->r16;
    // 0x8022ACA8: sb          $s4, 0x26($sp)
    MEM_B(0X26, ctx->r29) = ctx->r20;
    // 0x8022ACAC: sb          $s1, 0x21($sp)
    MEM_B(0X21, ctx->r29) = ctx->r17;
    // 0x8022ACB0: sb          $s2, 0x23($sp)
    MEM_B(0X23, ctx->r29) = ctx->r18;
    // 0x8022ACB4: sb          $s1, 0x25($sp)
    MEM_B(0X25, ctx->r29) = ctx->r17;
    // 0x8022ACB8: jal         0x8003BC68
    // 0x8022ACBC: sb          $s2, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r18;
    func_8003BC68_17068(rdram, ctx);
        goto after_4;
    // 0x8022ACBC: sb          $s2, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r18;
    after_4:
    // 0x8022ACC0: lw          $ra, 0x48($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X48);
    // 0x8022ACC4: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x8022ACC8: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x8022ACCC: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x8022ACD0: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x8022ACD4: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x8022ACD8: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8022ACDC: jr          $ra
    // 0x8022ACE0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x8022ACE0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_80228B84_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228B84: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228B88: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228B8C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228B90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80228B94: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80228B98: bne         $v0, $zero, L_80228BC0
    if (ctx->r2 != 0) {
        // 0x80228B9C: addiu       $v1, $zero, 0x1E
        ctx->r3 = ADD32(0, 0X1E);
            goto L_80228BC0;
    }
    // 0x80228B9C: addiu       $v1, $zero, 0x1E
    ctx->r3 = ADD32(0, 0X1E);
    // 0x80228BA0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80228BA4: jal         0x80050294
    // 0x80228BA8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80228BA8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80228BAC: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80228BB0: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x80228BB4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228BB8: j           L_80228BEC
    // 0x80228BBC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_80228BEC;
    // 0x80228BBC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80228BC0:
    // 0x80228BC0: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x80228BC4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228BC8: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x80228BCC: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80228BD0: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80228BD4: bne         $v0, $v1, L_80228BE4
    if (ctx->r2 != ctx->r3) {
        // 0x80228BD8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80228BE4;
    }
    // 0x80228BD8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228BDC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80228BE0: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_80228BE4:
    // 0x80228BE4: jal         0x8005044C
    // 0x80228BE8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_1;
    // 0x80228BE8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_80228BEC:
    // 0x80228BEC: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80228BF0: jal         0x8004DD04
    // 0x80228BF4: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8004DD04_29104(rdram, ctx);
        goto after_2;
    // 0x80228BF4: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_2:
    // 0x80228BF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80228BFC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228C00: jr          $ra
    // 0x80228C04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228C04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80229D10_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229D10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229D14: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80229D18: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x80229D1C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80229D20: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80229D24: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80229D28: lw          $v0, -0x3AD0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X3AD0);
    // 0x80229D2C: jalr        $v0
    // 0x80229D30: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80229D30: nop

    after_0:
    // 0x80229D34: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80229D38: jr          $ra
    // 0x80229D3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80229D3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802287EC_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802287EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802287F0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802287F4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802287F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802287FC: lw          $v0, 0x98($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X98);
    // 0x80228800: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x80228804: addiu       $v0, $zero, 0x22
    ctx->r2 = ADD32(0, 0X22);
    // 0x80228808: bne         $v1, $v0, L_80228824
    if (ctx->r3 != ctx->r2) {
        // 0x8022880C: addiu       $a1, $zero, 0x4
        ctx->r5 = ADD32(0, 0X4);
            goto L_80228824;
    }
    // 0x8022880C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80228810: jal         0x80050294
    // 0x80228814: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80228814: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80228818: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022881C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228820: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80228824:
    // 0x80228824: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80228828: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022882C: jr          $ra
    // 0x80228830: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228830: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802273E8_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802273E8: lbu         $v0, 0xC($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XC);
    // 0x802273EC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802273F0: sb          $v0, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r2;
    // 0x802273F4: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x802273F8: bne         $v0, $zero, L_8022740C
    if (ctx->r2 != 0) {
        // 0x802273FC: nop
    
            goto L_8022740C;
    }
    // 0x802273FC: nop

    // 0x80227400: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80227404: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227408: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_8022740C:
    // 0x8022740C: lhu         $v0, 0x56($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X56);
    // 0x80227410: addiu       $v0, $v0, 0x5
    ctx->r2 = ADD32(ctx->r2, 0X5);
    // 0x80227414: jr          $ra
    // 0x80227418: sh          $v0, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80227418: sh          $v0, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_8022737C_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022737C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227380: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227384: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227388: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022738C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80227390: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80227394: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227398: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022739C: lw          $v0, -0x4164($at)
    ctx->r2 = MEM_W(ctx->r1, -0X4164);
    // 0x802273A0: jalr        $v0
    // 0x802273A4: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802273A4: nop

    after_0:
    // 0x802273A8: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x802273AC: jal         0x8004DD04
    // 0x802273B0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8004DD04_29104(rdram, ctx);
        goto after_1;
    // 0x802273B0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_1:
    // 0x802273B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802273B8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802273BC: jr          $ra
    // 0x802273C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802273C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022A4EC_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A4EC: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8022A4F0: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x8022A4F4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022A4F8: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x8022A4FC: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x8022A500: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x8022A504: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x8022A508: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x8022A50C: addu        $s4, $a3, $zero
    ctx->r20 = ADD32(ctx->r7, 0);
    // 0x8022A510: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x8022A514: jal         0x8004F2C4
    // 0x8022A518: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    func_8004F2C4_2A6C4(rdram, ctx);
        goto after_0;
    // 0x8022A518: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    after_0:
    // 0x8022A51C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8022A520: beq         $s0, $zero, L_8022A5A0
    if (ctx->r16 == 0) {
        // 0x8022A524: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_8022A5A0;
    }
    // 0x8022A524: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8022A528: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A52C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8022A530: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x8022A534: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x8022A538: sh          $s2, 0x30($sp)
    MEM_H(0X30, ctx->r29) = ctx->r18;
    // 0x8022A53C: sh          $s3, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r19;
    // 0x8022A540: jal         0x8002C654
    // 0x8022A544: sh          $s4, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r20;
    func_8002C654_7A54(rdram, ctx);
        goto after_1;
    // 0x8022A544: sh          $s4, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r20;
    after_1:
    // 0x8022A548: lh          $a0, 0x56($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X56);
    // 0x8022A54C: jal         0x800319B4
    // 0x8022A550: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_800319B4_CDB4(rdram, ctx);
        goto after_2;
    // 0x8022A550: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_2:
    // 0x8022A554: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8022A558: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x8022A55C: jal         0x80031270
    // 0x8022A560: addiu       $a2, $s0, 0x38
    ctx->r6 = ADD32(ctx->r16, 0X38);
    func_80031270_C670(rdram, ctx);
        goto after_3;
    // 0x8022A560: addiu       $a2, $s0, 0x38
    ctx->r6 = ADD32(ctx->r16, 0X38);
    after_3:
    // 0x8022A564: lh          $v1, 0x1C($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X1C);
    // 0x8022A568: lhu         $v0, 0x38($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X38);
    // 0x8022A56C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022A570: sh          $v0, 0x38($s0)
    MEM_H(0X38, ctx->r16) = ctx->r2;
    // 0x8022A574: lh          $v1, 0x20($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X20);
    // 0x8022A578: lhu         $v0, 0x3A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X3A);
    // 0x8022A57C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022A580: sh          $v0, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r2;
    // 0x8022A584: lh          $a0, 0x24($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X24);
    // 0x8022A588: lhu         $v0, 0x3C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X3C);
    // 0x8022A58C: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
    // 0x8022A590: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x8022A594: sw          $v1, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r3;
    // 0x8022A598: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8022A59C: sh          $v0, 0x3C($s0)
    MEM_H(0X3C, ctx->r16) = ctx->r2;
L_8022A5A0:
    // 0x8022A5A0: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x8022A5A4: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x8022A5A8: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x8022A5AC: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x8022A5B0: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x8022A5B4: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x8022A5B8: jr          $ra
    // 0x8022A5BC: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x8022A5BC: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_8022AE00_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AE00: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8022AE04: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8022AE08: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022AE0C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8022AE10: addiu       $s0, $sp, 0x18
    ctx->r16 = ADD32(ctx->r29, 0X18);
    // 0x8022AE14: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022AE18: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x8022AE1C: lw          $a1, 0x1C($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X1C);
    // 0x8022AE20: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022AE24: jal         0x8003BA58
    // 0x8022AE28: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    func_8003BA58_16E58(rdram, ctx);
        goto after_0;
    // 0x8022AE28: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_0:
    // 0x8022AE2C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8022AE30: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x8022AE34: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022AE38: jal         0x8003BB80
    // 0x8022AE3C: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_8003BB80_16F80(rdram, ctx);
        goto after_1;
    // 0x8022AE3C: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022AE40: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022AE44: lbu         $v0, 0xC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XC);
    // 0x8022AE48: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    // 0x8022AE4C: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x8022AE50: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022AE54: sb          $v0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r2;
    // 0x8022AE58: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8022AE5C: andi        $v0, $v0, 0x18
    ctx->r2 = ctx->r2 & 0X18;
    // 0x8022AE60: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022AE64: addiu       $v1, $v0, 0x6
    ctx->r3 = ADD32(ctx->r2, 0X6);
    // 0x8022AE68: sb          $v1, 0x10($sp)
    MEM_B(0X10, ctx->r29) = ctx->r3;
    // 0x8022AE6C: addiu       $v1, $v0, 0x1
    ctx->r3 = ADD32(ctx->r2, 0X1);
    // 0x8022AE70: sb          $v1, 0x12($sp)
    MEM_B(0X12, ctx->r29) = ctx->r3;
    // 0x8022AE74: addiu       $v1, $v0, 0x3D
    ctx->r3 = ADD32(ctx->r2, 0X3D);
    // 0x8022AE78: addiu       $v0, $v0, 0x3F
    ctx->r2 = ADD32(ctx->r2, 0X3F);
    // 0x8022AE7C: sb          $v1, 0x14($sp)
    MEM_B(0X14, ctx->r29) = ctx->r3;
    // 0x8022AE80: jal         0x8003BC68
    // 0x8022AE84: sb          $v0, 0x16($sp)
    MEM_B(0X16, ctx->r29) = ctx->r2;
    func_8003BC68_17068(rdram, ctx);
        goto after_2;
    // 0x8022AE84: sb          $v0, 0x16($sp)
    MEM_B(0X16, ctx->r29) = ctx->r2;
    after_2:
    // 0x8022AE88: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x8022AE8C: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8022AE90: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8022AE94: jr          $ra
    // 0x8022AE98: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8022AE98: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80228AC8_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228AC8: jr          $ra
    // 0x80228ACC: nop

    TRACE_RETURN()
    return;
    // 0x80228ACC: nop

;}
RECOMP_FUNC void func_80227F14_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227F14: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227F18: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227F1C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227F20: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227F24: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80227F28: bne         $v0, $zero, L_80227F44
    if (ctx->r2 != 0) {
        // 0x80227F2C: addiu       $a1, $zero, 0x13
        ctx->r5 = ADD32(0, 0X13);
            goto L_80227F44;
    }
    // 0x80227F2C: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x80227F30: jal         0x80050294
    // 0x80227F34: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80227F34: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80227F38: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80227F3C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227F40: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80227F44:
    // 0x80227F44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227F48: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227F4C: jr          $ra
    // 0x80227F50: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227F50: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
