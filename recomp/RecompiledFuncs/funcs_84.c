#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_802477C4_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802477C4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802477C8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802477CC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802477D0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802477D4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802477D8: jal         0x8004F144
    // 0x802477DC: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x802477DC: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    after_0:
    // 0x802477E0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x802477E4: beq         $a0, $zero, L_80247890
    if (ctx->r4 == 0) {
        // 0x802477E8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80247890;
    }
    // 0x802477E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802477EC: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x802477F0: addiu       $v0, $zero, 0x85
    ctx->r2 = ADD32(0, 0X85);
    // 0x802477F4: sb          $v0, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r2;
    // 0x802477F8: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x802477FC: sh          $v0, 0x1C($a0)
    MEM_H(0X1C, ctx->r4) = ctx->r2;
    // 0x80247800: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x80247804: sh          $v0, 0x1E($a0)
    MEM_H(0X1E, ctx->r4) = ctx->r2;
    // 0x80247808: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x8024780C: sh          $v0, 0x20($a0)
    MEM_H(0X20, ctx->r4) = ctx->r2;
    // 0x80247810: lhu         $v0, 0x44($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X44);
    // 0x80247814: sh          $v0, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r2;
    // 0x80247818: lhu         $v0, 0x46($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X46);
    // 0x8024781C: sh          $v0, 0x32($a0)
    MEM_H(0X32, ctx->r4) = ctx->r2;
    // 0x80247820: lhu         $v0, 0x48($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X48);
    // 0x80247824: sh          $v0, 0x34($a0)
    MEM_H(0X34, ctx->r4) = ctx->r2;
    // 0x80247828: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8024782C: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80247830: bne         $v1, $v0, L_80247848
    if (ctx->r3 != ctx->r2) {
        // 0x80247834: addiu       $v0, $zero, 0x41
        ctx->r2 = ADD32(0, 0X41);
            goto L_80247848;
    }
    // 0x80247834: addiu       $v0, $zero, 0x41
    ctx->r2 = ADD32(0, 0X41);
    // 0x80247838: lh          $v0, 0x64($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X64);
    // 0x8024783C: addiu       $v1, $s1, 0x10
    ctx->r3 = ADD32(ctx->r17, 0X10);
    // 0x80247840: j           L_80247884
    // 0x80247844: sb          $v1, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r3;
        goto L_80247884;
    // 0x80247844: sb          $v1, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r3;
L_80247848:
    // 0x80247848: bnel        $v1, $v0, L_80247864
    if (ctx->r3 != ctx->r2) {
        // 0x8024784C: addiu       $v0, $zero, 0x42
        ctx->r2 = ADD32(0, 0X42);
            goto L_80247864;
    }
    goto skip_0;
    // 0x8024784C: addiu       $v0, $zero, 0x42
    ctx->r2 = ADD32(0, 0X42);
    skip_0:
    // 0x80247850: lh          $v0, 0x64($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X64);
    // 0x80247854: addiu       $v1, $s1, 0x10
    ctx->r3 = ADD32(ctx->r17, 0X10);
    // 0x80247858: sb          $v1, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r3;
    // 0x8024785C: j           L_80247888
    // 0x80247860: addiu       $v0, $v0, -0x400
    ctx->r2 = ADD32(ctx->r2, -0X400);
        goto L_80247888;
    // 0x80247860: addiu       $v0, $v0, -0x400
    ctx->r2 = ADD32(ctx->r2, -0X400);
L_80247864:
    // 0x80247864: bne         $v1, $v0, L_8024787C
    if (ctx->r3 != ctx->r2) {
        // 0x80247868: ori         $v0, $zero, 0xFFFF
        ctx->r2 = 0 | 0XFFFF;
            goto L_8024787C;
    }
    // 0x80247868: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
    // 0x8024786C: sw          $v0, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->r2;
    // 0x80247870: addiu       $v0, $s1, 0x10
    ctx->r2 = ADD32(ctx->r17, 0X10);
    // 0x80247874: j           L_80247890
    // 0x80247878: sb          $v0, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r2;
        goto L_80247890;
    // 0x80247878: sb          $v0, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r2;
L_8024787C:
    // 0x8024787C: lh          $v0, 0x64($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X64);
    // 0x80247880: sb          $s1, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r17;
L_80247884:
    // 0x80247884: addiu       $v0, $v0, 0x400
    ctx->r2 = ADD32(ctx->r2, 0X400);
L_80247888:
    // 0x80247888: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8024788C: sw          $v0, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->r2;
L_80247890:
    // 0x80247890: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80247894: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80247898: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8024789C: jr          $ra
    // 0x802478A0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802478A0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802478A4: nop

    // 0x802478A8: nop

    // 0x802478AC: nop

;}
RECOMP_FUNC void func_80246090_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80246090: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80246094: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80246098: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8024609C: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x802460A0: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x802460A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802460A8: jal         0x8009A3B4
    // 0x802460AC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x802460AC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_0:
    // 0x802460B0: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x802460B4: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x802460B8: jal         0x8009A3B4
    // 0x802460BC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x802460BC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x802460C0: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x802460C4: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x802460C8: jal         0x8009A3B4
    // 0x802460CC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x802460CC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x802460D0: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802460D4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802460D8: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802460DC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802460E0: lw          $v0, 0x2230($at)
    ctx->r2 = MEM_W(ctx->r1, 0X2230);
    // 0x802460E4: jalr        $v0
    // 0x802460E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x802460E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x802460EC: sw          $zero, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = 0;
    // 0x802460F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802460F4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802460F8: jr          $ra
    // 0x802460FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802460FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8024BA84_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024BA84: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8024BA88: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8024BA8C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8024BA90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8024BA94: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8024BA98: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x8024BA9C: beq         $v0, $zero, L_8024BD8C
    if (ctx->r2 == 0) {
        // 0x8024BAA0: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8024BD8C;
    }
    // 0x8024BAA0: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8024BAA4: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024BAA8: addu        $at, $at, $v0
    gpr jr_addend_8024BAB0 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8024BAAC: lw          $v0, 0x3300($at)
    ctx->r2 = ADD32(ctx->r1, 0X3300);
    // 0x8024BAB0: jr          $v0
    // 0x8024BAB4: nop

    switch (jr_addend_8024BAB0 >> 2) {
        case 0: goto L_8024BAB8; break;
        case 1: goto L_8024BAE0; break;
        case 2: goto L_8024BB50; break;
        case 3: goto L_8024BC64; break;
        case 4: goto L_8024BC88; break;
        case 5: goto L_8024BCF0; break;
        default: switch_error(__func__, 0x8024BAB0, 0x80253300);
    }
    // 0x8024BAB4: nop

L_8024BAB8:
    // 0x8024BAB8: lb          $v0, 0xE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE);
    // 0x8024BABC: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x8024BAC0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8024BAC4: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x8024BAC8: addu        $a1, $a1, $v1
    ctx->r5 = ADD32(ctx->r5, ctx->r3);
    // 0x8024BACC: lbu         $a1, 0x2580($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X2580);
    // 0x8024BAD0: jal         0x800616FC
    // 0x8024BAD4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_0;
    // 0x8024BAD4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_0:
    // 0x8024BAD8: j           L_8024BCE0
    // 0x8024BADC: nop

        goto L_8024BCE0;
    // 0x8024BADC: nop

L_8024BAE0:
    // 0x8024BAE0: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8024BAE4: lw          $a0, 0x3FF0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3FF0);
    // 0x8024BAE8: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x8024BAEC: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x8024BAF0: bne         $v0, $zero, L_8024BD8C
    if (ctx->r2 != 0) {
        // 0x8024BAF4: andi        $a0, $a0, 0xFF
        ctx->r4 = ctx->r4 & 0XFF;
            goto L_8024BD8C;
    }
    // 0x8024BAF4: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    // 0x8024BAF8: lb          $v1, 0xE($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XE);
    // 0x8024BAFC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8024BB00: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8024BB04: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x8024BB08: addiu       $v1, $v1, 0x2581
    ctx->r3 = ADD32(ctx->r3, 0X2581);
    // 0x8024BB0C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8024BB10: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8024BB14: lbu         $a1, 0x0($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X0);
    // 0x8024BB18: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8024BB1C: andi        $v1, $a1, 0xFF
    ctx->r3 = ctx->r5 & 0XFF;
    // 0x8024BB20: bne         $v1, $v0, L_8024BB40
    if (ctx->r3 != ctx->r2) {
        // 0x8024BB24: addiu       $a0, $zero, 0x9
        ctx->r4 = ADD32(0, 0X9);
            goto L_8024BB40;
    }
    // 0x8024BB24: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    // 0x8024BB28: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8024BB2C: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8024BB30: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8024BB34: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8024BB38: j           L_8024BD8C
    // 0x8024BB3C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_8024BD8C;
    // 0x8024BB3C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8024BB40:
    // 0x8024BB40: jal         0x80036E48
    // 0x8024BB44: sb          $a1, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r5;
    func_80036E48_12248(rdram, ctx);
        goto after_1;
    // 0x8024BB44: sb          $a1, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r5;
    after_1:
    // 0x8024BB48: j           L_8024BCE0
    // 0x8024BB4C: nop

        goto L_8024BCE0;
    // 0x8024BB4C: nop

L_8024BB50:
    // 0x8024BB50: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8024BB54: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x8024BB58: bne         $v0, $zero, L_8024BD8C
    if (ctx->r2 != 0) {
        // 0x8024BB5C: addiu       $a0, $zero, 0x18
        ctx->r4 = ADD32(0, 0X18);
            goto L_8024BD8C;
    }
    // 0x8024BB5C: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    // 0x8024BB60: jal         0x8004CB2C
    // 0x8024BB64: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_2;
    // 0x8024BB64: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_2:
    // 0x8024BB68: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8024BB6C: lbu         $v1, 0x4A6D($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X4A6D);
    // 0x8024BB70: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8024BB74: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8024BB78: sb          $v0, 0x49B8($at)
    MEM_B(0X49B8, ctx->r1) = ctx->r2;
    // 0x8024BB7C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8024BB80: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8024BB84: sb          $v0, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = ctx->r2;
    // 0x8024BB88: ori         $v1, $v1, 0x10
    ctx->r3 = ctx->r3 | 0X10;
    // 0x8024BB8C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8024BB90: sb          $v1, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r3;
    // 0x8024BB94: lb          $v1, 0xF($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XF);
    // 0x8024BB98: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8024BB9C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8024BBA0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8024BBA4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8024BBA8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8024BBAC: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8024BBB0: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8024BBB4: lhu         $a0, 0x26D4($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X26D4);
    // 0x8024BBB8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8024BBBC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8024BBC0: sh          $v0, 0x4DEA($at)
    MEM_H(0X4DEA, ctx->r1) = ctx->r2;
    // 0x8024BBC4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8024BBC8: sh          $a0, 0x4DE8($at)
    MEM_H(0X4DE8, ctx->r1) = ctx->r4;
    // 0x8024BBCC: lb          $v1, 0xF($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XF);
    // 0x8024BBD0: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8024BBD4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8024BBD8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8024BBDC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8024BBE0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8024BBE4: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x8024BBE8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8024BBEC: lhu         $v1, 0x26D6($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X26D6);
    // 0x8024BBF0: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8024BBF4: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x8024BBF8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8024BBFC: sw          $a0, 0x4DD8($at)
    MEM_W(0X4DD8, ctx->r1) = ctx->r4;
    // 0x8024BC00: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8024BC04: sw          $v0, 0x4DDC($at)
    MEM_W(0X4DDC, ctx->r1) = ctx->r2;
    // 0x8024BC08: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8024BC0C: sh          $zero, 0x4DF0($at)
    MEM_H(0X4DF0, ctx->r1) = 0;
    // 0x8024BC10: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8024BC14: sh          $v1, 0x4DEC($at)
    MEM_H(0X4DEC, ctx->r1) = ctx->r3;
    // 0x8024BC18: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8024BC1C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8024BC20: sw          $v1, 0x4DE0($at)
    MEM_W(0X4DE0, ctx->r1) = ctx->r3;
    // 0x8024BC24: lb          $v1, 0xF($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XF);
    // 0x8024BC28: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8024BC2C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8024BC30: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8024BC34: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8024BC38: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8024BC3C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024BC40: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8024BC44: lhu         $v0, 0x26D8($at)
    ctx->r2 = MEM_HU(ctx->r1, 0X26D8);
    // 0x8024BC48: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8024BC4C: sh          $zero, 0x4DF4($at)
    MEM_H(0X4DF4, ctx->r1) = 0;
    // 0x8024BC50: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8024BC54: sb          $zero, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = 0;
    // 0x8024BC58: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8024BC5C: j           L_8024BCE0
    // 0x8024BC60: sh          $v0, 0x4DF2($at)
    MEM_H(0X4DF2, ctx->r1) = ctx->r2;
        goto L_8024BCE0;
    // 0x8024BC60: sh          $v0, 0x4DF2($at)
    MEM_H(0X4DF2, ctx->r1) = ctx->r2;
L_8024BC64:
    // 0x8024BC64: jal         0x80036E48
    // 0x8024BC68: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80036E48_12248(rdram, ctx);
        goto after_3;
    // 0x8024BC68: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_3:
    // 0x8024BC6C: jal         0x8024B370
    // 0x8024BC70: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8024B370_ovl10(rdram, ctx);
        goto after_4;
    // 0x8024BC70: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8024BC74: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8024BC78: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x8024BC7C: sw          $zero, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = 0;
    // 0x8024BC80: j           L_8024BCE4
    // 0x8024BC84: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
        goto L_8024BCE4;
    // 0x8024BC84: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
L_8024BC88:
    // 0x8024BC88: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8024BC8C: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x8024BC90: bne         $v0, $zero, L_8024BD8C
    if (ctx->r2 != 0) {
        // 0x8024BC94: nop
    
            goto L_8024BD8C;
    }
    // 0x8024BC94: nop

    // 0x8024BC98: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8024BC9C: lbu         $v0, -0x7388($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7388);
    // 0x8024BCA0: bne         $v0, $zero, L_8024BD8C
    if (ctx->r2 != 0) {
        // 0x8024BCA4: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8024BD8C;
    }
    // 0x8024BCA4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8024BCA8: lb          $a1, 0xF($s0)
    ctx->r5 = MEM_B(ctx->r16, 0XF);
    // 0x8024BCAC: sll         $v0, $a1, 1
    ctx->r2 = S32(ctx->r5 << 1);
    // 0x8024BCB0: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x8024BCB4: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8024BCB8: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8024BCBC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8024BCC0: lw          $v0, -0x3B88($at)
    ctx->r2 = MEM_W(ctx->r1, -0X3B88);
    // 0x8024BCC4: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x8024BCC8: addiu       $v0, $v0, 0x4E
    ctx->r2 = ADD32(ctx->r2, 0X4E);
    // 0x8024BCCC: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x8024BCD0: jal         0x800616FC
    // 0x8024BCD4: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    func_800616FC_3CAFC(rdram, ctx);
        goto after_5;
    // 0x8024BCD4: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    after_5:
    // 0x8024BCD8: jal         0x80036B58
    // 0x8024BCDC: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    func_80036B58_11F58(rdram, ctx);
        goto after_6;
    // 0x8024BCDC: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_6:
L_8024BCE0:
    // 0x8024BCE0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
L_8024BCE4:
    // 0x8024BCE4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8024BCE8: j           L_8024BD8C
    // 0x8024BCEC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_8024BD8C;
    // 0x8024BCEC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8024BCF0:
    // 0x8024BCF0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8024BCF4: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8024BCF8: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8024BCFC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8024BD00: bne         $v0, $zero, L_8024BD8C
    if (ctx->r2 != 0) {
        // 0x8024BD04: nop
    
            goto L_8024BD8C;
    }
    // 0x8024BD04: nop

    // 0x8024BD08: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8024BD0C: lbu         $v0, -0x7388($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7388);
    // 0x8024BD10: bne         $v0, $zero, L_8024BD8C
    if (ctx->r2 != 0) {
        // 0x8024BD14: nop
    
            goto L_8024BD8C;
    }
    // 0x8024BD14: nop

    // 0x8024BD18: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8024BD1C: jal         0x80070050
    // 0x8024BD20: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    func_80070050_4B450(rdram, ctx);
        goto after_7;
    // 0x8024BD20: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_7:
    // 0x8024BD24: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x8024BD28: jal         0x800616FC
    // 0x8024BD2C: addiu       $a1, $zero, 0x39
    ctx->r5 = ADD32(0, 0X39);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_8;
    // 0x8024BD2C: addiu       $a1, $zero, 0x39
    ctx->r5 = ADD32(0, 0X39);
    after_8:
    // 0x8024BD30: lb          $a1, 0xF($s0)
    ctx->r5 = MEM_B(ctx->r16, 0XF);
    // 0x8024BD34: sll         $v0, $a1, 1
    ctx->r2 = S32(ctx->r5 << 1);
    // 0x8024BD38: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x8024BD3C: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8024BD40: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8024BD44: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8024BD48: lw          $v0, -0x3B88($at)
    ctx->r2 = MEM_W(ctx->r1, -0X3B88);
    // 0x8024BD4C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x8024BD50: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x8024BD54: addiu       $v0, $v0, 0x64
    ctx->r2 = ADD32(ctx->r2, 0X64);
    // 0x8024BD58: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x8024BD5C: jal         0x800616FC
    // 0x8024BD60: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    func_800616FC_3CAFC(rdram, ctx);
        goto after_9;
    // 0x8024BD60: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    after_9:
    // 0x8024BD64: lui         $a0, 0x200
    ctx->r4 = S32(0X200 << 16);
    // 0x8024BD68: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x8024BD6C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8024BD70: sh          $v0, -0x3F82($at)
    MEM_H(-0X3F82, ctx->r1) = ctx->r2;
    // 0x8024BD74: jal         0x80036B1C
    // 0x8024BD78: ori         $a0, $a0, 0x4200
    ctx->r4 = ctx->r4 | 0X4200;
    func_80036B1C_11F1C(rdram, ctx);
        goto after_10;
    // 0x8024BD78: ori         $a0, $a0, 0x4200
    ctx->r4 = ctx->r4 | 0X4200;
    after_10:
    // 0x8024BD7C: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8024BD80: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8024BD84: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8024BD88: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8024BD8C:
    // 0x8024BD8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8024BD90: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8024BD94: jr          $ra
    // 0x8024BD98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8024BD98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80241EF0_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80241EF0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80241EF4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80241EF8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80241EFC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80241F00: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80241F04: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80241F08: bne         $v0, $zero, L_80241F5C
    if (ctx->r2 != 0) {
        // 0x80241F0C: addu        $s1, $a1, $zero
        ctx->r17 = ADD32(ctx->r5, 0);
            goto L_80241F5C;
    }
    // 0x80241F0C: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x80241F10: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80241F14: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80241F18: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x80241F1C: addiu       $v0, $v0, 0x200
    ctx->r2 = ADD32(ctx->r2, 0X200);
    // 0x80241F20: jal         0x802420E4
    // 0x80241F24: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    func_802420E4_ovl10(rdram, ctx);
        goto after_0;
    // 0x80241F24: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    after_0:
    // 0x80241F28: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80241F2C: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x80241F30: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x80241F34: lbu         $a1, 0x1A70($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X1A70);
    // 0x80241F38: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80241F3C: jal         0x80050294
    // 0x80241F40: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x80241F40: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x80241F44: sb          $zero, 0x15($s1)
    MEM_B(0X15, ctx->r17) = 0;
    // 0x80241F48: sb          $zero, 0x16($s1)
    MEM_B(0X16, ctx->r17) = 0;
    // 0x80241F4C: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80241F50: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80241F54: j           L_80242050
    // 0x80241F58: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80242050;
    // 0x80241F58: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80241F5C:
    // 0x80241F5C: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x80241F60: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80241F64: bne         $v1, $v0, L_80241F7C
    if (ctx->r3 != ctx->r2) {
        // 0x80241F68: nop
    
            goto L_80241F7C;
    }
    // 0x80241F68: nop

    // 0x80241F6C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80241F70: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80241F74: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80241F78: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80241F7C:
    // 0x80241F7C: lbu         $v1, 0x16($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X16);
    // 0x80241F80: addiu       $v0, $zero, 0x41
    ctx->r2 = ADD32(0, 0X41);
    // 0x80241F84: beq         $v1, $v0, L_80241FE0
    if (ctx->r3 == ctx->r2) {
        // 0x80241F88: slti        $v0, $v1, 0x42
        ctx->r2 = SIGNED(ctx->r3) < 0X42 ? 1 : 0;
            goto L_80241FE0;
    }
    // 0x80241F88: slti        $v0, $v1, 0x42
    ctx->r2 = SIGNED(ctx->r3) < 0X42 ? 1 : 0;
    // 0x80241F8C: beql        $v0, $zero, L_80241FAC
    if (ctx->r2 == 0) {
        // 0x80241F90: addiu       $v0, $zero, 0xAA
        ctx->r2 = ADD32(0, 0XAA);
            goto L_80241FAC;
    }
    goto skip_0;
    // 0x80241F90: addiu       $v0, $zero, 0xAA
    ctx->r2 = ADD32(0, 0XAA);
    skip_0:
    // 0x80241F94: beq         $v1, $zero, L_80241FE0
    if (ctx->r3 == 0) {
        // 0x80241F98: addiu       $v0, $zero, 0x3C
        ctx->r2 = ADD32(0, 0X3C);
            goto L_80241FE0;
    }
    // 0x80241F98: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x80241F9C: beq         $v1, $v0, L_80241FEC
    if (ctx->r3 == ctx->r2) {
        // 0x80241FA0: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80241FEC;
    }
    // 0x80241FA0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80241FA4: j           L_80241FF8
    // 0x80241FA8: nop

        goto L_80241FF8;
    // 0x80241FA8: nop

L_80241FAC:
    // 0x80241FAC: beq         $v1, $v0, L_80241FE0
    if (ctx->r3 == ctx->r2) {
        // 0x80241FB0: slti        $v0, $v1, 0xAB
        ctx->r2 = SIGNED(ctx->r3) < 0XAB ? 1 : 0;
            goto L_80241FE0;
    }
    // 0x80241FB0: slti        $v0, $v1, 0xAB
    ctx->r2 = SIGNED(ctx->r3) < 0XAB ? 1 : 0;
    // 0x80241FB4: beq         $v0, $zero, L_80241FCC
    if (ctx->r2 == 0) {
        // 0x80241FB8: addiu       $v0, $zero, 0xA5
        ctx->r2 = ADD32(0, 0XA5);
            goto L_80241FCC;
    }
    // 0x80241FB8: addiu       $v0, $zero, 0xA5
    ctx->r2 = ADD32(0, 0XA5);
    // 0x80241FBC: beq         $v1, $v0, L_80241FEC
    if (ctx->r3 == ctx->r2) {
        // 0x80241FC0: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80241FEC;
    }
    // 0x80241FC0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80241FC4: j           L_80241FF8
    // 0x80241FC8: nop

        goto L_80241FF8;
    // 0x80241FC8: nop

L_80241FCC:
    // 0x80241FCC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80241FD0: beq         $v1, $v0, L_80241FEC
    if (ctx->r3 == ctx->r2) {
        // 0x80241FD4: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80241FEC;
    }
    // 0x80241FD4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80241FD8: j           L_80241FF8
    // 0x80241FDC: nop

        goto L_80241FF8;
    // 0x80241FDC: nop

L_80241FE0:
    // 0x80241FE0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80241FE4: j           L_80241FF0
    // 0x80241FE8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
        goto L_80241FF0;
    // 0x80241FE8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
L_80241FEC:
    // 0x80241FEC: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
L_80241FF0:
    // 0x80241FF0: jal         0x802420E4
    // 0x80241FF4: nop

    func_802420E4_ovl10(rdram, ctx);
        goto after_2;
    // 0x80241FF4: nop

    after_2:
L_80241FF8:
    // 0x80241FF8: lbu         $v0, 0x16($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X16);
    // 0x80241FFC: lbu         $v1, 0x15($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X15);
    // 0x80242000: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80242004: sltiu       $v1, $v1, 0xAA
    ctx->r3 = ctx->r3 < 0XAA ? 1 : 0;
    // 0x80242008: beq         $v1, $zero, L_80242048
    if (ctx->r3 == 0) {
        // 0x8024200C: sb          $v0, 0x16($s1)
        MEM_B(0X16, ctx->r17) = ctx->r2;
            goto L_80242048;
    }
    // 0x8024200C: sb          $v0, 0x16($s1)
    MEM_B(0X16, ctx->r17) = ctx->r2;
    // 0x80242010: lbu         $v1, 0xA4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA4);
    // 0x80242014: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x80242018: bne         $v1, $v0, L_80242048
    if (ctx->r3 != ctx->r2) {
        // 0x8024201C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80242048;
    }
    // 0x8024201C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80242020: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80242024: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x80242028: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x8024202C: lbu         $a1, 0x1A70($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X1A70);
    // 0x80242030: jal         0x80050294
    // 0x80242034: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
    func_80050294_2B694(rdram, ctx);
        goto after_3;
    // 0x80242034: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
    after_3:
    // 0x80242038: lbu         $v0, 0x15($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X15);
    // 0x8024203C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80242040: j           L_80242050
    // 0x80242044: sb          $v0, 0x15($s1)
    MEM_B(0X15, ctx->r17) = ctx->r2;
        goto L_80242050;
    // 0x80242044: sb          $v0, 0x15($s1)
    MEM_B(0X15, ctx->r17) = ctx->r2;
L_80242048:
    // 0x80242048: jal         0x8005044C
    // 0x8024204C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_4;
    // 0x8024204C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
L_80242050:
    // 0x80242050: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80242054: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80242058: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8024205C: jr          $ra
    // 0x80242060: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80242060: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8024AAD4_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024AAD4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8024AAD8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8024AADC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8024AAE0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8024AAE4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8024AAE8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8024AAEC: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8024AAF0: lui         $s2, 0x8021
    ctx->r18 = S32(0X8021 << 16);
    // 0x8024AAF4: addiu       $s2, $s2, 0x9D0
    ctx->r18 = ADD32(ctx->r18, 0X9D0);
    // 0x8024AAF8: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x8024AAFC: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x8024AB00: sltiu       $v0, $v1, 0x15
    ctx->r2 = ctx->r3 < 0X15 ? 1 : 0;
    // 0x8024AB04: beq         $v0, $zero, L_8024AED8
    if (ctx->r2 == 0) {
        // 0x8024AB08: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8024AED8;
    }
    // 0x8024AB08: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8024AB0C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024AB10: addu        $at, $at, $v0
    gpr jr_addend_8024AB18 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8024AB14: lw          $v0, 0x3290($at)
    ctx->r2 = ADD32(ctx->r1, 0X3290);
    // 0x8024AB18: jr          $v0
    // 0x8024AB1C: nop

    switch (jr_addend_8024AB18 >> 2) {
        case 0: goto L_8024AB20; break;
        case 1: goto L_8024AB48; break;
        case 2: goto L_8024ABF8; break;
        case 3: goto L_8024AC14; break;
        case 4: goto L_8024AC34; break;
        case 5: goto L_8024AD44; break;
        case 6: goto L_8024AD78; break;
        case 7: goto L_8024AEA4; break;
        case 8: goto L_8024AED8; break;
        case 9: goto L_8024AED8; break;
        case 10: goto L_8024AD9C; break;
        case 11: goto L_8024ADC4; break;
        case 12: goto L_8024ADDC; break;
        case 13: goto L_8024AE14; break;
        case 14: goto L_8024AE50; break;
        case 15: goto L_8024AEA4; break;
        case 16: goto L_8024AED8; break;
        case 17: goto L_8024AED8; break;
        case 18: goto L_8024AED8; break;
        case 19: goto L_8024AED8; break;
        case 20: goto L_8024AED8; break;
        default: switch_error(__func__, 0x8024AB18, 0x80253290);
    }
    // 0x8024AB1C: nop

L_8024AB20:
    // 0x8024AB20: jal         0x8006FF84
    // 0x8024AB24: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_0;
    // 0x8024AB24: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_0:
    // 0x8024AB28: beq         $v0, $zero, L_8024AED8
    if (ctx->r2 == 0) {
        // 0x8024AB2C: nop
    
            goto L_8024AED8;
    }
    // 0x8024AB2C: nop

    // 0x8024AB30: jal         0x8003516C
    // 0x8024AB34: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_1;
    // 0x8024AB34: nop

    after_1:
    // 0x8024AB38: beq         $v0, $zero, L_8024AE94
    if (ctx->r2 == 0) {
        // 0x8024AB3C: nop
    
            goto L_8024AE94;
    }
    // 0x8024AB3C: nop

    // 0x8024AB40: j           L_8024AED8
    // 0x8024AB44: nop

        goto L_8024AED8;
    // 0x8024AB44: nop

L_8024AB48:
    // 0x8024AB48: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8024AB4C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8024AB50: jal         0x8005F6B4
    // 0x8024AB54: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8005F6B4_3AAB4(rdram, ctx);
        goto after_2;
    // 0x8024AB54: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x8024AB58: lh          $v0, 0x38($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X38);
    // 0x8024AB5C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8024AB60: sw          $v0, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->r2;
    // 0x8024AB64: lh          $v0, 0x3A($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X3A);
    // 0x8024AB68: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8024AB6C: sw          $v0, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r2;
    // 0x8024AB70: lh          $v0, 0x3C($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X3C);
    // 0x8024AB74: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8024AB78: sw          $v0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r2;
    // 0x8024AB7C: lb          $v1, 0xE($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XE);
    // 0x8024AB80: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8024AB84: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x8024AB88: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x8024AB8C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8024AB90: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8024AB94: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8024AB98: lh          $v0, 0x24FC($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X24FC);
    // 0x8024AB9C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8024ABA0: sw          $v0, 0x40($s2)
    MEM_W(0X40, ctx->r18) = ctx->r2;
    // 0x8024ABA4: lb          $v1, 0xE($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XE);
    // 0x8024ABA8: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8024ABAC: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x8024ABB0: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x8024ABB4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8024ABB8: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8024ABBC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8024ABC0: lh          $v0, 0x24FE($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X24FE);
    // 0x8024ABC4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8024ABC8: sw          $v0, 0x44($s2)
    MEM_W(0X44, ctx->r18) = ctx->r2;
    // 0x8024ABCC: lb          $v1, 0xE($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XE);
    // 0x8024ABD0: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8024ABD4: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x8024ABD8: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x8024ABDC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8024ABE0: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8024ABE4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8024ABE8: lh          $v0, 0x2500($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X2500);
    // 0x8024ABEC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8024ABF0: j           L_8024AE94
    // 0x8024ABF4: sw          $v0, 0x48($s2)
    MEM_W(0X48, ctx->r18) = ctx->r2;
        goto L_8024AE94;
    // 0x8024ABF4: sw          $v0, 0x48($s2)
    MEM_W(0X48, ctx->r18) = ctx->r2;
L_8024ABF8:
    // 0x8024ABF8: jal         0x8003516C
    // 0x8024ABFC: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_3;
    // 0x8024ABFC: nop

    after_3:
    // 0x8024AC00: bne         $v0, $zero, L_8024AED8
    if (ctx->r2 != 0) {
        // 0x8024AC04: addiu       $v1, $zero, 0x1E
        ctx->r3 = ADD32(0, 0X1E);
            goto L_8024AED8;
    }
    // 0x8024AC04: addiu       $v1, $zero, 0x1E
    ctx->r3 = ADD32(0, 0X1E);
    // 0x8024AC08: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8024AC0C: j           L_8024AE98
    // 0x8024AC10: sb          $v1, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r3;
        goto L_8024AE98;
    // 0x8024AC10: sb          $v1, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r3;
L_8024AC14:
    // 0x8024AC14: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x8024AC18: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8024AC1C: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x8024AC20: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8024AC24: beq         $v0, $zero, L_8024AE94
    if (ctx->r2 == 0) {
        // 0x8024AC28: nop
    
            goto L_8024AE94;
    }
    // 0x8024AC28: nop

    // 0x8024AC2C: j           L_8024AED8
    // 0x8024AC30: nop

        goto L_8024AED8;
    // 0x8024AC30: nop

L_8024AC34:
    // 0x8024AC34: jal         0x8004F144
    // 0x8024AC38: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_4;
    // 0x8024AC38: nop

    after_4:
    // 0x8024AC3C: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8024AC40: beq         $s1, $zero, L_8024AED8
    if (ctx->r17 == 0) {
        // 0x8024AC44: addiu       $a0, $s1, 0x38
        ctx->r4 = ADD32(ctx->r17, 0X38);
            goto L_8024AED8;
    }
    // 0x8024AC44: addiu       $a0, $s1, 0x38
    ctx->r4 = ADD32(ctx->r17, 0X38);
    // 0x8024AC48: addiu       $s2, $s0, 0x38
    ctx->r18 = ADD32(ctx->r16, 0X38);
    // 0x8024AC4C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8024AC50: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8024AC54: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8024AC58: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x8024AC5C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8024AC60: sb          $v0, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r2;
    // 0x8024AC64: addiu       $v0, $zero, 0x41
    ctx->r2 = ADD32(0, 0X41);
    // 0x8024AC68: jal         0x8009A3B4
    // 0x8024AC6C: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x8024AC6C: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    after_5:
    // 0x8024AC70: addiu       $a0, $zero, 0xA4
    ctx->r4 = ADD32(0, 0XA4);
    // 0x8024AC74: lhu         $v0, 0x3A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X3A);
    // 0x8024AC78: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8024AC7C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8024AC80: addiu       $v0, $v0, -0x32
    ctx->r2 = ADD32(ctx->r2, -0X32);
    // 0x8024AC84: jal         0x8002A2F8
    // 0x8024AC88: sh          $v0, 0x3A($s1)
    MEM_H(0X3A, ctx->r17) = ctx->r2;
    func_8002A2F8_56F8(rdram, ctx);
        goto after_6;
    // 0x8024AC88: sh          $v0, 0x3A($s1)
    MEM_H(0X3A, ctx->r17) = ctx->r2;
    after_6:
    // 0x8024AC8C: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8024AC90: bne         $v1, $zero, L_8024ACB8
    if (ctx->r3 != 0) {
        // 0x8024AC94: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8024ACB8;
    }
    // 0x8024AC94: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8024AC98: jal         0x8003E6BC
    // 0x8024AC9C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_7;
    // 0x8024AC9C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_7:
    // 0x8024ACA0: lui         $a0, 0xF
    ctx->r4 = S32(0XF << 16);
    // 0x8024ACA4: or          $a0, $v0, $a0
    ctx->r4 = ctx->r2 | ctx->r4;
    // 0x8024ACA8: jal         0x800711A8
    // 0x8024ACAC: addiu       $a1, $zero, 0x2710
    ctx->r5 = ADD32(0, 0X2710);
    func_800711A8_4C5A8(rdram, ctx);
        goto after_8;
    // 0x8024ACAC: addiu       $a1, $zero, 0x2710
    ctx->r5 = ADD32(0, 0X2710);
    after_8:
    // 0x8024ACB0: j           L_8024AD1C
    // 0x8024ACB4: nop

        goto L_8024AD1C;
    // 0x8024ACB4: nop

L_8024ACB8:
    // 0x8024ACB8: bne         $v1, $v0, L_8024ACE0
    if (ctx->r3 != ctx->r2) {
        // 0x8024ACBC: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8024ACE0;
    }
    // 0x8024ACBC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8024ACC0: jal         0x8003E6BC
    // 0x8024ACC4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_9;
    // 0x8024ACC4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_9:
    // 0x8024ACC8: lui         $a0, 0xF
    ctx->r4 = S32(0XF << 16);
    // 0x8024ACCC: or          $a0, $v0, $a0
    ctx->r4 = ctx->r2 | ctx->r4;
    // 0x8024ACD0: jal         0x800711A8
    // 0x8024ACD4: addiu       $a1, $zero, 0x2710
    ctx->r5 = ADD32(0, 0X2710);
    func_800711A8_4C5A8(rdram, ctx);
        goto after_10;
    // 0x8024ACD4: addiu       $a1, $zero, 0x2710
    ctx->r5 = ADD32(0, 0X2710);
    after_10:
    // 0x8024ACD8: j           L_8024AD14
    // 0x8024ACDC: addiu       $a0, $zero, 0x671
    ctx->r4 = ADD32(0, 0X671);
        goto L_8024AD14;
    // 0x8024ACDC: addiu       $a0, $zero, 0x671
    ctx->r4 = ADD32(0, 0X671);
L_8024ACE0:
    // 0x8024ACE0: bne         $v1, $v0, L_8024AD1C
    if (ctx->r3 != ctx->r2) {
        // 0x8024ACE4: nop
    
            goto L_8024AD1C;
    }
    // 0x8024ACE4: nop

    // 0x8024ACE8: lb          $a0, 0xE($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XE);
    // 0x8024ACEC: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8024ACF0: addiu       $v0, $v0, 0x24DC
    ctx->r2 = ADD32(ctx->r2, 0X24DC);
    // 0x8024ACF4: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x8024ACF8: jal         0x8003E6BC
    // 0x8024ACFC: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_11;
    // 0x8024ACFC: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    after_11:
    // 0x8024AD00: lui         $a0, 0xF
    ctx->r4 = S32(0XF << 16);
    // 0x8024AD04: or          $a0, $v0, $a0
    ctx->r4 = ctx->r2 | ctx->r4;
    // 0x8024AD08: jal         0x800711A8
    // 0x8024AD0C: addiu       $a1, $zero, 0x2710
    ctx->r5 = ADD32(0, 0X2710);
    func_800711A8_4C5A8(rdram, ctx);
        goto after_12;
    // 0x8024AD0C: addiu       $a1, $zero, 0x2710
    ctx->r5 = ADD32(0, 0X2710);
    after_12:
    // 0x8024AD10: addiu       $a0, $zero, 0x672
    ctx->r4 = ADD32(0, 0X672);
L_8024AD14:
    // 0x8024AD14: jal         0x8006036C
    // 0x8024AD18: nop

    func_8006036C_3B76C(rdram, ctx);
        goto after_13;
    // 0x8024AD18: nop

    after_13:
L_8024AD1C:
    // 0x8024AD1C: jal         0x8024AEF0
    // 0x8024AD20: nop

    func_8024AEF0_ovl10(rdram, ctx);
        goto after_14;
    // 0x8024AD20: nop

    after_14:
    // 0x8024AD24: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8024AD28: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8024AD2C: sw          $s1, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r17;
    // 0x8024AD30: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8024AD34: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x8024AD38: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8024AD3C: j           L_8024AED8
    // 0x8024AD40: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
        goto L_8024AED8;
    // 0x8024AD40: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
L_8024AD44:
    // 0x8024AD44: lw          $s1, 0x44($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X44);
    // 0x8024AD48: lb          $v0, 0x0($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X0);
    // 0x8024AD4C: bne         $v0, $zero, L_8024AED8
    if (ctx->r2 != 0) {
        // 0x8024AD50: addiu       $a3, $zero, 0x3E
        ctx->r7 = ADD32(0, 0X3E);
            goto L_8024AED8;
    }
    // 0x8024AD50: addiu       $a3, $zero, 0x3E
    ctx->r7 = ADD32(0, 0X3E);
    // 0x8024AD54: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8024AD58: beq         $v0, $zero, L_8024AD64
    if (ctx->r2 == 0) {
        // 0x8024AD5C: addiu       $a0, $s0, 0x38
        ctx->r4 = ADD32(ctx->r16, 0X38);
            goto L_8024AD64;
    }
    // 0x8024AD5C: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    // 0x8024AD60: addiu       $a3, $zero, 0x41
    ctx->r7 = ADD32(0, 0X41);
L_8024AD64:
    // 0x8024AD64: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8024AD68: jal         0x800610AC
    // 0x8024AD6C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_15;
    // 0x8024AD6C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_15:
    // 0x8024AD70: j           L_8024AE94
    // 0x8024AD74: nop

        goto L_8024AE94;
    // 0x8024AD74: nop

L_8024AD78:
    // 0x8024AD78: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8024AD7C: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x8024AD80: bne         $v0, $zero, L_8024AED8
    if (ctx->r2 != 0) {
        // 0x8024AD84: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8024AED8;
    }
    // 0x8024AD84: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8024AD88: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8024AD8C: jal         0x80034844
    // 0x8024AD90: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    func_80034844_FC44(rdram, ctx);
        goto after_16;
    // 0x8024AD90: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    after_16:
    // 0x8024AD94: j           L_8024AE94
    // 0x8024AD98: nop

        goto L_8024AE94;
    // 0x8024AD98: nop

L_8024AD9C:
    // 0x8024AD9C: jal         0x8006FF84
    // 0x8024ADA0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_17;
    // 0x8024ADA0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_17:
    // 0x8024ADA4: beq         $v0, $zero, L_8024AED8
    if (ctx->r2 == 0) {
        // 0x8024ADA8: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8024AED8;
    }
    // 0x8024ADA8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8024ADAC: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x8024ADB0: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x8024ADB4: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
    // 0x8024ADB8: sb          $v0, 0x448($s1)
    MEM_B(0X448, ctx->r17) = ctx->r2;
    // 0x8024ADBC: j           L_8024AE94
    // 0x8024ADC0: sw          $zero, 0xC($s1)
    MEM_W(0XC, ctx->r17) = 0;
        goto L_8024AE94;
    // 0x8024ADC0: sw          $zero, 0xC($s1)
    MEM_W(0XC, ctx->r17) = 0;
L_8024ADC4:
    // 0x8024ADC4: addiu       $v0, $zero, 0x34
    ctx->r2 = ADD32(0, 0X34);
    // 0x8024ADC8: sb          $v0, 0x448($s1)
    MEM_B(0X448, ctx->r17) = ctx->r2;
    // 0x8024ADCC: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8024ADD0: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
    // 0x8024ADD4: j           L_8024AE98
    // 0x8024ADD8: sb          $v1, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r3;
        goto L_8024AE98;
    // 0x8024ADD8: sb          $v1, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r3;
L_8024ADDC:
    // 0x8024ADDC: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x8024ADE0: beq         $v0, $zero, L_8024ADF4
    if (ctx->r2 == 0) {
        // 0x8024ADE4: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8024ADF4;
    }
    // 0x8024ADE4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8024ADE8: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8024ADEC: j           L_8024AE00
    // 0x8024ADF0: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
        goto L_8024AE00;
    // 0x8024ADF0: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
L_8024ADF4:
    // 0x8024ADF4: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8024ADF8: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x8024ADFC: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
L_8024AE00:
    // 0x8024AE00: lb          $v0, 0xA7($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XA7);
    // 0x8024AE04: bltz        $v0, L_8024AE94
    if (SIGNED(ctx->r2) < 0) {
        // 0x8024AE08: nop
    
            goto L_8024AE94;
    }
    // 0x8024AE08: nop

    // 0x8024AE0C: j           L_8024AED8
    // 0x8024AE10: nop

        goto L_8024AED8;
    // 0x8024AE10: nop

L_8024AE14:
    // 0x8024AE14: jal         0x8006033C
    // 0x8024AE18: addiu       $a0, $zero, 0x671
    ctx->r4 = ADD32(0, 0X671);
    func_8006033C_3B73C(rdram, ctx);
        goto after_18;
    // 0x8024AE18: addiu       $a0, $zero, 0x671
    ctx->r4 = ADD32(0, 0X671);
    after_18:
    // 0x8024AE1C: bne         $v0, $zero, L_8024AE38
    if (ctx->r2 != 0) {
        // 0x8024AE20: addiu       $a3, $zero, 0x40
        ctx->r7 = ADD32(0, 0X40);
            goto L_8024AE38;
    }
    // 0x8024AE20: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    // 0x8024AE24: jal         0x8006033C
    // 0x8024AE28: addiu       $a0, $zero, 0x672
    ctx->r4 = ADD32(0, 0X672);
    func_8006033C_3B73C(rdram, ctx);
        goto after_19;
    // 0x8024AE28: addiu       $a0, $zero, 0x672
    ctx->r4 = ADD32(0, 0X672);
    after_19:
    // 0x8024AE2C: bne         $v0, $zero, L_8024AE38
    if (ctx->r2 != 0) {
        // 0x8024AE30: addiu       $a3, $zero, 0x40
        ctx->r7 = ADD32(0, 0X40);
            goto L_8024AE38;
    }
    // 0x8024AE30: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    // 0x8024AE34: addiu       $a3, $zero, 0x3F
    ctx->r7 = ADD32(0, 0X3F);
L_8024AE38:
    // 0x8024AE38: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    // 0x8024AE3C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8024AE40: jal         0x800610AC
    // 0x8024AE44: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_20;
    // 0x8024AE44: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_20:
    // 0x8024AE48: j           L_8024AE94
    // 0x8024AE4C: nop

        goto L_8024AE94;
    // 0x8024AE4C: nop

L_8024AE50:
    // 0x8024AE50: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8024AE54: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8024AE58: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8024AE5C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8024AE60: bne         $v0, $zero, L_8024AED8
    if (ctx->r2 != 0) {
        // 0x8024AE64: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8024AED8;
    }
    // 0x8024AE64: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8024AE68: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8024AE6C: bne         $v1, $v0, L_8024AE7C
    if (ctx->r3 != ctx->r2) {
        // 0x8024AE70: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8024AE7C;
    }
    // 0x8024AE70: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8024AE74: j           L_8024AE84
    // 0x8024AE78: addiu       $a0, $zero, 0x671
    ctx->r4 = ADD32(0, 0X671);
        goto L_8024AE84;
    // 0x8024AE78: addiu       $a0, $zero, 0x671
    ctx->r4 = ADD32(0, 0X671);
L_8024AE7C:
    // 0x8024AE7C: bne         $v1, $v0, L_8024AE8C
    if (ctx->r3 != ctx->r2) {
        // 0x8024AE80: addiu       $a0, $zero, 0x672
        ctx->r4 = ADD32(0, 0X672);
            goto L_8024AE8C;
    }
    // 0x8024AE80: addiu       $a0, $zero, 0x672
    ctx->r4 = ADD32(0, 0X672);
L_8024AE84:
    // 0x8024AE84: jal         0x8006036C
    // 0x8024AE88: nop

    func_8006036C_3B76C(rdram, ctx);
        goto after_21;
    // 0x8024AE88: nop

    after_21:
L_8024AE8C:
    // 0x8024AE8C: jal         0x8024AEF0
    // 0x8024AE90: nop

    func_8024AEF0_ovl10(rdram, ctx);
        goto after_22;
    // 0x8024AE90: nop

    after_22:
L_8024AE94:
    // 0x8024AE94: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
L_8024AE98:
    // 0x8024AE98: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8024AE9C: j           L_8024AED8
    // 0x8024AEA0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8024AED8;
    // 0x8024AEA0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8024AEA4:
    // 0x8024AEA4: jal         0x8003516C
    // 0x8024AEA8: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_23;
    // 0x8024AEA8: nop

    after_23:
    // 0x8024AEAC: bne         $v0, $zero, L_8024AED8
    if (ctx->r2 != 0) {
        // 0x8024AEB0: nop
    
            goto L_8024AED8;
    }
    // 0x8024AEB0: nop

    // 0x8024AEB4: jal         0x80070050
    // 0x8024AEB8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80070050_4B450(rdram, ctx);
        goto after_24;
    // 0x8024AEB8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_24:
    // 0x8024AEBC: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x8024AEC0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8024AEC4: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8024AEC8: jal         0x8004F684
    // 0x8024AECC: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    func_8004F684_2AA84(rdram, ctx);
        goto after_25;
    // 0x8024AECC: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    after_25:
    // 0x8024AED0: jal         0x80060590
    // 0x8024AED4: addiu       $a0, $zero, 0x670
    ctx->r4 = ADD32(0, 0X670);
    func_80060590_3B990(rdram, ctx);
        goto after_26;
    // 0x8024AED4: addiu       $a0, $zero, 0x670
    ctx->r4 = ADD32(0, 0X670);
    after_26:
L_8024AED8:
    // 0x8024AED8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8024AEDC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8024AEE0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8024AEE4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8024AEE8: jr          $ra
    // 0x8024AEEC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8024AEEC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80245248_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80245248: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x8024524C: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x80245250: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80245254: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x80245258: addiu       $s1, $s0, 0xD0
    ctx->r17 = ADD32(ctx->r16, 0XD0);
    // 0x8024525C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80245260: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80245264: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
    // 0x80245268: lui         $s3, 0x8020
    ctx->r19 = S32(0X8020 << 16);
    // 0x8024526C: addiu       $s3, $s3, 0x49B0
    ctx->r19 = ADD32(ctx->r19, 0X49B0);
    // 0x80245270: sw          $ra, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r31;
    // 0x80245274: jal         0x800540D0
    // 0x80245278: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    func_800540D0_2F4D0(rdram, ctx);
        goto after_0;
    // 0x80245278: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    after_0:
    // 0x8024527C: beql        $v0, $zero, L_80245284
    if (ctx->r2 == 0) {
        // 0x80245280: sb          $zero, 0x9($s0)
        MEM_B(0X9, ctx->r16) = 0;
            goto L_80245284;
    }
    goto skip_0;
    // 0x80245280: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    skip_0:
L_80245284:
    // 0x80245284: lhu         $v0, 0xE0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XE0);
    // 0x80245288: lh          $v1, 0xE2($s0)
    ctx->r3 = MEM_H(ctx->r16, 0XE2);
    // 0x8024528C: lh          $a0, 0xE4($s0)
    ctx->r4 = MEM_H(ctx->r16, 0XE4);
    // 0x80245290: addiu       $v0, $v0, 0x22
    ctx->r2 = ADD32(ctx->r2, 0X22);
    // 0x80245294: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80245298: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8024529C: sh          $v0, 0xE0($s0)
    MEM_H(0XE0, ctx->r16) = ctx->r2;
    // 0x802452A0: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x802452A4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802452A8: lw          $v0, 0x49D0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X49D0);
    // 0x802452AC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x802452B0: bgez        $v0, L_802452BC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802452B4: addiu       $a0, $zero, 0x5
        ctx->r4 = ADD32(0, 0X5);
            goto L_802452BC;
    }
    // 0x802452B4: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x802452B8: addiu       $a0, $zero, -0x5
    ctx->r4 = ADD32(0, -0X5);
L_802452BC:
    // 0x802452BC: lhu         $v0, 0x46($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X46);
    // 0x802452C0: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x802452C4: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x802452C8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802452CC: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802452D0: bltzl       $v0, L_802452EC
    if (SIGNED(ctx->r2) < 0) {
        // 0x802452D4: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_802452EC;
    }
    goto skip_1;
    // 0x802452D4: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_1:
    // 0x802452D8: slti        $v0, $v0, 0xA1
    ctx->r2 = SIGNED(ctx->r2) < 0XA1 ? 1 : 0;
    // 0x802452DC: beq         $v0, $zero, L_802452F8
    if (ctx->r2 == 0) {
        // 0x802452E0: nop
    
            goto L_802452F8;
    }
    // 0x802452E0: nop

    // 0x802452E4: j           L_8024530C
    // 0x802452E8: nop

        goto L_8024530C;
    // 0x802452E8: nop

L_802452EC:
    // 0x802452EC: slti        $v0, $v0, 0xA1
    ctx->r2 = SIGNED(ctx->r2) < 0XA1 ? 1 : 0;
    // 0x802452F0: bne         $v0, $zero, L_8024530C
    if (ctx->r2 != 0) {
        // 0x802452F4: nop
    
            goto L_8024530C;
    }
    // 0x802452F4: nop

L_802452F8:
    // 0x802452F8: lh          $v0, 0x46($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X46);
    // 0x802452FC: bgtz        $v0, L_80245308
    if (SIGNED(ctx->r2) > 0) {
        // 0x80245300: addiu       $v0, $zero, 0xA0
        ctx->r2 = ADD32(0, 0XA0);
            goto L_80245308;
    }
    // 0x80245300: addiu       $v0, $zero, 0xA0
    ctx->r2 = ADD32(0, 0XA0);
    // 0x80245304: addiu       $v0, $zero, -0xA0
    ctx->r2 = ADD32(0, -0XA0);
L_80245308:
    // 0x80245308: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
L_8024530C:
    // 0x8024530C: lhu         $v0, 0x46($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X46);
    // 0x80245310: lhu         $v1, 0x14($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X14);
    // 0x80245314: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80245318: sra         $v0, $v0, 20
    ctx->r2 = S32(SIGNED(ctx->r2) >> 20);
    // 0x8024531C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80245320: lh          $v0, 0x16($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X16);
    // 0x80245324: sh          $v1, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r3;
    // 0x80245328: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8024532C: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80245330: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80245334: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80245338: beq         $v0, $zero, L_80245348
    if (ctx->r2 == 0) {
        // 0x8024533C: nop
    
            goto L_80245348;
    }
    // 0x8024533C: nop

    // 0x80245340: sh          $a0, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r4;
    // 0x80245344: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
L_80245348:
    // 0x80245348: lh          $v0, 0x12($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X12);
    // 0x8024534C: lh          $v1, 0x14($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X14);
    // 0x80245350: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80245354: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80245358: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8024535C: lh          $a0, 0x10($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X10);
    // 0x80245360: jal         0x800324B4
    // 0x80245364: addiu       $s2, $s0, 0x14
    ctx->r18 = ADD32(ctx->r16, 0X14);
    func_800324B4_D8B4(rdram, ctx);
        goto after_1;
    // 0x80245364: addiu       $s2, $s0, 0x14
    ctx->r18 = ADD32(ctx->r16, 0X14);
    after_1:
    // 0x80245368: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x8024536C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80245370: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80245374: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80245378: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x8024537C: lhu         $a0, 0x56($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X56);
    // 0x80245380: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x80245384: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80245388: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8024538C: lh          $v0, 0x1C($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X1C);
    // 0x80245390: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    // 0x80245394: andi        $a0, $a0, 0xFFF
    ctx->r4 = ctx->r4 & 0XFFF;
    // 0x80245398: sh          $a0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r4;
    // 0x8024539C: sh          $v0, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r2;
    // 0x802453A0: lh          $v0, 0x20($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X20);
    // 0x802453A4: sh          $v0, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r2;
    // 0x802453A8: lh          $v0, 0x24($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X24);
    // 0x802453AC: addiu       $a1, $s3, 0x14
    ctx->r5 = ADD32(ctx->r19, 0X14);
    // 0x802453B0: sh          $v0, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r2;
    // 0x802453B4: lh          $a2, 0x66($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X66);
    // 0x802453B8: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    // 0x802453BC: jal         0x8004F820
    // 0x802453C0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x802453C0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_2:
    // 0x802453C4: lhu         $a0, 0x66($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X66);
    // 0x802453C8: lhu         $v1, 0x44($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X44);
    // 0x802453CC: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x802453D0: andi        $a0, $a0, 0xFFF
    ctx->r4 = ctx->r4 & 0XFFF;
    // 0x802453D4: addiu       $v1, $v1, 0x5
    ctx->r3 = ADD32(ctx->r3, 0X5);
    // 0x802453D8: sh          $v1, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r3;
    // 0x802453DC: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x802453E0: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x802453E4: slti        $v1, $v1, 0xA1
    ctx->r3 = SIGNED(ctx->r3) < 0XA1 ? 1 : 0;
    // 0x802453E8: bne         $v1, $zero, L_802453F8
    if (ctx->r3 != 0) {
        // 0x802453EC: sh          $a0, 0x66($s0)
        MEM_H(0X66, ctx->r16) = ctx->r4;
            goto L_802453F8;
    }
    // 0x802453EC: sh          $a0, 0x66($s0)
    MEM_H(0X66, ctx->r16) = ctx->r4;
    // 0x802453F0: addiu       $v0, $zero, 0xA0
    ctx->r2 = ADD32(0, 0XA0);
    // 0x802453F4: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
L_802453F8:
    // 0x802453F8: lh          $a2, 0x66($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X66);
    // 0x802453FC: lh          $a3, 0x44($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X44);
    // 0x80245400: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80245404: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80245408: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8024540C: jal         0x8004DBA0
    // 0x80245410: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_3;
    // 0x80245410: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_3:
    // 0x80245414: jal         0x80040F30
    // 0x80245418: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_4;
    // 0x80245418: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8024541C: bne         $v0, $zero, L_802454F8
    if (ctx->r2 != 0) {
        // 0x80245420: addiu       $a0, $s0, 0x66
        ctx->r4 = ADD32(ctx->r16, 0X66);
            goto L_802454F8;
    }
    // 0x80245420: addiu       $a0, $s0, 0x66
    ctx->r4 = ADD32(ctx->r16, 0X66);
    // 0x80245424: jal         0x8003E934
    // 0x80245428: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_5;
    // 0x80245428: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x8024542C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80245430: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x80245434: lh          $v1, 0x12($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X12);
    // 0x80245438: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x8024543C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80245440: beq         $v0, $v1, L_80245500
    if (ctx->r2 == ctx->r3) {
        // 0x80245444: addu        $a1, $v1, $zero
        ctx->r5 = ADD32(ctx->r3, 0);
            goto L_80245500;
    }
    // 0x80245444: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x80245448: subu        $v0, $a0, $a1
    ctx->r2 = SUB32(ctx->r4, ctx->r5);
    // 0x8024544C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80245450: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80245454: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80245458: bltzl       $v0, L_80245474
    if (SIGNED(ctx->r2) < 0) {
        // 0x8024545C: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_80245474;
    }
    goto skip_2;
    // 0x8024545C: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_2:
    // 0x80245460: slti        $v0, $v0, 0xB
    ctx->r2 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
    // 0x80245464: beq         $v0, $zero, L_80245484
    if (ctx->r2 == 0) {
        // 0x80245468: sll         $v0, $v1, 16
        ctx->r2 = S32(ctx->r3 << 16);
            goto L_80245484;
    }
    // 0x80245468: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x8024546C: j           L_802454A8
    // 0x80245470: sh          $a2, 0x12($s1)
    MEM_H(0X12, ctx->r17) = ctx->r6;
        goto L_802454A8;
    // 0x80245470: sh          $a2, 0x12($s1)
    MEM_H(0X12, ctx->r17) = ctx->r6;
L_80245474:
    // 0x80245474: slti        $v0, $v0, 0xB
    ctx->r2 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
    // 0x80245478: bnel        $v0, $zero, L_802454A8
    if (ctx->r2 != 0) {
        // 0x8024547C: sh          $a2, 0x12($s1)
        MEM_H(0X12, ctx->r17) = ctx->r6;
            goto L_802454A8;
    }
    goto skip_3;
    // 0x8024547C: sh          $a2, 0x12($s1)
    MEM_H(0X12, ctx->r17) = ctx->r6;
    skip_3:
    // 0x80245480: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
L_80245484:
    // 0x80245484: bltz        $v0, L_8024549C
    if (SIGNED(ctx->r2) < 0) {
        // 0x80245488: nop
    
            goto L_8024549C;
    }
    // 0x80245488: nop

    // 0x8024548C: lhu         $v0, 0x12($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X12);
    // 0x80245490: addiu       $v0, $v0, 0xA
    ctx->r2 = ADD32(ctx->r2, 0XA);
    // 0x80245494: j           L_802454A8
    // 0x80245498: sh          $v0, 0x12($s1)
    MEM_H(0X12, ctx->r17) = ctx->r2;
        goto L_802454A8;
    // 0x80245498: sh          $v0, 0x12($s1)
    MEM_H(0X12, ctx->r17) = ctx->r2;
L_8024549C:
    // 0x8024549C: lhu         $v0, 0x12($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X12);
    // 0x802454A0: addiu       $v0, $v0, -0xA
    ctx->r2 = ADD32(ctx->r2, -0XA);
    // 0x802454A4: sh          $v0, 0x12($s1)
    MEM_H(0X12, ctx->r17) = ctx->r2;
L_802454A8:
    // 0x802454A8: lh          $v0, 0x12($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X12);
    // 0x802454AC: lh          $v1, 0x14($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X14);
    // 0x802454B0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802454B4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802454B8: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x802454BC: jal         0x800324B4
    // 0x802454C0: lh          $a0, 0x10($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X10);
    func_800324B4_D8B4(rdram, ctx);
        goto after_6;
    // 0x802454C0: lh          $a0, 0x10($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X10);
    after_6:
    // 0x802454C4: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x802454C8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x802454CC: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x802454D0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802454D4: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x802454D8: lw          $a2, 0x20($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X20);
    // 0x802454DC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802454E0: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x802454E4: addu        $a2, $a2, $v1
    ctx->r6 = ADD32(ctx->r6, ctx->r3);
    // 0x802454E8: jal         0x8004DD04
    // 0x802454EC: sw          $a2, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r6;
    func_8004DD04_29104(rdram, ctx);
        goto after_7;
    // 0x802454EC: sw          $a2, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r6;
    after_7:
    // 0x802454F0: j           L_80245500
    // 0x802454F4: nop

        goto L_80245500;
    // 0x802454F4: nop

L_802454F8:
    // 0x802454F8: jal         0x800409D0
    // 0x802454FC: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_800409D0_1BDD0(rdram, ctx);
        goto after_8;
    // 0x802454FC: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_8:
L_80245500:
    // 0x80245500: lw          $ra, 0x50($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X50);
    // 0x80245504: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x80245508: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x8024550C: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x80245510: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x80245514: jr          $ra
    // 0x80245518: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    TRACE_RETURN()
    return;
    // 0x80245518: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_80239630_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80239630: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80239634: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80239638: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023963C: jal         0x800A3450
    // 0x80239640: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x80239640: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x80239644: andi        $v0, $v0, 0x7F
    ctx->r2 = ctx->r2 & 0X7F;
    // 0x80239648: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8023964C: jal         0x800A3450
    // 0x80239650: sh          $v0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x80239650: sh          $v0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r2;
    after_1:
    // 0x80239654: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80239658: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x8023965C: jal         0x800A3450
    // 0x80239660: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x80239660: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    after_2:
    // 0x80239664: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80239668: addiu       $v0, $v0, -0x8
    ctx->r2 = ADD32(ctx->r2, -0X8);
    // 0x8023966C: sh          $v0, 0x66($s0)
    MEM_H(0X66, ctx->r16) = ctx->r2;
    // 0x80239670: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80239674: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80239678: jr          $ra
    // 0x8023967C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023967C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80246954_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80246954: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80246958: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8024695C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80246960: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80246964: lh          $v0, 0x44($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X44);
    // 0x80246968: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8024696C: slti        $v0, $v0, 0x20
    ctx->r2 = SIGNED(ctx->r2) < 0X20 ? 1 : 0;
    // 0x80246970: beq         $v0, $zero, L_80246990
    if (ctx->r2 == 0) {
        // 0x80246974: addiu       $v0, $v1, -0x20
        ctx->r2 = ADD32(ctx->r3, -0X20);
            goto L_80246990;
    }
    // 0x80246974: addiu       $v0, $v1, -0x20
    ctx->r2 = ADD32(ctx->r3, -0X20);
    // 0x80246978: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8024697C: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x80246980: sh          $zero, 0x4C($s0)
    MEM_H(0X4C, ctx->r16) = 0;
    // 0x80246984: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80246988: j           L_80246994
    // 0x8024698C: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
        goto L_80246994;
    // 0x8024698C: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
L_80246990:
    // 0x80246990: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
L_80246994:
    // 0x80246994: lh          $v0, 0x44($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X44);
    // 0x80246998: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8024699C: lui         $a0, 0x100
    ctx->r4 = S32(0X100 << 16);
    // 0x802469A0: slt         $v1, $a0, $v1
    ctx->r3 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x802469A4: slti        $v0, $v0, 0x100
    ctx->r2 = SIGNED(ctx->r2) < 0X100 ? 1 : 0;
    // 0x802469A8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x802469AC: beq         $v0, $zero, L_802469BC
    if (ctx->r2 == 0) {
        // 0x802469B0: addiu       $a0, $zero, 0x18B
        ctx->r4 = ADD32(0, 0X18B);
            goto L_802469BC;
    }
    // 0x802469B0: addiu       $a0, $zero, 0x18B
    ctx->r4 = ADD32(0, 0X18B);
    // 0x802469B4: jal         0x8002A33C
    // 0x802469B8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x802469B8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_0:
L_802469BC:
    // 0x802469BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802469C0: jal         0x80246FC8
    // 0x802469C4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80246FC8_ovl10(rdram, ctx);
        goto after_1;
    // 0x802469C4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x802469C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802469CC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802469D0: jr          $ra
    // 0x802469D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802469D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022B1F4_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B1F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B1F8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B1FC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B200: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022B204: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8022B208: bne         $v0, $zero, L_8022B220
    if (ctx->r2 != 0) {
        // 0x8022B20C: nop
    
            goto L_8022B220;
    }
    // 0x8022B20C: nop

    // 0x8022B210: jal         0x80229F50
    // 0x8022B214: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_80229F50_ovl10(rdram, ctx);
        goto after_0;
    // 0x8022B214: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_0:
    // 0x8022B218: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022B21C: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_8022B220:
    // 0x8022B220: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022B224: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B228: jr          $ra
    // 0x8022B22C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B22C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802465F8_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802465F8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x802465FC: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x80246600: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80246604: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80246608: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x8024660C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80246610: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80246614: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x80246618: jal         0x80047284
    // 0x8024661C: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    func_80047284_22684(rdram, ctx);
        goto after_0;
    // 0x8024661C: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    after_0:
    // 0x80246620: addiu       $s2, $sp, 0x28
    ctx->r18 = ADD32(ctx->r29, 0X28);
    // 0x80246624: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80246628: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x8024662C: lhu         $s0, 0x56($s1)
    ctx->r16 = MEM_HU(ctx->r17, 0X56);
    // 0x80246630: jal         0x8009A3B4
    // 0x80246634: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80246634: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x80246638: lhu         $v0, 0x2A($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X2A);
    // 0x8024663C: sll         $s0, $s0, 16
    ctx->r16 = S32(ctx->r16 << 16);
    // 0x80246640: sra         $s0, $s0, 16
    ctx->r16 = S32(SIGNED(ctx->r16) >> 16);
    // 0x80246644: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80246648: addiu       $v0, $v0, -0x50
    ctx->r2 = ADD32(ctx->r2, -0X50);
    // 0x8024664C: jal         0x800324B4
    // 0x80246650: sh          $v0, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r2;
    func_800324B4_D8B4(rdram, ctx);
        goto after_2;
    // 0x80246650: sh          $v0, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r2;
    after_2:
    // 0x80246654: lh          $v0, 0x28($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X28);
    // 0x80246658: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8024665C: jal         0x80032498
    // 0x80246660: sh          $v0, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r2;
    func_80032498_D898(rdram, ctx);
        goto after_3;
    // 0x80246660: sh          $v0, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r2;
    after_3:
    // 0x80246664: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80246668: lh          $v0, 0x2C($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X2C);
    // 0x8024666C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x80246670: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80246674: sh          $v0, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r2;
    // 0x80246678: lbu         $v1, 0x1($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X1);
    // 0x8024667C: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x80246680: addiu       $v0, $s1, 0xC0
    ctx->r2 = ADD32(ctx->r17, 0XC0);
    // 0x80246684: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80246688: lui         $v0, 0x888
    ctx->r2 = S32(0X888 << 16);
    // 0x8024668C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80246690: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80246694: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80246698: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8024669C: jal         0x80051E18
    // 0x802466A0: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_4;
    // 0x802466A0: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_4:
    // 0x802466A4: sw          $zero, 0xC0($s1)
    MEM_W(0XC0, ctx->r17) = 0;
    // 0x802466A8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x802466AC: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x802466B0: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x802466B4: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x802466B8: jr          $ra
    // 0x802466BC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x802466BC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80249324_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80249324: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80249328: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8024932C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80249330: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80249334: jal         0x8004F2C4
    // 0x80249338: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8004F2C4_2A6C4(rdram, ctx);
        goto after_0;
    // 0x80249338: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x8024933C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80249340: beq         $s0, $zero, L_802493C4
    if (ctx->r16 == 0) {
        // 0x80249344: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802493C4;
    }
    // 0x80249344: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80249348: lbu         $v1, 0x0($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X0);
    // 0x8024934C: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    // 0x80249350: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x80249354: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    // 0x80249358: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x8024935C: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    // 0x80249360: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80249364: jal         0x8009A3B4
    // 0x80249368: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80249368: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    after_1:
    // 0x8024936C: lhu         $v0, 0x3A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X3A);
    // 0x80249370: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80249374: addiu       $a1, $a0, 0x3
    ctx->r5 = ADD32(ctx->r4, 0X3);
    // 0x80249378: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
    // 0x8024937C: sb          $zero, 0xB($a0)
    MEM_B(0XB, ctx->r4) = 0;
    // 0x80249380: sw          $s1, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->r17;
    // 0x80249384: addiu       $v0, $v0, -0x50
    ctx->r2 = ADD32(ctx->r2, -0X50);
    // 0x80249388: jal         0x8004D5D4
    // 0x8024938C: sh          $v0, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_2;
    // 0x8024938C: sh          $v0, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = ctx->r2;
    after_2:
    // 0x80249390: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80249394: addiu       $a1, $s1, 0x3
    ctx->r5 = ADD32(ctx->r17, 0X3);
    // 0x80249398: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8024939C: jal         0x8004D5D4
    // 0x802493A0: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_3;
    // 0x802493A0: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    after_3:
    // 0x802493A4: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x802493A8: jal         0x8002C654
    // 0x802493AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8002C654_7A54(rdram, ctx);
        goto after_4;
    // 0x802493AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x802493B0: lb          $a0, 0xF($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XF);
    // 0x802493B4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x802493B8: jal         0x800319B4
    // 0x802493BC: sll         $a0, $a0, 6
    ctx->r4 = S32(ctx->r4 << 6);
    func_800319B4_CDB4(rdram, ctx);
        goto after_5;
    // 0x802493BC: sll         $a0, $a0, 6
    ctx->r4 = S32(ctx->r4 << 6);
    after_5:
    // 0x802493C0: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
L_802493C4:
    // 0x802493C4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802493C8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802493CC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802493D0: jr          $ra
    // 0x802493D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802493D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802468EC_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802468EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802468F0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802468F4: lbu         $v0, 0xB($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XB);
    // 0x802468F8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802468FC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80246900: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80246904: lw          $v0, 0x2250($at)
    ctx->r2 = MEM_W(ctx->r1, 0X2250);
    // 0x80246908: jalr        $v0
    // 0x8024690C: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8024690C: nop

    after_0:
    // 0x80246910: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80246914: jr          $ra
    // 0x80246918: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80246918: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8024453C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024453C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80244540: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80244544: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80244548: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x8024454C: addiu       $v0, $zero, 0x19
    ctx->r2 = ADD32(0, 0X19);
    // 0x80244550: sb          $v0, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r2;
    // 0x80244554: addiu       $v0, $a0, 0x14
    ctx->r2 = ADD32(ctx->r4, 0X14);
    // 0x80244558: addiu       $a0, $a1, 0x38
    ctx->r4 = ADD32(ctx->r5, 0X38);
    // 0x8024455C: sb          $zero, 0x3($a1)
    MEM_B(0X3, ctx->r5) = 0;
    // 0x80244560: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x80244564: jal         0x8009A3B4
    // 0x80244568: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80244568: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8024456C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80244570: jr          $ra
    // 0x80244574: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80244574: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80244578: nop

    // 0x8024457C: nop

;}
RECOMP_FUNC void func_80243718_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80243718: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8024371C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80243720: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80243724: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x80243728: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x8024372C: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x80243730: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80243734: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80243738: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8024373C: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x80243740: lw          $v1, 0xD4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XD4);
    // 0x80243744: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80243748: addu        $a0, $v0, $v1
    ctx->r4 = ADD32(ctx->r2, ctx->r3);
    // 0x8024374C: lbu         $v1, 0x4($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X4);
    // 0x80243750: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80243754: bne         $v1, $v0, L_802437DC
    if (ctx->r3 != ctx->r2) {
        // 0x80243758: addiu       $s2, $s0, 0xD0
        ctx->r18 = ADD32(ctx->r16, 0XD0);
            goto L_802437DC;
    }
    // 0x80243758: addiu       $s2, $s0, 0xD0
    ctx->r18 = ADD32(ctx->r16, 0XD0);
    // 0x8024375C: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80243760: bne         $v0, $zero, L_80243770
    if (ctx->r2 != 0) {
        // 0x80243764: nop
    
            goto L_80243770;
    }
    // 0x80243764: nop

    // 0x80243768: lbu         $v0, 0x5($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X5);
    // 0x8024376C: sh          $v0, 0xEA($s0)
    MEM_H(0XEA, ctx->r16) = ctx->r2;
L_80243770:
    // 0x80243770: lh          $v1, 0xEA($s0)
    ctx->r3 = MEM_H(ctx->r16, 0XEA);
    // 0x80243774: lw          $v0, 0xD8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD8);
    // 0x80243778: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8024377C: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80243780: lb          $v1, 0xC($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XC);
    // 0x80243784: sb          $v0, 0xDE($s0)
    MEM_B(0XDE, ctx->r16) = ctx->r2;
    // 0x80243788: lh          $v0, 0xEA($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XEA);
    // 0x8024378C: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80243790: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80243794: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80243798: lh          $v1, 0x1BD4($at)
    ctx->r3 = MEM_H(ctx->r1, 0X1BD4);
    // 0x8024379C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802437A0: div         $zero, $v0, $v1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r3)));
    // 0x802437A4: bne         $v1, $zero, L_802437B0
    if (ctx->r3 != 0) {
        // 0x802437A8: nop
    
            goto L_802437B0;
    }
    // 0x802437A8: nop

    // 0x802437AC: break       7
    do_break(2149857196);
L_802437B0:
    // 0x802437B0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802437B4: bne         $v1, $at, L_802437C8
    if (ctx->r3 != ctx->r1) {
        // 0x802437B8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_802437C8;
    }
    // 0x802437B8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802437BC: bne         $v0, $at, L_802437C8
    if (ctx->r2 != ctx->r1) {
        // 0x802437C0: nop
    
            goto L_802437C8;
    }
    // 0x802437C0: nop

    // 0x802437C4: break       6
    do_break(2149857220);
L_802437C8:
    // 0x802437C8: mfhi        $v1
    ctx->r3 = hi;
    // 0x802437CC: nop

    // 0x802437D0: nop

    // 0x802437D4: j           L_802438A8
    // 0x802437D8: sh          $v1, 0xEA($s0)
    MEM_H(0XEA, ctx->r16) = ctx->r3;
        goto L_802438A8;
    // 0x802437D8: sh          $v1, 0xEA($s0)
    MEM_H(0XEA, ctx->r16) = ctx->r3;
L_802437DC:
    // 0x802437DC: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x802437E0: addiu       $s5, $zero, 0x2
    ctx->r21 = ADD32(0, 0X2);
    // 0x802437E4: addiu       $s4, $zero, 0x3
    ctx->r20 = ADD32(0, 0X3);
L_802437E8:
    // 0x802437E8: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x802437EC: bne         $v0, $zero, L_80243824
    if (ctx->r2 != 0) {
        // 0x802437F0: nop
    
            goto L_80243824;
    }
    // 0x802437F0: nop

    // 0x802437F4: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x802437F8: lw          $v1, 0x4($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X4);
    // 0x802437FC: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80243800: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80243804: sll         $v1, $s1, 16
    ctx->r3 = S32(ctx->r17 << 16);
    // 0x80243808: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8024380C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80243810: lbu         $s3, 0x5($v0)
    ctx->r19 = MEM_BU(ctx->r2, 0X5);
    // 0x80243814: beql        $v1, $s5, L_802438A8
    if (ctx->r3 == ctx->r21) {
        // 0x80243818: sb          $s3, 0xE($s2)
        MEM_B(0XE, ctx->r18) = ctx->r19;
            goto L_802438A8;
    }
    goto skip_0;
    // 0x80243818: sb          $s3, 0xE($s2)
    MEM_B(0XE, ctx->r18) = ctx->r19;
    skip_0:
    // 0x8024381C: j           L_8024384C
    // 0x80243820: nop

        goto L_8024384C;
    // 0x80243820: nop

L_80243824:
    // 0x80243824: lbu         $v0, 0xE($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XE);
    // 0x80243828: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
    // 0x8024382C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80243830: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80243834: sll         $v1, $s1, 16
    ctx->r3 = S32(ctx->r17 << 16);
    // 0x80243838: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8024383C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80243840: lbu         $s3, 0x4($v0)
    ctx->r19 = MEM_BU(ctx->r2, 0X4);
    // 0x80243844: beql        $v1, $s4, L_802438A8
    if (ctx->r3 == ctx->r20) {
        // 0x80243848: sb          $s3, 0xE($s2)
        MEM_B(0XE, ctx->r18) = ctx->r19;
            goto L_802438A8;
    }
    goto skip_1;
    // 0x80243848: sb          $s3, 0xE($s2)
    MEM_B(0XE, ctx->r18) = ctx->r19;
    skip_1:
L_8024384C:
    // 0x8024384C: jal         0x800A3450
    // 0x80243850: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x80243850: nop

    after_0:
    // 0x80243854: lw          $a1, 0x0($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X0);
    // 0x80243858: sll         $a0, $s1, 16
    ctx->r4 = S32(ctx->r17 << 16);
    // 0x8024385C: sll         $v1, $s3, 3
    ctx->r3 = S32(ctx->r19 << 3);
    // 0x80243860: sra         $a0, $a0, 14
    ctx->r4 = S32(SIGNED(ctx->r4) >> 14);
    // 0x80243864: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x80243868: lbu         $v1, 0x2($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X2);
    // 0x8024386C: srav        $v0, $v0, $a0
    ctx->r2 = S32(SIGNED(ctx->r2) >> (ctx->r4 & 31));
    // 0x80243870: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80243874: andi        $v1, $v1, 0xF
    ctx->r3 = ctx->r3 & 0XF;
    // 0x80243878: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8024387C: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x80243880: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80243884: bne         $v0, $zero, L_802438A4
    if (ctx->r2 != 0) {
        // 0x80243888: addiu       $v0, $s1, 0x1
        ctx->r2 = ADD32(ctx->r17, 0X1);
            goto L_802438A4;
    }
    // 0x80243888: addiu       $v0, $s1, 0x1
    ctx->r2 = ADD32(ctx->r17, 0X1);
    // 0x8024388C: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80243890: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80243894: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80243898: slti        $v0, $v0, 0x4
    ctx->r2 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x8024389C: bne         $v0, $zero, L_802437E8
    if (ctx->r2 != 0) {
        // 0x802438A0: nop
    
            goto L_802437E8;
    }
    // 0x802438A0: nop

L_802438A4:
    // 0x802438A4: sb          $s3, 0xE($s2)
    MEM_B(0XE, ctx->r18) = ctx->r19;
L_802438A8:
    // 0x802438A8: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x802438AC: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x802438B0: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x802438B4: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x802438B8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x802438BC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802438C0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802438C4: jr          $ra
    // 0x802438C8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x802438C8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x802438CC: nop

;}
RECOMP_FUNC void func_8023555C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023555C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80235560: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80235564: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80235568: jal         0x8004F418
    // 0x8023556C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x8023556C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x80235570: lw          $a0, 0x36C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X36C);
    // 0x80235574: jal         0x8004F418
    // 0x80235578: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_1;
    // 0x80235578: nop

    after_1:
    // 0x8023557C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80235580: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80235584: jr          $ra
    // 0x80235588: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80235588: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80241694_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80241694: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x80241698: lw          $v1, 0x3524($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3524);
    // 0x8024169C: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x802416A0: lw          $v0, 0x352C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X352C);
    // 0x802416A4: bne         $v1, $v0, L_802416C4
    if (ctx->r3 != ctx->r2) {
        // 0x802416A8: addiu       $a1, $a0, 0x500
        ctx->r5 = ADD32(ctx->r4, 0X500);
            goto L_802416C4;
    }
    // 0x802416A8: addiu       $a1, $a0, 0x500
    ctx->r5 = ADD32(ctx->r4, 0X500);
    // 0x802416AC: lhu         $v0, 0x500($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X500);
    // 0x802416B0: lhu         $v1, 0x502($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X502);
    // 0x802416B4: xor         $v0, $v0, $v1
    ctx->r2 = ctx->r2 ^ ctx->r3;
    // 0x802416B8: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x802416BC: beq         $v0, $zero, L_802416C8
    if (ctx->r2 == 0) {
        // 0x802416C0: nop
    
            goto L_802416C8;
    }
    // 0x802416C0: nop

L_802416C4:
    // 0x802416C4: sh          $zero, 0x50A($a0)
    MEM_H(0X50A, ctx->r4) = 0;
L_802416C8:
    // 0x802416C8: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x802416CC: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x802416D0: beq         $v0, $zero, L_80241738
    if (ctx->r2 == 0) {
        // 0x802416D4: lui         $a0, 0x5555
        ctx->r4 = S32(0X5555 << 16);
            goto L_80241738;
    }
    // 0x802416D4: lui         $a0, 0x5555
    ctx->r4 = S32(0X5555 << 16);
    // 0x802416D8: lhu         $v0, 0xA($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0XA);
    // 0x802416DC: ori         $a0, $a0, 0x5556
    ctx->r4 = ctx->r4 | 0X5556;
    // 0x802416E0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802416E4: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802416E8: mult        $v1, $a0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802416EC: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x802416F0: mfhi        $a2
    ctx->r6 = hi;
    // 0x802416F4: subu        $a0, $a2, $v0
    ctx->r4 = SUB32(ctx->r6, ctx->r2);
    // 0x802416F8: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x802416FC: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80241700: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80241704: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80241708: bne         $v1, $zero, L_80241728
    if (ctx->r3 != 0) {
        // 0x8024170C: sll         $v1, $a0, 16
        ctx->r3 = S32(ctx->r4 << 16);
            goto L_80241728;
    }
    // 0x8024170C: sll         $v1, $a0, 16
    ctx->r3 = S32(ctx->r4 << 16);
    // 0x80241710: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80241714: lw          $v0, 0x3524($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3524);
    // 0x80241718: sra         $v1, $v1, 15
    ctx->r3 = S32(SIGNED(ctx->r3) >> 15);
    // 0x8024171C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80241720: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x80241724: sh          $v0, 0x10($a1)
    MEM_H(0X10, ctx->r5) = ctx->r2;
L_80241728:
    // 0x80241728: lhu         $v0, 0xA($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0XA);
    // 0x8024172C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80241730: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80241734: sh          $v0, 0xA($a1)
    MEM_H(0XA, ctx->r5) = ctx->r2;
L_80241738:
    // 0x80241738: jr          $ra
    // 0x8024173C: nop

    TRACE_RETURN()
    return;
    // 0x8024173C: nop

;}
RECOMP_FUNC void func_8023A11C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023A11C: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x8023A120: bne         $v0, $zero, L_8023A130
    if (ctx->r2 != 0) {
        // 0x8023A124: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_8023A130;
    }
    // 0x8023A124: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023A128: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x8023A12C: sb          $zero, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = 0;
L_8023A130:
    // 0x8023A130: jr          $ra
    // 0x8023A134: nop

    TRACE_RETURN()
    return;
    // 0x8023A134: nop

;}
RECOMP_FUNC void func_802396B0_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802396B0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802396B4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x802396B8: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x802396BC: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x802396C0: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x802396C4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x802396C8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802396CC: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x802396D0: lbu         $v1, 0x3($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X3);
    // 0x802396D4: addiu       $s3, $s2, 0x348
    ctx->r19 = ADD32(ctx->r18, 0X348);
    // 0x802396D8: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x802396DC: beq         $v1, $zero, L_802396EC
    if (ctx->r3 == 0) {
        // 0x802396E0: sb          $v0, 0x0($s2)
        MEM_B(0X0, ctx->r18) = ctx->r2;
            goto L_802396EC;
    }
    // 0x802396E0: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    // 0x802396E4: j           L_802396F4
    // 0x802396E8: addiu       $a1, $s2, 0x3
    ctx->r5 = ADD32(ctx->r18, 0X3);
        goto L_802396F4;
    // 0x802396E8: addiu       $a1, $s2, 0x3
    ctx->r5 = ADD32(ctx->r18, 0X3);
L_802396EC:
    // 0x802396EC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x802396F0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_802396F4:
    // 0x802396F4: jal         0x8004D5D4
    // 0x802396F8: addiu       $s0, $s3, 0xC
    ctx->r16 = ADD32(ctx->r19, 0XC);
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x802396F8: addiu       $s0, $s3, 0xC
    ctx->r16 = ADD32(ctx->r19, 0XC);
    after_0:
    // 0x802396FC: lui         $s1, 0x8025
    ctx->r17 = S32(0X8025 << 16);
    // 0x80239700: addiu       $s1, $s1, 0x34F0
    ctx->r17 = ADD32(ctx->r17, 0X34F0);
    // 0x80239704: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80239708: addiu       $a1, $s2, 0x1C
    ctx->r5 = ADD32(ctx->r18, 0X1C);
    // 0x8023970C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80239710: addiu       $v0, $zero, 0x21A
    ctx->r2 = ADD32(0, 0X21A);
    // 0x80239714: sh          $v0, 0x15C($s2)
    MEM_H(0X15C, ctx->r18) = ctx->r2;
    // 0x80239718: sh          $v0, 0x15A($s2)
    MEM_H(0X15A, ctx->r18) = ctx->r2;
    // 0x8023971C: sh          $v0, 0x158($s2)
    MEM_H(0X158, ctx->r18) = ctx->r2;
    // 0x80239720: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80239724: sh          $v0, 0x15E($s2)
    MEM_H(0X15E, ctx->r18) = ctx->r2;
    // 0x80239728: sh          $zero, 0x0($s3)
    MEM_H(0X0, ctx->r19) = 0;
    // 0x8023972C: jal         0x8009A3B4
    // 0x80239730: sw          $zero, 0x4($s3)
    MEM_W(0X4, ctx->r19) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80239730: sw          $zero, 0x4($s3)
    MEM_W(0X4, ctx->r19) = 0;
    after_1:
    // 0x80239734: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80239738: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    // 0x8023973C: jal         0x8009A3B4
    // 0x80239740: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80239740: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80239744: lh          $a2, 0x56($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X56);
    // 0x80239748: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023974C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80239750: addiu       $a3, $zero, 0x100
    ctx->r7 = ADD32(0, 0X100);
    // 0x80239754: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80239758: jal         0x8004DBA0
    // 0x8023975C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_3;
    // 0x8023975C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_3:
    // 0x80239760: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80239764: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80239768: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023976C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80239770: sh          $zero, 0xA($s3)
    MEM_H(0XA, ctx->r19) = 0;
    // 0x80239774: sh          $v0, 0x6E($s2)
    MEM_H(0X6E, ctx->r18) = ctx->r2;
    // 0x80239778: sh          $v0, 0xB0($s2)
    MEM_H(0XB0, ctx->r18) = ctx->r2;
    // 0x8023977C: sh          $v0, 0xB2($s2)
    MEM_H(0XB2, ctx->r18) = ctx->r2;
    // 0x80239780: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80239784: addiu       $v0, $v0, 0x16A8
    ctx->r2 = ADD32(ctx->r2, 0X16A8);
    // 0x80239788: sw          $v0, 0x78($s2)
    MEM_W(0X78, ctx->r18) = ctx->r2;
    // 0x8023978C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80239790: sh          $zero, 0x54($s2)
    MEM_H(0X54, ctx->r18) = 0;
    // 0x80239794: sh          $zero, 0x58($s2)
    MEM_H(0X58, ctx->r18) = 0;
    // 0x80239798: sw          $zero, 0x44($s2)
    MEM_W(0X44, ctx->r18) = 0;
    // 0x8023979C: sw          $zero, 0x48($s2)
    MEM_W(0X48, ctx->r18) = 0;
    // 0x802397A0: sw          $zero, 0x10($s2)
    MEM_W(0X10, ctx->r18) = 0;
    // 0x802397A4: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
    // 0x802397A8: sb          $zero, 0x9($s2)
    MEM_B(0X9, ctx->r18) = 0;
    // 0x802397AC: jal         0x80050294
    // 0x802397B0: sh          $zero, 0xA($s2)
    MEM_H(0XA, ctx->r18) = 0;
    func_80050294_2B694(rdram, ctx);
        goto after_4;
    // 0x802397B0: sh          $zero, 0xA($s2)
    MEM_H(0XA, ctx->r18) = 0;
    after_4:
    // 0x802397B4: jal         0x802397D8
    // 0x802397B8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_802397D8_ovl10(rdram, ctx);
        goto after_5;
    // 0x802397B8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_5:
    // 0x802397BC: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x802397C0: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x802397C4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x802397C8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x802397CC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802397D0: jr          $ra
    // 0x802397D4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x802397D4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022A930_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A930: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022A934: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A938: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A93C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022A940: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022A944: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x8022A948: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x8022A94C: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x8022A950: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x8022A954: beq         $v0, $zero, L_8022AB28
    if (ctx->r2 == 0) {
        // 0x8022A958: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8022AB28;
    }
    // 0x8022A958: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022A95C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022A960: addu        $at, $at, $v0
    gpr jr_addend_8022A968 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022A964: lw          $v0, 0x2D58($at)
    ctx->r2 = ADD32(ctx->r1, 0X2D58);
    // 0x8022A968: jr          $v0
    // 0x8022A96C: nop

    switch (jr_addend_8022A968 >> 2) {
        case 0: goto L_8022A970; break;
        case 1: goto L_8022A9AC; break;
        case 2: goto L_8022A9F0; break;
        case 3: goto L_8022AA08; break;
        case 4: goto L_8022AAA8; break;
        case 5: goto L_8022AB08; break;
        default: switch_error(__func__, 0x8022A968, 0x80252D58);
    }
    // 0x8022A96C: nop

L_8022A970:
    // 0x8022A970: addiu       $a0, $zero, 0x56
    ctx->r4 = ADD32(0, 0X56);
    // 0x8022A974: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x8022A978: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8022A97C: addiu       $v0, $v0, 0x638
    ctx->r2 = ADD32(ctx->r2, 0X638);
    // 0x8022A980: sw          $v0, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->r2;
    // 0x8022A984: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x8022A988: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8022A98C: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    // 0x8022A990: sb          $zero, 0x7($s0)
    MEM_B(0X7, ctx->r16) = 0;
    // 0x8022A994: jal         0x8004CB2C
    // 0x8022A998: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_0;
    // 0x8022A998: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    after_0:
    // 0x8022A99C: jal         0x80060590
    // 0x8022A9A0: addiu       $a0, $zero, 0x246
    ctx->r4 = ADD32(0, 0X246);
    func_80060590_3B990(rdram, ctx);
        goto after_1;
    // 0x8022A9A0: addiu       $a0, $zero, 0x246
    ctx->r4 = ADD32(0, 0X246);
    after_1:
    // 0x8022A9A4: j           L_8022AA54
    // 0x8022A9A8: nop

        goto L_8022AA54;
    // 0x8022A9A8: nop

L_8022A9AC:
    // 0x8022A9AC: jal         0x8006FF84
    // 0x8022A9B0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_2;
    // 0x8022A9B0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
    // 0x8022A9B4: beq         $v0, $zero, L_8022AB28
    if (ctx->r2 == 0) {
        // 0x8022A9B8: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022AB28;
    }
    // 0x8022A9B8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022A9BC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022A9C0: sb          $v0, 0x49B8($at)
    MEM_B(0X49B8, ctx->r1) = ctx->r2;
    // 0x8022A9C4: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x8022A9C8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022A9CC: sb          $zero, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = 0;
    // 0x8022A9D0: sb          $v0, 0x448($s1)
    MEM_B(0X448, ctx->r17) = ctx->r2;
    // 0x8022A9D4: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8022A9D8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8022A9DC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022A9E0: jal         0x80036E48
    // 0x8022A9E4: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    func_80036E48_12248(rdram, ctx);
        goto after_3;
    // 0x8022A9E4: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    after_3:
    // 0x8022A9E8: j           L_8022AB28
    // 0x8022A9EC: nop

        goto L_8022AB28;
    // 0x8022A9EC: nop

L_8022A9F0:
    // 0x8022A9F0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022A9F4: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x8022A9F8: beq         $v0, $zero, L_8022AA54
    if (ctx->r2 == 0) {
        // 0x8022A9FC: nop
    
            goto L_8022AA54;
    }
    // 0x8022A9FC: nop

    // 0x8022AA00: j           L_8022AB28
    // 0x8022AA04: nop

        goto L_8022AB28;
    // 0x8022AA04: nop

L_8022AA08:
    // 0x8022AA08: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8022AA0C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022AA10: beq         $v1, $v0, L_8022AA54
    if (ctx->r3 == ctx->r2) {
        // 0x8022AA14: nop
    
            goto L_8022AA54;
    }
    // 0x8022AA14: nop

    // 0x8022AA18: jal         0x8006072C
    // 0x8022AA1C: nop

    func_8006072C_3BB2C(rdram, ctx);
        goto after_4;
    // 0x8022AA1C: nop

    after_4:
    // 0x8022AA20: beq         $v0, $zero, L_8022AA64
    if (ctx->r2 == 0) {
        // 0x8022AA24: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022AA64;
    }
    // 0x8022AA24: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022AA28: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022AA2C: bne         $v1, $v0, L_8022AA64
    if (ctx->r3 != ctx->r2) {
        // 0x8022AA30: nop
    
            goto L_8022AA64;
    }
    // 0x8022AA30: nop

    // 0x8022AA34: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022AA38: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x8022AA3C: bne         $v0, $zero, L_8022AA64
    if (ctx->r2 != 0) {
        // 0x8022AA40: nop
    
            goto L_8022AA64;
    }
    // 0x8022AA40: nop

    // 0x8022AA44: jal         0x80061798
    // 0x8022AA48: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_80061798_3CB98(rdram, ctx);
        goto after_5;
    // 0x8022AA48: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_5:
    // 0x8022AA4C: jal         0x80036E48
    // 0x8022AA50: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    func_80036E48_12248(rdram, ctx);
        goto after_6;
    // 0x8022AA50: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    after_6:
L_8022AA54:
    // 0x8022AA54: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8022AA58: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022AA5C: j           L_8022AB28
    // 0x8022AA60: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
        goto L_8022AB28;
    // 0x8022AA60: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_8022AA64:
    // 0x8022AA64: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8022AA68: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022AA6C: beq         $v1, $v0, L_8022AA84
    if (ctx->r3 == ctx->r2) {
        // 0x8022AA70: nop
    
            goto L_8022AA84;
    }
    // 0x8022AA70: nop

    // 0x8022AA74: lw          $v0, 0xA4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA4);
    // 0x8022AA78: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x8022AA7C: jalr        $v0
    // 0x8022AA80: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_7;
    // 0x8022AA80: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
L_8022AA84:
    // 0x8022AA84: lbu         $v0, 0x7($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X7);
    // 0x8022AA88: beq         $v0, $zero, L_8022AA98
    if (ctx->r2 == 0) {
        // 0x8022AA8C: nop
    
            goto L_8022AA98;
    }
    // 0x8022AA8C: nop

    // 0x8022AA90: jal         0x8005FB90
    // 0x8022AA94: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_8;
    // 0x8022AA94: nop

    after_8:
L_8022AA98:
    // 0x8022AA98: jal         0x80060018
    // 0x8022AA9C: nop

    func_80060018_3B418(rdram, ctx);
        goto after_9;
    // 0x8022AA9C: nop

    after_9:
    // 0x8022AAA0: j           L_8022AB28
    // 0x8022AAA4: nop

        goto L_8022AB28;
    // 0x8022AAA4: nop

L_8022AAA8:
    // 0x8022AAA8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022AAAC: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x8022AAB0: bne         $v0, $zero, L_8022AB28
    if (ctx->r2 != 0) {
        // 0x8022AAB4: nop
    
            goto L_8022AB28;
    }
    // 0x8022AAB4: nop

    // 0x8022AAB8: jal         0x80036E48
    // 0x8022AABC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80036E48_12248(rdram, ctx);
        goto after_10;
    // 0x8022AABC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_10:
    // 0x8022AAC0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022AAC4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022AAC8: jal         0x80034844
    // 0x8022AACC: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    func_80034844_FC44(rdram, ctx);
        goto after_11;
    // 0x8022AACC: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    after_11:
    // 0x8022AAD0: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8022AAD4: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    // 0x8022AAD8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022AADC: jal         0x8004F418
    // 0x8022AAE0: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    func_8004F418_2A818(rdram, ctx);
        goto after_12;
    // 0x8022AAE0: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    after_12:
    // 0x8022AAE4: addiu       $a0, $zero, 0x56
    ctx->r4 = ADD32(0, 0X56);
    // 0x8022AAE8: jal         0x8004CB2C
    // 0x8022AAEC: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_13;
    // 0x8022AAEC: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_13:
    // 0x8022AAF0: jal         0x80060D38
    // 0x8022AAF4: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    func_80060D38_3C138(rdram, ctx);
        goto after_14;
    // 0x8022AAF4: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_14:
    // 0x8022AAF8: jal         0x80034844
    // 0x8022AAFC: nop

    func_80034844_FC44(rdram, ctx);
        goto after_15;
    // 0x8022AAFC: nop

    after_15:
    // 0x8022AB00: j           L_8022AB28
    // 0x8022AB04: nop

        goto L_8022AB28;
    // 0x8022AB04: nop

L_8022AB08:
    // 0x8022AB08: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022AB0C: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x8022AB10: bne         $v0, $zero, L_8022AB28
    if (ctx->r2 != 0) {
        // 0x8022AB14: nop
    
            goto L_8022AB28;
    }
    // 0x8022AB14: nop

    // 0x8022AB18: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022AB1C: jal         0x80070050
    // 0x8022AB20: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    func_80070050_4B450(rdram, ctx);
        goto after_16;
    // 0x8022AB20: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_16:
    // 0x8022AB24: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
L_8022AB28:
    // 0x8022AB28: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022AB2C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022AB30: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022AB34: jr          $ra
    // 0x8022AB38: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022AB38: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022B2A0_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B2A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B2A4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B2A8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B2AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022B2B0: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8022B2B4: bne         $v0, $zero, L_8022B2D4
    if (ctx->r2 != 0) {
        // 0x8022B2B8: nop
    
            goto L_8022B2D4;
    }
    // 0x8022B2B8: nop

    // 0x8022B2BC: jal         0x80229F50
    // 0x8022B2C0: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_80229F50_ovl10(rdram, ctx);
        goto after_0;
    // 0x8022B2C0: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_0:
    // 0x8022B2C4: jal         0x80229F50
    // 0x8022B2C8: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    func_80229F50_ovl10(rdram, ctx);
        goto after_1;
    // 0x8022B2C8: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    after_1:
    // 0x8022B2CC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022B2D0: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_8022B2D4:
    // 0x8022B2D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022B2D8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B2DC: jr          $ra
    // 0x8022B2E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B2E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80249E80_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80249E80: jr          $ra
    // 0x80249E84: nop

    TRACE_RETURN()
    return;
    // 0x80249E84: nop

;}
RECOMP_FUNC void func_80242DA4_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80242DA4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80242DA8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80242DAC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80242DB0: jal         0x80243718
    // 0x80242DB4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_80243718_ovl10(rdram, ctx);
        goto after_0;
    // 0x80242DB4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x80242DB8: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80242DBC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80242DC0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80242DC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80242DC8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80242DCC: jr          $ra
    // 0x80242DD0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80242DD0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022A260_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A260: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022A264: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022A268: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022A26C: sll         $a0, $a0, 24
    ctx->r4 = S32(ctx->r4 << 24);
    // 0x8022A270: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
    // 0x8022A274: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x8022A278: lw          $v1, -0xD90($v1)
    ctx->r3 = MEM_W(ctx->r3, -0XD90);
    // 0x8022A27C: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x8022A280: srlv        $v0, $v0, $a0
    ctx->r2 = S32(U32(ctx->r2) >> (ctx->r4 & 31));
    // 0x8022A284: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022A288: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x8022A28C: beq         $v1, $zero, L_8022A33C
    if (ctx->r3 == 0) {
        // 0x8022A290: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_8022A33C;
    }
    // 0x8022A290: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A294: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x8022A298: lui         $s0, 0x8025
    ctx->r16 = S32(0X8025 << 16);
    // 0x8022A29C: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x8022A2A0: lw          $s0, 0x55F8($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X55F8);
    // 0x8022A2A4: jal         0x8004DA68
    // 0x8022A2A8: lbu         $a0, 0x1($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X1);
    func_8004DA68_28E68(rdram, ctx);
        goto after_0;
    // 0x8022A2A8: lbu         $a0, 0x1($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X1);
    after_0:
    // 0x8022A2AC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022A2B0: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8022A2B4: beq         $v1, $v0, L_8022A2CC
    if (ctx->r3 == ctx->r2) {
        // 0x8022A2B8: addiu       $v0, $zero, 0x60
        ctx->r2 = ADD32(0, 0X60);
            goto L_8022A2CC;
    }
    // 0x8022A2B8: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x8022A2BC: beq         $v1, $v0, L_8022A2F8
    if (ctx->r3 == ctx->r2) {
        // 0x8022A2C0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022A2F8;
    }
    // 0x8022A2C0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022A2C4: j           L_8022A320
    // 0x8022A2C8: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
        goto L_8022A320;
    // 0x8022A2C8: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
L_8022A2CC:
    // 0x8022A2CC: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x8022A2D0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022A2D4: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022A2D8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022A2DC: lw          $v0, 0x4020($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4020);
    // 0x8022A2E0: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8022A2E4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022A2E8: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8022A2EC: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x8022A2F0: j           L_8022A30C
    // 0x8022A2F4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
        goto L_8022A30C;
    // 0x8022A2F4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
L_8022A2F8:
    // 0x8022A2F8: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022A2FC: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x8022A300: lui         $v1, 0x8022
    ctx->r3 = S32(0X8022 << 16);
    // 0x8022A304: lw          $v1, -0x26A8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X26A8);
    // 0x8022A308: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
L_8022A30C:
    // 0x8022A30C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022A310: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8022A314: jalr        $v0
    // 0x8022A318: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x8022A318: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022A31C: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
L_8022A320:
    // 0x8022A320: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x8022A324: lw          $v1, -0xD90($v1)
    ctx->r3 = MEM_W(ctx->r3, -0XD90);
    // 0x8022A328: srlv        $v0, $v0, $s1
    ctx->r2 = S32(U32(ctx->r2) >> (ctx->r17 & 31));
    // 0x8022A32C: nor         $v0, $zero, $v0
    ctx->r2 = ~(0 | ctx->r2);
    // 0x8022A330: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x8022A334: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022A338: sw          $v1, -0xD90($at)
    MEM_W(-0XD90, ctx->r1) = ctx->r3;
L_8022A33C:
    // 0x8022A33C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022A340: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022A344: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A348: jr          $ra
    // 0x8022A34C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022A34C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80234C5C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234C5C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80234C60: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80234C64: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80234C68: jal         0x8003E934
    // 0x80234C6C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_0;
    // 0x80234C6C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x80234C70: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x80234C74: addiu       $v0, $v0, -0x7D0
    ctx->r2 = ADD32(ctx->r2, -0X7D0);
    // 0x80234C78: sltu        $v1, $v1, $v0
    ctx->r3 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x80234C7C: beq         $v1, $zero, L_80234C8C
    if (ctx->r3 == 0) {
        // 0x80234C80: sw          $v0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r2;
            goto L_80234C8C;
    }
    // 0x80234C80: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80234C84: jal         0x8004F418
    // 0x80234C88: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_1;
    // 0x80234C88: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_80234C8C:
    // 0x80234C8C: lhu         $a2, 0x46($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X46);
    // 0x80234C90: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80234C94: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80234C98: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80234C9C: addiu       $a2, $a2, -0x10
    ctx->r6 = ADD32(ctx->r6, -0X10);
    // 0x80234CA0: sh          $a2, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r6;
    // 0x80234CA4: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x80234CA8: jal         0x8004DA90
    // 0x80234CAC: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x80234CAC: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    after_2:
    // 0x80234CB0: jal         0x8003E810
    // 0x80234CB4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8003E810_19C10(rdram, ctx);
        goto after_3;
    // 0x80234CB4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_3:
    // 0x80234CB8: beq         $v0, $zero, L_80234CD0
    if (ctx->r2 == 0) {
        // 0x80234CBC: nop
    
            goto L_80234CD0;
    }
    // 0x80234CBC: nop

    // 0x80234CC0: jal         0x8004F418
    // 0x80234CC4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_4;
    // 0x80234CC4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80234CC8: j           L_80234CE0
    // 0x80234CCC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80234CE0;
    // 0x80234CCC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80234CD0:
    // 0x80234CD0: jal         0x80040F30
    // 0x80234CD4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_5;
    // 0x80234CD4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80234CD8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80234CDC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80234CE0:
    // 0x80234CE0: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80234CE4: bne         $v0, $zero, L_80234CF4
    if (ctx->r2 != 0) {
        // 0x80234CE8: nop
    
            goto L_80234CF4;
    }
    // 0x80234CE8: nop

    // 0x80234CEC: jal         0x8005044C
    // 0x80234CF0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_6;
    // 0x80234CF0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
L_80234CF4:
    // 0x80234CF4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80234CF8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80234CFC: jr          $ra
    // 0x80234D00: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80234D00: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80234D04: nop

    // 0x80234D08: nop

    // 0x80234D0C: nop

;}
RECOMP_FUNC void func_8022C830_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C830: lbu         $v1, 0xA($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XA);
    // 0x8022C834: beq         $v1, $zero, L_8022C850
    if (ctx->r3 == 0) {
        // 0x8022C838: addiu       $a1, $a0, 0x348
        ctx->r5 = ADD32(ctx->r4, 0X348);
            goto L_8022C850;
    }
    // 0x8022C838: addiu       $a1, $a0, 0x348
    ctx->r5 = ADD32(ctx->r4, 0X348);
    // 0x8022C83C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C840: beq         $v1, $v0, L_8022C864
    if (ctx->r3 == ctx->r2) {
        // 0x8022C844: nop
    
            goto L_8022C864;
    }
    // 0x8022C844: nop

    // 0x8022C848: j           L_8022C888
    // 0x8022C84C: nop

        goto L_8022C888;
    // 0x8022C84C: nop

L_8022C850:
    // 0x8022C850: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x8022C854: sh          $v0, 0x34C($a0)
    MEM_H(0X34C, ctx->r4) = ctx->r2;
    // 0x8022C858: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C85C: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x8022C860: sb          $zero, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = 0;
L_8022C864:
    // 0x8022C864: lhu         $v0, 0x4($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X4);
    // 0x8022C868: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022C86C: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
    // 0x8022C870: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C874: bgez        $v0, L_8022C888
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022C878: nop
    
            goto L_8022C888;
    }
    // 0x8022C878: nop

    // 0x8022C87C: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x8022C880: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022C884: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
L_8022C888:
    // 0x8022C888: jr          $ra
    // 0x8022C88C: nop

    TRACE_RETURN()
    return;
    // 0x8022C88C: nop

;}
RECOMP_FUNC void func_8023A010_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023A010: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023A014: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023A018: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023A01C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8023A020: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023A024: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x8023A028: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8023A02C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8023A030: jal         0x8009A3B4
    // 0x8023A034: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8023A034: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    after_0:
    // 0x8023A038: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8023A03C: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8023A040: jal         0x8009A3B4
    // 0x8023A044: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8023A044: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8023A048: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8023A04C: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8023A050: jal         0x8009A3B4
    // 0x8023A054: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8023A054: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8023A058: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8023A05C: jal         0x800A3450
    // 0x8023A060: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x8023A060: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    after_3:
    // 0x8023A064: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8023A068: sh          $v0, 0x36A($s0)
    MEM_H(0X36A, ctx->r16) = ctx->r2;
    // 0x8023A06C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8023A070: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8023A074: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023A078: lw          $v0, 0x16DC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X16DC);
    // 0x8023A07C: jalr        $v0
    // 0x8023A080: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x8023A080: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8023A084: lhu         $v0, 0x368($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X368);
    // 0x8023A088: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8023A08C: beq         $v0, $zero, L_8023A0A8
    if (ctx->r2 == 0) {
        // 0x8023A090: nop
    
            goto L_8023A0A8;
    }
    // 0x8023A090: nop

    // 0x8023A094: lhu         $v0, 0x368($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X368);
    // 0x8023A098: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8023A09C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8023A0A0: andi        $v0, $v0, 0xFFFE
    ctx->r2 = ctx->r2 & 0XFFFE;
    // 0x8023A0A4: sh          $v0, 0x368($s0)
    MEM_H(0X368, ctx->r16) = ctx->r2;
L_8023A0A8:
    // 0x8023A0A8: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x8023A0AC: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8023A0B0: beq         $v0, $a1, L_8023A0C8
    if (ctx->r2 == ctx->r5) {
        // 0x8023A0B4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023A0C8;
    }
    // 0x8023A0B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023A0B8: jal         0x80050294
    // 0x8023A0BC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_5;
    // 0x8023A0BC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
    // 0x8023A0C0: j           L_8023A0D0
    // 0x8023A0C4: nop

        goto L_8023A0D0;
    // 0x8023A0C4: nop

L_8023A0C8:
    // 0x8023A0C8: jal         0x8005044C
    // 0x8023A0CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_6;
    // 0x8023A0CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
L_8023A0D0:
    // 0x8023A0D0: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8023A0D4: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8023A0D8: beq         $v0, $zero, L_8023A0F0
    if (ctx->r2 == 0) {
        // 0x8023A0DC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023A0F0;
    }
    // 0x8023A0DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023A0E0: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x8023A0E4: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8023A0E8: jal         0x8003B564
    // 0x8023A0EC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_7;
    // 0x8023A0EC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_7:
L_8023A0F0:
    // 0x8023A0F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023A0F4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023A0F8: jr          $ra
    // 0x8023A0FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023A0FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023895C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023895C: lbu         $v1, 0xA($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XA);
    // 0x80238960: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80238964: beq         $v1, $v0, L_802389D8
    if (ctx->r3 == ctx->r2) {
        // 0x80238968: addiu       $a1, $a0, 0x308
        ctx->r5 = ADD32(ctx->r4, 0X308);
            goto L_802389D8;
    }
    // 0x80238968: addiu       $a1, $a0, 0x308
    ctx->r5 = ADD32(ctx->r4, 0X308);
    // 0x8023896C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80238970: beql        $v0, $zero, L_80238988
    if (ctx->r2 == 0) {
        // 0x80238974: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80238988;
    }
    goto skip_0;
    // 0x80238974: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80238978: beq         $v1, $zero, L_802389A0
    if (ctx->r3 == 0) {
        // 0x8023897C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802389A0;
    }
    // 0x8023897C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80238980: j           L_80238A48
    // 0x80238984: nop

        goto L_80238A48;
    // 0x80238984: nop

L_80238988:
    // 0x80238988: beq         $v1, $v0, L_802389FC
    if (ctx->r3 == ctx->r2) {
        // 0x8023898C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_802389FC;
    }
    // 0x8023898C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80238990: beq         $v1, $v0, L_80238A18
    if (ctx->r3 == ctx->r2) {
        // 0x80238994: nop
    
            goto L_80238A18;
    }
    // 0x80238994: nop

    // 0x80238998: j           L_80238A48
    // 0x8023899C: nop

        goto L_80238A48;
    // 0x8023899C: nop

L_802389A0:
    // 0x802389A0: lw          $v1, 0x33C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X33C);
    // 0x802389A4: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x802389A8: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x802389AC: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x802389B0: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x802389B4: sh          $zero, 0x44($a0)
    MEM_H(0X44, ctx->r4) = 0;
    // 0x802389B8: sh          $v0, 0x30C($a0)
    MEM_H(0X30C, ctx->r4) = ctx->r2;
    // 0x802389BC: sh          $zero, 0x310($a0)
    MEM_H(0X310, ctx->r4) = 0;
    // 0x802389C0: lbu         $v0, 0xE($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XE);
    // 0x802389C4: ori         $v0, $v0, 0x5
    ctx->r2 = ctx->r2 | 0X5;
    // 0x802389C8: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
    // 0x802389CC: lhu         $v0, 0x308($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X308);
    // 0x802389D0: andi        $v0, $v0, 0xFEFF
    ctx->r2 = ctx->r2 & 0XFEFF;
    // 0x802389D4: sh          $v0, 0x308($a0)
    MEM_H(0X308, ctx->r4) = ctx->r2;
L_802389D8:
    // 0x802389D8: lhu         $v0, 0x4($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X4);
    // 0x802389DC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802389E0: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
    // 0x802389E4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802389E8: bgez        $v0, L_80238A48
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802389EC: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80238A48;
    }
    // 0x802389EC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802389F0: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x802389F4: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x802389F8: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
L_802389FC:
    // 0x802389FC: lhu         $v0, 0x4($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X4);
    // 0x80238A00: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80238A04: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
    // 0x80238A08: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80238A0C: bgez        $v0, L_80238A48
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80238A10: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80238A48;
    }
    // 0x80238A10: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80238A14: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_80238A18:
    // 0x80238A18: lw          $v1, 0x80($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X80);
    // 0x80238A1C: lui         $v0, 0x12
    ctx->r2 = S32(0X12 << 16);
    // 0x80238A20: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x80238A24: beq         $v0, $zero, L_80238A48
    if (ctx->r2 == 0) {
        // 0x80238A28: nop
    
            goto L_80238A48;
    }
    // 0x80238A28: nop

    // 0x80238A2C: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x80238A30: lw          $v1, 0x34($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X34);
    // 0x80238A34: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80238A38: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
    // 0x80238A3C: lbu         $v0, 0xE($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XE);
    // 0x80238A40: andi        $v0, $v0, 0xFA
    ctx->r2 = ctx->r2 & 0XFA;
    // 0x80238A44: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
L_80238A48:
    // 0x80238A48: jr          $ra
    // 0x80238A4C: nop

    TRACE_RETURN()
    return;
    // 0x80238A4C: nop

;}
RECOMP_FUNC void func_802365C4_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802365C4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802365C8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x802365CC: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x802365D0: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x802365D4: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x802365D8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802365DC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802365E0: lbu         $v1, 0xA($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0XA);
    // 0x802365E4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802365E8: addiu       $v0, $v0, 0x49B0
    ctx->r2 = ADD32(ctx->r2, 0X49B0);
    // 0x802365EC: sw          $v0, 0x37C($s2)
    MEM_W(0X37C, ctx->r18) = ctx->r2;
    // 0x802365F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802365F4: beq         $v1, $v0, L_8023663C
    if (ctx->r3 == ctx->r2) {
        // 0x802365F8: addiu       $s3, $s2, 0x328
        ctx->r19 = ADD32(ctx->r18, 0X328);
            goto L_8023663C;
    }
    // 0x802365F8: addiu       $s3, $s2, 0x328
    ctx->r19 = ADD32(ctx->r18, 0X328);
    // 0x802365FC: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80236600: beql        $v0, $zero, L_80236618
    if (ctx->r2 == 0) {
        // 0x80236604: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80236618;
    }
    goto skip_0;
    // 0x80236604: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80236608: beq         $v1, $zero, L_80236628
    if (ctx->r3 == 0) {
        // 0x8023660C: nop
    
            goto L_80236628;
    }
    // 0x8023660C: nop

    // 0x80236610: j           L_80236728
    // 0x80236614: nop

        goto L_80236728;
    // 0x80236614: nop

L_80236618:
    // 0x80236618: beq         $v1, $v0, L_80236680
    if (ctx->r3 == ctx->r2) {
        // 0x8023661C: addiu       $a0, $s2, 0x14
        ctx->r4 = ADD32(ctx->r18, 0X14);
            goto L_80236680;
    }
    // 0x8023661C: addiu       $a0, $s2, 0x14
    ctx->r4 = ADD32(ctx->r18, 0X14);
    // 0x80236620: j           L_80236728
    // 0x80236624: nop

        goto L_80236728;
    // 0x80236624: nop

L_80236628:
    // 0x80236628: lw          $v0, 0x35C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X35C);
    // 0x8023662C: lbu         $v0, 0xF($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XF);
    // 0x80236630: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x80236634: beq         $v0, $zero, L_80236728
    if (ctx->r2 == 0) {
        // 0x80236638: nop
    
            goto L_80236728;
    }
    // 0x80236638: nop

L_8023663C:
    // 0x8023663C: lbu         $v0, 0xA($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XA);
    // 0x80236640: addiu       $a0, $zero, 0xE1
    ctx->r4 = ADD32(0, 0XE1);
    // 0x80236644: addiu       $s0, $s2, 0x14
    ctx->r16 = ADD32(ctx->r18, 0X14);
    // 0x80236648: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023664C: sb          $v0, 0xA($s2)
    MEM_B(0XA, ctx->r18) = ctx->r2;
    // 0x80236650: lhu         $v1, 0x0($s3)
    ctx->r3 = MEM_HU(ctx->r19, 0X0);
    // 0x80236654: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80236658: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8023665C: sh          $v0, 0x38($s3)
    MEM_H(0X38, ctx->r19) = ctx->r2;
    // 0x80236660: sh          $zero, 0x8($s3)
    MEM_H(0X8, ctx->r19) = 0;
    // 0x80236664: ori         $v1, $v1, 0x4
    ctx->r3 = ctx->r3 | 0X4;
    // 0x80236668: jal         0x8002A33C
    // 0x8023666C: sh          $v1, 0x0($s3)
    MEM_H(0X0, ctx->r19) = ctx->r3;
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x8023666C: sh          $v1, 0x0($s3)
    MEM_H(0X0, ctx->r19) = ctx->r3;
    after_0:
    // 0x80236670: addiu       $a0, $zero, 0xE2
    ctx->r4 = ADD32(0, 0XE2);
    // 0x80236674: jal         0x8002A33C
    // 0x80236678: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x80236678: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8023667C: addiu       $a0, $s2, 0x14
    ctx->r4 = ADD32(ctx->r18, 0X14);
L_80236680:
    // 0x80236680: lw          $a1, 0x54($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X54);
    // 0x80236684: lh          $a2, 0x56($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X56);
    // 0x80236688: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    // 0x8023668C: jal         0x8004F820
    // 0x80236690: addiu       $a1, $a1, 0x3E8
    ctx->r5 = ADD32(ctx->r5, 0X3E8);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x80236690: addiu       $a1, $a1, 0x3E8
    ctx->r5 = ADD32(ctx->r5, 0X3E8);
    after_2:
    // 0x80236694: lhu         $v1, 0x56($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X56);
    // 0x80236698: addiu       $a0, $s2, 0x198
    ctx->r4 = ADD32(ctx->r18, 0X198);
    // 0x8023669C: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x802366A0: addu        $v1, $v1, $s1
    ctx->r3 = ADD32(ctx->r3, ctx->r17);
    // 0x802366A4: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x802366A8: sh          $v1, 0x56($s2)
    MEM_H(0X56, ctx->r18) = ctx->r3;
    // 0x802366AC: lw          $a1, 0x54($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X54);
    // 0x802366B0: lh          $a2, 0x40($s3)
    ctx->r6 = MEM_H(ctx->r19, 0X40);
    // 0x802366B4: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    // 0x802366B8: jal         0x8004F978
    // 0x802366BC: addiu       $a1, $a1, 0x3E8
    ctx->r5 = ADD32(ctx->r5, 0X3E8);
    func_8004F978_2AD78(rdram, ctx);
        goto after_3;
    // 0x802366BC: addiu       $a1, $a1, 0x3E8
    ctx->r5 = ADD32(ctx->r5, 0X3E8);
    after_3:
    // 0x802366C0: addiu       $a0, $s2, 0x1A8
    ctx->r4 = ADD32(ctx->r18, 0X1A8);
    // 0x802366C4: lh          $a2, 0x42($s3)
    ctx->r6 = MEM_H(ctx->r19, 0X42);
    // 0x802366C8: lw          $a1, 0x54($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X54);
    // 0x802366CC: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    // 0x802366D0: lhu         $v1, 0x40($s3)
    ctx->r3 = MEM_HU(ctx->r19, 0X40);
    // 0x802366D4: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x802366D8: addiu       $a1, $a1, 0x3E8
    ctx->r5 = ADD32(ctx->r5, 0X3E8);
    // 0x802366DC: addu        $v1, $v1, $s0
    ctx->r3 = ADD32(ctx->r3, ctx->r16);
    // 0x802366E0: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x802366E4: jal         0x8004F978
    // 0x802366E8: sh          $v1, 0x40($s3)
    MEM_H(0X40, ctx->r19) = ctx->r3;
    func_8004F978_2AD78(rdram, ctx);
        goto after_4;
    // 0x802366E8: sh          $v1, 0x40($s3)
    MEM_H(0X40, ctx->r19) = ctx->r3;
    after_4:
    // 0x802366EC: lhu         $v1, 0x42($s3)
    ctx->r3 = MEM_HU(ctx->r19, 0X42);
    // 0x802366F0: sll         $s1, $s1, 16
    ctx->r17 = S32(ctx->r17 << 16);
    // 0x802366F4: sltiu       $s1, $s1, 0x1
    ctx->r17 = ctx->r17 < 0X1 ? 1 : 0;
    // 0x802366F8: sll         $s0, $s0, 16
    ctx->r16 = S32(ctx->r16 << 16);
    // 0x802366FC: sltiu       $s0, $s0, 0x1
    ctx->r16 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x80236700: and         $s1, $s1, $s0
    ctx->r17 = ctx->r17 & ctx->r16;
    // 0x80236704: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80236708: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8023670C: beq         $s1, $zero, L_80236728
    if (ctx->r17 == 0) {
        // 0x80236710: sh          $v1, 0x42($s3)
        MEM_H(0X42, ctx->r19) = ctx->r3;
            goto L_80236728;
    }
    // 0x80236710: sh          $v1, 0x42($s3)
    MEM_H(0X42, ctx->r19) = ctx->r3;
    // 0x80236714: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80236718: bne         $v0, $zero, L_80236728
    if (ctx->r2 != 0) {
        // 0x8023671C: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80236728;
    }
    // 0x8023671C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80236720: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
    // 0x80236724: sh          $zero, 0xA($s2)
    MEM_H(0XA, ctx->r18) = 0;
L_80236728:
    // 0x80236728: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8023672C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80236730: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80236734: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80236738: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023673C: jr          $ra
    // 0x80236740: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80236740: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8024A820_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024A820: lbu         $v0, 0xDE($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XDE);
    // 0x8024A824: lw          $v1, 0xD0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XD0);
    // 0x8024A828: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8024A82C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8024A830: lbu         $a1, 0x2($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X2);
    // 0x8024A834: lbu         $v1, 0xDF($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XDF);
    // 0x8024A838: andi        $v0, $v1, 0x20
    ctx->r2 = ctx->r3 & 0X20;
    // 0x8024A83C: bne         $v0, $zero, L_8024A8E8
    if (ctx->r2 != 0) {
        // 0x8024A840: andi        $a2, $a1, 0xE0
        ctx->r6 = ctx->r5 & 0XE0;
            goto L_8024A8E8;
    }
    // 0x8024A840: andi        $a2, $a1, 0xE0
    ctx->r6 = ctx->r5 & 0XE0;
    // 0x8024A844: andi        $v0, $v1, 0x10
    ctx->r2 = ctx->r3 & 0X10;
    // 0x8024A848: beq         $v0, $zero, L_8024A8BC
    if (ctx->r2 == 0) {
        // 0x8024A84C: andi        $v0, $v1, 0x2
        ctx->r2 = ctx->r3 & 0X2;
            goto L_8024A8BC;
    }
    // 0x8024A84C: andi        $v0, $v1, 0x2
    ctx->r2 = ctx->r3 & 0X2;
    // 0x8024A850: lh          $v0, 0x44($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X44);
    // 0x8024A854: bne         $v0, $zero, L_8024A8E8
    if (ctx->r2 != 0) {
        // 0x8024A858: sh          $zero, 0xE0($a0)
        MEM_H(0XE0, ctx->r4) = 0;
            goto L_8024A8E8;
    }
    // 0x8024A858: sh          $zero, 0xE0($a0)
    MEM_H(0XE0, ctx->r4) = 0;
    // 0x8024A85C: andi        $v0, $a1, 0x80
    ctx->r2 = ctx->r5 & 0X80;
    // 0x8024A860: beq         $v0, $zero, L_8024A8A8
    if (ctx->r2 == 0) {
        // 0x8024A864: andi        $v1, $a2, 0xFF
        ctx->r3 = ctx->r6 & 0XFF;
            goto L_8024A8A8;
    }
    // 0x8024A864: andi        $v1, $a2, 0xFF
    ctx->r3 = ctx->r6 & 0XFF;
    // 0x8024A868: lbu         $v0, 0xDF($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XDF);
    // 0x8024A86C: ori         $v0, $v0, 0x60
    ctx->r2 = ctx->r2 | 0X60;
    // 0x8024A870: sb          $v0, 0xDF($a0)
    MEM_B(0XDF, ctx->r4) = ctx->r2;
    // 0x8024A874: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8024A878: bne         $v1, $v0, L_8024A88C
    if (ctx->r3 != ctx->r2) {
        // 0x8024A87C: addiu       $v0, $zero, 0xA0
        ctx->r2 = ADD32(0, 0XA0);
            goto L_8024A88C;
    }
    // 0x8024A87C: addiu       $v0, $zero, 0xA0
    ctx->r2 = ADD32(0, 0XA0);
    // 0x8024A880: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x8024A884: j           L_8024A8B4
    // 0x8024A888: sh          $v0, 0xEC($a0)
    MEM_H(0XEC, ctx->r4) = ctx->r2;
        goto L_8024A8B4;
    // 0x8024A888: sh          $v0, 0xEC($a0)
    MEM_H(0XEC, ctx->r4) = ctx->r2;
L_8024A88C:
    // 0x8024A88C: bne         $v1, $v0, L_8024A8A0
    if (ctx->r3 != ctx->r2) {
        // 0x8024A890: addiu       $v0, $zero, 0xF0
        ctx->r2 = ADD32(0, 0XF0);
            goto L_8024A8A0;
    }
    // 0x8024A890: addiu       $v0, $zero, 0xF0
    ctx->r2 = ADD32(0, 0XF0);
    // 0x8024A894: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x8024A898: j           L_8024A8B4
    // 0x8024A89C: sh          $v0, 0xEC($a0)
    MEM_H(0XEC, ctx->r4) = ctx->r2;
        goto L_8024A8B4;
    // 0x8024A89C: sh          $v0, 0xEC($a0)
    MEM_H(0XEC, ctx->r4) = ctx->r2;
L_8024A8A0:
    // 0x8024A8A0: j           L_8024A8B4
    // 0x8024A8A4: sh          $v0, 0xEC($a0)
    MEM_H(0XEC, ctx->r4) = ctx->r2;
        goto L_8024A8B4;
    // 0x8024A8A4: sh          $v0, 0xEC($a0)
    MEM_H(0XEC, ctx->r4) = ctx->r2;
L_8024A8A8:
    // 0x8024A8A8: lbu         $v0, 0xDF($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XDF);
    // 0x8024A8AC: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x8024A8B0: sb          $v0, 0xDF($a0)
    MEM_B(0XDF, ctx->r4) = ctx->r2;
L_8024A8B4:
    // 0x8024A8B4: j           L_8024A8E8
    // 0x8024A8B8: sh          $zero, 0x4C($a0)
    MEM_H(0X4C, ctx->r4) = 0;
        goto L_8024A8E8;
    // 0x8024A8B8: sh          $zero, 0x4C($a0)
    MEM_H(0X4C, ctx->r4) = 0;
L_8024A8BC:
    // 0x8024A8BC: bne         $v0, $zero, L_8024A8E8
    if (ctx->r2 != 0) {
        // 0x8024A8C0: andi        $v0, $v1, 0x1
        ctx->r2 = ctx->r3 & 0X1;
            goto L_8024A8E8;
    }
    // 0x8024A8C0: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x8024A8C4: bne         $v0, $zero, L_8024A8E4
    if (ctx->r2 != 0) {
        // 0x8024A8C8: addiu       $v0, $zero, 0x140
        ctx->r2 = ADD32(0, 0X140);
            goto L_8024A8E4;
    }
    // 0x8024A8C8: addiu       $v0, $zero, 0x140
    ctx->r2 = ADD32(0, 0X140);
    // 0x8024A8CC: lb          $v0, 0xD($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XD);
    // 0x8024A8D0: lw          $v1, 0xD4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XD4);
    // 0x8024A8D4: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8024A8D8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8024A8DC: lbu         $v0, 0x2($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X2);
    // 0x8024A8E0: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
L_8024A8E4:
    // 0x8024A8E4: sh          $v0, 0xE0($a0)
    MEM_H(0XE0, ctx->r4) = ctx->r2;
L_8024A8E8:
    // 0x8024A8E8: jr          $ra
    // 0x8024A8EC: nop

    TRACE_RETURN()
    return;
    // 0x8024A8EC: nop

;}
RECOMP_FUNC void func_8023E5AC_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023E5AC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023E5B0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023E5B4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023E5B8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023E5BC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023E5C0: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8023E5C4: bne         $v0, $zero, L_8023E5E0
    if (ctx->r2 != 0) {
        // 0x8023E5C8: addiu       $s1, $s0, 0x440
        ctx->r17 = ADD32(ctx->r16, 0X440);
            goto L_8023E5E0;
    }
    // 0x8023E5C8: addiu       $s1, $s0, 0x440
    ctx->r17 = ADD32(ctx->r16, 0X440);
    // 0x8023E5CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023E5D0: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x8023E5D4: addiu       $v0, $zero, 0x43
    ctx->r2 = ADD32(0, 0X43);
    // 0x8023E5D8: j           L_8023E658
    // 0x8023E5DC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_8023E658;
    // 0x8023E5DC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8023E5E0:
    // 0x8023E5E0: lbu         $a0, 0xA($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XA);
    // 0x8023E5E4: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x8023E5E8: beq         $v1, $zero, L_8023E600
    if (ctx->r3 == 0) {
        // 0x8023E5EC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023E600;
    }
    // 0x8023E5EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023E5F0: beq         $v1, $v0, L_8023E61C
    if (ctx->r3 == ctx->r2) {
        // 0x8023E5F4: nop
    
            goto L_8023E61C;
    }
    // 0x8023E5F4: nop

    // 0x8023E5F8: j           L_8023E658
    // 0x8023E5FC: nop

        goto L_8023E658;
    // 0x8023E5FC: nop

L_8023E600:
    // 0x8023E600: lbu         $v1, 0xA4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA4);
    // 0x8023E604: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8023E608: bne         $v1, $v0, L_8023E658
    if (ctx->r3 != ctx->r2) {
        // 0x8023E60C: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_8023E658;
    }
    // 0x8023E60C: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x8023E610: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8023E614: j           L_8023E658
    // 0x8023E618: sh          $zero, 0x444($s0)
    MEM_H(0X444, ctx->r16) = 0;
        goto L_8023E658;
    // 0x8023E618: sh          $zero, 0x444($s0)
    MEM_H(0X444, ctx->r16) = 0;
L_8023E61C:
    // 0x8023E61C: lhu         $v0, 0x444($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X444);
    // 0x8023E620: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023E624: sh          $v0, 0x444($s0)
    MEM_H(0X444, ctx->r16) = ctx->r2;
    // 0x8023E628: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8023E62C: bne         $v0, $zero, L_8023E63C
    if (ctx->r2 != 0) {
        // 0x8023E630: nop
    
            goto L_8023E63C;
    }
    // 0x8023E630: nop

    // 0x8023E634: jal         0x8023F198
    // 0x8023E638: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8023F198_ovl10(rdram, ctx);
        goto after_0;
    // 0x8023E638: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
L_8023E63C:
    // 0x8023E63C: lh          $v0, 0x444($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X444);
    // 0x8023E640: slti        $v0, $v0, 0x3D
    ctx->r2 = SIGNED(ctx->r2) < 0X3D ? 1 : 0;
    // 0x8023E644: bne         $v0, $zero, L_8023E658
    if (ctx->r2 != 0) {
        // 0x8023E648: nop
    
            goto L_8023E658;
    }
    // 0x8023E648: nop

    // 0x8023E64C: lhu         $v0, 0x440($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X440);
    // 0x8023E650: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8023E654: sh          $v0, 0x440($s0)
    MEM_H(0X440, ctx->r16) = ctx->r2;
L_8023E658:
    // 0x8023E658: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8023E65C: andi        $v0, $v0, 0x400
    ctx->r2 = ctx->r2 & 0X400;
    // 0x8023E660: bne         $v0, $zero, L_8023E66C
    if (ctx->r2 != 0) {
        // 0x8023E664: addiu       $a2, $zero, 0x10
        ctx->r6 = ADD32(0, 0X10);
            goto L_8023E66C;
    }
    // 0x8023E664: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x8023E668: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
L_8023E66C:
    // 0x8023E66C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023E670: jal         0x8023F448
    // 0x8023E674: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8023F448_ovl10(rdram, ctx);
        goto after_1;
    // 0x8023E674: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x8023E678: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8023E67C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023E680: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023E684: jr          $ra
    // 0x8023E688: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023E688: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023D638_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023D638: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023D63C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8023D640: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023D644: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8023D648: lw          $v0, 0x520($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X520);
    // 0x8023D64C: sltiu       $v0, $v0, 0x1801
    ctx->r2 = ctx->r2 < 0X1801 ? 1 : 0;
    // 0x8023D650: beq         $v0, $zero, L_8023D660
    if (ctx->r2 == 0) {
        // 0x8023D654: nop
    
            goto L_8023D660;
    }
    // 0x8023D654: nop

    // 0x8023D658: jal         0x80049EBC
    // 0x8023D65C: nop

    func_80049EBC_252BC(rdram, ctx);
        goto after_0;
    // 0x8023D65C: nop

    after_0:
L_8023D660:
    // 0x8023D660: lhu         $v0, 0x440($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X440);
    // 0x8023D664: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8023D668: beq         $v0, $zero, L_8023D678
    if (ctx->r2 == 0) {
        // 0x8023D66C: nop
    
            goto L_8023D678;
    }
    // 0x8023D66C: nop

    // 0x8023D670: jal         0x8023FCB8
    // 0x8023D674: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8023FCB8_ovl10(rdram, ctx);
        goto after_1;
    // 0x8023D674: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_8023D678:
    // 0x8023D678: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8023D67C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023D680: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8023D684: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023D688: lw          $v0, 0x18E4($at)
    ctx->r2 = MEM_W(ctx->r1, 0X18E4);
    // 0x8023D68C: jalr        $v0
    // 0x8023D690: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x8023D690: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8023D694: lhu         $v0, 0x440($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X440);
    // 0x8023D698: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8023D69C: beq         $v0, $zero, L_8023D6BC
    if (ctx->r2 == 0) {
        // 0x8023D6A0: nop
    
            goto L_8023D6BC;
    }
    // 0x8023D6A0: nop

    // 0x8023D6A4: jal         0x8023F51C
    // 0x8023D6A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8023F51C_ovl10(rdram, ctx);
        goto after_3;
    // 0x8023D6A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8023D6AC: lhu         $v0, 0x440($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X440);
    // 0x8023D6B0: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8023D6B4: andi        $v0, $v0, 0xFFFE
    ctx->r2 = ctx->r2 & 0XFFFE;
    // 0x8023D6B8: sh          $v0, 0x440($s0)
    MEM_H(0X440, ctx->r16) = ctx->r2;
L_8023D6BC:
    // 0x8023D6BC: lh          $v0, 0x44A($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X44A);
    // 0x8023D6C0: beq         $v0, $zero, L_8023D6D0
    if (ctx->r2 == 0) {
        // 0x8023D6C4: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8023D6D0;
    }
    // 0x8023D6C4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8023D6C8: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8023D6CC: sh          $v0, 0x44A($s0)
    MEM_H(0X44A, ctx->r16) = ctx->r2;
L_8023D6D0:
    // 0x8023D6D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023D6D4: lui         $a3, 0x100
    ctx->r7 = S32(0X100 << 16);
    // 0x8023D6D8: ori         $a3, $a3, 0x8
    ctx->r7 = ctx->r7 | 0X8;
    // 0x8023D6DC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8023D6E0: jal         0x80047284
    // 0x8023D6E4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_4;
    // 0x8023D6E4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
    // 0x8023D6E8: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8023D6EC: addiu       $a0, $s0, 0x4C0
    ctx->r4 = ADD32(ctx->r16, 0X4C0);
L_8023D6F0:
    // 0x8023D6F0: sw          $zero, 0x10($a0)
    MEM_W(0X10, ctx->r4) = 0;
    // 0x8023D6F4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023D6F8: bgez        $v0, L_8023D6F0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8023D6FC: addiu       $a0, $a0, -0x10
        ctx->r4 = ADD32(ctx->r4, -0X10);
            goto L_8023D6F0;
    }
    // 0x8023D6FC: addiu       $a0, $a0, -0x10
    ctx->r4 = ADD32(ctx->r4, -0X10);
    // 0x8023D700: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8023D704: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8023D708: jr          $ra
    // 0x8023D70C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023D70C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022AED0_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AED0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022AED4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022AED8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022AEDC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022AEE0: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x8022AEE4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022AEE8: beq         $v1, $v0, L_8022AFC8
    if (ctx->r3 == ctx->r2) {
        // 0x8022AEEC: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8022AFC8;
    }
    // 0x8022AEEC: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022AEF0: beq         $v0, $zero, L_8022B024
    if (ctx->r2 == 0) {
        // 0x8022AEF4: nop
    
            goto L_8022B024;
    }
    // 0x8022AEF4: nop

    // 0x8022AEF8: bne         $v1, $zero, L_8022B024
    if (ctx->r3 != 0) {
        // 0x8022AEFC: nop
    
            goto L_8022B024;
    }
    // 0x8022AEFC: nop

    // 0x8022AF00: jal         0x8022BE40
    // 0x8022AF04: nop

    func_8022BE40_ovl10(rdram, ctx);
        goto after_0;
    // 0x8022AF04: nop

    after_0:
    // 0x8022AF08: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022AF0C: bne         $v0, $zero, L_8022AFA4
    if (ctx->r2 != 0) {
        // 0x8022AF10: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_8022AFA4;
    }
    // 0x8022AF10: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022AF14: jal         0x8006033C
    // 0x8022AF18: addiu       $a0, $zero, 0x208
    ctx->r4 = ADD32(0, 0X208);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x8022AF18: addiu       $a0, $zero, 0x208
    ctx->r4 = ADD32(0, 0X208);
    after_1:
    // 0x8022AF1C: beq         $v0, $zero, L_8022AF34
    if (ctx->r2 == 0) {
        // 0x8022AF20: nop
    
            goto L_8022AF34;
    }
    // 0x8022AF20: nop

    // 0x8022AF24: jal         0x80060690
    // 0x8022AF28: addiu       $a0, $zero, 0x50
    ctx->r4 = ADD32(0, 0X50);
    func_80060690_3BA90(rdram, ctx);
        goto after_2;
    // 0x8022AF28: addiu       $a0, $zero, 0x50
    ctx->r4 = ADD32(0, 0X50);
    after_2:
    // 0x8022AF2C: j           L_8022AFA4
    // 0x8022AF30: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
        goto L_8022AFA4;
    // 0x8022AF30: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_8022AF34:
    // 0x8022AF34: jal         0x8006033C
    // 0x8022AF38: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_8006033C_3B73C(rdram, ctx);
        goto after_3;
    // 0x8022AF38: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_3:
    // 0x8022AF3C: beq         $v0, $zero, L_8022AF88
    if (ctx->r2 == 0) {
        // 0x8022AF40: nop
    
            goto L_8022AF88;
    }
    // 0x8022AF40: nop

    // 0x8022AF44: jal         0x80229F50
    // 0x8022AF48: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_80229F50_ovl10(rdram, ctx);
        goto after_4;
    // 0x8022AF48: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_4:
    // 0x8022AF4C: jal         0x8006033C
    // 0x8022AF50: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8006033C_3B73C(rdram, ctx);
        goto after_5;
    // 0x8022AF50: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_5:
    // 0x8022AF54: beq         $v0, $zero, L_8022AF74
    if (ctx->r2 == 0) {
        // 0x8022AF58: nop
    
            goto L_8022AF74;
    }
    // 0x8022AF58: nop

    // 0x8022AF5C: jal         0x8022A170
    // 0x8022AF60: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8022A170_ovl10(rdram, ctx);
        goto after_6;
    // 0x8022AF60: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_6:
    // 0x8022AF64: jal         0x8022A170
    // 0x8022AF68: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_8022A170_ovl10(rdram, ctx);
        goto after_7;
    // 0x8022AF68: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_7:
    // 0x8022AF6C: j           L_8022AFA4
    // 0x8022AF70: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
        goto L_8022AFA4;
    // 0x8022AF70: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_8022AF74:
    // 0x8022AF74: jal         0x80225988
    // 0x8022AF78: nop

    func_80225988_ovl10(rdram, ctx);
        goto after_8;
    // 0x8022AF78: nop

    after_8:
    // 0x8022AF7C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022AF80: j           L_8022B024
    // 0x8022AF84: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
        goto L_8022B024;
    // 0x8022AF84: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_8022AF88:
    // 0x8022AF88: jal         0x8006033C
    // 0x8022AF8C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    func_8006033C_3B73C(rdram, ctx);
        goto after_9;
    // 0x8022AF8C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_9:
    // 0x8022AF90: beq         $v0, $zero, L_8022AFAC
    if (ctx->r2 == 0) {
        // 0x8022AF94: nop
    
            goto L_8022AFAC;
    }
    // 0x8022AF94: nop

    // 0x8022AF98: jal         0x80229F50
    // 0x8022AF9C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80229F50_ovl10(rdram, ctx);
        goto after_10;
    // 0x8022AF9C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_10:
    // 0x8022AFA0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_8022AFA4:
    // 0x8022AFA4: j           L_8022B024
    // 0x8022AFA8: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
        goto L_8022B024;
    // 0x8022AFA8: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_8022AFAC:
    // 0x8022AFAC: jal         0x80060690
    // 0x8022AFB0: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    func_80060690_3BA90(rdram, ctx);
        goto after_11;
    // 0x8022AFB0: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    after_11:
    // 0x8022AFB4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022AFB8: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8022AFBC: sb          $zero, -0x3A4C($at)
    MEM_B(-0X3A4C, ctx->r1) = 0;
    // 0x8022AFC0: j           L_8022B024
    // 0x8022AFC4: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
        goto L_8022B024;
    // 0x8022AFC4: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_8022AFC8:
    // 0x8022AFC8: jal         0x8006033C
    // 0x8022AFCC: addiu       $a0, $zero, 0x641
    ctx->r4 = ADD32(0, 0X641);
    func_8006033C_3B73C(rdram, ctx);
        goto after_12;
    // 0x8022AFCC: addiu       $a0, $zero, 0x641
    ctx->r4 = ADD32(0, 0X641);
    after_12:
    // 0x8022AFD0: bne         $v0, $zero, L_8022AFE8
    if (ctx->r2 != 0) {
        // 0x8022AFD4: nop
    
            goto L_8022AFE8;
    }
    // 0x8022AFD4: nop

    // 0x8022AFD8: jal         0x8006033C
    // 0x8022AFDC: addiu       $a0, $zero, 0x642
    ctx->r4 = ADD32(0, 0X642);
    func_8006033C_3B73C(rdram, ctx);
        goto after_13;
    // 0x8022AFDC: addiu       $a0, $zero, 0x642
    ctx->r4 = ADD32(0, 0X642);
    after_13:
    // 0x8022AFE0: beq         $v0, $zero, L_8022B024
    if (ctx->r2 == 0) {
        // 0x8022AFE4: nop
    
            goto L_8022B024;
    }
    // 0x8022AFE4: nop

L_8022AFE8:
    // 0x8022AFE8: jal         0x80060690
    // 0x8022AFEC: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    func_80060690_3BA90(rdram, ctx);
        goto after_14;
    // 0x8022AFEC: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_14:
    // 0x8022AFF0: jal         0x8006036C
    // 0x8022AFF4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8006036C_3B76C(rdram, ctx);
        goto after_15;
    // 0x8022AFF4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_15:
    // 0x8022AFF8: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022AFFC: addiu       $a0, $a0, 0x7F8
    ctx->r4 = ADD32(ctx->r4, 0X7F8);
    // 0x8022B000: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x8022B004: jal         0x8006100C
    // 0x8022B008: addiu       $a1, $a1, 0x868
    ctx->r5 = ADD32(ctx->r5, 0X868);
    func_8006100C_3C40C(rdram, ctx);
        goto after_16;
    // 0x8022B008: addiu       $a1, $a1, 0x868
    ctx->r5 = ADD32(ctx->r5, 0X868);
    after_16:
    // 0x8022B00C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022B010: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    // 0x8022B014: jal         0x8022A170
    // 0x8022B018: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8022A170_ovl10(rdram, ctx);
        goto after_17;
    // 0x8022B018: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_17:
    // 0x8022B01C: jal         0x8022A170
    // 0x8022B020: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_8022A170_ovl10(rdram, ctx);
        goto after_18;
    // 0x8022B020: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_18:
L_8022B024:
    // 0x8022B024: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022B028: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B02C: jr          $ra
    // 0x8022B030: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B030: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8024D6D4_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024D6D4: lhu         $v0, 0x18($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X18);
    // 0x8024D6D8: lw          $a1, 0x20($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X20);
    // 0x8024D6DC: lhu         $v1, 0x1A($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X1A);
    // 0x8024D6E0: sh          $v0, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r2;
    // 0x8024D6E4: sh          $v1, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r3;
    // 0x8024D6E8: lb          $v1, 0x3($a1)
    ctx->r3 = MEM_B(ctx->r5, 0X3);
    // 0x8024D6EC: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8024D6F0: bgez        $v1, L_8024D730
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8024D6F4: addu        $a1, $v1, $zero
        ctx->r5 = ADD32(ctx->r3, 0);
            goto L_8024D730;
    }
    // 0x8024D6F4: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x8024D6F8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8024D6FC: bne         $v1, $v0, L_8024D71C
    if (ctx->r3 != ctx->r2) {
        // 0x8024D700: andi        $v0, $a1, 0x7F
        ctx->r2 = ctx->r5 & 0X7F;
            goto L_8024D71C;
    }
    // 0x8024D700: andi        $v0, $a1, 0x7F
    ctx->r2 = ctx->r5 & 0X7F;
    // 0x8024D704: lb          $v1, 0xC($a0)
    ctx->r3 = MEM_B(ctx->r4, 0XC);
    // 0x8024D708: lb          $v0, 0xD($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XD);
    // 0x8024D70C: bne         $v1, $v0, L_8024D73C
    if (ctx->r3 != ctx->r2) {
        // 0x8024D710: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_8024D73C;
    }
    // 0x8024D710: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8024D714: j           L_8024D760
    // 0x8024D718: nop

        goto L_8024D760;
    // 0x8024D718: nop

L_8024D71C:
    // 0x8024D71C: lw          $v1, 0x1C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X1C);
    // 0x8024D720: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8024D724: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8024D728: j           L_8024D73C
    // 0x8024D72C: sw          $v1, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r3;
        goto L_8024D73C;
    // 0x8024D72C: sw          $v1, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r3;
L_8024D730:
    // 0x8024D730: lw          $v0, 0x20($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X20);
    // 0x8024D734: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8024D738: sw          $v0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r2;
L_8024D73C:
    // 0x8024D73C: lw          $a1, 0x20($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X20);
    // 0x8024D740: lbu         $v0, 0x2($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X2);
    // 0x8024D744: sb          $zero, 0xD($a0)
    MEM_B(0XD, ctx->r4) = 0;
    // 0x8024D748: sb          $v0, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r2;
    // 0x8024D74C: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x8024D750: sh          $v0, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r2;
    // 0x8024D754: lbu         $v1, 0x1($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X1);
    // 0x8024D758: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8024D75C: sh          $v1, 0x1A($a0)
    MEM_H(0X1A, ctx->r4) = ctx->r3;
L_8024D760:
    // 0x8024D760: jr          $ra
    // 0x8024D764: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x8024D764: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    // 0x8024D768: nop

    // 0x8024D76C: nop

;}
RECOMP_FUNC void func_80237B28_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237B28: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80237B2C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80237B30: lbu         $v1, 0xA($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XA);
    // 0x80237B34: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80237B38: beq         $v1, $v0, L_80237B88
    if (ctx->r3 == ctx->r2) {
        // 0x80237B3C: addiu       $a1, $a0, 0x308
        ctx->r5 = ADD32(ctx->r4, 0X308);
            goto L_80237B88;
    }
    // 0x80237B3C: addiu       $a1, $a0, 0x308
    ctx->r5 = ADD32(ctx->r4, 0X308);
    // 0x80237B40: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80237B44: beql        $v0, $zero, L_80237B5C
    if (ctx->r2 == 0) {
        // 0x80237B48: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80237B5C;
    }
    goto skip_0;
    // 0x80237B48: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80237B4C: beq         $v1, $zero, L_80237B6C
    if (ctx->r3 == 0) {
        // 0x80237B50: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_80237B6C;
    }
    // 0x80237B50: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80237B54: j           L_80237C20
    // 0x80237B58: nop

        goto L_80237C20;
    // 0x80237B58: nop

L_80237B5C:
    // 0x80237B5C: beq         $v1, $v0, L_80237BFC
    if (ctx->r3 == ctx->r2) {
        // 0x80237B60: nop
    
            goto L_80237BFC;
    }
    // 0x80237B60: nop

    // 0x80237B64: j           L_80237C20
    // 0x80237B68: nop

        goto L_80237C20;
    // 0x80237B68: nop

L_80237B6C:
    // 0x80237B6C: lhu         $v0, 0x308($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X308);
    // 0x80237B70: sb          $v1, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r3;
    // 0x80237B74: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x80237B78: sb          $v1, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r3;
    // 0x80237B7C: sh          $zero, 0x310($a0)
    MEM_H(0X310, ctx->r4) = 0;
    // 0x80237B80: ori         $v0, $v0, 0x100
    ctx->r2 = ctx->r2 | 0X100;
    // 0x80237B84: sh          $v0, 0x308($a0)
    MEM_H(0X308, ctx->r4) = ctx->r2;
L_80237B88:
    // 0x80237B88: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x80237B8C: lh          $v1, 0x44($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X44);
    // 0x80237B90: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80237B94: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80237B98: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80237B9C: lhu         $v0, 0x1630($at)
    ctx->r2 = MEM_HU(ctx->r1, 0X1630);
    // 0x80237BA0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80237BA4: sra         $v0, $v0, 17
    ctx->r2 = S32(SIGNED(ctx->r2) >> 17);
    // 0x80237BA8: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80237BAC: beq         $v0, $zero, L_80237BE0
    if (ctx->r2 == 0) {
        // 0x80237BB0: addu        $a2, $v1, $zero
        ctx->r6 = ADD32(ctx->r3, 0);
            goto L_80237BE0;
    }
    // 0x80237BB0: addu        $a2, $v1, $zero
    ctx->r6 = ADD32(ctx->r3, 0);
    // 0x80237BB4: lhu         $a1, 0x4C($a0)
    ctx->r5 = MEM_HU(ctx->r4, 0X4C);
    // 0x80237BB8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80237BBC: subu        $a1, $a2, $a1
    ctx->r5 = SUB32(ctx->r6, ctx->r5);
    // 0x80237BC0: sh          $a1, 0x44($a0)
    MEM_H(0X44, ctx->r4) = ctx->r5;
    // 0x80237BC4: negu        $a1, $a1
    ctx->r5 = SUB32(0, ctx->r5);
    // 0x80237BC8: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x80237BCC: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x80237BD0: jal         0x8004DA90
    // 0x80237BD4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x80237BD4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80237BD8: j           L_80237C20
    // 0x80237BDC: nop

        goto L_80237C20;
    // 0x80237BDC: nop

L_80237BE0:
    // 0x80237BE0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80237BE4: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x80237BE8: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80237BEC: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x80237BF0: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80237BF4: sh          $zero, 0x44($a0)
    MEM_H(0X44, ctx->r4) = 0;
    // 0x80237BF8: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
L_80237BFC:
    // 0x80237BFC: lhu         $v0, 0x4($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X4);
    // 0x80237C00: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80237C04: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
    // 0x80237C08: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80237C0C: bgez        $v0, L_80237C20
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80237C10: nop
    
            goto L_80237C20;
    }
    // 0x80237C10: nop

    // 0x80237C14: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x80237C18: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80237C1C: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
L_80237C20:
    // 0x80237C20: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80237C24: jr          $ra
    // 0x80237C28: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80237C28: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022ACF4_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022ACF4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022ACF8: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022ACFC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022AD00: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022AD04: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022AD08: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8022AD0C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022AD10: bne         $v0, $zero, L_8022AD38
    if (ctx->r2 != 0) {
        // 0x8022AD14: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8022AD38;
    }
    // 0x8022AD14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022AD18: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x8022AD1C: slti        $v0, $v0, 0xB6
    ctx->r2 = SIGNED(ctx->r2) < 0XB6 ? 1 : 0;
    // 0x8022AD20: bne         $v0, $zero, L_8022AD38
    if (ctx->r2 != 0) {
        // 0x8022AD24: nop
    
            goto L_8022AD38;
    }
    // 0x8022AD24: nop

    // 0x8022AD28: jal         0x80036E48
    // 0x8022AD2C: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    func_80036E48_12248(rdram, ctx);
        goto after_0;
    // 0x8022AD2C: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    after_0:
    // 0x8022AD30: jal         0x800600F8
    // 0x8022AD34: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    func_800600F8_3B4F8(rdram, ctx);
        goto after_1;
    // 0x8022AD34: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    after_1:
L_8022AD38:
    // 0x8022AD38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022AD3C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022AD40: jr          $ra
    // 0x8022AD44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022AD44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022AD48: nop

    // 0x8022AD4C: nop

;}
RECOMP_FUNC void func_8022AE20_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AE20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022AE24: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022AE28: jal         0x8006033C
    // 0x8022AE2C: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x8022AE2C: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    after_0:
    // 0x8022AE30: bne         $v0, $zero, L_8022AE7C
    if (ctx->r2 != 0) {
        // 0x8022AE34: addiu       $v0, $zero, 0xB
        ctx->r2 = ADD32(0, 0XB);
            goto L_8022AE7C;
    }
    // 0x8022AE34: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x8022AE38: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022AE3C: lb          $v1, -0x3BC6($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC6);
    // 0x8022AE40: beq         $v1, $v0, L_8022AE74
    if (ctx->r3 == ctx->r2) {
        // 0x8022AE44: nop
    
            goto L_8022AE74;
    }
    // 0x8022AE44: nop

    // 0x8022AE48: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8022AE4C: lb          $v0, -0x3BC7($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC7);
    // 0x8022AE50: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022AE54: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022AE58: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022AE5C: lw          $v0, 0x7B4($at)
    ctx->r2 = MEM_W(ctx->r1, 0X7B4);
    // 0x8022AE60: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x8022AE64: jalr        $v0
    // 0x8022AE68: addiu       $a0, $a0, -0x35A0
    ctx->r4 = ADD32(ctx->r4, -0X35A0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x8022AE68: addiu       $a0, $a0, -0x35A0
    ctx->r4 = ADD32(ctx->r4, -0X35A0);
    after_1:
    // 0x8022AE6C: j           L_8022AE7C
    // 0x8022AE70: nop

        goto L_8022AE7C;
    // 0x8022AE70: nop

L_8022AE74:
    // 0x8022AE74: jal         0x8006036C
    // 0x8022AE78: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    func_8006036C_3B76C(rdram, ctx);
        goto after_2;
    // 0x8022AE78: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    after_2:
L_8022AE7C:
    // 0x8022AE7C: jal         0x8006033C
    // 0x8022AE80: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    func_8006033C_3B73C(rdram, ctx);
        goto after_3;
    // 0x8022AE80: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    after_3:
    // 0x8022AE84: beq         $v0, $zero, L_8022AEC4
    if (ctx->r2 == 0) {
        // 0x8022AE88: nop
    
            goto L_8022AEC4;
    }
    // 0x8022AE88: nop

    // 0x8022AE8C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022AE90: lb          $v1, -0x3BC6($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC6);
    // 0x8022AE94: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8022AE98: lb          $v0, -0x3BC7($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC7);
    // 0x8022AE9C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8022AEA0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022AEA4: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8022AEA8: lw          $v1, 0x774($at)
    ctx->r3 = MEM_W(ctx->r1, 0X774);
    // 0x8022AEAC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022AEB0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022AEB4: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8022AEB8: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x8022AEBC: jalr        $v0
    // 0x8022AEC0: addiu       $a0, $a0, -0x35A0
    ctx->r4 = ADD32(ctx->r4, -0X35A0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x8022AEC0: addiu       $a0, $a0, -0x35A0
    ctx->r4 = ADD32(ctx->r4, -0X35A0);
    after_4:
L_8022AEC4:
    // 0x8022AEC4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022AEC8: jr          $ra
    // 0x8022AECC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022AECC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80232DC8_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232DC8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80232DCC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80232DD0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80232DD4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80232DD8: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80232DDC: lh          $a3, 0x34E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X34E);
    // 0x80232DE0: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80232DE4: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x80232DE8: jal         0x8004F820
    // 0x80232DEC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x80232DEC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x80232DF0: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80232DF4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80232DF8: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80232DFC: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x80232E00: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80232E04: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x80232E08: bne         $v0, $zero, L_80232E40
    if (ctx->r2 != 0) {
        // 0x80232E0C: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_80232E40;
    }
    // 0x80232E0C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80232E10: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x80232E14: lbu         $v1, 0x34B($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34B);
    // 0x80232E18: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80232E1C: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x80232E20: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x80232E24: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    // 0x80232E28: jal         0x80233298
    // 0x80232E2C: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
    func_80233298_ovl10(rdram, ctx);
        goto after_1;
    // 0x80232E2C: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
    after_1:
    // 0x80232E30: jal         0x80034E3C
    // 0x80232E34: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80034E3C_1023C(rdram, ctx);
        goto after_2;
    // 0x80232E34: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_2:
    // 0x80232E38: j           L_80232E5C
    // 0x80232E3C: nop

        goto L_80232E5C;
    // 0x80232E3C: nop

L_80232E40:
    // 0x80232E40: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80232E44: lb          $v1, -0x3C18($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3C18);
    // 0x80232E48: bne         $v1, $v0, L_80232E5C
    if (ctx->r3 != ctx->r2) {
        // 0x80232E4C: nop
    
            goto L_80232E5C;
    }
    // 0x80232E4C: nop

    // 0x80232E50: lbu         $v0, 0x34B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X34B);
    // 0x80232E54: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80232E58: sb          $v0, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r2;
L_80232E5C:
    // 0x80232E5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80232E60: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80232E64: jr          $ra
    // 0x80232E68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80232E68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802498B4_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802498B4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802498B8: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x802498BC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802498C0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802498C4: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x802498C8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802498CC: lbu         $s0, 0x9($s1)
    ctx->r16 = MEM_BU(ctx->r17, 0X9);
    // 0x802498D0: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x802498D4: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x802498D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802498DC: beq         $s0, $v0, L_80249944
    if (ctx->r16 == ctx->r2) {
        // 0x802498E0: slti        $v0, $s0, 0x2
        ctx->r2 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
            goto L_80249944;
    }
    // 0x802498E0: slti        $v0, $s0, 0x2
    ctx->r2 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
    // 0x802498E4: beql        $v0, $zero, L_802498FC
    if (ctx->r2 == 0) {
        // 0x802498E8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802498FC;
    }
    goto skip_0;
    // 0x802498E8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x802498EC: beq         $s0, $zero, L_8024990C
    if (ctx->r16 == 0) {
        // 0x802498F0: nop
    
            goto L_8024990C;
    }
    // 0x802498F0: nop

    // 0x802498F4: j           L_80249A74
    // 0x802498F8: nop

        goto L_80249A74;
    // 0x802498F8: nop

L_802498FC:
    // 0x802498FC: beq         $s0, $v0, L_80249A38
    if (ctx->r16 == ctx->r2) {
        // 0x80249900: lui         $v1, 0x800
        ctx->r3 = S32(0X800 << 16);
            goto L_80249A38;
    }
    // 0x80249900: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80249904: j           L_80249A74
    // 0x80249908: nop

        goto L_80249A74;
    // 0x80249908: nop

L_8024990C:
    // 0x8024990C: jal         0x8006FF84
    // 0x80249910: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_0;
    // 0x80249910: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_0:
    // 0x80249914: beq         $v0, $zero, L_80249A74
    if (ctx->r2 == 0) {
        // 0x80249918: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80249A74;
    }
    // 0x80249918: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8024991C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80249920: sb          $v0, 0x49B8($at)
    MEM_B(0X49B8, ctx->r1) = ctx->r2;
    // 0x80249924: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x80249928: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8024992C: sb          $zero, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = 0;
    // 0x80249930: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80249934: sb          $v0, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r2;
    // 0x80249938: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8024993C: j           L_80249A28
    // 0x80249940: sw          $zero, 0x49BC($at)
    MEM_W(0X49BC, ctx->r1) = 0;
        goto L_80249A28;
    // 0x80249940: sw          $zero, 0x49BC($at)
    MEM_W(0X49BC, ctx->r1) = 0;
L_80249944:
    // 0x80249944: jal         0x80249AFC
    // 0x80249948: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80249AFC_ovl10(rdram, ctx);
        goto after_1;
    // 0x80249948: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x8024994C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80249950: beql        $v0, $zero, L_80249A18
    if (ctx->r2 == 0) {
        // 0x80249954: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_80249A18;
    }
    goto skip_1;
    // 0x80249954: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    skip_1:
    // 0x80249958: lb          $v0, 0xD($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XD);
    // 0x8024995C: bne         $v0, $zero, L_80249980
    if (ctx->r2 != 0) {
        // 0x80249960: addu        $a1, $v0, $zero
        ctx->r5 = ADD32(ctx->r2, 0);
            goto L_80249980;
    }
    // 0x80249960: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x80249964: addiu       $a0, $s1, 0x38
    ctx->r4 = ADD32(ctx->r17, 0X38);
    // 0x80249968: lb          $a3, 0xE($s1)
    ctx->r7 = MEM_B(ctx->r17, 0XE);
    // 0x8024996C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80249970: jal         0x800610AC
    // 0x80249974: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_2;
    // 0x80249974: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x80249978: j           L_80249A28
    // 0x8024997C: nop

        goto L_80249A28;
    // 0x8024997C: nop

L_80249980:
    // 0x80249980: beq         $v0, $s0, L_80249A28
    if (ctx->r2 == ctx->r16) {
        // 0x80249984: andi        $v0, $v0, 0x80
        ctx->r2 = ctx->r2 & 0X80;
            goto L_80249A28;
    }
    // 0x80249984: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x80249988: beq         $v0, $zero, L_802499D8
    if (ctx->r2 == 0) {
        // 0x8024998C: lui         $a0, 0x6666
        ctx->r4 = S32(0X6666 << 16);
            goto L_802499D8;
    }
    // 0x8024998C: lui         $a0, 0x6666
    ctx->r4 = S32(0X6666 << 16);
    // 0x80249990: ori         $a0, $a0, 0x6667
    ctx->r4 = ctx->r4 | 0X6667;
    // 0x80249994: lbu         $v1, 0xE($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XE);
    // 0x80249998: andi        $v0, $a1, 0x7F
    ctx->r2 = ctx->r5 & 0X7F;
    // 0x8024999C: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x802499A0: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x802499A4: sll         $a2, $v0, 2
    ctx->r6 = S32(ctx->r2 << 2);
    // 0x802499A8: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x802499AC: sll         $a2, $a2, 1
    ctx->r6 = S32(ctx->r6 << 1);
    // 0x802499B0: mult        $a2, $a0
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802499B4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802499B8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x802499BC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x802499C0: sra         $a2, $a2, 31
    ctx->r6 = S32(SIGNED(ctx->r6) >> 31);
    // 0x802499C4: mfhi        $t0
    ctx->r8 = hi;
    // 0x802499C8: sra         $v0, $t0, 2
    ctx->r2 = S32(SIGNED(ctx->r8) >> 2);
    // 0x802499CC: nop

    // 0x802499D0: j           L_802499F8
    // 0x802499D4: subu        $a2, $v0, $a2
    ctx->r6 = SUB32(ctx->r2, ctx->r6);
        goto L_802499F8;
    // 0x802499D4: subu        $a2, $v0, $a2
    ctx->r6 = SUB32(ctx->r2, ctx->r6);
L_802499D8:
    // 0x802499D8: lb          $v1, 0xE($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XE);
    // 0x802499DC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802499E0: beq         $v1, $v0, L_80249A14
    if (ctx->r3 == ctx->r2) {
        // 0x802499E4: addu        $a2, $v1, $zero
        ctx->r6 = ADD32(ctx->r3, 0);
            goto L_80249A14;
    }
    // 0x802499E4: addu        $a2, $v1, $zero
    ctx->r6 = ADD32(ctx->r3, 0);
    // 0x802499E8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x802499EC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802499F0: andi        $a2, $a2, 0xFF
    ctx->r6 = ctx->r6 & 0XFF;
    // 0x802499F4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
L_802499F8:
    // 0x802499F8: jal         0x80069754
    // 0x802499FC: nop

    func_80069754_44B54(rdram, ctx);
        goto after_3;
    // 0x802499FC: nop

    after_3:
    // 0x80249A00: lb          $a0, 0xC($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XC);
    // 0x80249A04: jal         0x8006036C
    // 0x80249A08: addiu       $a0, $a0, 0x400
    ctx->r4 = ADD32(ctx->r4, 0X400);
    func_8006036C_3B76C(rdram, ctx);
        goto after_4;
    // 0x80249A08: addiu       $a0, $a0, 0x400
    ctx->r4 = ADD32(ctx->r4, 0X400);
    after_4:
    // 0x80249A0C: j           L_80249A28
    // 0x80249A10: nop

        goto L_80249A28;
    // 0x80249A10: nop

L_80249A14:
    // 0x80249A14: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_80249A18:
    // 0x80249A18: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80249A1C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80249A20: jal         0x80069754
    // 0x80249A24: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80069754_44B54(rdram, ctx);
        goto after_5;
    // 0x80249A24: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_5:
L_80249A28:
    // 0x80249A28: lbu         $v0, 0x9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X9);
    // 0x80249A2C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80249A30: j           L_80249A74
    // 0x80249A34: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
        goto L_80249A74;
    // 0x80249A34: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
L_80249A38:
    // 0x80249A38: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80249A3C: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80249A40: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80249A44: bne         $v0, $zero, L_80249A74
    if (ctx->r2 != 0) {
        // 0x80249A48: nop
    
            goto L_80249A74;
    }
    // 0x80249A48: nop

    // 0x80249A4C: jal         0x80070050
    // 0x80249A50: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_80070050_4B450(rdram, ctx);
        goto after_6;
    // 0x80249A50: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_6:
    // 0x80249A54: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x80249A58: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80249A5C: sw          $zero, 0x4B34($at)
    MEM_W(0X4B34, ctx->r1) = 0;
    // 0x80249A60: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80249A64: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    // 0x80249A68: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80249A6C: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x80249A70: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
L_80249A74:
    // 0x80249A74: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80249A78: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80249A7C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80249A80: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80249A84: jr          $ra
    // 0x80249A88: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80249A88: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80233410_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233410: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80233414: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80233418: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023341C: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x80233420: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80233424: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80233428: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8023342C: addiu       $s1, $s0, 0x368
    ctx->r17 = ADD32(ctx->r16, 0X368);
    // 0x80233430: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80233434: beq         $v1, $zero, L_80233444
    if (ctx->r3 == 0) {
        // 0x80233438: sb          $v0, 0x0($s0)
        MEM_B(0X0, ctx->r16) = ctx->r2;
            goto L_80233444;
    }
    // 0x80233438: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8023343C: j           L_8023344C
    // 0x80233440: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
        goto L_8023344C;
    // 0x80233440: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
L_80233444:
    // 0x80233444: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80233448: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_8023344C:
    // 0x8023344C: jal         0x8004D5D4
    // 0x80233450: nop

    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80233450: nop

    after_0:
    // 0x80233454: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80233458: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8023345C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80233460: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80233464: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80233468: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8023346C: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80233470: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80233474: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80233478: sh          $zero, 0x0($s1)
    MEM_H(0X0, ctx->r17) = 0;
    // 0x8023347C: jal         0x8009A3B4
    // 0x80233480: sw          $zero, 0x4($s1)
    MEM_W(0X4, ctx->r17) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80233480: sw          $zero, 0x4($s1)
    MEM_W(0X4, ctx->r17) = 0;
    after_1:
    // 0x80233484: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80233488: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8023348C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80233490: addiu       $v0, $zero, -0xDFC
    ctx->r2 = ADD32(0, -0XDFC);
    // 0x80233494: sh          $v0, 0xC($s1)
    MEM_H(0XC, ctx->r17) = ctx->r2;
    // 0x80233498: addiu       $v0, $zero, 0x190
    ctx->r2 = ADD32(0, 0X190);
    // 0x8023349C: sh          $v0, 0x10($s1)
    MEM_H(0X10, ctx->r17) = ctx->r2;
    // 0x802334A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802334A4: sh          $zero, 0xE($s1)
    MEM_H(0XE, ctx->r17) = 0;
    // 0x802334A8: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
    // 0x802334AC: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x802334B0: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x802334B4: sw          $zero, 0x44($s0)
    MEM_W(0X44, ctx->r16) = 0;
    // 0x802334B8: sw          $zero, 0x48($s0)
    MEM_W(0X48, ctx->r16) = 0;
    // 0x802334BC: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
    // 0x802334C0: sh          $zero, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = 0;
    // 0x802334C4: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    // 0x802334C8: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x802334CC: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x802334D0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x802334D4: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x802334D8: jal         0x80050294
    // 0x802334DC: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x802334DC: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    after_2:
    // 0x802334E0: jal         0x802334FC
    // 0x802334E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802334FC_ovl10(rdram, ctx);
        goto after_3;
    // 0x802334E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x802334E8: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x802334EC: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x802334F0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802334F4: jr          $ra
    // 0x802334F8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x802334F8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80244FE8_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80244FE8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80244FEC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80244FF0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80244FF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80244FF8: lbu         $a0, 0xA($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XA);
    // 0x80244FFC: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80245000: addiu       $a1, $a1, 0x49B0
    ctx->r5 = ADD32(ctx->r5, 0X49B0);
    // 0x80245004: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80245008: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x8024500C: beq         $v1, $v0, L_80245048
    if (ctx->r3 == ctx->r2) {
        // 0x80245010: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80245048;
    }
    // 0x80245010: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80245014: beql        $v0, $zero, L_8024502C
    if (ctx->r2 == 0) {
        // 0x80245018: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8024502C;
    }
    goto skip_0;
    // 0x80245018: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8024501C: beq         $v1, $zero, L_8024503C
    if (ctx->r3 == 0) {
        // 0x80245020: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_8024503C;
    }
    // 0x80245020: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x80245024: j           L_80245084
    // 0x80245028: nop

        goto L_80245084;
    // 0x80245028: nop

L_8024502C:
    // 0x8024502C: beq         $v1, $v0, L_80245070
    if (ctx->r3 == ctx->r2) {
        // 0x80245030: nop
    
            goto L_80245070;
    }
    // 0x80245030: nop

    // 0x80245034: j           L_80245084
    // 0x80245038: nop

        goto L_80245084;
    // 0x80245038: nop

L_8024503C:
    // 0x8024503C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80245040: sw          $zero, 0x44($s0)
    MEM_W(0X44, ctx->r16) = 0;
    // 0x80245044: sw          $zero, 0x48($s0)
    MEM_W(0X48, ctx->r16) = 0;
L_80245048:
    // 0x80245048: lw          $v0, 0x184($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X184);
    // 0x8024504C: bne         $v0, $s0, L_80245084
    if (ctx->r2 != ctx->r16) {
        // 0x80245050: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80245084;
    }
    // 0x80245050: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80245054: lb          $a3, 0xC($s0)
    ctx->r7 = MEM_B(ctx->r16, 0XC);
    // 0x80245058: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8024505C: jal         0x800610AC
    // 0x80245060: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_0;
    // 0x80245060: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80245064: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80245068: j           L_80245080
    // 0x8024506C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80245080;
    // 0x8024506C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80245070:
    // 0x80245070: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80245074: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x80245078: bne         $v0, $zero, L_80245084
    if (ctx->r2 != 0) {
        // 0x8024507C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80245084;
    }
    // 0x8024507C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80245080:
    // 0x80245080: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80245084:
    // 0x80245084: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80245088: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8024508C: jr          $ra
    // 0x80245090: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80245090: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80234898_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234898: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x8023489C: beq         $a1, $zero, L_802348B0
    if (ctx->r5 == 0) {
        // 0x802348A0: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_802348B0;
    }
    // 0x802348A0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802348A4: sb          $zero, 0xFF($a0)
    MEM_B(0XFF, ctx->r4) = 0;
    // 0x802348A8: j           L_802348B8
    // 0x802348AC: sb          $zero, 0x103($a0)
    MEM_B(0X103, ctx->r4) = 0;
        goto L_802348B8;
    // 0x802348AC: sb          $zero, 0x103($a0)
    MEM_B(0X103, ctx->r4) = 0;
L_802348B0:
    // 0x802348B0: sb          $v0, 0xFF($a0)
    MEM_B(0XFF, ctx->r4) = ctx->r2;
    // 0x802348B4: sb          $v0, 0x103($a0)
    MEM_B(0X103, ctx->r4) = ctx->r2;
L_802348B8:
    // 0x802348B8: jr          $ra
    // 0x802348BC: nop

    TRACE_RETURN()
    return;
    // 0x802348BC: nop

;}
RECOMP_FUNC void func_80235498_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235498: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8023549C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802354A0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802354A4: addiu       $a0, $s0, 0x34C
    ctx->r4 = ADD32(ctx->r16, 0X34C);
    // 0x802354A8: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x802354AC: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x802354B0: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x802354B4: addiu       $s1, $s0, 0x328
    ctx->r17 = ADD32(ctx->r16, 0X328);
    // 0x802354B8: jal         0x800540EC
    // 0x802354BC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_800540EC_2F4EC(rdram, ctx);
        goto after_0;
    // 0x802354BC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x802354C0: beq         $v0, $zero, L_802354D4
    if (ctx->r2 == 0) {
        // 0x802354C4: nop
    
            goto L_802354D4;
    }
    // 0x802354C4: nop

    // 0x802354C8: lhu         $v0, 0x328($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X328);
    // 0x802354CC: j           L_802354DC
    // 0x802354D0: ori         $v0, $v0, 0x100
    ctx->r2 = ctx->r2 | 0X100;
        goto L_802354DC;
    // 0x802354D0: ori         $v0, $v0, 0x100
    ctx->r2 = ctx->r2 | 0X100;
L_802354D4:
    // 0x802354D4: lhu         $v0, 0x328($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X328);
    // 0x802354D8: andi        $v0, $v0, 0xFEFF
    ctx->r2 = ctx->r2 & 0XFEFF;
L_802354DC:
    // 0x802354DC: sh          $v0, 0x328($s0)
    MEM_H(0X328, ctx->r16) = ctx->r2;
    // 0x802354E0: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x802354E4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802354E8: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802354EC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802354F0: lw          $v0, 0x1228($at)
    ctx->r2 = MEM_W(ctx->r1, 0X1228);
    // 0x802354F4: jalr        $v0
    // 0x802354F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x802354F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x802354FC: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80235500: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80235504: beq         $v0, $zero, L_80235520
    if (ctx->r2 == 0) {
        // 0x80235508: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80235520;
    }
    // 0x80235508: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023550C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80235510: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x80235514: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80235518: andi        $v0, $v0, 0xFFFE
    ctx->r2 = ctx->r2 & 0XFFFE;
    // 0x8023551C: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_80235520:
    // 0x80235520: lh          $v0, 0xA($s1)
    ctx->r2 = MEM_H(ctx->r17, 0XA);
    // 0x80235524: beq         $v0, $zero, L_80235534
    if (ctx->r2 == 0) {
        // 0x80235528: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80235534;
    }
    // 0x80235528: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8023552C: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80235530: sh          $v0, 0xA($s1)
    MEM_H(0XA, ctx->r17) = ctx->r2;
L_80235534:
    // 0x80235534: lh          $v0, 0x38($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X38);
    // 0x80235538: beq         $v0, $zero, L_80235548
    if (ctx->r2 == 0) {
        // 0x8023553C: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80235548;
    }
    // 0x8023553C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80235540: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80235544: sh          $v0, 0x38($s1)
    MEM_H(0X38, ctx->r17) = ctx->r2;
L_80235548:
    // 0x80235548: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8023554C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80235550: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80235554: jr          $ra
    // 0x80235558: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80235558: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80248C2C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80248C2C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80248C30: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80248C34: jal         0x8006033C
    // 0x80248C38: addiu       $a0, $zero, 0x220
    ctx->r4 = ADD32(0, 0X220);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80248C38: addiu       $a0, $zero, 0x220
    ctx->r4 = ADD32(0, 0X220);
    after_0:
    // 0x80248C3C: beq         $v0, $zero, L_80248C74
    if (ctx->r2 == 0) {
        // 0x80248C40: nop
    
            goto L_80248C74;
    }
    // 0x80248C40: nop

    // 0x80248C44: jal         0x8006033C
    // 0x80248C48: addiu       $a0, $zero, 0x221
    ctx->r4 = ADD32(0, 0X221);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x80248C48: addiu       $a0, $zero, 0x221
    ctx->r4 = ADD32(0, 0X221);
    after_1:
    // 0x80248C4C: beq         $v0, $zero, L_80248C74
    if (ctx->r2 == 0) {
        // 0x80248C50: nop
    
            goto L_80248C74;
    }
    // 0x80248C50: nop

    // 0x80248C54: jal         0x80060590
    // 0x80248C58: addiu       $a0, $zero, 0x220
    ctx->r4 = ADD32(0, 0X220);
    func_80060590_3B990(rdram, ctx);
        goto after_2;
    // 0x80248C58: addiu       $a0, $zero, 0x220
    ctx->r4 = ADD32(0, 0X220);
    after_2:
    // 0x80248C5C: jal         0x80060590
    // 0x80248C60: addiu       $a0, $zero, 0x221
    ctx->r4 = ADD32(0, 0X221);
    func_80060590_3B990(rdram, ctx);
        goto after_3;
    // 0x80248C60: addiu       $a0, $zero, 0x221
    ctx->r4 = ADD32(0, 0X221);
    after_3:
    // 0x80248C64: jal         0x80060C1C
    // 0x80248C68: addiu       $a0, $zero, 0x2E0
    ctx->r4 = ADD32(0, 0X2E0);
    func_80060C1C_3C01C(rdram, ctx);
        goto after_4;
    // 0x80248C68: addiu       $a0, $zero, 0x2E0
    ctx->r4 = ADD32(0, 0X2E0);
    after_4:
    // 0x80248C6C: j           L_80248CC8
    // 0x80248C70: nop

        goto L_80248CC8;
    // 0x80248C70: nop

L_80248C74:
    // 0x80248C74: jal         0x8006033C
    // 0x80248C78: addiu       $a0, $zero, 0x220
    ctx->r4 = ADD32(0, 0X220);
    func_8006033C_3B73C(rdram, ctx);
        goto after_5;
    // 0x80248C78: addiu       $a0, $zero, 0x220
    ctx->r4 = ADD32(0, 0X220);
    after_5:
    // 0x80248C7C: bne         $v0, $zero, L_80248C94
    if (ctx->r2 != 0) {
        // 0x80248C80: nop
    
            goto L_80248C94;
    }
    // 0x80248C80: nop

    // 0x80248C84: jal         0x8006033C
    // 0x80248C88: addiu       $a0, $zero, 0x221
    ctx->r4 = ADD32(0, 0X221);
    func_8006033C_3B73C(rdram, ctx);
        goto after_6;
    // 0x80248C88: addiu       $a0, $zero, 0x221
    ctx->r4 = ADD32(0, 0X221);
    after_6:
    // 0x80248C8C: bne         $v0, $zero, L_80248CC0
    if (ctx->r2 != 0) {
        // 0x80248C90: addiu       $a0, $zero, 0x220
        ctx->r4 = ADD32(0, 0X220);
            goto L_80248CC0;
    }
    // 0x80248C90: addiu       $a0, $zero, 0x220
    ctx->r4 = ADD32(0, 0X220);
L_80248C94:
    // 0x80248C94: jal         0x8006033C
    // 0x80248C98: addiu       $a0, $zero, 0x220
    ctx->r4 = ADD32(0, 0X220);
    func_8006033C_3B73C(rdram, ctx);
        goto after_7;
    // 0x80248C98: addiu       $a0, $zero, 0x220
    ctx->r4 = ADD32(0, 0X220);
    after_7:
    // 0x80248C9C: beq         $v0, $zero, L_80248CC0
    if (ctx->r2 == 0) {
        // 0x80248CA0: addiu       $a0, $zero, 0x220
        ctx->r4 = ADD32(0, 0X220);
            goto L_80248CC0;
    }
    // 0x80248CA0: addiu       $a0, $zero, 0x220
    ctx->r4 = ADD32(0, 0X220);
    // 0x80248CA4: jal         0x8006033C
    // 0x80248CA8: addiu       $a0, $zero, 0x221
    ctx->r4 = ADD32(0, 0X221);
    func_8006033C_3B73C(rdram, ctx);
        goto after_8;
    // 0x80248CA8: addiu       $a0, $zero, 0x221
    ctx->r4 = ADD32(0, 0X221);
    after_8:
    // 0x80248CAC: bne         $v0, $zero, L_80248CC0
    if (ctx->r2 != 0) {
        // 0x80248CB0: addiu       $a0, $zero, 0x220
        ctx->r4 = ADD32(0, 0X220);
            goto L_80248CC0;
    }
    // 0x80248CB0: addiu       $a0, $zero, 0x220
    ctx->r4 = ADD32(0, 0X220);
    // 0x80248CB4: jal         0x80060590
    // 0x80248CB8: addiu       $a0, $zero, 0x220
    ctx->r4 = ADD32(0, 0X220);
    func_80060590_3B990(rdram, ctx);
        goto after_9;
    // 0x80248CB8: addiu       $a0, $zero, 0x220
    ctx->r4 = ADD32(0, 0X220);
    after_9:
    // 0x80248CBC: addiu       $a0, $zero, 0x221
    ctx->r4 = ADD32(0, 0X221);
L_80248CC0:
    // 0x80248CC0: jal         0x8006036C
    // 0x80248CC4: nop

    func_8006036C_3B76C(rdram, ctx);
        goto after_10;
    // 0x80248CC4: nop

    after_10:
L_80248CC8:
    // 0x80248CC8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80248CCC: jr          $ra
    // 0x80248CD0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80248CD0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023106C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023106C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80231070: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80231074: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80231078: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023107C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80231080: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80231084: lw          $v0, 0xF7C($at)
    ctx->r2 = MEM_W(ctx->r1, 0XF7C);
    // 0x80231088: jalr        $v0
    // 0x8023108C: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8023108C: nop

    after_0:
    // 0x80231090: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80231094: jr          $ra
    // 0x80231098: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80231098: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022BAC4_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BAC4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022BAC8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022BACC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022BAD0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022BAD4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022BAD8: lbu         $v1, 0x4($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X4);
    // 0x8022BADC: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022BAE0: beq         $v1, $v0, L_8022BCC8
    if (ctx->r3 == ctx->r2) {
        // 0x8022BAE4: slti        $v0, $v1, 0xB
        ctx->r2 = SIGNED(ctx->r3) < 0XB ? 1 : 0;
            goto L_8022BCC8;
    }
    // 0x8022BAE4: slti        $v0, $v1, 0xB
    ctx->r2 = SIGNED(ctx->r3) < 0XB ? 1 : 0;
    // 0x8022BAE8: beql        $v0, $zero, L_8022BB00
    if (ctx->r2 == 0) {
        // 0x8022BAEC: addiu       $v0, $zero, 0xFE
        ctx->r2 = ADD32(0, 0XFE);
            goto L_8022BB00;
    }
    goto skip_0;
    // 0x8022BAEC: addiu       $v0, $zero, 0xFE
    ctx->r2 = ADD32(0, 0XFE);
    skip_0:
    // 0x8022BAF0: beq         $v1, $zero, L_8022BB18
    if (ctx->r3 == 0) {
        // 0x8022BAF4: nop
    
            goto L_8022BB18;
    }
    // 0x8022BAF4: nop

    // 0x8022BAF8: j           L_8022BD84
    // 0x8022BAFC: sb          $zero, 0x4($s1)
    MEM_B(0X4, ctx->r17) = 0;
        goto L_8022BD84;
    // 0x8022BAFC: sb          $zero, 0x4($s1)
    MEM_B(0X4, ctx->r17) = 0;
L_8022BB00:
    // 0x8022BB00: beq         $v1, $v0, L_8022BCC0
    if (ctx->r3 == ctx->r2) {
        // 0x8022BB04: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_8022BCC0;
    }
    // 0x8022BB04: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022BB08: beq         $v1, $v0, L_8022BD78
    if (ctx->r3 == ctx->r2) {
        // 0x8022BB0C: nop
    
            goto L_8022BD78;
    }
    // 0x8022BB0C: nop

    // 0x8022BB10: j           L_8022BD84
    // 0x8022BB14: sb          $zero, 0x4($s1)
    MEM_B(0X4, ctx->r17) = 0;
        goto L_8022BD84;
    // 0x8022BB14: sb          $zero, 0x4($s1)
    MEM_B(0X4, ctx->r17) = 0;
L_8022BB18:
    // 0x8022BB18: jal         0x8006033C
    // 0x8022BB1C: addiu       $a0, $zero, 0x200
    ctx->r4 = ADD32(0, 0X200);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x8022BB1C: addiu       $a0, $zero, 0x200
    ctx->r4 = ADD32(0, 0X200);
    after_0:
    // 0x8022BB20: bnel        $v0, $zero, L_8022BD84
    if (ctx->r2 != 0) {
        // 0x8022BB24: sb          $zero, 0x4($s1)
        MEM_B(0X4, ctx->r17) = 0;
            goto L_8022BD84;
    }
    goto skip_1;
    // 0x8022BB24: sb          $zero, 0x4($s1)
    MEM_B(0X4, ctx->r17) = 0;
    skip_1:
    // 0x8022BB28: jal         0x8006033C
    // 0x8022BB2C: addiu       $a0, $zero, 0x204
    ctx->r4 = ADD32(0, 0X204);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x8022BB2C: addiu       $a0, $zero, 0x204
    ctx->r4 = ADD32(0, 0X204);
    after_1:
    // 0x8022BB30: beq         $v0, $zero, L_8022BBC8
    if (ctx->r2 == 0) {
        // 0x8022BB34: nop
    
            goto L_8022BBC8;
    }
    // 0x8022BB34: nop

    // 0x8022BB38: jal         0x8006033C
    // 0x8022BB3C: addiu       $a0, $zero, 0x206
    ctx->r4 = ADD32(0, 0X206);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x8022BB3C: addiu       $a0, $zero, 0x206
    ctx->r4 = ADD32(0, 0X206);
    after_2:
    // 0x8022BB40: bne         $v0, $zero, L_8022BBC8
    if (ctx->r2 != 0) {
        // 0x8022BB44: nop
    
            goto L_8022BBC8;
    }
    // 0x8022BB44: nop

    // 0x8022BB48: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022BB4C: jal         0x8005FB30
    // 0x8022BB50: addiu       $a0, $a0, 0x2428
    ctx->r4 = ADD32(ctx->r4, 0X2428);
    func_8005FB30_3AF30(rdram, ctx);
        goto after_3;
    // 0x8022BB50: addiu       $a0, $a0, 0x2428
    ctx->r4 = ADD32(ctx->r4, 0X2428);
    after_3:
    // 0x8022BB54: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8022BB58: lhu         $v0, -0x730C($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X730C);
    // 0x8022BB5C: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8022BB60: sll         $a0, $v0, 2
    ctx->r4 = S32(ctx->r2 << 2);
    // 0x8022BB64: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8022BB68: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x8022BB6C: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8022BB70: addiu       $v0, $v0, 0x243C
    ctx->r2 = ADD32(ctx->r2, 0X243C);
    // 0x8022BB74: jal         0x8005FB30
    // 0x8022BB78: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    func_8005FB30_3AF30(rdram, ctx);
        goto after_4;
    // 0x8022BB78: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    after_4:
    // 0x8022BB7C: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8022BB80: lhu         $v0, -0x730C($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X730C);
    // 0x8022BB84: andi        $v0, $v0, 0x30
    ctx->r2 = ctx->r2 & 0X30;
    // 0x8022BB88: srl         $v0, $v0, 4
    ctx->r2 = S32(U32(ctx->r2) >> 4);
    // 0x8022BB8C: sll         $a0, $v0, 2
    ctx->r4 = S32(ctx->r2 << 2);
    // 0x8022BB90: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8022BB94: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x8022BB98: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8022BB9C: addiu       $v0, $v0, 0x248C
    ctx->r2 = ADD32(ctx->r2, 0X248C);
    // 0x8022BBA0: jal         0x8005FB30
    // 0x8022BBA4: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    func_8005FB30_3AF30(rdram, ctx);
        goto after_5;
    // 0x8022BBA4: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    after_5:
    // 0x8022BBA8: jal         0x80229F50
    // 0x8022BBAC: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    func_80229F50_ovl10(rdram, ctx);
        goto after_6;
    // 0x8022BBAC: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    after_6:
    // 0x8022BBB0: jal         0x8006036C
    // 0x8022BBB4: addiu       $a0, $zero, 0x7E0
    ctx->r4 = ADD32(0, 0X7E0);
    func_8006036C_3B76C(rdram, ctx);
        goto after_7;
    // 0x8022BBB4: addiu       $a0, $zero, 0x7E0
    ctx->r4 = ADD32(0, 0X7E0);
    after_7:
    // 0x8022BBB8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022BBBC: addiu       $v1, $zero, 0xFE
    ctx->r3 = ADD32(0, 0XFE);
    // 0x8022BBC0: j           L_8022BD90
    // 0x8022BBC4: sb          $v1, 0x4($s1)
    MEM_B(0X4, ctx->r17) = ctx->r3;
        goto L_8022BD90;
    // 0x8022BBC4: sb          $v1, 0x4($s1)
    MEM_B(0X4, ctx->r17) = ctx->r3;
L_8022BBC8:
    // 0x8022BBC8: jal         0x8006033C
    // 0x8022BBCC: addiu       $a0, $zero, 0x212
    ctx->r4 = ADD32(0, 0X212);
    func_8006033C_3B73C(rdram, ctx);
        goto after_8;
    // 0x8022BBCC: addiu       $a0, $zero, 0x212
    ctx->r4 = ADD32(0, 0X212);
    after_8:
    // 0x8022BBD0: beq         $v0, $zero, L_8022BC30
    if (ctx->r2 == 0) {
        // 0x8022BBD4: nop
    
            goto L_8022BC30;
    }
    // 0x8022BBD4: nop

    // 0x8022BBD8: jal         0x8006033C
    // 0x8022BBDC: addiu       $a0, $zero, 0x213
    ctx->r4 = ADD32(0, 0X213);
    func_8006033C_3B73C(rdram, ctx);
        goto after_9;
    // 0x8022BBDC: addiu       $a0, $zero, 0x213
    ctx->r4 = ADD32(0, 0X213);
    after_9:
    // 0x8022BBE0: bne         $v0, $zero, L_8022BC30
    if (ctx->r2 != 0) {
        // 0x8022BBE4: nop
    
            goto L_8022BC30;
    }
    // 0x8022BBE4: nop

    // 0x8022BBE8: lui         $s0, 0x8025
    ctx->r16 = S32(0X8025 << 16);
    // 0x8022BBEC: addiu       $s0, $s0, 0x21B0
    ctx->r16 = ADD32(ctx->r16, 0X21B0);
    // 0x8022BBF0: jal         0x8005FB30
    // 0x8022BBF4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005FB30_3AF30(rdram, ctx);
        goto after_10;
    // 0x8022BBF4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_10:
    // 0x8022BBF8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022BBFC: jal         0x8005FB30
    // 0x8022BC00: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_8005FB30_3AF30(rdram, ctx);
        goto after_11;
    // 0x8022BC00: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_11:
    // 0x8022BC04: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    // 0x8022BC08: jal         0x80229F50
    // 0x8022BC0C: sw          $v0, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->r2;
    func_80229F50_ovl10(rdram, ctx);
        goto after_12;
    // 0x8022BC0C: sw          $v0, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->r2;
    after_12:
    // 0x8022BC10: jal         0x8006036C
    // 0x8022BC14: addiu       $a0, $zero, 0x235
    ctx->r4 = ADD32(0, 0X235);
    func_8006036C_3B76C(rdram, ctx);
        goto after_13;
    // 0x8022BC14: addiu       $a0, $zero, 0x235
    ctx->r4 = ADD32(0, 0X235);
    after_13:
    // 0x8022BC18: jal         0x8006036C
    // 0x8022BC1C: addiu       $a0, $zero, 0x7E0
    ctx->r4 = ADD32(0, 0X7E0);
    func_8006036C_3B76C(rdram, ctx);
        goto after_14;
    // 0x8022BC1C: addiu       $a0, $zero, 0x7E0
    ctx->r4 = ADD32(0, 0X7E0);
    after_14:
    // 0x8022BC20: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022BC24: addiu       $v1, $zero, 0xA
    ctx->r3 = ADD32(0, 0XA);
    // 0x8022BC28: j           L_8022BD90
    // 0x8022BC2C: sb          $v1, 0x4($s1)
    MEM_B(0X4, ctx->r17) = ctx->r3;
        goto L_8022BD90;
    // 0x8022BC2C: sb          $v1, 0x4($s1)
    MEM_B(0X4, ctx->r17) = ctx->r3;
L_8022BC30:
    // 0x8022BC30: jal         0x8006033C
    // 0x8022BC34: addiu       $a0, $zero, 0x209
    ctx->r4 = ADD32(0, 0X209);
    func_8006033C_3B73C(rdram, ctx);
        goto after_15;
    // 0x8022BC34: addiu       $a0, $zero, 0x209
    ctx->r4 = ADD32(0, 0X209);
    after_15:
    // 0x8022BC38: beq         $v0, $zero, L_8022BC84
    if (ctx->r2 == 0) {
        // 0x8022BC3C: nop
    
            goto L_8022BC84;
    }
    // 0x8022BC3C: nop

    // 0x8022BC40: jal         0x8006033C
    // 0x8022BC44: addiu       $a0, $zero, 0x211
    ctx->r4 = ADD32(0, 0X211);
    func_8006033C_3B73C(rdram, ctx);
        goto after_16;
    // 0x8022BC44: addiu       $a0, $zero, 0x211
    ctx->r4 = ADD32(0, 0X211);
    after_16:
    // 0x8022BC48: bne         $v0, $zero, L_8022BC84
    if (ctx->r2 != 0) {
        // 0x8022BC4C: nop
    
            goto L_8022BC84;
    }
    // 0x8022BC4C: nop

    // 0x8022BC50: lui         $s0, 0x8025
    ctx->r16 = S32(0X8025 << 16);
    // 0x8022BC54: addiu       $s0, $s0, 0x7D0
    ctx->r16 = ADD32(ctx->r16, 0X7D0);
    // 0x8022BC58: jal         0x8005FB30
    // 0x8022BC5C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005FB30_3AF30(rdram, ctx);
        goto after_17;
    // 0x8022BC5C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_17:
    // 0x8022BC60: jal         0x8006033C
    // 0x8022BC64: addiu       $a0, $zero, 0x20D
    ctx->r4 = ADD32(0, 0X20D);
    func_8006033C_3B73C(rdram, ctx);
        goto after_18;
    // 0x8022BC64: addiu       $a0, $zero, 0x20D
    ctx->r4 = ADD32(0, 0X20D);
    after_18:
    // 0x8022BC68: beq         $v0, $zero, L_8022BC7C
    if (ctx->r2 == 0) {
        // 0x8022BC6C: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_8022BC7C;
    }
    // 0x8022BC6C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022BC70: jal         0x8005FB30
    // 0x8022BC74: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8005FB30_3AF30(rdram, ctx);
        goto after_19;
    // 0x8022BC74: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_19:
    // 0x8022BC78: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_8022BC7C:
    // 0x8022BC7C: j           L_8022BD80
    // 0x8022BC80: sb          $v0, 0x4($s1)
    MEM_B(0X4, ctx->r17) = ctx->r2;
        goto L_8022BD80;
    // 0x8022BC80: sb          $v0, 0x4($s1)
    MEM_B(0X4, ctx->r17) = ctx->r2;
L_8022BC84:
    // 0x8022BC84: jal         0x8006033C
    // 0x8022BC88: addiu       $a0, $zero, 0x246
    ctx->r4 = ADD32(0, 0X246);
    func_8006033C_3B73C(rdram, ctx);
        goto after_20;
    // 0x8022BC88: addiu       $a0, $zero, 0x246
    ctx->r4 = ADD32(0, 0X246);
    after_20:
    // 0x8022BC8C: beql        $v0, $zero, L_8022BD84
    if (ctx->r2 == 0) {
        // 0x8022BC90: sb          $zero, 0x4($s1)
        MEM_B(0X4, ctx->r17) = 0;
            goto L_8022BD84;
    }
    goto skip_2;
    // 0x8022BC90: sb          $zero, 0x4($s1)
    MEM_B(0X4, ctx->r17) = 0;
    skip_2:
    // 0x8022BC94: jal         0x8006033C
    // 0x8022BC98: addiu       $a0, $zero, 0x200
    ctx->r4 = ADD32(0, 0X200);
    func_8006033C_3B73C(rdram, ctx);
        goto after_21;
    // 0x8022BC98: addiu       $a0, $zero, 0x200
    ctx->r4 = ADD32(0, 0X200);
    after_21:
    // 0x8022BC9C: bnel        $v0, $zero, L_8022BD84
    if (ctx->r2 != 0) {
        // 0x8022BCA0: sb          $zero, 0x4($s1)
        MEM_B(0X4, ctx->r17) = 0;
            goto L_8022BD84;
    }
    goto skip_3;
    // 0x8022BCA0: sb          $zero, 0x4($s1)
    MEM_B(0X4, ctx->r17) = 0;
    skip_3:
    // 0x8022BCA4: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8022BCA8: lb          $v0, -0x3BC6($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC6);
    // 0x8022BCAC: slti        $v0, $v0, 0xB
    ctx->r2 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
    // 0x8022BCB0: beql        $v0, $zero, L_8022BD84
    if (ctx->r2 == 0) {
        // 0x8022BCB4: sb          $zero, 0x4($s1)
        MEM_B(0X4, ctx->r17) = 0;
            goto L_8022BD84;
    }
    goto skip_4;
    // 0x8022BCB4: sb          $zero, 0x4($s1)
    MEM_B(0X4, ctx->r17) = 0;
    skip_4:
    // 0x8022BCB8: jal         0x80060690
    // 0x8022BCBC: addiu       $a0, $zero, 0x58
    ctx->r4 = ADD32(0, 0X58);
    func_80060690_3BA90(rdram, ctx);
        goto after_22;
    // 0x8022BCBC: addiu       $a0, $zero, 0x58
    ctx->r4 = ADD32(0, 0X58);
    after_22:
L_8022BCC0:
    // 0x8022BCC0: j           L_8022BD90
    // 0x8022BCC4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8022BD90;
    // 0x8022BCC4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022BCC8:
    // 0x8022BCC8: jal         0x8006033C
    // 0x8022BCCC: addiu       $a0, $zero, 0x679
    ctx->r4 = ADD32(0, 0X679);
    func_8006033C_3B73C(rdram, ctx);
        goto after_23;
    // 0x8022BCCC: addiu       $a0, $zero, 0x679
    ctx->r4 = ADD32(0, 0X679);
    after_23:
    // 0x8022BCD0: beq         $v0, $zero, L_8022BD54
    if (ctx->r2 == 0) {
        // 0x8022BCD4: lui         $v0, 0x800
        ctx->r2 = S32(0X800 << 16);
            goto L_8022BD54;
    }
    // 0x8022BCD4: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x8022BCD8: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8022BCDC: lw          $v1, 0x3FF0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3FF0);
    // 0x8022BCE0: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x8022BCE4: bne         $v0, $zero, L_8022BD90
    if (ctx->r2 != 0) {
        // 0x8022BCE8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022BD90;
    }
    // 0x8022BCE8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022BCEC: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x8022BCF0: bne         $v0, $zero, L_8022BD44
    if (ctx->r2 != 0) {
        // 0x8022BCF4: nop
    
            goto L_8022BD44;
    }
    // 0x8022BCF4: nop

    // 0x8022BCF8: jal         0x80060590
    // 0x8022BCFC: addiu       $a0, $zero, 0x7E0
    ctx->r4 = ADD32(0, 0X7E0);
    func_80060590_3B990(rdram, ctx);
        goto after_24;
    // 0x8022BCFC: addiu       $a0, $zero, 0x7E0
    ctx->r4 = ADD32(0, 0X7E0);
    after_24:
    // 0x8022BD00: jal         0x80060590
    // 0x8022BD04: addiu       $a0, $zero, 0x235
    ctx->r4 = ADD32(0, 0X235);
    func_80060590_3B990(rdram, ctx);
        goto after_25;
    // 0x8022BD04: addiu       $a0, $zero, 0x235
    ctx->r4 = ADD32(0, 0X235);
    after_25:
    // 0x8022BD08: jal         0x8006036C
    // 0x8022BD0C: addiu       $a0, $zero, 0x24A
    ctx->r4 = ADD32(0, 0X24A);
    func_8006036C_3B76C(rdram, ctx);
        goto after_26;
    // 0x8022BD0C: addiu       $a0, $zero, 0x24A
    ctx->r4 = ADD32(0, 0X24A);
    after_26:
    // 0x8022BD10: jal         0x8006036C
    // 0x8022BD14: addiu       $a0, $zero, 0x213
    ctx->r4 = ADD32(0, 0X213);
    func_8006036C_3B76C(rdram, ctx);
        goto after_27;
    // 0x8022BD14: addiu       $a0, $zero, 0x213
    ctx->r4 = ADD32(0, 0X213);
    after_27:
    // 0x8022BD18: jal         0x8006036C
    // 0x8022BD1C: addiu       $a0, $zero, 0x214
    ctx->r4 = ADD32(0, 0X214);
    func_8006036C_3B76C(rdram, ctx);
        goto after_28;
    // 0x8022BD1C: addiu       $a0, $zero, 0x214
    ctx->r4 = ADD32(0, 0X214);
    after_28:
    // 0x8022BD20: jal         0x80060C1C
    // 0x8022BD24: addiu       $a0, $zero, 0x2E4
    ctx->r4 = ADD32(0, 0X2E4);
    func_80060C1C_3C01C(rdram, ctx);
        goto after_29;
    // 0x8022BD24: addiu       $a0, $zero, 0x2E4
    ctx->r4 = ADD32(0, 0X2E4);
    after_29:
    // 0x8022BD28: jal         0x80060D38
    // 0x8022BD2C: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    func_80060D38_3C138(rdram, ctx);
        goto after_30;
    // 0x8022BD2C: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_30:
    // 0x8022BD30: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022BD34: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8022BD38: sb          $v0, -0x3BA0($at)
    MEM_B(-0X3BA0, ctx->r1) = ctx->r2;
    // 0x8022BD3C: j           L_8022BD70
    // 0x8022BD40: addiu       $v0, $zero, 0xFE
    ctx->r2 = ADD32(0, 0XFE);
        goto L_8022BD70;
    // 0x8022BD40: addiu       $v0, $zero, 0xFE
    ctx->r2 = ADD32(0, 0XFE);
L_8022BD44:
    // 0x8022BD44: jal         0x80060590
    // 0x8022BD48: addiu       $a0, $zero, 0x679
    ctx->r4 = ADD32(0, 0X679);
    func_80060590_3B990(rdram, ctx);
        goto after_31;
    // 0x8022BD48: addiu       $a0, $zero, 0x679
    ctx->r4 = ADD32(0, 0X679);
    after_31:
    // 0x8022BD4C: j           L_8022BD90
    // 0x8022BD50: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8022BD90;
    // 0x8022BD50: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022BD54:
    // 0x8022BD54: jal         0x8006033C
    // 0x8022BD58: addiu       $a0, $zero, 0x213
    ctx->r4 = ADD32(0, 0X213);
    func_8006033C_3B73C(rdram, ctx);
        goto after_32;
    // 0x8022BD58: addiu       $a0, $zero, 0x213
    ctx->r4 = ADD32(0, 0X213);
    after_32:
    // 0x8022BD5C: beq         $v0, $zero, L_8022BD90
    if (ctx->r2 == 0) {
        // 0x8022BD60: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022BD90;
    }
    // 0x8022BD60: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022BD64: jal         0x80060690
    // 0x8022BD68: addiu       $a0, $zero, 0x52
    ctx->r4 = ADD32(0, 0X52);
    func_80060690_3BA90(rdram, ctx);
        goto after_33;
    // 0x8022BD68: addiu       $a0, $zero, 0x52
    ctx->r4 = ADD32(0, 0X52);
    after_33:
    // 0x8022BD6C: addiu       $v0, $zero, 0xFE
    ctx->r2 = ADD32(0, 0XFE);
L_8022BD70:
    // 0x8022BD70: j           L_8022BCC0
    // 0x8022BD74: sb          $v0, 0x4($s1)
    MEM_B(0X4, ctx->r17) = ctx->r2;
        goto L_8022BCC0;
    // 0x8022BD74: sb          $v0, 0x4($s1)
    MEM_B(0X4, ctx->r17) = ctx->r2;
L_8022BD78:
    // 0x8022BD78: jal         0x8006036C
    // 0x8022BD7C: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    func_8006036C_3B76C(rdram, ctx);
        goto after_34;
    // 0x8022BD7C: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    after_34:
L_8022BD80:
    // 0x8022BD80: sb          $zero, 0x4($s1)
    MEM_B(0X4, ctx->r17) = 0;
L_8022BD84:
    // 0x8022BD84: jal         0x8006036C
    // 0x8022BD88: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    func_8006036C_3B76C(rdram, ctx);
        goto after_35;
    // 0x8022BD88: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    after_35:
    // 0x8022BD8C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8022BD90:
    // 0x8022BD90: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022BD94: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022BD98: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022BD9C: jr          $ra
    // 0x8022BDA0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022BDA0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80245F38_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80245F38: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80245F3C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80245F40: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80245F44: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80245F48: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80245F4C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80245F50: lw          $v0, 0x2128($at)
    ctx->r2 = MEM_W(ctx->r1, 0X2128);
    // 0x80245F54: jalr        $v0
    // 0x80245F58: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80245F58: nop

    after_0:
    // 0x80245F5C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80245F60: jr          $ra
    // 0x80245F64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80245F64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022A350_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A350: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    // 0x8022A354: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x8022A358: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8022A35C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022A360: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x8022A364: addiu       $v1, $v1, 0x33A0
    ctx->r3 = ADD32(ctx->r3, 0X33A0);
    // 0x8022A368: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022A36C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8022A370: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x8022A374: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x8022A378: sb          $v1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r3;
    // 0x8022A37C: sb          $zero, 0x2($v0)
    MEM_B(0X2, ctx->r2) = 0;
    // 0x8022A380: sb          $zero, 0x3($v0)
    MEM_B(0X3, ctx->r2) = 0;
    // 0x8022A384: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x8022A388: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x8022A38C: lw          $v1, 0x454($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X454);
    // 0x8022A390: jr          $ra
    // 0x8022A394: sw          $v1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r3;
    TRACE_RETURN()
    return;
    // 0x8022A394: sw          $v1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r3;
;}
RECOMP_FUNC void func_802447EC_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802447EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802447F0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802447F4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802447F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802447FC: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80244800: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80244804: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80244808: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8024480C: lw          $v0, 0x208C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X208C);
    // 0x80244810: jalr        $v0
    // 0x80244814: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80244814: nop

    after_0:
    // 0x80244818: addiu       $a0, $s0, 0xAC
    ctx->r4 = ADD32(ctx->r16, 0XAC);
    // 0x8024481C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80244820: jal         0x8009A3B4
    // 0x80244824: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80244824: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x80244828: lhu         $v0, 0xC0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XC0);
    // 0x8024482C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80244830: beq         $v0, $zero, L_8024484C
    if (ctx->r2 == 0) {
        // 0x80244834: nop
    
            goto L_8024484C;
    }
    // 0x80244834: nop

    // 0x80244838: lhu         $v0, 0xC0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XC0);
    // 0x8024483C: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80244840: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x80244844: andi        $v0, $v0, 0xFFFE
    ctx->r2 = ctx->r2 & 0XFFFE;
    // 0x80244848: sh          $v0, 0xC0($s0)
    MEM_H(0XC0, ctx->r16) = ctx->r2;
L_8024484C:
    // 0x8024484C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80244850: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80244854: jr          $ra
    // 0x80244858: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80244858: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80229CA4_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229CA4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80229CA8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229CAC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229CB0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80229CB4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80229CB8: lb          $v1, 0x2($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X2);
    // 0x80229CBC: lui         $s1, 0x8025
    ctx->r17 = S32(0X8025 << 16);
    // 0x80229CC0: lw          $s1, 0x5600($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X5600);
    // 0x80229CC4: sltiu       $v0, $v1, 0x7
    ctx->r2 = ctx->r3 < 0X7 ? 1 : 0;
    // 0x80229CC8: beq         $v0, $zero, L_80229DE0
    if (ctx->r2 == 0) {
        // 0x80229CCC: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80229DE0;
    }
    // 0x80229CCC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80229CD0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80229CD4: addu        $at, $at, $v0
    gpr jr_addend_80229CDC = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80229CD8: lw          $v0, 0x2CF8($at)
    ctx->r2 = ADD32(ctx->r1, 0X2CF8);
    // 0x80229CDC: jr          $v0
    // 0x80229CE0: nop

    switch (jr_addend_80229CDC >> 2) {
        case 0: goto L_80229CE4; break;
        case 1: goto L_80229D08; break;
        case 2: goto L_80229D2C; break;
        case 3: goto L_80229D54; break;
        case 4: goto L_80229D84; break;
        case 5: goto L_80229DBC; break;
        case 6: goto L_80229DE0; break;
        default: switch_error(__func__, 0x80229CDC, 0x80252CF8);
    }
    // 0x80229CE0: nop

L_80229CE4:
    // 0x80229CE4: jal         0x8006033C
    // 0x80229CE8: addiu       $a0, $zero, 0x608
    ctx->r4 = ADD32(0, 0X608);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80229CE8: addiu       $a0, $zero, 0x608
    ctx->r4 = ADD32(0, 0X608);
    after_0:
    // 0x80229CEC: beq         $v0, $zero, L_80229DE0
    if (ctx->r2 == 0) {
        // 0x80229CF0: nop
    
            goto L_80229DE0;
    }
    // 0x80229CF0: nop

    // 0x80229CF4: jal         0x80060590
    // 0x80229CF8: addiu       $a0, $zero, 0x608
    ctx->r4 = ADD32(0, 0X608);
    func_80060590_3B990(rdram, ctx);
        goto after_1;
    // 0x80229CF8: addiu       $a0, $zero, 0x608
    ctx->r4 = ADD32(0, 0X608);
    after_1:
    // 0x80229CFC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229D00: j           L_80229DD0
    // 0x80229D04: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
        goto L_80229DD0;
    // 0x80229D04: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
L_80229D08:
    // 0x80229D08: jal         0x8006033C
    // 0x80229D0C: addiu       $a0, $zero, 0x608
    ctx->r4 = ADD32(0, 0X608);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x80229D0C: addiu       $a0, $zero, 0x608
    ctx->r4 = ADD32(0, 0X608);
    after_2:
    // 0x80229D10: beq         $v0, $zero, L_80229DE0
    if (ctx->r2 == 0) {
        // 0x80229D14: nop
    
            goto L_80229DE0;
    }
    // 0x80229D14: nop

    // 0x80229D18: jal         0x80060590
    // 0x80229D1C: addiu       $a0, $zero, 0x608
    ctx->r4 = ADD32(0, 0X608);
    func_80060590_3B990(rdram, ctx);
        goto after_3;
    // 0x80229D1C: addiu       $a0, $zero, 0x608
    ctx->r4 = ADD32(0, 0X608);
    after_3:
    // 0x80229D20: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229D24: j           L_80229DD0
    // 0x80229D28: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
        goto L_80229DD0;
    // 0x80229D28: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
L_80229D2C:
    // 0x80229D2C: jal         0x8006033C
    // 0x80229D30: addiu       $a0, $zero, 0x608
    ctx->r4 = ADD32(0, 0X608);
    func_8006033C_3B73C(rdram, ctx);
        goto after_4;
    // 0x80229D30: addiu       $a0, $zero, 0x608
    ctx->r4 = ADD32(0, 0X608);
    after_4:
    // 0x80229D34: beq         $v0, $zero, L_80229DE0
    if (ctx->r2 == 0) {
        // 0x80229D38: nop
    
            goto L_80229DE0;
    }
    // 0x80229D38: nop

    // 0x80229D3C: jal         0x80060590
    // 0x80229D40: addiu       $a0, $zero, 0x608
    ctx->r4 = ADD32(0, 0X608);
    func_80060590_3B990(rdram, ctx);
        goto after_5;
    // 0x80229D40: addiu       $a0, $zero, 0x608
    ctx->r4 = ADD32(0, 0X608);
    after_5:
    // 0x80229D44: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x80229D48: addiu       $v1, $zero, 0x3C
    ctx->r3 = ADD32(0, 0X3C);
    // 0x80229D4C: j           L_80229DD8
    // 0x80229D50: sh          $v1, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r3;
        goto L_80229DD8;
    // 0x80229D50: sh          $v1, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r3;
L_80229D54:
    // 0x80229D54: lhu         $v0, 0x8($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8);
    // 0x80229D58: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80229D5C: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x80229D60: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229D64: bne         $v0, $zero, L_80229DE0
    if (ctx->r2 != 0) {
        // 0x80229D68: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80229DE0;
    }
    // 0x80229D68: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80229D6C: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x80229D70: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
    // 0x80229D74: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x80229D78: addiu       $v1, $zero, 0xF0
    ctx->r3 = ADD32(0, 0XF0);
    // 0x80229D7C: j           L_80229DD8
    // 0x80229D80: sh          $v1, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r3;
        goto L_80229DD8;
    // 0x80229D80: sh          $v1, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r3;
L_80229D84:
    // 0x80229D84: lhu         $v0, 0x8($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8);
    // 0x80229D88: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80229D8C: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x80229D90: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229D94: bne         $v0, $zero, L_80229DA4
    if (ctx->r2 != 0) {
        // 0x80229D98: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80229DA4;
    }
    // 0x80229D98: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80229D9C: j           L_80229DD0
    // 0x80229DA0: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
        goto L_80229DD0;
    // 0x80229DA0: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
L_80229DA4:
    // 0x80229DA4: jal         0x8006033C
    // 0x80229DA8: addiu       $a0, $zero, 0x60E
    ctx->r4 = ADD32(0, 0X60E);
    func_8006033C_3B73C(rdram, ctx);
        goto after_6;
    // 0x80229DA8: addiu       $a0, $zero, 0x60E
    ctx->r4 = ADD32(0, 0X60E);
    after_6:
    // 0x80229DAC: beq         $v0, $zero, L_80229DE0
    if (ctx->r2 == 0) {
        // 0x80229DB0: nop
    
            goto L_80229DE0;
    }
    // 0x80229DB0: nop

    // 0x80229DB4: j           L_80229DD4
    // 0x80229DB8: nop

        goto L_80229DD4;
    // 0x80229DB8: nop

L_80229DBC:
    // 0x80229DBC: jal         0x8006033C
    // 0x80229DC0: addiu       $a0, $zero, 0x61B
    ctx->r4 = ADD32(0, 0X61B);
    func_8006033C_3B73C(rdram, ctx);
        goto after_7;
    // 0x80229DC0: addiu       $a0, $zero, 0x61B
    ctx->r4 = ADD32(0, 0X61B);
    after_7:
    // 0x80229DC4: beq         $v0, $zero, L_80229DE0
    if (ctx->r2 == 0) {
        // 0x80229DC8: nop
    
            goto L_80229DE0;
    }
    // 0x80229DC8: nop

    // 0x80229DCC: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
L_80229DD0:
    // 0x80229DD0: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
L_80229DD4:
    // 0x80229DD4: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
L_80229DD8:
    // 0x80229DD8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80229DDC: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
L_80229DE0:
    // 0x80229DE0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80229DE4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80229DE8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229DEC: jr          $ra
    // 0x80229DF0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80229DF0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80236E74_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236E74: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80236E78: lw          $v0, 0x566C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X566C);
    // 0x80236E7C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80236E80: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80236E84: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80236E88: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80236E8C: addiu       $s1, $s0, 0x308
    ctx->r17 = ADD32(ctx->r16, 0X308);
    // 0x80236E90: bne         $v0, $zero, L_80237184
    if (ctx->r2 != 0) {
        // 0x80236E94: sw          $ra, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r31;
            goto L_80237184;
    }
    // 0x80236E94: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x80236E98: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80236E9C: lbu         $v1, -0x2348($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X2348);
    // 0x80236EA0: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80236EA4: lw          $v0, 0x563C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X563C);
    // 0x80236EA8: beql        $v0, $v1, L_80237188
    if (ctx->r2 == ctx->r3) {
        // 0x80236EAC: addiu       $a0, $s1, 0x24
        ctx->r4 = ADD32(ctx->r17, 0X24);
            goto L_80237188;
    }
    goto skip_0;
    // 0x80236EAC: addiu       $a0, $s1, 0x24
    ctx->r4 = ADD32(ctx->r17, 0X24);
    skip_0:
    // 0x80236EB0: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80236EB4: lw          $v0, 0x5640($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X5640);
    // 0x80236EB8: beq         $v0, $zero, L_80236ECC
    if (ctx->r2 == 0) {
        // 0x80236EBC: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_80236ECC;
    }
    // 0x80236EBC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80236EC0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80236EC4: j           L_80237174
    // 0x80236EC8: sw          $v0, 0x5640($at)
    MEM_W(0X5640, ctx->r1) = ctx->r2;
        goto L_80237174;
    // 0x80236EC8: sw          $v0, 0x5640($at)
    MEM_W(0X5640, ctx->r1) = ctx->r2;
L_80236ECC:
    // 0x80236ECC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80236ED0: lui         $t1, 0x8025
    ctx->r9 = S32(0X8025 << 16);
    // 0x80236ED4: addiu       $t1, $t1, 0x5644
    ctx->r9 = ADD32(ctx->r9, 0X5644);
    // 0x80236ED8: lui         $t0, 0x8025
    ctx->r8 = S32(0X8025 << 16);
    // 0x80236EDC: addiu       $t0, $t0, 0x5660
    ctx->r8 = ADD32(ctx->r8, 0X5660);
    // 0x80236EE0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
L_80236EE4:
    // 0x80236EE4: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80236EE8: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80236EEC: lbu         $v0, 0x1654($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1654);
    // 0x80236EF0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80236EF4: addu        $v0, $v0, $t1
    ctx->r2 = ADD32(ctx->r2, ctx->r9);
    // 0x80236EF8: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x80236EFC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80236F00: sw          $a0, 0x34E0($at)
    MEM_W(0X34E0, ctx->r1) = ctx->r4;
    // 0x80236F04: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80236F08: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80236F0C: lbu         $v0, 0x1655($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1655);
    // 0x80236F10: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80236F14: addu        $v0, $v0, $t1
    ctx->r2 = ADD32(ctx->r2, ctx->r9);
    // 0x80236F18: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x80236F1C: lh          $v1, 0x14($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X14);
    // 0x80236F20: lh          $v0, 0x14($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X14);
    // 0x80236F24: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80236F28: mult        $v1, $v1
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80236F2C: mflo        $v1
    ctx->r3 = lo;
    // 0x80236F30: lh          $a0, 0x18($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X18);
    // 0x80236F34: lh          $v0, 0x18($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X18);
    // 0x80236F38: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x80236F3C: mult        $a0, $a0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80236F40: mflo        $a0
    ctx->r4 = lo;
    // 0x80236F44: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x80236F48: addiu       $a2, $a2, 0x2
    ctx->r6 = ADD32(ctx->r6, 0X2);
    // 0x80236F4C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80236F50: sw          $a1, 0x34E4($at)
    MEM_W(0X34E4, ctx->r1) = ctx->r5;
    // 0x80236F54: slti        $v0, $a3, 0x3
    ctx->r2 = SIGNED(ctx->r7) < 0X3 ? 1 : 0;
    // 0x80236F58: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80236F5C: sw          $v1, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r3;
    // 0x80236F60: bne         $v0, $zero, L_80236EE4
    if (ctx->r2 != 0) {
        // 0x80236F64: addiu       $t0, $t0, 0x4
        ctx->r8 = ADD32(ctx->r8, 0X4);
            goto L_80236EE4;
    }
    // 0x80236F64: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x80236F68: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80236F6C: lui         $t4, 0x8025
    ctx->r12 = S32(0X8025 << 16);
    // 0x80236F70: addiu       $t4, $t4, 0x5644
    ctx->r12 = ADD32(ctx->r12, 0X5644);
    // 0x80236F74: lui         $t3, 0x8025
    ctx->r11 = S32(0X8025 << 16);
    // 0x80236F78: addiu       $t3, $t3, 0x5650
    ctx->r11 = ADD32(ctx->r11, 0X5650);
    // 0x80236F7C: addiu       $t6, $zero, -0x80
    ctx->r14 = ADD32(0, -0X80);
    // 0x80236F80: addiu       $t7, $zero, 0x8
    ctx->r15 = ADD32(0, 0X8);
    // 0x80236F84: addiu       $t2, $zero, 0xA
    ctx->r10 = ADD32(0, 0XA);
    // 0x80236F88: addiu       $t5, $zero, 0x7
    ctx->r13 = ADD32(0, 0X7);
    // 0x80236F8C: lui         $t0, 0x8025
    ctx->r8 = S32(0X8025 << 16);
    // 0x80236F90: addiu       $t0, $t0, 0x1654
    ctx->r8 = ADD32(ctx->r8, 0X1654);
    // 0x80236F94: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80236F98: lui         $t1, 0x8025
    ctx->r9 = S32(0X8025 << 16);
    // 0x80236F9C: addiu       $t1, $t1, 0x5660
    ctx->r9 = ADD32(ctx->r9, 0X5660);
L_80236FA0:
    // 0x80236FA0: lw          $v1, 0x0($t1)
    ctx->r3 = MEM_W(ctx->r9, 0X0);
    // 0x80236FA4: lui         $v0, 0x7F
    ctx->r2 = S32(0X7F << 16);
    // 0x80236FA8: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x80236FAC: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x80236FB0: bnel        $v0, $zero, L_80237160
    if (ctx->r2 != 0) {
        // 0x80236FB4: addiu       $t0, $t0, 0x2
        ctx->r8 = ADD32(ctx->r8, 0X2);
            goto L_80237160;
    }
    goto skip_1;
    // 0x80236FB4: addiu       $t0, $t0, 0x2
    ctx->r8 = ADD32(ctx->r8, 0X2);
    skip_1:
    // 0x80236FB8: lbu         $v0, 0x0($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0X0);
    // 0x80236FBC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80236FC0: addu        $v0, $v0, $t4
    ctx->r2 = ADD32(ctx->r2, ctx->r12);
    // 0x80236FC4: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x80236FC8: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80236FCC: sw          $a1, 0x34E0($at)
    MEM_W(0X34E0, ctx->r1) = ctx->r5;
    // 0x80236FD0: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80236FD4: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80236FD8: lbu         $v0, 0x1655($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1655);
    // 0x80236FDC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80236FE0: addu        $v0, $v0, $t4
    ctx->r2 = ADD32(ctx->r2, ctx->r12);
    // 0x80236FE4: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x80236FE8: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80236FEC: sw          $a0, 0x34E4($at)
    MEM_W(0X34E4, ctx->r1) = ctx->r4;
    // 0x80236FF0: lbu         $v0, 0x0($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0X0);
    // 0x80236FF4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80236FF8: addu        $v0, $v0, $t3
    ctx->r2 = ADD32(ctx->r2, ctx->r11);
    // 0x80236FFC: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80237000: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80237004: sw          $v0, 0x34E8($at)
    MEM_W(0X34E8, ctx->r1) = ctx->r2;
    // 0x80237008: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8023700C: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80237010: lbu         $v0, 0x1655($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1655);
    // 0x80237014: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80237018: addu        $v0, $v0, $t3
    ctx->r2 = ADD32(ctx->r2, ctx->r11);
    // 0x8023701C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80237020: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80237024: sw          $v0, 0x34EC($at)
    MEM_W(0X34EC, ctx->r1) = ctx->r2;
    // 0x80237028: lbu         $v0, 0xF($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XF);
    // 0x8023702C: lbu         $v1, 0xF($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XF);
    // 0x80237030: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80237034: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x80237038: beql        $v0, $zero, L_80237160
    if (ctx->r2 == 0) {
        // 0x8023703C: addiu       $t0, $t0, 0x2
        ctx->r8 = ADD32(ctx->r8, 0X2);
            goto L_80237160;
    }
    goto skip_2;
    // 0x8023703C: addiu       $t0, $t0, 0x2
    ctx->r8 = ADD32(ctx->r8, 0X2);
    skip_2:
    // 0x80237040: lbu         $v0, 0xE($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XE);
    // 0x80237044: andi        $v0, $v0, 0x4C
    ctx->r2 = ctx->r2 & 0X4C;
    // 0x80237048: bnel        $v0, $zero, L_80237160
    if (ctx->r2 != 0) {
        // 0x8023704C: addiu       $t0, $t0, 0x2
        ctx->r8 = ADD32(ctx->r8, 0X2);
            goto L_80237160;
    }
    goto skip_3;
    // 0x8023704C: addiu       $t0, $t0, 0x2
    ctx->r8 = ADD32(ctx->r8, 0X2);
    skip_3:
    // 0x80237050: lbu         $v0, 0xE($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XE);
    // 0x80237054: andi        $v0, $v0, 0x4C
    ctx->r2 = ctx->r2 & 0X4C;
    // 0x80237058: bnel        $v0, $zero, L_80237160
    if (ctx->r2 != 0) {
        // 0x8023705C: addiu       $t0, $t0, 0x2
        ctx->r8 = ADD32(ctx->r8, 0X2);
            goto L_80237160;
    }
    goto skip_4;
    // 0x8023705C: addiu       $t0, $t0, 0x2
    ctx->r8 = ADD32(ctx->r8, 0X2);
    skip_4:
    // 0x80237060: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80237064: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80237068: lbu         $v0, 0x1655($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1655);
    // 0x8023706C: sb          $v0, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r2;
    // 0x80237070: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x80237074: lw          $v1, 0x34E0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X34E0);
    // 0x80237078: lbu         $v0, 0xE($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XE);
    // 0x8023707C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80237080: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
    // 0x80237084: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x80237088: lw          $v1, 0x34E0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X34E0);
    // 0x8023708C: lbu         $v0, 0xF($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XF);
    // 0x80237090: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x80237094: beql        $v0, $zero, L_802370B4
    if (ctx->r2 == 0) {
        // 0x80237098: sb          $t5, 0x9($v1)
        MEM_B(0X9, ctx->r3) = ctx->r13;
            goto L_802370B4;
    }
    goto skip_5;
    // 0x80237098: sb          $t5, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r13;
    skip_5:
    // 0x8023709C: lbu         $v0, 0xE($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XE);
    // 0x802370A0: or          $v0, $v0, $t6
    ctx->r2 = ctx->r2 | ctx->r14;
    // 0x802370A4: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
    // 0x802370A8: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x802370AC: lw          $v0, 0x34E0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X34E0);
    // 0x802370B0: sb          $t7, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r15;
L_802370B4:
    // 0x802370B4: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x802370B8: lw          $v0, 0x34E8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X34E8);
    // 0x802370BC: sb          $t2, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r10;
    // 0x802370C0: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x802370C4: lw          $v0, 0x34E0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X34E0);
    // 0x802370C8: sh          $zero, 0xA($v0)
    MEM_H(0XA, ctx->r2) = 0;
    // 0x802370CC: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x802370D0: lw          $v0, 0x34E8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X34E8);
    // 0x802370D4: sh          $zero, 0xA($v0)
    MEM_H(0XA, ctx->r2) = 0;
    // 0x802370D8: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x802370DC: lw          $v1, 0x34E4($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X34E4);
    // 0x802370E0: lbu         $v0, 0x0($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0X0);
    // 0x802370E4: sb          $v0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r2;
    // 0x802370E8: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x802370EC: lw          $v1, 0x34E4($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X34E4);
    // 0x802370F0: lbu         $v0, 0xE($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XE);
    // 0x802370F4: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x802370F8: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
    // 0x802370FC: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x80237100: lw          $v1, 0x34E4($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X34E4);
    // 0x80237104: lbu         $v0, 0xF($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XF);
    // 0x80237108: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x8023710C: beql        $v0, $zero, L_8023712C
    if (ctx->r2 == 0) {
        // 0x80237110: sb          $t5, 0x9($v1)
        MEM_B(0X9, ctx->r3) = ctx->r13;
            goto L_8023712C;
    }
    goto skip_6;
    // 0x80237110: sb          $t5, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r13;
    skip_6:
    // 0x80237114: lbu         $v0, 0xE($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XE);
    // 0x80237118: or          $v0, $v0, $t6
    ctx->r2 = ctx->r2 | ctx->r14;
    // 0x8023711C: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
    // 0x80237120: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80237124: lw          $v0, 0x34E4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X34E4);
    // 0x80237128: sb          $t7, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r15;
L_8023712C:
    // 0x8023712C: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80237130: lw          $v0, 0x34EC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X34EC);
    // 0x80237134: sb          $t2, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r10;
    // 0x80237138: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8023713C: lw          $v0, 0x34E4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X34E4);
    // 0x80237140: sh          $zero, 0xA($v0)
    MEM_H(0XA, ctx->r2) = 0;
    // 0x80237144: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80237148: lw          $v0, 0x34EC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X34EC);
    // 0x8023714C: sh          $zero, 0xA($v0)
    MEM_H(0XA, ctx->r2) = 0;
    // 0x80237150: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80237154: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80237158: j           L_80237174
    // 0x8023715C: sw          $v0, 0x566C($at)
    MEM_W(0X566C, ctx->r1) = ctx->r2;
        goto L_80237174;
    // 0x8023715C: sw          $v0, 0x566C($at)
    MEM_W(0X566C, ctx->r1) = ctx->r2;
L_80237160:
    // 0x80237160: addiu       $a2, $a2, 0x2
    ctx->r6 = ADD32(ctx->r6, 0X2);
    // 0x80237164: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x80237168: slti        $v0, $a3, 0x3
    ctx->r2 = SIGNED(ctx->r7) < 0X3 ? 1 : 0;
    // 0x8023716C: bne         $v0, $zero, L_80236FA0
    if (ctx->r2 != 0) {
        // 0x80237170: addiu       $t1, $t1, 0x4
        ctx->r9 = ADD32(ctx->r9, 0X4);
            goto L_80236FA0;
    }
    // 0x80237170: addiu       $t1, $t1, 0x4
    ctx->r9 = ADD32(ctx->r9, 0X4);
L_80237174:
    // 0x80237174: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80237178: lbu         $v0, -0x2348($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X2348);
    // 0x8023717C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80237180: sw          $v0, 0x563C($at)
    MEM_W(0X563C, ctx->r1) = ctx->r2;
L_80237184:
    // 0x80237184: addiu       $a0, $s1, 0x24
    ctx->r4 = ADD32(ctx->r17, 0X24);
L_80237188:
    // 0x80237188: jal         0x800540D0
    // 0x8023718C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_800540D0_2F4D0(rdram, ctx);
        goto after_0;
    // 0x8023718C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80237190: beq         $v0, $zero, L_802371A4
    if (ctx->r2 == 0) {
        // 0x80237194: nop
    
            goto L_802371A4;
    }
    // 0x80237194: nop

    // 0x80237198: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8023719C: j           L_802371AC
    // 0x802371A0: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
        goto L_802371AC;
    // 0x802371A0: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
L_802371A4:
    // 0x802371A4: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x802371A8: andi        $v0, $v0, 0xFFEF
    ctx->r2 = ctx->r2 & 0XFFEF;
L_802371AC:
    // 0x802371AC: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x802371B0: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x802371B4: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x802371B8: beq         $v0, $zero, L_802371C8
    if (ctx->r2 == 0) {
        // 0x802371BC: nop
    
            goto L_802371C8;
    }
    // 0x802371BC: nop

    // 0x802371C0: jal         0x80238FA8
    // 0x802371C4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80238FA8_ovl10(rdram, ctx);
        goto after_1;
    // 0x802371C4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_802371C8:
    // 0x802371C8: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x802371CC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802371D0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802371D4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802371D8: lw          $v0, 0x128C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X128C);
    // 0x802371DC: jalr        $v0
    // 0x802371E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x802371E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x802371E4: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x802371E8: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x802371EC: beq         $v0, $zero, L_802372D8
    if (ctx->r2 == 0) {
        // 0x802371F0: nop
    
            goto L_802372D8;
    }
    // 0x802371F0: nop

    // 0x802371F4: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x802371F8: addiu       $v1, $v0, -0x1
    ctx->r3 = ADD32(ctx->r2, -0X1);
    // 0x802371FC: sltiu       $v0, $v1, 0xA
    ctx->r2 = ctx->r3 < 0XA ? 1 : 0;
    // 0x80237200: beq         $v0, $zero, L_802372C4
    if (ctx->r2 == 0) {
        // 0x80237204: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_802372C4;
    }
    // 0x80237204: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80237208: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8023720C: addu        $at, $at, $v0
    gpr jr_addend_80237214 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80237210: lw          $v0, 0x2F60($at)
    ctx->r2 = ADD32(ctx->r1, 0X2F60);
    // 0x80237214: jr          $v0
    // 0x80237218: nop

    switch (jr_addend_80237214 >> 2) {
        case 0: goto L_8023721C; break;
        case 1: goto L_802372C4; break;
        case 2: goto L_802372A0; break;
        case 3: goto L_80237294; break;
        case 4: goto L_80237284; break;
        case 5: goto L_802372B8; break;
        case 6: goto L_802372B8; break;
        case 7: goto L_802372C4; break;
        case 8: goto L_80237234; break;
        case 9: goto L_802372AC; break;
        default: switch_error(__func__, 0x80237214, 0x80252F60);
    }
    // 0x80237218: nop

L_8023721C:
    // 0x8023721C: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80237220: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80237224: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80237228: lbu         $v0, 0x165C($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X165C);
    // 0x8023722C: j           L_802372C8
    // 0x80237230: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_802372C8;
    // 0x80237230: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80237234:
    // 0x80237234: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x80237238: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8023723C: lh          $v1, 0x4A06($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X4A06);
    // 0x80237240: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80237244: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x80237248: addiu       $a2, $zero, 0x400
    ctx->r6 = ADD32(0, 0X400);
    // 0x8023724C: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x80237250: addiu       $a3, $a3, 0x49CC
    ctx->r7 = ADD32(ctx->r7, 0X49CC);
    // 0x80237254: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80237258: jal         0x8004FAEC
    // 0x8023725C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_8004FAEC_2AEEC(rdram, ctx);
        goto after_3;
    // 0x8023725C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_3:
    // 0x80237260: beq         $v0, $zero, L_80237278
    if (ctx->r2 == 0) {
        // 0x80237264: nop
    
            goto L_80237278;
    }
    // 0x80237264: nop

    // 0x80237268: jal         0x8023922C
    // 0x8023726C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8023922C_ovl10(rdram, ctx);
        goto after_4;
    // 0x8023726C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80237270: j           L_802372BC
    // 0x80237274: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_802372BC;
    // 0x80237274: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_80237278:
    // 0x80237278: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8023727C: j           L_802372B4
    // 0x80237280: andi        $v0, $v0, 0xFFDF
    ctx->r2 = ctx->r2 & 0XFFDF;
        goto L_802372B4;
    // 0x80237280: andi        $v0, $v0, 0xFFDF
    ctx->r2 = ctx->r2 & 0XFFDF;
L_80237284:
    // 0x80237284: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80237288: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x8023728C: beq         $v0, $zero, L_802372A4
    if (ctx->r2 == 0) {
        // 0x80237290: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802372A4;
    }
    // 0x80237290: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80237294:
    // 0x80237294: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80237298: j           L_802372C8
    // 0x8023729C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_802372C8;
    // 0x8023729C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_802372A0:
    // 0x802372A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802372A4:
    // 0x802372A4: j           L_802372C8
    // 0x802372A8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_802372C8;
    // 0x802372A8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_802372AC:
    // 0x802372AC: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x802372B0: andi        $v0, $v0, 0xFF7F
    ctx->r2 = ctx->r2 & 0XFF7F;
L_802372B4:
    // 0x802372B4: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_802372B8:
    // 0x802372B8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_802372BC:
    // 0x802372BC: j           L_802372C8
    // 0x802372C0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_802372C8;
    // 0x802372C0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_802372C4:
    // 0x802372C4: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_802372C8:
    // 0x802372C8: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x802372CC: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x802372D0: andi        $v0, $v0, 0xFFFE
    ctx->r2 = ctx->r2 & 0XFFFE;
    // 0x802372D4: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_802372D8:
    // 0x802372D8: lh          $v0, 0xA($s1)
    ctx->r2 = MEM_H(ctx->r17, 0XA);
    // 0x802372DC: beq         $v0, $zero, L_802372EC
    if (ctx->r2 == 0) {
        // 0x802372E0: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_802372EC;
    }
    // 0x802372E0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802372E4: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x802372E8: sh          $v0, 0xA($s1)
    MEM_H(0XA, ctx->r17) = ctx->r2;
L_802372EC:
    // 0x802372EC: lh          $v0, 0x52($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X52);
    // 0x802372F0: beq         $v0, $zero, L_80237300
    if (ctx->r2 == 0) {
        // 0x802372F4: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80237300;
    }
    // 0x802372F4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802372F8: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x802372FC: sh          $v0, 0x52($s1)
    MEM_H(0X52, ctx->r17) = ctx->r2;
L_80237300:
    // 0x80237300: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x80237304: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80237308: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8023730C: jr          $ra
    // 0x80237310: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80237310: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
