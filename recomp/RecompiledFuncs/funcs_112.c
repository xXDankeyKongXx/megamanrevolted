#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_802288F0_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802288F0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802288F4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802288F8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802288FC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80228900: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80228904: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80228908: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8022890C: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x80228910: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80228914: beq         $v1, $zero, L_80228924
    if (ctx->r3 == 0) {
        // 0x80228918: sb          $v0, 0x0($s0)
        MEM_B(0X0, ctx->r16) = ctx->r2;
            goto L_80228924;
    }
    // 0x80228918: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8022891C: j           L_8022892C
    // 0x80228920: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
        goto L_8022892C;
    // 0x80228920: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
L_80228924:
    // 0x80228924: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228928: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_8022892C:
    // 0x8022892C: jal         0x8004D5D4
    // 0x80228930: nop

    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80228930: nop

    after_0:
    // 0x80228934: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80228938: addiu       $v0, $zero, 0x26
    ctx->r2 = ADD32(0, 0X26);
    // 0x8022893C: bne         $a0, $v0, L_8022894C
    if (ctx->r4 != ctx->r2) {
        // 0x80228940: xori        $v1, $a0, 0x24
        ctx->r3 = ctx->r4 ^ 0X24;
            goto L_8022894C;
    }
    // 0x80228940: xori        $v1, $a0, 0x24
    ctx->r3 = ctx->r4 ^ 0X24;
    // 0x80228944: j           L_802289C0
    // 0x80228948: addiu       $v0, $zero, 0x1D7
    ctx->r2 = ADD32(0, 0X1D7);
        goto L_802289C0;
    // 0x80228948: addiu       $v0, $zero, 0x1D7
    ctx->r2 = ADD32(0, 0X1D7);
L_8022894C:
    // 0x8022894C: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x80228950: xori        $v0, $a0, 0x30
    ctx->r2 = ctx->r4 ^ 0X30;
    // 0x80228954: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80228958: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8022895C: bne         $v1, $zero, L_802289C0
    if (ctx->r3 != 0) {
        // 0x80228960: addiu       $v0, $zero, 0x21A
        ctx->r2 = ADD32(0, 0X21A);
            goto L_802289C0;
    }
    // 0x80228960: addiu       $v0, $zero, 0x21A
    ctx->r2 = ADD32(0, 0X21A);
    // 0x80228964: xori        $v1, $a0, 0x42
    ctx->r3 = ctx->r4 ^ 0X42;
    // 0x80228968: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x8022896C: xori        $v0, $a0, 0x53
    ctx->r2 = ctx->r4 ^ 0X53;
    // 0x80228970: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80228974: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80228978: bne         $v1, $zero, L_802289C0
    if (ctx->r3 != 0) {
        // 0x8022897C: addiu       $v0, $zero, 0x21A
        ctx->r2 = ADD32(0, 0X21A);
            goto L_802289C0;
    }
    // 0x8022897C: addiu       $v0, $zero, 0x21A
    ctx->r2 = ADD32(0, 0X21A);
    // 0x80228980: xori        $v1, $a0, 0x5C
    ctx->r3 = ctx->r4 ^ 0X5C;
    // 0x80228984: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x80228988: xori        $v0, $a0, 0x44
    ctx->r2 = ctx->r4 ^ 0X44;
    // 0x8022898C: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80228990: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80228994: bne         $v1, $zero, L_802289C0
    if (ctx->r3 != 0) {
        // 0x80228998: addiu       $v0, $zero, 0x21A
        ctx->r2 = ADD32(0, 0X21A);
            goto L_802289C0;
    }
    // 0x80228998: addiu       $v0, $zero, 0x21A
    ctx->r2 = ADD32(0, 0X21A);
    // 0x8022899C: addiu       $v0, $zero, 0x5E
    ctx->r2 = ADD32(0, 0X5E);
    // 0x802289A0: bnel        $a0, $v0, L_802289C0
    if (ctx->r4 != ctx->r2) {
        // 0x802289A4: addiu       $v0, $zero, 0x200
        ctx->r2 = ADD32(0, 0X200);
            goto L_802289C0;
    }
    goto skip_0;
    // 0x802289A4: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    skip_0:
    // 0x802289A8: addiu       $v0, $zero, 0x1C0
    ctx->r2 = ADD32(0, 0X1C0);
    // 0x802289AC: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x802289B0: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x802289B4: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x802289B8: j           L_802289C8
    // 0x802289BC: addiu       $v0, $zero, 0x180
    ctx->r2 = ADD32(0, 0X180);
        goto L_802289C8;
    // 0x802289BC: addiu       $v0, $zero, 0x180
    ctx->r2 = ADD32(0, 0X180);
L_802289C0:
    // 0x802289C0: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x802289C4: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
L_802289C8:
    // 0x802289C8: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x802289CC: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x802289D0: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x802289D4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802289D8: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x802289DC: sh          $zero, 0x8($s1)
    MEM_H(0X8, ctx->r17) = 0;
    // 0x802289E0: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x802289E4: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x802289E8: bne         $v0, $zero, L_802289F4
    if (ctx->r2 != 0) {
        // 0x802289EC: addiu       $v0, $zero, 0x2710
        ctx->r2 = ADD32(0, 0X2710);
            goto L_802289F4;
    }
    // 0x802289EC: addiu       $v0, $zero, 0x2710
    ctx->r2 = ADD32(0, 0X2710);
    // 0x802289F0: addiu       $v0, $zero, 0x1388
    ctx->r2 = ADD32(0, 0X1388);
L_802289F4:
    // 0x802289F4: sh          $v0, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r2;
    // 0x802289F8: addiu       $a0, $s1, 0xC
    ctx->r4 = ADD32(ctx->r17, 0XC);
    // 0x802289FC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80228A00: jal         0x8009A3B4
    // 0x80228A04: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80228A04: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x80228A08: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80228A0C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228A10: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80228A14: sh          $v0, 0xA($s1)
    MEM_H(0XA, ctx->r17) = ctx->r2;
    // 0x80228A18: lbu         $v1, 0xD($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XD);
    // 0x80228A1C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80228A20: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80228A24: addiu       $v0, $v0, 0x1730
    ctx->r2 = ADD32(ctx->r2, 0X1730);
    // 0x80228A28: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x80228A2C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228A30: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80228A34: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80228A38: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x80228A3C: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x80228A40: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
    // 0x80228A44: sh          $zero, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = 0;
    // 0x80228A48: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    // 0x80228A4C: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x80228A50: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80228A54: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80228A58: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x80228A5C: andi        $v1, $v1, 0x7
    ctx->r3 = ctx->r3 & 0X7;
    // 0x80228A60: jal         0x80050294
    // 0x80228A64: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x80228A64: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    after_2:
    // 0x80228A68: jal         0x80228A84
    // 0x80228A6C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80228A84_ovl14(rdram, ctx);
        goto after_3;
    // 0x80228A6C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80228A70: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80228A74: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80228A78: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228A7C: jr          $ra
    // 0x80228A80: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80228A80: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022B828_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B828: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x8022B82C: beq         $a1, $zero, L_8022B840
    if (ctx->r5 == 0) {
        // 0x8022B830: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_8022B840;
    }
    // 0x8022B830: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022B834: sb          $zero, 0xFF($a0)
    MEM_B(0XFF, ctx->r4) = 0;
    // 0x8022B838: j           L_8022B848
    // 0x8022B83C: sb          $zero, 0x103($a0)
    MEM_B(0X103, ctx->r4) = 0;
        goto L_8022B848;
    // 0x8022B83C: sb          $zero, 0x103($a0)
    MEM_B(0X103, ctx->r4) = 0;
L_8022B840:
    // 0x8022B840: sb          $v0, 0xFF($a0)
    MEM_B(0XFF, ctx->r4) = ctx->r2;
    // 0x8022B844: sb          $v0, 0x103($a0)
    MEM_B(0X103, ctx->r4) = ctx->r2;
L_8022B848:
    // 0x8022B848: jr          $ra
    // 0x8022B84C: nop

    TRACE_RETURN()
    return;
    // 0x8022B84C: nop

;}
RECOMP_FUNC void func_8022F2A4_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F2A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022F2A8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022F2AC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F2B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022F2B4: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8022F2B8: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022F2BC: bne         $v0, $zero, L_8022F3A0
    if (ctx->r2 != 0) {
        // 0x8022F2C0: nop
    
            goto L_8022F3A0;
    }
    // 0x8022F2C0: nop

    // 0x8022F2C4: jal         0x8004F144
    // 0x8022F2C8: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x8022F2C8: nop

    after_0:
    // 0x8022F2CC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8022F2D0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022F2D4: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x8022F2D8: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x8022F2DC: sb          $v0, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r2;
    // 0x8022F2E0: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8022F2E4: sb          $v0, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r2;
    // 0x8022F2E8: lbu         $v1, 0xC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XC);
    // 0x8022F2EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022F2F0: sb          $v0, 0xD($a0)
    MEM_B(0XD, ctx->r4) = ctx->r2;
    // 0x8022F2F4: sb          $v1, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r3;
    // 0x8022F2F8: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x8022F2FC: sb          $v0, 0xE($a0)
    MEM_B(0XE, ctx->r4) = ctx->r2;
    // 0x8022F300: lhu         $v0, 0x1C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X1C);
    // 0x8022F304: lb          $v1, 0xE($a0)
    ctx->r3 = MEM_B(ctx->r4, 0XE);
    // 0x8022F308: sh          $v0, 0x1C($a0)
    MEM_H(0X1C, ctx->r4) = ctx->r2;
    // 0x8022F30C: lhu         $v0, 0x1E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X1E);
    // 0x8022F310: sh          $v0, 0x1E($a0)
    MEM_H(0X1E, ctx->r4) = ctx->r2;
    // 0x8022F314: lhu         $v0, 0x20($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X20);
    // 0x8022F318: sh          $v0, 0x20($a0)
    MEM_H(0X20, ctx->r4) = ctx->r2;
    // 0x8022F31C: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8022F320: bne         $v1, $v0, L_8022F33C
    if (ctx->r3 != ctx->r2) {
        // 0x8022F324: lui         $v1, 0x3D48
        ctx->r3 = S32(0X3D48 << 16);
            goto L_8022F33C;
    }
    // 0x8022F324: lui         $v1, 0x3D48
    ctx->r3 = S32(0X3D48 << 16);
    // 0x8022F328: lui         $v0, 0x3D48
    ctx->r2 = S32(0X3D48 << 16);
    // 0x8022F32C: ori         $v0, $v0, 0xE
    ctx->r2 = ctx->r2 | 0XE;
    // 0x8022F330: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x8022F334: j           L_8022F36C
    // 0x8022F338: lui         $v0, 0x2C00
    ctx->r2 = S32(0X2C00 << 16);
        goto L_8022F36C;
    // 0x8022F338: lui         $v0, 0x2C00
    ctx->r2 = S32(0X2C00 << 16);
L_8022F33C:
    // 0x8022F33C: lb          $v0, 0xE($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XE);
    // 0x8022F340: ori         $v1, $v1, 0x2E
    ctx->r3 = ctx->r3 | 0X2E;
    // 0x8022F344: sw          $v1, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r3;
    // 0x8022F348: lui         $v1, 0xAE00
    ctx->r3 = S32(0XAE00 << 16);
    // 0x8022F34C: sw          $v1, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r3;
    // 0x8022F350: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022F354: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022F358: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022F35C: lw          $v0, 0x1AB0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X1AB0);
    // 0x8022F360: sw          $zero, 0x28($a0)
    MEM_W(0X28, ctx->r4) = 0;
    // 0x8022F364: sll         $v0, $v0, 7
    ctx->r2 = S32(ctx->r2 << 7);
    // 0x8022F368: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
L_8022F36C:
    // 0x8022F36C: sw          $v0, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r2;
    // 0x8022F370: lbu         $v1, 0x3($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X3);
    // 0x8022F374: addiu       $v0, $zero, 0xA0
    ctx->r2 = ADD32(0, 0XA0);
    // 0x8022F378: sb          $v0, 0x22($a0)
    MEM_B(0X22, ctx->r4) = ctx->r2;
    // 0x8022F37C: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x8022F380: sb          $v0, 0x23($a0)
    MEM_B(0X23, ctx->r4) = ctx->r2;
    // 0x8022F384: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022F388: bne         $v1, $zero, L_8022F398
    if (ctx->r3 != 0) {
        // 0x8022F38C: sh          $v0, 0x24($a0)
        MEM_H(0X24, ctx->r4) = ctx->r2;
            goto L_8022F398;
    }
    // 0x8022F38C: sh          $v0, 0x24($a0)
    MEM_H(0X24, ctx->r4) = ctx->r2;
    // 0x8022F390: j           L_8022F39C
    // 0x8022F394: addiu       $v0, $zero, 0x4E
    ctx->r2 = ADD32(0, 0X4E);
        goto L_8022F39C;
    // 0x8022F394: addiu       $v0, $zero, 0x4E
    ctx->r2 = ADD32(0, 0X4E);
L_8022F398:
    // 0x8022F398: addiu       $v0, $zero, 0xF0
    ctx->r2 = ADD32(0, 0XF0);
L_8022F39C:
    // 0x8022F39C: sb          $v0, 0xB($a0)
    MEM_B(0XB, ctx->r4) = ctx->r2;
L_8022F3A0:
    // 0x8022F3A0: lbu         $v1, 0xB($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XB);
    // 0x8022F3A4: sltiu       $v0, $v1, 0x10
    ctx->r2 = ctx->r3 < 0X10 ? 1 : 0;
    // 0x8022F3A8: bne         $v0, $zero, L_8022F3C0
    if (ctx->r2 != 0) {
        // 0x8022F3AC: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_8022F3C0;
    }
    // 0x8022F3AC: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8022F3B0: jal         0x8004F5C4
    // 0x8022F3B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_1;
    // 0x8022F3B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022F3B8: j           L_8022F3C4
    // 0x8022F3BC: nop

        goto L_8022F3C4;
    // 0x8022F3BC: nop

L_8022F3C0:
    // 0x8022F3C0: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
L_8022F3C4:
    // 0x8022F3C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022F3C8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022F3CC: jr          $ra
    // 0x8022F3D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022F3D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022E180_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E180: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022E184: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022E188: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022E18C: jal         0x800A3450
    // 0x8022E190: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8022E190: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x8022E194: andi        $v0, $v0, 0x7F
    ctx->r2 = ctx->r2 & 0X7F;
    // 0x8022E198: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022E19C: jal         0x800A3450
    // 0x8022E1A0: sh          $v0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x8022E1A0: sh          $v0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022E1A4: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022E1A8: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x8022E1AC: jal         0x800A3450
    // 0x8022E1B0: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x8022E1B0: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    after_2:
    // 0x8022E1B4: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022E1B8: addiu       $v0, $v0, -0x8
    ctx->r2 = ADD32(ctx->r2, -0X8);
    // 0x8022E1BC: sh          $v0, 0x66($s0)
    MEM_H(0X66, ctx->r16) = ctx->r2;
    // 0x8022E1C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022E1C4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022E1C8: jr          $ra
    // 0x8022E1CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022E1CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802257E0_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802257E0: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x802257E4: lbu         $v0, -0x359C($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X359C);
    // 0x802257E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802257EC: bne         $v0, $zero, L_80225820
    if (ctx->r2 != 0) {
        // 0x802257F0: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_80225820;
    }
    // 0x802257F0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802257F4: jal         0x8006033C
    // 0x802257F8: addiu       $a0, $zero, 0x21B
    ctx->r4 = ADD32(0, 0X21B);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x802257F8: addiu       $a0, $zero, 0x21B
    ctx->r4 = ADD32(0, 0X21B);
    after_0:
    // 0x802257FC: beq         $v0, $zero, L_80225820
    if (ctx->r2 == 0) {
        // 0x80225800: nop
    
            goto L_80225820;
    }
    // 0x80225800: nop

    // 0x80225804: jal         0x8006033C
    // 0x80225808: addiu       $a0, $zero, 0x22A
    ctx->r4 = ADD32(0, 0X22A);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x80225808: addiu       $a0, $zero, 0x22A
    ctx->r4 = ADD32(0, 0X22A);
    after_1:
    // 0x8022580C: bne         $v0, $zero, L_80225820
    if (ctx->r2 != 0) {
        // 0x80225810: nop
    
            goto L_80225820;
    }
    // 0x80225810: nop

    // 0x80225814: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80225818: jal         0x8005FB30
    // 0x8022581C: addiu       $a0, $a0, 0x1B4C
    ctx->r4 = ADD32(ctx->r4, 0X1B4C);
    func_8005FB30_3AF30(rdram, ctx);
        goto after_2;
    // 0x8022581C: addiu       $a0, $a0, 0x1B4C
    ctx->r4 = ADD32(ctx->r4, 0X1B4C);
    after_2:
L_80225820:
    // 0x80225820: jal         0x8006036C
    // 0x80225824: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    func_8006036C_3B76C(rdram, ctx);
        goto after_3;
    // 0x80225824: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    after_3:
    // 0x80225828: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022582C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80225830: jr          $ra
    // 0x80225834: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225834: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022A438_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A438: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022A43C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A440: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A444: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022A448: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022A44C: lh          $a0, 0x34C($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X34C);
    // 0x8022A450: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x8022A454: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    // 0x8022A458: jal         0x8004FA7C
    // 0x8022A45C: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x8022A45C: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    after_0:
    // 0x8022A460: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8022A464: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x8022A468: beq         $v0, $zero, L_8022A4FC
    if (ctx->r2 == 0) {
        // 0x8022A46C: nop
    
            goto L_8022A4FC;
    }
    // 0x8022A46C: nop

    // 0x8022A470: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8022A474: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x8022A478: bne         $v0, $zero, L_8022A4FC
    if (ctx->r2 != 0) {
        // 0x8022A47C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022A4FC;
    }
    // 0x8022A47C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A480: lbu         $v1, 0x34A($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34A);
    // 0x8022A484: beq         $v1, $v0, L_8022A49C
    if (ctx->r3 == ctx->r2) {
        // 0x8022A488: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022A49C;
    }
    // 0x8022A488: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022A48C: beq         $v1, $v0, L_8022A4CC
    if (ctx->r3 == ctx->r2) {
        // 0x8022A490: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022A4CC;
    }
    // 0x8022A490: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8022A494: j           L_8022A4F0
    // 0x8022A498: nop

        goto L_8022A4F0;
    // 0x8022A498: nop

L_8022A49C:
    // 0x8022A49C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022A4A0: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x8022A4A4: bne         $v0, $zero, L_8022A4F0
    if (ctx->r2 != 0) {
        // 0x8022A4A8: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022A4F0;
    }
    // 0x8022A4A8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8022A4AC: slti        $v0, $v1, 0x6
    ctx->r2 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    // 0x8022A4B0: bne         $v0, $zero, L_8022A4F0
    if (ctx->r2 != 0) {
        // 0x8022A4B4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022A4F0;
    }
    // 0x8022A4B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A4B8: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022A4BC: bne         $v1, $v0, L_8022A4F0
    if (ctx->r3 != ctx->r2) {
        // 0x8022A4C0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022A4F0;
    }
    // 0x8022A4C0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8022A4C4: j           L_8022A4F0
    // 0x8022A4C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8022A4F0;
    // 0x8022A4C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022A4CC:
    // 0x8022A4CC: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022A4D0: slti        $v0, $v1, 0x6
    ctx->r2 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    // 0x8022A4D4: beq         $v0, $zero, L_8022A4EC
    if (ctx->r2 == 0) {
        // 0x8022A4D8: slti        $v0, $v1, 0x4
        ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
            goto L_8022A4EC;
    }
    // 0x8022A4D8: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x8022A4DC: bne         $v0, $zero, L_8022A4F0
    if (ctx->r2 != 0) {
        // 0x8022A4E0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022A4F0;
    }
    // 0x8022A4E0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8022A4E4: j           L_8022A4F0
    // 0x8022A4E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8022A4F0;
    // 0x8022A4E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022A4EC:
    // 0x8022A4EC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8022A4F0:
    // 0x8022A4F0: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022A4F4: beq         $v0, $zero, L_8022A520
    if (ctx->r2 == 0) {
        // 0x8022A4F8: nop
    
            goto L_8022A520;
    }
    // 0x8022A4F8: nop

L_8022A4FC:
    // 0x8022A4FC: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x8022A500: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022A504: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022A508: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022A50C: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x8022A510: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8022A514: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x8022A518: j           L_8022A530
    // 0x8022A51C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022A530;
    // 0x8022A51C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022A520:
    // 0x8022A520: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022A524: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8022A528: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022A52C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_8022A530:
    // 0x8022A530: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022A534: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022A538: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A53C: jr          $ra
    // 0x8022A540: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022A540: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80228D78_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228D78: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228D7C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80228D80: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80228D84: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80228D88: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80228D8C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80228D90: lw          $v0, 0x17BC($at)
    ctx->r2 = MEM_W(ctx->r1, 0X17BC);
    // 0x80228D94: jalr        $v0
    // 0x80228D98: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80228D98: nop

    after_0:
    // 0x80228D9C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80228DA0: jr          $ra
    // 0x80228DA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228DA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022FBC0_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FBC0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022FBC4: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8022FBC8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022FBCC: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8022FBD0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8022FBD4: lbu         $a2, 0x0($s1)
    ctx->r6 = MEM_BU(ctx->r17, 0X0);
    // 0x8022FBD8: lbu         $v1, 0x3($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X3);
    // 0x8022FBDC: ori         $v0, $a2, 0x2
    ctx->r2 = ctx->r6 | 0X2;
    // 0x8022FBE0: bne         $v1, $zero, L_8022FC3C
    if (ctx->r3 != 0) {
        // 0x8022FBE4: sb          $v0, 0x0($s1)
        MEM_B(0X0, ctx->r17) = ctx->r2;
            goto L_8022FC3C;
    }
    // 0x8022FBE4: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x8022FBE8: addiu       $a1, $s1, 0x3
    ctx->r5 = ADD32(ctx->r17, 0X3);
    // 0x8022FBEC: ori         $v0, $a2, 0x6
    ctx->r2 = ctx->r6 | 0X6;
    // 0x8022FBF0: jal         0x8004D5D4
    // 0x8022FBF4: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8022FBF4: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    after_0:
    // 0x8022FBF8: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x8022FBFC: jal         0x8002C654
    // 0x8022FC00: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8002C654_7A54(rdram, ctx);
        goto after_1;
    // 0x8022FC00: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022FC04: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022FC08: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x8022FC0C: addiu       $v0, $zero, 0x300
    ctx->r2 = ADD32(0, 0X300);
    // 0x8022FC10: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8022FC14: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022FC18: jal         0x80031DA8
    // 0x8022FC1C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_2;
    // 0x8022FC1C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_2:
    // 0x8022FC20: addiu       $a0, $zero, 0x400
    ctx->r4 = ADD32(0, 0X400);
    // 0x8022FC24: jal         0x800317C0
    // 0x8022FC28: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_800317C0_CBC0(rdram, ctx);
        goto after_3;
    // 0x8022FC28: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022FC2C: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x8022FC30: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x8022FC34: j           L_8022FE08
    // 0x8022FC38: sw          $v0, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->r2;
        goto L_8022FE08;
    // 0x8022FC38: sw          $v0, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->r2;
L_8022FC3C:
    // 0x8022FC3C: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022FC40: lb          $v0, 0x1B98($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X1B98);
    // 0x8022FC44: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022FC48: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x8022FC4C: beq         $v0, $v1, L_8022FC8C
    if (ctx->r2 == ctx->r3) {
        // 0x8022FC50: addu        $t0, $zero, $zero
        ctx->r8 = ADD32(0, 0);
            goto L_8022FC8C;
    }
    // 0x8022FC50: addu        $t0, $zero, $zero
    ctx->r8 = ADD32(0, 0);
    // 0x8022FC54: andi        $v0, $t0, 0xFF
    ctx->r2 = ctx->r8 & 0XFF;
L_8022FC58:
    // 0x8022FC58: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022FC5C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022FC60: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022FC64: lb          $v0, 0x1B98($at)
    ctx->r2 = MEM_B(ctx->r1, 0X1B98);
    // 0x8022FC68: bltz        $v0, L_8022FDA0
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022FC6C: addiu       $t0, $t0, 0x1
        ctx->r8 = ADD32(ctx->r8, 0X1);
            goto L_8022FDA0;
    }
    // 0x8022FC6C: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x8022FC70: andi        $v0, $t0, 0xFF
    ctx->r2 = ctx->r8 & 0XFF;
    // 0x8022FC74: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022FC78: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022FC7C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022FC80: lb          $v0, 0x1B98($at)
    ctx->r2 = MEM_B(ctx->r1, 0X1B98);
    // 0x8022FC84: bne         $v0, $v1, L_8022FC58
    if (ctx->r2 != ctx->r3) {
        // 0x8022FC88: andi        $v0, $t0, 0xFF
        ctx->r2 = ctx->r8 & 0XFF;
            goto L_8022FC58;
    }
    // 0x8022FC88: andi        $v0, $t0, 0xFF
    ctx->r2 = ctx->r8 & 0XFF;
L_8022FC8C:
    // 0x8022FC8C: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x8022FC90: lbu         $v1, 0x3($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X3);
    // 0x8022FC94: lhu         $a0, 0x3A($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X3A);
    // 0x8022FC98: ori         $v0, $v0, 0x28
    ctx->r2 = ctx->r2 | 0X28;
    // 0x8022FC9C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8022FCA0: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x8022FCA4: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x8022FCA8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022FCAC: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8022FCB0: lbu         $v1, 0x1BB8($at)
    ctx->r3 = MEM_BU(ctx->r1, 0X1BB8);
    // 0x8022FCB4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022FCB8: sb          $v1, 0x22($s1)
    MEM_B(0X22, ctx->r17) = ctx->r3;
    // 0x8022FCBC: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x8022FCC0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022FCC4: lbu         $v1, 0x1BB9($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X1BB9);
    // 0x8022FCC8: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x8022FCCC: lhu         $a1, 0x3C($s1)
    ctx->r5 = MEM_HU(ctx->r17, 0X3C);
    // 0x8022FCD0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022FCD4: sb          $v1, 0x23($s1)
    MEM_B(0X23, ctx->r17) = ctx->r3;
    // 0x8022FCD8: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x8022FCDC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022FCE0: lbu         $v1, 0x1BBA($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X1BBA);
    // 0x8022FCE4: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x8022FCE8: lbu         $a2, 0x3($s1)
    ctx->r6 = MEM_BU(ctx->r17, 0X3);
    // 0x8022FCEC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022FCF0: sh          $v1, 0x24($s1)
    MEM_H(0X24, ctx->r17) = ctx->r3;
    // 0x8022FCF4: lui         $a3, 0x8023
    ctx->r7 = S32(0X8023 << 16);
    // 0x8022FCF8: addu        $a3, $a3, $v0
    ctx->r7 = ADD32(ctx->r7, ctx->r2);
    // 0x8022FCFC: lbu         $a3, 0x1BBB($a3)
    ctx->r7 = MEM_BU(ctx->r7, 0X1BBB);
    // 0x8022FD00: lhu         $v1, 0x38($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X38);
    // 0x8022FD04: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x8022FD08: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x8022FD0C: sw          $v0, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r2;
    // 0x8022FD10: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022FD14: sh          $a0, 0x1E($s1)
    MEM_H(0X1E, ctx->r17) = ctx->r4;
    // 0x8022FD18: sh          $a1, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r5;
    // 0x8022FD1C: sh          $v1, 0x1C($s1)
    MEM_H(0X1C, ctx->r17) = ctx->r3;
    // 0x8022FD20: beq         $a2, $v0, L_8022FDB0
    if (ctx->r6 == ctx->r2) {
        // 0x8022FD24: sh          $a3, 0x26($s1)
        MEM_H(0X26, ctx->r17) = ctx->r7;
            goto L_8022FDB0;
    }
    // 0x8022FD24: sh          $a3, 0x26($s1)
    MEM_H(0X26, ctx->r17) = ctx->r7;
    // 0x8022FD28: andi        $v0, $t0, 0xFF
    ctx->r2 = ctx->r8 & 0XFF;
    // 0x8022FD2C: sll         $a1, $v0, 3
    ctx->r5 = S32(ctx->r2 << 3);
    // 0x8022FD30: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022FD34: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x8022FD38: lh          $v0, 0x1B9E($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X1B9E);
    // 0x8022FD3C: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x8022FD40: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x8022FD44: lh          $v1, 0x1B9C($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X1B9C);
    // 0x8022FD48: bgez        $v1, L_8022FD54
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8022FD4C: sll         $v0, $v0, 6
        ctx->r2 = S32(ctx->r2 << 6);
            goto L_8022FD54;
    }
    // 0x8022FD4C: sll         $v0, $v0, 6
    ctx->r2 = S32(ctx->r2 << 6);
    // 0x8022FD50: addiu       $v1, $v1, 0xF
    ctx->r3 = ADD32(ctx->r3, 0XF);
L_8022FD54:
    // 0x8022FD54: sra         $v1, $v1, 4
    ctx->r3 = S32(SIGNED(ctx->r3) >> 4);
    // 0x8022FD58: or          $v1, $v0, $v1
    ctx->r3 = ctx->r2 | ctx->r3;
    // 0x8022FD5C: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022FD60: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x8022FD64: lbu         $v0, 0x1B99($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1B99);
    // 0x8022FD68: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022FD6C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8022FD70: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    // 0x8022FD74: lbu         $a0, 0x1B9A($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X1B9A);
    // 0x8022FD78: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022FD7C: addu        $at, $at, $a1
    ctx->r1 = ADD32(ctx->r1, ctx->r5);
    // 0x8022FD80: lbu         $a1, 0x1B9B($at)
    ctx->r5 = MEM_BU(ctx->r1, 0X1B9B);
    // 0x8022FD84: sll         $v0, $v0, 7
    ctx->r2 = S32(ctx->r2 << 7);
    // 0x8022FD88: sll         $a0, $a0, 5
    ctx->r4 = S32(ctx->r4 << 5);
    // 0x8022FD8C: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x8022FD90: or          $v0, $v0, $a1
    ctx->r2 = ctx->r2 | ctx->r5;
    // 0x8022FD94: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8022FD98: j           L_8022FE08
    // 0x8022FD9C: sw          $v1, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r3;
        goto L_8022FE08;
    // 0x8022FD9C: sw          $v1, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r3;
L_8022FDA0:
    // 0x8022FDA0: jal         0x8004F684
    // 0x8022FDA4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F684_2AA84(rdram, ctx);
        goto after_4;
    // 0x8022FDA4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_4:
    // 0x8022FDA8: j           L_8022FE28
    // 0x8022FDAC: nop

        goto L_8022FE28;
    // 0x8022FDAC: nop

L_8022FDB0:
    // 0x8022FDB0: andi        $v1, $t0, 0xFF
    ctx->r3 = ctx->r8 & 0XFF;
    // 0x8022FDB4: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x8022FDB8: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022FDBC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022FDC0: lbu         $v0, 0x1B99($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1B99);
    // 0x8022FDC4: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8022FDC8: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x8022FDCC: lbu         $a0, 0x1B9A($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X1B9A);
    // 0x8022FDD0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022FDD4: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8022FDD8: lbu         $v1, 0x1B9B($at)
    ctx->r3 = MEM_BU(ctx->r1, 0X1B9B);
    // 0x8022FDDC: lhu         $a1, 0x24($s1)
    ctx->r5 = MEM_HU(ctx->r17, 0X24);
    // 0x8022FDE0: sll         $v0, $v0, 7
    ctx->r2 = S32(ctx->r2 << 7);
    // 0x8022FDE4: sll         $a0, $a0, 5
    ctx->r4 = S32(ctx->r4 << 5);
    // 0x8022FDE8: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x8022FDEC: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8022FDF0: lhu         $a0, 0x1E($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X1E);
    // 0x8022FDF4: lui         $v1, 0x3EC0
    ctx->r3 = S32(0X3EC0 << 16);
    // 0x8022FDF8: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8022FDFC: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    // 0x8022FE00: subu        $a0, $a0, $a1
    ctx->r4 = SUB32(ctx->r4, ctx->r5);
    // 0x8022FE04: sh          $a0, 0x1E($s1)
    MEM_H(0X1E, ctx->r17) = ctx->r4;
L_8022FE08:
    // 0x8022FE08: lbu         $v1, 0x8($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X8);
    // 0x8022FE0C: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022FE10: addiu       $v0, $v0, 0x1B2C
    ctx->r2 = ADD32(ctx->r2, 0X1B2C);
    // 0x8022FE14: sw          $v0, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r2;
    // 0x8022FE18: sw          $zero, 0x4C($s1)
    MEM_W(0X4C, ctx->r17) = 0;
    // 0x8022FE1C: sw          $zero, 0x50($s1)
    MEM_W(0X50, ctx->r17) = 0;
    // 0x8022FE20: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022FE24: sb          $v1, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r3;
L_8022FE28:
    // 0x8022FE28: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8022FE2C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8022FE30: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8022FE34: jr          $ra
    // 0x8022FE38: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022FE38: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80227030_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227030: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227034: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80227038: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x8022703C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80227040: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227044: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80227048: lw          $v0, 0x1184($at)
    ctx->r2 = MEM_W(ctx->r1, 0X1184);
    // 0x8022704C: jalr        $v0
    // 0x80227050: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80227050: nop

    after_0:
    // 0x80227054: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80227058: jr          $ra
    // 0x8022705C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022705C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022ADA0_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022ADA0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022ADA4: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    // 0x8022ADA8: addiu       $v0, $zero, 0x2A
    ctx->r2 = ADD32(0, 0X2A);
    // 0x8022ADAC: beq         $a0, $v0, L_8022AE14
    if (ctx->r4 == ctx->r2) {
        // 0x8022ADB0: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_8022AE14;
    }
    // 0x8022ADB0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022ADB4: slti        $v0, $a0, 0x2B
    ctx->r2 = SIGNED(ctx->r4) < 0X2B ? 1 : 0;
    // 0x8022ADB8: beql        $v0, $zero, L_8022ADD8
    if (ctx->r2 == 0) {
        // 0x8022ADBC: addiu       $v0, $zero, 0x50
        ctx->r2 = ADD32(0, 0X50);
            goto L_8022ADD8;
    }
    goto skip_0;
    // 0x8022ADBC: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    skip_0:
    // 0x8022ADC0: beq         $a0, $zero, L_8022AE0C
    if (ctx->r4 == 0) {
        // 0x8022ADC4: addiu       $v0, $zero, 0x11
        ctx->r2 = ADD32(0, 0X11);
            goto L_8022AE0C;
    }
    // 0x8022ADC4: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x8022ADC8: beq         $a0, $v0, L_8022AE2C
    if (ctx->r4 == ctx->r2) {
        // 0x8022ADCC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022AE2C;
    }
    // 0x8022ADCC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022ADD0: j           L_8022AE2C
    // 0x8022ADD4: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_8022AE2C;
    // 0x8022ADD4: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_8022ADD8:
    // 0x8022ADD8: beq         $a0, $v0, L_8022AE0C
    if (ctx->r4 == ctx->r2) {
        // 0x8022ADDC: slti        $v0, $a0, 0x51
        ctx->r2 = SIGNED(ctx->r4) < 0X51 ? 1 : 0;
            goto L_8022AE0C;
    }
    // 0x8022ADDC: slti        $v0, $a0, 0x51
    ctx->r2 = SIGNED(ctx->r4) < 0X51 ? 1 : 0;
    // 0x8022ADE0: beq         $v0, $zero, L_8022ADF8
    if (ctx->r2 == 0) {
        // 0x8022ADE4: addiu       $v0, $zero, 0x39
        ctx->r2 = ADD32(0, 0X39);
            goto L_8022ADF8;
    }
    // 0x8022ADE4: addiu       $v0, $zero, 0x39
    ctx->r2 = ADD32(0, 0X39);
    // 0x8022ADE8: beq         $a0, $v0, L_8022AE2C
    if (ctx->r4 == ctx->r2) {
        // 0x8022ADEC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022AE2C;
    }
    // 0x8022ADEC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8022ADF0: j           L_8022AE2C
    // 0x8022ADF4: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_8022AE2C;
    // 0x8022ADF4: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_8022ADF8:
    // 0x8022ADF8: addiu       $v0, $zero, 0x53
    ctx->r2 = ADD32(0, 0X53);
    // 0x8022ADFC: beq         $a0, $v0, L_8022AE1C
    if (ctx->r4 == ctx->r2) {
        // 0x8022AE00: nop
    
            goto L_8022AE1C;
    }
    // 0x8022AE00: nop

    // 0x8022AE04: j           L_8022AE2C
    // 0x8022AE08: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_8022AE2C;
    // 0x8022AE08: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_8022AE0C:
    // 0x8022AE0C: j           L_8022AE2C
    // 0x8022AE10: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_8022AE2C;
    // 0x8022AE10: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8022AE14:
    // 0x8022AE14: j           L_8022AE2C
    // 0x8022AE18: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
        goto L_8022AE2C;
    // 0x8022AE18: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
L_8022AE1C:
    // 0x8022AE1C: jal         0x800A3450
    // 0x8022AE20: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8022AE20: nop

    after_0:
    // 0x8022AE24: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022AE28: ori         $v0, $v0, 0x8
    ctx->r2 = ctx->r2 | 0X8;
L_8022AE2C:
    // 0x8022AE2C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022AE30: jr          $ra
    // 0x8022AE34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022AE34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022FA04_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FA04: jr          $ra
    // 0x8022FA08: nop

    TRACE_RETURN()
    return;
    // 0x8022FA08: nop

;}
RECOMP_FUNC void func_8022602C_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022602C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80226030: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80226034: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226038: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x8022603C: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x80226040: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80226044: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80226048: lh          $v1, 0x44($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X44);
    // 0x8022604C: addiu       $s2, $s0, 0xD0
    ctx->r18 = ADD32(ctx->r16, 0XD0);
    // 0x80226050: addiu       $v0, $zero, 0x140
    ctx->r2 = ADD32(0, 0X140);
    // 0x80226054: beq         $v1, $v0, L_80226068
    if (ctx->r3 == ctx->r2) {
        // 0x80226058: addu        $a0, $v1, $zero
        ctx->r4 = ADD32(ctx->r3, 0);
            goto L_80226068;
    }
    // 0x80226058: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x8022605C: lhu         $v0, 0x4C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4C);
    // 0x80226060: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x80226064: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
L_80226068:
    // 0x80226068: lh          $v1, 0x56($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X56);
    // 0x8022606C: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x80226070: beq         $v1, $v0, L_80226098
    if (ctx->r3 == ctx->r2) {
        // 0x80226074: addu        $a0, $v1, $zero
        ctx->r4 = ADD32(ctx->r3, 0);
            goto L_80226098;
    }
    // 0x80226074: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x80226078: addiu       $v0, $a0, -0xA
    ctx->r2 = ADD32(ctx->r4, -0XA);
    // 0x8022607C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80226080: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80226084: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80226088: slti        $v0, $v0, 0x800
    ctx->r2 = SIGNED(ctx->r2) < 0X800 ? 1 : 0;
    // 0x8022608C: beq         $v0, $zero, L_80226098
    if (ctx->r2 == 0) {
        // 0x80226090: addiu       $v0, $zero, 0x800
        ctx->r2 = ADD32(0, 0X800);
            goto L_80226098;
    }
    // 0x80226090: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x80226094: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_80226098:
    // 0x80226098: addiu       $s3, $s0, 0x14
    ctx->r19 = ADD32(ctx->r16, 0X14);
    // 0x8022609C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x802260A0: lh          $a3, 0x44($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X44);
    // 0x802260A4: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x802260A8: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x802260AC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802260B0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x802260B4: jal         0x8004DBA0
    // 0x802260B8: addiu       $a2, $a2, 0x800
    ctx->r6 = ADD32(ctx->r6, 0X800);
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_0;
    // 0x802260B8: addiu       $a2, $a2, 0x800
    ctx->r6 = ADD32(ctx->r6, 0X800);
    after_0:
    // 0x802260BC: jal         0x8003F754
    // 0x802260C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003F754_1AB54(rdram, ctx);
        goto after_1;
    // 0x802260C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x802260C4: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x802260C8: beq         $s1, $zero, L_80226100
    if (ctx->r17 == 0) {
        // 0x802260CC: nop
    
            goto L_80226100;
    }
    // 0x802260CC: nop

    // 0x802260D0: jal         0x800715F8
    // 0x802260D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800715F8_4C9F8(rdram, ctx);
        goto after_2;
    // 0x802260D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x802260D8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802260DC: jal         0x800711A8
    // 0x802260E0: ori         $a1, $zero, 0x8000
    ctx->r5 = 0 | 0X8000;
    func_800711A8_4C5A8(rdram, ctx);
        goto after_3;
    // 0x802260E0: ori         $a1, $zero, 0x8000
    ctx->r5 = 0 | 0X8000;
    after_3:
    // 0x802260E4: jal         0x8006036C
    // 0x802260E8: addiu       $a0, $zero, 0x30
    ctx->r4 = ADD32(0, 0X30);
    func_8006036C_3B76C(rdram, ctx);
        goto after_4;
    // 0x802260E8: addiu       $a0, $zero, 0x30
    ctx->r4 = ADD32(0, 0X30);
    after_4:
    // 0x802260EC: jal         0x8006036C
    // 0x802260F0: addiu       $a0, $zero, 0x31C
    ctx->r4 = ADD32(0, 0X31C);
    func_8006036C_3B76C(rdram, ctx);
        goto after_5;
    // 0x802260F0: addiu       $a0, $zero, 0x31C
    ctx->r4 = ADD32(0, 0X31C);
    after_5:
    // 0x802260F4: addiu       $a0, $zero, 0x17F
    ctx->r4 = ADD32(0, 0X17F);
    // 0x802260F8: jal         0x8002A33C
    // 0x802260FC: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_6;
    // 0x802260FC: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_6:
L_80226100:
    // 0x80226100: lbu         $a1, 0x20($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X20);
    // 0x80226104: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80226108: lui         $s1, 0x8023
    ctx->r17 = S32(0X8023 << 16);
    // 0x8022610C: addiu       $s1, $s1, 0xC58
    ctx->r17 = ADD32(ctx->r17, 0XC58);
    // 0x80226110: sll         $a1, $a1, 3
    ctx->r5 = S32(ctx->r5 << 3);
    // 0x80226114: jal         0x8004DE68
    // 0x80226118: addu        $a1, $a1, $s1
    ctx->r5 = ADD32(ctx->r5, ctx->r17);
    func_8004DE68_29268(rdram, ctx);
        goto after_7;
    // 0x80226118: addu        $a1, $a1, $s1
    ctx->r5 = ADD32(ctx->r5, ctx->r17);
    after_7:
    // 0x8022611C: sw          $v0, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->r2;
    // 0x80226120: slti        $v0, $v0, 0x25D
    ctx->r2 = SIGNED(ctx->r2) < 0X25D ? 1 : 0;
    // 0x80226124: beq         $v0, $zero, L_80226164
    if (ctx->r2 == 0) {
        // 0x80226128: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_80226164;
    }
    // 0x80226128: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x8022612C: lbu         $a1, 0x20($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X20);
    // 0x80226130: addiu       $v0, $s1, -0x8
    ctx->r2 = ADD32(ctx->r17, -0X8);
    // 0x80226134: sll         $a1, $a1, 3
    ctx->r5 = S32(ctx->r5 << 3);
    // 0x80226138: jal         0x8004DE68
    // 0x8022613C: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    func_8004DE68_29268(rdram, ctx);
        goto after_8;
    // 0x8022613C: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    after_8:
    // 0x80226140: sw          $v0, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->r2;
    // 0x80226144: sw          $v0, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r2;
    // 0x80226148: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022614C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80226150: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x80226154: sb          $v0, 0x21($s2)
    MEM_B(0X21, ctx->r18) = ctx->r2;
    // 0x80226158: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x8022615C: sh          $v0, 0x1E($s2)
    MEM_H(0X1E, ctx->r18) = ctx->r2;
    // 0x80226160: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
L_80226164:
    // 0x80226164: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x80226168: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x8022616C: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80226170: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80226174: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80226178: jr          $ra
    // 0x8022617C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8022617C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8022D558_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D558: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022D55C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8022D560: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022D564: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8022D568: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8022D56C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8022D570: lb          $v0, 0x36C($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X36C);
    // 0x8022D574: addiu       $s1, $s0, 0x308
    ctx->r17 = ADD32(ctx->r16, 0X308);
    // 0x8022D578: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x8022D57C: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x8022D580: beq         $v0, $zero, L_8022D590
    if (ctx->r2 == 0) {
        // 0x8022D584: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022D590;
    }
    // 0x8022D584: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022D588: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022D58C: sb          $v0, 0x36C($s0)
    MEM_B(0X36C, ctx->r16) = ctx->r2;
L_8022D590:
    // 0x8022D590: lbu         $a0, 0x36A($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X36A);
    // 0x8022D594: andi        $v0, $a0, 0x10
    ctx->r2 = ctx->r4 & 0X10;
    // 0x8022D598: bne         $v0, $zero, L_8022D5CC
    if (ctx->r2 != 0) {
        // 0x8022D59C: lui         $a1, 0xFFFF
        ctx->r5 = S32(0XFFFF << 16);
            goto L_8022D5CC;
    }
    // 0x8022D59C: lui         $a1, 0xFFFF
    ctx->r5 = S32(0XFFFF << 16);
    // 0x8022D5A0: lbu         $v1, 0x36B($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X36B);
    // 0x8022D5A4: bne         $v1, $zero, L_8022D5B8
    if (ctx->r3 != 0) {
        // 0x8022D5A8: addiu       $v1, $v1, -0x1
        ctx->r3 = ADD32(ctx->r3, -0X1);
            goto L_8022D5B8;
    }
    // 0x8022D5A8: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8022D5AC: andi        $v0, $a0, 0xEF
    ctx->r2 = ctx->r4 & 0XEF;
    // 0x8022D5B0: j           L_8022D664
    // 0x8022D5B4: sb          $v0, 0x36A($s0)
    MEM_B(0X36A, ctx->r16) = ctx->r2;
        goto L_8022D664;
    // 0x8022D5B4: sb          $v0, 0x36A($s0)
    MEM_B(0X36A, ctx->r16) = ctx->r2;
L_8022D5B8:
    // 0x8022D5B8: lbu         $v0, 0x36A($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X36A);
    // 0x8022D5BC: sb          $v1, 0x36B($s0)
    MEM_B(0X36B, ctx->r16) = ctx->r3;
    // 0x8022D5C0: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
    // 0x8022D5C4: j           L_8022D664
    // 0x8022D5C8: sb          $v0, 0x36A($s0)
    MEM_B(0X36A, ctx->r16) = ctx->r2;
        goto L_8022D664;
    // 0x8022D5C8: sb          $v0, 0x36A($s0)
    MEM_B(0X36A, ctx->r16) = ctx->r2;
L_8022D5CC:
    // 0x8022D5CC: ori         $a1, $a1, 0x7FFF
    ctx->r5 = ctx->r5 | 0X7FFF;
    // 0x8022D5D0: lui         $a0, 0xA1
    ctx->r4 = S32(0XA1 << 16);
    // 0x8022D5D4: lw          $v1, 0x80($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X80);
    // 0x8022D5D8: ori         $a0, $a0, 0x7FFE
    ctx->r4 = ctx->r4 | 0X7FFE;
    // 0x8022D5DC: addiu       $v0, $zero, 0xB4
    ctx->r2 = ADD32(0, 0XB4);
    // 0x8022D5E0: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x8022D5E4: sltu        $a0, $a0, $v1
    ctx->r4 = ctx->r4 < ctx->r3 ? 1 : 0;
    // 0x8022D5E8: bne         $a0, $zero, L_8022D664
    if (ctx->r4 != 0) {
        // 0x8022D5EC: sb          $v0, 0x36B($s0)
        MEM_B(0X36B, ctx->r16) = ctx->r2;
            goto L_8022D664;
    }
    // 0x8022D5EC: sb          $v0, 0x36B($s0)
    MEM_B(0X36B, ctx->r16) = ctx->r2;
    // 0x8022D5F0: addiu       $a0, $s2, 0xC4
    ctx->r4 = ADD32(ctx->r18, 0XC4);
    // 0x8022D5F4: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    // 0x8022D5F8: jal         0x8009A3B4
    // 0x8022D5FC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022D5FC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8022D600: addiu       $a0, $s0, 0xC4
    ctx->r4 = ADD32(ctx->r16, 0XC4);
    // 0x8022D604: addiu       $a1, $s0, 0x190
    ctx->r5 = ADD32(ctx->r16, 0X190);
    // 0x8022D608: jal         0x8009A3B4
    // 0x8022D60C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022D60C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x8022D610: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D614: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022D618: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022D61C: lhu         $v1, 0x322($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X322);
    // 0x8022D620: addiu       $a2, $s0, 0x34C
    ctx->r6 = ADD32(ctx->r16, 0X34C);
    // 0x8022D624: addiu       $a3, $s0, 0x354
    ctx->r7 = ADD32(ctx->r16, 0X354);
    // 0x8022D628: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022D62C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D630: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022D634: jal         0x8004E150
    // 0x8022D638: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_8004E150_29550(rdram, ctx);
        goto after_2;
    // 0x8022D638: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_2:
    // 0x8022D63C: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022D640: beq         $v0, $zero, L_8022D664
    if (ctx->r2 == 0) {
        // 0x8022D644: nop
    
            goto L_8022D664;
    }
    // 0x8022D644: nop

    // 0x8022D648: lb          $v0, 0x36C($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X36C);
    // 0x8022D64C: bne         $v0, $zero, L_8022D664
    if (ctx->r2 != 0) {
        // 0x8022D650: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022D664;
    }
    // 0x8022D650: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022D654: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022D658: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022D65C: sb          $zero, 0x36E($s0)
    MEM_B(0X36E, ctx->r16) = 0;
    // 0x8022D660: sb          $v0, 0x36D($s0)
    MEM_B(0X36D, ctx->r16) = ctx->r2;
L_8022D664:
    // 0x8022D664: lbu         $v0, 0x62($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X62);
    // 0x8022D668: andi        $v0, $v0, 0x14
    ctx->r2 = ctx->r2 & 0X14;
    // 0x8022D66C: beq         $v0, $zero, L_8022D6A8
    if (ctx->r2 == 0) {
        // 0x8022D670: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022D6A8;
    }
    // 0x8022D670: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022D674: lhu         $a2, 0x56($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X56);
    // 0x8022D678: lhu         $v0, 0x1A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X1A);
    // 0x8022D67C: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    // 0x8022D680: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    // 0x8022D684: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x8022D688: jal         0x8004F820
    // 0x8022D68C: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x8022D68C: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_3:
    // 0x8022D690: lhu         $v1, 0x1A($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X1A);
    // 0x8022D694: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D698: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022D69C: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022D6A0: jal         0x8022DB00
    // 0x8022D6A4: sh          $v1, 0x1A($s1)
    MEM_H(0X1A, ctx->r17) = ctx->r3;
    func_8022DB00_ovl14(rdram, ctx);
        goto after_4;
    // 0x8022D6A4: sh          $v1, 0x1A($s1)
    MEM_H(0X1A, ctx->r17) = ctx->r3;
    after_4:
L_8022D6A8:
    // 0x8022D6A8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8022D6AC: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8022D6B0: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8022D6B4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8022D6B8: jr          $ra
    // 0x8022D6BC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022D6BC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80225510_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225510: jr          $ra
    // 0x80225514: nop

    TRACE_RETURN()
    return;
    // 0x80225514: nop

;}
RECOMP_FUNC void func_80228DFC_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228DFC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80228E00: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80228E04: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80228E08: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80228E0C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80228E10: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80228E14: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228E18: lbu         $s0, 0xD($s1)
    ctx->r16 = MEM_BU(ctx->r17, 0XD);
    // 0x80228E1C: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80228E20: addiu       $v0, $v0, 0x17E8
    ctx->r2 = ADD32(ctx->r2, 0X17E8);
    // 0x80228E24: andi        $s0, $s0, 0x30
    ctx->r16 = ctx->r16 & 0X30;
    // 0x80228E28: jal         0x800A3450
    // 0x80228E2C: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x80228E2C: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    after_0:
    // 0x80228E30: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80228E34: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x80228E38: lbu         $s3, 0x0($s0)
    ctx->r19 = MEM_BU(ctx->r16, 0X0);
    // 0x80228E3C: lui         $s0, 0x8023
    ctx->r16 = S32(0X8023 << 16);
    // 0x80228E40: addiu       $s0, $s0, 0x1828
    ctx->r16 = ADD32(ctx->r16, 0X1828);
    // 0x80228E44: andi        $v1, $s3, 0xFF
    ctx->r3 = ctx->r19 & 0XFF;
    // 0x80228E48: beq         $v1, $zero, L_80228E64
    if (ctx->r3 == 0) {
        // 0x80228E4C: addiu       $s2, $s1, 0x348
        ctx->r18 = ADD32(ctx->r17, 0X348);
            goto L_80228E64;
    }
    // 0x80228E4C: addiu       $s2, $s1, 0x348
    ctx->r18 = ADD32(ctx->r17, 0X348);
    // 0x80228E50: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228E54: beq         $v1, $v0, L_80228E84
    if (ctx->r3 == ctx->r2) {
        // 0x80228E58: nop
    
            goto L_80228E84;
    }
    // 0x80228E58: nop

    // 0x80228E5C: j           L_80228E98
    // 0x80228E60: nop

        goto L_80228E98;
    // 0x80228E60: nop

L_80228E64:
    // 0x80228E64: jal         0x8022AE48
    // 0x80228E68: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    func_8022AE48_ovl14(rdram, ctx);
        goto after_1;
    // 0x80228E68: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    after_1:
    // 0x80228E6C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80228E70: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80228E74: jal         0x8022AE88
    // 0x80228E78: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    func_8022AE88_ovl14(rdram, ctx);
        goto after_2;
    // 0x80228E78: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    after_2:
    // 0x80228E7C: j           L_80228EF0
    // 0x80228E80: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
        goto L_80228EF0;
    // 0x80228E80: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
L_80228E84:
    // 0x80228E84: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    // 0x80228E88: jal         0x8022AE38
    // 0x80228E8C: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    func_8022AE38_ovl14(rdram, ctx);
        goto after_3;
    // 0x80228E8C: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    after_3:
    // 0x80228E90: j           L_80228EF0
    // 0x80228E94: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
        goto L_80228EF0;
    // 0x80228E94: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
L_80228E98:
    // 0x80228E98: lh          $v1, 0x16($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X16);
    // 0x80228E9C: lh          $v0, 0x1E($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X1E);
    // 0x80228EA0: bne         $v1, $v0, L_80228EB0
    if (ctx->r3 != ctx->r2) {
        // 0x80228EA4: nop
    
            goto L_80228EB0;
    }
    // 0x80228EA4: nop

    // 0x80228EA8: j           L_80228EF0
    // 0x80228EAC: addiu       $s3, $zero, 0xFF
    ctx->r19 = ADD32(0, 0XFF);
        goto L_80228EF0;
    // 0x80228EAC: addiu       $s3, $zero, 0xFF
    ctx->r19 = ADD32(0, 0XFF);
L_80228EB0:
    // 0x80228EB0: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    // 0x80228EB4: jal         0x8022AE48
    // 0x80228EB8: nop

    func_8022AE48_ovl14(rdram, ctx);
        goto after_4;
    // 0x80228EB8: nop

    after_4:
    // 0x80228EBC: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x80228EC0: lh          $v0, 0x14($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X14);
    // 0x80228EC4: beq         $v0, $zero, L_80228ED8
    if (ctx->r2 == 0) {
        // 0x80228EC8: nop
    
            goto L_80228ED8;
    }
    // 0x80228EC8: nop

    // 0x80228ECC: lhu         $v0, 0xA($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0XA);
    // 0x80228ED0: j           L_80228EE8
    // 0x80228ED4: sh          $v0, 0x64($s1)
    MEM_H(0X64, ctx->r17) = ctx->r2;
        goto L_80228EE8;
    // 0x80228ED4: sh          $v0, 0x64($s1)
    MEM_H(0X64, ctx->r17) = ctx->r2;
L_80228ED8:
    // 0x80228ED8: lhu         $v0, 0xA($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0XA);
    // 0x80228EDC: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x80228EE0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80228EE4: sh          $v0, 0x64($s1)
    MEM_H(0X64, ctx->r17) = ctx->r2;
L_80228EE8:
    // 0x80228EE8: lui         $s0, 0x8023
    ctx->r16 = S32(0X8023 << 16);
    // 0x80228EEC: addiu       $s0, $s0, 0x1848
    ctx->r16 = ADD32(ctx->r16, 0X1848);
L_80228EF0:
    // 0x80228EF0: jal         0x800A3450
    // 0x80228EF4: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_5;
    // 0x80228EF4: nop

    after_5:
    // 0x80228EF8: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80228EFC: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x80228F00: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80228F04: andi        $v1, $s3, 0xFF
    ctx->r3 = ctx->r19 & 0XFF;
    // 0x80228F08: sh          $v0, 0x8($s2)
    MEM_H(0X8, ctx->r18) = ctx->r2;
    // 0x80228F0C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80228F10: beq         $v1, $v0, L_80228F28
    if (ctx->r3 == ctx->r2) {
        // 0x80228F14: nop
    
            goto L_80228F28;
    }
    // 0x80228F14: nop

    // 0x80228F18: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80228F1C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228F20: addu        $v0, $s3, $v0
    ctx->r2 = ADD32(ctx->r19, ctx->r2);
    // 0x80228F24: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_80228F28:
    // 0x80228F28: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80228F2C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80228F30: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80228F34: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80228F38: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228F3C: jr          $ra
    // 0x80228F40: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80228F40: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022A8E4_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A8E4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022A8E8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A8EC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022A8F0: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x8022A8F4: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x8022A8F8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022A8FC: jal         0x8003516C
    // 0x8022A900: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8003516C_1056C(rdram, ctx);
        goto after_0;
    // 0x8022A900: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x8022A904: bne         $v0, $zero, L_8022A928
    if (ctx->r2 != 0) {
        // 0x8022A908: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022A928;
    }
    // 0x8022A908: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022A90C: lbu         $a3, 0xC($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XC);
    // 0x8022A910: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x8022A914: jal         0x800610AC
    // 0x8022A918: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_1;
    // 0x8022A918: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x8022A91C: lbu         $v0, 0x34B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X34B);
    // 0x8022A920: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022A924: sb          $v0, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r2;
L_8022A928:
    // 0x8022A928: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022A92C: lh          $a3, 0x34E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X34E);
    // 0x8022A930: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022A934: jal         0x8004F820
    // 0x8022A938: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x8022A938: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_2:
    // 0x8022A93C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022A940: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8022A944: sb          $a0, 0x11B($s0)
    MEM_B(0X11B, ctx->r16) = ctx->r4;
    // 0x8022A948: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022A94C: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022A950: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022A954: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022A958: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022A95C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A960: jr          $ra
    // 0x8022A964: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022A964: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022A760_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A760: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022A764: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022A768: lbu         $v0, 0x34B($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X34B);
    // 0x8022A76C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022A770: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022A774: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022A778: lw          $v0, 0x1954($at)
    ctx->r2 = MEM_W(ctx->r1, 0X1954);
    // 0x8022A77C: jalr        $v0
    // 0x8022A780: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022A780: nop

    after_0:
    // 0x8022A784: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022A788: jr          $ra
    // 0x8022A78C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022A78C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80229174_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229174: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80229178: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022917C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229180: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80229184: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80229188: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x8022918C: bgez        $v0, L_802291B0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80229190: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_802291B0;
    }
    // 0x80229190: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x80229194: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80229198: addiu       $v0, $zero, 0x49
    ctx->r2 = ADD32(0, 0X49);
    // 0x8022919C: beq         $a0, $v0, L_802291B0
    if (ctx->r4 == ctx->r2) {
        // 0x802291A0: nop
    
            goto L_802291B0;
    }
    // 0x802291A0: nop

    // 0x802291A4: jal         0x8022AE38
    // 0x802291A8: nop

    func_8022AE38_ovl14(rdram, ctx);
        goto after_0;
    // 0x802291A8: nop

    after_0:
    // 0x802291AC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_802291B0:
    // 0x802291B0: lhu         $v0, 0x8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8);
    // 0x802291B4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802291B8: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
    // 0x802291BC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802291C0: bne         $v0, $zero, L_8022922C
    if (ctx->r2 != 0) {
        // 0x802291C4: addiu       $v0, $zero, 0x49
        ctx->r2 = ADD32(0, 0X49);
            goto L_8022922C;
    }
    // 0x802291C4: addiu       $v0, $zero, 0x49
    ctx->r2 = ADD32(0, 0X49);
    // 0x802291C8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x802291CC: bne         $a0, $v0, L_802291E4
    if (ctx->r4 != ctx->r2) {
        // 0x802291D0: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_802291E4;
    }
    // 0x802291D0: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x802291D4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802291D8: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x802291DC: j           L_802291FC
    // 0x802291E0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_802291FC;
    // 0x802291E0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802291E4:
    // 0x802291E4: jal         0x8022AE48
    // 0x802291E8: nop

    func_8022AE48_ovl14(rdram, ctx);
        goto after_1;
    // 0x802291E8: nop

    after_1:
    // 0x802291EC: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x802291F0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802291F4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802291F8: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_802291FC:
    // 0x802291FC: lh          $v0, 0x14($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X14);
    // 0x80229200: beq         $v0, $zero, L_80229214
    if (ctx->r2 == 0) {
        // 0x80229204: nop
    
            goto L_80229214;
    }
    // 0x80229204: nop

    // 0x80229208: lhu         $v0, 0xA($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XA);
    // 0x8022920C: j           L_80229224
    // 0x80229210: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
        goto L_80229224;
    // 0x80229210: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
L_80229214:
    // 0x80229214: lhu         $v0, 0xA($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XA);
    // 0x80229218: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022921C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80229220: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
L_80229224:
    // 0x80229224: lhu         $v0, 0x1E($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X1E);
    // 0x80229228: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
L_8022922C:
    // 0x8022922C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80229230: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80229234: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229238: jr          $ra
    // 0x8022923C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022923C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80228668_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228668: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022866C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80228670: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80228674: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80228678: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x8022867C: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x80228680: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x80228684: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80228688: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022868C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228690: lw          $v1, 0x35C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X35C);
    // 0x80228694: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x80228698: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x8022869C: and         $s2, $v1, $v0
    ctx->r18 = ctx->r3 & ctx->r2;
    // 0x802286A0: beq         $s2, $zero, L_8022888C
    if (ctx->r18 == 0) {
        // 0x802286A4: addiu       $s3, $s1, 0x348
        ctx->r19 = ADD32(ctx->r17, 0X348);
            goto L_8022888C;
    }
    // 0x802286A4: addiu       $s3, $s1, 0x348
    ctx->r19 = ADD32(ctx->r17, 0X348);
    // 0x802286A8: lui         $v0, 0x3800
    ctx->r2 = S32(0X3800 << 16);
    // 0x802286AC: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x802286B0: beql        $v0, $zero, L_80228884
    if (ctx->r2 == 0) {
        // 0x802286B4: addiu       $a0, $zero, 0xA3
        ctx->r4 = ADD32(0, 0XA3);
            goto L_80228884;
    }
    goto skip_0;
    // 0x802286B4: addiu       $a0, $zero, 0xA3
    ctx->r4 = ADD32(0, 0XA3);
    skip_0:
    // 0x802286B8: lhu         $v0, 0x6E($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X6E);
    // 0x802286BC: lhu         $v1, 0x6E($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X6E);
    // 0x802286C0: subu        $v0, $v0, $s2
    ctx->r2 = SUB32(ctx->r2, ctx->r18);
    // 0x802286C4: sh          $v0, 0x6E($s1)
    MEM_H(0X6E, ctx->r17) = ctx->r2;
    // 0x802286C8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802286CC: bgtz        $v0, L_802287C4
    if (SIGNED(ctx->r2) > 0) {
        // 0x802286D0: sh          $v1, 0xB2($s1)
        MEM_H(0XB2, ctx->r17) = ctx->r3;
            goto L_802287C4;
    }
    // 0x802286D0: sh          $v1, 0xB2($s1)
    MEM_H(0XB2, ctx->r17) = ctx->r3;
    // 0x802286D4: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x802286D8: lhu         $a0, 0x348($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X348);
    // 0x802286DC: lbu         $v1, 0x2($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X2);
    // 0x802286E0: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x802286E4: lw          $a1, 0x298($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X298);
    // 0x802286E8: addiu       $s6, $zero, 0x1
    ctx->r22 = ADD32(0, 0X1);
    // 0x802286EC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802286F0: sh          $v0, 0xB2($s1)
    MEM_H(0XB2, ctx->r17) = ctx->r2;
    // 0x802286F4: sh          $v0, 0x6E($s1)
    MEM_H(0X6E, ctx->r17) = ctx->r2;
    // 0x802286F8: andi        $a0, $a0, 0xFFF3
    ctx->r4 = ctx->r4 & 0XFFF3;
    // 0x802286FC: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80228700: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x80228704: sh          $a0, 0x348($s1)
    MEM_H(0X348, ctx->r17) = ctx->r4;
    // 0x80228708: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8022870C: addiu       $s5, $zero, 0x83
    ctx->r21 = ADD32(0, 0X83);
    // 0x80228710: addiu       $s4, $zero, 0x3
    ctx->r20 = ADD32(0, 0X3);
    // 0x80228714: lbu         $s2, 0x19($v0)
    ctx->r18 = MEM_BU(ctx->r2, 0X19);
L_80228718:
    // 0x80228718: jal         0x8004F144
    // 0x8022871C: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x8022871C: nop

    after_0:
    // 0x80228720: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x80228724: beq         $a1, $zero, L_802287B8
    if (ctx->r5 == 0) {
        // 0x80228728: sll         $a0, $s0, 16
        ctx->r4 = S32(ctx->r16 << 16);
            goto L_802287B8;
    }
    // 0x80228728: sll         $a0, $s0, 16
    ctx->r4 = S32(ctx->r16 << 16);
    // 0x8022872C: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80228730: sb          $s6, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r22;
    // 0x80228734: sb          $s5, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r21;
    // 0x80228738: sb          $s4, 0x3($a1)
    MEM_B(0X3, ctx->r5) = ctx->r20;
    // 0x8022873C: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80228740: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80228744: lbu         $v0, 0x11D0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X11D0);
    // 0x80228748: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022874C: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x80228750: lhu         $v0, 0x180($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X180);
    // 0x80228754: sh          $v0, 0x1C($a1)
    MEM_H(0X1C, ctx->r5) = ctx->r2;
    // 0x80228758: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022875C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80228760: lbu         $v0, 0x11D0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X11D0);
    // 0x80228764: sll         $v1, $a0, 1
    ctx->r3 = S32(ctx->r4 << 1);
    // 0x80228768: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022876C: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x80228770: lhu         $v0, 0x182($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X182);
    // 0x80228774: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80228778: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8022877C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80228780: sh          $v0, 0x1E($a1)
    MEM_H(0X1E, ctx->r5) = ctx->r2;
    // 0x80228784: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80228788: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8022878C: lbu         $v0, 0x11D0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X11D0);
    // 0x80228790: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80228794: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x80228798: lhu         $v1, 0x184($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X184);
    // 0x8022879C: addiu       $v0, $s0, 0x1
    ctx->r2 = ADD32(ctx->r16, 0X1);
    // 0x802287A0: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x802287A4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802287A8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802287AC: slti        $v0, $v0, 0x4
    ctx->r2 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x802287B0: bne         $v0, $zero, L_80228718
    if (ctx->r2 != 0) {
        // 0x802287B4: sh          $v1, 0x20($a1)
        MEM_H(0X20, ctx->r5) = ctx->r3;
            goto L_80228718;
    }
    // 0x802287B4: sh          $v1, 0x20($a1)
    MEM_H(0X20, ctx->r5) = ctx->r3;
L_802287B8:
    // 0x802287B8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802287BC: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x802287C0: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
L_802287C4:
    // 0x802287C4: lhu         $v0, 0x0($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X0);
    // 0x802287C8: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x802287CC: beq         $v0, $zero, L_80228870
    if (ctx->r2 == 0) {
        // 0x802287D0: addiu       $a0, $zero, 0xA0
        ctx->r4 = ADD32(0, 0XA0);
            goto L_80228870;
    }
    // 0x802287D0: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x802287D4: lhu         $v0, 0xA($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0XA);
    // 0x802287D8: lw          $v1, 0x14($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X14);
    // 0x802287DC: addu        $a0, $v0, $s2
    ctx->r4 = ADD32(ctx->r2, ctx->r18);
    // 0x802287E0: lui         $v0, 0x2000
    ctx->r2 = S32(0X2000 << 16);
    // 0x802287E4: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x802287E8: bne         $v1, $zero, L_80228820
    if (ctx->r3 != 0) {
        // 0x802287EC: sh          $a0, 0xA($s3)
        MEM_H(0XA, ctx->r19) = ctx->r4;
            goto L_80228820;
    }
    // 0x802287EC: sh          $a0, 0xA($s3)
    MEM_H(0XA, ctx->r19) = ctx->r4;
    // 0x802287F0: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x802287F4: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x802287F8: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x802287FC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80228800: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80228804: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80228808: lbu         $v1, 0x19($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X19);
    // 0x8022880C: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x80228810: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80228814: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80228818: bnel        $v0, $zero, L_80228878
    if (ctx->r2 != 0) {
        // 0x8022881C: sh          $zero, 0xA($s1)
        MEM_H(0XA, ctx->r17) = 0;
            goto L_80228878;
    }
    goto skip_1;
    // 0x8022881C: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
    skip_1:
L_80228820:
    // 0x80228820: addiu       $a0, $zero, 0xA2
    ctx->r4 = ADD32(0, 0XA2);
    // 0x80228824: addiu       $s0, $s1, 0x14
    ctx->r16 = ADD32(ctx->r17, 0X14);
    // 0x80228828: jal         0x8002A33C
    // 0x8022882C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x8022882C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80228830: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228834: lh          $a2, 0x56($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X56);
    // 0x80228838: addiu       $a1, $s3, 0x1C
    ctx->r5 = ADD32(ctx->r19, 0X1C);
    // 0x8022883C: jal         0x8004FEA0
    // 0x80228840: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004FEA0_2B2A0(rdram, ctx);
        goto after_2;
    // 0x80228840: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_2:
    // 0x80228844: addiu       $v1, $v0, 0x800
    ctx->r3 = ADD32(ctx->r2, 0X800);
    // 0x80228848: sh          $v1, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r3;
    // 0x8022884C: lui         $v1, 0xFFFF
    ctx->r3 = S32(0XFFFF << 16);
    // 0x80228850: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80228854: bne         $v0, $zero, L_80228860
    if (ctx->r2 != 0) {
        // 0x80228858: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80228860;
    }
    // 0x80228858: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022885C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80228860:
    // 0x80228860: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x80228864: sh          $zero, 0xA($s3)
    MEM_H(0XA, ctx->r19) = 0;
    // 0x80228868: j           L_80228878
    // 0x8022886C: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
        goto L_80228878;
    // 0x8022886C: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
L_80228870:
    // 0x80228870: jal         0x8002A33C
    // 0x80228874: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_3;
    // 0x80228874: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_3:
L_80228878:
    // 0x80228878: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x8022887C: j           L_8022888C
    // 0x80228880: sh          $v0, 0x15E($s1)
    MEM_H(0X15E, ctx->r17) = ctx->r2;
        goto L_8022888C;
    // 0x80228880: sh          $v0, 0x15E($s1)
    MEM_H(0X15E, ctx->r17) = ctx->r2;
L_80228884:
    // 0x80228884: jal         0x8002A33C
    // 0x80228888: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_4;
    // 0x80228888: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_4:
L_8022888C:
    // 0x8022888C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228890: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80228894: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x80228898: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x8022889C: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x802288A0: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x802288A4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x802288A8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802288AC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802288B0: jr          $ra
    // 0x802288B4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x802288B4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x802288B8: nop

    // 0x802288BC: nop

;}
RECOMP_FUNC void func_80229DA4_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229DA4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229DA8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229DAC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229DB0: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x80229DB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80229DB8: jal         0x8022AED4
    // 0x80229DBC: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_8022AED4_ovl14(rdram, ctx);
        goto after_0;
    // 0x80229DBC: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_0:
    // 0x80229DC0: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80229DC4: beq         $v0, $zero, L_80229DF0
    if (ctx->r2 == 0) {
        // 0x80229DC8: addiu       $v1, $zero, 0x6
        ctx->r3 = ADD32(0, 0X6);
            goto L_80229DF0;
    }
    // 0x80229DC8: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
    // 0x80229DCC: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80229DD0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80229DD4: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x80229DD8: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x80229DDC: sh          $v0, 0x360($s0)
    MEM_H(0X360, ctx->r16) = ctx->r2;
    // 0x80229DE0: jal         0x8022AE38
    // 0x80229DE4: sh          $a1, 0x362($s0)
    MEM_H(0X362, ctx->r16) = ctx->r5;
    func_8022AE38_ovl14(rdram, ctx);
        goto after_1;
    // 0x80229DE4: sh          $a1, 0x362($s0)
    MEM_H(0X362, ctx->r16) = ctx->r5;
    after_1:
    // 0x80229DE8: j           L_80229E30
    // 0x80229DEC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_80229E30;
    // 0x80229DEC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_80229DF0:
    // 0x80229DF0: lhu         $v0, 0x350($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X350);
    // 0x80229DF4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80229DF8: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x80229DFC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229E00: bne         $v0, $zero, L_80229E10
    if (ctx->r2 != 0) {
        // 0x80229E04: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80229E10;
    }
    // 0x80229E04: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229E08: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229E0C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80229E10:
    // 0x80229E10: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80229E14: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80229E18: jal         0x8004DA90
    // 0x80229E1C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x80229E1C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_2:
    // 0x80229E20: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80229E24: addiu       $v0, $v0, 0x80
    ctx->r2 = ADD32(ctx->r2, 0X80);
    // 0x80229E28: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80229E2C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_80229E30:
    // 0x80229E30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80229E34: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229E38: jr          $ra
    // 0x80229E3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80229E3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022AC34_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AC34: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022AC38: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022AC3C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022AC40: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022AC44: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022AC48: lh          $a3, 0x34E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X34E);
    // 0x8022AC4C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022AC50: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022AC54: jal         0x8004F820
    // 0x8022AC58: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022AC58: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x8022AC5C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022AC60: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022AC64: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022AC68: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022AC6C: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8022AC70: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x8022AC74: bne         $v0, $zero, L_8022AC98
    if (ctx->r2 != 0) {
        // 0x8022AC78: addiu       $v1, $zero, 0x9
        ctx->r3 = ADD32(0, 0X9);
            goto L_8022AC98;
    }
    // 0x8022AC78: addiu       $v1, $zero, 0x9
    ctx->r3 = ADD32(0, 0X9);
    // 0x8022AC7C: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x8022AC80: lbu         $a0, 0x34B($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X34B);
    // 0x8022AC84: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x8022AC88: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8022AC8C: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x8022AC90: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    // 0x8022AC94: sb          $a0, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r4;
L_8022AC98:
    // 0x8022AC98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022AC9C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022ACA0: jr          $ra
    // 0x8022ACA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022ACA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022FB00_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FB00: lhu         $v0, 0x38($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X38);
    // 0x8022FB04: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x8022FB08: sh          $v0, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r2;
    // 0x8022FB0C: lhu         $v0, 0x3A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X3A);
    // 0x8022FB10: lh          $v1, 0x38($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X38);
    // 0x8022FB14: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022FB18: bne         $v1, $zero, L_8022FB24
    if (ctx->r3 != 0) {
        // 0x8022FB1C: sh          $v0, 0x3A($a0)
        MEM_H(0X3A, ctx->r4) = ctx->r2;
            goto L_8022FB24;
    }
    // 0x8022FB1C: sh          $v0, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = ctx->r2;
    // 0x8022FB20: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
L_8022FB24:
    // 0x8022FB24: jr          $ra
    // 0x8022FB28: nop

    TRACE_RETURN()
    return;
    // 0x8022FB28: nop

;}
RECOMP_FUNC void func_8022DFB8_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DFB8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022DFBC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022DFC0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022DFC4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022DFC8: addiu       $s2, $s0, 0x14
    ctx->r18 = ADD32(ctx->r16, 0X14);
    // 0x8022DFCC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022DFD0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022DFD4: addiu       $s1, $s0, 0x364
    ctx->r17 = ADD32(ctx->r16, 0X364);
    // 0x8022DFD8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022DFDC: jal         0x8004DE68
    // 0x8022DFE0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8004DE68_29268(rdram, ctx);
        goto after_0;
    // 0x8022DFE0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_0:
    // 0x8022DFE4: lbu         $a0, 0x9($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X9);
    // 0x8022DFE8: srl         $v0, $v0, 7
    ctx->r2 = S32(U32(ctx->r2) >> 7);
    // 0x8022DFEC: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x8022DFF0: beq         $v1, $zero, L_8022E00C
    if (ctx->r3 == 0) {
        // 0x8022DFF4: sw          $v0, 0x350($s0)
        MEM_W(0X350, ctx->r16) = ctx->r2;
            goto L_8022E00C;
    }
    // 0x8022DFF4: sw          $v0, 0x350($s0)
    MEM_W(0X350, ctx->r16) = ctx->r2;
    // 0x8022DFF8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022DFFC: beq         $v1, $v0, L_8022E02C
    if (ctx->r3 == ctx->r2) {
        // 0x8022E000: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_8022E02C;
    }
    // 0x8022E000: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022E004: j           L_8022E06C
    // 0x8022E008: nop

        goto L_8022E06C;
    // 0x8022E008: nop

L_8022E00C:
    // 0x8022E00C: lb          $v1, 0xD($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XD);
    // 0x8022E010: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8022E014: bne         $v0, $zero, L_8022E058
    if (ctx->r2 != 0) {
        // 0x8022E018: nop
    
            goto L_8022E058;
    }
    // 0x8022E018: nop

    // 0x8022E01C: beq         $v1, $zero, L_8022E058
    if (ctx->r3 == 0) {
        // 0x8022E020: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_8022E058;
    }
    // 0x8022E020: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x8022E024: j           L_8022E06C
    // 0x8022E028: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022E06C;
    // 0x8022E028: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022E02C:
    // 0x8022E02C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022E030: lh          $a3, 0x64($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X64);
    // 0x8022E034: jal         0x8004F820
    // 0x8022E038: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x8022E038: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
    // 0x8022E03C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022E040: lw          $a0, 0x350($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X350);
    // 0x8022E044: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022E048: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022E04C: sltiu       $a0, $a0, 0x2
    ctx->r4 = ctx->r4 < 0X2 ? 1 : 0;
    // 0x8022E050: beq         $a0, $zero, L_8022E06C
    if (ctx->r4 == 0) {
        // 0x8022E054: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_8022E06C;
    }
    // 0x8022E054: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
L_8022E058:
    // 0x8022E058: jal         0x8022E180
    // 0x8022E05C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022E180_ovl14(rdram, ctx);
        goto after_2;
    // 0x8022E05C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022E060: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E064: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022E068: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_8022E06C:
    // 0x8022E06C: jal         0x8022E0A8
    // 0x8022E070: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022E0A8_ovl14(rdram, ctx);
        goto after_3;
    // 0x8022E070: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022E074: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022E078: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022E07C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022E080: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022E084: jr          $ra
    // 0x8022E088: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022E088: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80226DC0_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226DC0: lb          $v1, 0xD($a0)
    ctx->r3 = MEM_B(ctx->r4, 0XD);
    // 0x80226DC4: beq         $v1, $zero, L_80226DDC
    if (ctx->r3 == 0) {
        // 0x80226DC8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80226DDC;
    }
    // 0x80226DC8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226DCC: beq         $v1, $v0, L_80226DF4
    if (ctx->r3 == ctx->r2) {
        // 0x80226DD0: lui         $v1, 0x5
        ctx->r3 = S32(0X5 << 16);
            goto L_80226DF4;
    }
    // 0x80226DD0: lui         $v1, 0x5
    ctx->r3 = S32(0X5 << 16);
    // 0x80226DD4: j           L_80226E00
    // 0x80226DD8: nop

        goto L_80226E00;
    // 0x80226DD8: nop

L_80226DDC:
    // 0x80226DDC: lbu         $v0, 0xD($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD);
    // 0x80226DE0: addiu       $v1, $zero, 0xC
    ctx->r3 = ADD32(0, 0XC);
    // 0x80226DE4: sb          $v1, 0x448($a0)
    MEM_B(0X448, ctx->r4) = ctx->r3;
    // 0x80226DE8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226DEC: j           L_80226E00
    // 0x80226DF0: sb          $v0, 0xD($a0)
    MEM_B(0XD, ctx->r4) = ctx->r2;
        goto L_80226E00;
    // 0x80226DF0: sb          $v0, 0xD($a0)
    MEM_B(0XD, ctx->r4) = ctx->r2;
L_80226DF4:
    // 0x80226DF4: lw          $v0, 0x430($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X430);
    // 0x80226DF8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80226DFC: sw          $v0, 0x430($a0)
    MEM_W(0X430, ctx->r4) = ctx->r2;
L_80226E00:
    // 0x80226E00: jr          $ra
    // 0x80226E04: nop

    TRACE_RETURN()
    return;
    // 0x80226E04: nop

;}
RECOMP_FUNC void func_80226E34_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226E34: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80226E38: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80226E3C: addiu       $a1, $a1, 0x49B0
    ctx->r5 = ADD32(ctx->r5, 0X49B0);
    // 0x80226E40: bne         $v0, $zero, L_80226F0C
    if (ctx->r2 != 0) {
        // 0x80226E44: addiu       $v0, $zero, 0xB
        ctx->r2 = ADD32(0, 0XB);
            goto L_80226F0C;
    }
    // 0x80226E44: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x80226E48: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80226E4C: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x80226E50: bne         $v1, $v0, L_80226EA4
    if (ctx->r3 != ctx->r2) {
        // 0x80226E54: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80226EA4;
    }
    // 0x80226E54: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80226E58: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80226E5C: lbu         $v1, -0x3BC8($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3BC8);
    // 0x80226E60: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226E64: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x80226E68: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80226E6C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226E70: sb          $v0, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r2;
    // 0x80226E74: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80226E78: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226E7C: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x80226E80: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226E84: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    // 0x80226E88: lui         $v0, 0xFE00
    ctx->r2 = S32(0XFE00 << 16);
    // 0x80226E8C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226E90: sw          $v0, 0x4DD8($at)
    MEM_W(0X4DD8, ctx->r1) = ctx->r2;
    // 0x80226E94: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226E98: sw          $v0, 0x4DE0($at)
    MEM_W(0X4DE0, ctx->r1) = ctx->r2;
    // 0x80226E9C: j           L_80226EEC
    // 0x80226EA0: lui         $v0, 0xFEFF
    ctx->r2 = S32(0XFEFF << 16);
        goto L_80226EEC;
    // 0x80226EA0: lui         $v0, 0xFEFF
    ctx->r2 = S32(0XFEFF << 16);
L_80226EA4:
    // 0x80226EA4: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80226EA8: lbu         $v1, -0x3BC8($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3BC8);
    // 0x80226EAC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226EB0: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x80226EB4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80226EB8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226EBC: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x80226EC0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226EC4: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    // 0x80226EC8: lui         $v0, 0xC00
    ctx->r2 = S32(0XC00 << 16);
    // 0x80226ECC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226ED0: sw          $v0, 0x4DD8($at)
    MEM_W(0X4DD8, ctx->r1) = ctx->r2;
    // 0x80226ED4: lui         $v0, 0x1400
    ctx->r2 = S32(0X1400 << 16);
    // 0x80226ED8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226EDC: sw          $v0, 0x4DE0($at)
    MEM_W(0X4DE0, ctx->r1) = ctx->r2;
    // 0x80226EE0: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x80226EE4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226EE8: sb          $zero, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = 0;
L_80226EEC:
    // 0x80226EEC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226EF0: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x80226EF4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226EF8: sw          $v0, 0x4DDC($at)
    MEM_W(0X4DDC, ctx->r1) = ctx->r2;
    // 0x80226EFC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226F00: sb          $v1, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r3;
    // 0x80226F04: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x80226F08: sh          $v0, 0x442($a1)
    MEM_H(0X442, ctx->r5) = ctx->r2;
L_80226F0C:
    // 0x80226F0C: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80226F10: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80226F14: bne         $v1, $v0, L_80226F24
    if (ctx->r3 != ctx->r2) {
        // 0x80226F18: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80226F24;
    }
    // 0x80226F18: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226F1C: sb          $v0, 0xC($a1)
    MEM_B(0XC, ctx->r5) = ctx->r2;
    // 0x80226F20: sb          $zero, 0xD($a1)
    MEM_B(0XD, ctx->r5) = 0;
L_80226F24:
    // 0x80226F24: jr          $ra
    // 0x80226F28: nop

    TRACE_RETURN()
    return;
    // 0x80226F28: nop

;}
RECOMP_FUNC void func_8022B00C_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B00C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022B010: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022B014: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B018: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8022B01C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8022B020: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8022B024: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022B028: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x8022B02C: sltiu       $v0, $v1, 0x9
    ctx->r2 = ctx->r3 < 0X9 ? 1 : 0;
    // 0x8022B030: beq         $v0, $zero, L_8022B4AC
    if (ctx->r2 == 0) {
        // 0x8022B034: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_8022B4AC;
    }
    // 0x8022B034: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x8022B038: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022B03C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022B040: addu        $at, $at, $v0
    gpr jr_addend_8022B048 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022B044: lw          $v0, 0x1C88($at)
    ctx->r2 = ADD32(ctx->r1, 0X1C88);
    // 0x8022B048: jr          $v0
    // 0x8022B04C: nop

    switch (jr_addend_8022B048 >> 2) {
        case 0: goto L_8022B050; break;
        case 1: goto L_8022B134; break;
        case 2: goto L_8022B1DC; break;
        case 3: goto L_8022B220; break;
        case 4: goto L_8022B29C; break;
        case 5: goto L_8022B344; break;
        case 6: goto L_8022B3C0; break;
        case 7: goto L_8022B4AC; break;
        case 8: goto L_8022B46C; break;
        default: switch_error(__func__, 0x8022B048, 0x80231C88);
    }
    // 0x8022B04C: nop

L_8022B050:
    // 0x8022B050: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x8022B054: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B058: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022B05C: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8022B060: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x8022B064: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x8022B068: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x8022B06C: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8022B070: jal         0x8004D5D4
    // 0x8022B074: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8022B074: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x8022B078: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B07C: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022B080: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8022B084: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022B088: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022B08C: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022B090: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022B094: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022B098: addiu       $v0, $v0, 0x1980
    ctx->r2 = ADD32(ctx->r2, 0X1980);
    // 0x8022B09C: jal         0x8003E934
    // 0x8022B0A0: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    func_8003E934_19D34(rdram, ctx);
        goto after_1;
    // 0x8022B0A0: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022B0A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B0A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022B0AC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022B0B0: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022B0B4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B0B8: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022B0BC: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022B0C0: sh          $v0, 0x360($s0)
    MEM_H(0X360, ctx->r16) = ctx->r2;
    // 0x8022B0C4: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022B0C8: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022B0CC: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022B0D0: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
    // 0x8022B0D4: sh          $zero, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = 0;
    // 0x8022B0D8: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    // 0x8022B0DC: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x8022B0E0: sh          $zero, 0x362($s0)
    MEM_H(0X362, ctx->r16) = 0;
    // 0x8022B0E4: sh          $zero, 0x364($s0)
    MEM_H(0X364, ctx->r16) = 0;
    // 0x8022B0E8: sb          $zero, 0x74($s0)
    MEM_B(0X74, ctx->r16) = 0;
    // 0x8022B0EC: sw          $zero, 0x348($s0)
    MEM_W(0X348, ctx->r16) = 0;
    // 0x8022B0F0: sw          $zero, 0x34C($s0)
    MEM_W(0X34C, ctx->r16) = 0;
    // 0x8022B0F4: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x8022B0F8: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x8022B0FC: sw          $zero, 0x350($s0)
    MEM_W(0X350, ctx->r16) = 0;
    // 0x8022B100: sw          $v0, 0x354($s0)
    MEM_W(0X354, ctx->r16) = ctx->r2;
    // 0x8022B104: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022B108: jal         0x80050294
    // 0x8022B10C: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x8022B10C: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    after_2:
    // 0x8022B110: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B114: jal         0x8022B828
    // 0x8022B118: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8022B828_ovl14(rdram, ctx);
        goto after_3;
    // 0x8022B118: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_3:
    // 0x8022B11C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B120: jal         0x8022B808
    // 0x8022B124: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8022B808_ovl14(rdram, ctx);
        goto after_4;
    // 0x8022B124: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x8022B128: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B12C: j           L_8022B4AC
    // 0x8022B130: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_8022B4AC;
    // 0x8022B130: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022B134:
    // 0x8022B134: lhu         $v0, 0x54($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X54);
    // 0x8022B138: lhu         $v1, 0x18($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X18);
    // 0x8022B13C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022B140: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022B144: sh          $v0, 0x54($s0)
    MEM_H(0X54, ctx->r16) = ctx->r2;
    // 0x8022B148: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022B14C: lhu         $v1, 0x1A($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X1A);
    // 0x8022B150: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022B154: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022B158: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8022B15C: lhu         $v0, 0x58($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X58);
    // 0x8022B160: lhu         $v1, 0x1C($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X1C);
    // 0x8022B164: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B168: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x8022B16C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022B170: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022B174: jal         0x8022B9E8
    // 0x8022B178: sh          $v0, 0x58($s0)
    MEM_H(0X58, ctx->r16) = ctx->r2;
    func_8022B9E8_ovl14(rdram, ctx);
        goto after_5;
    // 0x8022B178: sh          $v0, 0x58($s0)
    MEM_H(0X58, ctx->r16) = ctx->r2;
    after_5:
    // 0x8022B17C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022B180: bne         $v0, $zero, L_8022B4B0
    if (ctx->r2 != 0) {
        // 0x8022B184: nop
    
            goto L_8022B4B0;
    }
    // 0x8022B184: nop

    // 0x8022B188: jal         0x8003E934
    // 0x8022B18C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_6;
    // 0x8022B18C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x8022B190: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
    // 0x8022B194: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022B198: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B19C: beq         $a1, $zero, L_8022B1AC
    if (ctx->r5 == 0) {
        // 0x8022B1A0: sw          $v0, 0x20($s0)
        MEM_W(0X20, ctx->r16) = ctx->r2;
            goto L_8022B1AC;
    }
    // 0x8022B1A0: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022B1A4: jal         0x8022B6CC
    // 0x8022B1A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022B6CC_ovl14(rdram, ctx);
        goto after_7;
    // 0x8022B1A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
L_8022B1AC:
    // 0x8022B1AC: jal         0x8022B74C
    // 0x8022B1B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022B74C_ovl14(rdram, ctx);
        goto after_8;
    // 0x8022B1B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
    // 0x8022B1B4: jal         0x8005044C
    // 0x8022B1B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_9;
    // 0x8022B1B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
    // 0x8022B1BC: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022B1C0: bne         $v0, $zero, L_8022B1D4
    if (ctx->r2 != 0) {
        // 0x8022B1C4: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_8022B1D4;
    }
    // 0x8022B1C4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022B1C8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022B1CC: j           L_8022B4AC
    // 0x8022B1D0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_8022B4AC;
    // 0x8022B1D0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022B1D4:
    // 0x8022B1D4: j           L_8022B4AC
    // 0x8022B1D8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022B4AC;
    // 0x8022B1D8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022B1DC:
    // 0x8022B1DC: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8022B1E0: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022B1E4: bne         $v1, $v0, L_8022B208
    if (ctx->r3 != ctx->r2) {
        // 0x8022B1E8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022B208;
    }
    // 0x8022B1E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B1EC: jal         0x8022B6CC
    // 0x8022B1F0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8022B6CC_ovl14(rdram, ctx);
        goto after_10;
    // 0x8022B1F0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_10:
    // 0x8022B1F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B1F8: jal         0x800A3450
    // 0x8022B1FC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_11;
    // 0x8022B1FC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    after_11:
    // 0x8022B200: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x8022B204: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022B208:
    // 0x8022B208: jal         0x8022B74C
    // 0x8022B20C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022B74C_ovl14(rdram, ctx);
        goto after_12;
    // 0x8022B20C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_12:
    // 0x8022B210: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022B214: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022B218: j           L_8022B4AC
    // 0x8022B21C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022B4AC;
    // 0x8022B21C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022B220:
    // 0x8022B220: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022B224: lh          $a3, 0x64($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X64);
    // 0x8022B228: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    // 0x8022B22C: jal         0x8004F820
    // 0x8022B230: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_13;
    // 0x8022B230: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_13:
    // 0x8022B234: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B238: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x8022B23C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022B240: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B244: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022B248: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8022B24C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022B250: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022B254: jal         0x8022B9E8
    // 0x8022B258: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    func_8022B9E8_ovl14(rdram, ctx);
        goto after_14;
    // 0x8022B258: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    after_14:
    // 0x8022B25C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022B260: bne         $v0, $zero, L_8022B4B0
    if (ctx->r2 != 0) {
        // 0x8022B264: nop
    
            goto L_8022B4B0;
    }
    // 0x8022B264: nop

    // 0x8022B268: jal         0x8003E934
    // 0x8022B26C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_15;
    // 0x8022B26C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_15:
    // 0x8022B270: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
    // 0x8022B274: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022B278: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B27C: beq         $a1, $zero, L_8022B28C
    if (ctx->r5 == 0) {
        // 0x8022B280: sw          $v0, 0x20($s0)
        MEM_W(0X20, ctx->r16) = ctx->r2;
            goto L_8022B28C;
    }
    // 0x8022B280: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022B284: jal         0x8022B6CC
    // 0x8022B288: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022B6CC_ovl14(rdram, ctx);
        goto after_16;
    // 0x8022B288: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_16:
L_8022B28C:
    // 0x8022B28C: jal         0x8022B74C
    // 0x8022B290: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022B74C_ovl14(rdram, ctx);
        goto after_17;
    // 0x8022B290: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_17:
    // 0x8022B294: j           L_8022B4A4
    // 0x8022B298: nop

        goto L_8022B4A4;
    // 0x8022B298: nop

L_8022B29C:
    // 0x8022B29C: lbu         $v0, 0xA4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA4);
    // 0x8022B2A0: sltiu       $v1, $v0, 0x1
    ctx->r3 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8022B2A4: xori        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 ^ 0X8;
    // 0x8022B2A8: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8022B2AC: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8022B2B0: beq         $v1, $zero, L_8022B308
    if (ctx->r3 == 0) {
        // 0x8022B2B4: addiu       $a0, $zero, 0x109
        ctx->r4 = ADD32(0, 0X109);
            goto L_8022B308;
    }
    // 0x8022B2B4: addiu       $a0, $zero, 0x109
    ctx->r4 = ADD32(0, 0X109);
    // 0x8022B2B8: jal         0x8002A33C
    // 0x8022B2BC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_18;
    // 0x8022B2BC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_18:
    // 0x8022B2C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B2C4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8022B2C8: jal         0x80050294
    // 0x8022B2CC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_19;
    // 0x8022B2CC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_19:
    // 0x8022B2D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B2D4: jal         0x8022B828
    // 0x8022B2D8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8022B828_ovl14(rdram, ctx);
        goto after_20;
    // 0x8022B2D8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_20:
    // 0x8022B2DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B2E0: jal         0x8022B808
    // 0x8022B2E4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8022B808_ovl14(rdram, ctx);
        goto after_21;
    // 0x8022B2E4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_21:
    // 0x8022B2E8: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022B2EC: addiu       $v1, $zero, -0x100
    ctx->r3 = ADD32(0, -0X100);
    // 0x8022B2F0: sh          $v1, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r3;
    // 0x8022B2F4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8022B2F8: sb          $v1, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r3;
    // 0x8022B2FC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022B300: j           L_8022B310
    // 0x8022B304: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_8022B310;
    // 0x8022B304: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022B308:
    // 0x8022B308: jal         0x8005044C
    // 0x8022B30C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_22;
    // 0x8022B30C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_22:
L_8022B310:
    // 0x8022B310: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B314: jal         0x8022B9E8
    // 0x8022B318: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_8022B9E8_ovl14(rdram, ctx);
        goto after_23;
    // 0x8022B318: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_23:
    // 0x8022B31C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022B320: bne         $v0, $zero, L_8022B4B0
    if (ctx->r2 != 0) {
        // 0x8022B324: nop
    
            goto L_8022B4B0;
    }
    // 0x8022B324: nop

    // 0x8022B328: jal         0x8003E934
    // 0x8022B32C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_24;
    // 0x8022B32C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_24:
    // 0x8022B330: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
    // 0x8022B334: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022B338: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B33C: j           L_8022B3A8
    // 0x8022B340: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
        goto L_8022B3A8;
    // 0x8022B340: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
L_8022B344:
    // 0x8022B344: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x8022B348: bgez        $v0, L_8022B384
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022B34C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022B384;
    }
    // 0x8022B34C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B350: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8022B354: jal         0x80050294
    // 0x8022B358: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_25;
    // 0x8022B358: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_25:
    // 0x8022B35C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B360: jal         0x8022B828
    // 0x8022B364: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8022B828_ovl14(rdram, ctx);
        goto after_26;
    // 0x8022B364: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_26:
    // 0x8022B368: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B36C: jal         0x8022B808
    // 0x8022B370: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8022B808_ovl14(rdram, ctx);
        goto after_27;
    // 0x8022B370: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_27:
    // 0x8022B374: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022B378: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022B37C: j           L_8022B38C
    // 0x8022B380: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_8022B38C;
    // 0x8022B380: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022B384:
    // 0x8022B384: jal         0x8005044C
    // 0x8022B388: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_28;
    // 0x8022B388: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_28:
L_8022B38C:
    // 0x8022B38C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B390: jal         0x8022B9E8
    // 0x8022B394: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_8022B9E8_ovl14(rdram, ctx);
        goto after_29;
    // 0x8022B394: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_29:
    // 0x8022B398: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022B39C: bne         $v0, $zero, L_8022B4B0
    if (ctx->r2 != 0) {
        // 0x8022B3A0: nop
    
            goto L_8022B4B0;
    }
    // 0x8022B3A0: nop

    // 0x8022B3A4: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
L_8022B3A8:
    // 0x8022B3A8: beql        $a1, $zero, L_8022B4B0
    if (ctx->r5 == 0) {
        // 0x8022B3AC: sw          $zero, 0x0($s1)
        MEM_W(0X0, ctx->r17) = 0;
            goto L_8022B4B0;
    }
    goto skip_0;
    // 0x8022B3AC: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
    skip_0:
    // 0x8022B3B0: jal         0x8022B6CC
    // 0x8022B3B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022B6CC_ovl14(rdram, ctx);
        goto after_30;
    // 0x8022B3B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_30:
    // 0x8022B3B8: j           L_8022B4B0
    // 0x8022B3BC: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
        goto L_8022B4B0;
    // 0x8022B3BC: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
L_8022B3C0:
    // 0x8022B3C0: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022B3C4: lhu         $v1, 0x1A($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X1A);
    // 0x8022B3C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B3CC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022B3D0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022B3D4: jal         0x8003E934
    // 0x8022B3D8: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    func_8003E934_19D34(rdram, ctx);
        goto after_31;
    // 0x8022B3D8: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    after_31:
    // 0x8022B3DC: lh          $a0, 0x16($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X16);
    // 0x8022B3E0: addiu       $v1, $v0, -0x258
    ctx->r3 = ADD32(ctx->r2, -0X258);
    // 0x8022B3E4: sltu        $v0, $v1, $a0
    ctx->r2 = ctx->r3 < ctx->r4 ? 1 : 0;
    // 0x8022B3E8: beq         $v0, $zero, L_8022B3FC
    if (ctx->r2 == 0) {
        // 0x8022B3EC: sw          $v1, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r3;
            goto L_8022B3FC;
    }
    // 0x8022B3EC: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x8022B3F0: addiu       $v0, $zero, -0x100
    ctx->r2 = ADD32(0, -0X100);
    // 0x8022B3F4: j           L_8022B414
    // 0x8022B3F8: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
        goto L_8022B414;
    // 0x8022B3F8: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
L_8022B3FC:
    // 0x8022B3FC: sltu        $v0, $a0, $v1
    ctx->r2 = ctx->r4 < ctx->r3 ? 1 : 0;
    // 0x8022B400: beq         $v0, $zero, L_8022B410
    if (ctx->r2 == 0) {
        // 0x8022B404: addiu       $v0, $zero, 0x40
        ctx->r2 = ADD32(0, 0X40);
            goto L_8022B410;
    }
    // 0x8022B404: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8022B408: j           L_8022B414
    // 0x8022B40C: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
        goto L_8022B414;
    // 0x8022B40C: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
L_8022B410:
    // 0x8022B410: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
L_8022B414:
    // 0x8022B414: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B418: jal         0x8022B9E8
    // 0x8022B41C: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_8022B9E8_ovl14(rdram, ctx);
        goto after_32;
    // 0x8022B41C: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_32:
    // 0x8022B420: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022B424: bne         $v0, $zero, L_8022B4B0
    if (ctx->r2 != 0) {
        // 0x8022B428: nop
    
            goto L_8022B4B0;
    }
    // 0x8022B428: nop

    // 0x8022B42C: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
    // 0x8022B430: bne         $a1, $zero, L_8022B448
    if (ctx->r5 != 0) {
        // 0x8022B434: nop
    
            goto L_8022B448;
    }
    // 0x8022B434: nop

    // 0x8022B438: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022B43C: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x8022B440: bne         $v0, $zero, L_8022B454
    if (ctx->r2 != 0) {
        // 0x8022B444: nop
    
            goto L_8022B454;
    }
    // 0x8022B444: nop

L_8022B448:
    // 0x8022B448: jal         0x8022B6CC
    // 0x8022B44C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022B6CC_ovl14(rdram, ctx);
        goto after_33;
    // 0x8022B44C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_33:
    // 0x8022B450: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
L_8022B454:
    // 0x8022B454: jal         0x8022B97C
    // 0x8022B458: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022B97C_ovl14(rdram, ctx);
        goto after_34;
    // 0x8022B458: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_34:
    // 0x8022B45C: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022B460: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022B464: j           L_8022B4A4
    // 0x8022B468: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022B4A4;
    // 0x8022B468: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022B46C:
    // 0x8022B46C: lh          $a0, 0x66($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X66);
    // 0x8022B470: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x8022B474: jal         0x8004FA7C
    // 0x8022B478: lh          $a2, 0x64($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X64);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_35;
    // 0x8022B478: lh          $a2, 0x64($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X64);
    after_35:
    // 0x8022B47C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022B480: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B484: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022B488: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8022B48C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022B490: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022B494: bne         $v0, $zero, L_8022B4A4
    if (ctx->r2 != 0) {
        // 0x8022B498: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_8022B4A4;
    }
    // 0x8022B498: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022B49C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022B4A0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022B4A4:
    // 0x8022B4A4: jal         0x8005044C
    // 0x8022B4A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_36;
    // 0x8022B4A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_36:
L_8022B4AC:
    // 0x8022B4AC: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
L_8022B4B0:
    // 0x8022B4B0: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022B4B4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022B4B8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022B4BC: jr          $ra
    // 0x8022B4C0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022B4C0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80229BE8_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229BE8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80229BEC: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80229BF0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229BF4: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x80229BF8: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    // 0x80229BFC: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x80229C00: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x80229C04: jal         0x8022AED4
    // 0x80229C08: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    func_8022AED4_ovl14(rdram, ctx);
        goto after_0;
    // 0x80229C08: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    after_0:
    // 0x80229C0C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80229C10: beq         $v0, $zero, L_80229C40
    if (ctx->r2 == 0) {
        // 0x80229C14: addiu       $v0, $zero, 0x2A
        ctx->r2 = ADD32(0, 0X2A);
            goto L_80229C40;
    }
    // 0x80229C14: addiu       $v0, $zero, 0x2A
    ctx->r2 = ADD32(0, 0X2A);
    // 0x80229C18: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x80229C1C: bne         $v1, $v0, L_80229D68
    if (ctx->r3 != ctx->r2) {
        // 0x80229C20: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80229D68;
    }
    // 0x80229C20: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229C24: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80229C28: lbu         $a0, 0xAC($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XAC);
    // 0x80229C2C: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
    // 0x80229C30: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x80229C34: sh          $v0, 0x360($s0)
    MEM_H(0X360, ctx->r16) = ctx->r2;
    // 0x80229C38: j           L_80229D6C
    // 0x80229C3C: sh          $a0, 0x362($s0)
    MEM_H(0X362, ctx->r16) = ctx->r4;
        goto L_80229D6C;
    // 0x80229C3C: sh          $a0, 0x362($s0)
    MEM_H(0X362, ctx->r16) = ctx->r4;
L_80229C40:
    // 0x80229C40: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229C44: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80229C48: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80229C4C: jal         0x8004DA90
    // 0x80229C50: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x80229C50: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x80229C54: lh          $a3, 0x354($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X354);
    // 0x80229C58: lh          $a2, 0x35C($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X35C);
    // 0x80229C5C: lh          $a1, 0x14($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X14);
    // 0x80229C60: addu        $a0, $a3, $zero
    ctx->r4 = ADD32(ctx->r7, 0);
    // 0x80229C64: addu        $v0, $a3, $a2
    ctx->r2 = ADD32(ctx->r7, ctx->r6);
    // 0x80229C68: slt         $v0, $v0, $a1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x80229C6C: beq         $v0, $zero, L_80229C7C
    if (ctx->r2 == 0) {
        // 0x80229C70: addu        $v1, $a2, $zero
        ctx->r3 = ADD32(ctx->r6, 0);
            goto L_80229C7C;
    }
    // 0x80229C70: addu        $v1, $a2, $zero
    ctx->r3 = ADD32(ctx->r6, 0);
    // 0x80229C74: j           L_80229C8C
    // 0x80229C78: addu        $v0, $a0, $v1
    ctx->r2 = ADD32(ctx->r4, ctx->r3);
        goto L_80229C8C;
    // 0x80229C78: addu        $v0, $a0, $v1
    ctx->r2 = ADD32(ctx->r4, ctx->r3);
L_80229C7C:
    // 0x80229C7C: subu        $v0, $a3, $a2
    ctx->r2 = SUB32(ctx->r7, ctx->r6);
    // 0x80229C80: slt         $v0, $a1, $v0
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80229C84: beq         $v0, $zero, L_80229CBC
    if (ctx->r2 == 0) {
        // 0x80229C88: subu        $v0, $a0, $v1
        ctx->r2 = SUB32(ctx->r4, ctx->r3);
            goto L_80229CBC;
    }
    // 0x80229C88: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
L_80229C8C:
    // 0x80229C8C: lhu         $a0, 0x56($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X56);
    // 0x80229C90: lhu         $v1, 0x350($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X350);
    // 0x80229C94: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x80229C98: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80229C9C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80229CA0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80229CA4: sh          $v0, 0x366($s0)
    MEM_H(0X366, ctx->r16) = ctx->r2;
    // 0x80229CA8: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x80229CAC: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x80229CB0: addiu       $v1, $v1, 0xA
    ctx->r3 = ADD32(ctx->r3, 0XA);
    // 0x80229CB4: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x80229CB8: sh          $v1, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r3;
L_80229CBC:
    // 0x80229CBC: lh          $a3, 0x10($s1)
    ctx->r7 = MEM_H(ctx->r17, 0X10);
    // 0x80229CC0: lh          $a2, 0x16($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X16);
    // 0x80229CC4: lh          $v1, 0x18($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X18);
    // 0x80229CC8: addu        $a1, $a3, $zero
    ctx->r5 = ADD32(ctx->r7, 0);
    // 0x80229CCC: addu        $v0, $a3, $a2
    ctx->r2 = ADD32(ctx->r7, ctx->r6);
    // 0x80229CD0: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80229CD4: beq         $v0, $zero, L_80229CE8
    if (ctx->r2 == 0) {
        // 0x80229CD8: addu        $a0, $a2, $zero
        ctx->r4 = ADD32(ctx->r6, 0);
            goto L_80229CE8;
    }
    // 0x80229CD8: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
    // 0x80229CDC: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80229CE0: j           L_80229CFC
    // 0x80229CE4: addu        $v0, $a1, $a0
    ctx->r2 = ADD32(ctx->r5, ctx->r4);
        goto L_80229CFC;
    // 0x80229CE4: addu        $v0, $a1, $a0
    ctx->r2 = ADD32(ctx->r5, ctx->r4);
L_80229CE8:
    // 0x80229CE8: subu        $v0, $a3, $a2
    ctx->r2 = SUB32(ctx->r7, ctx->r6);
    // 0x80229CEC: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80229CF0: beq         $v0, $zero, L_80229D2C
    if (ctx->r2 == 0) {
        // 0x80229CF4: subu        $v0, $a1, $a0
        ctx->r2 = SUB32(ctx->r5, ctx->r4);
            goto L_80229D2C;
    }
    // 0x80229CF4: subu        $v0, $a1, $a0
    ctx->r2 = SUB32(ctx->r5, ctx->r4);
    // 0x80229CF8: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
L_80229CFC:
    // 0x80229CFC: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x80229D00: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80229D04: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80229D08: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x80229D0C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80229D10: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80229D14: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x80229D18: lhu         $v0, 0x8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8);
    // 0x80229D1C: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x80229D20: sh          $v1, 0x1E($s1)
    MEM_H(0X1E, ctx->r17) = ctx->r3;
    // 0x80229D24: addiu       $v0, $v0, 0xA
    ctx->r2 = ADD32(ctx->r2, 0XA);
    // 0x80229D28: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
L_80229D2C:
    // 0x80229D2C: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x80229D30: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x80229D34: lh          $a0, 0x18($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X18);
    // 0x80229D38: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229D3C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80229D40: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80229D44: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x80229D48: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x80229D4C: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
    // 0x80229D50: lhu         $v0, 0x8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8);
    // 0x80229D54: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80229D58: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
    // 0x80229D5C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229D60: bne         $v0, $zero, L_80229D6C
    if (ctx->r2 != 0) {
        // 0x80229D64: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80229D6C;
    }
    // 0x80229D64: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80229D68:
    // 0x80229D68: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80229D6C:
    // 0x80229D6C: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x80229D70: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x80229D74: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80229D78: jr          $ra
    // 0x80229D7C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x80229D7C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80226E08_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226E08: lb          $v0, 0xD($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XD);
    // 0x80226E0C: bne         $v0, $zero, L_80226E2C
    if (ctx->r2 != 0) {
        // 0x80226E10: addiu       $v0, $zero, 0x80
        ctx->r2 = ADD32(0, 0X80);
            goto L_80226E2C;
    }
    // 0x80226E10: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80226E14: lbu         $v1, 0xD($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XD);
    // 0x80226E18: sb          $v0, 0x448($a0)
    MEM_B(0X448, ctx->r4) = ctx->r2;
    // 0x80226E1C: sb          $zero, 0x168($a0)
    MEM_B(0X168, ctx->r4) = 0;
    // 0x80226E20: sb          $zero, 0x169($a0)
    MEM_B(0X169, ctx->r4) = 0;
    // 0x80226E24: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80226E28: sb          $v1, 0xD($a0)
    MEM_B(0XD, ctx->r4) = ctx->r3;
L_80226E2C:
    // 0x80226E2C: jr          $ra
    // 0x80226E30: nop

    TRACE_RETURN()
    return;
    // 0x80226E30: nop

;}
RECOMP_FUNC void func_8022FF00_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FF00: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022FF04: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8022FF08: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022FF0C: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8022FF10: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8022FF14: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x8022FF18: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x8022FF1C: addiu       $s0, $s0, 0x49B0
    ctx->r16 = ADD32(ctx->r16, 0X49B0);
    // 0x8022FF20: sltiu       $v0, $v1, 0xB
    ctx->r2 = ctx->r3 < 0XB ? 1 : 0;
    // 0x8022FF24: beq         $v0, $zero, L_80230118
    if (ctx->r2 == 0) {
        // 0x8022FF28: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80230118;
    }
    // 0x8022FF28: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022FF2C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022FF30: addu        $at, $at, $v0
    gpr jr_addend_8022FF38 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022FF34: lw          $v0, 0x1CE8($at)
    ctx->r2 = ADD32(ctx->r1, 0X1CE8);
    // 0x8022FF38: jr          $v0
    // 0x8022FF3C: nop

    switch (jr_addend_8022FF38 >> 2) {
        case 0: goto L_8022FF40; break;
        case 1: goto L_8022FF60; break;
        case 2: goto L_8022FF74; break;
        case 3: goto L_8022FFAC; break;
        case 4: goto L_8023001C; break;
        case 5: goto L_802300CC; break;
        case 6: goto L_80230118; break;
        case 7: goto L_80230118; break;
        case 8: goto L_80230118; break;
        case 9: goto L_80230118; break;
        case 10: goto L_802300E0; break;
        default: switch_error(__func__, 0x8022FF38, 0x80231CE8);
    }
    // 0x8022FF3C: nop

L_8022FF40:
    // 0x8022FF40: jal         0x8006FF84
    // 0x8022FF44: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_0;
    // 0x8022FF44: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8022FF48: beq         $v0, $zero, L_80230118
    if (ctx->r2 == 0) {
        // 0x8022FF4C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80230118;
    }
    // 0x8022FF4C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022FF50: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022FF54: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022FF58: j           L_8023000C
    // 0x8022FF5C: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
        goto L_8023000C;
    // 0x8022FF5C: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
L_8022FF60:
    // 0x8022FF60: addiu       $v0, $zero, 0x34
    ctx->r2 = ADD32(0, 0X34);
    // 0x8022FF64: sb          $v0, 0x448($s0)
    MEM_B(0X448, ctx->r16) = ctx->r2;
    // 0x8022FF68: lbu         $v0, 0x9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X9);
    // 0x8022FF6C: j           L_80230010
    // 0x8022FF70: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
        goto L_80230010;
    // 0x8022FF70: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
L_8022FF74:
    // 0x8022FF74: lbu         $v1, 0xA($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA);
    // 0x8022FF78: sltiu       $v0, $v1, 0x11
    ctx->r2 = ctx->r3 < 0X11 ? 1 : 0;
    // 0x8022FF7C: bne         $v0, $zero, L_8022FFA4
    if (ctx->r2 != 0) {
        // 0x8022FF80: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_8022FFA4;
    }
    // 0x8022FF80: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8022FF84: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x8022FF88: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x8022FF8C: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
    // 0x8022FF90: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022FF94: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x8022FF98: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x8022FF9C: j           L_80230118
    // 0x8022FFA0: sb          $v1, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r3;
        goto L_80230118;
    // 0x8022FFA0: sb          $v1, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r3;
L_8022FFA4:
    // 0x8022FFA4: j           L_80230118
    // 0x8022FFA8: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
        goto L_80230118;
    // 0x8022FFA8: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_8022FFAC:
    // 0x8022FFAC: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x8022FFB0: bgez        $v0, L_80230118
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022FFB4: addiu       $a0, $zero, 0x2
        ctx->r4 = ADD32(0, 0X2);
            goto L_80230118;
    }
    // 0x8022FFB4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x8022FFB8: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x8022FFBC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022FFC0: lui         $a2, 0x8023
    ctx->r6 = S32(0X8023 << 16);
    // 0x8022FFC4: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x8022FFC8: lw          $a2, 0x1BC8($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X1BC8);
    // 0x8022FFCC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022FFD0: jal         0x80069754
    // 0x8022FFD4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80069754_44B54(rdram, ctx);
        goto after_1;
    // 0x8022FFD4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x8022FFD8: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x8022FFDC: bne         $v0, $zero, L_8023000C
    if (ctx->r2 != 0) {
        // 0x8022FFE0: nop
    
            goto L_8023000C;
    }
    // 0x8022FFE0: nop

    // 0x8022FFE4: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x8022FFE8: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022FFEC: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x8022FFF0: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x8022FFF4: sh          $v0, 0x38($s1)
    MEM_H(0X38, ctx->r17) = ctx->r2;
    // 0x8022FFF8: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x8022FFFC: addiu       $v0, $v0, -0xC8
    ctx->r2 = ADD32(ctx->r2, -0XC8);
    // 0x80230000: sh          $v0, 0x3A($s1)
    MEM_H(0X3A, ctx->r17) = ctx->r2;
    // 0x80230004: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x80230008: sh          $v0, 0x3C($s1)
    MEM_H(0X3C, ctx->r17) = ctx->r2;
L_8023000C:
    // 0x8023000C: lbu         $v0, 0x9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X9);
L_80230010:
    // 0x80230010: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80230014: j           L_80230118
    // 0x80230018: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
        goto L_80230118;
    // 0x80230018: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
L_8023001C:
    // 0x8023001C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80230020: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80230024: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80230028: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8023002C: beq         $v0, $zero, L_8023009C
    if (ctx->r2 == 0) {
        // 0x80230030: nop
    
            goto L_8023009C;
    }
    // 0x80230030: nop

    // 0x80230034: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x80230038: bne         $v0, $zero, L_8023008C
    if (ctx->r2 != 0) {
        // 0x8023003C: addiu       $s0, $s1, 0x18
        ctx->r16 = ADD32(ctx->r17, 0X18);
            goto L_8023008C;
    }
    // 0x8023003C: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x80230040: jal         0x8002C654
    // 0x80230044: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8002C654_7A54(rdram, ctx);
        goto after_2;
    // 0x80230044: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80230048: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023004C: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x80230050: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x80230054: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80230058: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8023005C: jal         0x80031DA8
    // 0x80230060: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_3;
    // 0x80230060: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_3:
    // 0x80230064: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80230068: jal         0x80031BB4
    // 0x8023006C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80031BB4_CFB4(rdram, ctx);
        goto after_4;
    // 0x8023006C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80230070: lbu         $a0, 0xA($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0XA);
    // 0x80230074: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80230078: jal         0x800319B4
    // 0x8023007C: sll         $a0, $a0, 4
    ctx->r4 = S32(ctx->r4 << 4);
    func_800319B4_CDB4(rdram, ctx);
        goto after_5;
    // 0x8023007C: sll         $a0, $a0, 4
    ctx->r4 = S32(ctx->r4 << 4);
    after_5:
    // 0x80230080: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80230084: jal         0x800317C0
    // 0x80230088: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_800317C0_CBC0(rdram, ctx);
        goto after_6;
    // 0x80230088: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_6:
L_8023008C:
    // 0x8023008C: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80230090: addiu       $v0, $v0, 0xA
    ctx->r2 = ADD32(ctx->r2, 0XA);
    // 0x80230094: j           L_80230118
    // 0x80230098: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
        goto L_80230118;
    // 0x80230098: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_8023009C:
    // 0x8023009C: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x802300A0: bnel        $v0, $zero, L_802300B8
    if (ctx->r2 != 0) {
        // 0x802300A4: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_802300B8;
    }
    goto skip_0;
    // 0x802300A4: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    skip_0:
    // 0x802300A8: addiu       $v0, $zero, 0x35
    ctx->r2 = ADD32(0, 0X35);
    // 0x802300AC: sb          $v0, 0x448($s0)
    MEM_B(0X448, ctx->r16) = ctx->r2;
    // 0x802300B0: lbu         $v0, 0x9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X9);
    // 0x802300B4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_802300B8:
    // 0x802300B8: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x802300BC: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x802300C0: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x802300C4: j           L_80230118
    // 0x802300C8: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
        goto L_80230118;
    // 0x802300C8: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
L_802300CC:
    // 0x802300CC: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x802300D0: bgez        $v0, L_80230118
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802300D4: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_80230118;
    }
    // 0x802300D4: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x802300D8: j           L_80230118
    // 0x802300DC: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
        goto L_80230118;
    // 0x802300DC: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
L_802300E0:
    // 0x802300E0: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x802300E4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802300E8: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802300EC: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x802300F0: jal         0x8006036C
    // 0x802300F4: lw          $a0, 0x1B88($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1B88);
    func_8006036C_3B76C(rdram, ctx);
        goto after_7;
    // 0x802300F4: lw          $a0, 0x1B88($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1B88);
    after_7:
    // 0x802300F8: jal         0x80070050
    // 0x802300FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80070050_4B450(rdram, ctx);
        goto after_8;
    // 0x802300FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
    // 0x80230100: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80230104: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80230108: sw          $zero, 0x184($s0)
    MEM_W(0X184, ctx->r16) = 0;
    // 0x8023010C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80230110: jal         0x8004F684
    // 0x80230114: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004F684_2AA84(rdram, ctx);
        goto after_9;
    // 0x80230114: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_9:
L_80230118:
    // 0x80230118: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8023011C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80230120: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80230124: jr          $ra
    // 0x80230128: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80230128: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80225558_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225558: jr          $ra
    // 0x8022555C: nop

    TRACE_RETURN()
    return;
    // 0x8022555C: nop

;}
RECOMP_FUNC void func_80228BF0_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228BF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228BF4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80228BF8: jal         0x8004F418
    // 0x80228BFC: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x80228BFC: nop

    after_0:
    // 0x80228C00: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80228C04: jr          $ra
    // 0x80228C08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228C08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022AE88_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AE88: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x8022AE8C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022AE90: beq         $a1, $v0, L_8022AEBC
    if (ctx->r5 == ctx->r2) {
        // 0x8022AE94: addiu       $v0, $zero, 0x2A
        ctx->r2 = ADD32(0, 0X2A);
            goto L_8022AEBC;
    }
    // 0x8022AE94: addiu       $v0, $zero, 0x2A
    ctx->r2 = ADD32(0, 0X2A);
    // 0x8022AE98: lbu         $a0, 0x2($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X2);
    // 0x8022AE9C: bne         $a0, $v0, L_8022AEAC
    if (ctx->r4 != ctx->r2) {
        // 0x8022AEA0: addiu       $v1, $zero, 0x5
        ctx->r3 = ADD32(0, 0X5);
            goto L_8022AEAC;
    }
    // 0x8022AEA0: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x8022AEA4: j           L_8022AECC
    // 0x8022AEA8: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
        goto L_8022AECC;
    // 0x8022AEA8: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
L_8022AEAC:
    // 0x8022AEAC: bne         $a0, $v1, L_8022AECC
    if (ctx->r4 != ctx->r3) {
        // 0x8022AEB0: addiu       $v0, $zero, 0x180
        ctx->r2 = ADD32(0, 0X180);
            goto L_8022AECC;
    }
    // 0x8022AEB0: addiu       $v0, $zero, 0x180
    ctx->r2 = ADD32(0, 0X180);
    // 0x8022AEB4: j           L_8022AECC
    // 0x8022AEB8: addiu       $v0, $zero, 0x140
    ctx->r2 = ADD32(0, 0X140);
        goto L_8022AECC;
    // 0x8022AEB8: addiu       $v0, $zero, 0x140
    ctx->r2 = ADD32(0, 0X140);
L_8022AEBC:
    // 0x8022AEBC: lbu         $v0, 0x2($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X2);
    // 0x8022AEC0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022AEC4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022AEC8: lbu         $v0, 0x16C0($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X16C0);
L_8022AECC:
    // 0x8022AECC: jr          $ra
    // 0x8022AED0: nop

    TRACE_RETURN()
    return;
    // 0x8022AED0: nop

;}
RECOMP_FUNC void func_802288C0_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802288C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802288C4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802288C8: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x802288CC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802288D0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802288D4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802288D8: lw          $v0, 0x173C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X173C);
    // 0x802288DC: jalr        $v0
    // 0x802288E0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802288E0: nop

    after_0:
    // 0x802288E4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802288E8: jr          $ra
    // 0x802288EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802288EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022696C_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022696C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80226970: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80226974: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x80226978: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022697C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80226980: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226984: lbu         $v1, 0x4($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X4);
    // 0x80226988: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x8022698C: beq         $v0, $zero, L_80226D10
    if (ctx->r2 == 0) {
        // 0x80226990: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80226D10;
    }
    // 0x80226990: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80226994: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80226998: addu        $at, $at, $v0
    gpr jr_addend_802269A0 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022699C: lw          $v0, 0x1C10($at)
    ctx->r2 = ADD32(ctx->r1, 0X1C10);
    // 0x802269A0: jr          $v0
    // 0x802269A4: nop

    switch (jr_addend_802269A0 >> 2) {
        case 0: goto L_802269A8; break;
        case 1: goto L_802269FC; break;
        case 2: goto L_80226A18; break;
        case 3: goto L_80226A38; break;
        case 4: goto L_80226AE0; break;
        case 5: goto L_80226B28; break;
        default: switch_error(__func__, 0x802269A0, 0x80231C10);
    }
    // 0x802269A4: nop

L_802269A8:
    // 0x802269A8: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x802269AC: jal         0x8006FF84
    // 0x802269B0: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_0;
    // 0x802269B0: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_0:
    // 0x802269B4: beq         $v0, $zero, L_80226D10
    if (ctx->r2 == 0) {
        // 0x802269B8: nop
    
            goto L_80226D10;
    }
    // 0x802269B8: nop

    // 0x802269BC: jal         0x80036B58
    // 0x802269C0: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    func_80036B58_11F58(rdram, ctx);
        goto after_1;
    // 0x802269C0: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_1:
    // 0x802269C4: jal         0x8002A488
    // 0x802269C8: nop

    func_8002A488_5888(rdram, ctx);
        goto after_2;
    // 0x802269C8: nop

    after_2:
    // 0x802269CC: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x802269D0: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x802269D4: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x802269D8: bne         $v1, $v0, L_802269E8
    if (ctx->r3 != ctx->r2) {
        // 0x802269DC: lui         $a0, 0x100
        ctx->r4 = S32(0X100 << 16);
            goto L_802269E8;
    }
    // 0x802269DC: lui         $a0, 0x100
    ctx->r4 = S32(0X100 << 16);
    // 0x802269E0: j           L_802269EC
    // 0x802269E4: ori         $a0, $a0, 0x5900
    ctx->r4 = ctx->r4 | 0X5900;
        goto L_802269EC;
    // 0x802269E4: ori         $a0, $a0, 0x5900
    ctx->r4 = ctx->r4 | 0X5900;
L_802269E8:
    // 0x802269E8: ori         $a0, $a0, 0x3200
    ctx->r4 = ctx->r4 | 0X3200;
L_802269EC:
    // 0x802269EC: jal         0x80036B1C
    // 0x802269F0: nop

    func_80036B1C_11F1C(rdram, ctx);
        goto after_3;
    // 0x802269F0: nop

    after_3:
    // 0x802269F4: j           L_80226A28
    // 0x802269F8: nop

        goto L_80226A28;
    // 0x802269F8: nop

L_802269FC:
    // 0x802269FC: jal         0x80036B7C
    // 0x80226A00: nop

    func_80036B7C_11F7C(rdram, ctx);
        goto after_4;
    // 0x80226A00: nop

    after_4:
    // 0x80226A04: beq         $v0, $zero, L_80226D10
    if (ctx->r2 == 0) {
        // 0x80226A08: addiu       $v1, $zero, 0x17
        ctx->r3 = ADD32(0, 0X17);
            goto L_80226D10;
    }
    // 0x80226A08: addiu       $v1, $zero, 0x17
    ctx->r3 = ADD32(0, 0X17);
    // 0x80226A0C: lbu         $v0, 0x4($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X4);
    // 0x80226A10: j           L_80226A2C
    // 0x80226A14: sw          $v1, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r3;
        goto L_80226A2C;
    // 0x80226A14: sw          $v1, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r3;
L_80226A18:
    // 0x80226A18: lw          $v0, 0xC($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XC);
    // 0x80226A1C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80226A20: bne         $v0, $zero, L_80226D10
    if (ctx->r2 != 0) {
        // 0x80226A24: sw          $v0, 0xC($s2)
        MEM_W(0XC, ctx->r18) = ctx->r2;
            goto L_80226D10;
    }
    // 0x80226A24: sw          $v0, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r2;
L_80226A28:
    // 0x80226A28: lbu         $v0, 0x4($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X4);
L_80226A2C:
    // 0x80226A2C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226A30: j           L_80226D10
    // 0x80226A34: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
        goto L_80226D10;
    // 0x80226A34: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
L_80226A38:
    // 0x80226A38: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80226A3C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80226A40: jal         0x8005F6B4
    // 0x80226A44: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8005F6B4_3AAB4(rdram, ctx);
        goto after_5;
    // 0x80226A44: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
    // 0x80226A48: addiu       $a0, $zero, 0x56
    ctx->r4 = ADD32(0, 0X56);
    // 0x80226A4C: jal         0x8004CB2C
    // 0x80226A50: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_6;
    // 0x80226A50: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_6:
    // 0x80226A54: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80226A58: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x80226A5C: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x80226A60: bne         $v1, $v0, L_80226A74
    if (ctx->r3 != ctx->r2) {
        // 0x80226A64: nop
    
            goto L_80226A74;
    }
    // 0x80226A64: nop

    // 0x80226A68: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80226A6C: j           L_80226A7C
    // 0x80226A70: addiu       $v0, $v0, 0xE2C
    ctx->r2 = ADD32(ctx->r2, 0XE2C);
        goto L_80226A7C;
    // 0x80226A70: addiu       $v0, $v0, 0xE2C
    ctx->r2 = ADD32(ctx->r2, 0XE2C);
L_80226A74:
    // 0x80226A74: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80226A78: addiu       $v0, $v0, 0xD2C
    ctx->r2 = ADD32(ctx->r2, 0XD2C);
L_80226A7C:
    // 0x80226A7C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80226A80: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    // 0x80226A84: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80226A88: addiu       $v0, $v0, 0xF3C
    ctx->r2 = ADD32(ctx->r2, 0XF3C);
    // 0x80226A8C: sw          $v0, 0xA4($s2)
    MEM_W(0XA4, ctx->r18) = ctx->r2;
    // 0x80226A90: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x80226A94: lui         $s0, 0x8023
    ctx->r16 = S32(0X8023 << 16);
    // 0x80226A98: addiu       $s0, $s0, 0xCF0
    ctx->r16 = ADD32(ctx->r16, 0XCF0);
L_80226A9C:
    // 0x80226A9C: jal         0x8005FA7C
    // 0x80226AA0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_7;
    // 0x80226AA0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
    // 0x80226AA4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80226AA8: slti        $v0, $s1, 0xA
    ctx->r2 = SIGNED(ctx->r17) < 0XA ? 1 : 0;
    // 0x80226AAC: bne         $v0, $zero, L_80226A9C
    if (ctx->r2 != 0) {
        // 0x80226AB0: addiu       $s0, $s0, 0x14
        ctx->r16 = ADD32(ctx->r16, 0X14);
            goto L_80226A9C;
    }
    // 0x80226AB0: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
    // 0x80226AB4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80226AB8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226ABC: sb          $v0, 0x49B8($at)
    MEM_B(0X49B8, ctx->r1) = ctx->r2;
    // 0x80226AC0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226AC4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226AC8: sb          $v0, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = ctx->r2;
    // 0x80226ACC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226AD0: sw          $zero, 0x49BC($at)
    MEM_W(0X49BC, ctx->r1) = 0;
    // 0x80226AD4: lbu         $v0, 0x4($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X4);
    // 0x80226AD8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226ADC: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
L_80226AE0:
    // 0x80226AE0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80226AE4: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x80226AE8: bne         $v0, $zero, L_80226B28
    if (ctx->r2 != 0) {
        // 0x80226AEC: nop
    
            goto L_80226B28;
    }
    // 0x80226AEC: nop

    // 0x80226AF0: lw          $v0, 0xA4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XA4);
    // 0x80226AF4: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x80226AF8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80226AFC: beq         $v1, $v0, L_80226B14
    if (ctx->r3 == ctx->r2) {
        // 0x80226B00: nop
    
            goto L_80226B14;
    }
    // 0x80226B00: nop

    // 0x80226B04: jal         0x8006072C
    // 0x80226B08: nop

    func_8006072C_3BB2C(rdram, ctx);
        goto after_8;
    // 0x80226B08: nop

    after_8:
    // 0x80226B0C: beq         $v0, $zero, L_80226B28
    if (ctx->r2 == 0) {
        // 0x80226B10: nop
    
            goto L_80226B28;
    }
    // 0x80226B10: nop

L_80226B14:
    // 0x80226B14: jal         0x80036E48
    // 0x80226B18: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_80036E48_12248(rdram, ctx);
        goto after_9;
    // 0x80226B18: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_9:
    // 0x80226B1C: lbu         $v0, 0x4($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X4);
    // 0x80226B20: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226B24: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
L_80226B28:
    // 0x80226B28: lbu         $v1, 0x8($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X8);
    // 0x80226B2C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80226B30: beq         $v1, $v0, L_80226B48
    if (ctx->r3 == ctx->r2) {
        // 0x80226B34: nop
    
            goto L_80226B48;
    }
    // 0x80226B34: nop

    // 0x80226B38: lw          $v0, 0xA4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XA4);
    // 0x80226B3C: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x80226B40: jalr        $v0
    // 0x80226B44: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_10;
    // 0x80226B44: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_10:
L_80226B48:
    // 0x80226B48: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80226B4C: lb          $v0, 0x49BC($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X49BC);
    // 0x80226B50: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80226B54: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80226B58: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80226B5C: lw          $v0, 0xF2C($at)
    ctx->r2 = MEM_W(ctx->r1, 0XF2C);
    // 0x80226B60: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80226B64: jalr        $v0
    // 0x80226B68: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_11;
    // 0x80226B68: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_11:
    // 0x80226B6C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80226B70: addiu       $a0, $a0, 0x4DD8
    ctx->r4 = ADD32(ctx->r4, 0X4DD8);
    // 0x80226B74: jal         0x8004DD04
    // 0x80226B78: addiu       $a1, $a0, 0x10
    ctx->r5 = ADD32(ctx->r4, 0X10);
    func_8004DD04_29104(rdram, ctx);
        goto after_12;
    // 0x80226B78: addiu       $a1, $a0, 0x10
    ctx->r5 = ADD32(ctx->r4, 0X10);
    after_12:
    // 0x80226B7C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80226B80: addiu       $a0, $a0, 0x49CC
    ctx->r4 = ADD32(ctx->r4, 0X49CC);
    // 0x80226B84: jal         0x8004DD04
    // 0x80226B88: addiu       $a1, $a0, -0x8
    ctx->r5 = ADD32(ctx->r4, -0X8);
    func_8004DD04_29104(rdram, ctx);
        goto after_13;
    // 0x80226B88: addiu       $a1, $a0, -0x8
    ctx->r5 = ADD32(ctx->r4, -0X8);
    after_13:
    // 0x80226B8C: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x80226B90: addiu       $s0, $s0, 0x47CC
    ctx->r16 = ADD32(ctx->r16, 0X47CC);
    // 0x80226B94: lb          $v1, 0x0($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X0);
    // 0x80226B98: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80226B9C: bne         $v1, $v0, L_80226BE4
    if (ctx->r3 != ctx->r2) {
        // 0x80226BA0: nop
    
            goto L_80226BE4;
    }
    // 0x80226BA0: nop

    // 0x80226BA4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80226BA8: lh          $v0, 0x4DD8($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X4DD8);
    // 0x80226BAC: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80226BB0: lh          $v1, 0x4DDC($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X4DDC);
    // 0x80226BB4: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80226BB8: lh          $a0, 0x4DE0($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X4DE0);
    // 0x80226BBC: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80226BC0: lhu         $a1, 0x4DF2($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X4DF2);
    // 0x80226BC4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226BC8: sh          $v0, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = ctx->r2;
    // 0x80226BCC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226BD0: sh          $v1, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = ctx->r3;
    // 0x80226BD4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226BD8: sh          $a0, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = ctx->r4;
    // 0x80226BDC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226BE0: sh          $a1, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = ctx->r5;
L_80226BE4:
    // 0x80226BE4: jal         0x8005FB90
    // 0x80226BE8: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_14;
    // 0x80226BE8: nop

    after_14:
    // 0x80226BEC: jal         0x80060018
    // 0x80226BF0: nop

    func_80060018_3B418(rdram, ctx);
        goto after_15;
    // 0x80226BF0: nop

    after_15:
    // 0x80226BF4: lbu         $v1, 0x4($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X4);
    // 0x80226BF8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80226BFC: bne         $v1, $v0, L_80226D10
    if (ctx->r3 != ctx->r2) {
        // 0x80226C00: nop
    
            goto L_80226D10;
    }
    // 0x80226C00: nop

    // 0x80226C04: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80226C08: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x80226C0C: bne         $v0, $zero, L_80226D10
    if (ctx->r2 != 0) {
        // 0x80226C10: nop
    
            goto L_80226D10;
    }
    // 0x80226C10: nop

    // 0x80226C14: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80226C18: lbu         $v0, -0x7388($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7388);
    // 0x80226C1C: bne         $v0, $zero, L_80226D10
    if (ctx->r2 != 0) {
        // 0x80226C20: addiu       $v0, $zero, 0xB
        ctx->r2 = ADD32(0, 0XB);
            goto L_80226D10;
    }
    // 0x80226C20: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x80226C24: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80226C28: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x80226C2C: bne         $v1, $v0, L_80226C80
    if (ctx->r3 != ctx->r2) {
        // 0x80226C30: addiu       $v1, $zero, 0x2
        ctx->r3 = ADD32(0, 0X2);
            goto L_80226C80;
    }
    // 0x80226C30: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x80226C34: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x80226C38: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    // 0x80226C3C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226C40: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x80226C44: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x80226C48: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226C4C: sh          $v0, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = ctx->r2;
    // 0x80226C50: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80226C54: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226C58: sh          $v0, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = ctx->r2;
    // 0x80226C5C: addiu       $v0, $zero, -0x7300
    ctx->r2 = ADD32(0, -0X7300);
    // 0x80226C60: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226C64: sh          $v0, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = ctx->r2;
    // 0x80226C68: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226C6C: sb          $zero, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = 0;
    // 0x80226C70: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226C74: sh          $zero, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = 0;
    // 0x80226C78: j           L_80226CCC
    // 0x80226C7C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
        goto L_80226CCC;
    // 0x80226C7C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_80226C80:
    // 0x80226C80: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x80226C84: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    // 0x80226C88: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226C8C: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x80226C90: addiu       $v0, $zero, -0xC6B
    ctx->r2 = ADD32(0, -0XC6B);
    // 0x80226C94: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226C98: sh          $v0, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = ctx->r2;
    // 0x80226C9C: addiu       $v0, $zero, -0x181
    ctx->r2 = ADD32(0, -0X181);
    // 0x80226CA0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226CA4: sh          $v0, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = ctx->r2;
    // 0x80226CA8: addiu       $v0, $zero, 0xB00
    ctx->r2 = ADD32(0, 0XB00);
    // 0x80226CAC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226CB0: sh          $v0, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = ctx->r2;
    // 0x80226CB4: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x80226CB8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226CBC: sh          $v0, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = ctx->r2;
    // 0x80226CC0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80226CC4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226CC8: sb          $zero, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = 0;
L_80226CCC:
    // 0x80226CCC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226CD0: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x80226CD4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226CD8: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x80226CDC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226CE0: sb          $v1, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r3;
    // 0x80226CE4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80226CE8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80226CEC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80226CF0: jal         0x80036B00
    // 0x80226CF4: sb          $zero, 0x0($s2)
    MEM_B(0X0, ctx->r18) = 0;
    func_80036B00_11F00(rdram, ctx);
        goto after_16;
    // 0x80226CF4: sb          $zero, 0x0($s2)
    MEM_B(0X0, ctx->r18) = 0;
    after_16:
    // 0x80226CF8: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80226CFC: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x80226D00: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x80226D04: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80226D08: jal         0x80070050
    // 0x80226D0C: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    func_80070050_4B450(rdram, ctx);
        goto after_17;
    // 0x80226D0C: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    after_17:
L_80226D10:
    // 0x80226D10: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80226D14: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80226D18: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80226D1C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226D20: jr          $ra
    // 0x80226D24: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80226D24: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022FB80_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FB80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022FB84: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022FB88: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022FB8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022FB90: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022FB94: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022FB98: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022FB9C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022FBA0: lw          $v0, 0x1B20($at)
    ctx->r2 = MEM_W(ctx->r1, 0X1B20);
    // 0x8022FBA4: jalr        $v0
    // 0x8022FBA8: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022FBA8: nop

    after_0:
    // 0x8022FBAC: sw          $zero, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = 0;
    // 0x8022FBB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022FBB4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022FBB8: jr          $ra
    // 0x8022FBBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022FBBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022D444_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D444: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022D448: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D44C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022D450: addiu       $a0, $s0, 0x338
    ctx->r4 = ADD32(ctx->r16, 0X338);
    // 0x8022D454: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022D458: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022D45C: lhu         $a2, 0x56($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X56);
    // 0x8022D460: lhu         $v0, 0x322($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X322);
    // 0x8022D464: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022D468: addiu       $s1, $s0, 0x308
    ctx->r17 = ADD32(ctx->r16, 0X308);
    // 0x8022D46C: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x8022D470: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x8022D474: jal         0x800540EC
    // 0x8022D478: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    func_800540EC_2F4EC(rdram, ctx);
        goto after_0;
    // 0x8022D478: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    after_0:
    // 0x8022D47C: bne         $v0, $zero, L_8022D490
    if (ctx->r2 != 0) {
        // 0x8022D480: nop
    
            goto L_8022D490;
    }
    // 0x8022D480: nop

    // 0x8022D484: lbu         $v0, 0x36A($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X36A);
    // 0x8022D488: j           L_8022D49C
    // 0x8022D48C: andi        $v0, $v0, 0xEF
    ctx->r2 = ctx->r2 & 0XEF;
        goto L_8022D49C;
    // 0x8022D48C: andi        $v0, $v0, 0xEF
    ctx->r2 = ctx->r2 & 0XEF;
L_8022D490:
    // 0x8022D490: lbu         $v0, 0x36A($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X36A);
    // 0x8022D494: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
    // 0x8022D498: andi        $v0, $v0, 0xFB
    ctx->r2 = ctx->r2 & 0XFB;
L_8022D49C:
    // 0x8022D49C: sb          $v0, 0x36A($s0)
    MEM_B(0X36A, ctx->r16) = ctx->r2;
    // 0x8022D4A0: lw          $v1, 0x28($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X28);
    // 0x8022D4A4: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x8022D4A8: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x8022D4AC: and         $a1, $v1, $v0
    ctx->r5 = ctx->r3 & ctx->r2;
    // 0x8022D4B0: beq         $a1, $zero, L_8022D50C
    if (ctx->r5 == 0) {
        // 0x8022D4B4: addiu       $v0, $zero, 0x7FFF
        ctx->r2 = ADD32(0, 0X7FFF);
            goto L_8022D50C;
    }
    // 0x8022D4B4: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x8022D4B8: lhu         $a0, 0x6E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X6E);
    // 0x8022D4BC: lhu         $v1, 0x6E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X6E);
    // 0x8022D4C0: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022D4C4: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x8022D4C8: sh          $a0, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r4;
    // 0x8022D4CC: sh          $v1, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r3;
    // 0x8022D4D0: lbu         $v0, 0x62($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X62);
    // 0x8022D4D4: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
    // 0x8022D4D8: sb          $v0, 0x62($s1)
    MEM_B(0X62, ctx->r17) = ctx->r2;
    // 0x8022D4DC: lh          $v0, 0x6E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X6E);
    // 0x8022D4E0: bgtz        $v0, L_8022D504
    if (SIGNED(ctx->r2) > 0) {
        // 0x8022D4E4: addiu       $a0, $zero, 0xA0
        ctx->r4 = ADD32(0, 0XA0);
            goto L_8022D504;
    }
    // 0x8022D4E4: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x8022D4E8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022D4EC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022D4F0: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8022D4F4: lbu         $v0, 0x62($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X62);
    // 0x8022D4F8: andi        $v0, $v0, 0xF7
    ctx->r2 = ctx->r2 & 0XF7;
    // 0x8022D4FC: j           L_8022D50C
    // 0x8022D500: sb          $v0, 0x62($s1)
    MEM_B(0X62, ctx->r17) = ctx->r2;
        goto L_8022D50C;
    // 0x8022D500: sb          $v0, 0x62($s1)
    MEM_B(0X62, ctx->r17) = ctx->r2;
L_8022D504:
    // 0x8022D504: jal         0x8002A33C
    // 0x8022D508: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x8022D508: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_1:
L_8022D50C:
    // 0x8022D50C: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022D510: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022D514: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022D518: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022D51C: lw          $v0, 0x19EC($at)
    ctx->r2 = MEM_W(ctx->r1, 0X19EC);
    // 0x8022D520: jalr        $v0
    // 0x8022D524: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x8022D524: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022D528: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022D52C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022D530: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D534: jr          $ra
    // 0x8022D538: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022D538: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022EB24_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022EB24: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8022EB28: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x8022EB2C: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8022EB30: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8022EB34: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8022EB38: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8022EB3C: lbu         $v1, 0x0($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X0);
    // 0x8022EB40: lbu         $a0, 0x6($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X6);
    // 0x8022EB44: lbu         $a1, 0x3($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X3);
    // 0x8022EB48: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022EB4C: addiu       $v0, $v0, 0x1A80
    ctx->r2 = ADD32(ctx->r2, 0X1A80);
    // 0x8022EB50: sw          $zero, 0xC8($s2)
    MEM_W(0XC8, ctx->r18) = 0;
    // 0x8022EB54: sw          $zero, 0xCC($s2)
    MEM_W(0XCC, ctx->r18) = 0;
    // 0x8022EB58: sw          $v0, 0x78($s2)
    MEM_W(0X78, ctx->r18) = ctx->r2;
    // 0x8022EB5C: ori         $v1, $v1, 0x6
    ctx->r3 = ctx->r3 | 0X6;
    // 0x8022EB60: ori         $a0, $a0, 0x20
    ctx->r4 = ctx->r4 | 0X20;
    // 0x8022EB64: andi        $a1, $a1, 0x40
    ctx->r5 = ctx->r5 & 0X40;
    // 0x8022EB68: sb          $v1, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r3;
    // 0x8022EB6C: beq         $a1, $zero, L_8022EB80
    if (ctx->r5 == 0) {
        // 0x8022EB70: sb          $a0, 0x6($s2)
        MEM_B(0X6, ctx->r18) = ctx->r4;
            goto L_8022EB80;
    }
    // 0x8022EB70: sb          $a0, 0x6($s2)
    MEM_B(0X6, ctx->r18) = ctx->r4;
    // 0x8022EB74: lhu         $v0, 0x66($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X66);
    // 0x8022EB78: j           L_8022EB98
    // 0x8022EB7C: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
        goto L_8022EB98;
    // 0x8022EB7C: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
L_8022EB80:
    // 0x8022EB80: lb          $a0, 0xD($s2)
    ctx->r4 = MEM_B(ctx->r18, 0XD);
    // 0x8022EB84: jal         0x800530E8
    // 0x8022EB88: nop

    func_800530E8_2E4E8(rdram, ctx);
        goto after_0;
    // 0x8022EB88: nop

    after_0:
    // 0x8022EB8C: jal         0x80034B34
    // 0x8022EB90: nop

    func_80034B34_FF34(rdram, ctx);
        goto after_1;
    // 0x8022EB90: nop

    after_1:
    // 0x8022EB94: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
L_8022EB98:
    // 0x8022EB98: lhu         $v0, 0x64($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X64);
    // 0x8022EB9C: sh          $zero, 0x14($sp)
    MEM_H(0X14, ctx->r29) = 0;
    // 0x8022EBA0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022EBA4: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x8022EBA8: lbu         $v0, 0x3($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X3);
    // 0x8022EBAC: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x8022EBB0: beql        $v0, $zero, L_8022EBEC
    if (ctx->r2 == 0) {
        // 0x8022EBB4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022EBEC;
    }
    goto skip_0;
    // 0x8022EBB4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_0:
    // 0x8022EBB8: jal         0x800A3450
    // 0x8022EBBC: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x8022EBBC: nop

    after_2:
    // 0x8022EBC0: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x8022EBC4: lhu         $v1, 0x10($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X10);
    // 0x8022EBC8: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x8022EBCC: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022EBD0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022EBD4: jal         0x800A3450
    // 0x8022EBD8: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x8022EBD8: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    after_3:
    // 0x8022EBDC: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x8022EBE0: lhu         $v1, 0x12($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X12);
    // 0x8022EBE4: j           L_8022ECA8
    // 0x8022EBE8: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
        goto L_8022ECA8;
    // 0x8022EBE8: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
L_8022EBEC:
    // 0x8022EBEC: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8022EBF0: lb          $v1, 0x4EB8($v1)
    ctx->r3 = MEM_B(ctx->r3, 0X4EB8);
    // 0x8022EBF4: beq         $v1, $v0, L_8022EC44
    if (ctx->r3 == ctx->r2) {
        // 0x8022EBF8: nop
    
            goto L_8022EC44;
    }
    // 0x8022EBF8: nop

    // 0x8022EBFC: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022EC00: beq         $v0, $zero, L_8022EC78
    if (ctx->r2 == 0) {
        // 0x8022EC04: nop
    
            goto L_8022EC78;
    }
    // 0x8022EC04: nop

    // 0x8022EC08: bne         $v1, $zero, L_8022EC78
    if (ctx->r3 != 0) {
        // 0x8022EC0C: nop
    
            goto L_8022EC78;
    }
    // 0x8022EC0C: nop

    // 0x8022EC10: jal         0x800A3450
    // 0x8022EC14: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_4;
    // 0x8022EC14: nop

    after_4:
    // 0x8022EC18: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8022EC1C: lhu         $v1, 0x10($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X10);
    // 0x8022EC20: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
    // 0x8022EC24: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022EC28: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022EC2C: jal         0x800A3450
    // 0x8022EC30: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_5;
    // 0x8022EC30: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    after_5:
    // 0x8022EC34: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8022EC38: lhu         $v1, 0x12($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X12);
    // 0x8022EC3C: j           L_8022ECA8
    // 0x8022EC40: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
        goto L_8022ECA8;
    // 0x8022EC40: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
L_8022EC44:
    // 0x8022EC44: jal         0x800A3450
    // 0x8022EC48: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_6;
    // 0x8022EC48: nop

    after_6:
    // 0x8022EC4C: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x8022EC50: lhu         $v1, 0x10($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X10);
    // 0x8022EC54: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x8022EC58: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022EC5C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022EC60: jal         0x800A3450
    // 0x8022EC64: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_7;
    // 0x8022EC64: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    after_7:
    // 0x8022EC68: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x8022EC6C: lhu         $v1, 0x12($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X12);
    // 0x8022EC70: j           L_8022ECA8
    // 0x8022EC74: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
        goto L_8022ECA8;
    // 0x8022EC74: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
L_8022EC78:
    // 0x8022EC78: jal         0x800A3450
    // 0x8022EC7C: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_8;
    // 0x8022EC7C: nop

    after_8:
    // 0x8022EC80: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022EC84: lhu         $v1, 0x10($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X10);
    // 0x8022EC88: addiu       $v0, $v0, -0x8
    ctx->r2 = ADD32(ctx->r2, -0X8);
    // 0x8022EC8C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022EC90: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022EC94: jal         0x800A3450
    // 0x8022EC98: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_9;
    // 0x8022EC98: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    after_9:
    // 0x8022EC9C: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022ECA0: lhu         $v1, 0x12($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X12);
    // 0x8022ECA4: addiu       $v0, $v0, -0x8
    ctx->r2 = ADD32(ctx->r2, -0X8);
L_8022ECA8:
    // 0x8022ECA8: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022ECAC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022ECB0: sh          $v1, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r3;
    // 0x8022ECB4: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8022ECB8: addiu       $s0, $s2, 0x8C
    ctx->r16 = ADD32(ctx->r18, 0X8C);
    // 0x8022ECBC: jal         0x80031600
    // 0x8022ECC0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80031600_CA00(rdram, ctx);
        goto after_10;
    // 0x8022ECC0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_10:
    // 0x8022ECC4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022ECC8: addiu       $s1, $sp, 0x18
    ctx->r17 = ADD32(ctx->r29, 0X18);
    // 0x8022ECCC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022ECD0: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x8022ECD4: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8022ECD8: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8022ECDC: jal         0x80031DA8
    // 0x8022ECE0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_11;
    // 0x8022ECE0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_11:
    // 0x8022ECE4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022ECE8: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x8022ECEC: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x8022ECF0: addiu       $v0, $zero, -0x1000
    ctx->r2 = ADD32(0, -0X1000);
    // 0x8022ECF4: sh          $zero, 0x10($sp)
    MEM_H(0X10, ctx->r29) = 0;
    // 0x8022ECF8: sh          $zero, 0x12($sp)
    MEM_H(0X12, ctx->r29) = 0;
    // 0x8022ECFC: jal         0x800308E8
    // 0x8022ED00: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    func_800308E8_BCE8(rdram, ctx);
        goto after_12;
    // 0x8022ED00: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    after_12:
    // 0x8022ED04: lbu         $v0, 0x3($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X3);
    // 0x8022ED08: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x8022ED0C: bne         $v0, $zero, L_8022ED64
    if (ctx->r2 != 0) {
        // 0x8022ED10: nop
    
            goto L_8022ED64;
    }
    // 0x8022ED10: nop

    // 0x8022ED14: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022ED18: lb          $v0, 0x4EB7($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X4EB7);
    // 0x8022ED1C: slti        $v0, $v0, 0x3
    ctx->r2 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x8022ED20: bne         $v0, $zero, L_8022ED64
    if (ctx->r2 != 0) {
        // 0x8022ED24: nop
    
            goto L_8022ED64;
    }
    // 0x8022ED24: nop

    // 0x8022ED28: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x8022ED2C: sll         $v0, $v1, 4
    ctx->r2 = S32(ctx->r3 << 4);
    // 0x8022ED30: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022ED34: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
    // 0x8022ED38: sh          $v0, 0x44($s2)
    MEM_H(0X44, ctx->r18) = ctx->r2;
    // 0x8022ED3C: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x8022ED40: sll         $v0, $v1, 4
    ctx->r2 = S32(ctx->r3 << 4);
    // 0x8022ED44: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022ED48: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
    // 0x8022ED4C: sh          $v0, 0x46($s2)
    MEM_H(0X46, ctx->r18) = ctx->r2;
    // 0x8022ED50: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x8022ED54: sll         $v0, $v1, 4
    ctx->r2 = S32(ctx->r3 << 4);
    // 0x8022ED58: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022ED5C: j           L_8022EDB4
    // 0x8022ED60: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
        goto L_8022EDB4;
    // 0x8022ED60: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
L_8022ED64:
    // 0x8022ED64: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x8022ED68: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8022ED6C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022ED70: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022ED74: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022ED78: srl         $v0, $v0, 2
    ctx->r2 = S32(U32(ctx->r2) >> 2);
    // 0x8022ED7C: sh          $v0, 0x44($s2)
    MEM_H(0X44, ctx->r18) = ctx->r2;
    // 0x8022ED80: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x8022ED84: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8022ED88: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022ED8C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022ED90: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022ED94: srl         $v0, $v0, 2
    ctx->r2 = S32(U32(ctx->r2) >> 2);
    // 0x8022ED98: sh          $v0, 0x46($s2)
    MEM_H(0X46, ctx->r18) = ctx->r2;
    // 0x8022ED9C: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x8022EDA0: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8022EDA4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022EDA8: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022EDAC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022EDB0: srl         $v0, $v0, 2
    ctx->r2 = S32(U32(ctx->r2) >> 2);
L_8022EDB4:
    // 0x8022EDB4: sh          $v0, 0x48($s2)
    MEM_H(0X48, ctx->r18) = ctx->r2;
    // 0x8022EDB8: lbu         $v0, 0x3($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X3);
    // 0x8022EDBC: sh          $zero, 0x4C($s2)
    MEM_H(0X4C, ctx->r18) = 0;
    // 0x8022EDC0: sh          $zero, 0x4E($s2)
    MEM_H(0X4E, ctx->r18) = 0;
    // 0x8022EDC4: sh          $zero, 0x50($s2)
    MEM_H(0X50, ctx->r18) = 0;
    // 0x8022EDC8: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x8022EDCC: beq         $v0, $zero, L_8022EE28
    if (ctx->r2 == 0) {
        // 0x8022EDD0: sh          $zero, 0x7C($s2)
        MEM_H(0X7C, ctx->r18) = 0;
            goto L_8022EE28;
    }
    // 0x8022EDD0: sh          $zero, 0x7C($s2)
    MEM_H(0X7C, ctx->r18) = 0;
    // 0x8022EDD4: lh          $v1, 0x44($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X44);
    // 0x8022EDD8: sll         $v0, $v1, 3
    ctx->r2 = S32(ctx->r3 << 3);
    // 0x8022EDDC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022EDE0: lw          $v1, 0x1C($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X1C);
    // 0x8022EDE4: lh          $a0, 0x46($s2)
    ctx->r4 = MEM_H(ctx->r18, 0X46);
    // 0x8022EDE8: sll         $v0, $v0, 6
    ctx->r2 = S32(ctx->r2 << 6);
    // 0x8022EDEC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022EDF0: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
    // 0x8022EDF4: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8022EDF8: sw          $v1, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->r3;
    // 0x8022EDFC: lw          $v1, 0x20($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X20);
    // 0x8022EE00: lh          $a0, 0x48($s2)
    ctx->r4 = MEM_H(ctx->r18, 0X48);
    // 0x8022EE04: sll         $v0, $v0, 6
    ctx->r2 = S32(ctx->r2 << 6);
    // 0x8022EE08: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022EE0C: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
    // 0x8022EE10: sw          $v1, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->r3;
    // 0x8022EE14: lw          $v1, 0x24($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X24);
    // 0x8022EE18: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8022EE1C: sll         $v0, $v0, 6
    ctx->r2 = S32(ctx->r2 << 6);
    // 0x8022EE20: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022EE24: sw          $v1, 0x24($s2)
    MEM_W(0X24, ctx->r18) = ctx->r3;
L_8022EE28:
    // 0x8022EE28: addiu       $a0, $s2, 0x34
    ctx->r4 = ADD32(ctx->r18, 0X34);
    // 0x8022EE2C: lhu         $v0, 0x1C($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X1C);
    // 0x8022EE30: lhu         $v1, 0x20($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X20);
    // 0x8022EE34: lhu         $a3, 0x24($s2)
    ctx->r7 = MEM_HU(ctx->r18, 0X24);
    // 0x8022EE38: addiu       $a1, $s2, 0x1C
    ctx->r5 = ADD32(ctx->r18, 0X1C);
    // 0x8022EE3C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x8022EE40: sh          $v0, 0x14($s2)
    MEM_H(0X14, ctx->r18) = ctx->r2;
    // 0x8022EE44: sh          $v0, 0xAC($s2)
    MEM_H(0XAC, ctx->r18) = ctx->r2;
    // 0x8022EE48: sh          $v1, 0x16($s2)
    MEM_H(0X16, ctx->r18) = ctx->r3;
    // 0x8022EE4C: sh          $v1, 0xAE($s2)
    MEM_H(0XAE, ctx->r18) = ctx->r3;
    // 0x8022EE50: sh          $a3, 0x18($s2)
    MEM_H(0X18, ctx->r18) = ctx->r7;
    // 0x8022EE54: jal         0x8009A3B4
    // 0x8022EE58: sh          $a3, 0xB0($s2)
    MEM_H(0XB0, ctx->r18) = ctx->r7;
    memcpy_recomp(rdram, ctx);
        goto after_13;
    // 0x8022EE58: sh          $a3, 0xB0($s2)
    MEM_H(0XB0, ctx->r18) = ctx->r7;
    after_13:
    // 0x8022EE5C: addiu       $a0, $s2, 0x2C
    ctx->r4 = ADD32(ctx->r18, 0X2C);
    // 0x8022EE60: addiu       $s0, $s2, 0x14
    ctx->r16 = ADD32(ctx->r18, 0X14);
    // 0x8022EE64: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022EE68: jal         0x8009A3B4
    // 0x8022EE6C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_14;
    // 0x8022EE6C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_14:
    // 0x8022EE70: lui         $v0, 0x280
    ctx->r2 = S32(0X280 << 16);
    // 0x8022EE74: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x8022EE78: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022EE7C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022EE80: sw          $v0, 0xB4($s2)
    MEM_W(0XB4, ctx->r18) = ctx->r2;
    // 0x8022EE84: addiu       $v0, $zero, 0x82
    ctx->r2 = ADD32(0, 0X82);
    // 0x8022EE88: jal         0x8004D5D4
    // 0x8022EE8C: sb          $v0, 0x2($s2)
    MEM_B(0X2, ctx->r18) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_15;
    // 0x8022EE8C: sb          $v0, 0x2($s2)
    MEM_B(0X2, ctx->r18) = ctx->r2;
    after_15:
    // 0x8022EE90: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022EE94: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x8022EE98: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8022EE9C: addiu       $v0, $zero, 0x2E
    ctx->r2 = ADD32(0, 0X2E);
    // 0x8022EEA0: jal         0x800710B8
    // 0x8022EEA4: sb          $v0, 0x2($s2)
    MEM_B(0X2, ctx->r18) = ctx->r2;
    func_800710B8_4C4B8(rdram, ctx);
        goto after_16;
    // 0x8022EEA4: sb          $v0, 0x2($s2)
    MEM_B(0X2, ctx->r18) = ctx->r2;
    after_16:
    // 0x8022EEA8: lbu         $v1, 0x8($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X8);
    // 0x8022EEAC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022EEB0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022EEB4: sb          $v0, 0xB($s2)
    MEM_B(0XB, ctx->r18) = ctx->r2;
    // 0x8022EEB8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022EEBC: jal         0x8022F164
    // 0x8022EEC0: sb          $v1, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r3;
    func_8022F164_ovl14(rdram, ctx);
        goto after_17;
    // 0x8022EEC0: sb          $v1, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r3;
    after_17:
    // 0x8022EEC4: jal         0x8022F030
    // 0x8022EEC8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8022F030_ovl14(rdram, ctx);
        goto after_18;
    // 0x8022EEC8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_18:
    // 0x8022EECC: addiu       $a0, $zero, 0x120
    ctx->r4 = ADD32(0, 0X120);
    // 0x8022EED0: jal         0x8002A33C
    // 0x8022EED4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_19;
    // 0x8022EED4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_19:
    // 0x8022EED8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8022EEDC: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x8022EEE0: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8022EEE4: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8022EEE8: jr          $ra
    // 0x8022EEEC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8022EEEC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8022D954_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D954: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022D958: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D95C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022D960: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022D964: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022D968: lbu         $v0, 0x36A($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X36A);
    // 0x8022D96C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022D970: addiu       $a1, $a1, 0x49B0
    ctx->r5 = ADD32(ctx->r5, 0X49B0);
    // 0x8022D974: andi        $v0, $v0, 0x14
    ctx->r2 = ctx->r2 & 0X14;
    // 0x8022D978: beq         $v0, $zero, L_8022D9C4
    if (ctx->r2 == 0) {
        // 0x8022D97C: addiu       $s1, $s0, 0x308
        ctx->r17 = ADD32(ctx->r16, 0X308);
            goto L_8022D9C4;
    }
    // 0x8022D97C: addiu       $s1, $s0, 0x308
    ctx->r17 = ADD32(ctx->r16, 0X308);
    // 0x8022D980: lbu         $v0, 0x36E($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X36E);
    // 0x8022D984: sltiu       $v0, $v0, 0x3C
    ctx->r2 = ctx->r2 < 0X3C ? 1 : 0;
    // 0x8022D988: beq         $v0, $zero, L_8022D9C4
    if (ctx->r2 == 0) {
        // 0x8022D98C: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022D9C4;
    }
    // 0x8022D98C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022D990: lhu         $a2, 0x56($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X56);
    // 0x8022D994: lhu         $v0, 0x322($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X322);
    // 0x8022D998: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    // 0x8022D99C: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    // 0x8022D9A0: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x8022D9A4: jal         0x8004F820
    // 0x8022D9A8: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022D9A8: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_0:
    // 0x8022D9AC: lhu         $v1, 0x322($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X322);
    // 0x8022D9B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D9B4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022D9B8: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022D9BC: jal         0x8022DB00
    // 0x8022D9C0: sh          $v1, 0x322($s0)
    MEM_H(0X322, ctx->r16) = ctx->r3;
    func_8022DB00_ovl14(rdram, ctx);
        goto after_1;
    // 0x8022D9C0: sh          $v1, 0x322($s0)
    MEM_H(0X322, ctx->r16) = ctx->r3;
    after_1:
L_8022D9C4:
    // 0x8022D9C4: lbu         $v0, 0x66($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X66);
    // 0x8022D9C8: bne         $v0, $zero, L_8022D9FC
    if (ctx->r2 != 0) {
        // 0x8022D9CC: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_8022D9FC;
    }
    // 0x8022D9CC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022D9D0: lb          $v0, 0x65($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X65);
    // 0x8022D9D4: beq         $v0, $zero, L_8022D9E4
    if (ctx->r2 == 0) {
        // 0x8022D9D8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022D9E4;
    }
    // 0x8022D9D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022D9DC: j           L_8022DA00
    // 0x8022D9E0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022DA00;
    // 0x8022D9E0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022D9E4:
    // 0x8022D9E4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022D9E8: sb          $v0, 0x65($s1)
    MEM_B(0X65, ctx->r17) = ctx->r2;
    // 0x8022D9EC: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x8022D9F0: sb          $v0, 0x64($s1)
    MEM_B(0X64, ctx->r17) = ctx->r2;
    // 0x8022D9F4: j           L_8022DA00
    // 0x8022D9F8: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
        goto L_8022DA00;
    // 0x8022D9F8: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_8022D9FC:
    // 0x8022D9FC: sb          $v0, 0x66($s1)
    MEM_B(0X66, ctx->r17) = ctx->r2;
L_8022DA00:
    // 0x8022DA00: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022DA04: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022DA08: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022DA0C: jr          $ra
    // 0x8022DA10: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022DA10: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022DD4C_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DD4C: sll         $v0, $a1, 16
    ctx->r2 = S32(ctx->r5 << 16);
    // 0x8022DD50: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022DD54: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x8022DD58: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8022DD5C: subu        $v0, $v1, $a2
    ctx->r2 = SUB32(ctx->r3, ctx->r6);
    // 0x8022DD60: bltzl       $v0, L_8022DD68
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022DD64: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_8022DD68;
    }
    goto skip_0;
    // 0x8022DD64: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_0:
L_8022DD68:
    // 0x8022DD68: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x8022DD6C: bne         $v0, $zero, L_8022DD84
    if (ctx->r2 != 0) {
        // 0x8022DD70: slt         $v0, $a2, $v1
        ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_8022DD84;
    }
    // 0x8022DD70: slt         $v0, $a2, $v1
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8022DD74: bne         $v0, $zero, L_8022DD80
    if (ctx->r2 != 0) {
        // 0x8022DD78: addiu       $v0, $a1, 0x20
        ctx->r2 = ADD32(ctx->r5, 0X20);
            goto L_8022DD80;
    }
    // 0x8022DD78: addiu       $v0, $a1, 0x20
    ctx->r2 = ADD32(ctx->r5, 0X20);
    // 0x8022DD7C: addiu       $v0, $a1, -0x20
    ctx->r2 = ADD32(ctx->r5, -0X20);
L_8022DD80:
    // 0x8022DD80: sh          $v0, 0x328($a0)
    MEM_H(0X328, ctx->r4) = ctx->r2;
L_8022DD84:
    // 0x8022DD84: jr          $ra
    // 0x8022DD88: nop

    TRACE_RETURN()
    return;
    // 0x8022DD88: nop

;}
RECOMP_FUNC void func_802281D4_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802281D4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x802281D8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802281DC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802281E0: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x802281E4: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x802281E8: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x802281EC: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x802281F0: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x802281F4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x802281F8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x802281FC: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80228200: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x80228204: beq         $v0, $zero, L_802284E4
    if (ctx->r2 == 0) {
        // 0x80228208: addiu       $s2, $s0, 0x348
        ctx->r18 = ADD32(ctx->r16, 0X348);
            goto L_802284E4;
    }
    // 0x80228208: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x8022820C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80228210: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80228214: addu        $at, $at, $v0
    gpr jr_addend_8022821C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80228218: lw          $v0, 0x1C70($at)
    ctx->r2 = ADD32(ctx->r1, 0X1C70);
    // 0x8022821C: jr          $v0
    // 0x80228220: nop

    switch (jr_addend_8022821C >> 2) {
        case 0: goto L_80228374; break;
        case 1: goto L_802283E0; break;
        case 2: goto L_802283E0; break;
        case 3: goto L_802284C0; break;
        case 4: goto L_80228224; break;
        default: switch_error(__func__, 0x8022821C, 0x80231C70);
    }
    // 0x80228220: nop

L_80228224:
    // 0x80228224: lw          $v0, 0x14($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X14);
    // 0x80228228: lui         $v1, 0x2000
    ctx->r3 = S32(0X2000 << 16);
    // 0x8022822C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80228230: bne         $v0, $zero, L_8022833C
    if (ctx->r2 != 0) {
        // 0x80228234: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022833C;
    }
    // 0x80228234: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80228238: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8022823C: lh          $v1, 0x4($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X4);
    // 0x80228240: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80228244: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80228248: lbu         $v0, 0x11BC($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X11BC);
    // 0x8022824C: bne         $v1, $v0, L_80228328
    if (ctx->r3 != ctx->r2) {
        // 0x80228250: nop
    
            goto L_80228328;
    }
    // 0x80228250: nop

    // 0x80228254: lh          $v0, 0x34($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X34);
    // 0x80228258: slti        $v0, $v0, 0x3
    ctx->r2 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x8022825C: beq         $v0, $zero, L_80228328
    if (ctx->r2 == 0) {
        // 0x80228260: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_80228328;
    }
    // 0x80228260: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x80228264: addiu       $s6, $zero, 0x3
    ctx->r22 = ADD32(0, 0X3);
    // 0x80228268: addiu       $s5, $zero, 0x83
    ctx->r21 = ADD32(0, 0X83);
    // 0x8022826C: lui         $s4, 0x8023
    ctx->r20 = S32(0X8023 << 16);
    // 0x80228270: addiu       $s4, $s4, 0x11C0
    ctx->r20 = ADD32(ctx->r20, 0X11C0);
    // 0x80228274: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
L_80228278:
    // 0x80228278: jal         0x8004F144
    // 0x8022827C: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x8022827C: nop

    after_0:
    // 0x80228280: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80228284: beq         $v1, $zero, L_80228318
    if (ctx->r3 == 0) {
        // 0x80228288: nop
    
            goto L_80228318;
    }
    // 0x80228288: nop

    // 0x8022828C: sb          $s6, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r22;
    // 0x80228290: sb          $s5, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r21;
    // 0x80228294: sb          $zero, 0x3($v1)
    MEM_B(0X3, ctx->r3) = 0;
    // 0x80228298: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8022829C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802282A0: addu        $v0, $v0, $s4
    ctx->r2 = ADD32(ctx->r2, ctx->r20);
    // 0x802282A4: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x802282A8: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x802282AC: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x802282B0: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x802282B4: lhu         $v0, 0x180($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X180);
    // 0x802282B8: sh          $v0, 0x1C($v1)
    MEM_H(0X1C, ctx->r3) = ctx->r2;
    // 0x802282BC: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x802282C0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802282C4: addu        $v0, $v0, $s4
    ctx->r2 = ADD32(ctx->r2, ctx->r20);
    // 0x802282C8: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x802282CC: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x802282D0: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x802282D4: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x802282D8: lhu         $v0, 0x182($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X182);
    // 0x802282DC: subu        $v0, $v0, $s3
    ctx->r2 = SUB32(ctx->r2, ctx->r19);
    // 0x802282E0: sh          $v0, 0x1E($v1)
    MEM_H(0X1E, ctx->r3) = ctx->r2;
    // 0x802282E4: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x802282E8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802282EC: addu        $v0, $v0, $s4
    ctx->r2 = ADD32(ctx->r2, ctx->r20);
    // 0x802282F0: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x802282F4: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x802282F8: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x802282FC: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x80228300: lhu         $v0, 0x184($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X184);
    // 0x80228304: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80228308: sh          $v0, 0x20($v1)
    MEM_H(0X20, ctx->r3) = ctx->r2;
    // 0x8022830C: slti        $v0, $s1, 0x4
    ctx->r2 = SIGNED(ctx->r17) < 0X4 ? 1 : 0;
    // 0x80228310: bne         $v0, $zero, L_80228278
    if (ctx->r2 != 0) {
        // 0x80228314: addiu       $s3, $s3, 0xC
        ctx->r19 = ADD32(ctx->r19, 0XC);
            goto L_80228278;
    }
    // 0x80228314: addiu       $s3, $s3, 0xC
    ctx->r19 = ADD32(ctx->r19, 0XC);
L_80228318:
    // 0x80228318: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8022831C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228320: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80228324: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
L_80228328:
    // 0x80228328: lhu         $v0, 0x4($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X4);
    // 0x8022832C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228330: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80228334: j           L_802284E4
    // 0x80228338: sh          $v0, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r2;
        goto L_802284E4;
    // 0x80228338: sh          $v0, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r2;
L_8022833C:
    // 0x8022833C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80228340: addiu       $a1, $s2, 0x1C
    ctx->r5 = ADD32(ctx->r18, 0X1C);
    // 0x80228344: jal         0x8004FEA0
    // 0x80228348: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004FEA0_2B2A0(rdram, ctx);
        goto after_1;
    // 0x80228348: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x8022834C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80228350: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x80228354: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x80228358: beq         $v0, $zero, L_8022836C
    if (ctx->r2 == 0) {
        // 0x8022835C: addiu       $v0, $v1, 0x800
        ctx->r2 = ADD32(ctx->r3, 0X800);
            goto L_8022836C;
    }
    // 0x8022835C: addiu       $v0, $v1, 0x800
    ctx->r2 = ADD32(ctx->r3, 0X800);
    // 0x80228360: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80228364: j           L_80228370
    // 0x80228368: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
        goto L_80228370;
    // 0x80228368: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_8022836C:
    // 0x8022836C: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
L_80228370:
    // 0x80228370: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_80228374:
    // 0x80228374: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80228378: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022837C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80228380: addiu       $v0, $zero, -0x100
    ctx->r2 = ADD32(0, -0X100);
    // 0x80228384: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80228388: addiu       $v0, $zero, 0x300
    ctx->r2 = ADD32(0, 0X300);
    // 0x8022838C: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x80228390: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80228394: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x80228398: sb          $v0, 0x110($s0)
    MEM_B(0X110, ctx->r16) = ctx->r2;
    // 0x8022839C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802283A0: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x802283A4: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x802283A8: addiu       $a0, $zero, 0xA2
    ctx->r4 = ADD32(0, 0XA2);
    // 0x802283AC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x802283B0: sh          $zero, 0x8($s2)
    MEM_H(0X8, ctx->r18) = 0;
    // 0x802283B4: sh          $zero, 0x4($s2)
    MEM_H(0X4, ctx->r18) = 0;
    // 0x802283B8: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x802283BC: andi        $v0, $v0, 0xFFB3
    ctx->r2 = ctx->r2 & 0XFFB3;
    // 0x802283C0: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
    // 0x802283C4: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x802283C8: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x802283CC: addiu       $v0, $zero, -0x300
    ctx->r2 = ADD32(0, -0X300);
    // 0x802283D0: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x802283D4: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x802283D8: jal         0x8002A33C
    // 0x802283DC: sh          $v0, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x802283DC: sh          $v0, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r2;
    after_2:
L_802283E0:
    // 0x802283E0: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x802283E4: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x802283E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802283EC: jal         0x8004DA90
    // 0x802283F0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_3;
    // 0x802283F0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_3:
    // 0x802283F4: lhu         $v0, 0x46($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X46);
    // 0x802283F8: lhu         $v1, 0x4E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X4E);
    // 0x802283FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228400: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80228404: jal         0x80040F30
    // 0x80228408: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    func_80040F30_1C330(rdram, ctx);
        goto after_4;
    // 0x80228408: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    after_4:
    // 0x8022840C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80228410: beq         $v1, $zero, L_802284E4
    if (ctx->r3 == 0) {
        // 0x80228414: andi        $v0, $v1, 0xF00
        ctx->r2 = ctx->r3 & 0XF00;
            goto L_802284E4;
    }
    // 0x80228414: andi        $v0, $v1, 0xF00
    ctx->r2 = ctx->r3 & 0XF00;
    // 0x80228418: beq         $v0, $zero, L_80228434
    if (ctx->r2 == 0) {
        // 0x8022841C: andi        $v0, $v1, 0x1000
        ctx->r2 = ctx->r3 & 0X1000;
            goto L_80228434;
    }
    // 0x8022841C: andi        $v0, $v1, 0x1000
    ctx->r2 = ctx->r3 & 0X1000;
    // 0x80228420: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80228424: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x80228428: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022842C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80228430: andi        $v0, $v1, 0x1000
    ctx->r2 = ctx->r3 & 0X1000;
L_80228434:
    // 0x80228434: beq         $v0, $zero, L_802284E8
    if (ctx->r2 == 0) {
        // 0x80228438: addiu       $v0, $zero, 0x190C
        ctx->r2 = ADD32(0, 0X190C);
            goto L_802284E8;
    }
    // 0x80228438: addiu       $v0, $zero, 0x190C
    ctx->r2 = ADD32(0, 0X190C);
    // 0x8022843C: lhu         $v1, 0x0($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X0);
    // 0x80228440: andi        $v0, $v1, 0x40
    ctx->r2 = ctx->r3 & 0X40;
    // 0x80228444: bne         $v0, $zero, L_80228498
    if (ctx->r2 != 0) {
        // 0x80228448: addiu       $a0, $zero, 0xDA
        ctx->r4 = ADD32(0, 0XDA);
            goto L_80228498;
    }
    // 0x80228448: addiu       $a0, $zero, 0xDA
    ctx->r4 = ADD32(0, 0XDA);
    // 0x8022844C: ori         $v0, $v1, 0x40
    ctx->r2 = ctx->r3 | 0X40;
    // 0x80228450: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
    // 0x80228454: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x80228458: beq         $v0, $zero, L_80228488
    if (ctx->r2 == 0) {
        // 0x8022845C: nop
    
            goto L_80228488;
    }
    // 0x8022845C: nop

    // 0x80228460: lh          $v0, 0x34($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X34);
    // 0x80228464: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80228468: slti        $v0, $v0, 0x3
    ctx->r2 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x8022846C: beq         $v0, $zero, L_80228488
    if (ctx->r2 == 0) {
        // 0x80228470: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_80228488;
    }
    // 0x80228470: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x80228474: sh          $v0, 0x34($s2)
    MEM_H(0X34, ctx->r18) = ctx->r2;
    // 0x80228478: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022847C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80228480: jal         0x8007A290
    // 0x80228484: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8007A290_55690(rdram, ctx);
        goto after_5;
    // 0x80228484: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
L_80228488:
    // 0x80228488: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x8022848C: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
    // 0x80228490: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
    // 0x80228494: addiu       $a0, $zero, 0xDA
    ctx->r4 = ADD32(0, 0XDA);
L_80228498:
    // 0x80228498: jal         0x8002A33C
    // 0x8022849C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_6;
    // 0x8022849C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_6:
    // 0x802284A0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802284A4: addiu       $v1, $zero, 0x60
    ctx->r3 = ADD32(0, 0X60);
    // 0x802284A8: sh          $v1, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r3;
    // 0x802284AC: addiu       $v1, $zero, -0x200
    ctx->r3 = ADD32(0, -0X200);
    // 0x802284B0: sh          $v1, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r3;
    // 0x802284B4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802284B8: j           L_802284E4
    // 0x802284BC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_802284E4;
    // 0x802284BC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802284C0:
    // 0x802284C0: lbu         $v0, 0xA4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA4);
    // 0x802284C4: bne         $v0, $zero, L_802284E8
    if (ctx->r2 != 0) {
        // 0x802284C8: addiu       $v0, $zero, 0x190C
        ctx->r2 = ADD32(0, 0X190C);
            goto L_802284E8;
    }
    // 0x802284C8: addiu       $v0, $zero, 0x190C
    ctx->r2 = ADD32(0, 0X190C);
    // 0x802284CC: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x802284D0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802284D4: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x802284D8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802284DC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802284E0: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_802284E4:
    // 0x802284E4: addiu       $v0, $zero, 0x190C
    ctx->r2 = ADD32(0, 0X190C);
L_802284E8:
    // 0x802284E8: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x802284EC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x802284F0: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x802284F4: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x802284F8: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x802284FC: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80228500: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80228504: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80228508: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022850C: jr          $ra
    // 0x80228510: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80228510: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8022AE48_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AE48: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    // 0x8022AE4C: addiu       $v0, $zero, 0x39
    ctx->r2 = ADD32(0, 0X39);
    // 0x8022AE50: beq         $a0, $v0, L_8022AE74
    if (ctx->r4 == ctx->r2) {
        // 0x8022AE54: slti        $v0, $a0, 0x39
        ctx->r2 = SIGNED(ctx->r4) < 0X39 ? 1 : 0;
            goto L_8022AE74;
    }
    // 0x8022AE54: slti        $v0, $a0, 0x39
    ctx->r2 = SIGNED(ctx->r4) < 0X39 ? 1 : 0;
    // 0x8022AE58: bne         $v0, $zero, L_8022AE80
    if (ctx->r2 != 0) {
        // 0x8022AE5C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022AE80;
    }
    // 0x8022AE5C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022AE60: slti        $v0, $a0, 0x4E
    ctx->r2 = SIGNED(ctx->r4) < 0X4E ? 1 : 0;
    // 0x8022AE64: beq         $v0, $zero, L_8022AE7C
    if (ctx->r2 == 0) {
        // 0x8022AE68: slti        $v0, $a0, 0x4C
        ctx->r2 = SIGNED(ctx->r4) < 0X4C ? 1 : 0;
            goto L_8022AE7C;
    }
    // 0x8022AE68: slti        $v0, $a0, 0x4C
    ctx->r2 = SIGNED(ctx->r4) < 0X4C ? 1 : 0;
    // 0x8022AE6C: bne         $v0, $zero, L_8022AE80
    if (ctx->r2 != 0) {
        // 0x8022AE70: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022AE80;
    }
    // 0x8022AE70: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022AE74:
    // 0x8022AE74: j           L_8022AE80
    // 0x8022AE78: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_8022AE80;
    // 0x8022AE78: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8022AE7C:
    // 0x8022AE7C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022AE80:
    // 0x8022AE80: jr          $ra
    // 0x8022AE84: nop

    TRACE_RETURN()
    return;
    // 0x8022AE84: nop

;}
RECOMP_FUNC void func_8022A968_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A968: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022A96C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A970: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A974: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022A978: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022A97C: lh          $a3, 0x34E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X34E);
    // 0x8022A980: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022A984: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022A988: jal         0x8004F820
    // 0x8022A98C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022A98C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x8022A990: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022A994: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022A998: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022A99C: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022A9A0: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8022A9A4: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x8022A9A8: bne         $v0, $zero, L_8022A9E0
    if (ctx->r2 != 0) {
        // 0x8022A9AC: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_8022A9E0;
    }
    // 0x8022A9AC: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022A9B0: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x8022A9B4: lbu         $v1, 0x34B($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34B);
    // 0x8022A9B8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022A9BC: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x8022A9C0: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x8022A9C4: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    // 0x8022A9C8: jal         0x8022AE38
    // 0x8022A9CC: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
    func_8022AE38_ovl14(rdram, ctx);
        goto after_1;
    // 0x8022A9CC: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
    after_1:
    // 0x8022A9D0: jal         0x80034E3C
    // 0x8022A9D4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80034E3C_1023C(rdram, ctx);
        goto after_2;
    // 0x8022A9D4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_2:
    // 0x8022A9D8: j           L_8022A9FC
    // 0x8022A9DC: nop

        goto L_8022A9FC;
    // 0x8022A9DC: nop

L_8022A9E0:
    // 0x8022A9E0: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022A9E4: lb          $v1, -0x3C18($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3C18);
    // 0x8022A9E8: bne         $v1, $v0, L_8022A9FC
    if (ctx->r3 != ctx->r2) {
        // 0x8022A9EC: nop
    
            goto L_8022A9FC;
    }
    // 0x8022A9EC: nop

    // 0x8022A9F0: lbu         $v0, 0x34B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X34B);
    // 0x8022A9F4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022A9F8: sb          $v0, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r2;
L_8022A9FC:
    // 0x8022A9FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022AA00: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022AA04: jr          $ra
    // 0x8022AA08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022AA08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022FA0C_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FA0C: lhu         $v0, 0x38($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X38);
    // 0x8022FA10: lhu         $v1, 0x3A($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X3A);
    // 0x8022FA14: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x8022FA18: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8022FA1C: sh          $v1, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = ctx->r3;
    // 0x8022FA20: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022FA24: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8022FA28: sh          $v0, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r2;
    // 0x8022FA2C: addiu       $v0, $zero, -0x64
    ctx->r2 = ADD32(0, -0X64);
    // 0x8022FA30: bne         $v1, $v0, L_8022FA44
    if (ctx->r3 != ctx->r2) {
        // 0x8022FA34: nop
    
            goto L_8022FA44;
    }
    // 0x8022FA34: nop

    // 0x8022FA38: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x8022FA3C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022FA40: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
L_8022FA44:
    // 0x8022FA44: jr          $ra
    // 0x8022FA48: nop

    TRACE_RETURN()
    return;
    // 0x8022FA48: nop

;}
RECOMP_FUNC void func_8022DA14_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DA14: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022DA18: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022DA1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022DA20: jal         0x8004F144
    // 0x8022DA24: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x8022DA24: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x8022DA28: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022DA2C: beq         $v1, $zero, L_8022DA64
    if (ctx->r3 == 0) {
        // 0x8022DA30: addiu       $a0, $v1, 0x38
        ctx->r4 = ADD32(ctx->r3, 0X38);
            goto L_8022DA64;
    }
    // 0x8022DA30: addiu       $a0, $v1, 0x38
    ctx->r4 = ADD32(ctx->r3, 0X38);
    // 0x8022DA34: addiu       $a1, $s0, 0x190
    ctx->r5 = ADD32(ctx->r16, 0X190);
    // 0x8022DA38: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022DA3C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022DA40: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8022DA44: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022DA48: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x8022DA4C: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8022DA50: jal         0x8009A3B4
    // 0x8022DA54: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022DA54: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    after_1:
    // 0x8022DA58: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022DA5C: jal         0x8007A1B8
    // 0x8022DA60: addiu       $a1, $s0, 0x180
    ctx->r5 = ADD32(ctx->r16, 0X180);
    func_8007A1B8_555B8(rdram, ctx);
        goto after_2;
    // 0x8022DA60: addiu       $a1, $s0, 0x180
    ctx->r5 = ADD32(ctx->r16, 0X180);
    after_2:
L_8022DA64:
    // 0x8022DA64: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8022DA68: bne         $v0, $zero, L_8022DAEC
    if (ctx->r2 != 0) {
        // 0x8022DA6C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022DAEC;
    }
    // 0x8022DA6C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022DA70: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022DA74: addiu       $a1, $s0, 0x190
    ctx->r5 = ADD32(ctx->r16, 0X190);
    // 0x8022DA78: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022DA7C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022DA80: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8022DA84: sb          $zero, 0x2($s0)
    MEM_B(0X2, ctx->r16) = 0;
    // 0x8022DA88: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x8022DA8C: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    // 0x8022DA90: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
    // 0x8022DA94: jal         0x8009A3B4
    // 0x8022DA98: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8022DA98: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    after_3:
    // 0x8022DA9C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022DAA0: addiu       $a1, $zero, -0x300
    ctx->r5 = ADD32(0, -0X300);
    // 0x8022DAA4: lh          $v0, 0x190($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X190);
    // 0x8022DAA8: lh          $v1, 0x192($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X192);
    // 0x8022DAAC: lh          $a3, 0x194($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X194);
    // 0x8022DAB0: addiu       $a2, $zero, -0x400
    ctx->r6 = ADD32(0, -0X400);
    // 0x8022DAB4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022DAB8: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022DABC: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x8022DAC0: sw          $a3, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r7;
    // 0x8022DAC4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022DAC8: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x8022DACC: jal         0x8004DA90
    // 0x8022DAD0: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    func_8004DA90_28E90(rdram, ctx);
        goto after_4;
    // 0x8022DAD0: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    after_4:
    // 0x8022DAD4: addiu       $a0, $s0, 0x54
    ctx->r4 = ADD32(ctx->r16, 0X54);
    // 0x8022DAD8: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x8022DADC: jal         0x8009A3B4
    // 0x8022DAE0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x8022DAE0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_5:
    // 0x8022DAE4: j           L_8022DAF0
    // 0x8022DAE8: nop

        goto L_8022DAF0;
    // 0x8022DAE8: nop

L_8022DAEC:
    // 0x8022DAEC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022DAF0:
    // 0x8022DAF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022DAF4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022DAF8: jr          $ra
    // 0x8022DAFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022DAFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802254D0_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802254D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802254D4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802254D8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802254DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802254E0: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x802254E4: bne         $v0, $zero, L_80225500
    if (ctx->r2 != 0) {
        // 0x802254E8: nop
    
            goto L_80225500;
    }
    // 0x802254E8: nop

    // 0x802254EC: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802254F0: jal         0x800607C4
    // 0x802254F4: addiu       $a0, $a0, 0xB78
    ctx->r4 = ADD32(ctx->r4, 0XB78);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x802254F4: addiu       $a0, $a0, 0xB78
    ctx->r4 = ADD32(ctx->r4, 0XB78);
    after_0:
    // 0x802254F8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802254FC: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225500:
    // 0x80225500: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225504: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225508: jr          $ra
    // 0x8022550C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022550C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802279F0_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802279F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802279F4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802279F8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802279FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227A00: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80227A04: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80227A08: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227A0C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80227A10: lw          $v0, 0x1190($at)
    ctx->r2 = MEM_W(ctx->r1, 0X1190);
    // 0x80227A14: jalr        $v0
    // 0x80227A18: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80227A18: nop

    after_0:
    // 0x80227A1C: sw          $zero, 0x35C($s0)
    MEM_W(0X35C, ctx->r16) = 0;
    // 0x80227A20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227A24: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227A28: jr          $ra
    // 0x80227A2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227A2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022CFB4_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CFB4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022CFB8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8022CFBC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022CFC0: lui         $v0, 0x1F
    ctx->r2 = S32(0X1F << 16);
    // 0x8022CFC4: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8022CFC8: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8022CFCC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8022CFD0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022CFD4: lw          $v1, 0x80($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X80);
    // 0x8022CFD8: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x8022CFDC: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8022CFE0: bne         $v0, $zero, L_8022CFF4
    if (ctx->r2 != 0) {
        // 0x8022CFE4: addiu       $s2, $s1, 0x2E8
        ctx->r18 = ADD32(ctx->r17, 0X2E8);
            goto L_8022CFF4;
    }
    // 0x8022CFE4: addiu       $s2, $s1, 0x2E8
    ctx->r18 = ADD32(ctx->r17, 0X2E8);
    // 0x8022CFE8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022CFEC: j           L_8022CFF8
    // 0x8022CFF0: sb          $v0, 0x33C($s1)
    MEM_B(0X33C, ctx->r17) = ctx->r2;
        goto L_8022CFF8;
    // 0x8022CFF0: sb          $v0, 0x33C($s1)
    MEM_B(0X33C, ctx->r17) = ctx->r2;
L_8022CFF4:
    // 0x8022CFF4: sb          $zero, 0x33C($s1)
    MEM_B(0X33C, ctx->r17) = 0;
L_8022CFF8:
    // 0x8022CFF8: lbu         $a0, 0x4E($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X4E);
    // 0x8022CFFC: andi        $v0, $a0, 0xA
    ctx->r2 = ctx->r4 & 0XA;
    // 0x8022D000: beq         $v0, $zero, L_8022D190
    if (ctx->r2 == 0) {
        // 0x8022D004: nop
    
            goto L_8022D190;
    }
    // 0x8022D004: nop

    // 0x8022D008: lbu         $v0, 0x50($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X50);
    // 0x8022D00C: bne         $v0, $zero, L_8022D18C
    if (ctx->r2 != 0) {
        // 0x8022D010: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_8022D18C;
    }
    // 0x8022D010: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022D014: lbu         $v1, 0x51($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X51);
    // 0x8022D018: ori         $v0, $a0, 0x8
    ctx->r2 = ctx->r4 | 0X8;
    // 0x8022D01C: bne         $v1, $zero, L_8022D180
    if (ctx->r3 != 0) {
        // 0x8022D020: sb          $v0, 0x4E($s2)
        MEM_B(0X4E, ctx->r18) = ctx->r2;
            goto L_8022D180;
    }
    // 0x8022D020: sb          $v0, 0x4E($s2)
    MEM_B(0X4E, ctx->r18) = ctx->r2;
    // 0x8022D024: lbu         $v1, 0x4F($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X4F);
    // 0x8022D028: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022D02C: beq         $v1, $zero, L_8022D170
    if (ctx->r3 == 0) {
        // 0x8022D030: sb          $v0, 0x51($s2)
        MEM_B(0X51, ctx->r18) = ctx->r2;
            goto L_8022D170;
    }
    // 0x8022D030: sb          $v0, 0x51($s2)
    MEM_B(0X51, ctx->r18) = ctx->r2;
    // 0x8022D034: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
L_8022D038:
    // 0x8022D038: jal         0x8004EFE4
    // 0x8022D03C: nop

    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_0;
    // 0x8022D03C: nop

    after_0:
    // 0x8022D040: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8022D044: beq         $s0, $zero, L_8022D14C
    if (ctx->r16 == 0) {
        // 0x8022D048: addiu       $a0, $zero, 0xEB
        ctx->r4 = ADD32(0, 0XEB);
            goto L_8022D14C;
    }
    // 0x8022D048: addiu       $a0, $zero, 0xEB
    ctx->r4 = ADD32(0, 0XEB);
    // 0x8022D04C: jal         0x8002A33C
    // 0x8022D050: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x8022D050: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_1:
    // 0x8022D054: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022D058: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8022D05C: addiu       $v0, $zero, 0x2E
    ctx->r2 = ADD32(0, 0X2E);
    // 0x8022D060: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x8022D064: addiu       $v0, $zero, 0x42
    ctx->r2 = ADD32(0, 0X42);
    // 0x8022D068: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x8022D06C: lhu         $v0, 0x56($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X56);
    // 0x8022D070: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x8022D074: lhu         $v0, 0x188($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X188);
    // 0x8022D078: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x8022D07C: lhu         $v0, 0x18C($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X18C);
    // 0x8022D080: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x8022D084: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x8022D088: lh          $v1, 0x18($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X18);
    // 0x8022D08C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D090: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022D094: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x8022D098: sw          $v1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r3;
    // 0x8022D09C: lbu         $v0, 0x54($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X54);
    // 0x8022D0A0: bne         $v0, $zero, L_8022D0F4
    if (ctx->r2 != 0) {
        // 0x8022D0A4: addiu       $v1, $zero, 0x80
        ctx->r3 = ADD32(0, 0X80);
            goto L_8022D0F4;
    }
    // 0x8022D0A4: addiu       $v1, $zero, 0x80
    ctx->r3 = ADD32(0, 0X80);
    // 0x8022D0A8: lhu         $v0, 0x18A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X18A);
    // 0x8022D0AC: sh          $v1, 0x66($s0)
    MEM_H(0X66, ctx->r16) = ctx->r3;
    // 0x8022D0B0: addiu       $v0, $v0, 0x22
    ctx->r2 = ADD32(ctx->r2, 0X22);
    // 0x8022D0B4: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022D0B8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D0BC: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022D0C0: sll         $v0, $s3, 24
    ctx->r2 = S32(ctx->r19 << 24);
    // 0x8022D0C4: beq         $v0, $zero, L_8022D0E0
    if (ctx->r2 == 0) {
        // 0x8022D0C8: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022D0E0;
    }
    // 0x8022D0C8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022D0CC: lhu         $a2, 0x56($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X56);
    // 0x8022D0D0: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022D0D4: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x8022D0D8: j           L_8022D13C
    // 0x8022D0DC: addiu       $v0, $zero, 0x8F0
    ctx->r2 = ADD32(0, 0X8F0);
        goto L_8022D13C;
    // 0x8022D0DC: addiu       $v0, $zero, 0x8F0
    ctx->r2 = ADD32(0, 0X8F0);
L_8022D0E0:
    // 0x8022D0E0: lhu         $a2, 0x56($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X56);
    // 0x8022D0E4: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022D0E8: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x8022D0EC: j           L_8022D13C
    // 0x8022D0F0: addiu       $v0, $zero, -0x8F0
    ctx->r2 = ADD32(0, -0X8F0);
        goto L_8022D13C;
    // 0x8022D0F0: addiu       $v0, $zero, -0x8F0
    ctx->r2 = ADD32(0, -0X8F0);
L_8022D0F4:
    // 0x8022D0F4: lhu         $v0, 0x18A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X18A);
    // 0x8022D0F8: sh          $zero, 0x66($s0)
    MEM_H(0X66, ctx->r16) = 0;
    // 0x8022D0FC: addiu       $v0, $v0, 0x78
    ctx->r2 = ADD32(ctx->r2, 0X78);
    // 0x8022D100: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022D104: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D108: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022D10C: sll         $v0, $s3, 24
    ctx->r2 = S32(ctx->r19 << 24);
    // 0x8022D110: beq         $v0, $zero, L_8022D12C
    if (ctx->r2 == 0) {
        // 0x8022D114: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022D12C;
    }
    // 0x8022D114: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022D118: lhu         $a2, 0x56($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X56);
    // 0x8022D11C: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022D120: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x8022D124: j           L_8022D13C
    // 0x8022D128: addiu       $v0, $zero, 0x280
    ctx->r2 = ADD32(0, 0X280);
        goto L_8022D13C;
    // 0x8022D128: addiu       $v0, $zero, 0x280
    ctx->r2 = ADD32(0, 0X280);
L_8022D12C:
    // 0x8022D12C: lhu         $a2, 0x56($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X56);
    // 0x8022D130: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022D134: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x8022D138: addiu       $v0, $zero, -0x280
    ctx->r2 = ADD32(0, -0X280);
L_8022D13C:
    // 0x8022D13C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8022D140: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022D144: jal         0x8004DBA0
    // 0x8022D148: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_2;
    // 0x8022D148: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_2:
L_8022D14C:
    // 0x8022D14C: addiu       $v0, $s3, -0x1
    ctx->r2 = ADD32(ctx->r19, -0X1);
    // 0x8022D150: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x8022D154: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022D158: bgez        $v0, L_8022D038
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022D15C: nop
    
            goto L_8022D038;
    }
    // 0x8022D15C: nop

    // 0x8022D160: lbu         $v0, 0x4F($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X4F);
    // 0x8022D164: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022D168: j           L_8022D190
    // 0x8022D16C: sb          $v0, 0x4F($s2)
    MEM_B(0X4F, ctx->r18) = ctx->r2;
        goto L_8022D190;
    // 0x8022D16C: sb          $v0, 0x4F($s2)
    MEM_B(0X4F, ctx->r18) = ctx->r2;
L_8022D170:
    // 0x8022D170: lbu         $v0, 0x4E($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X4E);
    // 0x8022D174: andi        $v0, $v0, 0xF5
    ctx->r2 = ctx->r2 & 0XF5;
    // 0x8022D178: j           L_8022D190
    // 0x8022D17C: sb          $v0, 0x4E($s2)
    MEM_B(0X4E, ctx->r18) = ctx->r2;
        goto L_8022D190;
    // 0x8022D17C: sb          $v0, 0x4E($s2)
    MEM_B(0X4E, ctx->r18) = ctx->r2;
L_8022D180:
    // 0x8022D180: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022D184: j           L_8022D190
    // 0x8022D188: sb          $v0, 0x51($s2)
    MEM_B(0X51, ctx->r18) = ctx->r2;
        goto L_8022D190;
    // 0x8022D188: sb          $v0, 0x51($s2)
    MEM_B(0X51, ctx->r18) = ctx->r2;
L_8022D18C:
    // 0x8022D18C: sb          $v0, 0x50($s2)
    MEM_B(0X50, ctx->r18) = ctx->r2;
L_8022D190:
    // 0x8022D190: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8022D194: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8022D198: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8022D19C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022D1A0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022D1A4: jr          $ra
    // 0x8022D1A8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022D1A8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8022D1AC: nop

;}
RECOMP_FUNC void func_80227DB8_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227DB8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227DBC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80227DC0: jal         0x8004F418
    // 0x80227DC4: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x80227DC4: nop

    after_0:
    // 0x80227DC8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80227DCC: jr          $ra
    // 0x80227DD0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227DD0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022BA54_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BA54: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022BA58: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022BA5C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022BA60: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8022BA64: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022BA68: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022BA6C: jal         0x8009A3B4
    // 0x8022BA70: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022BA70: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8022BA74: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8022BA78: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022BA7C: jal         0x8009A3B4
    // 0x8022BA80: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022BA80: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022BA84: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8022BA88: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8022BA8C: jal         0x8009A3B4
    // 0x8022BA90: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022BA90: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022BA94: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022BA98: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022BA9C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022BAA0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022BAA4: lw          $v0, 0x1994($at)
    ctx->r2 = MEM_W(ctx->r1, 0X1994);
    // 0x8022BAA8: jalr        $v0
    // 0x8022BAAC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x8022BAAC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022BAB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022BAB4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022BAB8: jr          $ra
    // 0x8022BABC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022BABC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022F480_ovl14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F480: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022F484: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022F488: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8022F48C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022F490: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022F494: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022F498: lw          $v0, 0x1AD0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X1AD0);
    // 0x8022F49C: jalr        $v0
    // 0x8022F4A0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022F4A0: nop

    after_0:
    // 0x8022F4A4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022F4A8: jr          $ra
    // 0x8022F4AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022F4AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
