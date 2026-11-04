#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8002A710_5B10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002A710: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x8002A714: lui         $a0, 0x2
    ctx->r4 = S32(0X2 << 16);
    // 0x8002A718: ori         $a0, $a0, 0x5800
    ctx->r4 = ctx->r4 | 0X5800;
    // 0x8002A71C: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    // 0x8002A720: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8002A724: addiu       $v0, $zero, 0x46
    ctx->r2 = ADD32(0, 0X46);
    // 0x8002A728: sw          $ra, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r31;
    // 0x8002A72C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8002A730: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8002A734: jal         0x80025E1C
    // 0x8002A738: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_80025E1C_121C(rdram, ctx);
        goto after_0;
    // 0x8002A738: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_0:
    // 0x8002A73C: lui         $v1, 0x2
    ctx->r3 = S32(0X2 << 16);
    // 0x8002A740: ori         $v1, $v1, 0x5800
    ctx->r3 = ctx->r3 | 0X5800;
    // 0x8002A744: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8002A748: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x8002A74C: addiu       $v1, $zero, 0x40
    ctx->r3 = ADD32(0, 0X40);
    // 0x8002A750: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8002A754: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x8002A758: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x8002A75C: addiu       $v0, $zero, 0x5622
    ctx->r2 = ADD32(0, 0X5622);
    // 0x8002A760: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x8002A764: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x8002A768: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x8002A76C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8002A770: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    // 0x8002A774: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x8002A778: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x8002A77C: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x8002A780: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x8002A784: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    // 0x8002A788: sw          $v1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r3;
    // 0x8002A78C: jal         0x8008A110
    // 0x8002A790: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    func_8008A110_65510(rdram, ctx);
        goto after_1;
    // 0x8002A790: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    after_1:
    // 0x8002A794: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x8002A798: jal         0x8008A390
    // 0x8002A79C: addiu       $a0, $a0, -0x4004
    ctx->r4 = ADD32(ctx->r4, -0X4004);
    func_8008A390_65790(rdram, ctx);
        goto after_2;
    // 0x8002A79C: addiu       $a0, $a0, -0x4004
    ctx->r4 = ADD32(ctx->r4, -0X4004);
    after_2:
    // 0x8002A7A0: lw          $ra, 0x58($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X58);
    // 0x8002A7A4: jr          $ra
    // 0x8002A7A8: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    TRACE_RETURN()
    return;
    // 0x8002A7A8: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_800472F0_226F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800472F0: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x800472F4: lw          $v0, -0x72D4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X72D4);
    // 0x800472F8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800472FC: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80047300: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
    // 0x80047304: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80047308: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x8004730C: addiu       $s2, $s2, 0x76F0
    ctx->r18 = ADD32(ctx->r18, 0X76F0);
    // 0x80047310: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x80047314: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80047318: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8004731C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80047320: beq         $v0, $s2, L_80047590
    if (ctx->r2 == ctx->r18) {
        // 0x80047324: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_80047590;
    }
    // 0x80047324: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80047328: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
    // 0x8004732C: lui         $s1, 0x8018
    ctx->r17 = S32(0X8018 << 16);
    // 0x80047330: addiu       $s1, $s1, -0x4DAC
    ctx->r17 = ADD32(ctx->r17, -0X4DAC);
L_80047334:
    // 0x80047334: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80047338: lw          $v0, -0x25E0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X25E0);
    // 0x8004733C: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x80047340: addiu       $s0, $s0, 0x4028
    ctx->r16 = ADD32(ctx->r16, 0X4028);
    // 0x80047344: beq         $v0, $s0, L_80047558
    if (ctx->r2 == ctx->r16) {
        // 0x80047348: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80047558;
    }
    // 0x80047348: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8004734C: addiu       $s3, $s0, 0x8
    ctx->r19 = ADD32(ctx->r16, 0X8);
L_80047350:
    // 0x80047350: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x80047354: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x80047358: beq         $v1, $v0, L_80047544
    if (ctx->r3 == ctx->r2) {
        // 0x8004735C: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80047544;
    }
    // 0x8004735C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80047360: lh          $v1, -0x4($s3)
    ctx->r3 = MEM_H(ctx->r19, -0X4);
    // 0x80047364: lh          $a2, -0x2($s3)
    ctx->r6 = MEM_H(ctx->r19, -0X2);
    // 0x80047368: lw          $a1, 0x0($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X0);
    // 0x8004736C: sltiu       $v0, $v1, 0x8
    ctx->r2 = ctx->r3 < 0X8 ? 1 : 0;
    // 0x80047370: beq         $v0, $zero, L_8004753C
    if (ctx->r2 == 0) {
        // 0x80047374: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8004753C;
    }
    // 0x80047374: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80047378: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004737C: addu        $at, $at, $v0
    gpr jr_addend_80047384 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80047380: lw          $v0, 0x22B8($at)
    ctx->r2 = ADD32(ctx->r1, 0X22B8);
    // 0x80047384: jr          $v0
    // 0x80047388: nop

    switch (jr_addend_80047384 >> 2) {
        case 0: goto L_8004738C; break;
        case 1: goto L_800473A4; break;
        case 2: goto L_800473C0; break;
        case 3: goto L_800473D8; break;
        case 4: goto L_800473F4; break;
        case 5: goto L_80047494; break;
        case 6: goto L_800473F4; break;
        case 7: goto L_80047494; break;
        default: switch_error(__func__, 0x80047384, 0x800D22B8);
    }
    // 0x80047388: nop

L_8004738C:
    // 0x8004738C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80047390: lw          $a1, 0x0($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X0);
    // 0x80047394: jal         0x80047F2C
    // 0x80047398: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047F2C_2332C(rdram, ctx);
        goto after_0;
    // 0x80047398: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x8004739C: j           L_8004753C
    // 0x800473A0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
        goto L_8004753C;
    // 0x800473A0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
L_800473A4:
    // 0x800473A4: sw          $a1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r5;
    // 0x800473A8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x800473AC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x800473B0: lw          $a1, 0x0($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X0);
    // 0x800473B4: addu        $a3, $a2, $zero
    ctx->r7 = ADD32(ctx->r6, 0);
    // 0x800473B8: j           L_80047530
    // 0x800473BC: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
        goto L_80047530;
    // 0x800473BC: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
L_800473C0:
    // 0x800473C0: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x800473C4: lw          $a1, 0x0($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X0);
    // 0x800473C8: jal         0x80047F2C
    // 0x800473CC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80047F2C_2332C(rdram, ctx);
        goto after_1;
    // 0x800473CC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x800473D0: j           L_8004753C
    // 0x800473D4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
        goto L_8004753C;
    // 0x800473D4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
L_800473D8:
    // 0x800473D8: sw          $a1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r5;
    // 0x800473DC: sw          $s5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r21;
    // 0x800473E0: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x800473E4: lw          $a1, 0x0($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X0);
    // 0x800473E8: addu        $a3, $a2, $zero
    ctx->r7 = ADD32(ctx->r6, 0);
    // 0x800473EC: j           L_80047530
    // 0x800473F0: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
        goto L_80047530;
    // 0x800473F0: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
L_800473F4:
    // 0x800473F4: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x800473F8: lhu         $a0, 0x38($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X38);
    // 0x800473FC: sh          $a0, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r4;
    // 0x80047400: sh          $a0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r4;
    // 0x80047404: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80047408: lhu         $v1, 0x3A($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X3A);
    // 0x8004740C: sh          $v1, 0x1A($s1)
    MEM_H(0X1A, ctx->r17) = ctx->r3;
    // 0x80047410: sh          $v1, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r3;
    // 0x80047414: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80047418: lhu         $v0, 0x3C($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X3C);
    // 0x8004741C: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80047420: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80047424: sw          $a0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r4;
    // 0x80047428: sw          $a0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r4;
    // 0x8004742C: sw          $v1, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r3;
    // 0x80047430: sw          $v1, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r3;
    // 0x80047434: sh          $zero, 0x40($s1)
    MEM_H(0X40, ctx->r17) = 0;
    // 0x80047438: sh          $zero, 0x42($s1)
    MEM_H(0X42, ctx->r17) = 0;
    // 0x8004743C: sh          $zero, 0x44($s1)
    MEM_H(0X44, ctx->r17) = 0;
    // 0x80047440: sh          $zero, 0x30($s1)
    MEM_H(0X30, ctx->r17) = 0;
    // 0x80047444: sh          $zero, 0x32($s1)
    MEM_H(0X32, ctx->r17) = 0;
    // 0x80047448: sh          $zero, 0x34($s1)
    MEM_H(0X34, ctx->r17) = 0;
    // 0x8004744C: sh          $v0, 0x1C($s1)
    MEM_H(0X1C, ctx->r17) = ctx->r2;
    // 0x80047450: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80047454: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80047458: sw          $v0, 0x28($s1)
    MEM_W(0X28, ctx->r17) = ctx->r2;
    // 0x8004745C: sw          $v0, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r2;
    // 0x80047460: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80047464: lw          $v0, 0x14($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X14);
    // 0x80047468: sw          $v0, 0x74($s1)
    MEM_W(0X74, ctx->r17) = ctx->r2;
    // 0x8004746C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80047470: lw          $v0, 0x44($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X44);
    // 0x80047474: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x80047478: sw          $v0, 0x64($s1)
    MEM_W(0X64, ctx->r17) = ctx->r2;
    // 0x8004747C: lw          $a1, 0x0($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X0);
    // 0x80047480: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x80047484: jal         0x80047F2C
    // 0x80047488: addiu       $a0, $s1, -0x14
    ctx->r4 = ADD32(ctx->r17, -0X14);
    func_80047F2C_2332C(rdram, ctx);
        goto after_2;
    // 0x80047488: addiu       $a0, $s1, -0x14
    ctx->r4 = ADD32(ctx->r17, -0X14);
    after_2:
    // 0x8004748C: j           L_8004753C
    // 0x80047490: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
        goto L_8004753C;
    // 0x80047490: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
L_80047494:
    // 0x80047494: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80047498: lhu         $a0, 0x38($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X38);
    // 0x8004749C: sh          $a0, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r4;
    // 0x800474A0: sh          $a0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r4;
    // 0x800474A4: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x800474A8: lhu         $v1, 0x3A($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X3A);
    // 0x800474AC: sh          $v1, 0x1A($s1)
    MEM_H(0X1A, ctx->r17) = ctx->r3;
    // 0x800474B0: sh          $v1, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r3;
    // 0x800474B4: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x800474B8: lhu         $v0, 0x3C($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X3C);
    // 0x800474BC: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x800474C0: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x800474C4: sw          $a0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r4;
    // 0x800474C8: sw          $a0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r4;
    // 0x800474CC: sw          $v1, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r3;
    // 0x800474D0: sw          $v1, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r3;
    // 0x800474D4: sh          $zero, 0x40($s1)
    MEM_H(0X40, ctx->r17) = 0;
    // 0x800474D8: sh          $zero, 0x42($s1)
    MEM_H(0X42, ctx->r17) = 0;
    // 0x800474DC: sh          $zero, 0x44($s1)
    MEM_H(0X44, ctx->r17) = 0;
    // 0x800474E0: sh          $zero, 0x30($s1)
    MEM_H(0X30, ctx->r17) = 0;
    // 0x800474E4: sh          $zero, 0x32($s1)
    MEM_H(0X32, ctx->r17) = 0;
    // 0x800474E8: sh          $zero, 0x34($s1)
    MEM_H(0X34, ctx->r17) = 0;
    // 0x800474EC: sh          $v0, 0x1C($s1)
    MEM_H(0X1C, ctx->r17) = ctx->r2;
    // 0x800474F0: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x800474F4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x800474F8: sw          $v0, 0x28($s1)
    MEM_W(0X28, ctx->r17) = ctx->r2;
    // 0x800474FC: sw          $v0, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r2;
    // 0x80047500: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80047504: lw          $v0, 0x14($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X14);
    // 0x80047508: sw          $v0, 0x74($s1)
    MEM_W(0X74, ctx->r17) = ctx->r2;
    // 0x8004750C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80047510: lw          $v0, 0x44($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X44);
    // 0x80047514: sw          $a1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r5;
    // 0x80047518: sw          $s5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r21;
    // 0x8004751C: sw          $v0, 0x64($s1)
    MEM_W(0X64, ctx->r17) = ctx->r2;
    // 0x80047520: lw          $a1, 0x0($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X0);
    // 0x80047524: lw          $a2, 0x0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X0);
    // 0x80047528: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8004752C: addiu       $a0, $s1, -0x14
    ctx->r4 = ADD32(ctx->r17, -0X14);
L_80047530:
    // 0x80047530: jal         0x800475D4
    // 0x80047534: nop

    func_800475D4_229D4(rdram, ctx);
        goto after_3;
    // 0x80047534: nop

    after_3:
    // 0x80047538: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
L_8004753C:
    // 0x8004753C: bne         $a0, $zero, L_80047560
    if (ctx->r4 != 0) {
        // 0x80047540: nop
    
            goto L_80047560;
    }
    // 0x80047540: nop

L_80047544:
    // 0x80047544: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x80047548: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x8004754C: lw          $v0, -0x25E0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X25E0);
    // 0x80047550: bne         $s0, $v0, L_80047350
    if (ctx->r16 != ctx->r2) {
        // 0x80047554: addiu       $s3, $s3, 0xC
        ctx->r19 = ADD32(ctx->r19, 0XC);
            goto L_80047350;
    }
    // 0x80047554: addiu       $s3, $s3, 0xC
    ctx->r19 = ADD32(ctx->r19, 0XC);
L_80047558:
    // 0x80047558: beql        $a0, $zero, L_8004757C
    if (ctx->r4 == 0) {
        // 0x8004755C: addu        $s4, $zero, $zero
        ctx->r20 = ADD32(0, 0);
            goto L_8004757C;
    }
    goto skip_0;
    // 0x8004755C: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
    skip_0:
L_80047560:
    // 0x80047560: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x80047564: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x80047568: sh          $a0, 0x7C($v0)
    MEM_H(0X7C, ctx->r2) = ctx->r4;
    // 0x8004756C: slti        $v0, $s4, 0x9
    ctx->r2 = SIGNED(ctx->r20) < 0X9 ? 1 : 0;
    // 0x80047570: bne         $v0, $zero, L_80047580
    if (ctx->r2 != 0) {
        // 0x80047574: nop
    
            goto L_80047580;
    }
    // 0x80047574: nop

    // 0x80047578: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
L_8004757C:
    // 0x8004757C: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
L_80047580:
    // 0x80047580: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80047584: lw          $v0, -0x72D4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X72D4);
    // 0x80047588: bne         $s2, $v0, L_80047334
    if (ctx->r18 != ctx->r2) {
        // 0x8004758C: nop
    
            goto L_80047334;
    }
    // 0x8004758C: nop

L_80047590:
    // 0x80047590: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80047594: addiu       $v0, $v0, 0x4028
    ctx->r2 = ADD32(ctx->r2, 0X4028);
    // 0x80047598: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8004759C: sw          $v0, -0x25E0($at)
    MEM_W(-0X25E0, ctx->r1) = ctx->r2;
    // 0x800475A0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x800475A4: addiu       $v0, $v0, 0x76F0
    ctx->r2 = ADD32(ctx->r2, 0X76F0);
    // 0x800475A8: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x800475AC: sw          $v0, -0x72D4($at)
    MEM_W(-0X72D4, ctx->r1) = ctx->r2;
    // 0x800475B0: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x800475B4: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x800475B8: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x800475BC: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x800475C0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800475C4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800475C8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800475CC: jr          $ra
    // 0x800475D0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x800475D0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80032490_D890(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80032490: jr          $ra
    // 0x80032494: nop

    TRACE_RETURN()
    return;
    // 0x80032494: nop

;}
RECOMP_FUNC void func_80058784_33B84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80058784: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80058788: lbu         $v0, -0x3BC8($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3BC8);
    // 0x8005878C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80058790: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x80058794: addiu       $a0, $a0, -0x3C18
    ctx->r4 = ADD32(ctx->r4, -0X3C18);
    // 0x80058798: addiu       $v0, $v0, -0x3
    ctx->r2 = ADD32(ctx->r2, -0X3);
    // 0x8005879C: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x800587A0: sra         $v1, $v0, 24
    ctx->r3 = S32(SIGNED(ctx->r2) >> 24);
    // 0x800587A4: sltiu       $v0, $v1, 0x1B
    ctx->r2 = ctx->r3 < 0X1B ? 1 : 0;
    // 0x800587A8: beq         $v0, $zero, L_800587F8
    if (ctx->r2 == 0) {
        // 0x800587AC: sw          $ra, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r31;
            goto L_800587F8;
    }
    // 0x800587AC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x800587B0: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x800587B4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800587B8: addu        $at, $at, $v0
    gpr jr_addend_800587C0 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x800587BC: lw          $v0, 0x2548($at)
    ctx->r2 = ADD32(ctx->r1, 0X2548);
    // 0x800587C0: jr          $v0
    // 0x800587C4: nop

    switch (jr_addend_800587C0 >> 2) {
        case 0: goto L_800587C8; break;
        case 1: goto L_800587F8; break;
        case 2: goto L_800587F8; break;
        case 3: goto L_800587F8; break;
        case 4: goto L_800587F8; break;
        case 5: goto L_800587F8; break;
        case 6: goto L_800587F8; break;
        case 7: goto L_800587F8; break;
        case 8: goto L_800587F8; break;
        case 9: goto L_800587F8; break;
        case 10: goto L_800587F8; break;
        case 11: goto L_800587F8; break;
        case 12: goto L_800587E0; break;
        case 13: goto L_800587F8; break;
        case 14: goto L_800587F8; break;
        case 15: goto L_800587F8; break;
        case 16: goto L_800587E8; break;
        case 17: goto L_800587F8; break;
        case 18: goto L_800587F8; break;
        case 19: goto L_800587F8; break;
        case 20: goto L_800588D8; break;
        case 21: goto L_800587F8; break;
        case 22: goto L_800587F8; break;
        case 23: goto L_800587F8; break;
        case 24: goto L_800587C8; break;
        case 25: goto L_800587F0; break;
        case 26: goto L_800588D8; break;
        default: switch_error(__func__, 0x800587C0, 0x800D2548);
    }
    // 0x800587C4: nop

L_800587C8:
    // 0x800587C8: lb          $a0, 0x51($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X51);
    // 0x800587CC: slti        $v0, $a0, 0x3
    ctx->r2 = SIGNED(ctx->r4) < 0X3 ? 1 : 0;
    // 0x800587D0: beq         $v0, $zero, L_800587FC
    if (ctx->r2 == 0) {
        // 0x800587D4: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_800587FC;
    }
    // 0x800587D4: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x800587D8: j           L_800587FC
    // 0x800587DC: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
        goto L_800587FC;
    // 0x800587DC: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
L_800587E0:
    // 0x800587E0: j           L_800587FC
    // 0x800587E4: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
        goto L_800587FC;
    // 0x800587E4: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
L_800587E8:
    // 0x800587E8: j           L_800587FC
    // 0x800587EC: addiu       $v1, $zero, 0xA
    ctx->r3 = ADD32(0, 0XA);
        goto L_800587FC;
    // 0x800587EC: addiu       $v1, $zero, 0xA
    ctx->r3 = ADD32(0, 0XA);
L_800587F0:
    // 0x800587F0: j           L_800587FC
    // 0x800587F4: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
        goto L_800587FC;
    // 0x800587F4: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
L_800587F8:
    // 0x800587F8: lb          $v1, 0x50($a0)
    ctx->r3 = MEM_B(ctx->r4, 0X50);
L_800587FC:
    // 0x800587FC: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80058800: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x80058804: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x80058808: lbu         $a2, -0x171C($a2)
    ctx->r6 = MEM_BU(ctx->r6, -0X171C);
    // 0x8005880C: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x80058810: addu        $a3, $a3, $v0
    ctx->r7 = ADD32(ctx->r7, ctx->r2);
    // 0x80058814: lbu         $a3, -0x171B($a3)
    ctx->r7 = MEM_BU(ctx->r7, -0X171B);
    // 0x80058818: lui         $a1, 0x801A
    ctx->r5 = S32(0X801A << 16);
    // 0x8005881C: lw          $a1, -0x5858($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X5858);
    // 0x80058820: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x80058824: lhu         $v1, -0x730C($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X730C);
    // 0x80058828: addiu       $t0, $a2, 0x18
    ctx->r8 = ADD32(ctx->r6, 0X18);
    // 0x8005882C: addiu       $a2, $a2, 0x27
    ctx->r6 = ADD32(ctx->r6, 0X27);
    // 0x80058830: addiu       $v0, $a1, 0x28
    ctx->r2 = ADD32(ctx->r5, 0X28);
    // 0x80058834: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x80058838: sw          $v0, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r2;
    // 0x8005883C: lui         $v0, 0x900
    ctx->r2 = S32(0X900 << 16);
    // 0x80058840: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x80058844: addiu       $v0, $zero, 0x2C
    ctx->r2 = ADD32(0, 0X2C);
    // 0x80058848: sb          $v0, 0x7($a1)
    MEM_B(0X7, ctx->r5) = ctx->r2;
    // 0x8005884C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80058850: andi        $v1, $v1, 0x7
    ctx->r3 = ctx->r3 & 0X7;
    // 0x80058854: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x80058858: sb          $v0, 0x6($a1)
    MEM_B(0X6, ctx->r5) = ctx->r2;
    // 0x8005885C: sb          $v0, 0x5($a1)
    MEM_B(0X5, ctx->r5) = ctx->r2;
    // 0x80058860: sb          $v0, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r2;
    // 0x80058864: addiu       $v0, $zero, 0xF0
    ctx->r2 = ADD32(0, 0XF0);
    // 0x80058868: addiu       $a0, $v1, 0xF
    ctx->r4 = ADD32(ctx->r3, 0XF);
    // 0x8005886C: sb          $v0, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r2;
    // 0x80058870: sb          $v0, 0x15($a1)
    MEM_B(0X15, ctx->r5) = ctx->r2;
    // 0x80058874: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80058878: sb          $v1, 0xC($a1)
    MEM_B(0XC, ctx->r5) = ctx->r3;
    // 0x8005887C: sb          $a0, 0x14($a1)
    MEM_B(0X14, ctx->r5) = ctx->r4;
    // 0x80058880: sb          $v1, 0x1C($a1)
    MEM_B(0X1C, ctx->r5) = ctx->r3;
    // 0x80058884: sb          $v0, 0x1D($a1)
    MEM_B(0X1D, ctx->r5) = ctx->r2;
    // 0x80058888: sb          $a0, 0x24($a1)
    MEM_B(0X24, ctx->r5) = ctx->r4;
    // 0x8005888C: sb          $v0, 0x25($a1)
    MEM_B(0X25, ctx->r5) = ctx->r2;
    // 0x80058890: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80058894: lw          $a0, 0x497C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X497C);
    // 0x80058898: addiu       $v0, $a3, -0x8
    ctx->r2 = ADD32(ctx->r7, -0X8);
    // 0x8005889C: addiu       $a3, $a3, 0x7
    ctx->r7 = ADD32(ctx->r7, 0X7);
    // 0x800588A0: sh          $v0, 0x12($a1)
    MEM_H(0X12, ctx->r5) = ctx->r2;
    // 0x800588A4: sh          $v0, 0xA($a1)
    MEM_H(0XA, ctx->r5) = ctx->r2;
    // 0x800588A8: addiu       $v0, $zero, 0x8C
    ctx->r2 = ADD32(0, 0X8C);
    // 0x800588AC: sh          $v0, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r2;
    // 0x800588B0: addiu       $v0, $zero, 0x3E80
    ctx->r2 = ADD32(0, 0X3E80);
    // 0x800588B4: sh          $t0, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r8;
    // 0x800588B8: sh          $t0, 0x8($a1)
    MEM_H(0X8, ctx->r5) = ctx->r8;
    // 0x800588BC: sh          $a2, 0x20($a1)
    MEM_H(0X20, ctx->r5) = ctx->r6;
    // 0x800588C0: sh          $a2, 0x10($a1)
    MEM_H(0X10, ctx->r5) = ctx->r6;
    // 0x800588C4: sh          $a3, 0x22($a1)
    MEM_H(0X22, ctx->r5) = ctx->r7;
    // 0x800588C8: sh          $a3, 0x1A($a1)
    MEM_H(0X1A, ctx->r5) = ctx->r7;
    // 0x800588CC: sh          $v0, 0xE($a1)
    MEM_H(0XE, ctx->r5) = ctx->r2;
    // 0x800588D0: jal         0x800302C8
    // 0x800588D4: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    func_800302C8_B6C8(rdram, ctx);
        goto after_0;
    // 0x800588D4: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    after_0:
L_800588D8:
    // 0x800588D8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x800588DC: jr          $ra
    // 0x800588E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x800588E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80076898_51C98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80076898: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007689C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x800768A0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x800768A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800768A8: lb          $v1, 0x6($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X6);
    // 0x800768AC: beq         $v1, $zero, L_800768C4
    if (ctx->r3 == 0) {
        // 0x800768B0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_800768C4;
    }
    // 0x800768B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800768B4: beq         $v1, $v0, L_8007691C
    if (ctx->r3 == ctx->r2) {
        // 0x800768B8: lui         $v1, 0x8
        ctx->r3 = S32(0X8 << 16);
            goto L_8007691C;
    }
    // 0x800768B8: lui         $v1, 0x8
    ctx->r3 = S32(0X8 << 16);
    // 0x800768BC: j           L_8007693C
    // 0x800768C0: nop

        goto L_8007693C;
    // 0x800768C0: nop

L_800768C4:
    // 0x800768C4: jal         0x80061724
    // 0x800768C8: nop

    func_80061724_3CB24(rdram, ctx);
        goto after_0;
    // 0x800768C8: nop

    after_0:
    // 0x800768CC: lb          $v1, 0x4($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X4);
    // 0x800768D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800768D4: bne         $v1, $v0, L_800768E8
    if (ctx->r3 != ctx->r2) {
        // 0x800768D8: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_800768E8;
    }
    // 0x800768D8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x800768DC: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x800768E0: j           L_800768F0
    // 0x800768E4: lw          $a1, 0x280C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X280C);
        goto L_800768F0;
    // 0x800768E4: lw          $a1, 0x280C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X280C);
L_800768E8:
    // 0x800768E8: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x800768EC: lw          $a1, 0x2860($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2860);
L_800768F0:
    // 0x800768F0: jal         0x80061510
    // 0x800768F4: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    func_80061510_3C910(rdram, ctx);
        goto after_1;
    // 0x800768F4: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_1:
    // 0x800768F8: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x800768FC: lw          $a1, 0x27F8($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X27F8);
    // 0x80076900: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80076904: jal         0x80061510
    // 0x80076908: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    func_80061510_3C910(rdram, ctx);
        goto after_2;
    // 0x80076908: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_2:
    // 0x8007690C: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x80076910: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80076914: j           L_80076938
    // 0x80076918: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
        goto L_80076938;
    // 0x80076918: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
L_8007691C:
    // 0x8007691C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80076920: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80076924: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80076928: beq         $v0, $zero, L_80076938
    if (ctx->r2 == 0) {
        // 0x8007692C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80076938;
    }
    // 0x8007692C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80076930: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    // 0x80076934: sh          $zero, 0x6($s0)
    MEM_H(0X6, ctx->r16) = 0;
L_80076938:
    // 0x80076938: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8007693C:
    // 0x8007693C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80076940: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80076944: jr          $ra
    // 0x80076948: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80076948: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8005A630_35A30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8005A630: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8005A634: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8005A638: lui         $s0, 0x801C
    ctx->r16 = S32(0X801C << 16);
    // 0x8005A63C: addiu       $s0, $s0, -0x3E36
    ctx->r16 = ADD32(ctx->r16, -0X3E36);
    // 0x8005A640: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8005A644: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8005A648: lh          $v0, 0x0($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X0);
    // 0x8005A64C: bne         $v0, $zero, L_8005A818
    if (ctx->r2 != 0) {
        // 0x8005A650: nop
    
            goto L_8005A818;
    }
    // 0x8005A650: nop

    // 0x8005A654: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x8005A658: lhu         $v1, -0x783E($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X783E);
    // 0x8005A65C: andi        $v0, $v1, 0x10
    ctx->r2 = ctx->r3 & 0X10;
    // 0x8005A660: beq         $v0, $zero, L_8005A670
    if (ctx->r2 == 0) {
        // 0x8005A664: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_8005A670;
    }
    // 0x8005A664: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8005A668: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005A66C: sh          $v0, -0x3DAE($at)
    MEM_H(-0X3DAE, ctx->r1) = ctx->r2;
L_8005A670:
    // 0x8005A670: andi        $v0, $v1, 0x40
    ctx->r2 = ctx->r3 & 0X40;
    // 0x8005A674: beq         $v0, $zero, L_8005A684
    if (ctx->r2 == 0) {
        // 0x8005A678: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8005A684;
    }
    // 0x8005A678: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8005A67C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005A680: sh          $v0, -0x3DAE($at)
    MEM_H(-0X3DAE, ctx->r1) = ctx->r2;
L_8005A684:
    // 0x8005A684: lh          $v1, 0x88($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X88);
    // 0x8005A688: lw          $v0, 0x56($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X56);
    // 0x8005A68C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8005A690: sw          $v0, 0x56($s0)
    MEM_W(0X56, ctx->r16) = ctx->r2;
    // 0x8005A694: slti        $v0, $v0, 0xD
    ctx->r2 = SIGNED(ctx->r2) < 0XD ? 1 : 0;
    // 0x8005A698: beql        $v0, $zero, L_8005A6A0
    if (ctx->r2 == 0) {
        // 0x8005A69C: sw          $zero, 0x56($s0)
        MEM_W(0X56, ctx->r16) = 0;
            goto L_8005A6A0;
    }
    goto skip_0;
    // 0x8005A69C: sw          $zero, 0x56($s0)
    MEM_W(0X56, ctx->r16) = 0;
    skip_0:
L_8005A6A0:
    // 0x8005A6A0: lw          $v0, 0x56($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X56);
    // 0x8005A6A4: bgez        $v0, L_8005A6B0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8005A6A8: addiu       $v0, $zero, 0xC
        ctx->r2 = ADD32(0, 0XC);
            goto L_8005A6B0;
    }
    // 0x8005A6A8: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x8005A6AC: sw          $v0, 0x56($s0)
    MEM_W(0X56, ctx->r16) = ctx->r2;
L_8005A6B0:
    // 0x8005A6B0: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8005A6B4: lw          $v0, -0x3DE0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3DE0);
    // 0x8005A6B8: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x8005A6BC: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8005A6C0: lbu         $a0, -0x14B0($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X14B0);
    // 0x8005A6C4: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x8005A6C8: addiu       $s1, $s1, -0x14B0
    ctx->r17 = ADD32(ctx->r17, -0X14B0);
    // 0x8005A6CC: jal         0x8006033C
    // 0x8005A6D0: addiu       $a0, $a0, 0x4C0
    ctx->r4 = ADD32(ctx->r4, 0X4C0);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x8005A6D0: addiu       $a0, $a0, 0x4C0
    ctx->r4 = ADD32(ctx->r4, 0X4C0);
    after_0:
    // 0x8005A6D4: bne         $v0, $zero, L_8005A6EC
    if (ctx->r2 != 0) {
        // 0x8005A6D8: nop
    
            goto L_8005A6EC;
    }
    // 0x8005A6D8: nop

    // 0x8005A6DC: lh          $v0, 0x88($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X88);
    // 0x8005A6E0: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8005A6E4: j           L_8005A818
    // 0x8005A6E8: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
        goto L_8005A818;
    // 0x8005A6E8: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
L_8005A6EC:
    // 0x8005A6EC: lh          $v0, 0x88($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X88);
    // 0x8005A6F0: beq         $v0, $zero, L_8005A740
    if (ctx->r2 == 0) {
        // 0x8005A6F4: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8005A740;
    }
    // 0x8005A6F4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8005A6F8: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8005A6FC: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
    // 0x8005A700: jal         0x80061798
    // 0x8005A704: sh          $zero, 0x88($s0)
    MEM_H(0X88, ctx->r16) = 0;
    func_80061798_3CB98(rdram, ctx);
        goto after_1;
    // 0x8005A704: sh          $zero, 0x88($s0)
    MEM_H(0X88, ctx->r16) = 0;
    after_1:
    // 0x8005A708: lw          $a0, 0x56($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X56);
    // 0x8005A70C: jal         0x80069850
    // 0x8005A710: nop

    func_80069850_44C50(rdram, ctx);
        goto after_2;
    // 0x8005A710: nop

    after_2:
    // 0x8005A714: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8005A718: lw          $a1, 0x5998($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X5998);
    // 0x8005A71C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8005A720: jal         0x80061510
    // 0x8005A724: addiu       $a2, $zero, 0x83
    ctx->r6 = ADD32(0, 0X83);
    func_80061510_3C910(rdram, ctx);
        goto after_3;
    // 0x8005A724: addiu       $a2, $zero, 0x83
    ctx->r6 = ADD32(0, 0X83);
    after_3:
    // 0x8005A728: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005A72C: sh          $zero, -0x3DB4($at)
    MEM_H(-0X3DB4, ctx->r1) = 0;
    // 0x8005A730: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005A734: sh          $zero, -0x3DB6($at)
    MEM_H(-0X3DB6, ctx->r1) = 0;
    // 0x8005A738: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005A73C: sh          $zero, -0x3DB8($at)
    MEM_H(-0X3DB8, ctx->r1) = 0;
L_8005A740:
    // 0x8005A740: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8005A744: lhu         $v0, -0x783A($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X783A);
    // 0x8005A748: andi        $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 & 0X8000;
    // 0x8005A74C: beq         $v0, $zero, L_8005A780
    if (ctx->r2 == 0) {
        // 0x8005A750: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8005A780;
    }
    // 0x8005A750: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8005A754: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8005A758: lbu         $v1, -0x3E3D($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3E3D);
    // 0x8005A75C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005A760: sh          $v0, -0x3DB0($at)
    MEM_H(-0X3DB0, ctx->r1) = ctx->r2;
    // 0x8005A764: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8005A768: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005A76C: sb          $v1, -0x3E3D($at)
    MEM_B(-0X3E3D, ctx->r1) = ctx->r3;
    // 0x8005A770: jal         0x80061798
    // 0x8005A774: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_80061798_3CB98(rdram, ctx);
        goto after_4;
    // 0x8005A774: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_4:
    // 0x8005A778: jal         0x80061798
    // 0x8005A77C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80061798_3CB98(rdram, ctx);
        goto after_5;
    // 0x8005A77C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_5:
L_8005A780:
    // 0x8005A780: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8005A784: lhu         $v0, -0x783A($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X783A);
    // 0x8005A788: andi        $v0, $v0, 0x6000
    ctx->r2 = ctx->r2 & 0X6000;
    // 0x8005A78C: beq         $v0, $zero, L_8005A818
    if (ctx->r2 == 0) {
        // 0x8005A790: nop
    
            goto L_8005A818;
    }
    // 0x8005A790: nop

    // 0x8005A794: jal         0x80061798
    // 0x8005A798: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_80061798_3CB98(rdram, ctx);
        goto after_6;
    // 0x8005A798: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_6:
    // 0x8005A79C: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8005A7A0: lw          $a0, -0x3DE0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3DE0);
    // 0x8005A7A4: addu        $v0, $a0, $s1
    ctx->r2 = ADD32(ctx->r4, ctx->r17);
    // 0x8005A7A8: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x8005A7AC: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8005A7B0: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8005A7B4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8005A7B8: lbu         $v1, 0x4EA4($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X4EA4);
    // 0x8005A7BC: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x8005A7C0: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8005A7C4: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8005A7C8: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x8005A7CC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8005A7D0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8005A7D4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8005A7D8: lhu         $v0, -0x196C($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X196C);
    // 0x8005A7DC: sll         $a0, $v0, 2
    ctx->r4 = S32(ctx->r2 << 2);
    // 0x8005A7E0: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8005A7E4: jal         0x8006982C
    // 0x8005A7E8: sll         $a0, $a0, 1
    ctx->r4 = S32(ctx->r4 << 1);
    func_8006982C_44C2C(rdram, ctx);
        goto after_7;
    // 0x8005A7E8: sll         $a0, $a0, 1
    ctx->r4 = S32(ctx->r4 << 1);
    after_7:
    // 0x8005A7EC: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8005A7F0: lw          $a1, 0x5998($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X5998);
    // 0x8005A7F4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8005A7F8: jal         0x80061510
    // 0x8005A7FC: addiu       $a2, $zero, 0x99
    ctx->r6 = ADD32(0, 0X99);
    func_80061510_3C910(rdram, ctx);
        goto after_8;
    // 0x8005A7FC: addiu       $a2, $zero, 0x99
    ctx->r6 = ADD32(0, 0X99);
    after_8:
    // 0x8005A800: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8005A804: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005A808: sh          $v0, -0x3DAC($at)
    MEM_H(-0X3DAC, ctx->r1) = ctx->r2;
    // 0x8005A80C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8005A810: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005A814: sh          $v0, -0x3DB0($at)
    MEM_H(-0X3DB0, ctx->r1) = ctx->r2;
L_8005A818:
    // 0x8005A818: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8005A81C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8005A820: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8005A824: jr          $ra
    // 0x8005A828: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8005A828: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80033468_E868(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80033468: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x8003346C: sw          $s2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r18;
    // 0x80033470: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x80033474: sw          $s3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r19;
    // 0x80033478: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x8003347C: sw          $s0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r16;
    // 0x80033480: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x80033484: addiu       $s0, $s0, 0x4390
    ctx->r16 = ADD32(ctx->r16, 0X4390);
    // 0x80033488: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8003348C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80033490: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80033494: sw          $ra, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r31;
    // 0x80033498: jal         0x8009A3B4
    // 0x8003349C: sw          $s1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r17;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8003349C: sw          $s1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r17;
    after_0:
    // 0x800334A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x800334A4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x800334A8: jal         0x8009A3B4
    // 0x800334AC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x800334AC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x800334B0: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x800334B4: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x800334B8: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x800334BC: mult        $a0, $a0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800334C0: mflo        $a0
    ctx->r4 = lo;
    // 0x800334C4: lw          $v1, 0x8($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X8);
    // 0x800334C8: lw          $v0, 0x8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X8);
    // 0x800334CC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x800334D0: mult        $v0, $v0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800334D4: mflo        $v0
    ctx->r2 = lo;
    // 0x800334D8: addu        $s0, $a0, $v0
    ctx->r16 = ADD32(ctx->r4, ctx->r2);
    // 0x800334DC: nop

    // 0x800334E0: jal         0x80032424
    // 0x800334E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80032424_D824(rdram, ctx);
        goto after_2;
    // 0x800334E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x800334E8: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x800334EC: beq         $s1, $zero, L_80033528
    if (ctx->r17 == 0) {
        // 0x800334F0: nop
    
            goto L_80033528;
    }
    // 0x800334F0: nop

    // 0x800334F4: div         $zero, $s0, $s1
    lo = S32(S64(S32(ctx->r16)) / S64(S32(ctx->r17))); hi = S32(S64(S32(ctx->r16)) % S64(S32(ctx->r17)));
    // 0x800334F8: bne         $s1, $zero, L_80033504
    if (ctx->r17 != 0) {
        // 0x800334FC: nop
    
            goto L_80033504;
    }
    // 0x800334FC: nop

    // 0x80033500: break       7
    do_break(2147693824);
L_80033504:
    // 0x80033504: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80033508: bne         $s1, $at, L_8003351C
    if (ctx->r17 != ctx->r1) {
        // 0x8003350C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8003351C;
    }
    // 0x8003350C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80033510: bne         $s0, $at, L_8003351C
    if (ctx->r16 != ctx->r1) {
        // 0x80033514: nop
    
            goto L_8003351C;
    }
    // 0x80033514: nop

    // 0x80033518: break       6
    do_break(2147693848);
L_8003351C:
    // 0x8003351C: mflo        $v0
    ctx->r2 = lo;
    // 0x80033520: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x80033524: sra         $s1, $v0, 1
    ctx->r17 = S32(SIGNED(ctx->r2) >> 1);
L_80033528:
    // 0x80033528: lw          $v1, 0x0($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X0);
    // 0x8003352C: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x80033530: lw          $v0, 0x8($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X8);
    // 0x80033534: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x80033538: subu        $a0, $v1, $a0
    ctx->r4 = SUB32(ctx->r3, ctx->r4);
    // 0x8003353C: jal         0x80032664
    // 0x80033540: subu        $a1, $v0, $a1
    ctx->r5 = SUB32(ctx->r2, ctx->r5);
    func_80032664_DA64(rdram, ctx);
        goto after_3;
    // 0x80033540: subu        $a1, $v0, $a1
    ctx->r5 = SUB32(ctx->r2, ctx->r5);
    after_3:
    // 0x80033544: lw          $v1, 0x4($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X4);
    // 0x80033548: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x8003354C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80033550: addiu       $s0, $v0, 0x800
    ctx->r16 = ADD32(ctx->r2, 0X800);
    // 0x80033554: jal         0x80032664
    // 0x80033558: subu        $a0, $v1, $a0
    ctx->r4 = SUB32(ctx->r3, ctx->r4);
    func_80032664_DA64(rdram, ctx);
        goto after_4;
    // 0x80033558: subu        $a0, $v1, $a0
    ctx->r4 = SUB32(ctx->r3, ctx->r4);
    after_4:
    // 0x8003355C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80033560: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80033564: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x80033568: jal         0x80032FC0
    // 0x8003356C: negu        $a3, $v0
    ctx->r7 = SUB32(0, ctx->r2);
    func_80032FC0_E3C0(rdram, ctx);
        goto after_5;
    // 0x8003356C: negu        $a3, $v0
    ctx->r7 = SUB32(0, ctx->r2);
    after_5:
    // 0x80033570: lw          $ra, 0x80($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X80);
    // 0x80033574: lw          $s3, 0x7C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X7C);
    // 0x80033578: lw          $s2, 0x78($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X78);
    // 0x8003357C: lw          $s1, 0x74($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X74);
    // 0x80033580: lw          $s0, 0x70($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X70);
    // 0x80033584: jr          $ra
    // 0x80033588: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    TRACE_RETURN()
    return;
    // 0x80033588: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
;}
RECOMP_FUNC void __osInitialize_autodetect(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8009F960: jr          $ra
    // 0x8009F964: nop

    TRACE_RETURN()
    return;
    // 0x8009F964: nop

;}
RECOMP_FUNC void func_80090690_6BA90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80090690: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80090694: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80090698: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8009069C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800906A0: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x800906A4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800906A8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800906AC: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x800906B0: lw          $v1, 0x48($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X48);
    // 0x800906B4: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x800906B8: addiu       $v0, $zero, 0x170
    ctx->r2 = ADD32(0, 0X170);
    // 0x800906BC: beq         $v1, $zero, L_80090710
    if (ctx->r3 == 0) {
        // 0x800906C0: sh          $v0, 0x10($sp)
        MEM_H(0X10, ctx->r29) = ctx->r2;
            goto L_80090710;
    }
    // 0x800906C0: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x800906C4: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x800906C8: addiu       $a2, $zero, 0xB8
    ctx->r6 = ADD32(0, 0XB8);
    // 0x800906CC: jal         0x8008FF70
    // 0x800906D0: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    func_8008FF70_6B370(rdram, ctx);
        goto after_0;
    // 0x800906D0: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    after_0:
    // 0x800906D4: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x800906D8: lui         $v1, 0xFF
    ctx->r3 = S32(0XFF << 16);
    // 0x800906DC: lh          $v0, 0x10($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X10);
    // 0x800906E0: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x800906E4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x800906E8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x800906EC: lui         $v1, 0xA00
    ctx->r3 = S32(0XA00 << 16);
    // 0x800906F0: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x800906F4: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x800906F8: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x800906FC: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x80090700: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80090704: ori         $v0, $v0, 0x170
    ctx->r2 = ctx->r2 | 0X170;
    // 0x80090708: j           L_8009082C
    // 0x8009070C: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
        goto L_8009082C;
    // 0x8009070C: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
L_80090710:
    // 0x80090710: lwc1        $f0, 0x44($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X44);
    // 0x80090714: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80090718: ldc1        $f2, 0x2EA0($at)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r1, 0X2EA0);
    // 0x8009071C: cvt.d.s     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.d = CVT_D_S(ctx->f0.fl);
    // 0x80090720: c.lt.d      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.d < ctx->f0.d;
    // 0x80090724: nop

    // 0x80090728: bc1f        L_80090744
    if (!c1cs) {
        // 0x8009072C: nop
    
            goto L_80090744;
    }
    // 0x8009072C: nop

    // 0x80090730: lui         $at, 0x3FFF
    ctx->r1 = S32(0X3FFF << 16);
    // 0x80090734: ori         $at, $at, 0xFEB0
    ctx->r1 = ctx->r1 | 0XFEB0;
    // 0x80090738: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8009073C: nop

    // 0x80090740: swc1        $f0, 0x44($s1)
    MEM_W(0X44, ctx->r17) = ctx->f0.u32l;
L_80090744:
    // 0x80090744: lwc1        $f0, 0x44($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X44);
    // 0x80090748: lui         $at, 0x4700
    ctx->r1 = S32(0X4700 << 16);
    // 0x8009074C: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x80090750: nop

    // 0x80090754: mul.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x80090758: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x8009075C: mfc1        $v0, $f2
    ctx->r2 = (int32_t)ctx->f2.u32l;
    // 0x80090760: nop

    // 0x80090764: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x80090768: nop

    // 0x8009076C: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80090770: div.s       $f4, $f4, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = DIV_S(ctx->f4.fl, ctx->f20.fl);
    // 0x80090774: lui         $at, 0x4338
    ctx->r1 = S32(0X4338 << 16);
    // 0x80090778: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8009077C: nop

    // 0x80090780: mul.s       $f0, $f4, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x80090784: lwc1        $f2, 0x4C($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X4C);
    // 0x80090788: add.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x8009078C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80090790: trunc.w.s   $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.u32l = TRUNC_W_S(ctx->f2.fl);
    // 0x80090794: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80090798: nop

    // 0x8009079C: mtc1        $a2, $f0
    ctx->f0.u32l = ctx->r6;
    // 0x800907A0: nop

    // 0x800907A4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x800907A8: sub.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x800907AC: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x800907B0: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    // 0x800907B4: swc1        $f4, 0x44($s1)
    MEM_W(0X44, ctx->r17) = ctx->f4.u32l;
    // 0x800907B8: jal         0x8008FF70
    // 0x800907BC: swc1        $f2, 0x4C($s1)
    MEM_W(0X4C, ctx->r17) = ctx->f2.u32l;
    func_8008FF70_6B370(rdram, ctx);
        goto after_1;
    // 0x800907BC: swc1        $f2, 0x4C($s1)
    MEM_W(0X4C, ctx->r17) = ctx->f2.u32l;
    after_1:
    // 0x800907C0: lwc1        $f0, 0x44($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X44);
    // 0x800907C4: mul.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x800907C8: lw          $a0, 0x40($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X40);
    // 0x800907CC: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x800907D0: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x800907D4: mfc1        $s0, $f2
    ctx->r16 = (int32_t)ctx->f2.u32l;
    // 0x800907D8: nop

    // 0x800907DC: jal         0x80099BB0
    // 0x800907E0: andi        $s0, $s0, 0xFFFF
    ctx->r16 = ctx->r16 & 0XFFFF;
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_2;
    // 0x800907E0: andi        $s0, $s0, 0xFFFF
    ctx->r16 = ctx->r16 & 0XFFFF;
    after_2:
    // 0x800907E4: lui         $v1, 0xFF
    ctx->r3 = S32(0XFF << 16);
    // 0x800907E8: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x800907EC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x800907F0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x800907F4: lui         $v1, 0x500
    ctx->r3 = S32(0X500 << 16);
    // 0x800907F8: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x800907FC: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x80090800: lw          $v0, 0x50($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X50);
    // 0x80090804: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x80090808: lhu         $v1, 0x10($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X10);
    // 0x8009080C: sll         $s0, $s0, 14
    ctx->r16 = S32(ctx->r16 << 14);
    // 0x80090810: sll         $v0, $v0, 30
    ctx->r2 = S32(ctx->r2 << 30);
    // 0x80090814: or          $v0, $v0, $s0
    ctx->r2 = ctx->r2 | ctx->r16;
    // 0x80090818: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8009081C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80090820: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80090824: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x80090828: sw          $zero, 0x50($s1)
    MEM_W(0X50, ctx->r17) = 0;
L_8009082C:
    // 0x8009082C: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x80090830: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80090834: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80090838: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8009083C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80090840: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x80090844: jr          $ra
    // 0x80090848: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80090848: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80048994_23D94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80048994: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x80048998: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x8004899C: lw          $s1, 0x7C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X7C);
    // 0x800489A0: addu        $t0, $a0, $zero
    ctx->r8 = ADD32(ctx->r4, 0);
    // 0x800489A4: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x800489A8: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x800489AC: sw          $ra, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r31;
    // 0x800489B0: sw          $s3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r19;
    // 0x800489B4: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x800489B8: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
    // 0x800489BC: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    // 0x800489C0: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x800489C4: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x800489C8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800489CC: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x800489D0: lw          $v1, 0x4($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X4);
    // 0x800489D4: lw          $a0, 0x4($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X4);
    // 0x800489D8: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x800489DC: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x800489E0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800489E4: sw          $v0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r2;
    // 0x800489E8: lw          $v1, 0x8($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X8);
    // 0x800489EC: lw          $a0, 0x8($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X8);
    // 0x800489F0: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    // 0x800489F4: lui         $a1, 0xFFF
    ctx->r5 = S32(0XFFF << 16);
    // 0x800489F8: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x800489FC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80048A00: sw          $v0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r2;
    // 0x80048A04: lw          $v0, 0x54($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X54);
    // 0x80048A08: ori         $a1, $a1, 0xFFF
    ctx->r5 = ctx->r5 | 0XFFF;
    // 0x80048A0C: lw          $s3, 0x78($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X78);
    // 0x80048A10: and         $v0, $v0, $a1
    ctx->r2 = ctx->r2 & ctx->r5;
    // 0x80048A14: beq         $v0, $zero, L_80048B24
    if (ctx->r2 == 0) {
        // 0x80048A18: nop
    
            goto L_80048B24;
    }
    // 0x80048A18: nop

    // 0x80048A1C: lhu         $a0, 0x5C($t0)
    ctx->r4 = MEM_HU(ctx->r8, 0X5C);
    // 0x80048A20: negu        $a0, $a0
    ctx->r4 = SUB32(0, ctx->r4);
    // 0x80048A24: andi        $a0, $a0, 0xFFF
    ctx->r4 = ctx->r4 & 0XFFF;
    // 0x80048A28: sh          $a0, 0x48($sp)
    MEM_H(0X48, ctx->r29) = ctx->r4;
    // 0x80048A2C: lhu         $v0, 0x5E($t0)
    ctx->r2 = MEM_HU(ctx->r8, 0X5E);
    // 0x80048A30: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80048A34: andi        $t1, $v0, 0xFFF
    ctx->r9 = ctx->r2 & 0XFFF;
    // 0x80048A38: sh          $t1, 0x4A($sp)
    MEM_H(0X4A, ctx->r29) = ctx->r9;
    // 0x80048A3C: lhu         $v0, 0x60($t0)
    ctx->r2 = MEM_HU(ctx->r8, 0X60);
    // 0x80048A40: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80048A44: andi        $a3, $v0, 0xFFF
    ctx->r7 = ctx->r2 & 0XFFF;
    // 0x80048A48: sh          $a3, 0x4C($sp)
    MEM_H(0X4C, ctx->r29) = ctx->r7;
    // 0x80048A4C: lhu         $v1, 0x54($t0)
    ctx->r3 = MEM_HU(ctx->r8, 0X54);
    // 0x80048A50: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80048A54: sh          $v1, 0x40($sp)
    MEM_H(0X40, ctx->r29) = ctx->r3;
    // 0x80048A58: lhu         $v0, 0x56($t0)
    ctx->r2 = MEM_HU(ctx->r8, 0X56);
    // 0x80048A5C: andi        $a2, $v0, 0xFFF
    ctx->r6 = ctx->r2 & 0XFFF;
    // 0x80048A60: sh          $a2, 0x42($sp)
    MEM_H(0X42, ctx->r29) = ctx->r6;
    // 0x80048A64: lhu         $v0, 0x58($t0)
    ctx->r2 = MEM_HU(ctx->r8, 0X58);
    // 0x80048A68: negu        $v1, $v1
    ctx->r3 = SUB32(0, ctx->r3);
    // 0x80048A6C: andi        $a1, $v0, 0xFFF
    ctx->r5 = ctx->r2 & 0XFFF;
    // 0x80048A70: bne         $a0, $v1, L_80048A90
    if (ctx->r4 != ctx->r3) {
        // 0x80048A74: sh          $a1, 0x44($sp)
        MEM_H(0X44, ctx->r29) = ctx->r5;
            goto L_80048A90;
    }
    // 0x80048A74: sh          $a1, 0x44($sp)
    MEM_H(0X44, ctx->r29) = ctx->r5;
    // 0x80048A78: negu        $v0, $a2
    ctx->r2 = SUB32(0, ctx->r6);
    // 0x80048A7C: bne         $t1, $v0, L_80048A94
    if (ctx->r9 != ctx->r2) {
        // 0x80048A80: addiu       $s0, $sp, 0x30
        ctx->r16 = ADD32(ctx->r29, 0X30);
            goto L_80048A94;
    }
    // 0x80048A80: addiu       $s0, $sp, 0x30
    ctx->r16 = ADD32(ctx->r29, 0X30);
    // 0x80048A84: negu        $v0, $a1
    ctx->r2 = SUB32(0, ctx->r5);
    // 0x80048A88: beq         $a3, $v0, L_80048B24
    if (ctx->r7 == ctx->r2) {
        // 0x80048A8C: nop
    
            goto L_80048B24;
    }
    // 0x80048A8C: nop

L_80048A90:
    // 0x80048A90: addiu       $s0, $sp, 0x30
    ctx->r16 = ADD32(ctx->r29, 0X30);
L_80048A94:
    // 0x80048A94: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80048A98: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x80048A9C: jal         0x8009A3B4
    // 0x80048AA0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80048AA0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_0:
    // 0x80048AA4: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x80048AA8: jal         0x80031428
    // 0x80048AAC: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_80031428_C828(rdram, ctx);
        goto after_1;
    // 0x80048AAC: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_1:
    // 0x80048AB0: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80048AB4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80048AB8: jal         0x8004DD50
    // 0x80048ABC: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_8004DD50_29150(rdram, ctx);
        goto after_2;
    // 0x80048ABC: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_2:
    // 0x80048AC0: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x80048AC4: jal         0x80031600
    // 0x80048AC8: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_80031600_CA00(rdram, ctx);
        goto after_3;
    // 0x80048AC8: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_3:
    // 0x80048ACC: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80048AD0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80048AD4: jal         0x8004DD50
    // 0x80048AD8: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_8004DD50_29150(rdram, ctx);
        goto after_4;
    // 0x80048AD8: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_4:
    // 0x80048ADC: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x80048AE0: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x80048AE4: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x80048AE8: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x80048AEC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80048AF0: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x80048AF4: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x80048AF8: lw          $a0, 0x4($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X4);
    // 0x80048AFC: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x80048B00: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x80048B04: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80048B08: sw          $v0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r2;
    // 0x80048B0C: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x80048B10: lw          $a0, 0x8($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X8);
    // 0x80048B14: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    // 0x80048B18: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x80048B1C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80048B20: sw          $v0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r2;
L_80048B24:
    // 0x80048B24: lw          $ra, 0x60($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X60);
    // 0x80048B28: lw          $s3, 0x5C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X5C);
    // 0x80048B2C: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x80048B30: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x80048B34: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x80048B38: jr          $ra
    // 0x80048B3C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    TRACE_RETURN()
    return;
    // 0x80048B3C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_80039F18_15318(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80039F18: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80039F1C: lw          $v1, 0x55A0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X55A0);
    // 0x80039F20: sltu        $v0, $a0, $v1
    ctx->r2 = ctx->r4 < ctx->r3 ? 1 : 0;
    // 0x80039F24: bne         $v0, $zero, L_80039F60
    if (ctx->r2 != 0) {
        // 0x80039F28: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80039F60;
    }
    // 0x80039F28: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80039F2C: subu        $v1, $a0, $v1
    ctx->r3 = SUB32(ctx->r4, ctx->r3);
    // 0x80039F30: lui         $v0, 0xAAAA
    ctx->r2 = S32(0XAAAA << 16);
    // 0x80039F34: ori         $v0, $v0, 0xAAAB
    ctx->r2 = ctx->r2 | 0XAAAB;
    // 0x80039F38: multu       $v1, $v0
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80039F3C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x80039F40: lw          $v1, -0x2660($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X2660);
    // 0x80039F44: mfhi        $a1
    ctx->r5 = hi;
    // 0x80039F48: srl         $a0, $a1, 5
    ctx->r4 = S32(U32(ctx->r5) >> 5);
    // 0x80039F4C: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x80039F50: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80039F54: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80039F58: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80039F5C: lhu         $v0, 0x24($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X24);
L_80039F60:
    // 0x80039F60: jr          $ra
    // 0x80039F64: nop

    TRACE_RETURN()
    return;
    // 0x80039F64: nop

;}
RECOMP_FUNC void func_8009390C_6ED0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8009390C: lw          $a1, 0xC($a0)
    ctx->r5 = MEM_W(ctx->r4, 0XC);
    // 0x80093910: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x80093914: lw          $a2, 0x8($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X8);
    // 0x80093918: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8009391C: lbu         $a0, 0x6($a2)
    ctx->r4 = MEM_BU(ctx->r6, 0X6);
    // 0x80093920: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80093924: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80093928: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8009392C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80093930: sb          $a0, -0x3C3A($at)
    MEM_B(-0X3C3A, ctx->r1) = ctx->r4;
    // 0x80093934: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x80093938: lhu         $a0, 0x2($a2)
    ctx->r4 = MEM_HU(ctx->r6, 0X2);
    // 0x8009393C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80093940: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80093944: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80093948: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8009394C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80093950: sh          $a0, -0x3C3E($at)
    MEM_H(-0X3C3E, ctx->r1) = ctx->r4;
    // 0x80093954: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x80093958: lhu         $a0, 0x0($a2)
    ctx->r4 = MEM_HU(ctx->r6, 0X0);
    // 0x8009395C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80093960: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80093964: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80093968: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8009396C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80093970: sh          $a0, -0x3C40($at)
    MEM_H(-0X3C40, ctx->r1) = ctx->r4;
    // 0x80093974: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x80093978: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8009397C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80093980: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80093984: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80093988: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8009398C: sh          $zero, -0x3C3C($at)
    MEM_H(-0X3C3C, ctx->r1) = 0;
    // 0x80093990: jr          $ra
    // 0x80093994: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    TRACE_RETURN()
    return;
    // 0x80093994: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_80091E00_6D200(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80091E00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80091E04: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80091E08: jal         0x80091EA0
    // 0x80091E0C: nop

    func_80091EA0_6D2A0(rdram, ctx);
        goto after_0;
    // 0x80091E0C: nop

    after_0:
    // 0x80091E10: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80091E14: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x80091E18: lui         $v0, 0xD00
    ctx->r2 = S32(0XD00 << 16);
    // 0x80091E1C: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x80091E20: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80091E24: lw          $a0, -0xEEC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0XEEC);
    // 0x80091E28: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x80091E2C: lui         $v0, 0x62E
    ctx->r2 = S32(0X62E << 16);
    // 0x80091E30: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x80091E34: lw          $a0, 0x48($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X48);
    // 0x80091E38: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x80091E3C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80091E40: sw          $a0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r4;
    // 0x80091E44: jr          $ra
    // 0x80091E48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80091E48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80091E4C: nop

;}
RECOMP_FUNC void func_8002E6B4_9AB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002E6B4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8002E6B8: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8002E6BC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8002E6C0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8002E6C4: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x8002E6C8: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8002E6CC: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x8002E6D0: addiu       $s2, $s2, -0x1390
    ctx->r18 = ADD32(ctx->r18, -0X1390);
    // 0x8002E6D4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8002E6D8: addiu       $a1, $zero, 0x1C0
    ctx->r5 = ADD32(0, 0X1C0);
    // 0x8002E6DC: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8002E6E0: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x8002E6E4: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x8002E6E8: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x8002E6EC: jal         0x8009A2B0
    // 0x8002E6F0: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    bzero_recomp(rdram, ctx);
        goto after_0;
    // 0x8002E6F0: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    after_0:
    // 0x8002E6F4: addu        $s3, $s0, $zero
    ctx->r19 = ADD32(ctx->r16, 0);
    // 0x8002E6F8: sll         $s0, $s0, 16
    ctx->r16 = S32(ctx->r16 << 16);
    // 0x8002E6FC: sra         $s0, $s0, 16
    ctx->r16 = S32(SIGNED(ctx->r16) >> 16);
    // 0x8002E700: blez        $s0, L_8002E758
    if (SIGNED(ctx->r16) <= 0) {
        // 0x8002E704: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_8002E758;
    }
    // 0x8002E704: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8002E708: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x8002E70C: addiu       $a3, $a3, -0x7830
    ctx->r7 = ADD32(ctx->r7, -0X7830);
    // 0x8002E710: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8002E714: addiu       $a1, $s1, 0xC
    ctx->r5 = ADD32(ctx->r17, 0XC);
L_8002E718:
    // 0x8002E718: sw          $s1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r17;
    // 0x8002E71C: lbu         $v0, 0x1($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X1);
    // 0x8002E720: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
    // 0x8002E724: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x8002E728: srl         $v0, $v0, 5
    ctx->r2 = S32(U32(ctx->r2) >> 5);
    // 0x8002E72C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8002E730: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x8002E734: srl         $v1, $v1, 5
    ctx->r3 = S32(U32(ctx->r3) >> 5);
    // 0x8002E738: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8002E73C: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x8002E740: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x8002E744: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x8002E748: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x8002E74C: slt         $v0, $a2, $s0
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x8002E750: bne         $v0, $zero, L_8002E718
    if (ctx->r2 != 0) {
        // 0x8002E754: addiu       $a1, $a1, 0x14
        ctx->r5 = ADD32(ctx->r5, 0X14);
            goto L_8002E718;
    }
    // 0x8002E754: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
L_8002E758:
    // 0x8002E758: lui         $s6, 0x8020
    ctx->r22 = S32(0X8020 << 16);
    // 0x8002E75C: addiu       $s6, $s6, -0x1390
    ctx->r22 = ADD32(ctx->r22, -0X1390);
    // 0x8002E760: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8002E764: sw          $s6, 0x2728($at)
    MEM_W(0X2728, ctx->r1) = ctx->r22;
    // 0x8002E768: sll         $v0, $s3, 16
    ctx->r2 = S32(ctx->r19 << 16);
    // 0x8002E76C: sra         $s4, $v0, 16
    ctx->r20 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8002E770: blez        $s4, L_8002E8CC
    if (SIGNED(ctx->r20) <= 0) {
        // 0x8002E774: addiu       $s3, $zero, 0x4
        ctx->r19 = ADD32(0, 0X4);
            goto L_8002E8CC;
    }
    // 0x8002E774: addiu       $s3, $zero, 0x4
    ctx->r19 = ADD32(0, 0X4);
    // 0x8002E778: addu        $s1, $s6, $zero
    ctx->r17 = ADD32(ctx->r22, 0);
    // 0x8002E77C: addiu       $s0, $s1, 0x4
    ctx->r16 = ADD32(ctx->r17, 0X4);
    // 0x8002E780: addiu       $v0, $s4, -0x1
    ctx->r2 = ADD32(ctx->r20, -0X1);
    // 0x8002E784: blez        $v0, L_8002E834
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8002E788: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_8002E834;
    }
    // 0x8002E788: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x8002E78C: addu        $s5, $v0, $zero
    ctx->r21 = ADD32(ctx->r2, 0);
L_8002E790:
    // 0x8002E790: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8002E794: jal         0x8002E31C
    // 0x8002E798: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8002E31C_971C(rdram, ctx);
        goto after_1;
    // 0x8002E798: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8002E79C: blez        $v0, L_8002E824
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8002E7A0: subu        $v0, $s0, $s1
        ctx->r2 = SUB32(ctx->r16, ctx->r17);
            goto L_8002E824;
    }
    // 0x8002E7A0: subu        $v0, $s0, $s1
    ctx->r2 = SUB32(ctx->r16, ctx->r17);
    // 0x8002E7A4: div         $zero, $v0, $s3
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r19))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r19)));
    // 0x8002E7A8: bne         $s3, $zero, L_8002E7B4
    if (ctx->r19 != 0) {
        // 0x8002E7AC: nop
    
            goto L_8002E7B4;
    }
    // 0x8002E7AC: nop

    // 0x8002E7B0: break       7
    do_break(2147674032);
L_8002E7B4:
    // 0x8002E7B4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8002E7B8: bne         $s3, $at, L_8002E7CC
    if (ctx->r19 != ctx->r1) {
        // 0x8002E7BC: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8002E7CC;
    }
    // 0x8002E7BC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8002E7C0: bne         $v0, $at, L_8002E7CC
    if (ctx->r2 != ctx->r1) {
        // 0x8002E7C4: nop
    
            goto L_8002E7CC;
    }
    // 0x8002E7C4: nop

    // 0x8002E7C8: break       6
    do_break(2147674056);
L_8002E7CC:
    // 0x8002E7CC: mflo        $v0
    ctx->r2 = lo;
    // 0x8002E7D0: slti        $v0, $v0, 0x2
    ctx->r2 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x8002E7D4: nop

    // 0x8002E7D8: beq         $v0, $zero, L_8002E7EC
    if (ctx->r2 == 0) {
        // 0x8002E7DC: addiu       $v0, $s1, 0x4
        ctx->r2 = ADD32(ctx->r17, 0X4);
            goto L_8002E7EC;
    }
    // 0x8002E7DC: addiu       $v0, $s1, 0x4
    ctx->r2 = ADD32(ctx->r17, 0X4);
    // 0x8002E7E0: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8002E7E4: j           L_8002E80C
    // 0x8002E7E8: sw          $s0, 0x2728($at)
    MEM_W(0X2728, ctx->r1) = ctx->r16;
        goto L_8002E80C;
    // 0x8002E7E8: sw          $s0, 0x2728($at)
    MEM_W(0X2728, ctx->r1) = ctx->r16;
L_8002E7EC:
    // 0x8002E7EC: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8002E7F0: sw          $v0, 0x2728($at)
    MEM_W(0X2728, ctx->r1) = ctx->r2;
    // 0x8002E7F4: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x8002E7F8: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x8002E7FC: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x8002E800: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x8002E804: lw          $v0, 0x2728($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2728);
    // 0x8002E808: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
L_8002E80C:
    // 0x8002E80C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x8002E810: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x8002E814: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x8002E818: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
    // 0x8002E81C: lui         $s1, 0x8016
    ctx->r17 = S32(0X8016 << 16);
    // 0x8002E820: lw          $s1, 0x2728($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X2728);
L_8002E824:
    // 0x8002E824: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8002E828: slt         $v0, $s2, $s5
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r21) ? 1 : 0;
    // 0x8002E82C: bne         $v0, $zero, L_8002E790
    if (ctx->r2 != 0) {
        // 0x8002E830: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_8002E790;
    }
    // 0x8002E830: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_8002E834:
    // 0x8002E834: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x8002E838: lw          $v0, 0x2728($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2728);
    // 0x8002E83C: subu        $v0, $v0, $s6
    ctx->r2 = SUB32(ctx->r2, ctx->r22);
    // 0x8002E840: div         $zero, $v0, $s3
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r19))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r19)));
    // 0x8002E844: bne         $s3, $zero, L_8002E850
    if (ctx->r19 != 0) {
        // 0x8002E848: nop
    
            goto L_8002E850;
    }
    // 0x8002E848: nop

    // 0x8002E84C: break       7
    do_break(2147674188);
L_8002E850:
    // 0x8002E850: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8002E854: bne         $s3, $at, L_8002E868
    if (ctx->r19 != ctx->r1) {
        // 0x8002E858: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8002E868;
    }
    // 0x8002E858: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8002E85C: bne         $v0, $at, L_8002E868
    if (ctx->r2 != ctx->r1) {
        // 0x8002E860: nop
    
            goto L_8002E868;
    }
    // 0x8002E860: nop

    // 0x8002E864: break       6
    do_break(2147674212);
L_8002E868:
    // 0x8002E868: mflo        $v0
    ctx->r2 = lo;
    // 0x8002E86C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8002E870: sw          $s1, 0x2728($at)
    MEM_W(0X2728, ctx->r1) = ctx->r17;
    // 0x8002E874: addiu       $s0, $v0, 0x1
    ctx->r16 = ADD32(ctx->r2, 0X1);
    // 0x8002E878: slti        $v0, $s0, 0x2
    ctx->r2 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
    // 0x8002E87C: bne         $v0, $zero, L_8002E8A4
    if (ctx->r2 != 0) {
        // 0x8002E880: addiu       $a0, $s1, 0x4
        ctx->r4 = ADD32(ctx->r17, 0X4);
            goto L_8002E8A4;
    }
    // 0x8002E880: addiu       $a0, $s1, 0x4
    ctx->r4 = ADD32(ctx->r17, 0X4);
    // 0x8002E884: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8002E888: addiu       $a0, $a0, -0x1390
    ctx->r4 = ADD32(ctx->r4, -0X1390);
    // 0x8002E88C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8002E890: lui         $a3, 0x8003
    ctx->r7 = S32(0X8003 << 16);
    // 0x8002E894: addiu       $a3, $a3, -0x1CE4
    ctx->r7 = ADD32(ctx->r7, -0X1CE4);
    // 0x8002E898: jal         0x8002E34C
    // 0x8002E89C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_8002E34C_974C(rdram, ctx);
        goto after_2;
    // 0x8002E89C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_2:
    // 0x8002E8A0: addiu       $a0, $s1, 0x4
    ctx->r4 = ADD32(ctx->r17, 0X4);
L_8002E8A4:
    // 0x8002E8A4: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8002E8A8: sw          $a0, 0x2728($at)
    MEM_W(0X2728, ctx->r1) = ctx->r4;
    // 0x8002E8AC: subu        $s0, $s4, $s0
    ctx->r16 = SUB32(ctx->r20, ctx->r16);
    // 0x8002E8B0: slti        $v0, $s0, 0x2
    ctx->r2 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
    // 0x8002E8B4: bne         $v0, $zero, L_8002E8CC
    if (ctx->r2 != 0) {
        // 0x8002E8B8: addu        $a1, $s0, $zero
        ctx->r5 = ADD32(ctx->r16, 0);
            goto L_8002E8CC;
    }
    // 0x8002E8B8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8002E8BC: lui         $a3, 0x8003
    ctx->r7 = S32(0X8003 << 16);
    // 0x8002E8C0: addiu       $a3, $a3, -0x1CE4
    ctx->r7 = ADD32(ctx->r7, -0X1CE4);
    // 0x8002E8C4: jal         0x8002E34C
    // 0x8002E8C8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_8002E34C_974C(rdram, ctx);
        goto after_3;
    // 0x8002E8C8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_3:
L_8002E8CC:
    // 0x8002E8CC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8002E8D0: lw          $v0, -0x1390($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1390);
    // 0x8002E8D4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8002E8D8: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x8002E8DC: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x8002E8E0: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x8002E8E4: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x8002E8E8: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8002E8EC: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8002E8F0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8002E8F4: jr          $ra
    // 0x8002E8F8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8002E8F8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8008666C_61A6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008666C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80086670: lui         $a0, 0x8018
    ctx->r4 = S32(0X8018 << 16);
    // 0x80086674: addiu       $a0, $a0, -0x3C20
    ctx->r4 = ADD32(ctx->r4, -0X3C20);
    // 0x80086678: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x8008667C: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x80086680: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x80086684: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x80086688: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x8008668C: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80086690: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80086694: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80086698: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8008669C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800866A0: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x800866A4: sh          $zero, -0x3420($at)
    MEM_H(-0X3420, ctx->r1) = 0;
    // 0x800866A8: jal         0x8009A2B0
    // 0x800866AC: addiu       $a1, $zero, 0x800
    ctx->r5 = ADD32(0, 0X800);
    bzero_recomp(rdram, ctx);
        goto after_0;
    // 0x800866AC: addiu       $a1, $zero, 0x800
    ctx->r5 = ADD32(0, 0X800);
    after_0:
    // 0x800866B0: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x800866B4: addiu       $s7, $sp, 0x10
    ctx->r23 = ADD32(ctx->r29, 0X10);
    // 0x800866B8: addiu       $s5, $zero, -0x1
    ctx->r21 = ADD32(0, -0X1);
    // 0x800866BC: lui         $fp, 0x8000
    ctx->r30 = S32(0X8000 << 16);
    // 0x800866C0: addiu       $s3, $zero, 0x4
    ctx->r19 = ADD32(0, 0X4);
L_800866C4:
    // 0x800866C4: addu        $t4, $zero, $zero
    ctx->r12 = ADD32(0, 0);
    // 0x800866C8: sll         $s6, $s2, 2
    ctx->r22 = S32(ctx->r18 << 2);
    // 0x800866CC: addiu       $s1, $zero, 0x4
    ctx->r17 = ADD32(0, 0X4);
L_800866D0:
    // 0x800866D0: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x800866D4: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x800866D8: lui         $a3, 0x8000
    ctx->r7 = S32(0X8000 << 16);
    // 0x800866DC: addu        $t1, $zero, $zero
    ctx->r9 = ADD32(0, 0);
    // 0x800866E0: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    // 0x800866E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800866E8: beq         $v0, $zero, L_80086804
    if (ctx->r2 == 0) {
        // 0x800866EC: sll         $s4, $t4, 2
        ctx->r20 = S32(ctx->r12 << 2);
            goto L_80086804;
    }
    // 0x800866EC: sll         $s4, $t4, 2
    ctx->r20 = S32(ctx->r12 << 2);
    // 0x800866F0: lui         $t3, 0x8020
    ctx->r11 = S32(0X8020 << 16);
    // 0x800866F4: lbu         $t3, 0x6B40($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X6B40);
    // 0x800866F8: lui         $s0, 0x801B
    ctx->r16 = S32(0X801B << 16);
    // 0x800866FC: lbu         $s0, -0x35BC($s0)
    ctx->r16 = MEM_BU(ctx->r16, -0X35BC);
    // 0x80086700: lui         $t7, 0x801C
    ctx->r15 = S32(0X801C << 16);
    // 0x80086704: lbu         $t7, -0x39A6($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X39A6);
    // 0x80086708: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8008670C:
    // 0x8008670C: beq         $v0, $zero, L_800867F4
    if (ctx->r2 == 0) {
        // 0x80086710: addu        $a0, $s4, $zero
        ctx->r4 = ADD32(ctx->r20, 0);
            goto L_800867F4;
    }
    // 0x80086710: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x80086714: slt         $t9, $a1, $t7
    ctx->r25 = SIGNED(ctx->r5) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80086718: lui         $t8, 0x801B
    ctx->r24 = S32(0X801B << 16);
    // 0x8008671C: lw          $t8, -0x35C0($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X35C0);
    // 0x80086720: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x80086724: lbu         $v0, 0x53D4($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X53D4);
    // 0x80086728: addu        $t6, $s1, $zero
    ctx->r14 = ADD32(ctx->r17, 0);
    // 0x8008672C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80086730: lhu         $v1, 0x49AE($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X49AE);
    // 0x80086734: slt         $t5, $a1, $v0
    ctx->r13 = SIGNED(ctx->r5) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80086738: subu        $v0, $a1, $t7
    ctx->r2 = SUB32(ctx->r5, ctx->r15);
    // 0x8008673C: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80086740: mflo        $t2
    ctx->r10 = lo;
    // 0x80086744: slt         $v0, $a0, $t3
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x80086748: nop

L_8008674C:
    // 0x8008674C: bnel        $v0, $zero, L_800867E8
    if (ctx->r2 != 0) {
        // 0x80086750: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_800867E8;
    }
    goto skip_0;
    // 0x80086750: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    skip_0:
    // 0x80086754: slt         $v0, $a0, $s0
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x80086758: beql        $v0, $zero, L_800867E8
    if (ctx->r2 == 0) {
        // 0x8008675C: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_800867E8;
    }
    goto skip_1;
    // 0x8008675C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    skip_1:
    // 0x80086760: bnel        $t9, $zero, L_800867E8
    if (ctx->r25 != 0) {
        // 0x80086764: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_800867E8;
    }
    goto skip_2;
    // 0x80086764: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    skip_2:
    // 0x80086768: beql        $t5, $zero, L_800867E8
    if (ctx->r13 == 0) {
        // 0x8008676C: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_800867E8;
    }
    goto skip_3;
    // 0x8008676C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    skip_3:
    // 0x80086770: subu        $v0, $a0, $t3
    ctx->r2 = SUB32(ctx->r4, ctx->r11);
    // 0x80086774: addu        $v0, $t2, $v0
    ctx->r2 = ADD32(ctx->r10, ctx->r2);
    // 0x80086778: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8008677C: addu        $v0, $v0, $t8
    ctx->r2 = ADD32(ctx->r2, ctx->r24);
    // 0x80086780: lhu         $v1, 0x0($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X0);
    // 0x80086784: srl         $v0, $v1, 15
    ctx->r2 = S32(U32(ctx->r3) >> 15);
    // 0x80086788: beql        $v0, $zero, L_800867E8
    if (ctx->r2 == 0) {
        // 0x8008678C: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_800867E8;
    }
    goto skip_4;
    // 0x8008678C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    skip_4:
    // 0x80086790: bne         $a2, $s5, L_8008679C
    if (ctx->r6 != ctx->r21) {
        // 0x80086794: andi        $v0, $v1, 0x7C
        ctx->r2 = ctx->r3 & 0X7C;
            goto L_8008679C;
    }
    // 0x80086794: andi        $v0, $v1, 0x7C
    ctx->r2 = ctx->r3 & 0X7C;
    // 0x80086798: srl         $a2, $v0, 2
    ctx->r6 = S32(U32(ctx->r2) >> 2);
L_8008679C:
    // 0x8008679C: beql        $t0, $s5, L_800867A4
    if (ctx->r8 == ctx->r21) {
        // 0x800867A0: andi        $t0, $v1, 0x3
        ctx->r8 = ctx->r3 & 0X3;
            goto L_800867A4;
    }
    goto skip_5;
    // 0x800867A0: andi        $t0, $v1, 0x3
    ctx->r8 = ctx->r3 & 0X3;
    skip_5:
L_800867A4:
    // 0x800867A4: bne         $a3, $fp, L_800867B8
    if (ctx->r7 != ctx->r30) {
        // 0x800867A8: andi        $v0, $v1, 0x7C
        ctx->r2 = ctx->r3 & 0X7C;
            goto L_800867B8;
    }
    // 0x800867A8: andi        $v0, $v1, 0x7C
    ctx->r2 = ctx->r3 & 0X7C;
    // 0x800867AC: andi        $v0, $v1, 0x1F00
    ctx->r2 = ctx->r3 & 0X1F00;
    // 0x800867B0: srl         $a3, $v0, 8
    ctx->r7 = S32(U32(ctx->r2) >> 8);
    // 0x800867B4: andi        $v0, $v1, 0x7C
    ctx->r2 = ctx->r3 & 0X7C;
L_800867B8:
    // 0x800867B8: srl         $v0, $v0, 2
    ctx->r2 = S32(U32(ctx->r2) >> 2);
    // 0x800867BC: bnel        $a2, $v0, L_80086814
    if (ctx->r6 != ctx->r2) {
        // 0x800867C0: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_80086814;
    }
    goto skip_6;
    // 0x800867C0: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    skip_6:
    // 0x800867C4: andi        $v0, $v1, 0x3
    ctx->r2 = ctx->r3 & 0X3;
    // 0x800867C8: bnel        $t0, $v0, L_80086814
    if (ctx->r8 != ctx->r2) {
        // 0x800867CC: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_80086814;
    }
    goto skip_7;
    // 0x800867CC: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    skip_7:
    // 0x800867D0: andi        $v0, $v1, 0x1F00
    ctx->r2 = ctx->r3 & 0X1F00;
    // 0x800867D4: srl         $v0, $v0, 8
    ctx->r2 = S32(U32(ctx->r2) >> 8);
    // 0x800867D8: bne         $a3, $v0, L_80086814
    if (ctx->r7 != ctx->r2) {
        // 0x800867DC: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_80086814;
    }
    // 0x800867DC: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x800867E0: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x800867E4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
L_800867E8:
    // 0x800867E8: slt         $v0, $a0, $t6
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x800867EC: bne         $v0, $zero, L_8008674C
    if (ctx->r2 != 0) {
        // 0x800867F0: slt         $v0, $a0, $t3
        ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r11) ? 1 : 0;
            goto L_8008674C;
    }
    // 0x800867F0: slt         $v0, $a0, $t3
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r11) ? 1 : 0;
L_800867F4:
    // 0x800867F4: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x800867F8: slt         $v0, $a1, $s3
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x800867FC: bne         $v0, $zero, L_8008670C
    if (ctx->r2 != 0) {
        // 0x80086800: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8008670C;
    }
    // 0x80086800: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80086804:
    // 0x80086804: addu        $v1, $t1, $zero
    ctx->r3 = ADD32(ctx->r9, 0);
    // 0x80086808: sw          $a2, 0x0($s7)
    MEM_W(0X0, ctx->r23) = ctx->r6;
    // 0x8008680C: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x80086810: sw          $a3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r7;
L_80086814:
    // 0x80086814: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80086818: bnel        $v1, $v0, L_80086874
    if (ctx->r3 != ctx->r2) {
        // 0x8008681C: addiu       $t4, $t4, 0x1
        ctx->r12 = ADD32(ctx->r12, 0X1);
            goto L_80086874;
    }
    goto skip_8;
    // 0x8008681C: addiu       $t4, $t4, 0x1
    ctx->r12 = ADD32(ctx->r12, 0X1);
    skip_8:
    // 0x80086820: lui         $a3, 0x8018
    ctx->r7 = S32(0X8018 << 16);
    // 0x80086824: lhu         $a3, -0x3420($a3)
    ctx->r7 = MEM_HU(ctx->r7, -0X3420);
    // 0x80086828: sll         $a1, $s2, 5
    ctx->r5 = S32(ctx->r18 << 5);
    // 0x8008682C: addu        $a1, $a1, $t4
    ctx->r5 = ADD32(ctx->r5, ctx->r12);
    // 0x80086830: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x80086834: sll         $a1, $a1, 1
    ctx->r5 = S32(ctx->r5 << 1);
    // 0x80086838: lw          $v1, 0x10($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X10);
    // 0x8008683C: addiu       $a2, $zero, -0x8000
    ctx->r6 = ADD32(0, -0X8000);
    // 0x80086840: lw          $a0, 0x14($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X14);
    // 0x80086844: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x80086848: sll         $v0, $v0, 13
    ctx->r2 = S32(ctx->r2 << 13);
    // 0x8008684C: or          $v0, $v0, $a2
    ctx->r2 = ctx->r2 | ctx->r6;
    // 0x80086850: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80086854: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x80086858: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x8008685C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80086860: addu        $at, $at, $a1
    ctx->r1 = ADD32(ctx->r1, ctx->r5);
    // 0x80086864: sh          $v1, -0x3C20($at)
    MEM_H(-0X3C20, ctx->r1) = ctx->r3;
    // 0x80086868: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008686C: sh          $a3, -0x3420($at)
    MEM_H(-0X3420, ctx->r1) = ctx->r7;
    // 0x80086870: addiu       $t4, $t4, 0x1
    ctx->r12 = ADD32(ctx->r12, 0X1);
L_80086874:
    // 0x80086874: slti        $v0, $t4, 0x20
    ctx->r2 = SIGNED(ctx->r12) < 0X20 ? 1 : 0;
    // 0x80086878: bne         $v0, $zero, L_800866D0
    if (ctx->r2 != 0) {
        // 0x8008687C: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_800866D0;
    }
    // 0x8008687C: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x80086880: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80086884: slti        $v0, $s2, 0x20
    ctx->r2 = SIGNED(ctx->r18) < 0X20 ? 1 : 0;
    // 0x80086888: bne         $v0, $zero, L_800866C4
    if (ctx->r2 != 0) {
        // 0x8008688C: addiu       $s3, $s3, 0x4
        ctx->r19 = ADD32(ctx->r19, 0X4);
            goto L_800866C4;
    }
    // 0x8008688C: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x80086890: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80086894: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x80086898: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x8008689C: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x800868A0: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x800868A4: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x800868A8: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x800868AC: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x800868B0: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x800868B4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800868B8: jr          $ra
    // 0x800868BC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x800868BC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80053068_2E468(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80053068: addu        $t0, $a0, $zero
    ctx->r8 = ADD32(ctx->r4, 0);
    // 0x8005306C: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x80053070: lw          $a0, -0x41B0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X41B0);
    // 0x80053074: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x80053078: or          $a1, $a1, $v0
    ctx->r5 = ctx->r5 | ctx->r2;
    // 0x8005307C: sltiu       $v0, $a0, -0x100
    ctx->r2 = ctx->r4 < -0X100 ? 1 : 0;
    // 0x80053080: bne         $v0, $zero, L_800530BC
    if (ctx->r2 != 0) {
        // 0x80053084: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_800530BC;
    }
    // 0x80053084: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80053088: j           L_800530E0
    // 0x8005308C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_800530E0;
    // 0x8005308C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80053090:
    // 0x80053090: lw          $v1, 0x4($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X4);
    // 0x80053094: or          $a0, $a0, $a3
    ctx->r4 = ctx->r4 | ctx->r7;
    // 0x80053098: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x8005309C: sw          $a0, -0x41B0($at)
    MEM_W(-0X41B0, ctx->r1) = ctx->r4;
    // 0x800530A0: or          $v1, $v1, $a3
    ctx->r3 = ctx->r3 | ctx->r7;
    // 0x800530A4: sw          $v1, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r3;
    // 0x800530A8: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x800530AC: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x800530B0: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x800530B4: j           L_800530E0
    // 0x800530B8: sw          $t0, -0x21A0($at)
    MEM_W(-0X21A0, ctx->r1) = ctx->r8;
        goto L_800530E0;
    // 0x800530B8: sw          $t0, -0x21A0($at)
    MEM_W(-0X21A0, ctx->r1) = ctx->r8;
L_800530BC:
    // 0x800530BC: lui         $a3, 0x8000
    ctx->r7 = S32(0X8000 << 16);
L_800530C0:
    // 0x800530C0: and         $v0, $a0, $a3
    ctx->r2 = ctx->r4 & ctx->r7;
    // 0x800530C4: beq         $v0, $zero, L_80053090
    if (ctx->r2 == 0) {
        // 0x800530C8: addu        $v0, $a2, $zero
        ctx->r2 = ADD32(ctx->r6, 0);
            goto L_80053090;
    }
    // 0x800530C8: addu        $v0, $a2, $zero
    ctx->r2 = ADD32(ctx->r6, 0);
    // 0x800530CC: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x800530D0: slti        $v0, $a2, 0x18
    ctx->r2 = SIGNED(ctx->r6) < 0X18 ? 1 : 0;
    // 0x800530D4: bne         $v0, $zero, L_800530C0
    if (ctx->r2 != 0) {
        // 0x800530D8: srl         $a3, $a3, 1
        ctx->r7 = S32(U32(ctx->r7) >> 1);
            goto L_800530C0;
    }
    // 0x800530D8: srl         $a3, $a3, 1
    ctx->r7 = S32(U32(ctx->r7) >> 1);
    // 0x800530DC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_800530E0:
    // 0x800530E0: jr          $ra
    // 0x800530E4: nop

    TRACE_RETURN()
    return;
    // 0x800530E4: nop

;}
RECOMP_FUNC void func_80084870_5FC70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80084870: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80084874: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x80084878: lbu         $s5, 0x43($sp)
    ctx->r21 = MEM_BU(ctx->r29, 0X43);
    // 0x8008487C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80084880: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x80084884: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x80084888: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x8008488C: addiu       $a0, $zero, 0x68
    ctx->r4 = ADD32(0, 0X68);
    // 0x80084890: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80084894: addu        $s2, $a3, $zero
    ctx->r18 = ADD32(ctx->r7, 0);
    // 0x80084898: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8008489C: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x800848A0: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x800848A4: jal         0x800281C8
    // 0x800848A8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_800281C8_35C8(rdram, ctx);
        goto after_0;
    // 0x800848A8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x800848AC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x800848B0: beq         $s0, $zero, L_80084968
    if (ctx->r16 == 0) {
        // 0x800848B4: andi        $v1, $s1, 0xFFFF
        ctx->r3 = ctx->r17 & 0XFFFF;
            goto L_80084968;
    }
    // 0x800848B4: andi        $v1, $s1, 0xFFFF
    ctx->r3 = ctx->r17 & 0XFFFF;
    // 0x800848B8: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x800848BC: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x800848C0: addu        $s1, $s1, $v1
    ctx->r17 = ADD32(ctx->r17, ctx->r3);
    // 0x800848C4: lhu         $s1, 0x4988($s1)
    ctx->r17 = MEM_HU(ctx->r17, 0X4988);
    // 0x800848C8: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x800848CC: addiu       $a0, $a0, -0x1A64
    ctx->r4 = ADD32(ctx->r4, -0X1A64);
    // 0x800848D0: sll         $v0, $s1, 3
    ctx->r2 = S32(ctx->r17 << 3);
    // 0x800848D4: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x800848D8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800848DC: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x800848E0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x800848E4: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x800848E8: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    // 0x800848EC: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
    // 0x800848F0: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x800848F4: beq         $v0, $v1, L_80084968
    if (ctx->r2 == ctx->r3) {
        // 0x800848F8: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_80084968;
    }
    // 0x800848F8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x800848FC: jal         0x8002C5A4
    // 0x80084900: addiu       $a1, $s0, 0x18
    ctx->r5 = ADD32(ctx->r16, 0X18);
    func_8002C5A4_79A4(rdram, ctx);
        goto after_1;
    // 0x80084900: addiu       $a1, $s0, 0x18
    ctx->r5 = ADD32(ctx->r16, 0X18);
    after_1:
    // 0x80084904: sll         $v0, $s1, 2
    ctx->r2 = S32(ctx->r17 << 2);
    // 0x80084908: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x8008490C: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x80084910: lw          $a1, -0x1AB0($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1AB0);
    // 0x80084914: sll         $a0, $s3, 24
    ctx->r4 = S32(ctx->r19 << 24);
    // 0x80084918: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
    // 0x8008491C: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    // 0x80084920: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80084924: lui         $a2, 0x8008
    ctx->r6 = S32(0X8008 << 16);
    // 0x80084928: addiu       $a2, $a2, 0x5F8
    ctx->r6 = ADD32(ctx->r6, 0X5F8);
    // 0x8008492C: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x80084930: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x80084934: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x80084938: sb          $v1, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r3;
    // 0x8008493C: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
    // 0x80084940: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x80084944: sb          $v1, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r3;
    // 0x80084948: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x8008494C: sll         $a1, $s4, 24
    ctx->r5 = S32(ctx->r20 << 24);
    // 0x80084950: sra         $a1, $a1, 24
    ctx->r5 = S32(SIGNED(ctx->r5) >> 24);
    // 0x80084954: sb          $v1, 0x67($s0)
    MEM_B(0X67, ctx->r16) = ctx->r3;
    // 0x80084958: sb          $v1, 0x66($s0)
    MEM_B(0X66, ctx->r16) = ctx->r3;
    // 0x8008495C: sb          $s5, 0x10($s0)
    MEM_B(0X10, ctx->r16) = ctx->r21;
    // 0x80084960: jal         0x800283A8
    // 0x80084964: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    func_800283A8_37A8(rdram, ctx);
        goto after_2;
    // 0x80084964: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    after_2:
L_80084968:
    // 0x80084968: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8008496C: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x80084970: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x80084974: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80084978: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8008497C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80084980: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80084984: jr          $ra
    // 0x80084988: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80084988: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80064B30_3FF30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80064B30: lw          $v0, 0x6C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X6C);
    // 0x80064B34: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80064B38: lw          $v1, -0x3BFC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3BFC);
    // 0x80064B3C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80064B40: sw          $v0, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r2;
    // 0x80064B44: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80064B48: jr          $ra
    // 0x80064B4C: sw          $v1, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->r3;
    TRACE_RETURN()
    return;
    // 0x80064B4C: sw          $v1, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->r3;
;}
RECOMP_FUNC void func_80028A3C_3E3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80028A3C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80028A40: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80028A44: jr          $ra
    // 0x80028A48: sw          $v0, 0x6CA4($at)
    MEM_W(0X6CA4, ctx->r1) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80028A48: sw          $v0, 0x6CA4($at)
    MEM_W(0X6CA4, ctx->r1) = ctx->r2;
;}
RECOMP_FUNC void func_80035574_10974(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80035574: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80035578: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8003557C: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x80035580: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x80035584: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80035588: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8003558C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80035590: jal         0x80092EB0
    // 0x80035594: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_80092EB0_6E2B0(rdram, ctx);
        goto after_0;
    // 0x80035594: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x80035598: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x8003559C: lui         $s5, 0x801E
    ctx->r21 = S32(0X801E << 16);
    // 0x800355A0: addiu       $s5, $s5, -0x7148
    ctx->r21 = ADD32(ctx->r21, -0X7148);
    // 0x800355A4: lui         $s4, 0x801D
    ctx->r20 = S32(0X801D << 16);
    // 0x800355A8: addiu       $s4, $s4, 0x4784
    ctx->r20 = ADD32(ctx->r20, 0X4784);
L_800355AC:
    // 0x800355AC: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x800355B0: sll         $v1, $s3, 16
    ctx->r3 = S32(ctx->r19 << 16);
    // 0x800355B4: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x800355B8: sll         $v0, $v1, 6
    ctx->r2 = S32(ctx->r3 << 6);
    // 0x800355BC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800355C0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800355C4: addu        $s2, $v0, $s5
    ctx->r18 = ADD32(ctx->r2, ctx->r21);
    // 0x800355C8: addu        $s0, $s2, $zero
    ctx->r16 = ADD32(ctx->r18, 0);
L_800355CC:
    // 0x800355CC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x800355D0: beq         $a0, $zero, L_800355E0
    if (ctx->r4 == 0) {
        // 0x800355D4: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_800355E0;
    }
    // 0x800355D4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x800355D8: jal         0x80025FF8
    // 0x800355DC: nop

    func_80025FF8_13F8(rdram, ctx);
        goto after_1;
    // 0x800355DC: nop

    after_1:
L_800355E0:
    // 0x800355E0: slti        $v0, $s1, 0x40
    ctx->r2 = SIGNED(ctx->r17) < 0X40 ? 1 : 0;
    // 0x800355E4: bne         $v0, $zero, L_800355CC
    if (ctx->r2 != 0) {
        // 0x800355E8: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_800355CC;
    }
    // 0x800355E8: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x800355EC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x800355F0: jal         0x8009A2B0
    // 0x800355F4: addiu       $a1, $zero, 0x104
    ctx->r5 = ADD32(0, 0X104);
    bzero_recomp(rdram, ctx);
        goto after_2;
    // 0x800355F4: addiu       $a1, $zero, 0x104
    ctx->r5 = ADD32(0, 0X104);
    after_2:
    // 0x800355F8: sll         $v0, $s3, 16
    ctx->r2 = S32(ctx->r19 << 16);
    // 0x800355FC: sra         $v0, $v0, 14
    ctx->r2 = S32(SIGNED(ctx->r2) >> 14);
    // 0x80035600: addu        $s0, $v0, $s4
    ctx->r16 = ADD32(ctx->r2, ctx->r20);
    // 0x80035604: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80035608: beq         $a0, $zero, L_8003561C
    if (ctx->r4 == 0) {
        // 0x8003560C: addiu       $v0, $s3, 0x1
        ctx->r2 = ADD32(ctx->r19, 0X1);
            goto L_8003561C;
    }
    // 0x8003560C: addiu       $v0, $s3, 0x1
    ctx->r2 = ADD32(ctx->r19, 0X1);
    // 0x80035610: jal         0x80025FF8
    // 0x80035614: nop

    func_80025FF8_13F8(rdram, ctx);
        goto after_3;
    // 0x80035614: nop

    after_3:
    // 0x80035618: addiu       $v0, $s3, 0x1
    ctx->r2 = ADD32(ctx->r19, 0X1);
L_8003561C:
    // 0x8003561C: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x80035620: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80035624: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80035628: slti        $v0, $v0, 0x3
    ctx->r2 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x8003562C: bne         $v0, $zero, L_800355AC
    if (ctx->r2 != 0) {
        // 0x80035630: sw          $zero, 0x0($s0)
        MEM_W(0X0, ctx->r16) = 0;
            goto L_800355AC;
    }
    // 0x80035630: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x80035634: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x80035638: lw          $a0, -0xBD0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0XBD0);
    // 0x8003563C: beq         $a0, $zero, L_8003564C
    if (ctx->r4 == 0) {
        // 0x80035640: nop
    
            goto L_8003564C;
    }
    // 0x80035640: nop

    // 0x80035644: jal         0x80025FF8
    // 0x80035648: nop

    func_80025FF8_13F8(rdram, ctx);
        goto after_4;
    // 0x80035648: nop

    after_4:
L_8003564C:
    // 0x8003564C: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x80035650: lw          $a0, -0xBCC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0XBCC);
    // 0x80035654: beq         $a0, $zero, L_80035664
    if (ctx->r4 == 0) {
        // 0x80035658: nop
    
            goto L_80035664;
    }
    // 0x80035658: nop

    // 0x8003565C: jal         0x80025FF8
    // 0x80035660: nop

    func_80025FF8_13F8(rdram, ctx);
        goto after_5;
    // 0x80035660: nop

    after_5:
L_80035664:
    // 0x80035664: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x80035668: addiu       $a0, $a0, -0xBD0
    ctx->r4 = ADD32(ctx->r4, -0XBD0);
    // 0x8003566C: jal         0x8009A2B0
    // 0x80035670: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    bzero_recomp(rdram, ctx);
        goto after_6;
    // 0x80035670: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    after_6:
    // 0x80035674: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x80035678: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x8003567C: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x80035680: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80035684: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80035688: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8003568C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80035690: jr          $ra
    // 0x80035694: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80035694: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8007B5C4_569C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8007B5C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007B5C8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8007B5CC: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8007B5D0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8007B5D4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x8007B5D8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8007B5DC: lw          $v0, -0x2D20($at)
    ctx->r2 = MEM_W(ctx->r1, -0X2D20);
    // 0x8007B5E0: jalr        $v0
    // 0x8007B5E4: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8007B5E4: nop

    after_0:
    // 0x8007B5E8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8007B5EC: jr          $ra
    // 0x8007B5F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8007B5F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8007B19C_5659C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8007B19C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8007B1A0: lbu         $v1, 0x49B9($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X49B9);
    // 0x8007B1A4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8007B1A8: bne         $v1, $v0, L_8007B220
    if (ctx->r3 != ctx->r2) {
        // 0x8007B1AC: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8007B220;
    }
    // 0x8007B1AC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8007B1B0: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x8007B1B4: beq         $v0, $zero, L_8007B1E8
    if (ctx->r2 == 0) {
        // 0x8007B1B8: nop
    
            goto L_8007B1E8;
    }
    // 0x8007B1B8: nop

    // 0x8007B1BC: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8007B1C0: lhu         $v1, 0x4ACC($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X4ACC);
    // 0x8007B1C4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8007B1C8: lhu         $v0, 0x4ADA($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X4ADA);
    // 0x8007B1CC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8007B1D0: beq         $v0, $zero, L_8007B220
    if (ctx->r2 == 0) {
        // 0x8007B1D4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8007B220;
    }
    // 0x8007B1D4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8007B1D8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8007B1DC: lhu         $v0, 0x4AD8($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X4AD8);
    // 0x8007B1E0: j           L_8007B210
    // 0x8007B1E4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
        goto L_8007B210;
    // 0x8007B1E4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
L_8007B1E8:
    // 0x8007B1E8: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8007B1EC: lhu         $v1, 0x4ACC($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X4ACC);
    // 0x8007B1F0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8007B1F4: lhu         $v0, 0x4AD8($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X4AD8);
    // 0x8007B1F8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8007B1FC: beq         $v0, $zero, L_8007B220
    if (ctx->r2 == 0) {
        // 0x8007B200: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8007B220;
    }
    // 0x8007B200: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8007B204: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8007B208: lhu         $v0, 0x4ADA($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X4ADA);
    // 0x8007B20C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
L_8007B210:
    // 0x8007B210: beq         $v0, $zero, L_8007B22C
    if (ctx->r2 == 0) {
        // 0x8007B214: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8007B22C;
    }
    // 0x8007B214: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8007B218: j           L_8007B230
    // 0x8007B21C: nop

        goto L_8007B230;
    // 0x8007B21C: nop

L_8007B220:
    // 0x8007B220: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
    // 0x8007B224: j           L_8007B230
    // 0x8007B228: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8007B230;
    // 0x8007B228: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8007B22C:
    // 0x8007B22C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8007B230:
    // 0x8007B230: jr          $ra
    // 0x8007B234: nop

    TRACE_RETURN()
    return;
    // 0x8007B234: nop

    // 0x8007B238: nop

    // 0x8007B23C: nop

;}
RECOMP_FUNC void func_80087248_62648(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80087248: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8008724C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80087250: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x80087254: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80087258: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8008725C: sra         $s0, $a0, 16
    ctx->r16 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80087260: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80087264: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x80087268: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8008726C: sra         $s1, $a1, 16
    ctx->r17 = S32(SIGNED(ctx->r5) >> 16);
    // 0x80087270: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80087274: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80087278: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8008727C: jal         0x80087394
    // 0x80087280: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80087394_62794(rdram, ctx);
        goto after_0;
    // 0x80087280: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x80087284: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80087288: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8008728C: beq         $v1, $v0, L_800872F4
    if (ctx->r3 == ctx->r2) {
        // 0x80087290: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_800872F4;
    }
    // 0x80087290: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80087294: beql        $v0, $zero, L_800872AC
    if (ctx->r2 == 0) {
        // 0x80087298: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_800872AC;
    }
    goto skip_0;
    // 0x80087298: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8008729C: beq         $v1, $zero, L_800872BC
    if (ctx->r3 == 0) {
        // 0x800872A0: addu        $v0, $s2, $zero
        ctx->r2 = ADD32(ctx->r18, 0);
            goto L_800872BC;
    }
    // 0x800872A0: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x800872A4: j           L_8008737C
    // 0x800872A8: nop

        goto L_8008737C;
    // 0x800872A8: nop

L_800872AC:
    // 0x800872AC: beq         $v1, $v0, L_8008732C
    if (ctx->r3 == ctx->r2) {
        // 0x800872B0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8008732C;
    }
    // 0x800872B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x800872B4: j           L_8008737C
    // 0x800872B8: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
        goto L_8008737C;
    // 0x800872B8: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
L_800872BC:
    // 0x800872BC: bgez        $s0, L_800872C8
    if (SIGNED(ctx->r16) >= 0) {
        // 0x800872C0: addu        $v1, $s0, $zero
        ctx->r3 = ADD32(ctx->r16, 0);
            goto L_800872C8;
    }
    // 0x800872C0: addu        $v1, $s0, $zero
    ctx->r3 = ADD32(ctx->r16, 0);
    // 0x800872C4: addiu       $v1, $s0, 0xF
    ctx->r3 = ADD32(ctx->r16, 0XF);
L_800872C8:
    // 0x800872C8: sra         $v1, $v1, 4
    ctx->r3 = S32(SIGNED(ctx->r3) >> 4);
    // 0x800872CC: sll         $v0, $s1, 2
    ctx->r2 = S32(ctx->r17 << 2);
    // 0x800872D0: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x800872D4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800872D8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800872DC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800872E0: lui         $s2, 0x8018
    ctx->r18 = S32(0X8018 << 16);
    // 0x800872E4: addu        $s2, $s2, $v0
    ctx->r18 = ADD32(ctx->r18, ctx->r2);
    // 0x800872E8: lw          $s2, -0x7F10($s2)
    ctx->r18 = MEM_W(ctx->r18, -0X7F10);
    // 0x800872EC: j           L_8008737C
    // 0x800872F0: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
        goto L_8008737C;
    // 0x800872F0: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
L_800872F4:
    // 0x800872F4: bgez        $s0, L_80087300
    if (SIGNED(ctx->r16) >= 0) {
        // 0x800872F8: addu        $v1, $s0, $zero
        ctx->r3 = ADD32(ctx->r16, 0);
            goto L_80087300;
    }
    // 0x800872F8: addu        $v1, $s0, $zero
    ctx->r3 = ADD32(ctx->r16, 0);
    // 0x800872FC: addiu       $v1, $s0, 0xF
    ctx->r3 = ADD32(ctx->r16, 0XF);
L_80087300:
    // 0x80087300: sra         $v1, $v1, 4
    ctx->r3 = S32(SIGNED(ctx->r3) >> 4);
    // 0x80087304: sll         $v0, $s1, 2
    ctx->r2 = S32(ctx->r17 << 2);
    // 0x80087308: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x8008730C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80087310: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80087314: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80087318: lui         $s2, 0x8017
    ctx->r18 = S32(0X8017 << 16);
    // 0x8008731C: addu        $s2, $s2, $v0
    ctx->r18 = ADD32(ctx->r18, ctx->r2);
    // 0x80087320: lw          $s2, 0x35F0($s2)
    ctx->r18 = MEM_W(ctx->r18, 0X35F0);
    // 0x80087324: j           L_8008737C
    // 0x80087328: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
        goto L_8008737C;
    // 0x80087328: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
L_8008732C:
    // 0x8008732C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80087330: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80087334: jal         0x8002CA30
    // 0x80087338: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8002CA30_7E30(rdram, ctx);
        goto after_1;
    // 0x80087338: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x8008733C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80087340: beq         $a0, $zero, L_8008737C
    if (ctx->r4 == 0) {
        // 0x80087344: addu        $v0, $s2, $zero
        ctx->r2 = ADD32(ctx->r18, 0);
            goto L_8008737C;
    }
    // 0x80087344: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x80087348: lh          $v1, 0xA($a0)
    ctx->r3 = MEM_H(ctx->r4, 0XA);
    // 0x8008734C: lh          $v0, 0xC($a0)
    ctx->r2 = MEM_H(ctx->r4, 0XC);
    // 0x80087350: subu        $v1, $s1, $v1
    ctx->r3 = SUB32(ctx->r17, ctx->r3);
    // 0x80087354: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80087358: mflo        $v1
    ctx->r3 = lo;
    // 0x8008735C: lh          $v0, 0x8($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X8);
    // 0x80087360: lw          $a0, 0x4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4);
    // 0x80087364: subu        $v0, $s0, $v0
    ctx->r2 = SUB32(ctx->r16, ctx->r2);
    // 0x80087368: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8008736C: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80087370: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x80087374: addu        $s2, $a0, $v1
    ctx->r18 = ADD32(ctx->r4, ctx->r3);
    // 0x80087378: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
L_8008737C:
    // 0x8008737C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80087380: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80087384: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80087388: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8008738C: jr          $ra
    // 0x80087390: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80087390: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8004ED3C_2A13C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004ED3C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8004ED40: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8004ED44: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8004ED48: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8004ED4C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x8004ED50: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8004ED54: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
    // 0x8004ED58: lh          $v0, 0x0($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X0);
    // 0x8004ED5C: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8004ED60: mult        $v1, $v1
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004ED64: mflo        $v1
    ctx->r3 = lo;
    // 0x8004ED68: lh          $a0, 0x4($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X4);
    // 0x8004ED6C: lh          $v0, 0x4($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X4);
    // 0x8004ED70: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x8004ED74: mult        $a0, $a0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004ED78: mflo        $a0
    ctx->r4 = lo;
    // 0x8004ED7C: nop

    // 0x8004ED80: nop

    // 0x8004ED84: jal         0x80032424
    // 0x8004ED88: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    func_80032424_D824(rdram, ctx);
        goto after_0;
    // 0x8004ED88: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    after_0:
    // 0x8004ED8C: lh          $v1, 0x2($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2);
    // 0x8004ED90: lh          $a1, 0x2($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X2);
    // 0x8004ED94: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8004ED98: jal         0x80032664
    // 0x8004ED9C: subu        $a1, $v1, $a1
    ctx->r5 = SUB32(ctx->r3, ctx->r5);
    func_80032664_DA64(rdram, ctx);
        goto after_1;
    // 0x8004ED9C: subu        $a1, $v1, $a1
    ctx->r5 = SUB32(ctx->r3, ctx->r5);
    after_1:
    // 0x8004EDA0: addiu       $v1, $zero, 0x1000
    ctx->r3 = ADD32(0, 0X1000);
    // 0x8004EDA4: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8004EDA8: andi        $v0, $v1, 0xFFF
    ctx->r2 = ctx->r3 & 0XFFF;
    // 0x8004EDAC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8004EDB0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8004EDB4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8004EDB8: jr          $ra
    // 0x8004EDBC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8004EDBC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8004A268_25668(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004A268: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8004A26C: sw          $zero, -0x38EC($at)
    MEM_W(-0X38EC, ctx->r1) = 0;
    // 0x8004A270: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8004A274: sw          $zero, -0x38E8($at)
    MEM_W(-0X38E8, ctx->r1) = 0;
    // 0x8004A278: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8004A27C: sw          $zero, -0x38E4($at)
    MEM_W(-0X38E4, ctx->r1) = 0;
    // 0x8004A280: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8004A284: sw          $zero, -0x38E0($at)
    MEM_W(-0X38E0, ctx->r1) = 0;
    // 0x8004A288: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8004A28C: sw          $zero, -0x38DC($at)
    MEM_W(-0X38DC, ctx->r1) = 0;
    // 0x8004A290: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8004A294: sw          $zero, -0x38D8($at)
    MEM_W(-0X38D8, ctx->r1) = 0;
    // 0x8004A298: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8004A29C: sw          $zero, -0x38D4($at)
    MEM_W(-0X38D4, ctx->r1) = 0;
    // 0x8004A2A0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8004A2A4: jr          $ra
    // 0x8004A2A8: sw          $zero, -0x38D0($at)
    MEM_W(-0X38D0, ctx->r1) = 0;
    TRACE_RETURN()
    return;
    // 0x8004A2A8: sw          $zero, -0x38D0($at)
    MEM_W(-0X38D0, ctx->r1) = 0;
;}
RECOMP_FUNC void func_8002A46C_586C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002A46C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002A470: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8002A474: jal         0x8002BE98
    // 0x8002A478: nop

    func_8002BE98_7298(rdram, ctx);
        goto after_0;
    // 0x8002A478: nop

    after_0:
    // 0x8002A47C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8002A480: jr          $ra
    // 0x8002A484: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8002A484: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8006214C_3D54C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8006214C: lw          $v1, 0x14($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X14);
    // 0x80062150: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x80062154: lbu         $v1, 0x1($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X1);
    // 0x80062158: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x8006215C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x80062160: jr          $ra
    // 0x80062164: sb          $v1, 0x3E($a0)
    MEM_B(0X3E, ctx->r4) = ctx->r3;
    TRACE_RETURN()
    return;
    // 0x80062164: sb          $v1, 0x3E($a0)
    MEM_B(0X3E, ctx->r4) = ctx->r3;
;}
RECOMP_FUNC void func_8007A3B0_557B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8007A3B0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8007A3B4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8007A3B8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8007A3BC: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8007A3C0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8007A3C4: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8007A3C8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8007A3CC: bne         $v1, $v0, L_8007A420
    if (ctx->r3 != ctx->r2) {
        // 0x8007A3D0: addiu       $v0, $zero, 0xFE
        ctx->r2 = ADD32(0, 0XFE);
            goto L_8007A420;
    }
    // 0x8007A3D0: addiu       $v0, $zero, 0xFE
    ctx->r2 = ADD32(0, 0XFE);
    // 0x8007A3D4: lui         $v1, 0x2C80
    ctx->r3 = S32(0X2C80 << 16);
    // 0x8007A3D8: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x8007A3DC: lw          $a1, 0x38($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X38);
    // 0x8007A3E0: lhu         $a2, 0x3C($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X3C);
    // 0x8007A3E4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8007A3E8: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8007A3EC: sw          $v1, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r3;
    // 0x8007A3F0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8007A3F4: sw          $a1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r5;
    // 0x8007A3F8: jal         0x8007ABE0
    // 0x8007A3FC: sh          $a2, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r6;
    func_8007ABE0_55FE0(rdram, ctx);
        goto after_0;
    // 0x8007A3FC: sh          $a2, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r6;
    after_0:
    // 0x8007A400: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    // 0x8007A404: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8007A408: lui         $a2, 0x4040
    ctx->r6 = S32(0X4040 << 16);
    // 0x8007A40C: ori         $a2, $a2, 0x4040
    ctx->r6 = ctx->r6 | 0X4040;
    // 0x8007A410: jal         0x80078E70
    // 0x8007A414: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80078E70_54270(rdram, ctx);
        goto after_1;
    // 0x8007A414: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x8007A418: j           L_8007A688
    // 0x8007A41C: nop

        goto L_8007A688;
    // 0x8007A41C: nop

L_8007A420:
    // 0x8007A420: bne         $v1, $v0, L_8007A438
    if (ctx->r3 != ctx->r2) {
        // 0x8007A424: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8007A438;
    }
    // 0x8007A424: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8007A428: addiu       $v0, $zero, 0xC2
    ctx->r2 = ADD32(0, 0XC2);
    // 0x8007A42C: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x8007A430: j           L_8007A43C
    // 0x8007A434: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
        goto L_8007A43C;
    // 0x8007A434: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
L_8007A438:
    // 0x8007A438: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
L_8007A43C:
    // 0x8007A43C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8007A440: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8007A444: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8007A448: andi        $v1, $v1, 0xF
    ctx->r3 = ctx->r3 & 0XF;
    // 0x8007A44C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8007A450: sltiu       $v0, $v1, 0x7
    ctx->r2 = ctx->r3 < 0X7 ? 1 : 0;
    // 0x8007A454: beq         $v0, $zero, L_8007A474
    if (ctx->r2 == 0) {
        // 0x8007A458: addiu       $a0, $s0, 0x44
        ctx->r4 = ADD32(ctx->r16, 0X44);
            goto L_8007A474;
    }
    // 0x8007A458: addiu       $a0, $s0, 0x44
    ctx->r4 = ADD32(ctx->r16, 0X44);
    // 0x8007A45C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8007A460: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007A464: addu        $at, $at, $v0
    gpr jr_addend_8007A46C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8007A468: lw          $v0, 0x2C30($at)
    ctx->r2 = ADD32(ctx->r1, 0X2C30);
    // 0x8007A46C: jr          $v0
    // 0x8007A470: nop

    switch (jr_addend_8007A46C >> 2) {
        case 0: goto L_8007A474; break;
        case 1: goto L_8007A48C; break;
        case 2: goto L_8007A4A4; break;
        case 3: goto L_8007A474; break;
        case 4: goto L_8007A4BC; break;
        case 5: goto L_8007A4D4; break;
        case 6: goto L_8007A4F4; break;
        default: switch_error(__func__, 0x8007A46C, 0x800D2C30);
    }
    // 0x8007A470: nop

L_8007A474:
    // 0x8007A474: lui         $v0, 0x280
    ctx->r2 = S32(0X280 << 16);
    // 0x8007A478: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x8007A47C: addiu       $v1, $zero, 0x37
    ctx->r3 = ADD32(0, 0X37);
    // 0x8007A480: sh          $v1, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r3;
    // 0x8007A484: j           L_8007A4E8
    // 0x8007A488: addiu       $v1, $zero, -0x5
    ctx->r3 = ADD32(0, -0X5);
        goto L_8007A4E8;
    // 0x8007A488: addiu       $v1, $zero, -0x5
    ctx->r3 = ADD32(0, -0X5);
L_8007A48C:
    // 0x8007A48C: lui         $v0, 0x280
    ctx->r2 = S32(0X280 << 16);
    // 0x8007A490: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x8007A494: addiu       $v1, $zero, 0x37
    ctx->r3 = ADD32(0, 0X37);
    // 0x8007A498: sh          $v1, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r3;
    // 0x8007A49C: j           L_8007A4E8
    // 0x8007A4A0: addiu       $v1, $zero, -0x5
    ctx->r3 = ADD32(0, -0X5);
        goto L_8007A4E8;
    // 0x8007A4A0: addiu       $v1, $zero, -0x5
    ctx->r3 = ADD32(0, -0X5);
L_8007A4A4:
    // 0x8007A4A4: lui         $v0, 0x280
    ctx->r2 = S32(0X280 << 16);
    // 0x8007A4A8: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x8007A4AC: addiu       $v1, $zero, 0x46
    ctx->r3 = ADD32(0, 0X46);
    // 0x8007A4B0: sh          $v1, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r3;
    // 0x8007A4B4: j           L_8007A4E8
    // 0x8007A4B8: addiu       $v1, $zero, -0x5
    ctx->r3 = ADD32(0, -0X5);
        goto L_8007A4E8;
    // 0x8007A4B8: addiu       $v1, $zero, -0x5
    ctx->r3 = ADD32(0, -0X5);
L_8007A4BC:
    // 0x8007A4BC: lui         $v0, 0x280
    ctx->r2 = S32(0X280 << 16);
    // 0x8007A4C0: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x8007A4C4: addiu       $v1, $zero, 0x8C
    ctx->r3 = ADD32(0, 0X8C);
    // 0x8007A4C8: sh          $v1, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r3;
    // 0x8007A4CC: j           L_8007A4E8
    // 0x8007A4D0: addiu       $v1, $zero, -0x5
    ctx->r3 = ADD32(0, -0X5);
        goto L_8007A4E8;
    // 0x8007A4D0: addiu       $v1, $zero, -0x5
    ctx->r3 = ADD32(0, -0X5);
L_8007A4D4:
    // 0x8007A4D4: lui         $v0, 0x280
    ctx->r2 = S32(0X280 << 16);
    // 0x8007A4D8: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x8007A4DC: addiu       $v1, $zero, 0xAE
    ctx->r3 = ADD32(0, 0XAE);
    // 0x8007A4E0: sh          $v1, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r3;
    // 0x8007A4E4: addiu       $v1, $zero, -0x6
    ctx->r3 = ADD32(0, -0X6);
L_8007A4E8:
    // 0x8007A4E8: sh          $v1, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r3;
    // 0x8007A4EC: j           L_8007A50C
    // 0x8007A4F0: sw          $v0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r2;
        goto L_8007A50C;
    // 0x8007A4F0: sw          $v0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r2;
L_8007A4F4:
    // 0x8007A4F4: lui         $v1, 0x280
    ctx->r3 = S32(0X280 << 16);
    // 0x8007A4F8: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x8007A4FC: addiu       $v0, $zero, 0x118
    ctx->r2 = ADD32(0, 0X118);
    // 0x8007A500: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x8007A504: sh          $zero, 0x2($a0)
    MEM_H(0X2, ctx->r4) = 0;
    // 0x8007A508: sw          $v1, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r3;
L_8007A50C:
    // 0x8007A50C: addiu       $a0, $s0, 0x18
    ctx->r4 = ADD32(ctx->r16, 0X18);
    // 0x8007A510: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8007A514: jal         0x8002C654
    // 0x8007A518: sh          $zero, 0x3E($s0)
    MEM_H(0X3E, ctx->r16) = 0;
    func_8002C654_7A54(rdram, ctx);
        goto after_2;
    // 0x8007A518: sh          $zero, 0x3E($s0)
    MEM_H(0X3E, ctx->r16) = 0;
    after_2:
    // 0x8007A51C: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8007A520: sh          $zero, 0x28($s0)
    MEM_H(0X28, ctx->r16) = 0;
    // 0x8007A524: sh          $zero, 0x20($s0)
    MEM_H(0X20, ctx->r16) = 0;
    // 0x8007A528: andi        $v0, $v1, 0x80
    ctx->r2 = ctx->r3 & 0X80;
    // 0x8007A52C: beq         $v0, $zero, L_8007A53C
    if (ctx->r2 == 0) {
        // 0x8007A530: sh          $zero, 0x18($s0)
        MEM_H(0X18, ctx->r16) = 0;
            goto L_8007A53C;
    }
    // 0x8007A530: sh          $zero, 0x18($s0)
    MEM_H(0X18, ctx->r16) = 0;
    // 0x8007A534: j           L_8007A640
    // 0x8007A538: sb          $zero, 0x10($sp)
    MEM_B(0X10, ctx->r29) = 0;
        goto L_8007A640;
    // 0x8007A538: sb          $zero, 0x10($sp)
    MEM_B(0X10, ctx->r29) = 0;
L_8007A53C:
    // 0x8007A53C: andi        $v0, $v1, 0x20
    ctx->r2 = ctx->r3 & 0X20;
    // 0x8007A540: beq         $v0, $zero, L_8007A5D4
    if (ctx->r2 == 0) {
        // 0x8007A544: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8007A5D4;
    }
    // 0x8007A544: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8007A548: sb          $v0, 0x10($sp)
    MEM_B(0X10, ctx->r29) = ctx->r2;
    // 0x8007A54C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8007A550: jal         0x8004D5D4
    // 0x8007A554: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_8004D5D4_289D4(rdram, ctx);
        goto after_3;
    // 0x8007A554: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_3:
    // 0x8007A558: jal         0x80034904
    // 0x8007A55C: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    func_80034904_FD04(rdram, ctx);
        goto after_4;
    // 0x8007A55C: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_4:
    // 0x8007A560: jal         0x8004F144
    // 0x8007A564: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_5;
    // 0x8007A564: nop

    after_5:
    // 0x8007A568: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x8007A56C: beq         $a3, $zero, L_8007A594
    if (ctx->r7 == 0) {
        // 0x8007A570: addiu       $a0, $a3, 0x38
        ctx->r4 = ADD32(ctx->r7, 0X38);
            goto L_8007A594;
    }
    // 0x8007A570: addiu       $a0, $a3, 0x38
    ctx->r4 = ADD32(ctx->r7, 0X38);
    // 0x8007A574: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    // 0x8007A578: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8007A57C: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x8007A580: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8007A584: sb          $v1, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r3;
    // 0x8007A588: sb          $v0, 0x2($a3)
    MEM_B(0X2, ctx->r7) = ctx->r2;
    // 0x8007A58C: jal         0x8009A3B4
    // 0x8007A590: sb          $v1, 0x3($a3)
    MEM_B(0X3, ctx->r7) = ctx->r3;
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x8007A590: sb          $v1, 0x3($a3)
    MEM_B(0X3, ctx->r7) = ctx->r3;
    after_6:
L_8007A594:
    // 0x8007A594: jal         0x8004F144
    // 0x8007A598: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_7;
    // 0x8007A598: nop

    after_7:
    // 0x8007A59C: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x8007A5A0: beq         $a3, $zero, L_8007A64C
    if (ctx->r7 == 0) {
        // 0x8007A5A4: addiu       $a0, $a3, 0x38
        ctx->r4 = ADD32(ctx->r7, 0X38);
            goto L_8007A64C;
    }
    // 0x8007A5A4: addiu       $a0, $a3, 0x38
    ctx->r4 = ADD32(ctx->r7, 0X38);
    // 0x8007A5A8: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    // 0x8007A5AC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8007A5B0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8007A5B4: sb          $v0, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r2;
    // 0x8007A5B8: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8007A5BC: sb          $v0, 0x2($a3)
    MEM_B(0X2, ctx->r7) = ctx->r2;
    // 0x8007A5C0: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8007A5C4: jal         0x8009A3B4
    // 0x8007A5C8: sb          $v0, 0x3($a3)
    MEM_B(0X3, ctx->r7) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x8007A5C8: sb          $v0, 0x3($a3)
    MEM_B(0X3, ctx->r7) = ctx->r2;
    after_8:
    // 0x8007A5CC: j           L_8007A64C
    // 0x8007A5D0: nop

        goto L_8007A64C;
    // 0x8007A5D0: nop

L_8007A5D4:
    // 0x8007A5D4: andi        $v1, $v1, 0xF
    ctx->r3 = ctx->r3 & 0XF;
    // 0x8007A5D8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8007A5DC: beq         $v1, $v0, L_8007A610
    if (ctx->r3 == ctx->r2) {
        // 0x8007A5E0: slti        $v0, $v1, 0x6
        ctx->r2 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
            goto L_8007A610;
    }
    // 0x8007A5E0: slti        $v0, $v1, 0x6
    ctx->r2 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    // 0x8007A5E4: beq         $v0, $zero, L_8007A5FC
    if (ctx->r2 == 0) {
        // 0x8007A5E8: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8007A5FC;
    }
    // 0x8007A5E8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8007A5EC: beq         $v1, $v0, L_8007A63C
    if (ctx->r3 == ctx->r2) {
        // 0x8007A5F0: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8007A63C;
    }
    // 0x8007A5F0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8007A5F4: j           L_8007A618
    // 0x8007A5F8: nop

        goto L_8007A618;
    // 0x8007A5F8: nop

L_8007A5FC:
    // 0x8007A5FC: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8007A600: beq         $v1, $v0, L_8007A63C
    if (ctx->r3 == ctx->r2) {
        // 0x8007A604: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_8007A63C;
    }
    // 0x8007A604: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8007A608: j           L_8007A618
    // 0x8007A60C: nop

        goto L_8007A618;
    // 0x8007A60C: nop

L_8007A610:
    // 0x8007A610: j           L_8007A63C
    // 0x8007A614: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_8007A63C;
    // 0x8007A614: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_8007A618:
    // 0x8007A618: jal         0x8003ECF0
    // 0x8007A61C: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    func_8003ECF0_1A0F0(rdram, ctx);
        goto after_9;
    // 0x8007A61C: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    after_9:
    // 0x8007A620: lh          $v1, 0x3A($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X3A);
    // 0x8007A624: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8007A628: slti        $v0, $v0, 0x1E
    ctx->r2 = SIGNED(ctx->r2) < 0X1E ? 1 : 0;
    // 0x8007A62C: beq         $v0, $zero, L_8007A63C
    if (ctx->r2 == 0) {
        // 0x8007A630: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8007A63C;
    }
    // 0x8007A630: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8007A634: j           L_8007A640
    // 0x8007A638: sb          $zero, 0x10($sp)
    MEM_B(0X10, ctx->r29) = 0;
        goto L_8007A640;
    // 0x8007A638: sb          $zero, 0x10($sp)
    MEM_B(0X10, ctx->r29) = 0;
L_8007A63C:
    // 0x8007A63C: sb          $v0, 0x10($sp)
    MEM_B(0X10, ctx->r29) = ctx->r2;
L_8007A640:
    // 0x8007A640: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8007A644: jal         0x8004D5D4
    // 0x8007A648: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_8004D5D4_289D4(rdram, ctx);
        goto after_10;
    // 0x8007A648: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_10:
L_8007A64C:
    // 0x8007A64C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8007A650: addiu       $s1, $s0, 0x38
    ctx->r17 = ADD32(ctx->r16, 0X38);
    // 0x8007A654: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8007A658: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8007A65C: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8007A660: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x8007A664: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8007A668: jal         0x8007AB64
    // 0x8007A66C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    func_8007AB64_55F64(rdram, ctx);
        goto after_11;
    // 0x8007A66C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    after_11:
    // 0x8007A670: sb          $v0, 0x10($sp)
    MEM_B(0X10, ctx->r29) = ctx->r2;
    // 0x8007A674: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x8007A678: beq         $v0, $zero, L_8007A688
    if (ctx->r2 == 0) {
        // 0x8007A67C: addiu       $a0, $zero, 0xA1
        ctx->r4 = ADD32(0, 0XA1);
            goto L_8007A688;
    }
    // 0x8007A67C: addiu       $a0, $zero, 0xA1
    ctx->r4 = ADD32(0, 0XA1);
    // 0x8007A680: jal         0x8002A33C
    // 0x8007A684: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_12;
    // 0x8007A684: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_12:
L_8007A688:
    // 0x8007A688: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8007A68C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8007A690: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8007A694: jr          $ra
    // 0x8007A698: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8007A698: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800932E8_6E6E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800932E8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800932EC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800932F0: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x800932F4: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x800932F8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800932FC: lw          $s0, 0xC($a0)
    ctx->r16 = MEM_W(ctx->r4, 0XC);
    // 0x80093300: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x80093304: lhu         $a1, -0xE90($a1)
    ctx->r5 = MEM_HU(ctx->r5, -0XE90);
    // 0x80093308: lui         $a2, 0x800D
    ctx->r6 = S32(0X800D << 16);
    // 0x8009330C: lw          $a2, -0xE8C($a2)
    ctx->r6 = MEM_W(ctx->r6, -0XE8C);
    // 0x80093310: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
    // 0x80093314: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x80093318: addiu       $s2, $s1, 0x4
    ctx->r18 = ADD32(ctx->r17, 0X4);
    // 0x8009331C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80093320: sw          $s2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r18;
    // 0x80093324: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80093328: jal         0x8009DD40
    // 0x8009332C: lw          $a3, 0x4($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X4);
    osPfsFindFile_recomp(rdram, ctx);
        goto after_0;
    // 0x8009332C: lw          $a3, 0x4($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X4);
    after_0:
    // 0x80093330: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80093334: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80093338: bne         $a0, $v0, L_80093388
    if (ctx->r4 != ctx->r2) {
        // 0x8009333C: addu        $v0, $a0, $zero
        ctx->r2 = ADD32(ctx->r4, 0);
            goto L_80093388;
    }
    // 0x8009333C: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x80093340: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x80093344: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80093348: bne         $v1, $v0, L_80093388
    if (ctx->r3 != ctx->r2) {
        // 0x8009334C: addu        $v0, $a0, $zero
        ctx->r2 = ADD32(ctx->r4, 0);
            goto L_80093388;
    }
    // 0x8009334C: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x80093350: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x80093354: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x80093358: lhu         $a1, -0xE90($a1)
    ctx->r5 = MEM_HU(ctx->r5, -0XE90);
    // 0x8009335C: lui         $a2, 0x800D
    ctx->r6 = S32(0X800D << 16);
    // 0x80093360: lw          $a2, -0xE8C($a2)
    ctx->r6 = MEM_W(ctx->r6, -0XE8C);
    // 0x80093364: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80093368: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x8009336C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80093370: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80093374: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80093378: jal         0x8009D110
    // 0x8009337C: lw          $a3, 0x4($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X4);
    osPfsAllocateFile_recomp(rdram, ctx);
        goto after_1;
    // 0x8009337C: lw          $a3, 0x4($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X4);
    after_1:
    // 0x80093380: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80093384: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
L_80093388:
    // 0x80093388: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8009338C: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80093390: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80093394: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80093398: jr          $ra
    // 0x8009339C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8009339C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80059678_34A78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80059678: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8005967C: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80059680: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80059684: bltz        $v0, L_800596A4
    if (SIGNED(ctx->r2) < 0) {
        // 0x80059688: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_800596A4;
    }
    // 0x80059688: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8005968C: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80059690: lbu         $v0, -0x3DA0($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3DA0);
    // 0x80059694: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80059698: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8005969C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x800596A0: sh          $v0, -0x3E38($at)
    MEM_H(-0X3E38, ctx->r1) = ctx->r2;
L_800596A4:
    // 0x800596A4: jal         0x800596DC
    // 0x800596A8: nop

    func_800596DC_34ADC(rdram, ctx);
        goto after_0;
    // 0x800596A8: nop

    after_0:
    // 0x800596AC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x800596B0: jr          $ra
    // 0x800596B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x800596B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8003BDF8_171F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003BDF8: sltu        $v0, $a1, $a0
    ctx->r2 = ctx->r5 < ctx->r4 ? 1 : 0;
    // 0x8003BDFC: bne         $v0, $zero, L_8003BE20
    if (ctx->r2 != 0) {
        // 0x8003BE00: addiu       $v1, $zero, -0x1
        ctx->r3 = ADD32(0, -0X1);
            goto L_8003BE20;
    }
    // 0x8003BE00: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
L_8003BE04:
    // 0x8003BE04: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8003BE08: bne         $v1, $v0, L_8003BE24
    if (ctx->r3 != ctx->r2) {
        // 0x8003BE0C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8003BE24;
    }
    // 0x8003BE0C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8003BE10: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x8003BE14: sltu        $v0, $a1, $a0
    ctx->r2 = ctx->r5 < ctx->r4 ? 1 : 0;
    // 0x8003BE18: beq         $v0, $zero, L_8003BE04
    if (ctx->r2 == 0) {
        // 0x8003BE1C: nop
    
            goto L_8003BE04;
    }
    // 0x8003BE1C: nop

L_8003BE20:
    // 0x8003BE20: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8003BE24:
    // 0x8003BE24: jr          $ra
    // 0x8003BE28: nop

    TRACE_RETURN()
    return;
    // 0x8003BE28: nop

    // 0x8003BE2C: nop

;}
RECOMP_FUNC void func_80066C08_42008(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80066C08: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80066C0C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80066C10: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80066C14: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80066C18: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x80066C1C: lui         $a0, 0x100
    ctx->r4 = S32(0X100 << 16);
    // 0x80066C20: and         $v0, $v1, $a0
    ctx->r2 = ctx->r3 & ctx->r4;
    // 0x80066C24: bne         $v0, $zero, L_80066C50
    if (ctx->r2 != 0) {
        // 0x80066C28: lui         $v0, 0xFFBF
        ctx->r2 = S32(0XFFBF << 16);
            goto L_80066C50;
    }
    // 0x80066C28: lui         $v0, 0xFFBF
    ctx->r2 = S32(0XFFBF << 16);
    // 0x80066C2C: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x80066C30: ori         $v0, $v0, 0x7FFF
    ctx->r2 = ctx->r2 | 0X7FFF;
    // 0x80066C34: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x80066C38: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x80066C3C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80066C40: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
    // 0x80066C44: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x80066C48: lui         $v0, 0xFFBF
    ctx->r2 = S32(0XFFBF << 16);
    // 0x80066C4C: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
L_80066C50:
    // 0x80066C50: lh          $a0, 0x4($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X4);
    // 0x80066C54: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x80066C58: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x80066C5C: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x80066C60: bgtz        $a0, L_80066D78
    if (SIGNED(ctx->r4) > 0) {
        // 0x80066C64: sw          $v1, 0x0($s0)
        MEM_W(0X0, ctx->r16) = ctx->r3;
            goto L_80066D78;
    }
    // 0x80066C64: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
    // 0x80066C68: jal         0x8004B5E8
    // 0x80066C6C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_8004B5E8_269E8(rdram, ctx);
        goto after_0;
    // 0x80066C6C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_0:
    // 0x80066C70: jal         0x8004B5E8
    // 0x80066C74: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8004B5E8_269E8(rdram, ctx);
        goto after_1;
    // 0x80066C74: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x80066C78: lhu         $v0, 0xBA($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XBA);
    // 0x80066C7C: andi        $v0, $v0, 0x6000
    ctx->r2 = ctx->r2 & 0X6000;
    // 0x80066C80: beq         $v0, $zero, L_80066CF8
    if (ctx->r2 == 0) {
        // 0x80066C84: addiu       $v0, $zero, -0x100
        ctx->r2 = ADD32(0, -0X100);
            goto L_80066CF8;
    }
    // 0x80066C84: addiu       $v0, $zero, -0x100
    ctx->r2 = ADD32(0, -0X100);
    // 0x80066C88: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80066C8C: lw          $v1, 0x3FF0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3FF0);
    // 0x80066C90: and         $a0, $v1, $v0
    ctx->r4 = ctx->r3 & ctx->r2;
    // 0x80066C94: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x80066C98: lbu         $v0, 0x5410($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X5410);
    // 0x80066C9C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80066CA0: sw          $a0, 0x3FF0($at)
    MEM_W(0X3FF0, ctx->r1) = ctx->r4;
    // 0x80066CA4: lb          $v1, 0x71($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X71);
    // 0x80066CA8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80066CAC: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x80066CB0: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x80066CB4: lbu         $a1, -0x6F90($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X6F90);
    // 0x80066CB8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80066CBC: beq         $a1, $v0, L_80066CE0
    if (ctx->r5 == ctx->r2) {
        // 0x80066CC0: lui         $v1, 0x4000
        ctx->r3 = S32(0X4000 << 16);
            goto L_80066CE0;
    }
    // 0x80066CC0: lui         $v1, 0x4000
    ctx->r3 = S32(0X4000 << 16);
    // 0x80066CC4: or          $v1, $a0, $v1
    ctx->r3 = ctx->r4 | ctx->r3;
    // 0x80066CC8: addiu       $v0, $a1, 0x40
    ctx->r2 = ADD32(ctx->r5, 0X40);
    // 0x80066CCC: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80066CD0: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80066CD4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80066CD8: j           L_80066D80
    // 0x80066CDC: sw          $v1, 0x3FF0($at)
    MEM_W(0X3FF0, ctx->r1) = ctx->r3;
        goto L_80066D80;
    // 0x80066CDC: sw          $v1, 0x3FF0($at)
    MEM_W(0X3FF0, ctx->r1) = ctx->r3;
L_80066CE0:
    // 0x80066CE0: lui         $v0, 0x4000
    ctx->r2 = S32(0X4000 << 16);
    // 0x80066CE4: ori         $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 | 0XFF;
    // 0x80066CE8: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x80066CEC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80066CF0: j           L_80066D80
    // 0x80066CF4: sw          $v0, 0x3FF0($at)
    MEM_W(0X3FF0, ctx->r1) = ctx->r2;
        goto L_80066D80;
    // 0x80066CF4: sw          $v0, 0x3FF0($at)
    MEM_W(0X3FF0, ctx->r1) = ctx->r2;
L_80066CF8:
    // 0x80066CF8: lui         $v1, 0x801A
    ctx->r3 = S32(0X801A << 16);
    // 0x80066CFC: lbu         $v1, 0x5410($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X5410);
    // 0x80066D00: beq         $v1, $zero, L_80066D48
    if (ctx->r3 == 0) {
        // 0x80066D04: nop
    
            goto L_80066D48;
    }
    // 0x80066D04: nop

    // 0x80066D08: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80066D0C: lbu         $v0, -0x11D0($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X11D0);
    // 0x80066D10: sltu        $v0, $v1, $v0
    ctx->r2 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x80066D14: beq         $v0, $zero, L_80066D30
    if (ctx->r2 == 0) {
        // 0x80066D18: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80066D30;
    }
    // 0x80066D18: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80066D1C: lui         $a1, 0x2
    ctx->r5 = S32(0X2 << 16);
    // 0x80066D20: jal         0x8004B6A0
    // 0x80066D24: ori         $a1, $a1, 0x1A
    ctx->r5 = ctx->r5 | 0X1A;
    func_8004B6A0_26AA0(rdram, ctx);
        goto after_2;
    // 0x80066D24: ori         $a1, $a1, 0x1A
    ctx->r5 = ctx->r5 | 0X1A;
    after_2:
    // 0x80066D28: j           L_80066D64
    // 0x80066D2C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
        goto L_80066D64;
    // 0x80066D2C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_80066D30:
    // 0x80066D30: beq         $v1, $zero, L_80066D48
    if (ctx->r3 == 0) {
        // 0x80066D34: lui         $a1, 0x2
        ctx->r5 = S32(0X2 << 16);
            goto L_80066D48;
    }
    // 0x80066D34: lui         $a1, 0x2
    ctx->r5 = S32(0X2 << 16);
    // 0x80066D38: jal         0x8004B6A0
    // 0x80066D3C: ori         $a1, $a1, 0x1A
    ctx->r5 = ctx->r5 | 0X1A;
    func_8004B6A0_26AA0(rdram, ctx);
        goto after_3;
    // 0x80066D3C: ori         $a1, $a1, 0x1A
    ctx->r5 = ctx->r5 | 0X1A;
    after_3:
    // 0x80066D40: j           L_80066D80
    // 0x80066D44: nop

        goto L_80066D80;
    // 0x80066D44: nop

L_80066D48:
    // 0x80066D48: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x80066D4C: lbu         $v0, 0x5410($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X5410);
    // 0x80066D50: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80066D54: lbu         $v1, -0x11D0($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X11D0);
    // 0x80066D58: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x80066D5C: beq         $v0, $zero, L_80066D80
    if (ctx->r2 == 0) {
        // 0x80066D60: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80066D80;
    }
    // 0x80066D60: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_80066D64:
    // 0x80066D64: lui         $a1, 0x2
    ctx->r5 = S32(0X2 << 16);
    // 0x80066D68: jal         0x8004B6A0
    // 0x80066D6C: ori         $a1, $a1, 0x1B
    ctx->r5 = ctx->r5 | 0X1B;
    func_8004B6A0_26AA0(rdram, ctx);
        goto after_4;
    // 0x80066D6C: ori         $a1, $a1, 0x1B
    ctx->r5 = ctx->r5 | 0X1B;
    after_4:
    // 0x80066D70: j           L_80066D80
    // 0x80066D74: nop

        goto L_80066D80;
    // 0x80066D74: nop

L_80066D78:
    // 0x80066D78: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80066D7C: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
L_80066D80:
    // 0x80066D80: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x80066D84: lbu         $v0, 0x5410($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X5410);
    // 0x80066D88: lb          $v1, 0x71($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X71);
    // 0x80066D8C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80066D90: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80066D94: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80066D98: lbu         $v1, -0x6F90($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X6F90);
    // 0x80066D9C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80066DA0: beq         $v1, $v0, L_80066DBC
    if (ctx->r3 == ctx->r2) {
        // 0x80066DA4: addiu       $v0, $v1, 0x40
        ctx->r2 = ADD32(ctx->r3, 0X40);
            goto L_80066DBC;
    }
    // 0x80066DA4: addiu       $v0, $v1, 0x40
    ctx->r2 = ADD32(ctx->r3, 0X40);
    // 0x80066DA8: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80066DAC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80066DB0: sw          $v0, 0x77F0($at)
    MEM_W(0X77F0, ctx->r1) = ctx->r2;
    // 0x80066DB4: j           L_80066DC8
    // 0x80066DB8: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
        goto L_80066DC8;
    // 0x80066DB8: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
L_80066DBC:
    // 0x80066DBC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80066DC0: sw          $v1, 0x77F0($at)
    MEM_W(0X77F0, ctx->r1) = ctx->r3;
    // 0x80066DC4: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
L_80066DC8:
    // 0x80066DC8: sb          $v0, 0x78($s0)
    MEM_B(0X78, ctx->r16) = ctx->r2;
    // 0x80066DCC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80066DD0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80066DD4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80066DD8: jr          $ra
    // 0x80066DDC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80066DDC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8003E1B8_195B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003E1B8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8003E1BC: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8003E1C0: lui         $s3, 0x800B
    ctx->r19 = S32(0X800B << 16);
    // 0x8003E1C4: addiu       $s3, $s3, -0x3620
    ctx->r19 = ADD32(ctx->r19, -0X3620);
    // 0x8003E1C8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8003E1CC: lui         $s0, 0xA4
    ctx->r16 = S32(0XA4 << 16);
    // 0x8003E1D0: ori         $s0, $s0, 0xCB7F
    ctx->r16 = ctx->r16 | 0XCB7F;
    // 0x8003E1D4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8003E1D8: addiu       $s2, $zero, 0x9
    ctx->r18 = ADD32(0, 0X9);
    // 0x8003E1DC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8003E1E0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8003E1E4: lui         $s1, 0x801C
    ctx->r17 = S32(0X801C << 16);
    // 0x8003E1E8: addiu       $s1, $s1, -0x3C18
    ctx->r17 = ADD32(ctx->r17, -0X3C18);
    // 0x8003E1EC: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8003E1F0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003E1F4: sb          $v0, -0xC5C($at)
    MEM_B(-0XC5C, ctx->r1) = ctx->r2;
    // 0x8003E1F8: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
L_8003E1FC:
    // 0x8003E1FC: lb          $v0, 0x0($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X0);
    // 0x8003E200: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8003E204: addu        $v0, $v0, $s3
    ctx->r2 = ADD32(ctx->r2, ctx->r19);
    // 0x8003E208: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8003E20C: jalr        $v0
    // 0x8003E210: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8003E210: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_0:
    // 0x8003E214: jal         0x8004F6DC
    // 0x8003E218: nop

    func_8004F6DC_2AADC(rdram, ctx);
        goto after_1;
    // 0x8003E218: nop

    after_1:
    // 0x8003E21C: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8003E220: lw          $v0, -0x3C0C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3C0C);
    // 0x8003E224: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8003E228: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003E22C: sw          $v0, -0x3C0C($at)
    MEM_W(-0X3C0C, ctx->r1) = ctx->r2;
    // 0x8003E230: sltu        $v0, $s0, $v0
    ctx->r2 = ctx->r16 < ctx->r2 ? 1 : 0;
    // 0x8003E234: beq         $v0, $zero, L_8003E244
    if (ctx->r2 == 0) {
        // 0x8003E238: nop
    
            goto L_8003E244;
    }
    // 0x8003E238: nop

    // 0x8003E23C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003E240: sw          $s0, -0x3C0C($at)
    MEM_W(-0X3C0C, ctx->r1) = ctx->r16;
L_8003E244:
    // 0x8003E244: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8003E248: lb          $v0, -0x3C18($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3C18);
    // 0x8003E24C: slti        $v1, $v0, 0x3
    ctx->r3 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x8003E250: xori        $v0, $v0, 0x6
    ctx->r2 = ctx->r2 ^ 0X6;
    // 0x8003E254: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8003E258: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8003E25C: bne         $v1, $zero, L_8003E2C4
    if (ctx->r3 != 0) {
        // 0x8003E260: nop
    
            goto L_8003E2C4;
    }
    // 0x8003E260: nop

    // 0x8003E264: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8003E268: lhu         $v0, -0x440($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X440);
    // 0x8003E26C: bne         $v0, $zero, L_8003E2C4
    if (ctx->r2 != 0) {
        // 0x8003E270: nop
    
            goto L_8003E2C4;
    }
    // 0x8003E270: nop

    // 0x8003E274: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8003E278: lhu         $v0, -0x783E($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X783E);
    // 0x8003E27C: andi        $v0, $v0, 0x9
    ctx->r2 = ctx->r2 & 0X9;
    // 0x8003E280: bne         $v0, $s2, L_8003E2BC
    if (ctx->r2 != ctx->r18) {
        // 0x8003E284: nop
    
            goto L_8003E2BC;
    }
    // 0x8003E284: nop

    // 0x8003E288: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8003E28C: lhu         $v0, -0x3C0E($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3C0E);
    // 0x8003E290: addiu       $v1, $v0, 0x1
    ctx->r3 = ADD32(ctx->r2, 0X1);
    // 0x8003E294: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8003E298: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8003E29C: slti        $v0, $v0, 0x3D
    ctx->r2 = SIGNED(ctx->r2) < 0X3D ? 1 : 0;
    // 0x8003E2A0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003E2A4: bne         $v0, $zero, L_8003E2C4
    if (ctx->r2 != 0) {
        // 0x8003E2A8: sh          $v1, -0x3C0E($at)
        MEM_H(-0X3C0E, ctx->r1) = ctx->r3;
            goto L_8003E2C4;
    }
    // 0x8003E2A8: sh          $v1, -0x3C0E($at)
    MEM_H(-0X3C0E, ctx->r1) = ctx->r3;
    // 0x8003E2AC: jal         0x8003DEBC
    // 0x8003E2B0: nop

    func_8003DEBC_192BC(rdram, ctx);
        goto after_2;
    // 0x8003E2B0: nop

    after_2:
    // 0x8003E2B4: j           L_8003E2C4
    // 0x8003E2B8: nop

        goto L_8003E2C4;
    // 0x8003E2B8: nop

L_8003E2BC:
    // 0x8003E2BC: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003E2C0: sh          $zero, -0x3C0E($at)
    MEM_H(-0X3C0E, ctx->r1) = 0;
L_8003E2C4:
    // 0x8003E2C4: jal         0x80029114
    // 0x8003E2C8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80029114_4514(rdram, ctx);
        goto after_3;
    // 0x8003E2C8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_3:
    // 0x8003E2CC: j           L_8003E1FC
    // 0x8003E2D0: nop

        goto L_8003E1FC;
    // 0x8003E2D0: nop

    // 0x8003E2D4: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8003E2D8: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8003E2DC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8003E2E0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8003E2E4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8003E2E8: jr          $ra
    // 0x8003E2EC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8003E2EC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80069A40_44E40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80069A40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80069A44: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80069A48: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x80069A4C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80069A50: jal         0x80069860
    // 0x80069A54: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    func_80069860_44C60(rdram, ctx);
        goto after_0;
    // 0x80069A54: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_0:
    // 0x80069A58: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80069A5C: jr          $ra
    // 0x80069A60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80069A60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80036D34_12134(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80036D34: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80036D38: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x80036D3C: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80036D40: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80036D44: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80036D48: sw          $ra, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r31;
    // 0x80036D4C: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x80036D50: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x80036D54: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x80036D58: bne         $a0, $v0, L_80036D90
    if (ctx->r4 != ctx->r2) {
        // 0x80036D5C: sw          $s0, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r16;
            goto L_80036D90;
    }
    // 0x80036D5C: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80036D60: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80036D64: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    // 0x80036D68: addiu       $s0, $zero, 0xE
    ctx->r16 = ADD32(0, 0XE);
    // 0x80036D6C: lui         $v1, 0x801A
    ctx->r3 = S32(0X801A << 16);
    // 0x80036D70: addiu       $v1, $v1, -0x5818
    ctx->r3 = ADD32(ctx->r3, -0X5818);
    // 0x80036D74: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80036D78: addiu       $v0, $v0, -0x7D10
    ctx->r2 = ADD32(ctx->r2, -0X7D10);
L_80036D7C:
    // 0x80036D7C: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x80036D80: addiu       $v1, $v1, -0x4
    ctx->r3 = ADD32(ctx->r3, -0X4);
    // 0x80036D84: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x80036D88: bgez        $s0, L_80036D7C
    if (SIGNED(ctx->r16) >= 0) {
        // 0x80036D8C: addiu       $v0, $v0, -0xC0
        ctx->r2 = ADD32(ctx->r2, -0XC0);
            goto L_80036D7C;
    }
    // 0x80036D8C: addiu       $v0, $v0, -0xC0
    ctx->r2 = ADD32(ctx->r2, -0XC0);
L_80036D90:
    // 0x80036D90: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x80036D94: sra         $s0, $v0, 16
    ctx->r16 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80036D98: sll         $v0, $a1, 16
    ctx->r2 = S32(ctx->r5 << 16);
    // 0x80036D9C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80036DA0: addu        $v1, $s0, $v0
    ctx->r3 = ADD32(ctx->r16, ctx->r2);
    // 0x80036DA4: slt         $v0, $s0, $v1
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80036DA8: beq         $v0, $zero, L_80036E18
    if (ctx->r2 == 0) {
        // 0x80036DAC: addu        $s3, $v1, $zero
        ctx->r19 = ADD32(ctx->r3, 0);
            goto L_80036E18;
    }
    // 0x80036DAC: addu        $s3, $v1, $zero
    ctx->r19 = ADD32(ctx->r3, 0);
    // 0x80036DB0: addiu       $v1, $sp, 0x10
    ctx->r3 = ADD32(ctx->r29, 0X10);
    // 0x80036DB4: sll         $v0, $s0, 1
    ctx->r2 = S32(ctx->r16 << 1);
    // 0x80036DB8: addu        $s1, $v0, $v1
    ctx->r17 = ADD32(ctx->r2, ctx->r3);
    // 0x80036DBC: lui         $v1, 0x801A
    ctx->r3 = S32(0X801A << 16);
    // 0x80036DC0: addiu       $v1, $v1, -0x5850
    ctx->r3 = ADD32(ctx->r3, -0X5850);
    // 0x80036DC4: sll         $v0, $s0, 2
    ctx->r2 = S32(ctx->r16 << 2);
    // 0x80036DC8: addu        $s2, $v0, $v1
    ctx->r18 = ADD32(ctx->r2, ctx->r3);
    // 0x80036DCC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_80036DD0:
    // 0x80036DD0: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80036DD4: lw          $a1, 0x4A38($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X4A38);
    // 0x80036DD8: andi        $a2, $s0, 0xFFFF
    ctx->r6 = ctx->r16 & 0XFFFF;
    // 0x80036DDC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80036DE0: jal         0x8007FBC0
    // 0x80036DE4: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
    func_8007FBC0_5AFC0(rdram, ctx);
        goto after_0;
    // 0x80036DE4: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
    after_0:
    // 0x80036DE8: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80036DEC: lw          $a1, 0x0($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X0);
    // 0x80036DF0: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80036DF4: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
    // 0x80036DF8: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x80036DFC: sll         $a2, $v0, 1
    ctx->r6 = S32(ctx->r2 << 1);
    // 0x80036E00: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x80036E04: jal         0x80099F90
    // 0x80036E08: sll         $a2, $a2, 5
    ctx->r6 = S32(ctx->r6 << 5);
    bcopy_recomp(rdram, ctx);
        goto after_1;
    // 0x80036E08: sll         $a2, $a2, 5
    ctx->r6 = S32(ctx->r6 << 5);
    after_1:
    // 0x80036E0C: slt         $v0, $s0, $s3
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x80036E10: bne         $v0, $zero, L_80036DD0
    if (ctx->r2 != 0) {
        // 0x80036E14: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80036DD0;
    }
    // 0x80036E14: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_80036E18:
    // 0x80036E18: lw          $ra, 0x40($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X40);
    // 0x80036E1C: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x80036E20: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x80036E24: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x80036E28: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80036E2C: jr          $ra
    // 0x80036E30: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x80036E30: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x80036E34: nop

    // 0x80036E38: nop

    // 0x80036E3C: nop

;}
RECOMP_FUNC void func_800711E8_4C5E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800711E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800711EC: andi        $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 & 0XFFFF;
    // 0x800711F0: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x800711F4: addiu       $v1, $v1, 0x5086
    ctx->r3 = ADD32(ctx->r3, 0X5086);
    // 0x800711F8: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x800711FC: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80071200: sll         $a3, $v0, 2
    ctx->r7 = S32(ctx->r2 << 2);
    // 0x80071204: addu        $t0, $a3, $v1
    ctx->r8 = ADD32(ctx->r7, ctx->r3);
    // 0x80071208: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8007120C: lhu         $a2, 0x0($t0)
    ctx->r6 = MEM_HU(ctx->r8, 0X0);
    // 0x80071210: andi        $v1, $a2, 0xFFF
    ctx->r3 = ctx->r6 & 0XFFF;
    // 0x80071214: srl         $v0, $a2, 12
    ctx->r2 = S32(U32(ctx->r6) >> 12);
    // 0x80071218: srlv        $a1, $a1, $v0
    ctx->r5 = S32(U32(ctx->r5) >> (ctx->r2 & 31));
    // 0x8007121C: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x80071220: bgtz        $v1, L_80071260
    if (SIGNED(ctx->r3) > 0) {
        // 0x80071224: andi        $v0, $a2, 0xF000
        ctx->r2 = ctx->r6 & 0XF000;
            goto L_80071260;
    }
    // 0x80071224: andi        $v0, $a2, 0xF000
    ctx->r2 = ctx->r6 & 0XF000;
    // 0x80071228: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8007122C: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x80071230: lw          $v0, 0x5088($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X5088);
    // 0x80071234: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80071238: bgez        $v0, L_80071250
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8007123C: nop
    
            goto L_80071250;
    }
    // 0x8007123C: nop

    // 0x80071240: jal         0x80071274
    // 0x80071244: nop

    func_80071274_4C674(rdram, ctx);
        goto after_0;
    // 0x80071244: nop

    after_0:
    // 0x80071248: j           L_80071268
    // 0x8007124C: nop

        goto L_80071268;
    // 0x8007124C: nop

L_80071250:
    // 0x80071250: jal         0x8007168C
    // 0x80071254: nop

    func_8007168C_4CA8C(rdram, ctx);
        goto after_1;
    // 0x80071254: nop

    after_1:
    // 0x80071258: j           L_80071268
    // 0x8007125C: nop

        goto L_80071268;
    // 0x8007125C: nop

L_80071260:
    // 0x80071260: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80071264: sh          $v0, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r2;
L_80071268:
    // 0x80071268: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8007126C: jr          $ra
    // 0x80071270: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80071270: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80078BA0_53FA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80078BA0: lbu         $v1, 0x8($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X8);
    // 0x80078BA4: addiu       $v0, $zero, -0x28
    ctx->r2 = ADD32(0, -0X28);
    // 0x80078BA8: sh          $v0, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r2;
    // 0x80078BAC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80078BB0: sh          $v0, 0x34($a0)
    MEM_H(0X34, ctx->r4) = ctx->r2;
    // 0x80078BB4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80078BB8: jr          $ra
    // 0x80078BBC: sb          $v1, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r3;
    TRACE_RETURN()
    return;
    // 0x80078BBC: sb          $v1, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r3;
;}
RECOMP_FUNC void func_80061ED8_3D2D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80061ED8: lw          $v0, 0x6C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X6C);
    // 0x80061EDC: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x80061EE0: sw          $v0, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r2;
    // 0x80061EE4: jr          $ra
    // 0x80061EE8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x80061EE8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_8008A3D0_657D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008A3D0: lbu         $a2, 0x0($a1)
    ctx->r6 = MEM_BU(ctx->r5, 0X0);
    // 0x8008A3D4: andi        $v0, $a2, 0x80
    ctx->r2 = ctx->r6 & 0X80;
    // 0x8008A3D8: beq         $v0, $zero, L_8008A3F4
    if (ctx->r2 == 0) {
        // 0x8008A3DC: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_8008A3F4;
    }
    // 0x8008A3DC: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8008A3E0: andi        $a2, $a2, 0x7F
    ctx->r6 = ctx->r6 & 0X7F;
    // 0x8008A3E4: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x8008A3E8: sll         $a2, $a2, 8
    ctx->r6 = S32(ctx->r6 << 8);
    // 0x8008A3EC: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8008A3F0: or          $a2, $a2, $v0
    ctx->r6 = ctx->r6 | ctx->r2;
L_8008A3F4:
    // 0x8008A3F4: lw          $v0, 0x74($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X74);
    // 0x8008A3F8: lw          $v1, 0x18($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X18);
    // 0x8008A3FC: sll         $v0, $a2, 3
    ctx->r2 = S32(ctx->r6 << 3);
    // 0x8008A400: subu        $v0, $v0, $a2
    ctx->r2 = SUB32(ctx->r2, ctx->r6);
    // 0x8008A404: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8008A408: lbu         $a2, 0x0($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X0);
    // 0x8008A40C: bne         $a2, $zero, L_8008A418
    if (ctx->r6 != 0) {
        // 0x8008A410: addu        $a3, $v0, $zero
        ctx->r7 = ADD32(ctx->r2, 0);
            goto L_8008A418;
    }
    // 0x8008A410: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x8008A414: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_8008A418:
    // 0x8008A418: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x8008A41C: div         $zero, $v0, $a2
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r6)));
    // 0x8008A420: bne         $a2, $zero, L_8008A42C
    if (ctx->r6 != 0) {
        // 0x8008A424: nop
    
            goto L_8008A42C;
    }
    // 0x8008A424: nop

    // 0x8008A428: break       7
    do_break(2148049960);
L_8008A42C:
    // 0x8008A42C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8008A430: bne         $a2, $at, L_8008A444
    if (ctx->r6 != ctx->r1) {
        // 0x8008A434: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8008A444;
    }
    // 0x8008A434: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8008A438: bne         $v0, $at, L_8008A444
    if (ctx->r2 != ctx->r1) {
        // 0x8008A43C: nop
    
            goto L_8008A444;
    }
    // 0x8008A43C: nop

    // 0x8008A440: break       6
    do_break(2148049984);
L_8008A444:
    // 0x8008A444: mflo        $v0
    ctx->r2 = lo;
    // 0x8008A448: sb          $a2, 0xBF($a0)
    MEM_B(0XBF, ctx->r4) = ctx->r6;
    // 0x8008A44C: sw          $v0, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r2;
    // 0x8008A450: lbu         $v0, 0x1($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0X1);
    // 0x8008A454: sb          $v0, 0xC0($a0)
    MEM_B(0XC0, ctx->r4) = ctx->r2;
    // 0x8008A458: lbu         $a2, 0x2($a3)
    ctx->r6 = MEM_BU(ctx->r7, 0X2);
    // 0x8008A45C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8008A460: ldc1        $f4, 0x2D10($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, 0X2D10);
    // 0x8008A464: mtc1        $a2, $f2
    ctx->f2.u32l = ctx->r6;
    // 0x8008A468: nop

    // 0x8008A46C: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
    // 0x8008A470: cvt.d.s     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.d = CVT_D_S(ctx->f2.fl);
    // 0x8008A474: div.d       $f2, $f4, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f2.d); 
    ctx->f2.d = DIV_D(ctx->f4.d, ctx->f2.d);
    // 0x8008A478: lbu         $v0, 0xC0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XC0);
    // 0x8008A47C: sb          $a2, 0xC6($a0)
    MEM_B(0XC6, ctx->r4) = ctx->r6;
    // 0x8008A480: lbu         $v1, 0x3($a3)
    ctx->r3 = MEM_BU(ctx->r7, 0X3);
    // 0x8008A484: subu        $v0, $v1, $v0
    ctx->r2 = SUB32(ctx->r3, ctx->r2);
    // 0x8008A488: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x8008A48C: nop

    // 0x8008A490: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x8008A494: cvt.d.s     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.d = CVT_D_S(ctx->f0.fl);
    // 0x8008A498: mul.d       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = MUL_D(ctx->f2.d, ctx->f0.d);
    // 0x8008A49C: sb          $v1, 0xC1($a0)
    MEM_B(0XC1, ctx->r4) = ctx->r3;
    // 0x8008A4A0: cvt.s.d     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); 
    ctx->f2.fl = CVT_S_D(ctx->f2.d);
    // 0x8008A4A4: swc1        $f2, 0x58($a0)
    MEM_W(0X58, ctx->r4) = ctx->f2.u32l;
    // 0x8008A4A8: lbu         $a2, 0x4($a3)
    ctx->r6 = MEM_BU(ctx->r7, 0X4);
    // 0x8008A4AC: mtc1        $a2, $f2
    ctx->f2.u32l = ctx->r6;
    // 0x8008A4B0: nop

    // 0x8008A4B4: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
    // 0x8008A4B8: cvt.d.s     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.d = CVT_D_S(ctx->f2.fl);
    // 0x8008A4BC: div.d       $f2, $f4, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f2.d); 
    ctx->f2.d = DIV_D(ctx->f4.d, ctx->f2.d);
    // 0x8008A4C0: lbu         $v0, 0xC1($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XC1);
    // 0x8008A4C4: sb          $a2, 0xC7($a0)
    MEM_B(0XC7, ctx->r4) = ctx->r6;
    // 0x8008A4C8: lbu         $v1, 0x5($a3)
    ctx->r3 = MEM_BU(ctx->r7, 0X5);
    // 0x8008A4CC: subu        $v0, $v1, $v0
    ctx->r2 = SUB32(ctx->r3, ctx->r2);
    // 0x8008A4D0: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x8008A4D4: nop

    // 0x8008A4D8: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x8008A4DC: cvt.d.s     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.d = CVT_D_S(ctx->f0.fl);
    // 0x8008A4E0: mul.d       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = MUL_D(ctx->f2.d, ctx->f0.d);
    // 0x8008A4E4: sb          $v1, 0xC2($a0)
    MEM_B(0XC2, ctx->r4) = ctx->r3;
    // 0x8008A4E8: cvt.s.d     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); 
    ctx->f2.fl = CVT_S_D(ctx->f2.d);
    // 0x8008A4EC: swc1        $f2, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->f2.u32l;
    // 0x8008A4F0: lbu         $a2, 0x6($a3)
    ctx->r6 = MEM_BU(ctx->r7, 0X6);
    // 0x8008A4F4: mtc1        $a2, $f0
    ctx->f0.u32l = ctx->r6;
    // 0x8008A4F8: nop

    // 0x8008A4FC: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x8008A500: cvt.d.s     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.d = CVT_D_S(ctx->f0.fl);
    // 0x8008A504: div.d       $f4, $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = DIV_D(ctx->f4.d, ctx->f0.d);
    // 0x8008A508: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
    // 0x8008A50C: sb          $a2, 0xC8($a0)
    MEM_B(0XC8, ctx->r4) = ctx->r6;
    // 0x8008A510: cvt.s.d     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f4.fl = CVT_S_D(ctx->f4.d);
    // 0x8008A514: jr          $ra
    // 0x8008A518: swc1        $f4, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x8008A518: swc1        $f4, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_80077FE0_533E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80077FE0: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x80077FE4: lui         $a1, 0x3D48
    ctx->r5 = S32(0X3D48 << 16);
    // 0x80077FE8: ori         $a1, $a1, 0x2E
    ctx->r5 = ctx->r5 | 0X2E;
    // 0x80077FEC: lbu         $v1, 0x0($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X0);
    // 0x80077FF0: lbu         $a0, 0x6($a2)
    ctx->r4 = MEM_BU(ctx->r6, 0X6);
    // 0x80077FF4: lbu         $a3, 0x3($a2)
    ctx->r7 = MEM_BU(ctx->r6, 0X3);
    // 0x80077FF8: lui         $v0, 0x2E40
    ctx->r2 = S32(0X2E40 << 16);
    // 0x80077FFC: ori         $v0, $v0, 0x4040
    ctx->r2 = ctx->r2 | 0X4040;
    // 0x80078000: sw          $v0, 0x18($a2)
    MEM_W(0X18, ctx->r6) = ctx->r2;
    // 0x80078004: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80078008: sb          $v0, 0x22($a2)
    MEM_B(0X22, ctx->r6) = ctx->r2;
    // 0x8007800C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80078010: sw          $a1, 0x14($a2)
    MEM_W(0X14, ctx->r6) = ctx->r5;
    // 0x80078014: sb          $zero, 0x23($a2)
    MEM_B(0X23, ctx->r6) = 0;
    // 0x80078018: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8007801C: ori         $a0, $a0, 0x20
    ctx->r4 = ctx->r4 | 0X20;
    // 0x80078020: sb          $v1, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r3;
    // 0x80078024: beq         $a3, $v0, L_80078054
    if (ctx->r7 == ctx->r2) {
        // 0x80078028: sb          $a0, 0x6($a2)
        MEM_B(0X6, ctx->r6) = ctx->r4;
            goto L_80078054;
    }
    // 0x80078028: sb          $a0, 0x6($a2)
    MEM_B(0X6, ctx->r6) = ctx->r4;
    // 0x8007802C: slti        $v0, $a3, 0x2
    ctx->r2 = SIGNED(ctx->r7) < 0X2 ? 1 : 0;
    // 0x80078030: bne         $v0, $zero, L_80078090
    if (ctx->r2 != 0) {
        // 0x80078034: addiu       $v0, $zero, 0xD
        ctx->r2 = ADD32(0, 0XD);
            goto L_80078090;
    }
    // 0x80078034: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x80078038: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8007803C: beq         $a3, $v0, L_8007806C
    if (ctx->r7 == ctx->r2) {
        // 0x80078040: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8007806C;
    }
    // 0x80078040: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80078044: beq         $a3, $v0, L_8007808C
    if (ctx->r7 == ctx->r2) {
        // 0x80078048: addiu       $v0, $zero, 0xD
        ctx->r2 = ADD32(0, 0XD);
            goto L_8007808C;
    }
    // 0x80078048: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x8007804C: j           L_80078094
    // 0x80078050: sh          $v0, 0x24($a2)
    MEM_H(0X24, ctx->r6) = ctx->r2;
        goto L_80078094;
    // 0x80078050: sh          $v0, 0x24($a2)
    MEM_H(0X24, ctx->r6) = ctx->r2;
L_80078054:
    // 0x80078054: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80078058: sh          $v0, 0x24($a2)
    MEM_H(0X24, ctx->r6) = ctx->r2;
    // 0x8007805C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x80078060: lbu         $v1, -0x332C($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X332C);
    // 0x80078064: j           L_80078080
    // 0x80078068: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80078080;
    // 0x80078068: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8007806C:
    // 0x8007806C: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80078070: sh          $v0, 0x24($a2)
    MEM_H(0X24, ctx->r6) = ctx->r2;
    // 0x80078074: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x80078078: lbu         $v1, -0x3328($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3328);
    // 0x8007807C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80078080:
    // 0x80078080: sb          $v0, 0x3($a2)
    MEM_B(0X3, ctx->r6) = ctx->r2;
    // 0x80078084: j           L_800780A4
    // 0x80078088: sb          $v1, 0xB($a2)
    MEM_B(0XB, ctx->r6) = ctx->r3;
        goto L_800780A4;
    // 0x80078088: sb          $v1, 0xB($a2)
    MEM_B(0XB, ctx->r6) = ctx->r3;
L_8007808C:
    // 0x8007808C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
L_80078090:
    // 0x80078090: sh          $v0, 0x24($a2)
    MEM_H(0X24, ctx->r6) = ctx->r2;
L_80078094:
    // 0x80078094: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80078098: lbu         $v0, -0x3330($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3330);
    // 0x8007809C: sb          $zero, 0x3($a2)
    MEM_B(0X3, ctx->r6) = 0;
    // 0x800780A0: sb          $v0, 0xB($a2)
    MEM_B(0XB, ctx->r6) = ctx->r2;
L_800780A4:
    // 0x800780A4: lbu         $v0, 0x8($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X8);
    // 0x800780A8: sb          $zero, 0xA($a2)
    MEM_B(0XA, ctx->r6) = 0;
    // 0x800780AC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800780B0: jr          $ra
    // 0x800780B4: sb          $v0, 0x8($a2)
    MEM_B(0X8, ctx->r6) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x800780B4: sb          $v0, 0x8($a2)
    MEM_B(0X8, ctx->r6) = ctx->r2;
;}
RECOMP_FUNC void func_80063C64_3F064(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80063C64: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80063C68: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80063C6C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80063C70: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80063C74: jal         0x8004A508
    // 0x80063C78: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8004A508_25908(rdram, ctx);
        goto after_0;
    // 0x80063C78: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x80063C7C: bne         $v0, $zero, L_80063C8C
    if (ctx->r2 != 0) {
        // 0x80063C80: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80063C8C;
    }
    // 0x80063C80: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80063C84: j           L_80063C98
    // 0x80063C88: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_80063C98;
    // 0x80063C88: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80063C8C:
    // 0x80063C8C: lw          $v1, 0x6C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X6C);
    // 0x80063C90: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80063C94: sw          $v1, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->r3;
L_80063C98:
    // 0x80063C98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80063C9C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80063CA0: jr          $ra
    // 0x80063CA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80063CA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8004B7B8_26BB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004B7B8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8004B7BC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8004B7C0: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8004B7C4: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8004B7C8: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8004B7CC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8004B7D0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8004B7D4: lw          $s1, 0x8($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X8);
    // 0x8004B7D8: lui         $s0, 0x801A
    ctx->r16 = S32(0X801A << 16);
    // 0x8004B7DC: lw          $s0, -0x5858($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X5858);
    // 0x8004B7E0: lb          $a3, 0x4($s2)
    ctx->r7 = MEM_B(ctx->r18, 0X4);
    // 0x8004B7E4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8004B7E8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8004B7EC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8004B7F0: jal         0x8003055C
    // 0x8004B7F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003055C_B95C(rdram, ctx);
        goto after_0;
    // 0x8004B7F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8004B7F8: addiu       $v1, $s0, 0x14
    ctx->r3 = ADD32(ctx->r16, 0X14);
    // 0x8004B7FC: sll         $v0, $v1, 8
    ctx->r2 = S32(ctx->r3 << 8);
    // 0x8004B800: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8004B804: addu        $s3, $s0, $zero
    ctx->r19 = ADD32(ctx->r16, 0);
    // 0x8004B808: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x8004B80C: addu        $s0, $v1, $zero
    ctx->r16 = ADD32(ctx->r3, 0);
    // 0x8004B810: lui         $t2, 0xFF
    ctx->r10 = S32(0XFF << 16);
    // 0x8004B814: ori         $t2, $t2, 0xFFFF
    ctx->r10 = ctx->r10 | 0XFFFF;
    // 0x8004B818: addiu       $t8, $zero, 0x64
    ctx->r24 = ADD32(0, 0X64);
    // 0x8004B81C: addiu       $t0, $zero, 0x80
    ctx->r8 = ADD32(0, 0X80);
    // 0x8004B820: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x8004B824: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8004B828: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x8004B82C: lui         $t4, 0x801C
    ctx->r12 = S32(0X801C << 16);
    // 0x8004B830: addiu       $t4, $t4, -0x3C0C
    ctx->r12 = ADD32(ctx->r12, -0X3C0C);
    // 0x8004B834: lui         $t1, 0x8888
    ctx->r9 = S32(0X8888 << 16);
    // 0x8004B838: ori         $t1, $t1, 0x8889
    ctx->r9 = ctx->r9 | 0X8889;
    // 0x8004B83C: lui         $t3, 0x8020
    ctx->r11 = S32(0X8020 << 16);
    // 0x8004B840: addiu       $t3, $t3, 0x4A60
    ctx->r11 = ADD32(ctx->r11, 0X4A60);
    // 0x8004B844: addiu       $a3, $s1, 0xE
    ctx->r7 = ADD32(ctx->r17, 0XE);
    // 0x8004B848: addiu       $a2, $s0, 0x10
    ctx->r6 = ADD32(ctx->r16, 0X10);
L_8004B84C:
    // 0x8004B84C: addiu       $v0, $s0, 0x14
    ctx->r2 = ADD32(ctx->r16, 0X14);
    // 0x8004B850: and         $v0, $v0, $t2
    ctx->r2 = ctx->r2 & ctx->r10;
    // 0x8004B854: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8004B858: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
    // 0x8004B85C: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x8004B860: sb          $t8, -0x9($a2)
    MEM_B(-0X9, ctx->r6) = ctx->r24;
    // 0x8004B864: sb          $t0, -0xA($a2)
    MEM_B(-0XA, ctx->r6) = ctx->r8;
    // 0x8004B868: sb          $t0, -0xB($a2)
    MEM_B(-0XB, ctx->r6) = ctx->r8;
    // 0x8004B86C: sb          $t0, -0xC($a2)
    MEM_B(-0XC, ctx->r6) = ctx->r8;
    // 0x8004B870: lhu         $v0, -0xA($a3)
    ctx->r2 = MEM_HU(ctx->r7, -0XA);
    // 0x8004B874: sh          $v0, -0x8($a2)
    MEM_H(-0X8, ctx->r6) = ctx->r2;
    // 0x8004B878: lhu         $v0, -0x8($a3)
    ctx->r2 = MEM_HU(ctx->r7, -0X8);
    // 0x8004B87C: sh          $v0, -0x6($a2)
    MEM_H(-0X6, ctx->r6) = ctx->r2;
    // 0x8004B880: lbu         $v0, -0x6($a3)
    ctx->r2 = MEM_BU(ctx->r7, -0X6);
    // 0x8004B884: sb          $v0, -0x4($a2)
    MEM_B(-0X4, ctx->r6) = ctx->r2;
    // 0x8004B888: lbu         $v0, -0x5($a3)
    ctx->r2 = MEM_BU(ctx->r7, -0X5);
    // 0x8004B88C: sb          $v0, -0x3($a2)
    MEM_B(-0X3, ctx->r6) = ctx->r2;
    // 0x8004B890: lhu         $v0, -0x4($a3)
    ctx->r2 = MEM_HU(ctx->r7, -0X4);
    // 0x8004B894: sh          $v0, -0x2($a2)
    MEM_H(-0X2, ctx->r6) = ctx->r2;
    // 0x8004B898: lhu         $v0, -0x2($a3)
    ctx->r2 = MEM_HU(ctx->r7, -0X2);
    // 0x8004B89C: sh          $v0, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r2;
    // 0x8004B8A0: lhu         $v0, 0x0($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X0);
    // 0x8004B8A4: sh          $v0, 0x2($a2)
    MEM_H(0X2, ctx->r6) = ctx->r2;
    // 0x8004B8A8: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8004B8AC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8004B8B0: sra         $v1, $v0, 24
    ctx->r3 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8004B8B4: beq         $v1, $t7, L_8004B900
    if (ctx->r3 == ctx->r15) {
        // 0x8004B8B8: slti        $v0, $v1, 0x3
        ctx->r2 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
            goto L_8004B900;
    }
    // 0x8004B8B8: slti        $v0, $v1, 0x3
    ctx->r2 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
    // 0x8004B8BC: beq         $v0, $zero, L_8004B8D4
    if (ctx->r2 == 0) {
        // 0x8004B8C0: nop
    
            goto L_8004B8D4;
    }
    // 0x8004B8C0: nop

    // 0x8004B8C4: beq         $v1, $t6, L_8004B8E4
    if (ctx->r3 == ctx->r14) {
        // 0x8004B8C8: nop
    
            goto L_8004B8E4;
    }
    // 0x8004B8C8: nop

    // 0x8004B8CC: j           L_8004B980
    // 0x8004B8D0: addiu       $a2, $a2, 0x14
    ctx->r6 = ADD32(ctx->r6, 0X14);
        goto L_8004B980;
    // 0x8004B8D0: addiu       $a2, $a2, 0x14
    ctx->r6 = ADD32(ctx->r6, 0X14);
L_8004B8D4:
    // 0x8004B8D4: beq         $v1, $t5, L_8004B944
    if (ctx->r3 == ctx->r13) {
        // 0x8004B8D8: nop
    
            goto L_8004B944;
    }
    // 0x8004B8D8: nop

    // 0x8004B8DC: j           L_8004B980
    // 0x8004B8E0: addiu       $a2, $a2, 0x14
    ctx->r6 = ADD32(ctx->r6, 0X14);
        goto L_8004B980;
    // 0x8004B8E0: addiu       $a2, $a2, 0x14
    ctx->r6 = ADD32(ctx->r6, 0X14);
L_8004B8E4:
    // 0x8004B8E4: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8004B8E8: lhu         $v0, -0x730C($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X730C);
    // 0x8004B8EC: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x8004B8F0: bnel        $v0, $zero, L_8004B988
    if (ctx->r2 != 0) {
        // 0x8004B8F4: addiu       $s1, $s1, 0x10
        ctx->r17 = ADD32(ctx->r17, 0X10);
            goto L_8004B988;
    }
    goto skip_0;
    // 0x8004B8F4: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
    skip_0:
    // 0x8004B8F8: j           L_8004B980
    // 0x8004B8FC: addiu       $a2, $a2, 0x14
    ctx->r6 = ADD32(ctx->r6, 0X14);
        goto L_8004B980;
    // 0x8004B8FC: addiu       $a2, $a2, 0x14
    ctx->r6 = ADD32(ctx->r6, 0X14);
L_8004B900:
    // 0x8004B900: lw          $v0, 0x0($t4)
    ctx->r2 = MEM_W(ctx->r12, 0X0);
    // 0x8004B904: multu       $v0, $t1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004B908: mfhi        $t9
    ctx->r25 = hi;
    // 0x8004B90C: srl         $a0, $t9, 3
    ctx->r4 = S32(U32(ctx->r25) >> 3);
    // 0x8004B910: nop

    // 0x8004B914: multu       $a0, $t1
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004B918: mfhi        $t9
    ctx->r25 = hi;
    // 0x8004B91C: srl         $v1, $t9, 5
    ctx->r3 = S32(U32(ctx->r25) >> 5);
    // 0x8004B920: sll         $v0, $v1, 4
    ctx->r2 = S32(ctx->r3 << 4);
    // 0x8004B924: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8004B928: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8004B92C: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x8004B930: andi        $a0, $a0, 0x1
    ctx->r4 = ctx->r4 & 0X1;
    // 0x8004B934: bnel        $a0, $zero, L_8004B988
    if (ctx->r4 != 0) {
        // 0x8004B938: addiu       $s1, $s1, 0x10
        ctx->r17 = ADD32(ctx->r17, 0X10);
            goto L_8004B988;
    }
    goto skip_1;
    // 0x8004B938: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
    skip_1:
    // 0x8004B93C: j           L_8004B980
    // 0x8004B940: addiu       $a2, $a2, 0x14
    ctx->r6 = ADD32(ctx->r6, 0X14);
        goto L_8004B980;
    // 0x8004B940: addiu       $a2, $a2, 0x14
    ctx->r6 = ADD32(ctx->r6, 0X14);
L_8004B944:
    // 0x8004B944: lh          $a1, 0x0($t3)
    ctx->r5 = MEM_H(ctx->r11, 0X0);
    // 0x8004B948: slti        $v0, $a1, 0x51
    ctx->r2 = SIGNED(ctx->r5) < 0X51 ? 1 : 0;
    // 0x8004B94C: bnel        $v0, $zero, L_8004B980
    if (ctx->r2 != 0) {
        // 0x8004B950: addiu       $a2, $a2, 0x14
        ctx->r6 = ADD32(ctx->r6, 0X14);
            goto L_8004B980;
    }
    goto skip_2;
    // 0x8004B950: addiu       $a2, $a2, 0x14
    ctx->r6 = ADD32(ctx->r6, 0X14);
    skip_2:
    // 0x8004B954: addiu       $v0, $a1, -0x41
    ctx->r2 = ADD32(ctx->r5, -0X41);
    // 0x8004B958: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x8004B95C: sll         $a1, $v0, 2
    ctx->r5 = S32(ctx->r2 << 2);
    // 0x8004B960: lbu         $v1, -0x4($a2)
    ctx->r3 = MEM_BU(ctx->r6, -0X4);
    // 0x8004B964: lhu         $a0, 0x0($a2)
    ctx->r4 = MEM_HU(ctx->r6, 0X0);
    // 0x8004B968: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x8004B96C: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x8004B970: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    // 0x8004B974: sb          $v1, -0x4($a2)
    MEM_B(-0X4, ctx->r6) = ctx->r3;
    // 0x8004B978: sh          $a0, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r4;
    // 0x8004B97C: addiu       $a2, $a2, 0x14
    ctx->r6 = ADD32(ctx->r6, 0X14);
L_8004B980:
    // 0x8004B980: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
    // 0x8004B984: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
L_8004B988:
    // 0x8004B988: lh          $v0, 0x0($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X0);
    // 0x8004B98C: bgez        $v0, L_8004B84C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8004B990: addiu       $a3, $a3, 0x10
        ctx->r7 = ADD32(ctx->r7, 0X10);
            goto L_8004B84C;
    }
    // 0x8004B990: addiu       $a3, $a3, 0x10
    ctx->r7 = ADD32(ctx->r7, 0X10);
    // 0x8004B994: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x8004B998: lb          $a0, 0x5($s2)
    ctx->r4 = MEM_B(ctx->r18, 0X5);
    // 0x8004B99C: addiu       $a2, $s0, -0x14
    ctx->r6 = ADD32(ctx->r16, -0X14);
    // 0x8004B9A0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8004B9A4: lw          $v0, 0x497C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X497C);
    // 0x8004B9A8: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x8004B9AC: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    // 0x8004B9B0: jal         0x8002FD5C
    // 0x8004B9B4: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    func_8002FD5C_B15C(rdram, ctx);
        goto after_1;
    // 0x8004B9B4: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_1:
    // 0x8004B9B8: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x8004B9BC: sw          $s0, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r16;
    // 0x8004B9C0: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8004B9C4: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8004B9C8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8004B9CC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8004B9D0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8004B9D4: jr          $ra
    // 0x8004B9D8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8004B9D8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80030614_BA14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80030614: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80030618: sb          $v0, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r2;
    // 0x8003061C: addiu       $v0, $zero, 0x38
    ctx->r2 = ADD32(0, 0X38);
    // 0x80030620: jr          $ra
    // 0x80030624: sb          $v0, 0x7($a0)
    MEM_B(0X7, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80030624: sb          $v0, 0x7($a0)
    MEM_B(0X7, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_80038934_13D34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80038934: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80038938: lhu         $v0, -0x7810($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X7810);
    // 0x8003893C: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x80038940: lbu         $v1, 0xB61($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0XB61);
    // 0x80038944: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x80038948: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x8003894C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80038950: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80038954: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80038958: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8003895C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80038960: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80038964: beq         $v1, $zero, L_80038980
    if (ctx->r3 == 0) {
        // 0x80038968: srav        $s0, $v0, $v1
        ctx->r16 = S32(SIGNED(ctx->r2) >> (ctx->r3 & 31));
            goto L_80038980;
    }
    // 0x80038968: srav        $s0, $v0, $v1
    ctx->r16 = S32(SIGNED(ctx->r2) >> (ctx->r3 & 31));
    // 0x8003896C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80038970: beq         $v1, $v0, L_80038994
    if (ctx->r3 == ctx->r2) {
        // 0x80038974: nop
    
            goto L_80038994;
    }
    // 0x80038974: nop

    // 0x80038978: j           L_800389A0
    // 0x8003897C: nop

        goto L_800389A0;
    // 0x8003897C: nop

L_80038980:
    // 0x80038980: lui         $at, 0x3F99
    ctx->r1 = S32(0X3F99 << 16);
    // 0x80038984: ori         $at, $at, 0x999A
    ctx->r1 = ctx->r1 | 0X999A;
    // 0x80038988: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x8003898C: j           L_800389A0
    // 0x80038990: nop

        goto L_800389A0;
    // 0x80038990: nop

L_80038994:
    // 0x80038994: lui         $at, 0x3FB3
    ctx->r1 = S32(0X3FB3 << 16);
    // 0x80038998: ori         $at, $at, 0x3333
    ctx->r1 = ctx->r1 | 0X3333;
    // 0x8003899C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
L_800389A0:
    // 0x800389A0: mtc1        $s0, $f0
    ctx->f0.u32l = ctx->r16;
    // 0x800389A4: nop

    // 0x800389A8: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x800389AC: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x800389B0: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x800389B4: addiu       $s2, $s2, 0x4402
    ctx->r18 = ADD32(ctx->r18, 0X4402);
    // 0x800389B8: lh          $a0, 0x0($s2)
    ctx->r4 = MEM_H(ctx->r18, 0X0);
    // 0x800389BC: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x800389C0: mfc1        $s1, $f2
    ctx->r17 = (int32_t)ctx->f2.u32l;
    // 0x800389C4: jal         0x800324B4
    // 0x800389C8: nop

    func_800324B4_D8B4(rdram, ctx);
        goto after_0;
    // 0x800389C8: nop

    after_0:
    // 0x800389CC: mult        $s0, $v0
    result = S64(S32(ctx->r16)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800389D0: mflo        $v0
    ctx->r2 = lo;
    // 0x800389D4: lui         $v1, 0x8019
    ctx->r3 = S32(0X8019 << 16);
    // 0x800389D8: lh          $v1, 0x5E90($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X5E90);
    // 0x800389DC: bltzl       $v0, L_800389E4
    if (SIGNED(ctx->r2) < 0) {
        // 0x800389E0: addiu       $v0, $v0, 0xFFF
        ctx->r2 = ADD32(ctx->r2, 0XFFF);
            goto L_800389E4;
    }
    goto skip_0;
    // 0x800389E0: addiu       $v0, $v0, 0xFFF
    ctx->r2 = ADD32(ctx->r2, 0XFFF);
    skip_0:
L_800389E4:
    // 0x800389E4: lh          $a0, 0x0($s2)
    ctx->r4 = MEM_H(ctx->r18, 0X0);
    // 0x800389E8: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x800389EC: jal         0x80032498
    // 0x800389F0: addu        $s2, $v1, $v0
    ctx->r18 = ADD32(ctx->r3, ctx->r2);
    func_80032498_D898(rdram, ctx);
        goto after_1;
    // 0x800389F0: addu        $s2, $v1, $v0
    ctx->r18 = ADD32(ctx->r3, ctx->r2);
    after_1:
    // 0x800389F4: nop

    // 0x800389F8: mult        $s0, $v0
    result = S64(S32(ctx->r16)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800389FC: mflo        $v1
    ctx->r3 = lo;
    // 0x80038A00: lui         $a1, 0x8019
    ctx->r5 = S32(0X8019 << 16);
    // 0x80038A04: lh          $a1, 0x5E94($a1)
    ctx->r5 = MEM_H(ctx->r5, 0X5E94);
    // 0x80038A08: bltzl       $v1, L_80038A10
    if (SIGNED(ctx->r3) < 0) {
        // 0x80038A0C: addiu       $v1, $v1, 0xFFF
        ctx->r3 = ADD32(ctx->r3, 0XFFF);
            goto L_80038A10;
    }
    goto skip_1;
    // 0x80038A0C: addiu       $v1, $v1, 0xFFF
    ctx->r3 = ADD32(ctx->r3, 0XFFF);
    skip_1:
L_80038A10:
    // 0x80038A10: subu        $v0, $s2, $s1
    ctx->r2 = SUB32(ctx->r18, ctx->r17);
    // 0x80038A14: ori         $a2, $zero, 0x8000
    ctx->r6 = 0 | 0X8000;
    // 0x80038A18: addu        $a0, $v0, $a2
    ctx->r4 = ADD32(ctx->r2, ctx->r6);
    // 0x80038A1C: sra         $v0, $v1, 12
    ctx->r2 = S32(SIGNED(ctx->r3) >> 12);
    // 0x80038A20: bgez        $a0, L_80038A2C
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80038A24: addu        $t0, $a1, $v0
        ctx->r8 = ADD32(ctx->r5, ctx->r2);
            goto L_80038A2C;
    }
    // 0x80038A24: addu        $t0, $a1, $v0
    ctx->r8 = ADD32(ctx->r5, ctx->r2);
    // 0x80038A28: addiu       $a0, $a0, 0x1FF
    ctx->r4 = ADD32(ctx->r4, 0X1FF);
L_80038A2C:
    // 0x80038A2C: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x80038A30: lbu         $a3, 0x6B40($a3)
    ctx->r7 = MEM_BU(ctx->r7, 0X6B40);
    // 0x80038A34: subu        $v0, $t0, $s1
    ctx->r2 = SUB32(ctx->r8, ctx->r17);
    // 0x80038A38: addu        $a1, $v0, $a2
    ctx->r5 = ADD32(ctx->r2, ctx->r6);
    // 0x80038A3C: sra         $v0, $a0, 9
    ctx->r2 = S32(SIGNED(ctx->r4) >> 9);
    // 0x80038A40: subu        $v0, $v0, $a3
    ctx->r2 = SUB32(ctx->r2, ctx->r7);
    // 0x80038A44: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80038A48: sw          $v0, -0x4DE0($at)
    MEM_W(-0X4DE0, ctx->r1) = ctx->r2;
    // 0x80038A4C: bltzl       $a1, L_80038A54
    if (SIGNED(ctx->r5) < 0) {
        // 0x80038A50: addiu       $a1, $a1, 0x1FF
        ctx->r5 = ADD32(ctx->r5, 0X1FF);
            goto L_80038A54;
    }
    goto skip_2;
    // 0x80038A50: addiu       $a1, $a1, 0x1FF
    ctx->r5 = ADD32(ctx->r5, 0X1FF);
    skip_2:
L_80038A54:
    // 0x80038A54: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x80038A58: lbu         $a0, -0x39A6($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X39A6);
    // 0x80038A5C: addu        $v0, $s2, $s1
    ctx->r2 = ADD32(ctx->r18, ctx->r17);
    // 0x80038A60: addu        $v1, $v0, $a2
    ctx->r3 = ADD32(ctx->r2, ctx->r6);
    // 0x80038A64: sra         $v0, $a1, 9
    ctx->r2 = S32(SIGNED(ctx->r5) >> 9);
    // 0x80038A68: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x80038A6C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80038A70: sw          $v0, -0x4DDC($at)
    MEM_W(-0X4DDC, ctx->r1) = ctx->r2;
    // 0x80038A74: bltzl       $v1, L_80038A7C
    if (SIGNED(ctx->r3) < 0) {
        // 0x80038A78: addiu       $v1, $v1, 0x1FF
        ctx->r3 = ADD32(ctx->r3, 0X1FF);
            goto L_80038A7C;
    }
    goto skip_3;
    // 0x80038A78: addiu       $v1, $v1, 0x1FF
    ctx->r3 = ADD32(ctx->r3, 0X1FF);
    skip_3:
L_80038A7C:
    // 0x80038A7C: sra         $v0, $v1, 9
    ctx->r2 = S32(SIGNED(ctx->r3) >> 9);
    // 0x80038A80: subu        $v0, $v0, $a3
    ctx->r2 = SUB32(ctx->r2, ctx->r7);
    // 0x80038A84: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80038A88: sw          $v0, -0x4DD8($at)
    MEM_W(-0X4DD8, ctx->r1) = ctx->r2;
    // 0x80038A8C: addu        $v0, $t0, $s1
    ctx->r2 = ADD32(ctx->r8, ctx->r17);
    // 0x80038A90: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80038A94: bltzl       $v0, L_80038A9C
    if (SIGNED(ctx->r2) < 0) {
        // 0x80038A98: addiu       $v0, $v0, 0x1FF
        ctx->r2 = ADD32(ctx->r2, 0X1FF);
            goto L_80038A9C;
    }
    goto skip_4;
    // 0x80038A98: addiu       $v0, $v0, 0x1FF
    ctx->r2 = ADD32(ctx->r2, 0X1FF);
    skip_4:
L_80038A9C:
    // 0x80038A9C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80038AA0: lbu         $v1, -0x3A50($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3A50);
    // 0x80038AA4: sra         $v0, $v0, 9
    ctx->r2 = S32(SIGNED(ctx->r2) >> 9);
    // 0x80038AA8: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x80038AAC: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80038AB0: bne         $v1, $zero, L_80038C68
    if (ctx->r3 != 0) {
        // 0x80038AB4: sw          $v0, -0x4DD4($at)
        MEM_W(-0X4DD4, ctx->r1) = ctx->r2;
            goto L_80038C68;
    }
    // 0x80038AB4: sw          $v0, -0x4DD4($at)
    MEM_W(-0X4DD4, ctx->r1) = ctx->r2;
    // 0x80038AB8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80038ABC: lw          $v0, -0x3690($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3690);
    // 0x80038AC0: beq         $v0, $zero, L_80038C68
    if (ctx->r2 == 0) {
        // 0x80038AC4: nop
    
            goto L_80038C68;
    }
    // 0x80038AC4: nop

    // 0x80038AC8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80038ACC: lw          $v0, -0x368C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X368C);
    // 0x80038AD0: beq         $v0, $zero, L_80038C68
    if (ctx->r2 == 0) {
        // 0x80038AD4: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_80038C68;
    }
    // 0x80038AD4: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_80038AD8:
    // 0x80038AD8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80038ADC: lw          $v0, -0x3690($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3690);
    // 0x80038AE0: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80038AE4: sll         $a1, $s0, 3
    ctx->r5 = S32(ctx->r16 << 3);
    // 0x80038AE8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80038AEC: jal         0x8009A3B4
    // 0x80038AF0: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80038AF0: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    after_2:
    // 0x80038AF4: lbu         $v0, 0x10($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X10);
    // 0x80038AF8: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80038AFC: lbu         $v1, 0x6B40($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X6B40);
    // 0x80038B00: lbu         $a1, 0x11($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X11);
    // 0x80038B04: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x80038B08: lbu         $a0, -0x39A6($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X39A6);
    // 0x80038B0C: lbu         $a2, 0x12($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X12);
    // 0x80038B10: lbu         $a3, 0x13($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X13);
    // 0x80038B14: lbu         $t0, 0x14($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X14);
    // 0x80038B18: lbu         $t1, 0x15($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X15);
    // 0x80038B1C: lbu         $t2, 0x16($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X16);
    // 0x80038B20: lbu         $t3, 0x17($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X17);
    // 0x80038B24: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80038B28: subu        $a1, $a1, $a0
    ctx->r5 = SUB32(ctx->r5, ctx->r4);
    // 0x80038B2C: subu        $a2, $a2, $v1
    ctx->r6 = SUB32(ctx->r6, ctx->r3);
    // 0x80038B30: subu        $a3, $a3, $a0
    ctx->r7 = SUB32(ctx->r7, ctx->r4);
    // 0x80038B34: subu        $t0, $t0, $v1
    ctx->r8 = SUB32(ctx->r8, ctx->r3);
    // 0x80038B38: subu        $t2, $t2, $v1
    ctx->r10 = SUB32(ctx->r10, ctx->r3);
    // 0x80038B3C: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x80038B40: lw          $v1, -0x55EC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X55EC);
    // 0x80038B44: subu        $t1, $t1, $a0
    ctx->r9 = SUB32(ctx->r9, ctx->r4);
    // 0x80038B48: subu        $t3, $t3, $a0
    ctx->r11 = SUB32(ctx->r11, ctx->r4);
    // 0x80038B4C: sb          $v0, 0x10($sp)
    MEM_B(0X10, ctx->r29) = ctx->r2;
    // 0x80038B50: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80038B54: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80038B58: sb          $a1, 0x11($sp)
    MEM_B(0X11, ctx->r29) = ctx->r5;
    // 0x80038B5C: sb          $a2, 0x12($sp)
    MEM_B(0X12, ctx->r29) = ctx->r6;
    // 0x80038B60: sb          $a3, 0x13($sp)
    MEM_B(0X13, ctx->r29) = ctx->r7;
    // 0x80038B64: sb          $t0, 0x14($sp)
    MEM_B(0X14, ctx->r29) = ctx->r8;
    // 0x80038B68: sb          $t1, 0x15($sp)
    MEM_B(0X15, ctx->r29) = ctx->r9;
    // 0x80038B6C: sb          $t2, 0x16($sp)
    MEM_B(0X16, ctx->r29) = ctx->r10;
    // 0x80038B70: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80038B74: bne         $v0, $zero, L_80038C50
    if (ctx->r2 != 0) {
        // 0x80038B78: sb          $t3, 0x17($sp)
        MEM_B(0X17, ctx->r29) = ctx->r11;
            goto L_80038C50;
    }
    // 0x80038B78: sb          $t3, 0x17($sp)
    MEM_B(0X17, ctx->r29) = ctx->r11;
    // 0x80038B7C: sll         $v0, $a2, 24
    ctx->r2 = S32(ctx->r6 << 24);
    // 0x80038B80: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80038B84: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80038B88: bne         $v0, $zero, L_80038C50
    if (ctx->r2 != 0) {
        // 0x80038B8C: sll         $v0, $a1, 24
        ctx->r2 = S32(ctx->r5 << 24);
            goto L_80038C50;
    }
    // 0x80038B8C: sll         $v0, $a1, 24
    ctx->r2 = S32(ctx->r5 << 24);
    // 0x80038B90: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x80038B94: lw          $v1, -0x55E8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X55E8);
    // 0x80038B98: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80038B9C: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80038BA0: bne         $v0, $zero, L_80038C50
    if (ctx->r2 != 0) {
        // 0x80038BA4: sll         $v0, $a3, 24
        ctx->r2 = S32(ctx->r7 << 24);
            goto L_80038C50;
    }
    // 0x80038BA4: sll         $v0, $a3, 24
    ctx->r2 = S32(ctx->r7 << 24);
    // 0x80038BA8: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80038BAC: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80038BB0: bne         $v0, $zero, L_80038C50
    if (ctx->r2 != 0) {
        // 0x80038BB4: sll         $v0, $t0, 24
        ctx->r2 = S32(ctx->r8 << 24);
            goto L_80038C50;
    }
    // 0x80038BB4: sll         $v0, $t0, 24
    ctx->r2 = S32(ctx->r8 << 24);
    // 0x80038BB8: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x80038BBC: lw          $v1, -0x4DE0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X4DE0);
    // 0x80038BC0: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80038BC4: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80038BC8: beq         $v1, $zero, L_80038BD8
    if (ctx->r3 == 0) {
        // 0x80038BCC: nop
    
            goto L_80038BD8;
    }
    // 0x80038BCC: nop

    // 0x80038BD0: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80038BD4: sw          $v0, -0x4DE0($at)
    MEM_W(-0X4DE0, ctx->r1) = ctx->r2;
L_80038BD8:
    // 0x80038BD8: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x80038BDC: lw          $v1, -0x4DDC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X4DDC);
    // 0x80038BE0: sll         $v0, $t1, 24
    ctx->r2 = S32(ctx->r9 << 24);
    // 0x80038BE4: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80038BE8: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80038BEC: beql        $v1, $zero, L_80038C00
    if (ctx->r3 == 0) {
        // 0x80038BF0: sll         $v0, $t2, 24
        ctx->r2 = S32(ctx->r10 << 24);
            goto L_80038C00;
    }
    goto skip_5;
    // 0x80038BF0: sll         $v0, $t2, 24
    ctx->r2 = S32(ctx->r10 << 24);
    skip_5:
    // 0x80038BF4: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80038BF8: sw          $v0, -0x4DDC($at)
    MEM_W(-0X4DDC, ctx->r1) = ctx->r2;
    // 0x80038BFC: sll         $v0, $t2, 24
    ctx->r2 = S32(ctx->r10 << 24);
L_80038C00:
    // 0x80038C00: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x80038C04: lw          $v1, -0x4DD8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X4DD8);
    // 0x80038C08: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80038C0C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80038C10: slt         $v1, $v0, $v1
    ctx->r3 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80038C14: beql        $v1, $zero, L_80038C28
    if (ctx->r3 == 0) {
        // 0x80038C18: sll         $v0, $t3, 24
        ctx->r2 = S32(ctx->r11 << 24);
            goto L_80038C28;
    }
    goto skip_6;
    // 0x80038C18: sll         $v0, $t3, 24
    ctx->r2 = S32(ctx->r11 << 24);
    skip_6:
    // 0x80038C1C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80038C20: sw          $v0, -0x4DD8($at)
    MEM_W(-0X4DD8, ctx->r1) = ctx->r2;
    // 0x80038C24: sll         $v0, $t3, 24
    ctx->r2 = S32(ctx->r11 << 24);
L_80038C28:
    // 0x80038C28: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x80038C2C: lw          $v1, -0x4DD4($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X4DD4);
    // 0x80038C30: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80038C34: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80038C38: slt         $v1, $v0, $v1
    ctx->r3 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80038C3C: beq         $v1, $zero, L_80038C68
    if (ctx->r3 == 0) {
        // 0x80038C40: nop
    
            goto L_80038C68;
    }
    // 0x80038C40: nop

    // 0x80038C44: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80038C48: j           L_80038C68
    // 0x80038C4C: sw          $v0, -0x4DD4($at)
    MEM_W(-0X4DD4, ctx->r1) = ctx->r2;
        goto L_80038C68;
    // 0x80038C4C: sw          $v0, -0x4DD4($at)
    MEM_W(-0X4DD4, ctx->r1) = ctx->r2;
L_80038C50:
    // 0x80038C50: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80038C54: lw          $v0, -0x368C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X368C);
    // 0x80038C58: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80038C5C: sltu        $v0, $s0, $v0
    ctx->r2 = ctx->r16 < ctx->r2 ? 1 : 0;
    // 0x80038C60: bne         $v0, $zero, L_80038AD8
    if (ctx->r2 != 0) {
        // 0x80038C64: nop
    
            goto L_80038AD8;
    }
    // 0x80038C64: nop

L_80038C68:
    // 0x80038C68: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x80038C6C: lw          $v0, -0x4DE0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4DE0);
    // 0x80038C70: bgez        $v0, L_80038C80
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80038C74: nop
    
            goto L_80038C80;
    }
    // 0x80038C74: nop

    // 0x80038C78: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80038C7C: sw          $zero, -0x4DE0($at)
    MEM_W(-0X4DE0, ctx->r1) = 0;
L_80038C80:
    // 0x80038C80: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x80038C84: lw          $v0, -0x4DDC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4DDC);
    // 0x80038C88: bgez        $v0, L_80038C98
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80038C8C: nop
    
            goto L_80038C98;
    }
    // 0x80038C8C: nop

    // 0x80038C90: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80038C94: sw          $zero, -0x4DDC($at)
    MEM_W(-0X4DDC, ctx->r1) = 0;
L_80038C98:
    // 0x80038C98: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80038C9C: lhu         $v1, 0x49AE($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X49AE);
    // 0x80038CA0: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x80038CA4: lw          $v0, -0x4DD8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4DD8);
    // 0x80038CA8: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80038CAC: beq         $v0, $zero, L_80038CBC
    if (ctx->r2 == 0) {
        // 0x80038CB0: nop
    
            goto L_80038CBC;
    }
    // 0x80038CB0: nop

    // 0x80038CB4: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80038CB8: sw          $v1, -0x4DD8($at)
    MEM_W(-0X4DD8, ctx->r1) = ctx->r3;
L_80038CBC:
    // 0x80038CBC: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x80038CC0: lhu         $v1, -0x7386($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X7386);
    // 0x80038CC4: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x80038CC8: lw          $v0, -0x4DD4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4DD4);
    // 0x80038CCC: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80038CD0: beq         $v0, $zero, L_80038CE0
    if (ctx->r2 == 0) {
        // 0x80038CD4: nop
    
            goto L_80038CE0;
    }
    // 0x80038CD4: nop

    // 0x80038CD8: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80038CDC: sw          $v1, -0x4DD4($at)
    MEM_W(-0X4DD4, ctx->r1) = ctx->r3;
L_80038CE0:
    // 0x80038CE0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80038CE4: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80038CE8: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80038CEC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80038CF0: jr          $ra
    // 0x80038CF4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80038CF4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8002A514_5914(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002A514: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002A518: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8002A51C: jal         0x8006033C
    // 0x8002A520: addiu       $a0, $zero, 0x204
    ctx->r4 = ADD32(0, 0X204);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x8002A520: addiu       $a0, $zero, 0x204
    ctx->r4 = ADD32(0, 0X204);
    after_0:
    // 0x8002A524: beq         $v0, $zero, L_8002A53C
    if (ctx->r2 == 0) {
        // 0x8002A528: nop
    
            goto L_8002A53C;
    }
    // 0x8002A528: nop

    // 0x8002A52C: jal         0x8006033C
    // 0x8002A530: addiu       $a0, $zero, 0x206
    ctx->r4 = ADD32(0, 0X206);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x8002A530: addiu       $a0, $zero, 0x206
    ctx->r4 = ADD32(0, 0X206);
    after_1:
    // 0x8002A534: beq         $v0, $zero, L_8002A570
    if (ctx->r2 == 0) {
        // 0x8002A538: addiu       $v0, $zero, 0x39
        ctx->r2 = ADD32(0, 0X39);
            goto L_8002A570;
    }
    // 0x8002A538: addiu       $v0, $zero, 0x39
    ctx->r2 = ADD32(0, 0X39);
L_8002A53C:
    // 0x8002A53C: jal         0x8006033C
    // 0x8002A540: addiu       $a0, $zero, 0x212
    ctx->r4 = ADD32(0, 0X212);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x8002A540: addiu       $a0, $zero, 0x212
    ctx->r4 = ADD32(0, 0X212);
    after_2:
    // 0x8002A544: beq         $v0, $zero, L_8002A55C
    if (ctx->r2 == 0) {
        // 0x8002A548: nop
    
            goto L_8002A55C;
    }
    // 0x8002A548: nop

    // 0x8002A54C: jal         0x8006033C
    // 0x8002A550: addiu       $a0, $zero, 0x213
    ctx->r4 = ADD32(0, 0X213);
    func_8006033C_3B73C(rdram, ctx);
        goto after_3;
    // 0x8002A550: addiu       $a0, $zero, 0x213
    ctx->r4 = ADD32(0, 0X213);
    after_3:
    // 0x8002A554: beq         $v0, $zero, L_8002A570
    if (ctx->r2 == 0) {
        // 0x8002A558: addiu       $v0, $zero, 0x39
        ctx->r2 = ADD32(0, 0X39);
            goto L_8002A570;
    }
    // 0x8002A558: addiu       $v0, $zero, 0x39
    ctx->r2 = ADD32(0, 0X39);
L_8002A55C:
    // 0x8002A55C: jal         0x8006033C
    // 0x8002A560: addiu       $a0, $zero, 0x200
    ctx->r4 = ADD32(0, 0X200);
    func_8006033C_3B73C(rdram, ctx);
        goto after_4;
    // 0x8002A560: addiu       $a0, $zero, 0x200
    ctx->r4 = ADD32(0, 0X200);
    after_4:
    // 0x8002A564: bne         $v0, $zero, L_8002A570
    if (ctx->r2 != 0) {
        // 0x8002A568: ori         $v0, $zero, 0xFFFF
        ctx->r2 = 0 | 0XFFFF;
            goto L_8002A570;
    }
    // 0x8002A568: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
    // 0x8002A56C: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
L_8002A570:
    // 0x8002A570: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x8002A574: sh          $v0, 0x6F74($at)
    MEM_H(0X6F74, ctx->r1) = ctx->r2;
    // 0x8002A578: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8002A57C: jr          $ra
    // 0x8002A580: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8002A580: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800559D4_30DD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800559D4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800559D8: addu        $t7, $a0, $zero
    ctx->r15 = ADD32(ctx->r4, 0);
    // 0x800559DC: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x800559E0: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x800559E4: addu        $t8, $a2, $zero
    ctx->r24 = ADD32(ctx->r6, 0);
    // 0x800559E8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800559EC: lui         $s0, 0x801A
    ctx->r16 = S32(0X801A << 16);
    // 0x800559F0: lw          $s0, -0x5858($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X5858);
    // 0x800559F4: addu        $t0, $t7, $t8
    ctx->r8 = ADD32(ctx->r15, ctx->r24);
    // 0x800559F8: addiu       $t1, $t0, 0x6
    ctx->r9 = ADD32(ctx->r8, 0X6);
    // 0x800559FC: sll         $a0, $a3, 1
    ctx->r4 = S32(ctx->r7 << 1);
    // 0x80055A00: addu        $a0, $s1, $a0
    ctx->r4 = ADD32(ctx->r17, ctx->r4);
    // 0x80055A04: addiu       $t2, $a0, 0x5
    ctx->r10 = ADD32(ctx->r4, 0X5);
    // 0x80055A08: lui         $t9, 0xFF
    ctx->r25 = S32(0XFF << 16);
    // 0x80055A0C: ori         $t9, $t9, 0xFFFF
    ctx->r25 = ctx->r25 | 0XFFFF;
    // 0x80055A10: addiu       $t0, $t0, 0xA
    ctx->r8 = ADD32(ctx->r8, 0XA);
    // 0x80055A14: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80055A18: addiu       $s2, $zero, 0x2C
    ctx->r18 = ADD32(0, 0X2C);
    // 0x80055A1C: addiu       $t6, $zero, 0x80
    ctx->r14 = ADD32(0, 0X80);
    // 0x80055A20: addiu       $t4, $zero, 0xC
    ctx->r12 = ADD32(0, 0XC);
    // 0x80055A24: addiu       $t3, $zero, 0x3E83
    ctx->r11 = ADD32(0, 0X3E83);
    // 0x80055A28: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    // 0x80055A2C: sll         $v1, $a3, 3
    ctx->r3 = S32(ctx->r7 << 3);
    // 0x80055A30: addiu       $a2, $v1, -0x70
    ctx->r6 = ADD32(ctx->r3, -0X70);
    // 0x80055A34: addiu       $v1, $v1, -0x6B
    ctx->r3 = ADD32(ctx->r3, -0X6B);
    // 0x80055A38: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x80055A3C: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80055A40: addiu       $t5, $s0, 0x28
    ctx->r13 = ADD32(ctx->r16, 0X28);
    // 0x80055A44: sll         $v0, $t5, 8
    ctx->r2 = S32(ctx->r13 << 8);
    // 0x80055A48: ori         $v0, $v0, 0x9
    ctx->r2 = ctx->r2 | 0X9;
    // 0x80055A4C: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x80055A50: addu        $v0, $t7, $zero
    ctx->r2 = ADD32(ctx->r15, 0);
    // 0x80055A54: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x80055A58: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x80055A5C: addiu       $v0, $zero, 0x62
    ctx->r2 = ADD32(0, 0X62);
    // 0x80055A60: addu        $s3, $s0, $zero
    ctx->r19 = ADD32(ctx->r16, 0);
    // 0x80055A64: sb          $s2, 0x7($s0)
    MEM_B(0X7, ctx->r16) = ctx->r18;
    // 0x80055A68: sb          $t6, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r14;
    // 0x80055A6C: sb          $t6, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r14;
    // 0x80055A70: sb          $t6, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r14;
    // 0x80055A74: sh          $t1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r9;
    // 0x80055A78: sh          $t1, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r9;
    // 0x80055A7C: sh          $a0, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r4;
    // 0x80055A80: sh          $a0, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r4;
    // 0x80055A84: sh          $t2, 0x22($s0)
    MEM_H(0X22, ctx->r16) = ctx->r10;
    // 0x80055A88: sh          $t2, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r10;
    // 0x80055A8C: sh          $t4, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r12;
    // 0x80055A90: sh          $t3, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r11;
    // 0x80055A94: sb          $a1, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r5;
    // 0x80055A98: sb          $a2, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r6;
    // 0x80055A9C: sb          $v0, 0x14($s0)
    MEM_B(0X14, ctx->r16) = ctx->r2;
    // 0x80055AA0: sb          $a2, 0x15($s0)
    MEM_B(0X15, ctx->r16) = ctx->r6;
    // 0x80055AA4: sb          $a1, 0x1C($s0)
    MEM_B(0X1C, ctx->r16) = ctx->r5;
    // 0x80055AA8: sb          $v1, 0x1D($s0)
    MEM_B(0X1D, ctx->r16) = ctx->r3;
    // 0x80055AAC: sb          $v0, 0x24($s0)
    MEM_B(0X24, ctx->r16) = ctx->r2;
    // 0x80055AB0: sb          $v1, 0x25($s0)
    MEM_B(0X25, ctx->r16) = ctx->r3;
    // 0x80055AB4: addu        $s0, $t5, $zero
    ctx->r16 = ADD32(ctx->r13, 0);
    // 0x80055AB8: addiu       $a1, $s0, 0x28
    ctx->r5 = ADD32(ctx->r16, 0X28);
    // 0x80055ABC: sll         $v0, $a1, 8
    ctx->r2 = S32(ctx->r5 << 8);
    // 0x80055AC0: ori         $v0, $v0, 0x9
    ctx->r2 = ctx->r2 | 0X9;
    // 0x80055AC4: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x80055AC8: sb          $s2, 0x7($s0)
    MEM_B(0X7, ctx->r16) = ctx->r18;
    // 0x80055ACC: sb          $t6, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r14;
    // 0x80055AD0: sb          $t6, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r14;
    // 0x80055AD4: sb          $t6, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r14;
    // 0x80055AD8: sh          $t1, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r9;
    // 0x80055ADC: sh          $t1, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r9;
    // 0x80055AE0: sh          $t0, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r8;
    // 0x80055AE4: sh          $t0, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r8;
    // 0x80055AE8: sh          $a0, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r4;
    // 0x80055AEC: sh          $a0, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r4;
    // 0x80055AF0: addiu       $a0, $zero, 0x6F
    ctx->r4 = ADD32(0, 0X6F);
    // 0x80055AF4: addiu       $v0, $zero, 0x73
    ctx->r2 = ADD32(0, 0X73);
    // 0x80055AF8: sh          $t2, 0x22($s0)
    MEM_H(0X22, ctx->r16) = ctx->r10;
    // 0x80055AFC: sh          $t2, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r10;
    // 0x80055B00: sh          $t4, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r12;
    // 0x80055B04: sh          $t3, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r11;
    // 0x80055B08: sb          $a0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r4;
    // 0x80055B0C: sb          $a2, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r6;
    // 0x80055B10: sb          $v0, 0x14($s0)
    MEM_B(0X14, ctx->r16) = ctx->r2;
    // 0x80055B14: sb          $a2, 0x15($s0)
    MEM_B(0X15, ctx->r16) = ctx->r6;
    // 0x80055B18: sb          $a0, 0x1C($s0)
    MEM_B(0X1C, ctx->r16) = ctx->r4;
    // 0x80055B1C: sb          $v1, 0x1D($s0)
    MEM_B(0X1D, ctx->r16) = ctx->r3;
    // 0x80055B20: sb          $v0, 0x24($s0)
    MEM_B(0X24, ctx->r16) = ctx->r2;
    // 0x80055B24: sb          $v1, 0x25($s0)
    MEM_B(0X25, ctx->r16) = ctx->r3;
    // 0x80055B28: bne         $a3, $zero, L_80055C28
    if (ctx->r7 != 0) {
        // 0x80055B2C: addu        $s0, $a1, $zero
        ctx->r16 = ADD32(ctx->r5, 0);
            goto L_80055C28;
    }
    // 0x80055B2C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x80055B30: xori        $a0, $s1, 0x46
    ctx->r4 = ctx->r17 ^ 0X46;
    // 0x80055B34: sltu        $v1, $zero, $a0
    ctx->r3 = 0 < ctx->r4 ? 1 : 0;
    // 0x80055B38: xori        $v0, $t8, 0x46
    ctx->r2 = ctx->r24 ^ 0X46;
    // 0x80055B3C: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80055B40: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x80055B44: bne         $v1, $zero, L_80055B64
    if (ctx->r3 != 0) {
        // 0x80055B48: addiu       $v0, $s0, 0x28
        ctx->r2 = ADD32(ctx->r16, 0X28);
            goto L_80055B64;
    }
    // 0x80055B48: addiu       $v0, $s0, 0x28
    ctx->r2 = ADD32(ctx->r16, 0X28);
    // 0x80055B4C: sltiu       $v1, $a0, 0x1
    ctx->r3 = ctx->r4 < 0X1 ? 1 : 0;
    // 0x80055B50: xori        $v0, $t8, 0x28
    ctx->r2 = ctx->r24 ^ 0X28;
    // 0x80055B54: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80055B58: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x80055B5C: beq         $v1, $zero, L_80055C28
    if (ctx->r3 == 0) {
        // 0x80055B60: addiu       $v0, $s0, 0x28
        ctx->r2 = ADD32(ctx->r16, 0X28);
            goto L_80055C28;
    }
    // 0x80055B60: addiu       $v0, $s0, 0x28
    ctx->r2 = ADD32(ctx->r16, 0X28);
L_80055B64:
    // 0x80055B64: and         $v0, $v0, $t9
    ctx->r2 = ctx->r2 & ctx->r25;
    // 0x80055B68: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80055B6C: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
    // 0x80055B70: addiu       $v1, $t7, 0xA
    ctx->r3 = ADD32(ctx->r15, 0XA);
    // 0x80055B74: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x80055B78: addiu       $v0, $zero, 0x46
    ctx->r2 = ADD32(0, 0X46);
    // 0x80055B7C: sb          $s2, 0x7($s0)
    MEM_B(0X7, ctx->r16) = ctx->r18;
    // 0x80055B80: sb          $t6, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r14;
    // 0x80055B84: sb          $t6, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r14;
    // 0x80055B88: bne         $t8, $v0, L_80055B9C
    if (ctx->r24 != ctx->r2) {
        // 0x80055B8C: sb          $t6, 0x4($s0)
        MEM_B(0X4, ctx->r16) = ctx->r14;
            goto L_80055B9C;
    }
    // 0x80055B8C: sb          $t6, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r14;
    // 0x80055B90: addiu       $v0, $t7, 0x18
    ctx->r2 = ADD32(ctx->r15, 0X18);
    // 0x80055B94: j           L_80055BA0
    // 0x80055B98: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
        goto L_80055BA0;
    // 0x80055B98: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
L_80055B9C:
    // 0x80055B9C: sh          $v1, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r3;
L_80055BA0:
    // 0x80055BA0: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x80055BA4: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x80055BA8: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x80055BAC: addiu       $v0, $zero, 0x46
    ctx->r2 = ADD32(0, 0X46);
    // 0x80055BB0: bne         $t8, $v0, L_80055BBC
    if (ctx->r24 != ctx->r2) {
        // 0x80055BB4: addiu       $v0, $t7, 0x22
        ctx->r2 = ADD32(ctx->r15, 0X22);
            goto L_80055BBC;
    }
    // 0x80055BB4: addiu       $v0, $t7, 0x22
    ctx->r2 = ADD32(ctx->r15, 0X22);
    // 0x80055BB8: addiu       $v0, $t7, 0x30
    ctx->r2 = ADD32(ctx->r15, 0X30);
L_80055BBC:
    // 0x80055BBC: sh          $v0, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r2;
    // 0x80055BC0: lhu         $a0, 0x20($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X20);
    // 0x80055BC4: addiu       $v1, $s1, 0x6
    ctx->r3 = ADD32(ctx->r17, 0X6);
    // 0x80055BC8: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
    // 0x80055BCC: sh          $v0, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r2;
    // 0x80055BD0: sh          $v0, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r2;
    // 0x80055BD4: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x80055BD8: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80055BDC: addiu       $v0, $zero, 0x3E82
    ctx->r2 = ADD32(0, 0X3E82);
    // 0x80055BE0: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
    // 0x80055BE4: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x80055BE8: sb          $v0, 0x1C($s0)
    MEM_B(0X1C, ctx->r16) = ctx->r2;
    // 0x80055BEC: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x80055BF0: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80055BF4: sb          $v0, 0x24($s0)
    MEM_B(0X24, ctx->r16) = ctx->r2;
    // 0x80055BF8: sb          $v0, 0x14($s0)
    MEM_B(0X14, ctx->r16) = ctx->r2;
    // 0x80055BFC: addiu       $v0, $zero, 0xF0
    ctx->r2 = ADD32(0, 0XF0);
    // 0x80055C00: sb          $v0, 0x15($s0)
    MEM_B(0X15, ctx->r16) = ctx->r2;
    // 0x80055C04: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x80055C08: addiu       $v0, $zero, 0xF6
    ctx->r2 = ADD32(0, 0XF6);
    // 0x80055C0C: sh          $v1, 0x22($s0)
    MEM_H(0X22, ctx->r16) = ctx->r3;
    // 0x80055C10: sh          $v1, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r3;
    // 0x80055C14: sb          $v0, 0x25($s0)
    MEM_B(0X25, ctx->r16) = ctx->r2;
    // 0x80055C18: sb          $v0, 0x1D($s0)
    MEM_B(0X1D, ctx->r16) = ctx->r2;
    // 0x80055C1C: sh          $a0, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r4;
    // 0x80055C20: sh          $a0, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r4;
    // 0x80055C24: addiu       $s0, $s0, 0x28
    ctx->r16 = ADD32(ctx->r16, 0X28);
L_80055C28:
    // 0x80055C28: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80055C2C: lw          $a0, 0x497C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X497C);
    // 0x80055C30: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x80055C34: addiu       $a2, $s0, -0x28
    ctx->r6 = ADD32(ctx->r16, -0X28);
    // 0x80055C38: jal         0x8002FD5C
    // 0x80055C3C: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    func_8002FD5C_B15C(rdram, ctx);
        goto after_0;
    // 0x80055C3C: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    after_0:
    // 0x80055C40: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x80055C44: sw          $s0, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r16;
    // 0x80055C48: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x80055C4C: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80055C50: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80055C54: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80055C58: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80055C5C: jr          $ra
    // 0x80055C60: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80055C60: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800268EC_1CEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800268EC: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x800268F0: lw          $v1, -0x46DC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X46DC);
    // 0x800268F4: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x800268F8: lb          $v0, 0x36($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X36);
    // 0x800268FC: sll         $a0, $a0, 24
    ctx->r4 = S32(ctx->r4 << 24);
    // 0x80026900: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80026904: bnel        $v0, $a0, L_8002690C
    if (ctx->r2 != ctx->r4) {
        // 0x80026908: sb          $a1, 0x36($v1)
        MEM_B(0X36, ctx->r3) = ctx->r5;
            goto L_8002690C;
    }
    goto skip_0;
    // 0x80026908: sb          $a1, 0x36($v1)
    MEM_B(0X36, ctx->r3) = ctx->r5;
    skip_0:
L_8002690C:
    // 0x8002690C: jr          $ra
    // 0x80026910: nop

    TRACE_RETURN()
    return;
    // 0x80026910: nop

;}
RECOMP_FUNC void func_80093D70_6F170(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80093D70: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80093D74: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x80093D78: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x80093D7C: addiu       $s0, $s0, -0xC90
    ctx->r16 = ADD32(ctx->r16, -0XC90);
    // 0x80093D80: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80093D84: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x80093D88: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80093D8C: sw          $ra, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r31;
    // 0x80093D90: jal         0x8009A470
    // 0x80093D94: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_0;
    // 0x80093D94: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    after_0:
    // 0x80093D98: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80093D9C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80093DA0: jal         0x800922D0
    // 0x80093DA4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800922D0_6D6D0(rdram, ctx);
        goto after_1;
    // 0x80093DA4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
L_80093DA8:
    // 0x80093DA8: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80093DAC: addiu       $a0, $a0, -0xC90
    ctx->r4 = ADD32(ctx->r4, -0XC90);
    // 0x80093DB0: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x80093DB4: jal         0x8009A5E0
    // 0x80093DB8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_2;
    // 0x80093DB8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x80093DBC: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x80093DC0: lh          $v1, 0x0($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X0);
    // 0x80093DC4: lui         $s0, 0x800D
    ctx->r16 = S32(0X800D << 16);
    // 0x80093DC8: addiu       $s0, $s0, -0xE20
    ctx->r16 = ADD32(ctx->r16, -0XE20);
    // 0x80093DCC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80093DD0: beq         $v1, $v0, L_80093DE8
    if (ctx->r3 == ctx->r2) {
        // 0x80093DD4: addiu       $v0, $zero, 0x7F00
        ctx->r2 = ADD32(0, 0X7F00);
            goto L_80093DE8;
    }
    // 0x80093DD4: addiu       $v0, $zero, 0x7F00
    ctx->r2 = ADD32(0, 0X7F00);
    // 0x80093DD8: beq         $v1, $v0, L_80093E34
    if (ctx->r3 == ctx->r2) {
        // 0x80093DDC: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_80093E34;
    }
    // 0x80093DDC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80093DE0: j           L_80093E68
    // 0x80093DE4: nop

        goto L_80093E68;
    // 0x80093DE4: nop

L_80093DE8:
    // 0x80093DE8: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80093DEC: beq         $v0, $zero, L_80093DA8
    if (ctx->r2 == 0) {
        // 0x80093DF0: nop
    
            goto L_80093DA8;
    }
    // 0x80093DF0: nop

L_80093DF4:
    // 0x80093DF4: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80093DF8: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x80093DFC: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80093E00: beq         $v0, $zero, L_80093E14
    if (ctx->r2 == 0) {
        // 0x80093E04: nop
    
            goto L_80093E14;
    }
    // 0x80093E04: nop

    // 0x80093E08: jalr        $v0
    // 0x80093E0C: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x80093E0C: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    after_3:
    // 0x80093E10: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
L_80093E14:
    // 0x80093E14: bne         $s1, $zero, L_80093DA8
    if (ctx->r17 != 0) {
        // 0x80093E18: nop
    
            goto L_80093DA8;
    }
    // 0x80093E18: nop

    // 0x80093E1C: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x80093E20: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80093E24: bne         $v0, $zero, L_80093DF4
    if (ctx->r2 != 0) {
        // 0x80093E28: nop
    
            goto L_80093DF4;
    }
    // 0x80093E28: nop

    // 0x80093E2C: j           L_80093DA8
    // 0x80093E30: nop

        goto L_80093DA8;
    // 0x80093E30: nop

L_80093E34:
    // 0x80093E34: lw          $a0, 0x4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4);
    // 0x80093E38: jal         0x8009A710
    // 0x80093E3C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSendMesg_recomp(rdram, ctx);
        goto after_4;
    // 0x80093E3C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x80093E40: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80093E44: jal         0x80092360
    // 0x80093E48: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_80092360_6D760(rdram, ctx);
        goto after_5;
    // 0x80093E48: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_5:
    // 0x80093E4C: jal         0x8009BB10
    // 0x80093E50: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    osStopThread_recomp(rdram, ctx);
        goto after_6;
    // 0x80093E50: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_6:
    // 0x80093E54: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80093E58: jal         0x80092360
    // 0x80093E5C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80092360_6D760(rdram, ctx);
        goto after_7;
    // 0x80093E5C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_7:
    // 0x80093E60: j           L_80093DA8
    // 0x80093E64: nop

        goto L_80093DA8;
    // 0x80093E64: nop

L_80093E68:
    // 0x80093E68: lw          $v0, 0x40($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X40);
    // 0x80093E6C: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x80093E70: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x80093E74: andi        $a0, $v0, 0xFF00
    ctx->r4 = ctx->r2 & 0XFF00;
    // 0x80093E78: beq         $v1, $zero, L_80093DA8
    if (ctx->r3 == 0) {
        // 0x80093E7C: andi        $v0, $v0, 0xFF
        ctx->r2 = ctx->r2 & 0XFF;
            goto L_80093DA8;
    }
    // 0x80093E7C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80093E80: andi        $a1, $a0, 0xFFFF
    ctx->r5 = ctx->r4 & 0XFFFF;
    // 0x80093E84: andi        $a0, $v0, 0xFFFF
    ctx->r4 = ctx->r2 & 0XFFFF;
    // 0x80093E88: sll         $a2, $a0, 2
    ctx->r6 = S32(ctx->r4 << 2);
L_80093E8C:
    // 0x80093E8C: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x80093E90: lhu         $v0, 0x8($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X8);
    // 0x80093E94: bnel        $v0, $a1, L_80093EEC
    if (ctx->r2 != ctx->r5) {
        // 0x80093E98: addu        $s0, $v1, $zero
        ctx->r16 = ADD32(ctx->r3, 0);
            goto L_80093EEC;
    }
    goto skip_0;
    // 0x80093E98: addu        $s0, $v1, $zero
    ctx->r16 = ADD32(ctx->r3, 0);
    skip_0:
    // 0x80093E9C: lbu         $v0, 0xA($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XA);
    // 0x80093EA0: sltu        $v0, $a0, $v0
    ctx->r2 = ctx->r4 < ctx->r2 ? 1 : 0;
    // 0x80093EA4: beq         $v0, $zero, L_80093ECC
    if (ctx->r2 == 0) {
        // 0x80093EA8: nop
    
            goto L_80093ECC;
    }
    // 0x80093EA8: nop

    // 0x80093EAC: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x80093EB0: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x80093EB4: addu        $v0, $a2, $v0
    ctx->r2 = ADD32(ctx->r6, ctx->r2);
    // 0x80093EB8: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80093EBC: jalr        $v0
    // 0x80093EC0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_8;
    // 0x80093EC0: nop

    after_8:
    // 0x80093EC4: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x80093EC8: sw          $v0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r2;
L_80093ECC:
    // 0x80093ECC: lw          $v0, 0x40($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X40);
    // 0x80093ED0: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x80093ED4: beq         $a0, $zero, L_80093DA8
    if (ctx->r4 == 0) {
        // 0x80093ED8: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_80093DA8;
    }
    // 0x80093ED8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80093EDC: jal         0x8009A710
    // 0x80093EE0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSendMesg_recomp(rdram, ctx);
        goto after_9;
    // 0x80093EE0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_9:
    // 0x80093EE4: j           L_80093DA8
    // 0x80093EE8: nop

        goto L_80093DA8;
    // 0x80093EE8: nop

L_80093EEC:
    // 0x80093EEC: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80093EF0: bne         $v0, $zero, L_80093E8C
    if (ctx->r2 != 0) {
        // 0x80093EF4: nop
    
            goto L_80093E8C;
    }
    // 0x80093EF4: nop

    // 0x80093EF8: j           L_80093DA8
    // 0x80093EFC: nop

        goto L_80093DA8;
    // 0x80093EFC: nop

    // 0x80093F00: lw          $ra, 0x50($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X50);
    // 0x80093F04: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x80093F08: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x80093F0C: jr          $ra
    // 0x80093F10: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    TRACE_RETURN()
    return;
    // 0x80093F10: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x80093F14: nop

    // 0x80093F18: nop

    // 0x80093F1C: nop

;}
RECOMP_FUNC void func_80036B00_11F00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80036B00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80036B04: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80036B08: jal         0x8002B9F8
    // 0x80036B0C: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    func_8002B9F8_6DF8(rdram, ctx);
        goto after_0;
    // 0x80036B0C: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    after_0:
    // 0x80036B10: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80036B14: jr          $ra
    // 0x80036B18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80036B18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8003F780_1AB80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003F780: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8003F784: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x8003F788: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x8003F78C: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x8003F790: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x8003F794: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x8003F798: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x8003F79C: addu        $s4, $a3, $zero
    ctx->r20 = ADD32(ctx->r7, 0);
    // 0x8003F7A0: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8003F7A4: lui         $s1, 0x801E
    ctx->r17 = S32(0X801E << 16);
    // 0x8003F7A8: addiu       $s1, $s1, -0x7158
    ctx->r17 = ADD32(ctx->r17, -0X7158);
    // 0x8003F7AC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8003F7B0: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8003F7B4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8003F7B8: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x8003F7BC: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x8003F7C0: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x8003F7C4: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x8003F7C8: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x8003F7CC: jal         0x8009A3B4
    // 0x8003F7D0: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8003F7D0: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    after_0:
    // 0x8003F7D4: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x8003F7D8: addiu       $s0, $s0, 0x47DC
    ctx->r16 = ADD32(ctx->r16, 0X47DC);
    // 0x8003F7DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8003F7E0: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8003F7E4: jal         0x8009A3B4
    // 0x8003F7E8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8003F7E8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x8003F7EC: lhu         $s1, 0x0($s1)
    ctx->r17 = MEM_HU(ctx->r17, 0X0);
    // 0x8003F7F0: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x8003F7F4: xor         $v0, $s1, $v0
    ctx->r2 = ctx->r17 ^ ctx->r2;
    // 0x8003F7F8: andi        $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 & 0X8000;
    // 0x8003F7FC: beq         $v0, $zero, L_8003F81C
    if (ctx->r2 == 0) {
        // 0x8003F800: sll         $v0, $s1, 16
        ctx->r2 = S32(ctx->r17 << 16);
            goto L_8003F81C;
    }
    // 0x8003F800: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x8003F804: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8003F808: bltzl       $v0, L_8003F810
    if (SIGNED(ctx->r2) < 0) {
        // 0x8003F80C: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_8003F810;
    }
    goto skip_0;
    // 0x8003F80C: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_0:
L_8003F810:
    // 0x8003F810: slti        $v0, $v0, 0x4001
    ctx->r2 = SIGNED(ctx->r2) < 0X4001 ? 1 : 0;
    // 0x8003F814: beq         $v0, $zero, L_8003FC00
    if (ctx->r2 == 0) {
        // 0x8003F818: lui         $v0, 0x8000
        ctx->r2 = S32(0X8000 << 16);
            goto L_8003FC00;
    }
    // 0x8003F818: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
L_8003F81C:
    // 0x8003F81C: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x8003F820: lhu         $v1, -0x7154($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X7154);
    // 0x8003F824: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8003F828: lhu         $v0, 0x47E0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X47E0);
    // 0x8003F82C: xor         $v0, $v1, $v0
    ctx->r2 = ctx->r3 ^ ctx->r2;
    // 0x8003F830: andi        $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 & 0X8000;
    // 0x8003F834: beq         $v0, $zero, L_8003F868
    if (ctx->r2 == 0) {
        // 0x8003F838: sll         $v0, $v1, 16
        ctx->r2 = S32(ctx->r3 << 16);
            goto L_8003F868;
    }
    // 0x8003F838: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x8003F83C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8003F840: bltzl       $v0, L_8003F85C
    if (SIGNED(ctx->r2) < 0) {
        // 0x8003F844: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_8003F85C;
    }
    goto skip_1;
    // 0x8003F844: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_1:
    // 0x8003F848: slti        $v0, $v0, 0x4001
    ctx->r2 = SIGNED(ctx->r2) < 0X4001 ? 1 : 0;
    // 0x8003F84C: beq         $v0, $zero, L_8003FC00
    if (ctx->r2 == 0) {
        // 0x8003F850: lui         $v0, 0x8000
        ctx->r2 = S32(0X8000 << 16);
            goto L_8003FC00;
    }
    // 0x8003F850: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x8003F854: j           L_8003F868
    // 0x8003F858: nop

        goto L_8003F868;
    // 0x8003F858: nop

L_8003F85C:
    // 0x8003F85C: slti        $v0, $v0, 0x4001
    ctx->r2 = SIGNED(ctx->r2) < 0X4001 ? 1 : 0;
    // 0x8003F860: beq         $v0, $zero, L_8003FC00
    if (ctx->r2 == 0) {
        // 0x8003F864: lui         $v0, 0x8000
        ctx->r2 = S32(0X8000 << 16);
            goto L_8003FC00;
    }
    // 0x8003F864: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
L_8003F868:
    // 0x8003F868: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8003F86C: lh          $v0, -0x7158($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X7158);
    // 0x8003F870: ori         $a0, $zero, 0x8000
    ctx->r4 = 0 | 0X8000;
    // 0x8003F874: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8003F878: lbu         $v1, 0x6B40($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X6B40);
    // 0x8003F87C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8003F880: lhu         $a1, 0x49AE($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X49AE);
    // 0x8003F884: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8003F888: sra         $v0, $v0, 9
    ctx->r2 = S32(SIGNED(ctx->r2) >> 9);
    // 0x8003F88C: subu        $a2, $v0, $v1
    ctx->r6 = SUB32(ctx->r2, ctx->r3);
    // 0x8003F890: sltu        $v0, $a2, $a1
    ctx->r2 = ctx->r6 < ctx->r5 ? 1 : 0;
    // 0x8003F894: beq         $v0, $zero, L_8003F8FC
    if (ctx->r2 == 0) {
        // 0x8003F898: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8003F8FC;
    }
    // 0x8003F898: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8003F89C: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8003F8A0: lh          $v0, -0x7154($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X7154);
    // 0x8003F8A4: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8003F8A8: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8003F8AC: lbu         $a0, -0x39A6($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X39A6);
    // 0x8003F8B0: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x8003F8B4: lhu         $v1, -0x7386($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X7386);
    // 0x8003F8B8: sra         $v0, $v0, 9
    ctx->r2 = S32(SIGNED(ctx->r2) >> 9);
    // 0x8003F8BC: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8003F8C0: sltu        $v1, $v0, $v1
    ctx->r3 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8003F8C4: bne         $v1, $zero, L_8003F8D4
    if (ctx->r3 != 0) {
        // 0x8003F8C8: nop
    
            goto L_8003F8D4;
    }
    // 0x8003F8C8: nop

    // 0x8003F8CC: j           L_8003F8FC
    // 0x8003F8D0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_8003F8FC;
    // 0x8003F8D0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8003F8D4:
    // 0x8003F8D4: nop

    // 0x8003F8D8: mult        $v0, $a1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003F8DC: mflo        $v1
    ctx->r3 = lo;
    // 0x8003F8E0: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x8003F8E4: lw          $a0, -0x35C0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X35C0);
    // 0x8003F8E8: sll         $v0, $a2, 1
    ctx->r2 = S32(ctx->r6 << 1);
    // 0x8003F8EC: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8003F8F0: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x8003F8F4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8003F8F8: lh          $v0, 0x0($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X0);
L_8003F8FC:
    // 0x8003F8FC: bne         $v0, $zero, L_8003F91C
    if (ctx->r2 != 0) {
        // 0x8003F900: nop
    
            goto L_8003F91C;
    }
    // 0x8003F900: nop

    // 0x8003F904: j           L_8003FC00
    // 0x8003F908: lui         $v0, 0x4000
    ctx->r2 = S32(0X4000 << 16);
        goto L_8003FC00;
    // 0x8003F908: lui         $v0, 0x4000
    ctx->r2 = S32(0X4000 << 16);
L_8003F90C:
    // 0x8003F90C: andi        $v0, $s5, 0xF
    ctx->r2 = ctx->r21 & 0XF;
    // 0x8003F910: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8003F914: j           L_8003FC00
    // 0x8003F918: or          $v0, $v1, $v0
    ctx->r2 = ctx->r3 | ctx->r2;
        goto L_8003FC00;
    // 0x8003F918: or          $v0, $v1, $v0
    ctx->r2 = ctx->r3 | ctx->r2;
L_8003F91C:
    // 0x8003F91C: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x8003F920: addiu       $a0, $a0, -0x7158
    ctx->r4 = ADD32(ctx->r4, -0X7158);
    // 0x8003F924: jal         0x80040D60
    // 0x8003F928: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80040D60_1C160(rdram, ctx);
        goto after_2;
    // 0x8003F928: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x8003F92C: addu        $s7, $v0, $zero
    ctx->r23 = ADD32(ctx->r2, 0);
    // 0x8003F930: jal         0x80040EEC
    // 0x8003F934: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_80040EEC_1C2EC(rdram, ctx);
        goto after_3;
    // 0x8003F934: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_3:
    // 0x8003F938: jal         0x8004DA68
    // 0x8003F93C: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_8004DA68_28E68(rdram, ctx);
        goto after_4;
    // 0x8003F93C: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_4:
    // 0x8003F940: addu        $v1, $s7, $zero
    ctx->r3 = ADD32(ctx->r23, 0);
    // 0x8003F944: addiu       $s7, $s7, -0x1
    ctx->r23 = ADD32(ctx->r23, -0X1);
    // 0x8003F948: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8003F94C: beq         $v1, $zero, L_8003FBFC
    if (ctx->r3 == 0) {
        // 0x8003F950: sll         $v0, $v0, 15
        ctx->r2 = S32(ctx->r2 << 15);
            goto L_8003FBFC;
    }
    // 0x8003F950: sll         $v0, $v0, 15
    ctx->r2 = S32(ctx->r2 << 15);
    // 0x8003F954: xori        $fp, $v0, 0x8000
    ctx->r30 = ctx->r2 ^ 0X8000;
L_8003F958:
    // 0x8003F958: sll         $v0, $s7, 1
    ctx->r2 = S32(ctx->r23 << 1);
    // 0x8003F95C: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8003F960: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8003F964: lh          $a0, -0x3C88($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X3C88);
    // 0x8003F968: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8003F96C: lw          $v1, -0x35C0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X35C0);
    // 0x8003F970: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x8003F974: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8003F978: lh          $s6, 0x0($v0)
    ctx->r22 = MEM_H(ctx->r2, 0X0);
    // 0x8003F97C: bgtz        $s6, L_8003FA7C
    if (SIGNED(ctx->r22) > 0) {
        // 0x8003F980: sll         $v0, $s6, 1
        ctx->r2 = S32(ctx->r22 << 1);
            goto L_8003FA7C;
    }
    // 0x8003F980: sll         $v0, $s6, 1
    ctx->r2 = S32(ctx->r22 << 1);
    // 0x8003F984: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8003F988: lh          $v0, -0x7158($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X7158);
    // 0x8003F98C: ori         $t0, $zero, 0x8000
    ctx->r8 = 0 | 0X8000;
    // 0x8003F990: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8003F994: lbu         $v1, 0x6B40($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X6B40);
    // 0x8003F998: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x8003F99C: lhu         $a2, 0x49AE($a2)
    ctx->r6 = MEM_HU(ctx->r6, 0X49AE);
    // 0x8003F9A0: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x8003F9A4: sra         $v0, $v0, 9
    ctx->r2 = S32(SIGNED(ctx->r2) >> 9);
    // 0x8003F9A8: subu        $a1, $v0, $v1
    ctx->r5 = SUB32(ctx->r2, ctx->r3);
    // 0x8003F9AC: sltu        $v0, $a1, $a2
    ctx->r2 = ctx->r5 < ctx->r6 ? 1 : 0;
    // 0x8003F9B0: beq         $v0, $zero, L_8003F9E8
    if (ctx->r2 == 0) {
        // 0x8003F9B4: addu        $a3, $a0, $zero
        ctx->r7 = ADD32(ctx->r4, 0);
            goto L_8003F9E8;
    }
    // 0x8003F9B4: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x8003F9B8: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8003F9BC: lh          $v0, -0x7154($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X7154);
    // 0x8003F9C0: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8003F9C4: lbu         $a0, -0x39A6($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X39A6);
    // 0x8003F9C8: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x8003F9CC: lhu         $v1, -0x7386($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X7386);
    // 0x8003F9D0: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x8003F9D4: sra         $v0, $v0, 9
    ctx->r2 = S32(SIGNED(ctx->r2) >> 9);
    // 0x8003F9D8: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8003F9DC: sltu        $v1, $v0, $v1
    ctx->r3 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8003F9E0: bne         $v1, $zero, L_8003F9F0
    if (ctx->r3 != 0) {
        // 0x8003F9E4: nop
    
            goto L_8003F9F0;
    }
    // 0x8003F9E4: nop

L_8003F9E8:
    // 0x8003F9E8: j           L_8003FA04
    // 0x8003F9EC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_8003FA04;
    // 0x8003F9EC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8003F9F0:
    // 0x8003F9F0: nop

    // 0x8003F9F4: mult        $v0, $a2
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003F9F8: mflo        $v0
    ctx->r2 = lo;
    // 0x8003F9FC: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x8003FA00: nop

L_8003FA04:
    // 0x8003FA04: bne         $a3, $v0, L_8003FBF4
    if (ctx->r7 != ctx->r2) {
        // 0x8003FA08: addu        $v0, $s7, $zero
        ctx->r2 = ADD32(ctx->r23, 0);
            goto L_8003FBF4;
    }
    // 0x8003FA08: addu        $v0, $s7, $zero
    ctx->r2 = ADD32(ctx->r23, 0);
    // 0x8003FA0C: lui         $a1, 0x801E
    ctx->r5 = S32(0X801E << 16);
    // 0x8003FA10: lh          $a1, -0x7156($a1)
    ctx->r5 = MEM_H(ctx->r5, -0X7156);
    // 0x8003FA14: andi        $v0, $s6, 0x1F00
    ctx->r2 = ctx->r22 & 0X1F00;
    // 0x8003FA18: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x8003FA1C: lui         $v1, 0x8022
    ctx->r3 = S32(0X8022 << 16);
    // 0x8003FA20: lh          $v1, -0x26AC($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X26AC);
    // 0x8003FA24: negu        $a0, $v0
    ctx->r4 = SUB32(0, ctx->r2);
    // 0x8003FA28: addiu       $v0, $a0, -0x1
    ctx->r2 = ADD32(ctx->r4, -0X1);
    // 0x8003FA2C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8003FA30: slt         $v0, $v0, $a1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8003FA34: bne         $v0, $zero, L_8003FA74
    if (ctx->r2 != 0) {
        // 0x8003FA38: andi        $v0, $s6, 0x6000
        ctx->r2 = ctx->r22 & 0X6000;
            goto L_8003FA74;
    }
    // 0x8003FA38: andi        $v0, $s6, 0x6000
    ctx->r2 = ctx->r22 & 0X6000;
    // 0x8003FA3C: beql        $v0, $zero, L_8003FBF4
    if (ctx->r2 == 0) {
        // 0x8003FA40: addu        $v0, $s7, $zero
        ctx->r2 = ADD32(ctx->r23, 0);
            goto L_8003FBF4;
    }
    goto skip_2;
    // 0x8003FA40: addu        $v0, $s7, $zero
    ctx->r2 = ADD32(ctx->r23, 0);
    skip_2:
    // 0x8003FA44: sra         $v0, $v0, 13
    ctx->r2 = S32(SIGNED(ctx->r2) >> 13);
    // 0x8003FA48: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x8003FA4C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8003FA50: sll         $v1, $v1, 7
    ctx->r3 = S32(ctx->r3 << 7);
    // 0x8003FA54: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x8003FA58: lh          $v0, -0x26AE($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X26AE);
    // 0x8003FA5C: subu        $v1, $a0, $v1
    ctx->r3 = SUB32(ctx->r4, ctx->r3);
    // 0x8003FA60: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8003FA64: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8003FA68: slt         $v1, $a1, $v1
    ctx->r3 = SIGNED(ctx->r5) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8003FA6C: beq         $v1, $zero, L_8003FBF4
    if (ctx->r3 == 0) {
        // 0x8003FA70: addu        $v0, $s7, $zero
        ctx->r2 = ADD32(ctx->r23, 0);
            goto L_8003FBF4;
    }
    // 0x8003FA70: addu        $v0, $s7, $zero
    ctx->r2 = ADD32(ctx->r23, 0);
L_8003FA74:
    // 0x8003FA74: j           L_8003FC00
    // 0x8003FA78: andi        $v0, $s6, 0xFFFF
    ctx->r2 = ctx->r22 & 0XFFFF;
        goto L_8003FC00;
    // 0x8003FA78: andi        $v0, $s6, 0xFFFF
    ctx->r2 = ctx->r22 & 0XFFFF;
L_8003FA7C:
    // 0x8003FA7C: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x8003FA80: lw          $v1, 0xB5C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0XB5C);
    // 0x8003FA84: addu        $v0, $v0, $s6
    ctx->r2 = ADD32(ctx->r2, ctx->r22);
    // 0x8003FA88: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8003FA8C: addu        $a0, $v1, $v0
    ctx->r4 = ADD32(ctx->r3, ctx->r2);
    // 0x8003FA90: lhu         $v0, 0x6($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X6);
    // 0x8003FA94: lw          $a1, 0x8($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X8);
    // 0x8003FA98: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8003FA9C: beq         $v0, $zero, L_8003FAB8
    if (ctx->r2 == 0) {
        // 0x8003FAA0: nop
    
            goto L_8003FAB8;
    }
    // 0x8003FAA0: nop

    // 0x8003FAA4: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8003FAA8: lw          $v1, 0x55A0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X55A0);
    // 0x8003FAAC: lw          $v0, 0x4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X4);
    // 0x8003FAB0: j           L_8003FAC8
    // 0x8003FAB4: addu        $s4, $v1, $v0
    ctx->r20 = ADD32(ctx->r3, ctx->r2);
        goto L_8003FAC8;
    // 0x8003FAB4: addu        $s4, $v1, $v0
    ctx->r20 = ADD32(ctx->r3, ctx->r2);
L_8003FAB8:
    // 0x8003FAB8: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8003FABC: lw          $v1, 0x55A0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X55A0);
    // 0x8003FAC0: lw          $v0, 0x8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X8);
    // 0x8003FAC4: addu        $s4, $v1, $v0
    ctx->r20 = ADD32(ctx->r3, ctx->r2);
L_8003FAC8:
    // 0x8003FAC8: lhu         $v0, 0x0($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X0);
    // 0x8003FACC: sh          $v0, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r2;
    // 0x8003FAD0: lhu         $v0, 0x2($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X2);
    // 0x8003FAD4: sh          $v0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r2;
    // 0x8003FAD8: lhu         $v0, 0x4($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X4);
    // 0x8003FADC: sh          $v0, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r2;
    // 0x8003FAE0: lw          $v0, 0x8($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X8);
    // 0x8003FAE4: beq         $v0, $zero, L_8003FBF4
    if (ctx->r2 == 0) {
        // 0x8003FAE8: addu        $v0, $s7, $zero
        ctx->r2 = ADD32(ctx->r23, 0);
            goto L_8003FBF4;
    }
    // 0x8003FAE8: addu        $v0, $s7, $zero
    ctx->r2 = ADD32(ctx->r23, 0);
    // 0x8003FAEC: addiu       $s1, $s4, 0x8
    ctx->r17 = ADD32(ctx->r20, 0X8);
L_8003FAF0:
    // 0x8003FAF0: lhu         $v1, 0x20($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X20);
    // 0x8003FAF4: lhu         $v0, 0x0($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X0);
    // 0x8003FAF8: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x8003FAFC: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x8003FB00: lhu         $v0, -0x6($s1)
    ctx->r2 = MEM_HU(ctx->r17, -0X6);
    // 0x8003FB04: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8003FB08: sh          $v1, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r3;
    // 0x8003FB0C: lhu         $v1, 0x24($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X24);
    // 0x8003FB10: lhu         $v0, -0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, -0X4);
    // 0x8003FB14: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x8003FB18: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    // 0x8003FB1C: lhu         $v0, -0x2($s1)
    ctx->r2 = MEM_HU(ctx->r17, -0X2);
    // 0x8003FB20: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8003FB24: sh          $v1, 0x16($sp)
    MEM_H(0X16, ctx->r29) = ctx->r3;
    // 0x8003FB28: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8003FB2C: lw          $v1, 0x55A0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X55A0);
    // 0x8003FB30: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x8003FB34: addu        $s2, $v1, $v0
    ctx->r18 = ADD32(ctx->r3, ctx->r2);
    // 0x8003FB38: lhu         $a1, 0x4($s2)
    ctx->r5 = MEM_HU(ctx->r18, 0X4);
    // 0x8003FB3C: sltiu       $v0, $a1, 0x100
    ctx->r2 = ctx->r5 < 0X100 ? 1 : 0;
    // 0x8003FB40: beq         $v0, $zero, L_8003FBE0
    if (ctx->r2 == 0) {
        // 0x8003FB44: andi        $v0, $a1, 0xF0
        ctx->r2 = ctx->r5 & 0XF0;
            goto L_8003FBE0;
    }
    // 0x8003FB44: andi        $v0, $a1, 0xF0
    ctx->r2 = ctx->r5 & 0XF0;
    // 0x8003FB48: srl         $v0, $v0, 2
    ctx->r2 = S32(U32(ctx->r2) >> 2);
    // 0x8003FB4C: lui         $t0, 0x800B
    ctx->r8 = S32(0X800B << 16);
    // 0x8003FB50: addiu       $t0, $t0, -0x35F0
    ctx->r8 = ADD32(ctx->r8, -0X35F0);
    // 0x8003FB54: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x8003FB58: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8003FB5C: jalr        $v0
    // 0x8003FB60: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_5;
    // 0x8003FB60: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_5:
    // 0x8003FB64: beql        $v0, $zero, L_8003FBE4
    if (ctx->r2 == 0) {
        // 0x8003FB68: addiu       $s1, $s1, 0x10
        ctx->r17 = ADD32(ctx->r17, 0X10);
            goto L_8003FBE4;
    }
    goto skip_3;
    // 0x8003FB68: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
    skip_3:
    // 0x8003FB6C: lw          $s3, 0x4($s1)
    ctx->r19 = MEM_W(ctx->r17, 0X4);
    // 0x8003FB70: addiu       $s0, $s2, 0x4
    ctx->r16 = ADD32(ctx->r18, 0X4);
L_8003FB74:
    // 0x8003FB74: lhu         $s5, 0x2($s0)
    ctx->r21 = MEM_HU(ctx->r16, 0X2);
    // 0x8003FB78: and         $v0, $s5, $fp
    ctx->r2 = ctx->r21 & ctx->r30;
    // 0x8003FB7C: bnel        $v0, $zero, L_8003FBD4
    if (ctx->r2 != 0) {
        // 0x8003FB80: addiu       $s0, $s0, 0x8
        ctx->r16 = ADD32(ctx->r16, 0X8);
            goto L_8003FBD4;
    }
    goto skip_4;
    // 0x8003FB80: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    skip_4:
    // 0x8003FB84: lhu         $v1, 0x22($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X22);
    // 0x8003FB88: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x8003FB8C: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x8003FB90: sh          $v0, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r2;
    // 0x8003FB94: lhu         $v0, -0x2($s0)
    ctx->r2 = MEM_HU(ctx->r16, -0X2);
    // 0x8003FB98: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8003FB9C: sh          $v1, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r3;
    // 0x8003FBA0: lhu         $a1, 0x0($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X0);
    // 0x8003FBA4: jal         0x8003FC30
    // 0x8003FBA8: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_8003FC30_1B030(rdram, ctx);
        goto after_6;
    // 0x8003FBA8: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_6:
    // 0x8003FBAC: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x8003FBB0: lh          $v1, -0x7156($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X7156);
    // 0x8003FBB4: lh          $v0, 0x18($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X18);
    // 0x8003FBB8: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8003FBBC: beq         $v0, $zero, L_8003FBD4
    if (ctx->r2 == 0) {
        // 0x8003FBC0: addiu       $s0, $s0, 0x8
        ctx->r16 = ADD32(ctx->r16, 0X8);
            goto L_8003FBD4;
    }
    // 0x8003FBC0: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x8003FBC4: lh          $v0, 0x1A($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X1A);
    // 0x8003FBC8: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8003FBCC: bne         $v0, $zero, L_8003F90C
    if (ctx->r2 != 0) {
        // 0x8003FBD0: andi        $v1, $s6, 0xFFFF
        ctx->r3 = ctx->r22 & 0XFFFF;
            goto L_8003F90C;
    }
    // 0x8003FBD0: andi        $v1, $s6, 0xFFFF
    ctx->r3 = ctx->r22 & 0XFFFF;
L_8003FBD4:
    // 0x8003FBD4: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
    // 0x8003FBD8: bne         $s3, $zero, L_8003FB74
    if (ctx->r19 != 0) {
        // 0x8003FBDC: addiu       $s2, $s2, 0x8
        ctx->r18 = ADD32(ctx->r18, 0X8);
            goto L_8003FB74;
    }
    // 0x8003FBDC: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
L_8003FBE0:
    // 0x8003FBE0: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
L_8003FBE4:
    // 0x8003FBE4: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x8003FBE8: bne         $v0, $zero, L_8003FAF0
    if (ctx->r2 != 0) {
        // 0x8003FBEC: addiu       $s4, $s4, 0x10
        ctx->r20 = ADD32(ctx->r20, 0X10);
            goto L_8003FAF0;
    }
    // 0x8003FBEC: addiu       $s4, $s4, 0x10
    ctx->r20 = ADD32(ctx->r20, 0X10);
    // 0x8003FBF0: addu        $v0, $s7, $zero
    ctx->r2 = ADD32(ctx->r23, 0);
L_8003FBF4:
    // 0x8003FBF4: bne         $v0, $zero, L_8003F958
    if (ctx->r2 != 0) {
        // 0x8003FBF8: addiu       $s7, $s7, -0x1
        ctx->r23 = ADD32(ctx->r23, -0X1);
            goto L_8003F958;
    }
    // 0x8003FBF8: addiu       $s7, $s7, -0x1
    ctx->r23 = ADD32(ctx->r23, -0X1);
L_8003FBFC:
    // 0x8003FBFC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8003FC00:
    // 0x8003FC00: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x8003FC04: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x8003FC08: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x8003FC0C: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x8003FC10: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x8003FC14: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x8003FC18: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x8003FC1C: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x8003FC20: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8003FC24: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8003FC28: jr          $ra
    // 0x8003FC2C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x8003FC2C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
