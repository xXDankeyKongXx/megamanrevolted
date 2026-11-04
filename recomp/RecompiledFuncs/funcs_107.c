#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8022D294_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D294: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022D298: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D29C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022D2A0: jal         0x800A3450
    // 0x8022D2A4: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8022D2A4: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    after_0:
    // 0x8022D2A8: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x8022D2AC: bne         $v1, $zero, L_8022D328
    if (ctx->r3 != 0) {
        // 0x8022D2B0: addu        $a3, $v0, $zero
        ctx->r7 = ADD32(ctx->r2, 0);
            goto L_8022D328;
    }
    // 0x8022D2B0: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x8022D2B4: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8022D2B8: andi        $v1, $a3, 0x7
    ctx->r3 = ctx->r7 & 0X7;
    // 0x8022D2BC: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    // 0x8022D2C0: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8022D2C4: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022D2C8: sll         $a0, $a3, 16
    ctx->r4 = S32(ctx->r7 << 16);
    // 0x8022D2CC: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x8022D2D0: sra         $v1, $a0, 18
    ctx->r3 = S32(SIGNED(ctx->r4) >> 18);
    // 0x8022D2D4: andi        $v1, $v1, 0x7
    ctx->r3 = ctx->r3 & 0X7;
    // 0x8022D2D8: sh          $v0, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r2;
    // 0x8022D2DC: addiu       $v0, $zero, 0xC4
    ctx->r2 = ADD32(0, 0XC4);
    // 0x8022D2E0: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022D2E4: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x8022D2E8: sra         $v0, $a0, 20
    ctx->r2 = S32(SIGNED(ctx->r4) >> 20);
    // 0x8022D2EC: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x8022D2F0: lhu         $v1, 0x0($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X0);
    // 0x8022D2F4: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x8022D2F8: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x8022D2FC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022D300: sh          $v1, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r3;
    // 0x8022D304: lhu         $v0, 0x2($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X2);
    // 0x8022D308: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x8022D30C: sh          $v0, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r2;
    // 0x8022D310: lhu         $v0, 0x4($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X4);
    // 0x8022D314: sra         $a0, $a0, 22
    ctx->r4 = S32(SIGNED(ctx->r4) >> 22);
    // 0x8022D318: andi        $a0, $a0, 0x3F
    ctx->r4 = ctx->r4 & 0X3F;
    // 0x8022D31C: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8022D320: j           L_8022D3A0
    // 0x8022D324: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
        goto L_8022D3A0;
    // 0x8022D324: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
L_8022D328:
    // 0x8022D328: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x8022D32C: lhu         $v1, 0x6($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X6);
    // 0x8022D330: lhu         $a0, 0x8($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X8);
    // 0x8022D334: lhu         $a2, 0xA($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0XA);
    // 0x8022D338: lhu         $a1, 0xC($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0XC);
    // 0x8022D33C: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8022D340: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022D344: addiu       $a0, $a0, 0x3
    ctx->r4 = ADD32(ctx->r4, 0X3);
    // 0x8022D348: addiu       $a2, $a2, 0xC
    ctx->r6 = ADD32(ctx->r6, 0XC);
    // 0x8022D34C: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
    // 0x8022D350: andi        $v0, $a3, 0x7
    ctx->r2 = ctx->r7 & 0X7;
    // 0x8022D354: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x8022D358: addiu       $a1, $a1, -0xC
    ctx->r5 = ADD32(ctx->r5, -0XC);
    // 0x8022D35C: sh          $v1, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r3;
    // 0x8022D360: sll         $v1, $a3, 16
    ctx->r3 = S32(ctx->r7 << 16);
    // 0x8022D364: sra         $v0, $v1, 18
    ctx->r2 = S32(SIGNED(ctx->r3) >> 18);
    // 0x8022D368: sh          $a0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r4;
    // 0x8022D36C: lhu         $a0, 0xE($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XE);
    // 0x8022D370: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x8022D374: subu        $a1, $a1, $v0
    ctx->r5 = SUB32(ctx->r5, ctx->r2);
    // 0x8022D378: lh          $v0, 0x6($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X6);
    // 0x8022D37C: sra         $v1, $v1, 20
    ctx->r3 = S32(SIGNED(ctx->r3) >> 20);
    // 0x8022D380: andi        $v1, $v1, 0x7
    ctx->r3 = ctx->r3 & 0X7;
    // 0x8022D384: sh          $a2, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r6;
    // 0x8022D388: sh          $a1, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r5;
    // 0x8022D38C: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x8022D390: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x8022D394: bne         $v0, $zero, L_8022D3A0
    if (ctx->r2 != 0) {
        // 0x8022D398: sh          $a0, 0xE($s0)
        MEM_H(0XE, ctx->r16) = ctx->r4;
            goto L_8022D3A0;
    }
    // 0x8022D398: sh          $a0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r4;
    // 0x8022D39C: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
L_8022D3A0:
    // 0x8022D3A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022D3A4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D3A8: jr          $ra
    // 0x8022D3AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022D3AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80233790_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233790: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80233794: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80233798: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023379C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x802337A0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x802337A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802337A8: jal         0x8009A3B4
    // 0x802337AC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x802337AC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x802337B0: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x802337B4: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x802337B8: jal         0x8009A3B4
    // 0x802337BC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x802337BC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x802337C0: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x802337C4: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x802337C8: jal         0x8009A3B4
    // 0x802337CC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x802337CC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x802337D0: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802337D4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802337D8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802337DC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802337E0: lw          $v0, -0x6748($at)
    ctx->r2 = MEM_W(ctx->r1, -0X6748);
    // 0x802337E4: jalr        $v0
    // 0x802337E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x802337E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x802337EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802337F0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802337F4: jr          $ra
    // 0x802337F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802337F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022FB08_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FB08: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022FB0C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022FB10: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022FB14: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022FB18: addiu       $s2, $s0, 0x14
    ctx->r18 = ADD32(ctx->r16, 0X14);
    // 0x8022FB1C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022FB20: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022FB24: addiu       $s1, $s0, 0x364
    ctx->r17 = ADD32(ctx->r16, 0X364);
    // 0x8022FB28: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022FB2C: jal         0x8004DE68
    // 0x8022FB30: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8004DE68_29268(rdram, ctx);
        goto after_0;
    // 0x8022FB30: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_0:
    // 0x8022FB34: lbu         $a0, 0x9($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X9);
    // 0x8022FB38: srl         $v0, $v0, 7
    ctx->r2 = S32(U32(ctx->r2) >> 7);
    // 0x8022FB3C: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x8022FB40: beq         $v1, $zero, L_8022FB5C
    if (ctx->r3 == 0) {
        // 0x8022FB44: sw          $v0, 0x350($s0)
        MEM_W(0X350, ctx->r16) = ctx->r2;
            goto L_8022FB5C;
    }
    // 0x8022FB44: sw          $v0, 0x350($s0)
    MEM_W(0X350, ctx->r16) = ctx->r2;
    // 0x8022FB48: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022FB4C: beq         $v1, $v0, L_8022FB7C
    if (ctx->r3 == ctx->r2) {
        // 0x8022FB50: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_8022FB7C;
    }
    // 0x8022FB50: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022FB54: j           L_8022FBBC
    // 0x8022FB58: nop

        goto L_8022FBBC;
    // 0x8022FB58: nop

L_8022FB5C:
    // 0x8022FB5C: lb          $v1, 0xD($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XD);
    // 0x8022FB60: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8022FB64: bne         $v0, $zero, L_8022FBA8
    if (ctx->r2 != 0) {
        // 0x8022FB68: nop
    
            goto L_8022FBA8;
    }
    // 0x8022FB68: nop

    // 0x8022FB6C: beq         $v1, $zero, L_8022FBA8
    if (ctx->r3 == 0) {
        // 0x8022FB70: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_8022FBA8;
    }
    // 0x8022FB70: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x8022FB74: j           L_8022FBBC
    // 0x8022FB78: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022FBBC;
    // 0x8022FB78: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022FB7C:
    // 0x8022FB7C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022FB80: lh          $a3, 0x64($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X64);
    // 0x8022FB84: jal         0x8004F820
    // 0x8022FB88: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x8022FB88: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
    // 0x8022FB8C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022FB90: lw          $a0, 0x350($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X350);
    // 0x8022FB94: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022FB98: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022FB9C: sltiu       $a0, $a0, 0x2
    ctx->r4 = ctx->r4 < 0X2 ? 1 : 0;
    // 0x8022FBA0: beq         $a0, $zero, L_8022FBBC
    if (ctx->r4 == 0) {
        // 0x8022FBA4: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_8022FBBC;
    }
    // 0x8022FBA4: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
L_8022FBA8:
    // 0x8022FBA8: jal         0x8022FCD0
    // 0x8022FBAC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022FCD0_ovl13(rdram, ctx);
        goto after_2;
    // 0x8022FBAC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022FBB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022FBB4: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022FBB8: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_8022FBBC:
    // 0x8022FBBC: jal         0x8022FBF8
    // 0x8022FBC0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022FBF8_ovl13(rdram, ctx);
        goto after_3;
    // 0x8022FBC0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022FBC4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022FBC8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022FBCC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022FBD0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022FBD4: jr          $ra
    // 0x8022FBD8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022FBD8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022CBC0_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CBC0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022CBC4: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x8022CBC8: addu        $s5, $a0, $zero
    ctx->r21 = ADD32(ctx->r4, 0);
    // 0x8022CBCC: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022CBD0: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x8022CBD4: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x8022CBD8: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
    // 0x8022CBDC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022CBE0: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x8022CBE4: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x8022CBE8: lui         $s6, 0x8024
    ctx->r22 = S32(0X8024 << 16);
    // 0x8022CBEC: addiu       $s6, $s6, -0x63E8
    ctx->r22 = ADD32(ctx->r22, -0X63E8);
    // 0x8022CBF0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8022CBF4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022CBF8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022CBFC: andi        $v0, $s2, 0xFF
    ctx->r2 = ctx->r18 & 0XFF;
L_8022CC00:
    // 0x8022CC00: sltiu       $v0, $v0, 0x3
    ctx->r2 = ctx->r2 < 0X3 ? 1 : 0;
    // 0x8022CC04: bne         $v0, $zero, L_8022CC10
    if (ctx->r2 != 0) {
        // 0x8022CC08: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022CC10;
    }
    // 0x8022CC08: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022CC0C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8022CC10:
    // 0x8022CC10: sb          $v0, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r2;
    // 0x8022CC14: andi        $v1, $s2, 0xFF
    ctx->r3 = ctx->r18 & 0XFF;
    // 0x8022CC18: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x8022CC1C: beq         $v0, $zero, L_8022CC7C
    if (ctx->r2 == 0) {
        // 0x8022CC20: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8022CC7C;
    }
    // 0x8022CC20: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022CC24: addu        $v0, $v0, $s6
    gpr jr_addend_8022CC2C = ctx->r2;
    ctx->r2 = ADD32(ctx->r2, ctx->r22);
    // 0x8022CC28: lw          $v0, 0x0($v0)
    ctx->r2 = ADD32(ctx->r2, 0X0);
    // 0x8022CC2C: jr          $v0
    // 0x8022CC30: nop

    switch (jr_addend_8022CC2C >> 2) {
        case 0: goto L_8022CC34; break;
        case 1: goto L_8022CC40; break;
        case 2: goto L_8022CC4C; break;
        case 3: goto L_8022CC58; break;
        case 4: goto L_8022CC64; break;
        case 5: goto L_8022CC70; break;
        default: switch_error(__func__, 0x8022CC2C, 0x80239C18);
    }
    // 0x8022CC30: nop

L_8022CC34:
    // 0x8022CC34: lbu         $v0, 0xC($s5)
    ctx->r2 = MEM_BU(ctx->r21, 0XC);
    // 0x8022CC38: j           L_8022CC7C
    // 0x8022CC3C: andi        $s4, $v0, 0x1
    ctx->r20 = ctx->r2 & 0X1;
        goto L_8022CC7C;
    // 0x8022CC3C: andi        $s4, $v0, 0x1
    ctx->r20 = ctx->r2 & 0X1;
L_8022CC40:
    // 0x8022CC40: lbu         $v0, 0xC($s5)
    ctx->r2 = MEM_BU(ctx->r21, 0XC);
    // 0x8022CC44: j           L_8022CC78
    // 0x8022CC48: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
        goto L_8022CC78;
    // 0x8022CC48: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
L_8022CC4C:
    // 0x8022CC4C: lbu         $v0, 0xC($s5)
    ctx->r2 = MEM_BU(ctx->r21, 0XC);
    // 0x8022CC50: j           L_8022CC78
    // 0x8022CC54: srl         $v0, $v0, 2
    ctx->r2 = S32(U32(ctx->r2) >> 2);
        goto L_8022CC78;
    // 0x8022CC54: srl         $v0, $v0, 2
    ctx->r2 = S32(U32(ctx->r2) >> 2);
L_8022CC58:
    // 0x8022CC58: lbu         $v0, 0xD($s5)
    ctx->r2 = MEM_BU(ctx->r21, 0XD);
    // 0x8022CC5C: j           L_8022CC7C
    // 0x8022CC60: andi        $s4, $v0, 0x1
    ctx->r20 = ctx->r2 & 0X1;
        goto L_8022CC7C;
    // 0x8022CC60: andi        $s4, $v0, 0x1
    ctx->r20 = ctx->r2 & 0X1;
L_8022CC64:
    // 0x8022CC64: lbu         $v0, 0xD($s5)
    ctx->r2 = MEM_BU(ctx->r21, 0XD);
    // 0x8022CC68: j           L_8022CC78
    // 0x8022CC6C: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
        goto L_8022CC78;
    // 0x8022CC6C: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
L_8022CC70:
    // 0x8022CC70: lbu         $v0, 0xD($s5)
    ctx->r2 = MEM_BU(ctx->r21, 0XD);
    // 0x8022CC74: srl         $v0, $v0, 2
    ctx->r2 = S32(U32(ctx->r2) >> 2);
L_8022CC78:
    // 0x8022CC78: andi        $s4, $v0, 0x1
    ctx->r20 = ctx->r2 & 0X1;
L_8022CC7C:
    // 0x8022CC7C: andi        $v0, $s4, 0xFF
    ctx->r2 = ctx->r20 & 0XFF;
    // 0x8022CC80: beq         $v0, $zero, L_8022CCE4
    if (ctx->r2 == 0) {
        // 0x8022CC84: andi        $v0, $s2, 0xFF
        ctx->r2 = ctx->r18 & 0XFF;
            goto L_8022CCE4;
    }
    // 0x8022CC84: andi        $v0, $s2, 0xFF
    ctx->r2 = ctx->r18 & 0XFF;
    // 0x8022CC88: addu        $v0, $s3, $v0
    ctx->r2 = ADD32(ctx->r19, ctx->r2);
    // 0x8022CC8C: lbu         $v0, 0x4($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4);
    // 0x8022CC90: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
    // 0x8022CC94: beq         $v0, $zero, L_8022CCC4
    if (ctx->r2 == 0) {
        // 0x8022CC98: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_8022CCC4;
    }
    // 0x8022CC98: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x8022CC9C: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8022CCA0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_8022CCA4:
    // 0x8022CCA4: andi        $a1, $s2, 0xFF
    ctx->r5 = ctx->r18 & 0XFF;
    // 0x8022CCA8: jal         0x8022CFE0
    // 0x8022CCAC: andi        $a2, $s0, 0xFF
    ctx->r6 = ctx->r16 & 0XFF;
    func_8022CFE0_ovl13(rdram, ctx);
        goto after_0;
    // 0x8022CCAC: andi        $a2, $s0, 0xFF
    ctx->r6 = ctx->r16 & 0XFF;
    after_0:
    // 0x8022CCB0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8022CCB4: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
    // 0x8022CCB8: sltu        $v0, $v0, $s1
    ctx->r2 = ctx->r2 < ctx->r17 ? 1 : 0;
    // 0x8022CCBC: bne         $v0, $zero, L_8022CCA4
    if (ctx->r2 != 0) {
        // 0x8022CCC0: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_8022CCA4;
    }
    // 0x8022CCC0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_8022CCC4:
    // 0x8022CCC4: andi        $v0, $s2, 0xFF
    ctx->r2 = ctx->r18 & 0XFF;
    // 0x8022CCC8: addu        $a0, $s3, $v0
    ctx->r4 = ADD32(ctx->r19, ctx->r2);
    // 0x8022CCCC: lbu         $v1, 0x4($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X4);
    // 0x8022CCD0: sltiu       $v0, $v1, 0x40
    ctx->r2 = ctx->r3 < 0X40 ? 1 : 0;
    // 0x8022CCD4: beq         $v0, $zero, L_8022CD40
    if (ctx->r2 == 0) {
        // 0x8022CCD8: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_8022CD40;
    }
    // 0x8022CCD8: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8022CCDC: j           L_8022CD40
    // 0x8022CCE0: sb          $v0, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r2;
        goto L_8022CD40;
    // 0x8022CCE0: sb          $v0, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r2;
L_8022CCE4:
    // 0x8022CCE4: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    // 0x8022CCE8: addu        $v1, $s3, $a0
    ctx->r3 = ADD32(ctx->r19, ctx->r4);
    // 0x8022CCEC: lbu         $v0, 0x4($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X4);
    // 0x8022CCF0: sltiu       $v0, $v0, 0x8
    ctx->r2 = ctx->r2 < 0X8 ? 1 : 0;
    // 0x8022CCF4: bnel        $v0, $zero, L_8022CD44
    if (ctx->r2 != 0) {
        // 0x8022CCF8: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_8022CD44;
    }
    goto skip_0;
    // 0x8022CCF8: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_0:
    // 0x8022CCFC: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8022CD00: sb          $v0, 0x4($v1)
    MEM_B(0X4, ctx->r3) = ctx->r2;
    // 0x8022CD04: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x8022CD08: sll         $v0, $a0, 7
    ctx->r2 = S32(ctx->r4 << 7);
    // 0x8022CD0C: addiu       $v0, $v0, 0x14
    ctx->r2 = ADD32(ctx->r2, 0X14);
    // 0x8022CD10: addu        $v1, $s3, $v0
    ctx->r3 = ADD32(ctx->r19, ctx->r2);
    // 0x8022CD14: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
L_8022CD18:
    // 0x8022CD18: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8022CD1C: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8022CD20: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x8022CD24: sb          $zero, 0x4($v0)
    MEM_B(0X4, ctx->r2) = 0;
    // 0x8022CD28: sb          $zero, 0x5($v0)
    MEM_B(0X5, ctx->r2) = 0;
    // 0x8022CD2C: sh          $zero, 0x6($v0)
    MEM_H(0X6, ctx->r2) = 0;
    // 0x8022CD30: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
    // 0x8022CD34: sltiu       $v0, $v0, 0x8
    ctx->r2 = ctx->r2 < 0X8 ? 1 : 0;
    // 0x8022CD38: bne         $v0, $zero, L_8022CD18
    if (ctx->r2 != 0) {
        // 0x8022CD3C: andi        $v0, $s0, 0xFF
        ctx->r2 = ctx->r16 & 0XFF;
            goto L_8022CD18;
    }
    // 0x8022CD3C: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
L_8022CD40:
    // 0x8022CD40: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_8022CD44:
    // 0x8022CD44: andi        $v0, $s2, 0xFF
    ctx->r2 = ctx->r18 & 0XFF;
    // 0x8022CD48: sltiu       $v0, $v0, 0x6
    ctx->r2 = ctx->r2 < 0X6 ? 1 : 0;
    // 0x8022CD4C: bne         $v0, $zero, L_8022CC00
    if (ctx->r2 != 0) {
        // 0x8022CD50: andi        $v0, $s2, 0xFF
        ctx->r2 = ctx->r18 & 0XFF;
            goto L_8022CC00;
    }
    // 0x8022CD50: andi        $v0, $s2, 0xFF
    ctx->r2 = ctx->r18 & 0XFF;
    // 0x8022CD54: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8022CD58: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x8022CD5C: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x8022CD60: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x8022CD64: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022CD68: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022CD6C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022CD70: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022CD74: jr          $ra
    // 0x8022CD78: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022CD78: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80232228_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232228: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8023222C: jr          $ra
    // 0x80232230: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80232230: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_8022D494_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D494: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022D498: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022D49C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022D4A0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D4A4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022D4A8: jal         0x800A3450
    // 0x8022D4AC: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8022D4AC: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    after_0:
    // 0x8022D4B0: lbu         $a1, 0x4($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X4);
    // 0x8022D4B4: andi        $v1, $a1, 0xFF
    ctx->r3 = ctx->r5 & 0XFF;
    // 0x8022D4B8: bne         $v1, $zero, L_8022D540
    if (ctx->r3 != 0) {
        // 0x8022D4BC: addu        $a0, $v0, $zero
        ctx->r4 = ADD32(ctx->r2, 0);
            goto L_8022D540;
    }
    // 0x8022D4BC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8022D4C0: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
    // 0x8022D4C4: andi        $v1, $a0, 0x3
    ctx->r3 = ctx->r4 & 0X3;
    // 0x8022D4C8: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    // 0x8022D4CC: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8022D4D0: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022D4D4: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022D4D8: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x8022D4DC: sra         $v1, $a0, 18
    ctx->r3 = S32(SIGNED(ctx->r4) >> 18);
    // 0x8022D4E0: andi        $v1, $v1, 0x1
    ctx->r3 = ctx->r3 & 0X1;
    // 0x8022D4E4: sh          $v0, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r2;
    // 0x8022D4E8: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8022D4EC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022D4F0: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x8022D4F4: sra         $v0, $a0, 20
    ctx->r2 = S32(SIGNED(ctx->r4) >> 20);
    // 0x8022D4F8: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x8022D4FC: lhu         $v1, 0x0($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X0);
    // 0x8022D500: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8022D504: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x8022D508: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8022D50C: sra         $v0, $a0, 22
    ctx->r2 = S32(SIGNED(ctx->r4) >> 22);
    // 0x8022D510: sh          $v1, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r3;
    // 0x8022D514: lhu         $v1, 0x2($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X2);
    // 0x8022D518: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x8022D51C: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8022D520: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8022D524: sh          $v1, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r3;
    // 0x8022D528: lhu         $v0, 0x4($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X4);
    // 0x8022D52C: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
    // 0x8022D530: andi        $a0, $a0, 0x3
    ctx->r4 = ctx->r4 & 0X3;
    // 0x8022D534: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8022D538: j           L_8022D590
    // 0x8022D53C: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
        goto L_8022D590;
    // 0x8022D53C: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
L_8022D540:
    // 0x8022D540: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022D544: bne         $v1, $v0, L_8022D590
    if (ctx->r3 != ctx->r2) {
        // 0x8022D548: nop
    
            goto L_8022D590;
    }
    // 0x8022D548: nop

    // 0x8022D54C: lhu         $v0, 0x6($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6);
    // 0x8022D550: lhu         $v1, 0xC($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XC);
    // 0x8022D554: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022D558: sh          $v0, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r2;
    // 0x8022D55C: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x8022D560: lh          $a0, 0x6($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X6);
    // 0x8022D564: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8022D568: sh          $v1, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r3;
    // 0x8022D56C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022D570: bne         $a0, $zero, L_8022D590
    if (ctx->r4 != 0) {
        // 0x8022D574: sb          $v0, 0x5($s0)
        MEM_B(0X5, ctx->r16) = ctx->r2;
            goto L_8022D590;
    }
    // 0x8022D574: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
    // 0x8022D578: lw          $v0, 0xC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XC);
    // 0x8022D57C: slti        $v0, $v0, 0x12D
    ctx->r2 = SIGNED(ctx->r2) < 0X12D ? 1 : 0;
    // 0x8022D580: bnel        $v0, $zero, L_8022D590
    if (ctx->r2 != 0) {
        // 0x8022D584: sb          $zero, 0x4($s0)
        MEM_B(0X4, ctx->r16) = 0;
            goto L_8022D590;
    }
    goto skip_0;
    // 0x8022D584: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
    skip_0:
    // 0x8022D588: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022D58C: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_8022D590:
    // 0x8022D590: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022D594: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022D598: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D59C: jr          $ra
    // 0x8022D5A0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022D5A0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022B890_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B890: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022B894: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022B898: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B89C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8022B8A0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022B8A4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022B8A8: jal         0x8009A3B4
    // 0x8022B8AC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022B8AC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8022B8B0: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8022B8B4: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022B8B8: jal         0x8009A3B4
    // 0x8022B8BC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022B8BC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022B8C0: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8022B8C4: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8022B8C8: jal         0x8009A3B4
    // 0x8022B8CC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022B8CC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022B8D0: lbu         $a0, 0x8($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X8);
    // 0x8022B8D4: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022B8D8: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x8022B8DC: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x8022B8E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B8E4: beq         $v1, $v0, L_8022B96C
    if (ctx->r3 == ctx->r2) {
        // 0x8022B8E8: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8022B96C;
    }
    // 0x8022B8E8: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022B8EC: beql        $v0, $zero, L_8022B904
    if (ctx->r2 == 0) {
        // 0x8022B8F0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022B904;
    }
    goto skip_0;
    // 0x8022B8F0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022B8F4: beq         $v1, $zero, L_8022B91C
    if (ctx->r3 == 0) {
        // 0x8022B8F8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022B91C;
    }
    // 0x8022B8F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B8FC: j           L_8022B9EC
    // 0x8022B900: nop

        goto L_8022B9EC;
    // 0x8022B900: nop

L_8022B904:
    // 0x8022B904: beq         $v1, $v0, L_8022B99C
    if (ctx->r3 == ctx->r2) {
        // 0x8022B908: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022B99C;
    }
    // 0x8022B908: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022B90C: beq         $v1, $v0, L_8022B9B8
    if (ctx->r3 == ctx->r2) {
        // 0x8022B910: nop
    
            goto L_8022B9B8;
    }
    // 0x8022B910: nop

    // 0x8022B914: j           L_8022B9EC
    // 0x8022B918: nop

        goto L_8022B9EC;
    // 0x8022B918: nop

L_8022B91C:
    // 0x8022B91C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022B920: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022B924: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022B928: jal         0x8004D5FC
    // 0x8022B92C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5FC_289FC(rdram, ctx);
        goto after_3;
    // 0x8022B92C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_3:
    // 0x8022B930: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8022B934: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022B938: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8022B93C: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022B940: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022B944: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022B948: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022B94C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022B950: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x8022B954: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x8022B958: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x8022B95C: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x8022B960: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022B964: j           L_8022B9EC
    // 0x8022B968: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
        goto L_8022B9EC;
    // 0x8022B968: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
L_8022B96C:
    // 0x8022B96C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022B970: lbu         $v1, -0x3A47($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3A47);
    // 0x8022B974: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022B978: bne         $v1, $v0, L_8022B9EC
    if (ctx->r3 != ctx->r2) {
        // 0x8022B97C: addiu       $v1, $zero, 0x6
        ctx->r3 = ADD32(0, 0X6);
            goto L_8022B9EC;
    }
    // 0x8022B97C: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
    // 0x8022B980: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022B984: sh          $v1, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r3;
    // 0x8022B988: addiu       $v1, $zero, 0xC
    ctx->r3 = ADD32(0, 0XC);
    // 0x8022B98C: sh          $v1, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r3;
    // 0x8022B990: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022B994: j           L_8022B9EC
    // 0x8022B998: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_8022B9EC;
    // 0x8022B998: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022B99C:
    // 0x8022B99C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022B9A0: lw          $v1, -0x3A40($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A40);
    // 0x8022B9A4: addiu       $v0, $zero, 0x96
    ctx->r2 = ADD32(0, 0X96);
    // 0x8022B9A8: bne         $v1, $v0, L_8022B9EC
    if (ctx->r3 != ctx->r2) {
        // 0x8022B9AC: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_8022B9EC;
    }
    // 0x8022B9AC: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x8022B9B0: j           L_8022B9EC
    // 0x8022B9B4: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_8022B9EC;
    // 0x8022B9B4: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022B9B8:
    // 0x8022B9B8: lh          $v0, 0x44($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X44);
    // 0x8022B9BC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022B9C0: slti        $v0, $v0, 0xC
    ctx->r2 = SIGNED(ctx->r2) < 0XC ? 1 : 0;
    // 0x8022B9C4: beq         $v0, $zero, L_8022B9D0
    if (ctx->r2 == 0) {
        // 0x8022B9C8: addiu       $v0, $v1, 0x2
        ctx->r2 = ADD32(ctx->r3, 0X2);
            goto L_8022B9D0;
    }
    // 0x8022B9C8: addiu       $v0, $v1, 0x2
    ctx->r2 = ADD32(ctx->r3, 0X2);
    // 0x8022B9CC: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
L_8022B9D0:
    // 0x8022B9D0: lh          $v0, 0x44($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X44);
    // 0x8022B9D4: slti        $v0, $v0, 0x18
    ctx->r2 = SIGNED(ctx->r2) < 0X18 ? 1 : 0;
    // 0x8022B9D8: beq         $v0, $zero, L_8022B9EC
    if (ctx->r2 == 0) {
        // 0x8022B9DC: nop
    
            goto L_8022B9EC;
    }
    // 0x8022B9DC: nop

    // 0x8022B9E0: lhu         $v0, 0x46($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X46);
    // 0x8022B9E4: addiu       $v0, $v0, 0x3
    ctx->r2 = ADD32(ctx->r2, 0X3);
    // 0x8022B9E8: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
L_8022B9EC:
    // 0x8022B9EC: lhu         $a1, 0x44($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X44);
    // 0x8022B9F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B9F4: lhu         $a2, 0x46($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X46);
    // 0x8022B9F8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022B9FC: sll         $a1, $a1, 20
    ctx->r5 = S32(ctx->r5 << 20);
    // 0x8022BA00: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8022BA04: negu        $a2, $a2
    ctx->r6 = SUB32(0, ctx->r6);
    // 0x8022BA08: sll         $a2, $a2, 20
    ctx->r6 = S32(ctx->r6 << 20);
    // 0x8022BA0C: jal         0x8004DA90
    // 0x8022BA10: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    func_8004DA90_28E90(rdram, ctx);
        goto after_4;
    // 0x8022BA10: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    after_4:
    // 0x8022BA14: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022BA18: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x8022BA1C: beq         $a1, $v0, L_8022BA34
    if (ctx->r5 == ctx->r2) {
        // 0x8022BA20: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022BA34;
    }
    // 0x8022BA20: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022BA24: jal         0x80050294
    // 0x8022BA28: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_5;
    // 0x8022BA28: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
    // 0x8022BA2C: j           L_8022BA3C
    // 0x8022BA30: nop

        goto L_8022BA3C;
    // 0x8022BA30: nop

L_8022BA34:
    // 0x8022BA34: jal         0x8005044C
    // 0x8022BA38: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_6;
    // 0x8022BA38: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
L_8022BA3C:
    // 0x8022BA3C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022BA40: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022BA44: jr          $ra
    // 0x8022BA48: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022BA48: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8022BA4C: nop

;}
RECOMP_FUNC void func_80234E0C_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234E0C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80234E10: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80234E14: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80234E18: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80234E1C: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x80234E20: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80234E24: lhu         $a2, 0x56($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X56);
    // 0x80234E28: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80234E2C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80234E30: addiu       $a1, $a1, 0x4D58
    ctx->r5 = ADD32(ctx->r5, 0X4D58);
    // 0x80234E34: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    // 0x80234E38: jal         0x8004F820
    // 0x80234E3C: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x80234E3C: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_0:
    // 0x80234E40: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80234E44: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80234E48: sll         $a0, $v1, 16
    ctx->r4 = S32(ctx->r3 << 16);
    // 0x80234E4C: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80234E50: jal         0x800324B4
    // 0x80234E54: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    func_800324B4_D8B4(rdram, ctx);
        goto after_1;
    // 0x80234E54: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    after_1:
    // 0x80234E58: lh          $a0, 0x56($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X56);
    // 0x80234E5C: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80234E60: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x80234E64: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80234E68: srl         $v1, $v1, 2
    ctx->r3 = S32(U32(ctx->r3) >> 2);
    // 0x80234E6C: sh          $v1, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r3;
    // 0x80234E70: jal         0x80032498
    // 0x80234E74: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    func_80032498_D898(rdram, ctx);
        goto after_2;
    // 0x80234E74: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    after_2:
    // 0x80234E78: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80234E7C: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x80234E80: lh          $a0, 0x44($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X44);
    // 0x80234E84: lw          $a1, 0x1C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X1C);
    // 0x80234E88: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80234E8C: lh          $v0, 0x46($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X46);
    // 0x80234E90: srl         $v1, $v1, 2
    ctx->r3 = S32(U32(ctx->r3) >> 2);
    // 0x80234E94: sh          $v1, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r3;
    // 0x80234E98: lw          $v1, 0x20($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X20);
    // 0x80234E9C: lb          $a2, 0xC($s0)
    ctx->r6 = MEM_B(ctx->r16, 0XC);
    // 0x80234EA0: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x80234EA4: addu        $a1, $a1, $a0
    ctx->r5 = ADD32(ctx->r5, ctx->r4);
    // 0x80234EA8: lh          $a0, 0x48($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X48);
    // 0x80234EAC: sw          $a1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r5;
    // 0x80234EB0: lw          $a1, 0x24($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X24);
    // 0x80234EB4: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80234EB8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80234EBC: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x80234EC0: lhu         $v1, 0x1C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X1C);
    // 0x80234EC4: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x80234EC8: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x80234ECC: addu        $a1, $a1, $a0
    ctx->r5 = ADD32(ctx->r5, ctx->r4);
    // 0x80234ED0: lhu         $a0, 0x20($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X20);
    // 0x80234ED4: sw          $a1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r5;
    // 0x80234ED8: lhu         $a1, 0x24($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X24);
    // 0x80234EDC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80234EE0: sh          $v1, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r3;
    // 0x80234EE4: sh          $v1, 0xAC($s0)
    MEM_H(0XAC, ctx->r16) = ctx->r3;
    // 0x80234EE8: sll         $v1, $a2, 2
    ctx->r3 = S32(ctx->r6 << 2);
    // 0x80234EEC: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x80234EF0: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80234EF4: sh          $a0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r4;
    // 0x80234EF8: sh          $a0, 0xAE($s0)
    MEM_H(0XAE, ctx->r16) = ctx->r4;
    // 0x80234EFC: sh          $a1, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r5;
    // 0x80234F00: beq         $v0, $zero, L_80234F24
    if (ctx->r2 == 0) {
        // 0x80234F04: sh          $a1, 0xB0($s0)
        MEM_H(0XB0, ctx->r16) = ctx->r5;
            goto L_80234F24;
    }
    // 0x80234F04: sh          $a1, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r5;
    // 0x80234F08: nop

    // 0x80234F0C: mult        $v1, $v1
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80234F10: mflo        $v1
    ctx->r3 = lo;
    // 0x80234F14: lw          $v0, 0x80($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X80);
    // 0x80234F18: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x80234F1C: beq         $v0, $zero, L_80234F60
    if (ctx->r2 == 0) {
        // 0x80234F20: nop
    
            goto L_80234F60;
    }
    // 0x80234F20: nop

L_80234F24:
    // 0x80234F24: addiu       $a0, $zero, 0xFB
    ctx->r4 = ADD32(0, 0XFB);
    // 0x80234F28: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80234F2C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80234F30: addiu       $v1, $zero, 0xF0
    ctx->r3 = ADD32(0, 0XF0);
    // 0x80234F34: sb          $v1, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r3;
    // 0x80234F38: addiu       $v1, $zero, 0x180
    ctx->r3 = ADD32(0, 0X180);
    // 0x80234F3C: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x80234F40: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80234F44: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x80234F48: sh          $zero, 0x4C($s0)
    MEM_H(0X4C, ctx->r16) = 0;
    // 0x80234F4C: sh          $v1, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r3;
    // 0x80234F50: sh          $zero, 0x50($s0)
    MEM_H(0X50, ctx->r16) = 0;
    // 0x80234F54: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80234F58: jal         0x8002A33C
    // 0x80234F5C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_3;
    // 0x80234F5C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    after_3:
L_80234F60:
    // 0x80234F60: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80234F64: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80234F68: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80234F6C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80234F70: sltiu       $v0, $v0, 0x3
    ctx->r2 = ctx->r2 < 0X3 ? 1 : 0;
    // 0x80234F74: beql        $v0, $zero, L_80234F7C
    if (ctx->r2 == 0) {
        // 0x80234F78: sb          $zero, 0xA($s0)
        MEM_B(0XA, ctx->r16) = 0;
            goto L_80234F7C;
    }
    goto skip_0;
    // 0x80234F78: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    skip_0:
L_80234F7C:
    // 0x80234F7C: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80234F80: lhu         $v0, -0x730C($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X730C);
    // 0x80234F84: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80234F88: beq         $v0, $zero, L_80234F98
    if (ctx->r2 == 0) {
        // 0x80234F8C: addiu       $a0, $zero, 0xFA
        ctx->r4 = ADD32(0, 0XFA);
            goto L_80234F98;
    }
    // 0x80234F8C: addiu       $a0, $zero, 0xFA
    ctx->r4 = ADD32(0, 0XFA);
    // 0x80234F90: jal         0x8002A33C
    // 0x80234F94: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_4;
    // 0x80234F94: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_4:
L_80234F98:
    // 0x80234F98: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80234F9C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80234FA0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80234FA4: jr          $ra
    // 0x80234FA8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80234FA8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80236DF4_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236DF4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80236DF8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80236DFC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80236E00: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80236E04: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80236E08: jal         0x8004F144
    // 0x80236E0C: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80236E0C: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    after_0:
    // 0x80236E10: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80236E14: beq         $a0, $zero, L_80236EC0
    if (ctx->r4 == 0) {
        // 0x80236E18: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80236EC0;
    }
    // 0x80236E18: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80236E1C: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x80236E20: addiu       $v0, $zero, 0x85
    ctx->r2 = ADD32(0, 0X85);
    // 0x80236E24: sb          $v0, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r2;
    // 0x80236E28: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x80236E2C: sh          $v0, 0x1C($a0)
    MEM_H(0X1C, ctx->r4) = ctx->r2;
    // 0x80236E30: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x80236E34: sh          $v0, 0x1E($a0)
    MEM_H(0X1E, ctx->r4) = ctx->r2;
    // 0x80236E38: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x80236E3C: sh          $v0, 0x20($a0)
    MEM_H(0X20, ctx->r4) = ctx->r2;
    // 0x80236E40: lhu         $v0, 0x44($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X44);
    // 0x80236E44: sh          $v0, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r2;
    // 0x80236E48: lhu         $v0, 0x46($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X46);
    // 0x80236E4C: sh          $v0, 0x32($a0)
    MEM_H(0X32, ctx->r4) = ctx->r2;
    // 0x80236E50: lhu         $v0, 0x48($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X48);
    // 0x80236E54: sh          $v0, 0x34($a0)
    MEM_H(0X34, ctx->r4) = ctx->r2;
    // 0x80236E58: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x80236E5C: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80236E60: bne         $v1, $v0, L_80236E78
    if (ctx->r3 != ctx->r2) {
        // 0x80236E64: addiu       $v0, $zero, 0x41
        ctx->r2 = ADD32(0, 0X41);
            goto L_80236E78;
    }
    // 0x80236E64: addiu       $v0, $zero, 0x41
    ctx->r2 = ADD32(0, 0X41);
    // 0x80236E68: lh          $v0, 0x64($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X64);
    // 0x80236E6C: addiu       $v1, $s1, 0x10
    ctx->r3 = ADD32(ctx->r17, 0X10);
    // 0x80236E70: j           L_80236EB4
    // 0x80236E74: sb          $v1, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r3;
        goto L_80236EB4;
    // 0x80236E74: sb          $v1, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r3;
L_80236E78:
    // 0x80236E78: bnel        $v1, $v0, L_80236E94
    if (ctx->r3 != ctx->r2) {
        // 0x80236E7C: addiu       $v0, $zero, 0x42
        ctx->r2 = ADD32(0, 0X42);
            goto L_80236E94;
    }
    goto skip_0;
    // 0x80236E7C: addiu       $v0, $zero, 0x42
    ctx->r2 = ADD32(0, 0X42);
    skip_0:
    // 0x80236E80: lh          $v0, 0x64($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X64);
    // 0x80236E84: addiu       $v1, $s1, 0x10
    ctx->r3 = ADD32(ctx->r17, 0X10);
    // 0x80236E88: sb          $v1, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r3;
    // 0x80236E8C: j           L_80236EB8
    // 0x80236E90: addiu       $v0, $v0, -0x400
    ctx->r2 = ADD32(ctx->r2, -0X400);
        goto L_80236EB8;
    // 0x80236E90: addiu       $v0, $v0, -0x400
    ctx->r2 = ADD32(ctx->r2, -0X400);
L_80236E94:
    // 0x80236E94: bne         $v1, $v0, L_80236EAC
    if (ctx->r3 != ctx->r2) {
        // 0x80236E98: ori         $v0, $zero, 0xFFFF
        ctx->r2 = 0 | 0XFFFF;
            goto L_80236EAC;
    }
    // 0x80236E98: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
    // 0x80236E9C: sw          $v0, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->r2;
    // 0x80236EA0: addiu       $v0, $s1, 0x10
    ctx->r2 = ADD32(ctx->r17, 0X10);
    // 0x80236EA4: j           L_80236EC0
    // 0x80236EA8: sb          $v0, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r2;
        goto L_80236EC0;
    // 0x80236EA8: sb          $v0, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r2;
L_80236EAC:
    // 0x80236EAC: lh          $v0, 0x64($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X64);
    // 0x80236EB0: sb          $s1, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r17;
L_80236EB4:
    // 0x80236EB4: addiu       $v0, $v0, 0x400
    ctx->r2 = ADD32(ctx->r2, 0X400);
L_80236EB8:
    // 0x80236EB8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80236EBC: sw          $v0, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->r2;
L_80236EC0:
    // 0x80236EC0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80236EC4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80236EC8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80236ECC: jr          $ra
    // 0x80236ED0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80236ED0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80236ED4: nop

    // 0x80236ED8: nop

    // 0x80236EDC: nop

;}
RECOMP_FUNC void func_80225EF0_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225EF0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80225EF4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225EF8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225EFC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80225F00: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80225F04: lbu         $v1, 0x5($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X5);
    // 0x80225F08: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x80225F0C: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x80225F10: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225F14: beq         $v1, $v0, L_80225FB8
    if (ctx->r3 == ctx->r2) {
        // 0x80225F18: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80225FB8;
    }
    // 0x80225F18: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80225F1C: beql        $v0, $zero, L_80225F34
    if (ctx->r2 == 0) {
        // 0x80225F20: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80225F34;
    }
    goto skip_0;
    // 0x80225F20: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80225F24: beq         $v1, $zero, L_80225F44
    if (ctx->r3 == 0) {
        // 0x80225F28: addiu       $a0, $zero, 0x5E
        ctx->r4 = ADD32(0, 0X5E);
            goto L_80225F44;
    }
    // 0x80225F28: addiu       $a0, $zero, 0x5E
    ctx->r4 = ADD32(0, 0X5E);
    // 0x80225F2C: j           L_8022609C
    // 0x80225F30: nop

        goto L_8022609C;
    // 0x80225F30: nop

L_80225F34:
    // 0x80225F34: beq         $v1, $v0, L_80226050
    if (ctx->r3 == ctx->r2) {
        // 0x80225F38: nop
    
            goto L_80226050;
    }
    // 0x80225F38: nop

    // 0x80225F3C: j           L_8022609C
    // 0x80225F40: nop

        goto L_8022609C;
    // 0x80225F40: nop

L_80225F44:
    // 0x80225F44: jal         0x8004CB2C
    // 0x80225F48: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_0;
    // 0x80225F48: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_0:
    // 0x80225F4C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80225F50: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80225F54: jal         0x8005F6B4
    // 0x80225F58: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8005F6B4_3AAB4(rdram, ctx);
        goto after_1;
    // 0x80225F58: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x80225F5C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80225F60: addiu       $v0, $v0, -0x7658
    ctx->r2 = ADD32(ctx->r2, -0X7658);
    // 0x80225F64: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80225F68: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    // 0x80225F6C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80225F70: addiu       $v0, $v0, -0x760C
    ctx->r2 = ADD32(ctx->r2, -0X760C);
    // 0x80225F74: sw          $v0, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->r2;
    // 0x80225F78: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x80225F7C: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    // 0x80225F80: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80225F84: sh          $v0, -0x3F82($at)
    MEM_H(-0X3F82, ctx->r1) = ctx->r2;
    // 0x80225F88: addiu       $v0, $zero, -0x259
    ctx->r2 = ADD32(0, -0X259);
    // 0x80225F8C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80225F90: sh          $v0, -0x6220($at)
    MEM_H(-0X6220, ctx->r1) = ctx->r2;
    // 0x80225F94: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80225F98: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80225F9C: sh          $v0, -0x621E($at)
    MEM_H(-0X621E, ctx->r1) = ctx->r2;
    // 0x80225FA0: lbu         $v1, 0x5($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X5);
    // 0x80225FA4: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80225FA8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80225FAC: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x80225FB0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80225FB4: sb          $v1, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r3;
L_80225FB8:
    // 0x80225FB8: jal         0x8006FF84
    // 0x80225FBC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_2;
    // 0x80225FBC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
    // 0x80225FC0: beq         $v0, $zero, L_8022609C
    if (ctx->r2 == 0) {
        // 0x80225FC4: addiu       $v0, $zero, -0x1280
        ctx->r2 = ADD32(0, -0X1280);
            goto L_8022609C;
    }
    // 0x80225FC4: addiu       $v0, $zero, -0x1280
    ctx->r2 = ADD32(0, -0X1280);
    // 0x80225FC8: lbu         $v1, 0x0($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X0);
    // 0x80225FCC: lbu         $a0, 0xBD($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0XBD);
    // 0x80225FD0: sh          $v0, 0x438($s1)
    MEM_H(0X438, ctx->r17) = ctx->r2;
    // 0x80225FD4: lh          $a1, 0x438($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X438);
    // 0x80225FD8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80225FDC: sh          $v0, 0x43A($s1)
    MEM_H(0X43A, ctx->r17) = ctx->r2;
    // 0x80225FE0: lh          $a2, 0x43A($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X43A);
    // 0x80225FE4: addiu       $v0, $zero, 0x1E80
    ctx->r2 = ADD32(0, 0X1E80);
    // 0x80225FE8: sh          $v0, 0x43C($s1)
    MEM_H(0X43C, ctx->r17) = ctx->r2;
    // 0x80225FEC: lh          $a3, 0x43C($s1)
    ctx->r7 = MEM_H(ctx->r17, 0X43C);
    // 0x80225FF0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80225FF4: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x80225FF8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225FFC: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x80226000: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x80226004: sh          $v0, 0x442($s1)
    MEM_H(0X442, ctx->r17) = ctx->r2;
    // 0x80226008: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x8022600C: sh          $zero, 0x440($s1)
    MEM_H(0X440, ctx->r17) = 0;
    // 0x80226010: sh          $zero, 0x444($s1)
    MEM_H(0X444, ctx->r17) = 0;
    // 0x80226014: sb          $v0, 0x448($s1)
    MEM_B(0X448, ctx->r17) = ctx->r2;
    // 0x80226018: andi        $v1, $v1, 0xFD
    ctx->r3 = ctx->r3 & 0XFD;
    // 0x8022601C: ori         $a0, $a0, 0x10
    ctx->r4 = ctx->r4 | 0X10;
    // 0x80226020: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x80226024: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x80226028: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x8022602C: sb          $v1, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r3;
    // 0x80226030: sb          $a0, 0xBD($s1)
    MEM_B(0XBD, ctx->r17) = ctx->r4;
    // 0x80226034: sw          $a1, 0x428($s1)
    MEM_W(0X428, ctx->r17) = ctx->r5;
    // 0x80226038: sw          $a2, 0x42C($s1)
    MEM_W(0X42C, ctx->r17) = ctx->r6;
    // 0x8022603C: sw          $a3, 0x430($s1)
    MEM_W(0X430, ctx->r17) = ctx->r7;
    // 0x80226040: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x80226044: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226048: j           L_8022609C
    // 0x8022604C: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
        goto L_8022609C;
    // 0x8022604C: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
L_80226050:
    // 0x80226050: lbu         $v1, 0xB($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XB);
    // 0x80226054: sltiu       $v0, $v1, 0x2D
    ctx->r2 = ctx->r3 < 0X2D ? 1 : 0;
    // 0x80226058: beq         $v0, $zero, L_80226068
    if (ctx->r2 == 0) {
        // 0x8022605C: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_80226068;
    }
    // 0x8022605C: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x80226060: j           L_8022609C
    // 0x80226064: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
        goto L_8022609C;
    // 0x80226064: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
L_80226068:
    // 0x80226068: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8022606C: addiu       $a0, $a0, -0x76E4
    ctx->r4 = ADD32(ctx->r4, -0X76E4);
    // 0x80226070: jal         0x8005FA7C
    // 0x80226074: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_3;
    // 0x80226074: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    after_3:
    // 0x80226078: jal         0x80036E48
    // 0x8022607C: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_80036E48_12248(rdram, ctx);
        goto after_4;
    // 0x8022607C: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_4:
    // 0x80226080: lui         $a0, 0x10B
    ctx->r4 = S32(0X10B << 16);
    // 0x80226084: jal         0x80036B1C
    // 0x80226088: ori         $a0, $a0, 0x2D00
    ctx->r4 = ctx->r4 | 0X2D00;
    func_80036B1C_11F1C(rdram, ctx);
        goto after_5;
    // 0x80226088: ori         $a0, $a0, 0x2D00
    ctx->r4 = ctx->r4 | 0X2D00;
    after_5:
    // 0x8022608C: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80226090: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x80226094: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226098: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_8022609C:
    // 0x8022609C: jal         0x8005FB90
    // 0x802260A0: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_6;
    // 0x802260A0: nop

    after_6:
    // 0x802260A4: jal         0x80060018
    // 0x802260A8: nop

    func_80060018_3B418(rdram, ctx);
        goto after_7;
    // 0x802260A8: nop

    after_7:
    // 0x802260AC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802260B0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802260B4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802260B8: jr          $ra
    // 0x802260BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802260BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80234C24_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234C24: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80234C28: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80234C2C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80234C30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80234C34: lh          $v0, 0x44($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X44);
    // 0x80234C38: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x80234C3C: lh          $a0, 0x48($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X48);
    // 0x80234C40: lw          $a1, 0x24($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X24);
    // 0x80234C44: lhu         $a3, 0x4C($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0X4C);
    // 0x80234C48: lhu         $t0, 0x4E($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X4E);
    // 0x80234C4C: lhu         $a2, 0x50($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X50);
    // 0x80234C50: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80234C54: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80234C58: lh          $v0, 0x46($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X46);
    // 0x80234C5C: sw          $v1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r3;
    // 0x80234C60: lw          $v1, 0x20($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X20);
    // 0x80234C64: lhu         $t1, 0x1C($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X1C);
    // 0x80234C68: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x80234C6C: addu        $a1, $a1, $a0
    ctx->r5 = ADD32(ctx->r5, ctx->r4);
    // 0x80234C70: sw          $a1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r5;
    // 0x80234C74: lhu         $t3, 0x24($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X24);
    // 0x80234C78: lhu         $a0, 0x46($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X46);
    // 0x80234C7C: lbu         $a1, 0xB($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XB);
    // 0x80234C80: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80234C84: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80234C88: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x80234C8C: lhu         $t2, 0x20($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X20);
    // 0x80234C90: lhu         $v1, 0x44($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X44);
    // 0x80234C94: lhu         $v0, 0x48($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X48);
    // 0x80234C98: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x80234C9C: addu        $a0, $a0, $t0
    ctx->r4 = ADD32(ctx->r4, ctx->r8);
    // 0x80234CA0: sb          $a1, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r5;
    // 0x80234CA4: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x80234CA8: sh          $a0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r4;
    // 0x80234CAC: sh          $t1, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r9;
    // 0x80234CB0: sh          $t1, 0xAC($s0)
    MEM_H(0XAC, ctx->r16) = ctx->r9;
    // 0x80234CB4: sh          $t3, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r11;
    // 0x80234CB8: sh          $t3, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r11;
    // 0x80234CBC: addu        $v1, $v1, $a3
    ctx->r3 = ADD32(ctx->r3, ctx->r7);
    // 0x80234CC0: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80234CC4: sh          $v1, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r3;
    // 0x80234CC8: sh          $v0, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r2;
    // 0x80234CCC: sh          $t2, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r10;
    // 0x80234CD0: bne         $a1, $zero, L_80234CF4
    if (ctx->r5 != 0) {
        // 0x80234CD4: sh          $t2, 0xAE($s0)
        MEM_H(0XAE, ctx->r16) = ctx->r10;
            goto L_80234CF4;
    }
    // 0x80234CD4: sh          $t2, 0xAE($s0)
    MEM_H(0XAE, ctx->r16) = ctx->r10;
    // 0x80234CD8: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80234CDC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80234CE0: jal         0x800A3450
    // 0x80234CE4: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x80234CE4: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    after_0:
    // 0x80234CE8: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80234CEC: addiu       $v0, $v0, 0x28
    ctx->r2 = ADD32(ctx->r2, 0X28);
    // 0x80234CF0: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
L_80234CF4:
    // 0x80234CF4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80234CF8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80234CFC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80234D00: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80234D04: sltiu       $v0, $v0, 0x3
    ctx->r2 = ctx->r2 < 0X3 ? 1 : 0;
    // 0x80234D08: beql        $v0, $zero, L_80234D10
    if (ctx->r2 == 0) {
        // 0x80234D0C: sb          $zero, 0xA($s0)
        MEM_B(0XA, ctx->r16) = 0;
            goto L_80234D10;
    }
    goto skip_0;
    // 0x80234D0C: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    skip_0:
L_80234D10:
    // 0x80234D10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80234D14: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80234D18: jr          $ra
    // 0x80234D1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80234D1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802269E0_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802269E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802269E4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802269E8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802269EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802269F0: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x802269F4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802269F8: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x802269FC: jal         0x8004D5D4
    // 0x80226A00: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80226A00: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x80226A04: addiu       $a0, $s0, 0x36C
    ctx->r4 = ADD32(ctx->r16, 0X36C);
    // 0x80226A08: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80226A0C: addiu       $a2, $zero, -0x60
    ctx->r6 = ADD32(0, -0X60);
    // 0x80226A10: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80226A14: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80226A18: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80226A1C: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80226A20: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80226A24: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80226A28: addiu       $v0, $zero, 0x10E
    ctx->r2 = ADD32(0, 0X10E);
    // 0x80226A2C: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80226A30: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80226A34: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x80226A38: sw          $zero, 0x44($s0)
    MEM_W(0X44, ctx->r16) = 0;
    // 0x80226A3C: sw          $zero, 0x48($s0)
    MEM_W(0X48, ctx->r16) = 0;
    // 0x80226A40: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    // 0x80226A44: sw          $zero, 0x34C($s0)
    MEM_W(0X34C, ctx->r16) = 0;
    // 0x80226A48: sw          $zero, 0x350($s0)
    MEM_W(0X350, ctx->r16) = 0;
    // 0x80226A4C: sw          $zero, 0x35C($s0)
    MEM_W(0X35C, ctx->r16) = 0;
    // 0x80226A50: sw          $zero, 0x360($s0)
    MEM_W(0X360, ctx->r16) = 0;
    // 0x80226A54: jal         0x800540BC
    // 0x80226A58: sh          $zero, 0x37C($s0)
    MEM_H(0X37C, ctx->r16) = 0;
    func_800540BC_2F4BC(rdram, ctx);
        goto after_1;
    // 0x80226A58: sh          $zero, 0x37C($s0)
    MEM_H(0X37C, ctx->r16) = 0;
    after_1:
    // 0x80226A5C: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x80226A60: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80226A64: lw          $a0, 0x298($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X298);
    // 0x80226A68: addiu       $v1, $zero, 0x12C
    ctx->r3 = ADD32(0, 0X12C);
    // 0x80226A6C: sh          $v1, 0x37E($s0)
    MEM_H(0X37E, ctx->r16) = ctx->r3;
    // 0x80226A70: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80226A74: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80226A78: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80226A7C: lbu         $a0, 0x3($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X3);
    // 0x80226A80: lbu         $v1, 0x18($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X18);
    // 0x80226A84: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80226A88: addiu       $v0, $v0, -0x7290
    ctx->r2 = ADD32(ctx->r2, -0X7290);
    // 0x80226A8C: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    // 0x80226A90: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226A94: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x80226A98: sh          $v1, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r3;
    // 0x80226A9C: sh          $v1, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r3;
    // 0x80226AA0: beq         $a0, $v0, L_80226AEC
    if (ctx->r4 == ctx->r2) {
        // 0x80226AA4: sh          $v1, 0xB2($s0)
        MEM_H(0XB2, ctx->r16) = ctx->r3;
            goto L_80226AEC;
    }
    // 0x80226AA4: sh          $v1, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r3;
    // 0x80226AA8: slti        $v0, $a0, 0x2
    ctx->r2 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
    // 0x80226AAC: beql        $v0, $zero, L_80226AC4
    if (ctx->r2 == 0) {
        // 0x80226AB0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80226AC4;
    }
    goto skip_0;
    // 0x80226AB0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80226AB4: beq         $a0, $zero, L_80226AD4
    if (ctx->r4 == 0) {
        // 0x80226AB8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80226AD4;
    }
    // 0x80226AB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226ABC: j           L_80226B40
    // 0x80226AC0: nop

        goto L_80226B40;
    // 0x80226AC0: nop

L_80226AC4:
    // 0x80226AC4: beq         $a0, $v0, L_80226B20
    if (ctx->r4 == ctx->r2) {
        // 0x80226AC8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80226B20;
    }
    // 0x80226AC8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226ACC: j           L_80226B40
    // 0x80226AD0: nop

        goto L_80226B40;
    // 0x80226AD0: nop

L_80226AD4:
    // 0x80226AD4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80226AD8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80226ADC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226AE0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80226AE4: j           L_80226B38
    // 0x80226AE8: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
        goto L_80226B38;
    // 0x80226AE8: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_80226AEC:
    // 0x80226AEC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226AF0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80226AF4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80226AF8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226AFC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80226B00: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80226B04: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80226B08: jal         0x80050294
    // 0x80226B0C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x80226B0C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    after_2:
    // 0x80226B10: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x80226B14: andi        $v0, $v0, 0xFEFF
    ctx->r2 = ctx->r2 & 0XFEFF;
    // 0x80226B18: j           L_80226B40
    // 0x80226B1C: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
        goto L_80226B40;
    // 0x80226B1C: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
L_80226B20:
    // 0x80226B20: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80226B24: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80226B28: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226B2C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80226B30: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80226B34: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80226B38:
    // 0x80226B38: jal         0x80050294
    // 0x80226B3C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    func_80050294_2B694(rdram, ctx);
        goto after_3;
    // 0x80226B3C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    after_3:
L_80226B40:
    // 0x80226B40: jal         0x80226B58
    // 0x80226B44: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80226B58_ovl13(rdram, ctx);
        goto after_4;
    // 0x80226B44: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80226B48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226B4C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226B50: jr          $ra
    // 0x80226B54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226B54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80234D20_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234D20: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80234D24: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80234D28: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80234D2C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80234D30: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x80234D34: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80234D38: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80234D3C: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x80234D40: addiu       $s2, $s2, 0x4D58
    ctx->r18 = ADD32(ctx->r18, 0X4D58);
    // 0x80234D44: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80234D48: lhu         $a2, 0x56($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X56);
    // 0x80234D4C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80234D50: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    // 0x80234D54: jal         0x8004F820
    // 0x80234D58: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x80234D58: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_0:
    // 0x80234D5C: lbu         $a0, 0xB($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XB);
    // 0x80234D60: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80234D64: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x80234D68: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80234D6C: sb          $a0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r4;
    // 0x80234D70: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    // 0x80234D74: bne         $a0, $zero, L_80234DBC
    if (ctx->r4 != 0) {
        // 0x80234D78: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_80234DBC;
    }
    // 0x80234D78: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x80234D7C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80234D80: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80234D84: jal         0x800A3450
    // 0x80234D88: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x80234D88: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    after_1:
    // 0x80234D8C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80234D90: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80234D94: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x80234D98: lhu         $a2, 0x56($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X56);
    // 0x80234D9C: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x80234DA0: addiu       $v0, $v0, 0x64
    ctx->r2 = ADD32(ctx->r2, 0X64);
    // 0x80234DA4: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x80234DA8: jal         0x8004F820
    // 0x80234DAC: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x80234DAC: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_2:
    // 0x80234DB0: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80234DB4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80234DB8: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
L_80234DBC:
    // 0x80234DBC: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80234DC0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80234DC4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80234DC8: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80234DCC: sltiu       $v0, $v0, 0x3
    ctx->r2 = ctx->r2 < 0X3 ? 1 : 0;
    // 0x80234DD0: beql        $v0, $zero, L_80234DD8
    if (ctx->r2 == 0) {
        // 0x80234DD4: sb          $zero, 0xA($s0)
        MEM_B(0XA, ctx->r16) = 0;
            goto L_80234DD8;
    }
    goto skip_0;
    // 0x80234DD4: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    skip_0:
L_80234DD8:
    // 0x80234DD8: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80234DDC: lhu         $v0, -0x730C($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X730C);
    // 0x80234DE0: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80234DE4: beq         $v0, $zero, L_80234DF4
    if (ctx->r2 == 0) {
        // 0x80234DE8: addiu       $a0, $zero, 0xFA
        ctx->r4 = ADD32(0, 0XFA);
            goto L_80234DF4;
    }
    // 0x80234DE8: addiu       $a0, $zero, 0xFA
    ctx->r4 = ADD32(0, 0XFA);
    // 0x80234DEC: jal         0x8002A33C
    // 0x80234DF0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_3;
    // 0x80234DF0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_3:
L_80234DF4:
    // 0x80234DF4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80234DF8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80234DFC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80234E00: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80234E04: jr          $ra
    // 0x80234E08: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80234E08: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022B5B8_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B5B8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022B5BC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B5C0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B5C4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022B5C8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022B5CC: lh          $a0, 0x34C($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X34C);
    // 0x8022B5D0: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x8022B5D4: jal         0x8004FA7C
    // 0x8022B5D8: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x8022B5D8: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    after_0:
    // 0x8022B5DC: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x8022B5E0: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8022B5E4: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x8022B5E8: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8022B5EC: srl         $v1, $v1, 31
    ctx->r3 = S32(U32(ctx->r3) >> 31);
    // 0x8022B5F0: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x8022B5F4: beq         $v1, $zero, L_8022B628
    if (ctx->r3 == 0) {
        // 0x8022B5F8: nop
    
            goto L_8022B628;
    }
    // 0x8022B5F8: nop

    // 0x8022B5FC: jal         0x8022B748
    // 0x8022B600: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_8022B748_ovl13(rdram, ctx);
        goto after_1;
    // 0x8022B600: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_1:
    // 0x8022B604: lbu         $v1, 0x34A($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34A);
    // 0x8022B608: lhu         $a0, 0x348($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X348);
    // 0x8022B60C: lbu         $a1, 0xD($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XD);
    // 0x8022B610: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022B614: ori         $a0, $a0, 0x2
    ctx->r4 = ctx->r4 | 0X2;
    // 0x8022B618: andi        $a1, $a1, 0x7
    ctx->r5 = ctx->r5 & 0X7;
    // 0x8022B61C: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x8022B620: sh          $a0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r4;
    // 0x8022B624: sb          $a1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r5;
L_8022B628:
    // 0x8022B628: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022B62C: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x8022B630: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022B634: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8022B638: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022B63C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022B640: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B644: jr          $ra
    // 0x8022B648: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022B648: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022FCD0_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FCD0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022FCD4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022FCD8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022FCDC: jal         0x800A3450
    // 0x8022FCE0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8022FCE0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x8022FCE4: andi        $v0, $v0, 0x7F
    ctx->r2 = ctx->r2 & 0X7F;
    // 0x8022FCE8: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022FCEC: jal         0x800A3450
    // 0x8022FCF0: sh          $v0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x8022FCF0: sh          $v0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022FCF4: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022FCF8: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x8022FCFC: jal         0x800A3450
    // 0x8022FD00: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x8022FD00: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    after_2:
    // 0x8022FD04: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022FD08: addiu       $v0, $v0, -0x8
    ctx->r2 = ADD32(ctx->r2, -0X8);
    // 0x8022FD0C: sh          $v0, 0x66($s0)
    MEM_H(0X66, ctx->r16) = ctx->r2;
    // 0x8022FD10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022FD14: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022FD18: jr          $ra
    // 0x8022FD1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022FD1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022B278_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B278: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B27C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B280: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B284: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022B288: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022B28C: lh          $a3, 0x34E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X34E);
    // 0x8022B290: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022B294: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022B298: jal         0x8004F820
    // 0x8022B29C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022B29C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x8022B2A0: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022B2A4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022B2A8: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022B2AC: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022B2B0: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8022B2B4: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x8022B2B8: bne         $v0, $zero, L_8022B2F0
    if (ctx->r2 != 0) {
        // 0x8022B2BC: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_8022B2F0;
    }
    // 0x8022B2BC: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022B2C0: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x8022B2C4: lbu         $v1, 0x34B($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34B);
    // 0x8022B2C8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022B2CC: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x8022B2D0: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x8022B2D4: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    // 0x8022B2D8: jal         0x8022B748
    // 0x8022B2DC: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
    func_8022B748_ovl13(rdram, ctx);
        goto after_1;
    // 0x8022B2DC: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
    after_1:
    // 0x8022B2E0: jal         0x80034E3C
    // 0x8022B2E4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80034E3C_1023C(rdram, ctx);
        goto after_2;
    // 0x8022B2E4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_2:
    // 0x8022B2E8: j           L_8022B30C
    // 0x8022B2EC: nop

        goto L_8022B30C;
    // 0x8022B2EC: nop

L_8022B2F0:
    // 0x8022B2F0: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022B2F4: lb          $v1, -0x3C18($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3C18);
    // 0x8022B2F8: bne         $v1, $v0, L_8022B30C
    if (ctx->r3 != ctx->r2) {
        // 0x8022B2FC: nop
    
            goto L_8022B30C;
    }
    // 0x8022B2FC: nop

    // 0x8022B300: lbu         $v0, 0x34B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X34B);
    // 0x8022B304: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022B308: sb          $v0, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r2;
L_8022B30C:
    // 0x8022B30C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022B310: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B314: jr          $ra
    // 0x8022B318: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B318: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80231F50_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231F50: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80231F54: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80231F58: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80231F5C: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x80231F60: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80231F64: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80231F68: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80231F6C: lbu         $a0, 0xA($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0XA);
    // 0x80231F70: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80231F74: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x80231F78: beq         $v1, $v0, L_80231FEC
    if (ctx->r3 == ctx->r2) {
        // 0x80231F7C: addiu       $s3, $s1, 0x440
        ctx->r19 = ADD32(ctx->r17, 0X440);
            goto L_80231FEC;
    }
    // 0x80231F7C: addiu       $s3, $s1, 0x440
    ctx->r19 = ADD32(ctx->r17, 0X440);
    // 0x80231F80: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80231F84: beql        $v0, $zero, L_80231F9C
    if (ctx->r2 == 0) {
        // 0x80231F88: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80231F9C;
    }
    goto skip_0;
    // 0x80231F88: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80231F8C: beq         $v1, $zero, L_80231FB4
    if (ctx->r3 == 0) {
        // 0x80231F90: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_80231FB4;
    }
    // 0x80231F90: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x80231F94: j           L_802321E4
    // 0x80231F98: nop

        goto L_802321E4;
    // 0x80231F98: nop

L_80231F9C:
    // 0x80231F9C: beq         $v1, $v0, L_80232140
    if (ctx->r3 == ctx->r2) {
        // 0x80231FA0: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80232140;
    }
    // 0x80231FA0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80231FA4: beq         $v1, $v0, L_80232188
    if (ctx->r3 == ctx->r2) {
        // 0x80231FA8: lui         $v1, 0x800
        ctx->r3 = S32(0X800 << 16);
            goto L_80232188;
    }
    // 0x80231FA8: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80231FAC: j           L_802321E4
    // 0x80231FB0: nop

        goto L_802321E4;
    // 0x80231FB0: nop

L_80231FB4:
    // 0x80231FB4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80231FB8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x80231FBC: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x80231FC0: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x80231FC4: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x80231FC8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80231FCC: sh          $v0, 0x444($s1)
    MEM_H(0X444, ctx->r17) = ctx->r2;
    // 0x80231FD0: sh          $zero, 0x446($s1)
    MEM_H(0X446, ctx->r17) = 0;
    // 0x80231FD4: jal         0x800616FC
    // 0x80231FD8: sb          $zero, 0xB($s1)
    MEM_B(0XB, ctx->r17) = 0;
    func_800616FC_3CAFC(rdram, ctx);
        goto after_0;
    // 0x80231FD8: sb          $zero, 0xB($s1)
    MEM_B(0XB, ctx->r17) = 0;
    after_0:
    // 0x80231FDC: lhu         $v0, 0x532($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X532);
    // 0x80231FE0: ori         $v0, $v0, 0x7E
    ctx->r2 = ctx->r2 | 0X7E;
    // 0x80231FE4: j           L_802321E4
    // 0x80231FE8: sh          $v0, 0x532($s1)
    MEM_H(0X532, ctx->r17) = ctx->r2;
        goto L_802321E4;
    // 0x80231FE8: sh          $v0, 0x532($s1)
    MEM_H(0X532, ctx->r17) = ctx->r2;
L_80231FEC:
    // 0x80231FEC: lhu         $v0, 0x444($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X444);
    // 0x80231FF0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80231FF4: sh          $v0, 0x444($s1)
    MEM_H(0X444, ctx->r17) = ctx->r2;
    // 0x80231FF8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80231FFC: bgez        $v0, L_802321E4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80232000: addiu       $s2, $s1, 0x4A8
        ctx->r18 = ADD32(ctx->r17, 0X4A8);
            goto L_802321E4;
    }
    // 0x80232000: addiu       $s2, $s1, 0x4A8
    ctx->r18 = ADD32(ctx->r17, 0X4A8);
    // 0x80232004: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80232008: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x8023200C: jal         0x8009A3B4
    // 0x80232010: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80232010: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x80232014: addiu       $s0, $s1, 0x4B0
    ctx->r16 = ADD32(ctx->r17, 0X4B0);
    // 0x80232018: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023201C: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    // 0x80232020: jal         0x8009A3B4
    // 0x80232024: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80232024: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_2:
    // 0x80232028: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8023202C: lh          $a2, 0x56($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X56);
    // 0x80232030: lh          $v0, 0x446($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X446);
    // 0x80232034: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80232038: addiu       $a3, $zero, 0xD00
    ctx->r7 = ADD32(0, 0XD00);
    // 0x8023203C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80232040: sll         $v0, $v0, 25
    ctx->r2 = S32(ctx->r2 << 25);
    // 0x80232044: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80232048: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023204C: jal         0x8004DBA0
    // 0x80232050: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_3;
    // 0x80232050: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_3:
    // 0x80232054: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x80232058: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8023205C: lh          $a2, 0x446($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X446);
    // 0x80232060: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80232064: lui         $a3, 0x8024
    ctx->r7 = S32(0X8024 << 16);
    // 0x80232068: addu        $a3, $a3, $v0
    ctx->r7 = ADD32(ctx->r7, ctx->r2);
    // 0x8023206C: lh          $a3, -0x68C8($a3)
    ctx->r7 = MEM_H(ctx->r7, -0X68C8);
    // 0x80232070: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80232074: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80232078: lh          $v0, -0x68C6($at)
    ctx->r2 = MEM_H(ctx->r1, -0X68C6);
    // 0x8023207C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80232080: sll         $a2, $a2, 9
    ctx->r6 = S32(ctx->r6 << 9);
    // 0x80232084: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80232088: jal         0x8004DBA0
    // 0x8023208C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_4;
    // 0x8023208C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_4:
    // 0x80232090: jal         0x8004F144
    // 0x80232094: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_5;
    // 0x80232094: nop

    after_5:
    // 0x80232098: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8023209C: beq         $v1, $zero, L_802320D4
    if (ctx->r3 == 0) {
        // 0x802320A0: addiu       $a0, $v1, 0x38
        ctx->r4 = ADD32(ctx->r3, 0X38);
            goto L_802320D4;
    }
    // 0x802320A0: addiu       $a0, $v1, 0x38
    ctx->r4 = ADD32(ctx->r3, 0X38);
    // 0x802320A4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x802320A8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x802320AC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802320B0: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x802320B4: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x802320B8: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x802320BC: addiu       $v0, $zero, 0x41
    ctx->r2 = ADD32(0, 0X41);
    // 0x802320C0: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    // 0x802320C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802320C8: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
    // 0x802320CC: jal         0x8009A3B4
    // 0x802320D0: sb          $zero, 0xD($v1)
    MEM_B(0XD, ctx->r3) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x802320D0: sb          $zero, 0xD($v1)
    MEM_B(0XD, ctx->r3) = 0;
    after_6:
L_802320D4:
    // 0x802320D4: lhu         $v0, 0x446($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X446);
    // 0x802320D8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802320DC: sh          $v0, 0x446($s1)
    MEM_H(0X446, ctx->r17) = ctx->r2;
    // 0x802320E0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802320E4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802320E8: slti        $v0, $v0, 0x8
    ctx->r2 = SIGNED(ctx->r2) < 0X8 ? 1 : 0;
    // 0x802320EC: bne         $v0, $zero, L_80232138
    if (ctx->r2 != 0) {
        // 0x802320F0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80232138;
    }
    // 0x802320F0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802320F4: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x802320F8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802320FC: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
    // 0x80232100: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80232104: sltiu       $v0, $v0, 0x4
    ctx->r2 = ctx->r2 < 0X4 ? 1 : 0;
    // 0x80232108: bnel        $v0, $zero, L_80232134
    if (ctx->r2 != 0) {
        // 0x8023210C: sh          $zero, 0x446($s1)
        MEM_H(0X446, ctx->r17) = 0;
            goto L_80232134;
    }
    goto skip_1;
    // 0x8023210C: sh          $zero, 0x446($s1)
    MEM_H(0X446, ctx->r17) = 0;
    skip_1:
    // 0x80232110: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80232114: lhu         $a0, 0x440($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X440);
    // 0x80232118: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x8023211C: sb          $v1, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r3;
    // 0x80232120: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80232124: andi        $a0, $a0, 0xF7FD
    ctx->r4 = ctx->r4 & 0XF7FD;
    // 0x80232128: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x8023212C: sh          $a0, 0x440($s1)
    MEM_H(0X440, ctx->r17) = ctx->r4;
    // 0x80232130: sh          $zero, 0x446($s1)
    MEM_H(0X446, ctx->r17) = 0;
L_80232134:
    // 0x80232134: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80232138:
    // 0x80232138: j           L_802321E4
    // 0x8023213C: sh          $v0, 0x4($s3)
    MEM_H(0X4, ctx->r19) = ctx->r2;
        goto L_802321E4;
    // 0x8023213C: sh          $v0, 0x4($s3)
    MEM_H(0X4, ctx->r19) = ctx->r2;
L_80232140:
    // 0x80232140: lb          $v0, 0xA6($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XA6);
    // 0x80232144: beq         $v0, $zero, L_8023216C
    if (ctx->r2 == 0) {
        // 0x80232148: addiu       $a0, $zero, 0x151
        ctx->r4 = ADD32(0, 0X151);
            goto L_8023216C;
    }
    // 0x80232148: addiu       $a0, $zero, 0x151
    ctx->r4 = ADD32(0, 0X151);
    // 0x8023214C: addiu       $s0, $s1, 0x14
    ctx->r16 = ADD32(ctx->r17, 0X14);
    // 0x80232150: jal         0x8002A33C
    // 0x80232154: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_7;
    // 0x80232154: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_7:
    // 0x80232158: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x8023215C: addiu       $a1, $zero, 0x400
    ctx->r5 = ADD32(0, 0X400);
    // 0x80232160: addiu       $a2, $zero, 0x2000
    ctx->r6 = ADD32(0, 0X2000);
    // 0x80232164: jal         0x8003491C
    // 0x80232168: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_8003491C_FD1C(rdram, ctx);
        goto after_8;
    // 0x80232168: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_8:
L_8023216C:
    // 0x8023216C: lb          $v0, 0xA7($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XA7);
    // 0x80232170: bgez        $v0, L_802321E4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80232174: addiu       $v1, $zero, 0x9
        ctx->r3 = ADD32(0, 0X9);
            goto L_802321E4;
    }
    // 0x80232174: addiu       $v1, $zero, 0x9
    ctx->r3 = ADD32(0, 0X9);
    // 0x80232178: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x8023217C: sb          $v1, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r3;
    // 0x80232180: j           L_802321E0
    // 0x80232184: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_802321E0;
    // 0x80232184: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80232188:
    // 0x80232188: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8023218C: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80232190: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80232194: bne         $v0, $zero, L_802321C8
    if (ctx->r2 != 0) {
        // 0x80232198: addiu       $a0, $zero, 0x604
        ctx->r4 = ADD32(0, 0X604);
            goto L_802321C8;
    }
    // 0x80232198: addiu       $a0, $zero, 0x604
    ctx->r4 = ADD32(0, 0X604);
    // 0x8023219C: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x802321A0: jal         0x8006036C
    // 0x802321A4: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    func_8006036C_3B76C(rdram, ctx);
        goto after_9;
    // 0x802321A4: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    after_9:
    // 0x802321A8: jal         0x80047B3C
    // 0x802321AC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80047B3C_22F3C(rdram, ctx);
        goto after_10;
    // 0x802321AC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_10:
    // 0x802321B0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802321B4: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x802321B8: jal         0x8004A0DC
    // 0x802321BC: sh          $v0, 0x440($s1)
    MEM_H(0X440, ctx->r17) = ctx->r2;
    func_8004A0DC_254DC(rdram, ctx);
        goto after_11;
    // 0x802321BC: sh          $v0, 0x440($s1)
    MEM_H(0X440, ctx->r17) = ctx->r2;
    after_11:
    // 0x802321C0: j           L_802321E4
    // 0x802321C4: nop

        goto L_802321E4;
    // 0x802321C4: nop

L_802321C8:
    // 0x802321C8: lb          $v0, 0xA7($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XA7);
    // 0x802321CC: bgez        $v0, L_802321E4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802321D0: addiu       $v1, $zero, 0x8
        ctx->r3 = ADD32(0, 0X8);
            goto L_802321E4;
    }
    // 0x802321D0: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x802321D4: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x802321D8: sb          $v1, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r3;
    // 0x802321DC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
L_802321E0:
    // 0x802321E0: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_802321E4:
    // 0x802321E4: lh          $v0, 0xF6($s3)
    ctx->r2 = MEM_H(ctx->r19, 0XF6);
    // 0x802321E8: slti        $v0, $v0, 0x8
    ctx->r2 = SIGNED(ctx->r2) < 0X8 ? 1 : 0;
    // 0x802321EC: bne         $v0, $zero, L_802321F8
    if (ctx->r2 != 0) {
        // 0x802321F0: addiu       $v0, $zero, 0x4210
        ctx->r2 = ADD32(0, 0X4210);
            goto L_802321F8;
    }
    // 0x802321F0: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x802321F4: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
L_802321F8:
    // 0x802321F8: sh          $v0, 0x15E($s1)
    MEM_H(0X15E, ctx->r17) = ctx->r2;
    // 0x802321FC: lhu         $v0, 0xF6($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0XF6);
    // 0x80232200: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80232204: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80232208: sh          $v0, 0xF6($s3)
    MEM_H(0XF6, ctx->r19) = ctx->r2;
    // 0x8023220C: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x80232210: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80232214: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80232218: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8023221C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80232220: jr          $ra
    // 0x80232224: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80232224: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022CA60_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CA60: andi        $a1, $a1, 0x3F
    ctx->r5 = ctx->r5 & 0X3F;
    // 0x8022CA64: jr          $ra
    // 0x8022CA68: sb          $a1, 0x89($a0)
    MEM_B(0X89, ctx->r4) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x8022CA68: sb          $a1, 0x89($a0)
    MEM_B(0X89, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_80230E44_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230E44: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80230E48: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80230E4C: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x80230E50: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80230E54: addiu       $s2, $s4, 0x4A8
    ctx->r18 = ADD32(ctx->r20, 0X4A8);
    // 0x80230E58: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80230E5C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80230E60: lui         $s0, 0x8024
    ctx->r16 = S32(0X8024 << 16);
    // 0x80230E64: addiu       $s0, $s0, -0x6910
    ctx->r16 = ADD32(ctx->r16, -0X6910);
    // 0x80230E68: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80230E6C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80230E70: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80230E74: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80230E78: jal         0x8009A3B4
    // 0x80230E7C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80230E7C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    after_0:
    // 0x80230E80: addiu       $s1, $s4, 0x4B0
    ctx->r17 = ADD32(ctx->r20, 0X4B0);
    // 0x80230E84: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80230E88: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x80230E8C: addiu       $a1, $a1, -0x6908
    ctx->r5 = ADD32(ctx->r5, -0X6908);
    // 0x80230E90: jal         0x8009A3B4
    // 0x80230E94: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80230E94: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80230E98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230E9C: addiu       $s3, $s4, 0x14
    ctx->r19 = ADD32(ctx->r20, 0X14);
    // 0x80230EA0: jal         0x8004EC38
    // 0x80230EA4: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_8004EC38_2A038(rdram, ctx);
        goto after_2;
    // 0x80230EA4: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_2:
    // 0x80230EA8: lhu         $s0, 0x64($s4)
    ctx->r16 = MEM_HU(ctx->r20, 0X64);
    // 0x80230EAC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80230EB0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80230EB4: addiu       $a3, $zero, 0x5000
    ctx->r7 = ADD32(0, 0X5000);
    // 0x80230EB8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80230EBC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80230EC0: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x80230EC4: jal         0x8004DBA0
    // 0x80230EC8: andi        $a2, $s0, 0xFFF
    ctx->r6 = ctx->r16 & 0XFFF;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_3;
    // 0x80230EC8: andi        $a2, $s0, 0xFFF
    ctx->r6 = ctx->r16 & 0XFFF;
    after_3:
    // 0x80230ECC: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80230ED0: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80230ED4: jal         0x8009A3B4
    // 0x80230ED8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x80230ED8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x80230EDC: addiu       $a0, $s4, 0x1C
    ctx->r4 = ADD32(ctx->r20, 0X1C);
    // 0x80230EE0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80230EE4: jal         0x8009A3B4
    // 0x80230EE8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x80230EE8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_5:
    // 0x80230EEC: lhu         $v0, 0x66($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X66);
    // 0x80230EF0: lhu         $v1, 0x56($s4)
    ctx->r3 = MEM_HU(ctx->r20, 0X56);
    // 0x80230EF4: lbu         $a0, 0xA($s4)
    ctx->r4 = MEM_BU(ctx->r20, 0XA);
    // 0x80230EF8: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x80230EFC: lhu         $v0, 0x532($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X532);
    // 0x80230F00: subu        $s0, $s0, $v1
    ctx->r16 = SUB32(ctx->r16, ctx->r3);
    // 0x80230F04: andi        $s0, $s0, 0xFFF
    ctx->r16 = ctx->r16 & 0XFFF;
    // 0x80230F08: sh          $s0, 0x482($s4)
    MEM_H(0X482, ctx->r20) = ctx->r16;
    // 0x80230F0C: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80230F10: sh          $v0, 0x532($s4)
    MEM_H(0X532, ctx->r20) = ctx->r2;
    // 0x80230F14: sltiu       $v0, $a0, 0x6
    ctx->r2 = ctx->r4 < 0X6 ? 1 : 0;
    // 0x80230F18: beq         $v0, $zero, L_802310D0
    if (ctx->r2 == 0) {
        // 0x80230F1C: addiu       $s0, $s4, 0x440
        ctx->r16 = ADD32(ctx->r20, 0X440);
            goto L_802310D0;
    }
    // 0x80230F1C: addiu       $s0, $s4, 0x440
    ctx->r16 = ADD32(ctx->r20, 0X440);
    // 0x80230F20: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x80230F24: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80230F28: addu        $at, $at, $v0
    gpr jr_addend_80230F30 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80230F2C: lw          $v0, -0x6370($at)
    ctx->r2 = ADD32(ctx->r1, -0X6370);
    // 0x80230F30: jr          $v0
    // 0x80230F34: nop

    switch (jr_addend_80230F30 >> 2) {
        case 0: goto L_80230F38; break;
        case 1: goto L_80230F78; break;
        case 2: goto L_80230FA8; break;
        case 3: goto L_80231008; break;
        case 4: goto L_80231068; break;
        case 5: goto L_802310B0; break;
        default: switch_error(__func__, 0x80230F30, 0x80239C90);
    }
    // 0x80230F34: nop

L_80230F38:
    // 0x80230F38: lbu         $v1, 0xA($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0XA);
    // 0x80230F3C: addiu       $a0, $zero, 0xFC
    ctx->r4 = ADD32(0, 0XFC);
    // 0x80230F40: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80230F44: sb          $v0, 0xAC($s4)
    MEM_B(0XAC, ctx->r20) = ctx->r2;
    // 0x80230F48: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80230F4C: sb          $v1, 0xA($s4)
    MEM_B(0XA, ctx->r20) = ctx->r3;
    // 0x80230F50: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x80230F54: addiu       $a1, $s4, 0x14
    ctx->r5 = ADD32(ctx->r20, 0X14);
    // 0x80230F58: addiu       $v1, $zero, 0x7
    ctx->r3 = ADD32(0, 0X7);
    // 0x80230F5C: sh          $v1, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r3;
    // 0x80230F60: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x80230F64: andi        $v0, $v0, 0xFFBF
    ctx->r2 = ctx->r2 & 0XFFBF;
    // 0x80230F68: jal         0x8002A33C
    // 0x80230F6C: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_6;
    // 0x80230F6C: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
    after_6:
    // 0x80230F70: j           L_802310D0
    // 0x80230F74: nop

        goto L_802310D0;
    // 0x80230F74: nop

L_80230F78:
    // 0x80230F78: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x80230F7C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80230F80: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x80230F84: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80230F88: bne         $v0, $zero, L_802310D0
    if (ctx->r2 != 0) {
        // 0x80230F8C: nop
    
            goto L_802310D0;
    }
    // 0x80230F8C: nop

    // 0x80230F90: lbu         $v0, 0xA($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XA);
    // 0x80230F94: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80230F98: sb          $v0, 0xA($s4)
    MEM_B(0XA, ctx->r20) = ctx->r2;
    // 0x80230F9C: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x80230FA0: j           L_802310D0
    // 0x80230FA4: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
        goto L_802310D0;
    // 0x80230FA4: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
L_80230FA8:
    // 0x80230FA8: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x80230FAC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80230FB0: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x80230FB4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80230FB8: bne         $v0, $zero, L_80230FEC
    if (ctx->r2 != 0) {
        // 0x80230FBC: addiu       $a0, $zero, 0xFC
        ctx->r4 = ADD32(0, 0XFC);
            goto L_80230FEC;
    }
    // 0x80230FBC: addiu       $a0, $zero, 0xFC
    ctx->r4 = ADD32(0, 0XFC);
    // 0x80230FC0: lbu         $v0, 0xA($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XA);
    // 0x80230FC4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80230FC8: sb          $v0, 0xA($s4)
    MEM_B(0XA, ctx->r20) = ctx->r2;
    // 0x80230FCC: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x80230FD0: addiu       $a1, $s4, 0x14
    ctx->r5 = ADD32(ctx->r20, 0X14);
    // 0x80230FD4: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
    // 0x80230FD8: sh          $v1, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r3;
    // 0x80230FDC: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    // 0x80230FE0: andi        $v0, $v0, 0xFFDF
    ctx->r2 = ctx->r2 & 0XFFDF;
    // 0x80230FE4: jal         0x8002A33C
    // 0x80230FE8: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_7;
    // 0x80230FE8: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
    after_7:
L_80230FEC:
    // 0x80230FEC: lhu         $v0, 0x56($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X56);
    // 0x80230FF0: addiu       $v0, $v0, 0x1E
    ctx->r2 = ADD32(ctx->r2, 0X1E);
    // 0x80230FF4: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80230FF8: sh          $v0, 0x56($s4)
    MEM_H(0X56, ctx->r20) = ctx->r2;
    // 0x80230FFC: lhu         $v0, 0x42($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X42);
    // 0x80231000: j           L_802310A4
    // 0x80231004: addiu       $v0, $v0, -0x1E
    ctx->r2 = ADD32(ctx->r2, -0X1E);
        goto L_802310A4;
    // 0x80231004: addiu       $v0, $v0, -0x1E
    ctx->r2 = ADD32(ctx->r2, -0X1E);
L_80231008:
    // 0x80231008: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x8023100C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80231010: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x80231014: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80231018: bne         $v0, $zero, L_8023104C
    if (ctx->r2 != 0) {
        // 0x8023101C: nop
    
            goto L_8023104C;
    }
    // 0x8023101C: nop

    // 0x80231020: lhu         $v0, 0x56($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X56);
    // 0x80231024: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
    // 0x80231028: sh          $v0, 0x56($s4)
    MEM_H(0X56, ctx->r20) = ctx->r2;
    // 0x8023102C: lhu         $v0, 0x42($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X42);
    // 0x80231030: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x80231034: sh          $v0, 0x42($s0)
    MEM_H(0X42, ctx->r16) = ctx->r2;
    // 0x80231038: lbu         $v0, 0xA($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XA);
    // 0x8023103C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80231040: sb          $v0, 0xA($s4)
    MEM_B(0XA, ctx->r20) = ctx->r2;
    // 0x80231044: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80231048: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
L_8023104C:
    // 0x8023104C: lhu         $v0, 0x56($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X56);
    // 0x80231050: addiu       $v0, $v0, -0x35
    ctx->r2 = ADD32(ctx->r2, -0X35);
    // 0x80231054: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80231058: sh          $v0, 0x56($s4)
    MEM_H(0X56, ctx->r20) = ctx->r2;
    // 0x8023105C: lhu         $v0, 0x42($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X42);
    // 0x80231060: j           L_802310A4
    // 0x80231064: addiu       $v0, $v0, 0x35
    ctx->r2 = ADD32(ctx->r2, 0X35);
        goto L_802310A4;
    // 0x80231064: addiu       $v0, $v0, 0x35
    ctx->r2 = ADD32(ctx->r2, 0X35);
L_80231068:
    // 0x80231068: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x8023106C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80231070: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x80231074: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80231078: bne         $v0, $zero, L_8023108C
    if (ctx->r2 != 0) {
        // 0x8023107C: nop
    
            goto L_8023108C;
    }
    // 0x8023107C: nop

    // 0x80231080: lbu         $v0, 0xA($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XA);
    // 0x80231084: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80231088: sb          $v0, 0xA($s4)
    MEM_B(0XA, ctx->r20) = ctx->r2;
L_8023108C:
    // 0x8023108C: lhu         $v0, 0x56($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X56);
    // 0x80231090: addiu       $v0, $v0, 0x2B
    ctx->r2 = ADD32(ctx->r2, 0X2B);
    // 0x80231094: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80231098: sh          $v0, 0x56($s4)
    MEM_H(0X56, ctx->r20) = ctx->r2;
    // 0x8023109C: lhu         $v0, 0x42($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X42);
    // 0x802310A0: addiu       $v0, $v0, -0x2B
    ctx->r2 = ADD32(ctx->r2, -0X2B);
L_802310A4:
    // 0x802310A4: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x802310A8: j           L_802310D0
    // 0x802310AC: sh          $v0, 0x42($s0)
    MEM_H(0X42, ctx->r16) = ctx->r2;
        goto L_802310D0;
    // 0x802310AC: sh          $v0, 0x42($s0)
    MEM_H(0X42, ctx->r16) = ctx->r2;
L_802310B0:
    // 0x802310B0: lb          $v0, 0xA7($s4)
    ctx->r2 = MEM_B(ctx->r20, 0XA7);
    // 0x802310B4: bgez        $v0, L_802310D0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802310B8: addiu       $v1, $zero, 0x5A
        ctx->r3 = ADD32(0, 0X5A);
            goto L_802310D0;
    }
    // 0x802310B8: addiu       $v1, $zero, 0x5A
    ctx->r3 = ADD32(0, 0X5A);
    // 0x802310BC: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x802310C0: sh          $v1, 0x40($s0)
    MEM_H(0X40, ctx->r16) = ctx->r3;
    // 0x802310C4: andi        $v0, $v0, 0xFF9F
    ctx->r2 = ctx->r2 & 0XFF9F;
    // 0x802310C8: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x802310CC: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
L_802310D0:
    // 0x802310D0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x802310D4: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x802310D8: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x802310DC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x802310E0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x802310E4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802310E8: jr          $ra
    // 0x802310EC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x802310EC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8023515C_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023515C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80235160: lui         $v1, 0x400
    ctx->r3 = S32(0X400 << 16);
    // 0x80235164: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x80235168: lbu         $a1, 0x1($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X1);
    // 0x8023516C: ori         $v1, $v1, 0x5
    ctx->r3 = ctx->r3 | 0X5;
    // 0x80235170: addiu       $v0, $a0, 0xC8
    ctx->r2 = ADD32(ctx->r4, 0XC8);
    // 0x80235174: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    // 0x80235178: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023517C: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x80235180: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80235184: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x80235188: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8023518C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80235190: sw          $a1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r5;
    // 0x80235194: jal         0x80051E18
    // 0x80235198: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    func_80051E18_2D218(rdram, ctx);
        goto after_0;
    // 0x80235198: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_0:
    // 0x8023519C: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x802351A0: jr          $ra
    // 0x802351A4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x802351A4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80231E6C_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231E6C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80231E70: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80231E74: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80231E78: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80231E7C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80231E80: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x80231E84: addiu       $a3, $a3, 0x49B0
    ctx->r7 = ADD32(ctx->r7, 0X49B0);
    // 0x80231E88: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x80231E8C: beq         $v1, $zero, L_80231EA8
    if (ctx->r3 == 0) {
        // 0x80231E90: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_80231EA8;
    }
    // 0x80231E90: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80231E94: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80231E98: beq         $v1, $v0, L_80231F24
    if (ctx->r3 == ctx->r2) {
        // 0x80231E9C: nop
    
            goto L_80231F24;
    }
    // 0x80231E9C: nop

    // 0x80231EA0: j           L_80231F40
    // 0x80231EA4: nop

        goto L_80231F40;
    // 0x80231EA4: nop

L_80231EA8:
    // 0x80231EA8: lhu         $a1, 0x56($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X56);
    // 0x80231EAC: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80231EB0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80231EB4: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x80231EB8: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80231EBC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80231EC0: lh          $v0, 0x4A06($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X4A06);
    // 0x80231EC4: addiu       $a2, $zero, 0x400
    ctx->r6 = ADD32(0, 0X400);
    // 0x80231EC8: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x80231ECC: addiu       $a1, $a1, 0x400
    ctx->r5 = ADD32(ctx->r5, 0X400);
    // 0x80231ED0: andi        $a1, $a1, 0xFFF
    ctx->r5 = ctx->r5 & 0XFFF;
    // 0x80231ED4: jal         0x8004FAEC
    // 0x80231ED8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_8004FAEC_2AEEC(rdram, ctx);
        goto after_0;
    // 0x80231ED8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x80231EDC: beq         $v0, $zero, L_80231EF8
    if (ctx->r2 == 0) {
        // 0x80231EE0: addiu       $v1, $zero, 0x6
        ctx->r3 = ADD32(0, 0X6);
            goto L_80231EF8;
    }
    // 0x80231EE0: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
    // 0x80231EE4: lhu         $v0, 0x440($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X440);
    // 0x80231EE8: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x80231EEC: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    // 0x80231EF0: j           L_80231F0C
    // 0x80231EF4: andi        $v0, $v0, 0xFFDF
    ctx->r2 = ctx->r2 & 0XFFDF;
        goto L_80231F0C;
    // 0x80231EF4: andi        $v0, $v0, 0xFFDF
    ctx->r2 = ctx->r2 & 0XFFDF;
L_80231EF8:
    // 0x80231EF8: lhu         $v0, 0x440($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X440);
    // 0x80231EFC: addiu       $v1, $zero, 0x7
    ctx->r3 = ADD32(0, 0X7);
    // 0x80231F00: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x80231F04: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x80231F08: andi        $v0, $v0, 0xFFBF
    ctx->r2 = ctx->r2 & 0XFFBF;
L_80231F0C:
    // 0x80231F0C: sh          $v0, 0x440($s0)
    MEM_H(0X440, ctx->r16) = ctx->r2;
    // 0x80231F10: addiu       $a0, $zero, 0xFC
    ctx->r4 = ADD32(0, 0XFC);
    // 0x80231F14: jal         0x8002A33C
    // 0x80231F18: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x80231F18: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_1:
    // 0x80231F1C: j           L_80231F40
    // 0x80231F20: nop

        goto L_80231F40;
    // 0x80231F20: nop

L_80231F24:
    // 0x80231F24: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x80231F28: bgez        $v0, L_80231F40
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80231F2C: nop
    
            goto L_80231F40;
    }
    // 0x80231F2C: nop

    // 0x80231F30: lhu         $v0, 0x440($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X440);
    // 0x80231F34: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80231F38: andi        $v0, $v0, 0xFE9F
    ctx->r2 = ctx->r2 & 0XFE9F;
    // 0x80231F3C: sh          $v0, 0x440($s0)
    MEM_H(0X440, ctx->r16) = ctx->r2;
L_80231F40:
    // 0x80231F40: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80231F44: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80231F48: jr          $ra
    // 0x80231F4C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80231F4C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802310F0_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802310F0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x802310F4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x802310F8: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x802310FC: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x80231100: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80231104: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80231108: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8023110C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80231110: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80231114: lbu         $v1, 0xA($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0XA);
    // 0x80231118: lui         $s5, 0x8020
    ctx->r21 = S32(0X8020 << 16);
    // 0x8023111C: addiu       $s5, $s5, 0x49B0
    ctx->r21 = ADD32(ctx->r21, 0X49B0);
    // 0x80231120: sltiu       $v0, $v1, 0x7
    ctx->r2 = ctx->r3 < 0X7 ? 1 : 0;
    // 0x80231124: beq         $v0, $zero, L_80231478
    if (ctx->r2 == 0) {
        // 0x80231128: addiu       $s4, $s2, 0x440
        ctx->r20 = ADD32(ctx->r18, 0X440);
            goto L_80231478;
    }
    // 0x80231128: addiu       $s4, $s2, 0x440
    ctx->r20 = ADD32(ctx->r18, 0X440);
    // 0x8023112C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80231130: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80231134: addu        $at, $at, $v0
    gpr jr_addend_8023113C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80231138: lw          $v0, -0x6358($at)
    ctx->r2 = ADD32(ctx->r1, -0X6358);
    // 0x8023113C: jr          $v0
    // 0x80231140: nop

    switch (jr_addend_8023113C >> 2) {
        case 0: goto L_80231144; break;
        case 1: goto L_802311D0; break;
        case 2: goto L_80231284; break;
        case 3: goto L_802312CC; break;
        case 4: goto L_8023139C; break;
        case 5: goto L_802313F4; break;
        case 6: goto L_80231450; break;
        default: switch_error(__func__, 0x8023113C, 0x80239CA8);
    }
    // 0x80231140: nop

L_80231144:
    // 0x80231144: lbu         $v0, 0xA($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XA);
    // 0x80231148: addiu       $s1, $s5, 0x14
    ctx->r17 = ADD32(ctx->r21, 0X14);
    // 0x8023114C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80231150: addiu       $s0, $s2, 0x14
    ctx->r16 = ADD32(ctx->r18, 0X14);
    // 0x80231154: sb          $zero, 0xAC($s2)
    MEM_B(0XAC, ctx->r18) = 0;
    // 0x80231158: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023115C: sb          $v0, 0xA($s2)
    MEM_B(0XA, ctx->r18) = ctx->r2;
    // 0x80231160: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x80231164: sh          $v0, 0x4($s4)
    MEM_H(0X4, ctx->r20) = ctx->r2;
    // 0x80231168: lh          $a2, 0x56($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X56);
    // 0x8023116C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80231170: jal         0x8004F820
    // 0x80231174: addiu       $a3, $zero, 0x200
    ctx->r7 = ADD32(0, 0X200);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x80231174: addiu       $a3, $zero, 0x200
    ctx->r7 = ADD32(0, 0X200);
    after_0:
    // 0x80231178: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023117C: bgez        $v0, L_802311A8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80231180: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_802311A8;
    }
    // 0x80231180: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80231184: lh          $a2, 0x56($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X56);
    // 0x80231188: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8023118C: jal         0x8004F820
    // 0x80231190: addiu       $a3, $zero, 0x200
    ctx->r7 = ADD32(0, 0X200);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x80231190: addiu       $a3, $zero, 0x200
    ctx->r7 = ADD32(0, 0X200);
    after_1:
    // 0x80231194: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80231198: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023119C: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x802311A0: j           L_802311C0
    // 0x802311A4: srl         $v1, $v0, 4
    ctx->r3 = S32(U32(ctx->r2) >> 4);
        goto L_802311C0;
    // 0x802311A4: srl         $v1, $v0, 4
    ctx->r3 = S32(U32(ctx->r2) >> 4);
L_802311A8:
    // 0x802311A8: lh          $a2, 0x56($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X56);
    // 0x802311AC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x802311B0: jal         0x8004F820
    // 0x802311B4: addiu       $a3, $zero, 0x200
    ctx->r7 = ADD32(0, 0X200);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x802311B4: addiu       $a3, $zero, 0x200
    ctx->r7 = ADD32(0, 0X200);
    after_2:
    // 0x802311B8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802311BC: sra         $v1, $v0, 20
    ctx->r3 = S32(SIGNED(ctx->r2) >> 20);
L_802311C0:
    // 0x802311C0: lhu         $v0, 0x0($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X0);
    // 0x802311C4: sh          $v1, 0x6E($s4)
    MEM_H(0X6E, ctx->r20) = ctx->r3;
    // 0x802311C8: j           L_80231474
    // 0x802311CC: ori         $v0, $v0, 0x2000
    ctx->r2 = ctx->r2 | 0X2000;
        goto L_80231474;
    // 0x802311CC: ori         $v0, $v0, 0x2000
    ctx->r2 = ctx->r2 | 0X2000;
L_802311D0:
    // 0x802311D0: lhu         $v0, 0x4($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X4);
    // 0x802311D4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802311D8: sh          $v0, 0x4($s4)
    MEM_H(0X4, ctx->r20) = ctx->r2;
    // 0x802311DC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802311E0: bgez        $v0, L_80231204
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802311E4: addiu       $v1, $zero, 0xB
        ctx->r3 = ADD32(0, 0XB);
            goto L_80231204;
    }
    // 0x802311E4: addiu       $v1, $zero, 0xB
    ctx->r3 = ADD32(0, 0XB);
    // 0x802311E8: lbu         $v0, 0xA($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XA);
    // 0x802311EC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802311F0: sb          $v0, 0xA($s2)
    MEM_B(0XA, ctx->r18) = ctx->r2;
    // 0x802311F4: lhu         $v0, 0x0($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X0);
    // 0x802311F8: sh          $v1, 0x4($s4)
    MEM_H(0X4, ctx->r20) = ctx->r3;
    // 0x802311FC: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80231200: sh          $v0, 0x0($s4)
    MEM_H(0X0, ctx->r20) = ctx->r2;
L_80231204:
    // 0x80231204: lb          $v0, 0x76($s5)
    ctx->r2 = MEM_B(ctx->r21, 0X76);
    // 0x80231208: beq         $v0, $zero, L_8023121C
    if (ctx->r2 == 0) {
        // 0x8023120C: nop
    
            goto L_8023121C;
    }
    // 0x8023120C: nop

    // 0x80231210: lw          $v0, 0xC0($s5)
    ctx->r2 = MEM_W(ctx->r21, 0XC0);
    // 0x80231214: beq         $v0, $s2, L_80231254
    if (ctx->r2 == ctx->r18) {
        // 0x80231218: addiu       $a0, $zero, 0xF7
        ctx->r4 = ADD32(0, 0XF7);
            goto L_80231254;
    }
    // 0x80231218: addiu       $a0, $zero, 0xF7
    ctx->r4 = ADD32(0, 0XF7);
L_8023121C:
    // 0x8023121C: lh          $a2, 0x56($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X56);
    // 0x80231220: lh          $a3, 0x6E($s4)
    ctx->r7 = MEM_H(ctx->r20, 0X6E);
    // 0x80231224: addiu       $a0, $s5, 0x14
    ctx->r4 = ADD32(ctx->r21, 0X14);
    // 0x80231228: jal         0x8004F820
    // 0x8023122C: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x8023122C: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    after_3:
    // 0x80231230: lhu         $v1, 0x56($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X56);
    // 0x80231234: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80231238: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8023123C: sh          $v1, 0x56($s2)
    MEM_H(0X56, ctx->r18) = ctx->r3;
    // 0x80231240: lhu         $v1, 0x42($s4)
    ctx->r3 = MEM_HU(ctx->r20, 0X42);
    // 0x80231244: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80231248: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8023124C: j           L_80231478
    // 0x80231250: sh          $v1, 0x42($s4)
    MEM_H(0X42, ctx->r20) = ctx->r3;
        goto L_80231478;
    // 0x80231250: sh          $v1, 0x42($s4)
    MEM_H(0X42, ctx->r20) = ctx->r3;
L_80231254:
    // 0x80231254: lbu         $v0, 0xA($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XA);
    // 0x80231258: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023125C: sb          $v0, 0xA($s2)
    MEM_B(0XA, ctx->r18) = ctx->r2;
    // 0x80231260: lhu         $v1, 0x0($s4)
    ctx->r3 = MEM_HU(ctx->r20, 0X0);
    // 0x80231264: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    // 0x80231268: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x8023126C: sh          $v0, 0x4($s4)
    MEM_H(0X4, ctx->r20) = ctx->r2;
    // 0x80231270: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80231274: jal         0x8002A33C
    // 0x80231278: sh          $v1, 0x0($s4)
    MEM_H(0X0, ctx->r20) = ctx->r3;
    func_8002A33C_573C(rdram, ctx);
        goto after_4;
    // 0x80231278: sh          $v1, 0x0($s4)
    MEM_H(0X0, ctx->r20) = ctx->r3;
    after_4:
    // 0x8023127C: j           L_80231478
    // 0x80231280: nop

        goto L_80231478;
    // 0x80231280: nop

L_80231284:
    // 0x80231284: lhu         $v0, 0x4($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X4);
    // 0x80231288: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023128C: sh          $v0, 0x4($s4)
    MEM_H(0X4, ctx->r20) = ctx->r2;
    // 0x80231290: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80231294: bgez        $v0, L_802312BC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80231298: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_802312BC;
    }
    // 0x80231298: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8023129C: lbu         $v0, 0xA($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XA);
    // 0x802312A0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802312A4: sb          $v0, 0xA($s2)
    MEM_B(0XA, ctx->r18) = ctx->r2;
    // 0x802312A8: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x802312AC: sh          $v0, 0x4($s4)
    MEM_H(0X4, ctx->r20) = ctx->r2;
    // 0x802312B0: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x802312B4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x802312B8: sb          $v0, -0x209D($at)
    MEM_B(-0X209D, ctx->r1) = ctx->r2;
L_802312BC:
    // 0x802312BC: jal         0x80232664
    // 0x802312C0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_80232664_ovl13(rdram, ctx);
        goto after_5;
    // 0x802312C0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_5:
    // 0x802312C4: j           L_80231478
    // 0x802312C8: nop

        goto L_80231478;
    // 0x802312C8: nop

L_802312CC:
    // 0x802312CC: lhu         $v0, 0x4($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X4);
    // 0x802312D0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802312D4: sh          $v0, 0x4($s4)
    MEM_H(0X4, ctx->r20) = ctx->r2;
    // 0x802312D8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802312DC: bgez        $v0, L_80231478
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802312E0: nop
    
            goto L_80231478;
    }
    // 0x802312E0: nop

    // 0x802312E4: jal         0x8004EEAC
    // 0x802312E8: nop

    func_8004EEAC_2A2AC(rdram, ctx);
        goto after_6;
    // 0x802312E8: nop

    after_6:
    // 0x802312EC: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x802312F0: beq         $s3, $zero, L_80231370
    if (ctx->r19 == 0) {
        // 0x802312F4: addiu       $s1, $s3, 0x14
        ctx->r17 = ADD32(ctx->r19, 0X14);
            goto L_80231370;
    }
    // 0x802312F4: addiu       $s1, $s3, 0x14
    ctx->r17 = ADD32(ctx->r19, 0X14);
    // 0x802312F8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802312FC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80231300: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80231304: sb          $v1, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r3;
    // 0x80231308: sb          $zero, 0x2($s3)
    MEM_B(0X2, ctx->r19) = 0;
    // 0x8023130C: sb          $v0, 0x4($s3)
    MEM_B(0X4, ctx->r19) = ctx->r2;
    // 0x80231310: sb          $zero, 0x3($s3)
    MEM_B(0X3, ctx->r19) = 0;
    // 0x80231314: lbu         $v0, 0x1($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X1);
    // 0x80231318: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    // 0x8023131C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80231320: sb          $v1, 0xF($s3)
    MEM_B(0XF, ctx->r19) = ctx->r3;
    // 0x80231324: jal         0x8009A3B4
    // 0x80231328: sb          $v0, 0xC($s3)
    MEM_B(0XC, ctx->r19) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x80231328: sb          $v0, 0xC($s3)
    MEM_B(0XC, ctx->r19) = ctx->r2;
    after_7:
    // 0x8023132C: addiu       $s0, $s3, 0x1C
    ctx->r16 = ADD32(ctx->r19, 0X1C);
    // 0x80231330: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80231334: addiu       $a1, $s2, 0x1C
    ctx->r5 = ADD32(ctx->r18, 0X1C);
    // 0x80231338: jal         0x8009A3B4
    // 0x8023133C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x8023133C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_8:
    // 0x80231340: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80231344: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80231348: lh          $a2, 0x56($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X56);
    // 0x8023134C: addiu       $a3, $zero, 0xD00
    ctx->r7 = ADD32(0, 0XD00);
    // 0x80231350: addiu       $v0, $zero, -0x2E20
    ctx->r2 = ADD32(0, -0X2E20);
    // 0x80231354: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80231358: jal         0x8004DBA0
    // 0x8023135C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_9;
    // 0x8023135C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_9:
    // 0x80231360: lhu         $v0, 0x56($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X56);
    // 0x80231364: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x80231368: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8023136C: sh          $v0, 0x56($s3)
    MEM_H(0X56, ctx->r19) = ctx->r2;
L_80231370:
    // 0x80231370: lbu         $v0, 0xA($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XA);
    // 0x80231374: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80231378: sb          $v0, 0xA($s2)
    MEM_B(0XA, ctx->r18) = ctx->r2;
    // 0x8023137C: lb          $v0, 0x76($s5)
    ctx->r2 = MEM_B(ctx->r21, 0X76);
    // 0x80231380: bne         $v0, $zero, L_80231394
    if (ctx->r2 != 0) {
        // 0x80231384: addiu       $v0, $zero, 0x2D
        ctx->r2 = ADD32(0, 0X2D);
            goto L_80231394;
    }
    // 0x80231384: addiu       $v0, $zero, 0x2D
    ctx->r2 = ADD32(0, 0X2D);
    // 0x80231388: addiu       $v0, $zero, 0x69
    ctx->r2 = ADD32(0, 0X69);
    // 0x8023138C: j           L_80231478
    // 0x80231390: sh          $v0, 0x4($s4)
    MEM_H(0X4, ctx->r20) = ctx->r2;
        goto L_80231478;
    // 0x80231390: sh          $v0, 0x4($s4)
    MEM_H(0X4, ctx->r20) = ctx->r2;
L_80231394:
    // 0x80231394: j           L_80231478
    // 0x80231398: sh          $v0, 0x4($s4)
    MEM_H(0X4, ctx->r20) = ctx->r2;
        goto L_80231478;
    // 0x80231398: sh          $v0, 0x4($s4)
    MEM_H(0X4, ctx->r20) = ctx->r2;
L_8023139C:
    // 0x8023139C: lbu         $v0, 0xF($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XF);
    // 0x802313A0: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x802313A4: beq         $v0, $zero, L_80231478
    if (ctx->r2 == 0) {
        // 0x802313A8: nop
    
            goto L_80231478;
    }
    // 0x802313A8: nop

    // 0x802313AC: lhu         $v0, 0x4($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X4);
    // 0x802313B0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802313B4: sh          $v0, 0x4($s4)
    MEM_H(0X4, ctx->r20) = ctx->r2;
    // 0x802313B8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802313BC: bgez        $v0, L_80231478
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802313C0: addiu       $a0, $zero, 0xF8
        ctx->r4 = ADD32(0, 0XF8);
            goto L_80231478;
    }
    // 0x802313C0: addiu       $a0, $zero, 0xF8
    ctx->r4 = ADD32(0, 0XF8);
    // 0x802313C4: lbu         $v0, 0xA($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XA);
    // 0x802313C8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802313CC: sb          $v0, 0xA($s2)
    MEM_B(0XA, ctx->r18) = ctx->r2;
    // 0x802313D0: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x802313D4: sh          $v0, 0x4($s4)
    MEM_H(0X4, ctx->r20) = ctx->r2;
    // 0x802313D8: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x802313DC: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x802313E0: sb          $v0, -0x209D($at)
    MEM_B(-0X209D, ctx->r1) = ctx->r2;
    // 0x802313E4: jal         0x8002A33C
    // 0x802313E8: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_10;
    // 0x802313E8: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    after_10:
    // 0x802313EC: j           L_80231478
    // 0x802313F0: nop

        goto L_80231478;
    // 0x802313F0: nop

L_802313F4:
    // 0x802313F4: lhu         $v0, 0x4($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X4);
    // 0x802313F8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802313FC: sh          $v0, 0x4($s4)
    MEM_H(0X4, ctx->r20) = ctx->r2;
    // 0x80231400: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80231404: bgez        $v0, L_80231440
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80231408: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_80231440;
    }
    // 0x80231408: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8023140C: lbu         $v0, 0xA($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XA);
    // 0x80231410: lbu         $v1, 0xF($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0XF);
    // 0x80231414: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80231418: andi        $v1, $v1, 0xFD
    ctx->r3 = ctx->r3 & 0XFD;
    // 0x8023141C: sb          $v0, 0xA($s2)
    MEM_B(0XA, ctx->r18) = ctx->r2;
    // 0x80231420: sb          $v1, 0xF($s2)
    MEM_B(0XF, ctx->r18) = ctx->r3;
    // 0x80231424: lhu         $v1, 0x0($s4)
    ctx->r3 = MEM_HU(ctx->r20, 0X0);
    // 0x80231428: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x8023142C: sh          $v0, 0x4($s4)
    MEM_H(0X4, ctx->r20) = ctx->r2;
    // 0x80231430: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x80231434: sb          $zero, -0x209D($at)
    MEM_B(-0X209D, ctx->r1) = 0;
    // 0x80231438: andi        $v1, $v1, 0xFFFD
    ctx->r3 = ctx->r3 & 0XFFFD;
    // 0x8023143C: sh          $v1, 0x0($s4)
    MEM_H(0X0, ctx->r20) = ctx->r3;
L_80231440:
    // 0x80231440: jal         0x80232664
    // 0x80231444: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80232664_ovl13(rdram, ctx);
        goto after_11;
    // 0x80231444: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_11:
    // 0x80231448: j           L_80231478
    // 0x8023144C: nop

        goto L_80231478;
    // 0x8023144C: nop

L_80231450:
    // 0x80231450: lhu         $v0, 0x4($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X4);
    // 0x80231454: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80231458: sh          $v0, 0x4($s4)
    MEM_H(0X4, ctx->r20) = ctx->r2;
    // 0x8023145C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80231460: bgez        $v0, L_80231478
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80231464: nop
    
            goto L_80231478;
    }
    // 0x80231464: nop

    // 0x80231468: lhu         $v0, 0x0($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X0);
    // 0x8023146C: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80231470: andi        $v0, $v0, 0xDFFF
    ctx->r2 = ctx->r2 & 0XDFFF;
L_80231474:
    // 0x80231474: sh          $v0, 0x0($s4)
    MEM_H(0X0, ctx->r20) = ctx->r2;
L_80231478:
    // 0x80231478: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x8023147C: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80231480: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80231484: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80231488: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8023148C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80231490: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80231494: jr          $ra
    // 0x80231498: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80231498: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80232664_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232664: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x80232668: sb          $zero, -0x209E($at)
    MEM_B(-0X209E, ctx->r1) = 0;
    // 0x8023266C: bne         $a1, $zero, L_80232694
    if (ctx->r5 != 0) {
        // 0x80232670: addiu       $sp, $sp, -0x10
        ctx->r29 = ADD32(ctx->r29, -0X10);
            goto L_80232694;
    }
    // 0x80232670: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x80232674: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80232678: lb          $v0, -0x209D($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X209D);
    // 0x8023267C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80232680: slti        $v0, $v0, 0xC
    ctx->r2 = SIGNED(ctx->r2) < 0XC ? 1 : 0;
    // 0x80232684: beq         $v0, $zero, L_802326BC
    if (ctx->r2 == 0) {
        // 0x80232688: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_802326BC;
    }
    // 0x80232688: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8023268C: j           L_802326B4
    // 0x80232690: nop

        goto L_802326B4;
    // 0x80232690: nop

L_80232694:
    // 0x80232694: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80232698: bne         $a1, $v0, L_802326BC
    if (ctx->r5 != ctx->r2) {
        // 0x8023269C: nop
    
            goto L_802326BC;
    }
    // 0x8023269C: nop

    // 0x802326A0: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x802326A4: lb          $v0, -0x209D($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X209D);
    // 0x802326A8: blez        $v0, L_802326BC
    if (SIGNED(ctx->r2) <= 0) {
        // 0x802326AC: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_802326BC;
    }
    // 0x802326AC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802326B0: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
L_802326B4:
    // 0x802326B4: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x802326B8: sb          $v0, -0x209D($at)
    MEM_B(-0X209D, ctx->r1) = ctx->r2;
L_802326BC:
    // 0x802326BC: jr          $ra
    // 0x802326C0: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    TRACE_RETURN()
    return;
    // 0x802326C0: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_80231860_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231860: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80231864: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80231868: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8023186C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80231870: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80231874: lbu         $a0, 0xA($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0XA);
    // 0x80231878: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023187C: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x80231880: beq         $v1, $v0, L_802318C8
    if (ctx->r3 == ctx->r2) {
        // 0x80231884: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_802318C8;
    }
    // 0x80231884: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80231888: beql        $v0, $zero, L_802318A0
    if (ctx->r2 == 0) {
        // 0x8023188C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802318A0;
    }
    goto skip_0;
    // 0x8023188C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80231890: beq         $v1, $zero, L_802318B8
    if (ctx->r3 == 0) {
        // 0x80231894: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_802318B8;
    }
    // 0x80231894: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x80231898: j           L_80231994
    // 0x8023189C: nop

        goto L_80231994;
    // 0x8023189C: nop

L_802318A0:
    // 0x802318A0: beq         $v1, $v0, L_80231908
    if (ctx->r3 == ctx->r2) {
        // 0x802318A4: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80231908;
    }
    // 0x802318A4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802318A8: beq         $v1, $v0, L_80231978
    if (ctx->r3 == ctx->r2) {
        // 0x802318AC: nop
    
            goto L_80231978;
    }
    // 0x802318AC: nop

    // 0x802318B0: j           L_80231994
    // 0x802318B4: nop

        goto L_80231994;
    // 0x802318B4: nop

L_802318B8:
    // 0x802318B8: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x802318BC: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x802318C0: j           L_80231994
    // 0x802318C4: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
        goto L_80231994;
    // 0x802318C4: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
L_802318C8:
    // 0x802318C8: lb          $v0, 0xA7($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XA7);
    // 0x802318CC: bgez        $v0, L_80231994
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802318D0: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_80231994;
    }
    // 0x802318D0: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x802318D4: addiu       $a0, $zero, 0xA1
    ctx->r4 = ADD32(0, 0XA1);
    // 0x802318D8: addiu       $s0, $s1, 0x14
    ctx->r16 = ADD32(ctx->r17, 0X14);
    // 0x802318DC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x802318E0: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x802318E4: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x802318E8: jal         0x8002A33C
    // 0x802318EC: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x802318EC: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    after_0:
    // 0x802318F0: addiu       $a0, $zero, 0xA2
    ctx->r4 = ADD32(0, 0XA2);
    // 0x802318F4: jal         0x8002A33C
    // 0x802318F8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x802318F8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x802318FC: lhu         $v0, 0x440($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X440);
    // 0x80231900: j           L_80231990
    // 0x80231904: ori         $v0, $v0, 0x400
    ctx->r2 = ctx->r2 | 0X400;
        goto L_80231990;
    // 0x80231904: ori         $v0, $v0, 0x400
    ctx->r2 = ctx->r2 | 0X400;
L_80231908:
    // 0x80231908: lb          $v0, 0xA6($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XA6);
    // 0x8023190C: beq         $v0, $zero, L_80231934
    if (ctx->r2 == 0) {
        // 0x80231910: addiu       $a0, $zero, 0x151
        ctx->r4 = ADD32(0, 0X151);
            goto L_80231934;
    }
    // 0x80231910: addiu       $a0, $zero, 0x151
    ctx->r4 = ADD32(0, 0X151);
    // 0x80231914: addiu       $s0, $s1, 0x14
    ctx->r16 = ADD32(ctx->r17, 0X14);
    // 0x80231918: jal         0x8002A33C
    // 0x8023191C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x8023191C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80231920: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x80231924: addiu       $a1, $zero, 0x400
    ctx->r5 = ADD32(0, 0X400);
    // 0x80231928: addiu       $a2, $zero, 0x2000
    ctx->r6 = ADD32(0, 0X2000);
    // 0x8023192C: jal         0x8003491C
    // 0x80231930: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_8003491C_FD1C(rdram, ctx);
        goto after_3;
    // 0x80231930: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_3:
L_80231934:
    // 0x80231934: lb          $v0, 0xA7($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XA7);
    // 0x80231938: bgez        $v0, L_80231958
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8023193C: addiu       $v1, $zero, 0x7FFF
        ctx->r3 = ADD32(0, 0X7FFF);
            goto L_80231958;
    }
    // 0x8023193C: addiu       $v1, $zero, 0x7FFF
    ctx->r3 = ADD32(0, 0X7FFF);
    // 0x80231940: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80231944: addiu       $v1, $zero, 0xB
    ctx->r3 = ADD32(0, 0XB);
    // 0x80231948: sb          $v1, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r3;
    // 0x8023194C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80231950: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x80231954: addiu       $v1, $zero, 0x7FFF
    ctx->r3 = ADD32(0, 0X7FFF);
L_80231958:
    // 0x80231958: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x8023195C: addiu       $a0, $s1, 0x70
    ctx->r4 = ADD32(ctx->r17, 0X70);
L_80231960:
    // 0x80231960: sh          $v1, 0x186($a0)
    MEM_H(0X186, ctx->r4) = ctx->r3;
    // 0x80231964: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80231968: bgez        $v0, L_80231960
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8023196C: addiu       $a0, $a0, -0x8
        ctx->r4 = ADD32(ctx->r4, -0X8);
            goto L_80231960;
    }
    // 0x8023196C: addiu       $a0, $a0, -0x8
    ctx->r4 = ADD32(ctx->r4, -0X8);
    // 0x80231970: j           L_80231994
    // 0x80231974: nop

        goto L_80231994;
    // 0x80231974: nop

L_80231978:
    // 0x80231978: lb          $v0, 0xA7($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XA7);
    // 0x8023197C: bgez        $v0, L_80231994
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80231980: addiu       $v1, $zero, 0x78
        ctx->r3 = ADD32(0, 0X78);
            goto L_80231994;
    }
    // 0x80231980: addiu       $v1, $zero, 0x78
    ctx->r3 = ADD32(0, 0X78);
    // 0x80231984: lhu         $v0, 0x440($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X440);
    // 0x80231988: sh          $v1, 0x480($s1)
    MEM_H(0X480, ctx->r17) = ctx->r3;
    // 0x8023198C: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
L_80231990:
    // 0x80231990: sh          $v0, 0x440($s1)
    MEM_H(0X440, ctx->r17) = ctx->r2;
L_80231994:
    // 0x80231994: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80231998: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023199C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802319A0: jr          $ra
    // 0x802319A4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802319A4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80225868_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225868: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022586C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225870: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225874: jal         0x8006072C
    // 0x80225878: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8006072C_3BB2C(rdram, ctx);
        goto after_0;
    // 0x80225878: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x8022587C: beq         $v0, $zero, L_80225890
    if (ctx->r2 == 0) {
        // 0x80225880: nop
    
            goto L_80225890;
    }
    // 0x80225880: nop

    // 0x80225884: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80225888: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022588C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80225890:
    // 0x80225890: lbu         $v1, 0x5($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X5);
    // 0x80225894: beq         $v1, $zero, L_802258AC
    if (ctx->r3 == 0) {
        // 0x80225898: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802258AC;
    }
    // 0x80225898: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022589C: beq         $v1, $v0, L_80225904
    if (ctx->r3 == ctx->r2) {
        // 0x802258A0: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_80225904;
    }
    // 0x802258A0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802258A4: j           L_80225950
    // 0x802258A8: nop

        goto L_80225950;
    // 0x802258A8: nop

L_802258AC:
    // 0x802258AC: jal         0x8005FB90
    // 0x802258B0: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_1;
    // 0x802258B0: nop

    after_1:
    // 0x802258B4: jal         0x80036B7C
    // 0x802258B8: nop

    func_80036B7C_11F7C(rdram, ctx);
        goto after_2;
    // 0x802258B8: nop

    after_2:
    // 0x802258BC: beq         $v0, $zero, L_80225950
    if (ctx->r2 == 0) {
        // 0x802258C0: nop
    
            goto L_80225950;
    }
    // 0x802258C0: nop

    // 0x802258C4: jal         0x80060170
    // 0x802258C8: nop

    func_80060170_3B570(rdram, ctx);
        goto after_3;
    // 0x802258C8: nop

    after_3:
    // 0x802258CC: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802258D0: addiu       $v0, $v0, -0x7B6C
    ctx->r2 = ADD32(ctx->r2, -0X7B6C);
    // 0x802258D4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x802258D8: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    // 0x802258DC: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x802258E0: lbu         $a0, 0x5($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X5);
    // 0x802258E4: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802258E8: addiu       $v0, $v0, -0x7740
    ctx->r2 = ADD32(ctx->r2, -0X7740);
    // 0x802258EC: sw          $v0, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->r2;
    // 0x802258F0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x802258F4: andi        $v1, $v1, 0x7F
    ctx->r3 = ctx->r3 & 0X7F;
    // 0x802258F8: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x802258FC: j           L_80225950
    // 0x80225900: sb          $a0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r4;
        goto L_80225950;
    // 0x80225900: sb          $a0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r4;
L_80225904:
    // 0x80225904: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80225908: beq         $v1, $v0, L_80225938
    if (ctx->r3 == ctx->r2) {
        // 0x8022590C: nop
    
            goto L_80225938;
    }
    // 0x8022590C: nop

    // 0x80225910: lw          $v0, 0xA4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA4);
    // 0x80225914: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x80225918: jalr        $v0
    // 0x8022591C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x8022591C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80225920: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80225924: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x80225928: beq         $v0, $zero, L_80225948
    if (ctx->r2 == 0) {
        // 0x8022592C: andi        $v0, $v1, 0x80
        ctx->r2 = ctx->r3 & 0X80;
            goto L_80225948;
    }
    // 0x8022592C: andi        $v0, $v1, 0x80
    ctx->r2 = ctx->r3 & 0X80;
    // 0x80225930: bne         $v0, $zero, L_80225948
    if (ctx->r2 != 0) {
        // 0x80225934: nop
    
            goto L_80225948;
    }
    // 0x80225934: nop

L_80225938:
    // 0x80225938: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8022593C: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x80225940: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225944: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225948:
    // 0x80225948: jal         0x8005FB90
    // 0x8022594C: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_5;
    // 0x8022594C: nop

    after_5:
L_80225950:
    // 0x80225950: jal         0x80060018
    // 0x80225954: nop

    func_80060018_3B418(rdram, ctx);
        goto after_6;
    // 0x80225954: nop

    after_6:
    // 0x80225958: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022595C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225960: jr          $ra
    // 0x80225964: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225964: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022DD08_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DD08: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x8022DD0C: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x8022DD10: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022DD14: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x8022DD18: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x8022DD1C: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x8022DD20: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x8022DD24: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x8022DD28: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x8022DD2C: andi        $v1, $v0, 0xF
    ctx->r3 = ctx->r2 & 0XF;
    // 0x8022DD30: bne         $v1, $zero, L_8022DE90
    if (ctx->r3 != 0) {
        // 0x8022DD34: addiu       $s2, $s1, 0x2E8
        ctx->r18 = ADD32(ctx->r17, 0X2E8);
            goto L_8022DE90;
    }
    // 0x8022DD34: addiu       $s2, $s1, 0x2E8
    ctx->r18 = ADD32(ctx->r17, 0X2E8);
    // 0x8022DD38: lbu         $v0, 0x332($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X332);
    // 0x8022DD3C: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x8022DD40: beq         $v0, $zero, L_8022E1CC
    if (ctx->r2 == 0) {
        // 0x8022DD44: addiu       $s4, $s1, 0x14
        ctx->r20 = ADD32(ctx->r17, 0X14);
            goto L_8022E1CC;
    }
    // 0x8022DD44: addiu       $s4, $s1, 0x14
    ctx->r20 = ADD32(ctx->r17, 0X14);
    // 0x8022DD48: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x8022DD4C: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x8022DD50: addiu       $s0, $s0, 0x49C4
    ctx->r16 = ADD32(ctx->r16, 0X49C4);
    // 0x8022DD54: lhu         $a2, 0x56($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X56);
    // 0x8022DD58: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022DD5C: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    // 0x8022DD60: jal         0x8004F820
    // 0x8022DD64: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022DD64: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_0:
    // 0x8022DD68: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x8022DD6C: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x8022DD70: lhu         $a2, 0x56($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X56);
    // 0x8022DD74: lhu         $v0, 0x32C($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X32C);
    // 0x8022DD78: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022DD7C: addiu       $a3, $zero, 0xC
    ctx->r7 = ADD32(0, 0XC);
    // 0x8022DD80: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x8022DD84: jal         0x8004F820
    // 0x8022DD88: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x8022DD88: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_1:
    // 0x8022DD8C: lhu         $v1, 0x56($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X56);
    // 0x8022DD90: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8022DD94: sll         $v0, $s3, 16
    ctx->r2 = S32(ctx->r19 << 16);
    // 0x8022DD98: addu        $v1, $v1, $s3
    ctx->r3 = ADD32(ctx->r3, ctx->r19);
    // 0x8022DD9C: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022DDA0: beq         $v0, $zero, L_8022DDD8
    if (ctx->r2 == 0) {
        // 0x8022DDA4: sh          $v1, 0x56($s1)
        MEM_H(0X56, ctx->r17) = ctx->r3;
            goto L_8022DDD8;
    }
    // 0x8022DDA4: sh          $v1, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r3;
    // 0x8022DDA8: lb          $v0, 0x330($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X330);
    // 0x8022DDAC: bne         $v0, $zero, L_8022DDCC
    if (ctx->r2 != 0) {
        // 0x8022DDB0: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022DDCC;
    }
    // 0x8022DDB0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022DDB4: addiu       $a0, $zero, 0xDB
    ctx->r4 = ADD32(0, 0XDB);
    // 0x8022DDB8: jal         0x8002A33C
    // 0x8022DDBC: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x8022DDBC: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    after_2:
    // 0x8022DDC0: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    // 0x8022DDC4: j           L_8022DDDC
    // 0x8022DDC8: sb          $v0, 0x330($s1)
    MEM_B(0X330, ctx->r17) = ctx->r2;
        goto L_8022DDDC;
    // 0x8022DDC8: sb          $v0, 0x330($s1)
    MEM_B(0X330, ctx->r17) = ctx->r2;
L_8022DDCC:
    // 0x8022DDCC: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022DDD0: j           L_8022DDDC
    // 0x8022DDD4: sb          $v0, 0x330($s1)
    MEM_B(0X330, ctx->r17) = ctx->r2;
        goto L_8022DDDC;
    // 0x8022DDD4: sb          $v0, 0x330($s1)
    MEM_B(0X330, ctx->r17) = ctx->r2;
L_8022DDD8:
    // 0x8022DDD8: sb          $zero, 0x330($s1)
    MEM_B(0X330, ctx->r17) = 0;
L_8022DDDC:
    // 0x8022DDDC: sll         $v0, $s0, 16
    ctx->r2 = S32(ctx->r16 << 16);
    // 0x8022DDE0: beql        $v0, $zero, L_8022DE14
    if (ctx->r2 == 0) {
        // 0x8022DDE4: sb          $zero, 0x49($s2)
        MEM_B(0X49, ctx->r18) = 0;
            goto L_8022DE14;
    }
    goto skip_0;
    // 0x8022DDE4: sb          $zero, 0x49($s2)
    MEM_B(0X49, ctx->r18) = 0;
    skip_0:
    // 0x8022DDE8: lb          $v0, 0x49($s2)
    ctx->r2 = MEM_B(ctx->r18, 0X49);
    // 0x8022DDEC: bne         $v0, $zero, L_8022DE0C
    if (ctx->r2 != 0) {
        // 0x8022DDF0: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022DE0C;
    }
    // 0x8022DDF0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022DDF4: addiu       $a0, $zero, 0xDC
    ctx->r4 = ADD32(0, 0XDC);
    // 0x8022DDF8: jal         0x8002A33C
    // 0x8022DDFC: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_3;
    // 0x8022DDFC: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_3:
    // 0x8022DE00: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022DE04: j           L_8022DE14
    // 0x8022DE08: sb          $v0, 0x49($s2)
    MEM_B(0X49, ctx->r18) = ctx->r2;
        goto L_8022DE14;
    // 0x8022DE08: sb          $v0, 0x49($s2)
    MEM_B(0X49, ctx->r18) = ctx->r2;
L_8022DE0C:
    // 0x8022DE0C: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022DE10: sb          $v0, 0x49($s2)
    MEM_B(0X49, ctx->r18) = ctx->r2;
L_8022DE14:
    // 0x8022DE14: sll         $v1, $s0, 16
    ctx->r3 = S32(ctx->r16 << 16);
    // 0x8022DE18: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8022DE1C: sll         $v0, $s3, 16
    ctx->r2 = S32(ctx->r19 << 16);
    // 0x8022DE20: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022DE24: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022DE28: mflo        $v1
    ctx->r3 = lo;
    // 0x8022DE2C: nop

    // 0x8022DE30: nop

    // 0x8022DE34: blez        $v1, L_8022DE54
    if (SIGNED(ctx->r3) <= 0) {
        // 0x8022DE38: addiu       $a0, $s1, 0x14
        ctx->r4 = ADD32(ctx->r17, 0X14);
            goto L_8022DE54;
    }
    // 0x8022DE38: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x8022DE3C: lhu         $a2, 0x56($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X56);
    // 0x8022DE40: lhu         $v0, 0x44($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X44);
    // 0x8022DE44: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022DE48: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022DE4C: j           L_8022DE68
    // 0x8022DE50: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
        goto L_8022DE68;
    // 0x8022DE50: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
L_8022DE54:
    // 0x8022DE54: lhu         $a2, 0x56($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X56);
    // 0x8022DE58: lhu         $v0, 0x44($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X44);
    // 0x8022DE5C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022DE60: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022DE64: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
L_8022DE68:
    // 0x8022DE68: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x8022DE6C: jal         0x8004F820
    // 0x8022DE70: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004F820_2AC20(rdram, ctx);
        goto after_4;
    // 0x8022DE70: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_4:
    // 0x8022DE74: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8022DE78: lhu         $v0, 0x44($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X44);
    // 0x8022DE7C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022DE80: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x8022DE84: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022DE88: j           L_8022E1C4
    // 0x8022DE8C: sh          $v0, 0x44($s2)
    MEM_H(0X44, ctx->r18) = ctx->r2;
        goto L_8022E1C4;
    // 0x8022DE8C: sh          $v0, 0x44($s2)
    MEM_H(0X44, ctx->r18) = ctx->r2;
L_8022DE90:
    // 0x8022DE90: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022DE94: bne         $v1, $v0, L_8022E08C
    if (ctx->r3 != ctx->r2) {
        // 0x8022DE98: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022E08C;
    }
    // 0x8022DE98: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022DE9C: lbu         $v0, 0x332($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X332);
    // 0x8022DEA0: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x8022DEA4: beq         $v0, $zero, L_8022E1CC
    if (ctx->r2 == 0) {
        // 0x8022DEA8: nop
    
            goto L_8022E1CC;
    }
    // 0x8022DEA8: nop

    // 0x8022DEAC: lbu         $v0, 0x336($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X336);
    // 0x8022DEB0: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x8022DEB4: bne         $v0, $zero, L_8022DEEC
    if (ctx->r2 != 0) {
        // 0x8022DEB8: addu        $s3, $zero, $zero
        ctx->r19 = ADD32(0, 0);
            goto L_8022DEEC;
    }
    // 0x8022DEB8: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x8022DEBC: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x8022DEC0: lhu         $a2, 0x56($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X56);
    // 0x8022DEC4: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022DEC8: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022DECC: addiu       $a3, $zero, 0xC
    ctx->r7 = ADD32(0, 0XC);
    // 0x8022DED0: jal         0x8004F820
    // 0x8022DED4: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004F820_2AC20(rdram, ctx);
        goto after_5;
    // 0x8022DED4: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_5:
    // 0x8022DED8: lhu         $v1, 0x56($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X56);
    // 0x8022DEDC: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x8022DEE0: addu        $v1, $v1, $s3
    ctx->r3 = ADD32(ctx->r3, ctx->r19);
    // 0x8022DEE4: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022DEE8: sh          $v1, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r3;
L_8022DEEC:
    // 0x8022DEEC: addiu       $s4, $s1, 0x14
    ctx->r20 = ADD32(ctx->r17, 0X14);
    // 0x8022DEF0: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x8022DEF4: lhu         $a2, 0x56($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X56);
    // 0x8022DEF8: lhu         $v0, 0x44($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X44);
    // 0x8022DEFC: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022DF00: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022DF04: addiu       $a3, $zero, 0xC
    ctx->r7 = ADD32(0, 0XC);
    // 0x8022DF08: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x8022DF0C: jal         0x8004F820
    // 0x8022DF10: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004F820_2AC20(rdram, ctx);
        goto after_6;
    // 0x8022DF10: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_6:
    // 0x8022DF14: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8022DF18: sll         $v0, $s3, 16
    ctx->r2 = S32(ctx->r19 << 16);
    // 0x8022DF1C: beql        $v0, $zero, L_8022DF50
    if (ctx->r2 == 0) {
        // 0x8022DF20: sb          $zero, 0x48($s2)
        MEM_B(0X48, ctx->r18) = 0;
            goto L_8022DF50;
    }
    goto skip_1;
    // 0x8022DF20: sb          $zero, 0x48($s2)
    MEM_B(0X48, ctx->r18) = 0;
    skip_1:
    // 0x8022DF24: lb          $v0, 0x48($s2)
    ctx->r2 = MEM_B(ctx->r18, 0X48);
    // 0x8022DF28: bne         $v0, $zero, L_8022DF48
    if (ctx->r2 != 0) {
        // 0x8022DF2C: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022DF48;
    }
    // 0x8022DF2C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022DF30: addiu       $a0, $zero, 0xDB
    ctx->r4 = ADD32(0, 0XDB);
    // 0x8022DF34: jal         0x8002A33C
    // 0x8022DF38: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_7;
    // 0x8022DF38: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    after_7:
    // 0x8022DF3C: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    // 0x8022DF40: j           L_8022DF50
    // 0x8022DF44: sb          $v0, 0x48($s2)
    MEM_B(0X48, ctx->r18) = ctx->r2;
        goto L_8022DF50;
    // 0x8022DF44: sb          $v0, 0x48($s2)
    MEM_B(0X48, ctx->r18) = ctx->r2;
L_8022DF48:
    // 0x8022DF48: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022DF4C: sb          $v0, 0x48($s2)
    MEM_B(0X48, ctx->r18) = ctx->r2;
L_8022DF50:
    // 0x8022DF50: sll         $v0, $s0, 16
    ctx->r2 = S32(ctx->r16 << 16);
    // 0x8022DF54: beql        $v0, $zero, L_8022DF88
    if (ctx->r2 == 0) {
        // 0x8022DF58: sb          $zero, 0x49($s2)
        MEM_B(0X49, ctx->r18) = 0;
            goto L_8022DF88;
    }
    goto skip_2;
    // 0x8022DF58: sb          $zero, 0x49($s2)
    MEM_B(0X49, ctx->r18) = 0;
    skip_2:
    // 0x8022DF5C: lb          $v0, 0x49($s2)
    ctx->r2 = MEM_B(ctx->r18, 0X49);
    // 0x8022DF60: bne         $v0, $zero, L_8022DF80
    if (ctx->r2 != 0) {
        // 0x8022DF64: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022DF80;
    }
    // 0x8022DF64: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022DF68: addiu       $a0, $zero, 0xDC
    ctx->r4 = ADD32(0, 0XDC);
    // 0x8022DF6C: jal         0x8002A33C
    // 0x8022DF70: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_8;
    // 0x8022DF70: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_8:
    // 0x8022DF74: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022DF78: j           L_8022DF88
    // 0x8022DF7C: sb          $v0, 0x49($s2)
    MEM_B(0X49, ctx->r18) = ctx->r2;
        goto L_8022DF88;
    // 0x8022DF7C: sb          $v0, 0x49($s2)
    MEM_B(0X49, ctx->r18) = ctx->r2;
L_8022DF80:
    // 0x8022DF80: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022DF84: sb          $v0, 0x49($s2)
    MEM_B(0X49, ctx->r18) = ctx->r2;
L_8022DF88:
    // 0x8022DF88: sll         $v0, $s3, 16
    ctx->r2 = S32(ctx->r19 << 16);
    // 0x8022DF8C: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022DF90: beq         $v1, $zero, L_8022DFF0
    if (ctx->r3 == 0) {
        // 0x8022DF94: sll         $v0, $s0, 16
        ctx->r2 = S32(ctx->r16 << 16);
            goto L_8022DFF0;
    }
    // 0x8022DF94: sll         $v0, $s0, 16
    ctx->r2 = S32(ctx->r16 << 16);
    // 0x8022DF98: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022DF9C: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022DFA0: mflo        $v0
    ctx->r2 = lo;
    // 0x8022DFA4: nop

    // 0x8022DFA8: nop

    // 0x8022DFAC: blez        $v0, L_8022DFCC
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8022DFB0: addiu       $a0, $s1, 0x14
        ctx->r4 = ADD32(ctx->r17, 0X14);
            goto L_8022DFCC;
    }
    // 0x8022DFB0: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x8022DFB4: lhu         $a2, 0x56($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X56);
    // 0x8022DFB8: lhu         $v0, 0x44($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X44);
    // 0x8022DFBC: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022DFC0: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022DFC4: j           L_8022DFE0
    // 0x8022DFC8: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
        goto L_8022DFE0;
    // 0x8022DFC8: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
L_8022DFCC:
    // 0x8022DFCC: lhu         $a2, 0x56($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X56);
    // 0x8022DFD0: lhu         $v0, 0x44($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X44);
    // 0x8022DFD4: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022DFD8: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022DFDC: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
L_8022DFE0:
    // 0x8022DFE0: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x8022DFE4: jal         0x8004F820
    // 0x8022DFE8: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004F820_2AC20(rdram, ctx);
        goto after_9;
    // 0x8022DFE8: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_9:
    // 0x8022DFEC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
L_8022DFF0:
    // 0x8022DFF0: lhu         $v0, 0x44($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X44);
    // 0x8022DFF4: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x8022DFF8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022DFFC: sh          $v0, 0x44($s2)
    MEM_H(0X44, ctx->r18) = ctx->r2;
    // 0x8022E000: addiu       $v0, $zero, 0xA0
    ctx->r2 = ADD32(0, 0XA0);
    // 0x8022E004: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
    // 0x8022E008: lb          $v0, 0x48($s2)
    ctx->r2 = MEM_B(ctx->r18, 0X48);
    // 0x8022E00C: bne         $v0, $zero, L_8022E028
    if (ctx->r2 != 0) {
        // 0x8022E010: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022E028;
    }
    // 0x8022E010: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022E014: addiu       $a0, $zero, 0xDB
    ctx->r4 = ADD32(0, 0XDB);
    // 0x8022E018: jal         0x8002A33C
    // 0x8022E01C: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_10;
    // 0x8022E01C: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_10:
    // 0x8022E020: j           L_8022E02C
    // 0x8022E024: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
        goto L_8022E02C;
    // 0x8022E024: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
L_8022E028:
    // 0x8022E028: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
L_8022E02C:
    // 0x8022E02C: sb          $v0, 0x48($s2)
    MEM_B(0X48, ctx->r18) = ctx->r2;
    // 0x8022E030: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022E034: lh          $a1, 0x44($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X44);
    // 0x8022E038: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022E03C: jal         0x8004DA90
    // 0x8022E040: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_11;
    // 0x8022E040: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_11:
    // 0x8022E044: jal         0x80040F30
    // 0x8022E048: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_12;
    // 0x8022E048: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_12:
    // 0x8022E04C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8022E050: andi        $v0, $s0, 0x3000
    ctx->r2 = ctx->r16 & 0X3000;
    // 0x8022E054: bne         $v0, $zero, L_8022E074
    if (ctx->r2 != 0) {
        // 0x8022E058: andi        $v0, $s0, 0xF00
        ctx->r2 = ctx->r16 & 0XF00;
            goto L_8022E074;
    }
    // 0x8022E058: andi        $v0, $s0, 0xF00
    ctx->r2 = ctx->r16 & 0XF00;
    // 0x8022E05C: jal         0x8003E934
    // 0x8022E060: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_13;
    // 0x8022E060: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_13:
    // 0x8022E064: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x8022E068: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022E06C: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
    // 0x8022E070: andi        $v0, $s0, 0xF00
    ctx->r2 = ctx->r16 & 0XF00;
L_8022E074:
    // 0x8022E074: beq         $v0, $zero, L_8022E1C0
    if (ctx->r2 == 0) {
        // 0x8022E078: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8022E1C0;
    }
    // 0x8022E078: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022E07C: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x8022E080: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x8022E084: j           L_8022E1CC
    // 0x8022E088: sh          $v0, 0x46($s2)
    MEM_H(0X46, ctx->r18) = ctx->r2;
        goto L_8022E1CC;
    // 0x8022E088: sh          $v0, 0x46($s2)
    MEM_H(0X46, ctx->r18) = ctx->r2;
L_8022E08C:
    // 0x8022E08C: bne         $v1, $v0, L_8022E1CC
    if (ctx->r3 != ctx->r2) {
        // 0x8022E090: addiu       $s3, $s1, 0x14
        ctx->r19 = ADD32(ctx->r17, 0X14);
            goto L_8022E1CC;
    }
    // 0x8022E090: addiu       $s3, $s1, 0x14
    ctx->r19 = ADD32(ctx->r17, 0X14);
    // 0x8022E094: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x8022E098: lbu         $v1, 0xE($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XE);
    // 0x8022E09C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022E0A0: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022E0A4: addiu       $a3, $zero, 0xC
    ctx->r7 = ADD32(0, 0XC);
    // 0x8022E0A8: lhu         $v0, 0x56($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X56);
    // 0x8022E0AC: lhu         $a2, 0x32C($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X32C);
    // 0x8022E0B0: sll         $v1, $v1, 24
    ctx->r3 = S32(ctx->r3 << 24);
    // 0x8022E0B4: sra         $v1, $v1, 24
    ctx->r3 = S32(SIGNED(ctx->r3) >> 24);
    // 0x8022E0B8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022E0BC: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022E0C0: addu        $a2, $v0, $a2
    ctx->r6 = ADD32(ctx->r2, ctx->r6);
    // 0x8022E0C4: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    // 0x8022E0C8: jal         0x8004F820
    // 0x8022E0CC: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
    func_8004F820_2AC20(rdram, ctx);
        goto after_14;
    // 0x8022E0CC: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
    after_14:
    // 0x8022E0D0: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8022E0D4: sll         $v0, $s0, 16
    ctx->r2 = S32(ctx->r16 << 16);
    // 0x8022E0D8: beql        $v0, $zero, L_8022E10C
    if (ctx->r2 == 0) {
        // 0x8022E0DC: sb          $zero, 0x331($s1)
        MEM_B(0X331, ctx->r17) = 0;
            goto L_8022E10C;
    }
    goto skip_3;
    // 0x8022E0DC: sb          $zero, 0x331($s1)
    MEM_B(0X331, ctx->r17) = 0;
    skip_3:
    // 0x8022E0E0: lb          $v0, 0x331($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X331);
    // 0x8022E0E4: bne         $v0, $zero, L_8022E104
    if (ctx->r2 != 0) {
        // 0x8022E0E8: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022E104;
    }
    // 0x8022E0E8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022E0EC: addiu       $a0, $zero, 0xDC
    ctx->r4 = ADD32(0, 0XDC);
    // 0x8022E0F0: jal         0x8002A33C
    // 0x8022E0F4: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_15;
    // 0x8022E0F4: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_15:
    // 0x8022E0F8: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022E0FC: j           L_8022E10C
    // 0x8022E100: sb          $v0, 0x331($s1)
    MEM_B(0X331, ctx->r17) = ctx->r2;
        goto L_8022E10C;
    // 0x8022E100: sb          $v0, 0x331($s1)
    MEM_B(0X331, ctx->r17) = ctx->r2;
L_8022E104:
    // 0x8022E104: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022E108: sb          $v0, 0x331($s1)
    MEM_B(0X331, ctx->r17) = ctx->r2;
L_8022E10C:
    // 0x8022E10C: lb          $v1, 0xE($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XE);
    // 0x8022E110: sll         $v0, $s0, 16
    ctx->r2 = S32(ctx->r16 << 16);
    // 0x8022E114: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022E118: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022E11C: mflo        $v0
    ctx->r2 = lo;
    // 0x8022E120: nop

    // 0x8022E124: nop

    // 0x8022E128: blez        $v0, L_8022E148
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8022E12C: addiu       $a0, $s1, 0x14
        ctx->r4 = ADD32(ctx->r17, 0X14);
            goto L_8022E148;
    }
    // 0x8022E12C: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x8022E130: lhu         $a2, 0x56($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X56);
    // 0x8022E134: lhu         $v0, 0x44($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X44);
    // 0x8022E138: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022E13C: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022E140: j           L_8022E15C
    // 0x8022E144: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
        goto L_8022E15C;
    // 0x8022E144: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
L_8022E148:
    // 0x8022E148: lhu         $a2, 0x56($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X56);
    // 0x8022E14C: lhu         $v0, 0x44($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X44);
    // 0x8022E150: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022E154: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022E158: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
L_8022E15C:
    // 0x8022E15C: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x8022E160: jal         0x8004F820
    // 0x8022E164: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004F820_2AC20(rdram, ctx);
        goto after_16;
    // 0x8022E164: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_16:
    // 0x8022E168: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8022E16C: lhu         $v0, 0x44($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X44);
    // 0x8022E170: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x8022E174: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022E178: sh          $v0, 0x44($s2)
    MEM_H(0X44, ctx->r18) = ctx->r2;
    // 0x8022E17C: addiu       $v0, $zero, 0xA0
    ctx->r2 = ADD32(0, 0XA0);
    // 0x8022E180: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
    // 0x8022E184: lb          $v0, 0x48($s2)
    ctx->r2 = MEM_B(ctx->r18, 0X48);
    // 0x8022E188: bne         $v0, $zero, L_8022E1A4
    if (ctx->r2 != 0) {
        // 0x8022E18C: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022E1A4;
    }
    // 0x8022E18C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022E190: addiu       $a0, $zero, 0xDB
    ctx->r4 = ADD32(0, 0XDB);
    // 0x8022E194: jal         0x8002A33C
    // 0x8022E198: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_17;
    // 0x8022E198: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_17:
    // 0x8022E19C: j           L_8022E1A8
    // 0x8022E1A0: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
        goto L_8022E1A8;
    // 0x8022E1A0: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
L_8022E1A4:
    // 0x8022E1A4: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
L_8022E1A8:
    // 0x8022E1A8: sb          $v0, 0x48($s2)
    MEM_B(0X48, ctx->r18) = ctx->r2;
    // 0x8022E1AC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022E1B0: lh          $a1, 0x44($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X44);
    // 0x8022E1B4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022E1B8: jal         0x8004DA90
    // 0x8022E1BC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_18;
    // 0x8022E1BC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_18:
L_8022E1C0:
    // 0x8022E1C0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_8022E1C4:
    // 0x8022E1C4: jal         0x8022E95C
    // 0x8022E1C8: nop

    func_8022E95C_ovl13(rdram, ctx);
        goto after_19;
    // 0x8022E1C8: nop

    after_19:
L_8022E1CC:
    // 0x8022E1CC: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x8022E1D0: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x8022E1D4: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x8022E1D8: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x8022E1DC: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x8022E1E0: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x8022E1E4: jr          $ra
    // 0x8022E1E8: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    TRACE_RETURN()
    return;
    // 0x8022E1E8: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_80229A2C_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229A2C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229A30: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229A34: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229A38: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80229A3C: lhu         $v0, 0x350($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X350);
    // 0x80229A40: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80229A44: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x80229A48: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229A4C: bne         $v0, $zero, L_80229A74
    if (ctx->r2 != 0) {
        // 0x80229A50: nop
    
            goto L_80229A74;
    }
    // 0x80229A50: nop

    // 0x80229A54: jal         0x8022B6B0
    // 0x80229A58: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_8022B6B0_ovl13(rdram, ctx);
        goto after_0;
    // 0x80229A58: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_0:
    // 0x80229A5C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80229A60: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80229A64: addiu       $v0, $zero, 0x46
    ctx->r2 = ADD32(0, 0X46);
    // 0x80229A68: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x80229A6C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80229A70: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_80229A74:
    // 0x80229A74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80229A78: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229A7C: jr          $ra
    // 0x80229A80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80229A80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022A294_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A294: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022A298: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A29C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A2A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022A2A4: jal         0x8022B798
    // 0x8022A2A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8022B798_ovl13(rdram, ctx);
        goto after_0;
    // 0x8022A2A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x8022A2AC: lbu         $a0, 0xA($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XA);
    // 0x8022A2B0: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022A2B4: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x8022A2B8: lbu         $v1, 0xF($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XF);
    // 0x8022A2BC: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x8022A2C0: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x8022A2C4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8022A2C8: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8022A2CC: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x8022A2D0: sh          $v0, 0x35C($s0)
    MEM_H(0X35C, ctx->r16) = ctx->r2;
    // 0x8022A2D4: sh          $v1, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = ctx->r3;
    // 0x8022A2D8: sb          $a0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r4;
    // 0x8022A2DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022A2E0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A2E4: jr          $ra
    // 0x8022A2E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022A2E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80237680_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237680: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80237684: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x80237688: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8023768C: lbu         $v0, 0x9($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0X9);
    // 0x80237690: bne         $v0, $zero, L_802376A8
    if (ctx->r2 != 0) {
        // 0x80237694: lui         $a2, 0xFFF5
        ctx->r6 = S32(0XFFF5 << 16);
            goto L_802376A8;
    }
    // 0x80237694: lui         $a2, 0xFFF5
    ctx->r6 = S32(0XFFF5 << 16);
    // 0x80237698: jal         0x8004F5C4
    // 0x8023769C: nop

    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x8023769C: nop

    after_0:
    // 0x802376A0: j           L_802376DC
    // 0x802376A4: nop

        goto L_802376DC;
    // 0x802376A4: nop

L_802376A8:
    // 0x802376A8: lbu         $a0, 0xC($a3)
    ctx->r4 = MEM_BU(ctx->r7, 0XC);
    // 0x802376AC: ori         $a2, $a2, 0xF5F6
    ctx->r6 = ctx->r6 | 0XF5F6;
    // 0x802376B0: lbu         $a1, 0x9($a3)
    ctx->r5 = MEM_BU(ctx->r7, 0X9);
    // 0x802376B4: lw          $v0, 0x18($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X18);
    // 0x802376B8: lhu         $v1, 0x24($a3)
    ctx->r3 = MEM_HU(ctx->r7, 0X24);
    // 0x802376BC: sll         $a0, $a0, 24
    ctx->r4 = S32(ctx->r4 << 24);
    // 0x802376C0: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
    // 0x802376C4: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x802376C8: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x802376CC: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x802376D0: sw          $v0, 0x18($a3)
    MEM_W(0X18, ctx->r7) = ctx->r2;
    // 0x802376D4: sh          $v1, 0x24($a3)
    MEM_H(0X24, ctx->r7) = ctx->r3;
    // 0x802376D8: sb          $a1, 0x9($a3)
    MEM_B(0X9, ctx->r7) = ctx->r5;
L_802376DC:
    // 0x802376DC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802376E0: jr          $ra
    // 0x802376E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802376E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802376E8: nop

    // 0x802376EC: nop

;}
RECOMP_FUNC void func_8022B64C_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B64C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022B650: lw          $a1, 0x4B34($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X4B34);
    // 0x8022B654: bne         $a1, $a0, L_8022B6A8
    if (ctx->r5 != ctx->r4) {
        // 0x8022B658: addiu       $a2, $a0, 0x348
        ctx->r6 = ADD32(ctx->r4, 0X348);
            goto L_8022B6A8;
    }
    // 0x8022B658: addiu       $a2, $a0, 0x348
    ctx->r6 = ADD32(ctx->r4, 0X348);
    // 0x8022B65C: lbu         $v1, 0x2($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X2);
    // 0x8022B660: addiu       $v0, $zero, 0x34
    ctx->r2 = ADD32(0, 0X34);
    // 0x8022B664: bne         $v1, $v0, L_8022B674
    if (ctx->r3 != ctx->r2) {
        // 0x8022B668: addiu       $v0, $zero, 0x11
        ctx->r2 = ADD32(0, 0X11);
            goto L_8022B674;
    }
    // 0x8022B668: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x8022B66C: j           L_8022B690
    // 0x8022B670: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
        goto L_8022B690;
    // 0x8022B670: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_8022B674:
    // 0x8022B674: bne         $v1, $v0, L_8022B684
    if (ctx->r3 != ctx->r2) {
        // 0x8022B678: addiu       $v0, $zero, 0x49
        ctx->r2 = ADD32(0, 0X49);
            goto L_8022B684;
    }
    // 0x8022B678: addiu       $v0, $zero, 0x49
    ctx->r2 = ADD32(0, 0X49);
    // 0x8022B67C: j           L_8022B690
    // 0x8022B680: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
        goto L_8022B690;
    // 0x8022B680: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
L_8022B684:
    // 0x8022B684: bne         $v1, $v0, L_8022B690
    if (ctx->r3 != ctx->r2) {
        // 0x8022B688: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8022B690;
    }
    // 0x8022B688: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022B68C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_8022B690:
    // 0x8022B690: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x8022B694: lhu         $v0, 0x0($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X0);
    // 0x8022B698: sb          $zero, 0x3($a2)
    MEM_B(0X3, ctx->r6) = 0;
    // 0x8022B69C: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
    // 0x8022B6A0: andi        $v0, $v0, 0xFFFD
    ctx->r2 = ctx->r2 & 0XFFFD;
    // 0x8022B6A4: sh          $v0, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r2;
L_8022B6A8:
    // 0x8022B6A8: jr          $ra
    // 0x8022B6AC: nop

    TRACE_RETURN()
    return;
    // 0x8022B6AC: nop

;}
RECOMP_FUNC void func_8022EE64_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022EE64: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022EE68: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022EE6C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022EE70: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022EE74: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022EE78: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022EE7C: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x8022EE80: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x8022EE84: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022EE88: jal         0x8004D5D4
    // 0x8022EE8C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8022EE8C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022EE90: sw          $zero, 0x328($s0)
    MEM_W(0X328, ctx->r16) = 0;
    // 0x8022EE94: lhu         $a0, 0x328($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X328);
    // 0x8022EE98: lw          $a1, 0x80($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X80);
    // 0x8022EE9C: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x8022EEA0: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022EEA4: sw          $zero, 0x310($s0)
    MEM_W(0X310, ctx->r16) = 0;
    // 0x8022EEA8: sw          $zero, 0x314($s0)
    MEM_W(0X314, ctx->r16) = 0;
    // 0x8022EEAC: sw          $zero, 0x318($s0)
    MEM_W(0X318, ctx->r16) = 0;
    // 0x8022EEB0: sw          $zero, 0x31C($s0)
    MEM_W(0X31C, ctx->r16) = 0;
    // 0x8022EEB4: sw          $zero, 0x320($s0)
    MEM_W(0X320, ctx->r16) = 0;
    // 0x8022EEB8: sw          $zero, 0x324($s0)
    MEM_W(0X324, ctx->r16) = 0;
    // 0x8022EEBC: sw          $zero, 0x32C($s0)
    MEM_W(0X32C, ctx->r16) = 0;
    // 0x8022EEC0: sb          $v0, 0x36A($s0)
    MEM_B(0X36A, ctx->r16) = ctx->r2;
    // 0x8022EEC4: sb          $zero, 0x36C($s0)
    MEM_B(0X36C, ctx->r16) = 0;
    // 0x8022EEC8: sb          $zero, 0x36B($s0)
    MEM_B(0X36B, ctx->r16) = 0;
    // 0x8022EECC: sb          $zero, 0x370($s0)
    MEM_B(0X370, ctx->r16) = 0;
    // 0x8022EED0: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x8022EED4: lw          $a2, 0x298($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X298);
    // 0x8022EED8: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022EEDC: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8022EEE0: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022EEE4: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022EEE8: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x8022EEEC: sh          $v0, 0x366($s0)
    MEM_H(0X366, ctx->r16) = ctx->r2;
    // 0x8022EEF0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022EEF4: sh          $v0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r2;
    // 0x8022EEF8: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8022EEFC: sh          $v0, 0x34E($s0)
    MEM_H(0X34E, ctx->r16) = ctx->r2;
    // 0x8022EF00: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022EF04: sw          $zero, 0x330($s0)
    MEM_W(0X330, ctx->r16) = 0;
    // 0x8022EF08: sw          $zero, 0x334($s0)
    MEM_W(0X334, ctx->r16) = 0;
    // 0x8022EF0C: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x8022EF10: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8022EF14: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x8022EF18: sh          $a0, 0x368($s0)
    MEM_H(0X368, ctx->r16) = ctx->r4;
    // 0x8022EF1C: sw          $a1, 0x348($s0)
    MEM_W(0X348, ctx->r16) = ctx->r5;
    // 0x8022EF20: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8022EF24: addiu       $a0, $s0, 0x338
    ctx->r4 = ADD32(ctx->r16, 0X338);
    // 0x8022EF28: lbu         $v0, 0xA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XA);
    // 0x8022EF2C: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x8022EF30: addiu       $a2, $zero, -0x60
    ctx->r6 = ADD32(0, -0X60);
    // 0x8022EF34: jal         0x800540BC
    // 0x8022EF38: sh          $v0, 0x364($s0)
    MEM_H(0X364, ctx->r16) = ctx->r2;
    func_800540BC_2F4BC(rdram, ctx);
        goto after_1;
    // 0x8022EF38: sh          $v0, 0x364($s0)
    MEM_H(0X364, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022EF3C: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x8022EF40: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x8022EF44: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x8022EF48: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022EF4C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022EF50: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8022EF54: lbu         $v1, 0x8($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X8);
    // 0x8022EF58: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022EF5C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022EF60: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022EF64: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022EF68: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8022EF6C: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022EF70: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x8022EF74: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x8022EF78: sh          $v1, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r3;
    // 0x8022EF7C: sh          $v1, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r3;
    // 0x8022EF80: sh          $v1, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r3;
    // 0x8022EF84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022EF88: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022EF8C: jr          $ra
    // 0x8022EF90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022EF90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802324F0_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802324F0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802324F4: lb          $v0, 0x4A26($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X4A26);
    // 0x802324F8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802324FC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80232500: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80232504: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80232508: addiu       $s1, $s0, 0x440
    ctx->r17 = ADD32(ctx->r16, 0X440);
    // 0x8023250C: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x80232510: addiu       $a3, $a3, 0x49B0
    ctx->r7 = ADD32(ctx->r7, 0X49B0);
    // 0x80232514: beq         $v0, $zero, L_8023252C
    if (ctx->r2 == 0) {
        // 0x80232518: sw          $ra, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r31;
            goto L_8023252C;
    }
    // 0x80232518: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8023251C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80232520: lw          $v0, 0x4A70($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4A70);
    // 0x80232524: beq         $v0, $s0, L_8023255C
    if (ctx->r2 == ctx->r16) {
        // 0x80232528: nop
    
            goto L_8023255C;
    }
    // 0x80232528: nop

L_8023252C:
    // 0x8023252C: lh          $a1, 0x484($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X484);
    // 0x80232530: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80232534: lh          $v1, 0x4A06($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X4A06);
    // 0x80232538: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x8023253C: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80232540: addiu       $a2, $zero, 0x400
    ctx->r6 = ADD32(0, 0X400);
    // 0x80232544: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x80232548: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8023254C: jal         0x8004FAEC
    // 0x80232550: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_8004FAEC_2AEEC(rdram, ctx);
        goto after_0;
    // 0x80232550: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_0:
    // 0x80232554: beq         $v0, $zero, L_8023256C
    if (ctx->r2 == 0) {
        // 0x80232558: nop
    
            goto L_8023256C;
    }
    // 0x80232558: nop

L_8023255C:
    // 0x8023255C: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80232560: andi        $v0, $v0, 0xFF7F
    ctx->r2 = ctx->r2 & 0XFF7F;
    // 0x80232564: j           L_80232588
    // 0x80232568: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
        goto L_80232588;
    // 0x80232568: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8023256C:
    // 0x8023256C: lhu         $v0, 0x440($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X440);
    // 0x80232570: lhu         $v1, 0x482($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X482);
    // 0x80232574: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
    // 0x80232578: addiu       $v1, $v1, 0x800
    ctx->r3 = ADD32(ctx->r3, 0X800);
    // 0x8023257C: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80232580: sh          $v0, 0x440($s0)
    MEM_H(0X440, ctx->r16) = ctx->r2;
    // 0x80232584: sh          $v1, 0x482($s0)
    MEM_H(0X482, ctx->r16) = ctx->r3;
L_80232588:
    // 0x80232588: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023258C: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80232590: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80232594: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80232598: jr          $ra
    // 0x8023259C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8023259C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80235700_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235700: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80235704: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80235708: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023570C: lui         $a3, 0x3D48
    ctx->r7 = S32(0X3D48 << 16);
    // 0x80235710: ori         $a3, $a3, 0xE
    ctx->r7 = ctx->r7 | 0XE;
    // 0x80235714: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80235718: lhu         $a0, 0x1C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X1C);
    // 0x8023571C: lhu         $a1, 0x20($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X20);
    // 0x80235720: lhu         $a2, 0x24($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X24);
    // 0x80235724: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80235728: lui         $v1, 0x2C80
    ctx->r3 = S32(0X2C80 << 16);
    // 0x8023572C: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x80235730: sw          $a3, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->r7;
    // 0x80235734: sw          $v1, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->r3;
    // 0x80235738: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x8023573C: sh          $a0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r4;
    // 0x80235740: sh          $a0, 0x90($s0)
    MEM_H(0X90, ctx->r16) = ctx->r4;
    // 0x80235744: sh          $a1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r5;
    // 0x80235748: sh          $a1, 0x92($s0)
    MEM_H(0X92, ctx->r16) = ctx->r5;
    // 0x8023574C: sh          $a2, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r6;
    // 0x80235750: beq         $v0, $zero, L_8023578C
    if (ctx->r2 == 0) {
        // 0x80235754: sh          $a2, 0x94($s0)
        MEM_H(0X94, ctx->r16) = ctx->r6;
            goto L_8023578C;
    }
    // 0x80235754: sh          $a2, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r6;
    // 0x80235758: lb          $v0, 0xF($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XF);
    // 0x8023575C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80235760: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80235764: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80235768: lhu         $v1, -0x6608($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X6608);
    // 0x8023576C: lb          $v0, 0xF($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XF);
    // 0x80235770: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80235774: sb          $v1, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r3;
    // 0x80235778: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023577C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80235780: lhu         $v0, -0x6606($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X6606);
    // 0x80235784: j           L_802357BC
    // 0x80235788: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
        goto L_802357BC;
    // 0x80235788: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
L_8023578C:
    // 0x8023578C: lb          $v0, 0xF($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XF);
    // 0x80235790: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80235794: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80235798: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023579C: lhu         $v1, -0x6620($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X6620);
    // 0x802357A0: lb          $v0, 0xF($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XF);
    // 0x802357A4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802357A8: sb          $v1, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r3;
    // 0x802357AC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802357B0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802357B4: lhu         $v0, -0x661E($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X661E);
    // 0x802357B8: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
L_802357BC:
    // 0x802357BC: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x802357C0: jal         0x8004F144
    // 0x802357C4: sh          $v0, 0x98($s0)
    MEM_H(0X98, ctx->r16) = ctx->r2;
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x802357C4: sh          $v0, 0x98($s0)
    MEM_H(0X98, ctx->r16) = ctx->r2;
    after_0:
    // 0x802357C8: beq         $v0, $zero, L_802357D8
    if (ctx->r2 == 0) {
        // 0x802357CC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802357D8;
    }
    // 0x802357CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802357D0: jal         0x80235E20
    // 0x802357D4: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_80235E20_ovl13(rdram, ctx);
        goto after_1;
    // 0x802357D4: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_1:
L_802357D8:
    // 0x802357D8: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    // 0x802357DC: jal         0x8004F4F8
    // 0x802357E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_2;
    // 0x802357E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x802357E4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802357E8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802357EC: jr          $ra
    // 0x802357F0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x802357F0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022AC88_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AC88: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022AC8C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022AC90: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022AC94: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022AC98: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022AC9C: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8022ACA0: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022ACA4: addiu       $a1, $a1, 0x49B0
    ctx->r5 = ADD32(ctx->r5, 0X49B0);
    // 0x8022ACA8: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x8022ACAC: bne         $v0, $zero, L_8022AD08
    if (ctx->r2 != 0) {
        // 0x8022ACB0: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_8022AD08;
    }
    // 0x8022ACB0: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x8022ACB4: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022ACB8: lh          $a3, 0x34E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X34E);
    // 0x8022ACBC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022ACC0: jal         0x8004F820
    // 0x8022ACC4: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022ACC4: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_0:
    // 0x8022ACC8: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022ACCC: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022ACD0: lw          $a0, 0x3FF0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3FF0);
    // 0x8022ACD4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022ACD8: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022ACDC: lui         $v0, 0x20
    ctx->r2 = S32(0X20 << 16);
    // 0x8022ACE0: and         $a0, $a0, $v0
    ctx->r4 = ctx->r4 & ctx->r2;
    // 0x8022ACE4: beq         $a0, $zero, L_8022AD08
    if (ctx->r4 == 0) {
        // 0x8022ACE8: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_8022AD08;
    }
    // 0x8022ACE8: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022ACEC: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022ACF0: jal         0x8022B6B0
    // 0x8022ACF4: nop

    func_8022B6B0_ovl13(rdram, ctx);
        goto after_1;
    // 0x8022ACF4: nop

    after_1:
    // 0x8022ACF8: lbu         $v1, 0x34B($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34B);
    // 0x8022ACFC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022AD00: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022AD04: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
L_8022AD08:
    // 0x8022AD08: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8022AD0C: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x8022AD10: bne         $v0, $zero, L_8022AD34
    if (ctx->r2 != 0) {
        // 0x8022AD14: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_8022AD34;
    }
    // 0x8022AD14: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x8022AD18: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022AD1C: sb          $v1, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r3;
    // 0x8022AD20: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x8022AD24: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x8022AD28: jal         0x8022B748
    // 0x8022AD2C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_8022B748_ovl13(rdram, ctx);
        goto after_2;
    // 0x8022AD2C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_2:
    // 0x8022AD30: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8022AD34:
    // 0x8022AD34: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022AD38: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022AD3C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022AD40: jr          $ra
    // 0x8022AD44: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022AD44: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80235B78_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235B78: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80235B7C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80235B80: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80235B84: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80235B88: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x80235B8C: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80235B90: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80235B94: jal         0x80040F30
    // 0x80235B98: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_80040F30_1C330(rdram, ctx);
        goto after_0;
    // 0x80235B98: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x80235B9C: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x80235BA0: beq         $s2, $zero, L_80235D10
    if (ctx->r18 == 0) {
        // 0x80235BA4: andi        $v0, $s2, 0x1000
        ctx->r2 = ctx->r18 & 0X1000;
            goto L_80235D10;
    }
    // 0x80235BA4: andi        $v0, $s2, 0x1000
    ctx->r2 = ctx->r18 & 0X1000;
    // 0x80235BA8: beq         $v0, $zero, L_80235CA8
    if (ctx->r2 == 0) {
        // 0x80235BAC: addiu       $v0, $zero, 0xB
        ctx->r2 = ADD32(0, 0XB);
            goto L_80235CA8;
    }
    // 0x80235BAC: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x80235BB0: lh          $v0, 0x46($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X46);
    // 0x80235BB4: bltzl       $v0, L_80235BD0
    if (SIGNED(ctx->r2) < 0) {
        // 0x80235BB8: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_80235BD0;
    }
    goto skip_0;
    // 0x80235BB8: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_0:
    // 0x80235BBC: slti        $v0, $v0, 0xA01
    ctx->r2 = SIGNED(ctx->r2) < 0XA01 ? 1 : 0;
    // 0x80235BC0: bnel        $v0, $zero, L_80235BE0
    if (ctx->r2 != 0) {
        // 0x80235BC4: addiu       $s3, $zero, 0x1
        ctx->r19 = ADD32(0, 0X1);
            goto L_80235BE0;
    }
    goto skip_1;
    // 0x80235BC4: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    skip_1:
    // 0x80235BC8: j           L_80235BFC
    // 0x80235BCC: nop

        goto L_80235BFC;
    // 0x80235BCC: nop

L_80235BD0:
    // 0x80235BD0: slti        $v0, $v0, 0xA01
    ctx->r2 = SIGNED(ctx->r2) < 0XA01 ? 1 : 0;
    // 0x80235BD4: beq         $v0, $zero, L_80235BFC
    if (ctx->r2 == 0) {
        // 0x80235BD8: nop
    
            goto L_80235BFC;
    }
    // 0x80235BD8: nop

    // 0x80235BDC: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
L_80235BE0:
    // 0x80235BE0: sh          $zero, 0x44($s1)
    MEM_H(0X44, ctx->r17) = 0;
    // 0x80235BE4: sh          $zero, 0x46($s1)
    MEM_H(0X46, ctx->r17) = 0;
    // 0x80235BE8: sh          $zero, 0x48($s1)
    MEM_H(0X48, ctx->r17) = 0;
    // 0x80235BEC: sh          $zero, 0x4C($s1)
    MEM_H(0X4C, ctx->r17) = 0;
    // 0x80235BF0: sh          $zero, 0x4E($s1)
    MEM_H(0X4E, ctx->r17) = 0;
    // 0x80235BF4: j           L_80235C3C
    // 0x80235BF8: sh          $zero, 0x50($s1)
    MEM_H(0X50, ctx->r17) = 0;
        goto L_80235C3C;
    // 0x80235BF8: sh          $zero, 0x50($s1)
    MEM_H(0X50, ctx->r17) = 0;
L_80235BFC:
    // 0x80235BFC: lh          $v1, 0x46($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X46);
    // 0x80235C00: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80235C04: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80235C08: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x80235C0C: bltzl       $v0, L_80235C14
    if (SIGNED(ctx->r2) < 0) {
        // 0x80235C10: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_80235C14;
    }
    goto skip_2;
    // 0x80235C10: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_2:
L_80235C14:
    // 0x80235C14: srl         $v1, $v0, 8
    ctx->r3 = S32(U32(ctx->r2) >> 8);
    // 0x80235C18: lhu         $v0, 0x44($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X44);
    // 0x80235C1C: sh          $v1, 0x46($s1)
    MEM_H(0X46, ctx->r17) = ctx->r3;
    // 0x80235C20: lhu         $v1, 0x48($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X48);
    // 0x80235C24: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80235C28: sra         $v0, $v0, 17
    ctx->r2 = S32(SIGNED(ctx->r2) >> 17);
    // 0x80235C2C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80235C30: sra         $v1, $v1, 17
    ctx->r3 = S32(SIGNED(ctx->r3) >> 17);
    // 0x80235C34: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
    // 0x80235C38: sh          $v1, 0x48($s1)
    MEM_H(0X48, ctx->r17) = ctx->r3;
L_80235C3C:
    // 0x80235C3C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80235C40: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x80235C44: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x80235C48: bne         $v1, $v0, L_80235CC8
    if (ctx->r3 != ctx->r2) {
        // 0x80235C4C: addiu       $a0, $zero, 0xB3
        ctx->r4 = ADD32(0, 0XB3);
            goto L_80235CC8;
    }
    // 0x80235C4C: addiu       $a0, $zero, 0xB3
    ctx->r4 = ADD32(0, 0XB3);
    // 0x80235C50: lh          $v1, 0x16($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X16);
    // 0x80235C54: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80235C58: bne         $v1, $v0, L_80235CC8
    if (ctx->r3 != ctx->r2) {
        // 0x80235C5C: nop
    
            goto L_80235CC8;
    }
    // 0x80235C5C: nop

    // 0x80235C60: jal         0x8004F568
    // 0x80235C64: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F568_2A968(rdram, ctx);
        goto after_1;
    // 0x80235C64: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x80235C68: addiu       $a0, $zero, 0x102
    ctx->r4 = ADD32(0, 0X102);
    // 0x80235C6C: jal         0x8002A33C
    // 0x80235C70: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x80235C70: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_2:
    // 0x80235C74: jal         0x8004F144
    // 0x80235C78: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_3;
    // 0x80235C78: nop

    after_3:
    // 0x80235C7C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80235C80: beq         $s0, $zero, L_80235C94
    if (ctx->r16 == 0) {
        // 0x80235C84: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80235C94;
    }
    // 0x80235C84: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80235C88: addiu       $a1, $s1, 0x88
    ctx->r5 = ADD32(ctx->r17, 0X88);
    // 0x80235C8C: jal         0x8009A3B4
    // 0x80235C90: addiu       $a2, $zero, 0x34
    ctx->r6 = ADD32(0, 0X34);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x80235C90: addiu       $a2, $zero, 0x34
    ctx->r6 = ADD32(0, 0X34);
    after_4:
L_80235C94:
    // 0x80235C94: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80235C98: jal         0x80235E6C
    // 0x80235C9C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80235E6C_ovl13(rdram, ctx);
        goto after_5;
    // 0x80235C9C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80235CA0: j           L_80235D08
    // 0x80235CA4: addiu       $a0, $s1, 0x44
    ctx->r4 = ADD32(ctx->r17, 0X44);
        goto L_80235D08;
    // 0x80235CA4: addiu       $a0, $s1, 0x44
    ctx->r4 = ADD32(ctx->r17, 0X44);
L_80235CA8:
    // 0x80235CA8: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80235CAC: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x80235CB0: bne         $v1, $v0, L_80235CC8
    if (ctx->r3 != ctx->r2) {
        // 0x80235CB4: addiu       $a0, $zero, 0xB3
        ctx->r4 = ADD32(0, 0XB3);
            goto L_80235CC8;
    }
    // 0x80235CB4: addiu       $a0, $zero, 0xB3
    ctx->r4 = ADD32(0, 0XB3);
    // 0x80235CB8: lh          $v1, 0x16($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X16);
    // 0x80235CBC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80235CC0: beq         $v1, $v0, L_80235CD0
    if (ctx->r3 == ctx->r2) {
        // 0x80235CC4: nop
    
            goto L_80235CD0;
    }
    // 0x80235CC4: nop

L_80235CC8:
    // 0x80235CC8: jal         0x8002A33C
    // 0x80235CCC: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_6;
    // 0x80235CCC: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_6:
L_80235CD0:
    // 0x80235CD0: jal         0x8004F144
    // 0x80235CD4: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_7;
    // 0x80235CD4: nop

    after_7:
    // 0x80235CD8: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80235CDC: beq         $s0, $zero, L_80235D04
    if (ctx->r16 == 0) {
        // 0x80235CE0: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80235D04;
    }
    // 0x80235CE0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80235CE4: addiu       $a1, $s1, 0x88
    ctx->r5 = ADD32(ctx->r17, 0X88);
    // 0x80235CE8: addiu       $a2, $zero, 0x34
    ctx->r6 = ADD32(0, 0X34);
    // 0x80235CEC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80235CF0: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80235CF4: addiu       $v0, $zero, 0x83
    ctx->r2 = ADD32(0, 0X83);
    // 0x80235CF8: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x80235CFC: jal         0x8009A3B4
    // 0x80235D00: sb          $zero, 0x3($s0)
    MEM_B(0X3, ctx->r16) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x80235D00: sb          $zero, 0x3($s0)
    MEM_B(0X3, ctx->r16) = 0;
    after_8:
L_80235D04:
    // 0x80235D04: addiu       $a0, $s1, 0x44
    ctx->r4 = ADD32(ctx->r17, 0X44);
L_80235D08:
    // 0x80235D08: jal         0x80040834
    // 0x80235D0C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_80040834_1BC34(rdram, ctx);
        goto after_9;
    // 0x80235D0C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_9:
L_80235D10:
    // 0x80235D10: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
    // 0x80235D14: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80235D18: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80235D1C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80235D20: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80235D24: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80235D28: jr          $ra
    // 0x80235D2C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80235D2C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022AE84_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AE84: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022AE88: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022AE8C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022AE90: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8022AE94: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022AE98: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022AE9C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022AEA0: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022AEA4: lbu         $v1, 0xAC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022AEA8: addiu       $a1, $zero, 0xFA
    ctx->r5 = ADD32(0, 0XFA);
    // 0x8022AEAC: addiu       $a2, $zero, 0xC8
    ctx->r6 = ADD32(0, 0XC8);
    // 0x8022AEB0: sh          $v0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r2;
    // 0x8022AEB4: jal         0x8022B7E4
    // 0x8022AEB8: sb          $v1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r3;
    func_8022B7E4_ovl13(rdram, ctx);
        goto after_0;
    // 0x8022AEB8: sb          $v1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r3;
    after_0:
    // 0x8022AEBC: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x8022AEC0: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x8022AEC4: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022AEC8: beq         $v0, $zero, L_8022AF5C
    if (ctx->r2 == 0) {
        // 0x8022AECC: addiu       $s3, $s0, 0x348
        ctx->r19 = ADD32(ctx->r16, 0X348);
            goto L_8022AF5C;
    }
    // 0x8022AECC: addiu       $s3, $s0, 0x348
    ctx->r19 = ADD32(ctx->r16, 0X348);
    // 0x8022AED0: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022AED4: jal         0x8022B748
    // 0x8022AED8: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    func_8022B748_ovl13(rdram, ctx);
        goto after_1;
    // 0x8022AED8: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    after_1:
    // 0x8022AEDC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022AEE0: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022AEE4: addiu       $s2, $s2, 0x14
    ctx->r18 = ADD32(ctx->r18, 0X14);
    // 0x8022AEE8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022AEEC: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x8022AEF0: jal         0x8004F820
    // 0x8022AEF4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x8022AEF4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_2:
    // 0x8022AEF8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022AEFC: bgez        $v0, L_8022AF28
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022AF00: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8022AF28;
    }
    // 0x8022AF00: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022AF04: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022AF08: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022AF0C: jal         0x8004F820
    // 0x8022AF10: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x8022AF10: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_3:
    // 0x8022AF14: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022AF18: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022AF1C: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8022AF20: j           L_8022AF40
    // 0x8022AF24: srl         $v1, $v0, 3
    ctx->r3 = S32(U32(ctx->r2) >> 3);
        goto L_8022AF40;
    // 0x8022AF24: srl         $v1, $v0, 3
    ctx->r3 = S32(U32(ctx->r2) >> 3);
L_8022AF28:
    // 0x8022AF28: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022AF2C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022AF30: jal         0x8004F820
    // 0x8022AF34: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_4;
    // 0x8022AF34: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_4:
    // 0x8022AF38: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022AF3C: sra         $v1, $v0, 19
    ctx->r3 = S32(SIGNED(ctx->r2) >> 19);
L_8022AF40:
    // 0x8022AF40: lbu         $v0, 0x3($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X3);
    // 0x8022AF44: sh          $v1, 0x6($s3)
    MEM_H(0X6, ctx->r19) = ctx->r3;
    // 0x8022AF48: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022AF4C: sb          $v0, 0x3($s3)
    MEM_B(0X3, ctx->r19) = ctx->r2;
    // 0x8022AF50: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x8022AF54: j           L_8022AFA4
    // 0x8022AF58: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
        goto L_8022AFA4;
    // 0x8022AF58: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
L_8022AF5C:
    // 0x8022AF5C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022AF60: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022AF64: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    // 0x8022AF68: jal         0x8004F820
    // 0x8022AF6C: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_8004F820_2AC20(rdram, ctx);
        goto after_5;
    // 0x8022AF6C: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_5:
    // 0x8022AF70: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022AF74: slt         $v0, $zero, $v0
    ctx->r2 = SIGNED(0) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8022AF78: beq         $v0, $zero, L_8022AF88
    if (ctx->r2 == 0) {
        // 0x8022AF7C: sh          $v0, 0x34E($s0)
        MEM_H(0X34E, ctx->r16) = ctx->r2;
            goto L_8022AF88;
    }
    // 0x8022AF7C: sh          $v0, 0x34E($s0)
    MEM_H(0X34E, ctx->r16) = ctx->r2;
    // 0x8022AF80: j           L_8022AF8C
    // 0x8022AF84: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_8022AF8C;
    // 0x8022AF84: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_8022AF88:
    // 0x8022AF88: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_8022AF8C:
    // 0x8022AF8C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022AF90: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022AF94: sb          $v0, 0x3($s3)
    MEM_B(0X3, ctx->r19) = ctx->r2;
    // 0x8022AF98: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x8022AF9C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022AFA0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
L_8022AFA4:
    // 0x8022AFA4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022AFA8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022AFAC: jal         0x800610AC
    // 0x8022AFB0: andi        $a3, $v0, 0xFF
    ctx->r7 = ctx->r2 & 0XFF;
    func_800610AC_3C4AC(rdram, ctx);
        goto after_6;
    // 0x8022AFB0: andi        $a3, $v0, 0xFF
    ctx->r7 = ctx->r2 & 0XFF;
    after_6:
    // 0x8022AFB4: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022AFB8: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022AFBC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022AFC0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022AFC4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022AFC8: jr          $ra
    // 0x8022AFCC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022AFCC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_802261C4_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802261C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802261C8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802261CC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802261D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802261D4: lbu         $v1, 0x5($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X5);
    // 0x802261D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802261DC: beq         $v1, $v0, L_8022625C
    if (ctx->r3 == ctx->r2) {
        // 0x802261E0: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8022625C;
    }
    // 0x802261E0: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x802261E4: beql        $v0, $zero, L_802261FC
    if (ctx->r2 == 0) {
        // 0x802261E8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802261FC;
    }
    goto skip_0;
    // 0x802261E8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x802261EC: beq         $v1, $zero, L_8022620C
    if (ctx->r3 == 0) {
        // 0x802261F0: addiu       $a0, $zero, 0x156
        ctx->r4 = ADD32(0, 0X156);
            goto L_8022620C;
    }
    // 0x802261F0: addiu       $a0, $zero, 0x156
    ctx->r4 = ADD32(0, 0X156);
    // 0x802261F4: j           L_802262BC
    // 0x802261F8: nop

        goto L_802262BC;
    // 0x802261F8: nop

L_802261FC:
    // 0x802261FC: beq         $v1, $v0, L_802262AC
    if (ctx->r3 == ctx->r2) {
        // 0x80226200: nop
    
            goto L_802262AC;
    }
    // 0x80226200: nop

    // 0x80226204: j           L_802262BC
    // 0x80226208: nop

        goto L_802262BC;
    // 0x80226208: nop

L_8022620C:
    // 0x8022620C: jal         0x8004CB2C
    // 0x80226210: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_0;
    // 0x80226210: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_0:
    // 0x80226214: jal         0x80054578
    // 0x80226218: nop

    func_80054578_2F978(rdram, ctx);
        goto after_1;
    // 0x80226218: nop

    after_1:
    // 0x8022621C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80226220: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80226224: jal         0x80036B00
    // 0x80226228: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80036B00_11F00(rdram, ctx);
        goto after_2;
    // 0x80226228: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x8022622C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80226230: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80226234: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80226238: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022623C: beq         $v0, $zero, L_8022629C
    if (ctx->r2 == 0) {
        // 0x80226240: nop
    
            goto L_8022629C;
    }
    // 0x80226240: nop

    // 0x80226244: jal         0x80061798
    // 0x80226248: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_80061798_3CB98(rdram, ctx);
        goto after_3;
    // 0x80226248: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_3:
    // 0x8022624C: jal         0x8004B5E8
    // 0x80226250: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    func_8004B5E8_269E8(rdram, ctx);
        goto after_4;
    // 0x80226250: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    after_4:
    // 0x80226254: j           L_8022629C
    // 0x80226258: nop

        goto L_8022629C;
    // 0x80226258: nop

L_8022625C:
    // 0x8022625C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80226260: jal         0x80070050
    // 0x80226264: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    func_80070050_4B450(rdram, ctx);
        goto after_5;
    // 0x80226264: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_5:
    // 0x80226268: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022626C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226270: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    // 0x80226274: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80226278: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022627C: beq         $v0, $zero, L_80226294
    if (ctx->r2 == 0) {
        // 0x80226280: nop
    
            goto L_80226294;
    }
    // 0x80226280: nop

    // 0x80226284: jal         0x80034844
    // 0x80226288: nop

    func_80034844_FC44(rdram, ctx);
        goto after_6;
    // 0x80226288: nop

    after_6:
    // 0x8022628C: j           L_8022629C
    // 0x80226290: nop

        goto L_8022629C;
    // 0x80226290: nop

L_80226294:
    // 0x80226294: jal         0x80035288
    // 0x80226298: nop

    func_80035288_10688(rdram, ctx);
        goto after_7;
    // 0x80226298: nop

    after_7:
L_8022629C:
    // 0x8022629C: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x802262A0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802262A4: j           L_802262BC
    // 0x802262A8: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
        goto L_802262BC;
    // 0x802262A8: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
L_802262AC:
    // 0x802262AC: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x802262B0: lbu         $v0, -0x7388($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7388);
    // 0x802262B4: beql        $v0, $zero, L_802262BC
    if (ctx->r2 == 0) {
        // 0x802262B8: sb          $zero, 0x0($s0)
        MEM_B(0X0, ctx->r16) = 0;
            goto L_802262BC;
    }
    goto skip_1;
    // 0x802262B8: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    skip_1:
L_802262BC:
    // 0x802262BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802262C0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802262C4: jr          $ra
    // 0x802262C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802262C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022B460_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B460: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022B464: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B468: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B46C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022B470: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x8022B474: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022B478: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022B47C: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x8022B480: addiu       $s2, $s2, 0x49C4
    ctx->r18 = ADD32(ctx->r18, 0X49C4);
    // 0x8022B484: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022B488: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8022B48C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022B490: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022B494: lbu         $v1, 0x34B($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34B);
    // 0x8022B498: lhu         $t0, 0x56($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X56);
    // 0x8022B49C: lbu         $t1, 0xAC($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022B4A0: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x8022B4A4: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022B4A8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022B4AC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022B4B0: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
    // 0x8022B4B4: sh          $t0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r8;
    // 0x8022B4B8: jal         0x8004F820
    // 0x8022B4BC: sb          $t1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r9;
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022B4BC: sb          $t1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r9;
    after_0:
    // 0x8022B4C0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B4C4: bgez        $v0, L_8022B4F4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022B4C8: addiu       $s3, $s0, 0x348
        ctx->r19 = ADD32(ctx->r16, 0X348);
            goto L_8022B4F4;
    }
    // 0x8022B4C8: addiu       $s3, $s0, 0x348
    ctx->r19 = ADD32(ctx->r16, 0X348);
    // 0x8022B4CC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022B4D0: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022B4D4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022B4D8: jal         0x8004F820
    // 0x8022B4DC: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x8022B4DC: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_1:
    // 0x8022B4E0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B4E4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022B4E8: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8022B4EC: j           L_8022B510
    // 0x8022B4F0: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
        goto L_8022B510;
    // 0x8022B4F0: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
L_8022B4F4:
    // 0x8022B4F4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022B4F8: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022B4FC: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022B500: jal         0x8004F820
    // 0x8022B504: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x8022B504: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_2:
    // 0x8022B508: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B50C: sra         $v0, $v0, 19
    ctx->r2 = S32(SIGNED(ctx->r2) >> 19);
L_8022B510:
    // 0x8022B510: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022B514: sh          $v0, 0x6($s3)
    MEM_H(0X6, ctx->r19) = ctx->r2;
    // 0x8022B518: lbu         $a3, 0xC($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XC);
    // 0x8022B51C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022B520: jal         0x800610AC
    // 0x8022B524: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_3;
    // 0x8022B524: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
    // 0x8022B528: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022B52C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022B530: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022B534: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022B538: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B53C: jr          $ra
    // 0x8022B540: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022B540: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80236770_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236770: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80236774: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80236778: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023677C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80236780: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80236784: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80236788: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023678C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80236790: lw          $v0, -0x65A4($at)
    ctx->r2 = MEM_W(ctx->r1, -0X65A4);
    // 0x80236794: jalr        $v0
    // 0x80236798: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80236798: nop

    after_0:
    // 0x8023679C: jal         0x800472C0
    // 0x802367A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800472C0_226C0(rdram, ctx);
        goto after_1;
    // 0x802367A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x802367A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802367A8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802367AC: jr          $ra
    // 0x802367B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802367B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80233CF0_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233CF0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80233CF4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80233CF8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80233CFC: lui         $t3, 0x3D48
    ctx->r11 = S32(0X3D48 << 16);
    // 0x80233D00: ori         $t3, $t3, 0x2E
    ctx->r11 = ctx->r11 | 0X2E;
    // 0x80233D04: lui         $t2, 0x2E40
    ctx->r10 = S32(0X2E40 << 16);
    // 0x80233D08: ori         $t2, $t2, 0xE040
    ctx->r10 = ctx->r10 | 0XE040;
    // 0x80233D0C: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80233D10: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80233D14: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80233D18: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80233D1C: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80233D20: lhu         $a3, 0x1C($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0X1C);
    // 0x80233D24: lhu         $t0, 0x20($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X20);
    // 0x80233D28: lhu         $t1, 0x24($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X24);
    // 0x80233D2C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80233D30: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80233D34: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80233D38: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    // 0x80233D3C: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x80233D40: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x80233D44: sb          $v0, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r2;
    // 0x80233D48: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80233D4C: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
    // 0x80233D50: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80233D54: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80233D58: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80233D5C: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x80233D60: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    // 0x80233D64: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
    // 0x80233D68: sw          $zero, 0xD0($s0)
    MEM_W(0XD0, ctx->r16) = 0;
    // 0x80233D6C: sw          $t3, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->r11;
    // 0x80233D70: sw          $t2, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->r10;
    // 0x80233D74: sh          $v0, 0x98($s0)
    MEM_H(0X98, ctx->r16) = ctx->r2;
    // 0x80233D78: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80233D7C: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    // 0x80233D80: sh          $a3, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r7;
    // 0x80233D84: sh          $a3, 0x90($s0)
    MEM_H(0X90, ctx->r16) = ctx->r7;
    // 0x80233D88: sh          $t0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r8;
    // 0x80233D8C: sh          $t0, 0x92($s0)
    MEM_H(0X92, ctx->r16) = ctx->r8;
    // 0x80233D90: sh          $t1, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r9;
    // 0x80233D94: jal         0x8009A3B4
    // 0x80233D98: sh          $t1, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r9;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80233D98: sh          $t1, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r9;
    after_0:
    // 0x80233D9C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80233DA0: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x80233DA4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80233DA8: jal         0x8009A3B4
    // 0x80233DAC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80233DAC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x80233DB0: addiu       $a0, $zero, 0xF0
    ctx->r4 = ADD32(0, 0XF0);
    // 0x80233DB4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80233DB8: jal         0x8002A33C
    // 0x80233DBC: sw          $zero, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = 0;
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x80233DBC: sw          $zero, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = 0;
    after_2:
    // 0x80233DC0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80233DC4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80233DC8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80233DCC: jr          $ra
    // 0x80233DD0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80233DD0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022ABA0_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022ABA0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022ABA4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022ABA8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022ABAC: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8022ABB0: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022ABB4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022ABB8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022ABBC: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022ABC0: lbu         $v0, 0x34B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X34B);
    // 0x8022ABC4: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022ABC8: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022ABCC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022ABD0: sb          $v0, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r2;
    // 0x8022ABD4: sh          $v1, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r3;
    // 0x8022ABD8: jal         0x8022B748
    // 0x8022ABDC: sb          $a1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r5;
    func_8022B748_ovl13(rdram, ctx);
        goto after_0;
    // 0x8022ABDC: sb          $a1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r5;
    after_0:
    // 0x8022ABE0: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x8022ABE4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022ABE8: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022ABEC: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x8022ABF0: addiu       $s2, $s2, 0x49C4
    ctx->r18 = ADD32(ctx->r18, 0X49C4);
    // 0x8022ABF4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022ABF8: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x8022ABFC: jal         0x8004F820
    // 0x8022AC00: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x8022AC00: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022AC04: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022AC08: bgez        $v0, L_8022AC38
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022AC0C: addiu       $s3, $s0, 0x348
        ctx->r19 = ADD32(ctx->r16, 0X348);
            goto L_8022AC38;
    }
    // 0x8022AC0C: addiu       $s3, $s0, 0x348
    ctx->r19 = ADD32(ctx->r16, 0X348);
    // 0x8022AC10: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022AC14: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022AC18: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022AC1C: jal         0x8004F820
    // 0x8022AC20: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x8022AC20: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_2:
    // 0x8022AC24: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022AC28: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022AC2C: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8022AC30: j           L_8022AC54
    // 0x8022AC34: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
        goto L_8022AC54;
    // 0x8022AC34: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
L_8022AC38:
    // 0x8022AC38: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022AC3C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022AC40: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022AC44: jal         0x8004F820
    // 0x8022AC48: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x8022AC48: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_3:
    // 0x8022AC4C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022AC50: sra         $v0, $v0, 19
    ctx->r2 = S32(SIGNED(ctx->r2) >> 19);
L_8022AC54:
    // 0x8022AC54: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022AC58: sh          $v0, 0x6($s3)
    MEM_H(0X6, ctx->r19) = ctx->r2;
    // 0x8022AC5C: lbu         $a3, 0xC($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XC);
    // 0x8022AC60: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022AC64: jal         0x800610AC
    // 0x8022AC68: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_4;
    // 0x8022AC68: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
    // 0x8022AC6C: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022AC70: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022AC74: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022AC78: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022AC7C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022AC80: jr          $ra
    // 0x8022AC84: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022AC84: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022C19C_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C19C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022C1A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022C1A4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022C1A8: lhu         $v1, 0x362($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X362);
    // 0x8022C1AC: bne         $a1, $zero, L_8022C1DC
    if (ctx->r5 != 0) {
        // 0x8022C1B0: addiu       $s0, $a0, 0x348
        ctx->r16 = ADD32(ctx->r4, 0X348);
            goto L_8022C1DC;
    }
    // 0x8022C1B0: addiu       $s0, $a0, 0x348
    ctx->r16 = ADD32(ctx->r4, 0X348);
    // 0x8022C1B4: jal         0x800A3450
    // 0x8022C1B8: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8022C1B8: nop

    after_0:
    // 0x8022C1BC: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x8022C1C0: lhu         $v1, -0x730C($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X730C);
    // 0x8022C1C4: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022C1C8: mflo        $v0
    ctx->r2 = lo;
    // 0x8022C1CC: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022C1D0: addiu       $v0, $v0, -0x8
    ctx->r2 = ADD32(ctx->r2, -0X8);
    // 0x8022C1D4: j           L_8022C200
    // 0x8022C1D8: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
        goto L_8022C200;
    // 0x8022C1D8: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
L_8022C1DC:
    // 0x8022C1DC: sra         $a1, $a1, 12
    ctx->r5 = S32(SIGNED(ctx->r5) >> 12);
    // 0x8022C1E0: andi        $v0, $a1, 0x1
    ctx->r2 = ctx->r5 & 0X1;
    // 0x8022C1E4: bnel        $v0, $zero, L_8022C1EC
    if (ctx->r2 != 0) {
        // 0x8022C1E8: addiu       $v1, $zero, 0x10
        ctx->r3 = ADD32(0, 0X10);
            goto L_8022C1EC;
    }
    goto skip_0;
    // 0x8022C1E8: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
    skip_0:
L_8022C1EC:
    // 0x8022C1EC: andi        $v0, $a1, 0x2
    ctx->r2 = ctx->r5 & 0X2;
    // 0x8022C1F0: beq         $v0, $zero, L_8022C200
    if (ctx->r2 == 0) {
        // 0x8022C1F4: sll         $v0, $v1, 16
        ctx->r2 = S32(ctx->r3 << 16);
            goto L_8022C200;
    }
    // 0x8022C1F4: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x8022C1F8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022C1FC: negu        $v1, $v0
    ctx->r3 = SUB32(0, ctx->r2);
L_8022C200:
    // 0x8022C200: sh          $zero, 0x18($s0)
    MEM_H(0X18, ctx->r16) = 0;
    // 0x8022C204: sh          $v1, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r3;
    // 0x8022C208: sh          $zero, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = 0;
    // 0x8022C20C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022C210: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022C214: jr          $ra
    // 0x8022C218: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022C218: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80237504_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237504: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80237508: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x8023750C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80237510: lbu         $v0, 0xB($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XB);
    // 0x80237514: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80237518: sb          $v0, 0xB($a1)
    MEM_B(0XB, ctx->r5) = ctx->r2;
    // 0x8023751C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80237520: bne         $v0, $zero, L_80237538
    if (ctx->r2 != 0) {
        // 0x80237524: lui         $v0, 0xFFDF
        ctx->r2 = S32(0XFFDF << 16);
            goto L_80237538;
    }
    // 0x80237524: lui         $v0, 0xFFDF
    ctx->r2 = S32(0XFFDF << 16);
    // 0x80237528: jal         0x8004F5C4
    // 0x8023752C: nop

    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x8023752C: nop

    after_0:
    // 0x80237530: j           L_80237554
    // 0x80237534: nop

        goto L_80237554;
    // 0x80237534: nop

L_80237538:
    // 0x80237538: lw          $v1, 0x18($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X18);
    // 0x8023753C: lhu         $a0, 0x24($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X24);
    // 0x80237540: ori         $v0, $v0, 0xDFE0
    ctx->r2 = ctx->r2 | 0XDFE0;
    // 0x80237544: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80237548: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8023754C: sw          $v1, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r3;
    // 0x80237550: sh          $a0, 0x24($a1)
    MEM_H(0X24, ctx->r5) = ctx->r4;
L_80237554:
    // 0x80237554: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80237558: jr          $ra
    // 0x8023755C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023755C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80229FF4_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229FF4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80229FF8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80229FFC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022A000: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022A004: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022A008: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A00C: lh          $a0, 0x64($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X64);
    // 0x8022A010: lh          $a1, 0x56($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X56);
    // 0x8022A014: lb          $a2, 0xF($s1)
    ctx->r6 = MEM_B(ctx->r17, 0XF);
    // 0x8022A018: jal         0x8004FA7C
    // 0x8022A01C: addiu       $s0, $s1, 0x348
    ctx->r16 = ADD32(ctx->r17, 0X348);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x8022A01C: addiu       $s0, $s1, 0x348
    ctx->r16 = ADD32(ctx->r17, 0X348);
    after_0:
    // 0x8022A020: lh          $a1, 0x362($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X362);
    // 0x8022A024: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x8022A028: sll         $v1, $s2, 16
    ctx->r3 = S32(ctx->r18 << 16);
    // 0x8022A02C: sra         $a0, $v1, 16
    ctx->r4 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8022A030: srl         $v1, $a0, 31
    ctx->r3 = S32(U32(ctx->r4) >> 31);
    // 0x8022A034: sltiu       $v0, $a1, 0x1
    ctx->r2 = ctx->r5 < 0X1 ? 1 : 0;
    // 0x8022A038: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022A03C: bnel        $v0, $zero, L_8022A05C
    if (ctx->r2 != 0) {
        // 0x8022A040: negu        $s2, $s2
        ctx->r18 = SUB32(0, ctx->r18);
            goto L_8022A05C;
    }
    goto skip_0;
    // 0x8022A040: negu        $s2, $s2
    ctx->r18 = SUB32(0, ctx->r18);
    skip_0:
    // 0x8022A044: sltu        $v0, $zero, $a1
    ctx->r2 = 0 < ctx->r5 ? 1 : 0;
    // 0x8022A048: slt         $v1, $zero, $a0
    ctx->r3 = SIGNED(0) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8022A04C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022A050: beq         $v0, $zero, L_8022A060
    if (ctx->r2 == 0) {
        // 0x8022A054: sll         $v0, $s2, 16
        ctx->r2 = S32(ctx->r18 << 16);
            goto L_8022A060;
    }
    // 0x8022A054: sll         $v0, $s2, 16
    ctx->r2 = S32(ctx->r18 << 16);
    // 0x8022A058: negu        $s2, $s2
    ctx->r18 = SUB32(0, ctx->r18);
L_8022A05C:
    // 0x8022A05C: sll         $v0, $s2, 16
    ctx->r2 = S32(ctx->r18 << 16);
L_8022A060:
    // 0x8022A060: bne         $v0, $zero, L_8022A090
    if (ctx->r2 != 0) {
        // 0x8022A064: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022A090;
    }
    // 0x8022A064: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A068: lhu         $v1, 0x14($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X14);
    // 0x8022A06C: lhu         $a0, 0x1E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X1E);
    // 0x8022A070: lhu         $a1, 0x16($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X16);
    // 0x8022A074: subu        $v1, $v0, $v1
    ctx->r3 = SUB32(ctx->r2, ctx->r3);
    // 0x8022A078: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
    // 0x8022A07C: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022A080: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A084: sh          $v1, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r3;
    // 0x8022A088: j           L_8022A0E8
    // 0x8022A08C: sh          $a0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r4;
        goto L_8022A0E8;
    // 0x8022A08C: sh          $a0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r4;
L_8022A090:
    // 0x8022A090: lhu         $v0, 0x8($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8);
    // 0x8022A094: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022A098: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x8022A09C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A0A0: beq         $v0, $zero, L_8022A0E4
    if (ctx->r2 == 0) {
        // 0x8022A0A4: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8022A0E4;
    }
    // 0x8022A0A4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022A0A8: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x8022A0AC: jal         0x8022B7E4
    // 0x8022A0B0: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_8022B7E4_ovl13(rdram, ctx);
        goto after_1;
    // 0x8022A0B0: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_1:
    // 0x8022A0B4: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022A0B8: beq         $v0, $zero, L_8022A0F0
    if (ctx->r2 == 0) {
        // 0x8022A0BC: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8022A0F0;
    }
    // 0x8022A0BC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022A0C0: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    // 0x8022A0C4: jal         0x8022B748
    // 0x8022A0C8: nop

    func_8022B748_ovl13(rdram, ctx);
        goto after_2;
    // 0x8022A0C8: nop

    after_2:
    // 0x8022A0CC: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x8022A0D0: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x8022A0D4: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x8022A0D8: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022A0DC: j           L_8022A110
    // 0x8022A0E0: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
        goto L_8022A110;
    // 0x8022A0E0: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_8022A0E4:
    // 0x8022A0E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022A0E8:
    // 0x8022A0E8: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x8022A0EC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_8022A0F0:
    // 0x8022A0F0: lhu         $v0, 0x56($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X56);
    // 0x8022A0F4: lh          $a1, 0x44($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X44);
    // 0x8022A0F8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022A0FC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022A100: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x8022A104: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022A108: jal         0x8004DA90
    // 0x8022A10C: sh          $v0, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r2;
    func_8004DA90_28E90(rdram, ctx);
        goto after_3;
    // 0x8022A10C: sh          $v0, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r2;
    after_3:
L_8022A110:
    // 0x8022A110: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022A114: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022A118: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022A11C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A120: jr          $ra
    // 0x8022A124: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022A124: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022FBDC_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FBDC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022FBE0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022FBE4: jal         0x8004F418
    // 0x8022FBE8: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x8022FBE8: nop

    after_0:
    // 0x8022FBEC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022FBF0: jr          $ra
    // 0x8022FBF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022FBF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227918_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227918: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022791C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227920: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227924: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227928: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8022792C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227930: beq         $v1, $v0, L_80227998
    if (ctx->r3 == ctx->r2) {
        // 0x80227934: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80227998;
    }
    // 0x80227934: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80227938: beql        $v0, $zero, L_802279C0
    if (ctx->r2 == 0) {
        // 0x8022793C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802279C0;
    }
    goto skip_0;
    // 0x8022793C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    skip_0:
    // 0x80227940: bnel        $v1, $zero, L_802279C0
    if (ctx->r3 != 0) {
        // 0x80227944: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802279C0;
    }
    goto skip_1;
    // 0x80227944: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    skip_1:
    // 0x80227948: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022794C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80227950: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80227954: jal         0x8004D5D4
    // 0x80227958: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80227958: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022795C: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80227960: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80227964: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80227968: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022796C: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80227970: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80227974: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80227978: addiu       $v0, $zero, 0x19
    ctx->r2 = ADD32(0, 0X19);
    // 0x8022797C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80227980: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80227984: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x80227988: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x8022798C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80227990: j           L_802279BC
    // 0x80227994: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
        goto L_802279BC;
    // 0x80227994: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
L_80227998:
    // 0x80227998: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022799C: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x802279A0: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x802279A4: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802279A8: bne         $v1, $v0, L_802279C0
    if (ctx->r3 != ctx->r2) {
        // 0x802279AC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802279C0;
    }
    // 0x802279AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802279B0: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802279B4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802279B8: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_802279BC:
    // 0x802279BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_802279C0:
    // 0x802279C0: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x802279C4: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x802279C8: jal         0x8003B564
    // 0x802279CC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_1;
    // 0x802279CC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x802279D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802279D4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802279D8: jr          $ra
    // 0x802279DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802279DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022D178_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D178: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022D17C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D180: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022D184: jal         0x800A3450
    // 0x8022D188: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8022D188: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    after_0:
    // 0x8022D18C: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x8022D190: bne         $v1, $zero, L_8022D20C
    if (ctx->r3 != 0) {
        // 0x8022D194: addu        $a3, $v0, $zero
        ctx->r7 = ADD32(ctx->r2, 0);
            goto L_8022D20C;
    }
    // 0x8022D194: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x8022D198: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8022D19C: andi        $v1, $a3, 0x7
    ctx->r3 = ctx->r7 & 0X7;
    // 0x8022D1A0: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    // 0x8022D1A4: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8022D1A8: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022D1AC: sll         $a0, $a3, 16
    ctx->r4 = S32(ctx->r7 << 16);
    // 0x8022D1B0: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x8022D1B4: sra         $v1, $a0, 17
    ctx->r3 = S32(SIGNED(ctx->r4) >> 17);
    // 0x8022D1B8: andi        $v1, $v1, 0x7
    ctx->r3 = ctx->r3 & 0X7;
    // 0x8022D1BC: sh          $v0, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r2;
    // 0x8022D1C0: addiu       $v0, $zero, 0xC4
    ctx->r2 = ADD32(0, 0XC4);
    // 0x8022D1C4: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022D1C8: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x8022D1CC: sra         $v0, $a0, 18
    ctx->r2 = S32(SIGNED(ctx->r4) >> 18);
    // 0x8022D1D0: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x8022D1D4: lhu         $v1, 0x0($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X0);
    // 0x8022D1D8: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x8022D1DC: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x8022D1E0: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8022D1E4: sh          $v1, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r3;
    // 0x8022D1E8: lhu         $v0, 0x2($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X2);
    // 0x8022D1EC: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x8022D1F0: sh          $v0, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r2;
    // 0x8022D1F4: lhu         $v0, 0x4($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X4);
    // 0x8022D1F8: sra         $a0, $a0, 20
    ctx->r4 = S32(SIGNED(ctx->r4) >> 20);
    // 0x8022D1FC: andi        $a0, $a0, 0x3F
    ctx->r4 = ctx->r4 & 0X3F;
    // 0x8022D200: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8022D204: j           L_8022D284
    // 0x8022D208: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
        goto L_8022D284;
    // 0x8022D208: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
L_8022D20C:
    // 0x8022D20C: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x8022D210: lhu         $v1, 0x6($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X6);
    // 0x8022D214: lhu         $a0, 0x8($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X8);
    // 0x8022D218: lhu         $a2, 0xA($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0XA);
    // 0x8022D21C: lhu         $a1, 0xC($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0XC);
    // 0x8022D220: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8022D224: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022D228: addiu       $a0, $a0, 0x3
    ctx->r4 = ADD32(ctx->r4, 0X3);
    // 0x8022D22C: addiu       $a2, $a2, -0xC
    ctx->r6 = ADD32(ctx->r6, -0XC);
    // 0x8022D230: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
    // 0x8022D234: andi        $v0, $a3, 0x7
    ctx->r2 = ctx->r7 & 0X7;
    // 0x8022D238: subu        $a2, $a2, $v0
    ctx->r6 = SUB32(ctx->r6, ctx->r2);
    // 0x8022D23C: addiu       $a1, $a1, -0xC
    ctx->r5 = ADD32(ctx->r5, -0XC);
    // 0x8022D240: sh          $v1, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r3;
    // 0x8022D244: sll         $v1, $a3, 16
    ctx->r3 = S32(ctx->r7 << 16);
    // 0x8022D248: sra         $v0, $v1, 18
    ctx->r2 = S32(SIGNED(ctx->r3) >> 18);
    // 0x8022D24C: sh          $a0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r4;
    // 0x8022D250: lhu         $a0, 0xE($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XE);
    // 0x8022D254: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x8022D258: subu        $a1, $a1, $v0
    ctx->r5 = SUB32(ctx->r5, ctx->r2);
    // 0x8022D25C: lh          $v0, 0x6($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X6);
    // 0x8022D260: sra         $v1, $v1, 20
    ctx->r3 = S32(SIGNED(ctx->r3) >> 20);
    // 0x8022D264: andi        $v1, $v1, 0x7
    ctx->r3 = ctx->r3 & 0X7;
    // 0x8022D268: sh          $a2, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r6;
    // 0x8022D26C: sh          $a1, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r5;
    // 0x8022D270: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x8022D274: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x8022D278: bne         $v0, $zero, L_8022D284
    if (ctx->r2 != 0) {
        // 0x8022D27C: sh          $a0, 0xE($s0)
        MEM_H(0XE, ctx->r16) = ctx->r4;
            goto L_8022D284;
    }
    // 0x8022D27C: sh          $a0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r4;
    // 0x8022D280: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
L_8022D284:
    // 0x8022D284: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022D288: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D28C: jr          $ra
    // 0x8022D290: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022D290: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227870_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227870: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227874: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227878: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022787C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80227880: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80227884: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227888: jal         0x8009A3B4
    // 0x8022788C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022788C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x80227890: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80227894: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80227898: jal         0x8009A3B4
    // 0x8022789C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022789C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x802278A0: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x802278A4: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x802278A8: jal         0x8009A3B4
    // 0x802278AC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x802278AC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x802278B0: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x802278B4: lbu         $v1, 0xAC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XAC);
    // 0x802278B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802278BC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802278C0: sb          $v1, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r3;
    // 0x802278C4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802278C8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802278CC: lw          $v0, -0x7260($at)
    ctx->r2 = MEM_W(ctx->r1, -0X7260);
    // 0x802278D0: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x802278D4: addiu       $a1, $a1, -0x3A50
    ctx->r5 = ADD32(ctx->r5, -0X3A50);
    // 0x802278D8: jalr        $v0
    // 0x802278DC: addiu       $a2, $s0, 0x348
    ctx->r6 = ADD32(ctx->r16, 0X348);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x802278DC: addiu       $a2, $s0, 0x348
    ctx->r6 = ADD32(ctx->r16, 0X348);
    after_3:
    // 0x802278E0: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x802278E4: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x802278E8: beq         $a1, $v0, L_80227900
    if (ctx->r5 == ctx->r2) {
        // 0x802278EC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227900;
    }
    // 0x802278EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802278F0: jal         0x80050294
    // 0x802278F4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_4;
    // 0x802278F4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
    // 0x802278F8: j           L_80227908
    // 0x802278FC: nop

        goto L_80227908;
    // 0x802278FC: nop

L_80227900:
    // 0x80227900: jal         0x8005044C
    // 0x80227904: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_5;
    // 0x80227904: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
L_80227908:
    // 0x80227908: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022790C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227910: jr          $ra
    // 0x80227914: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227914: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80229D30_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229D30: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80229D34: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229D38: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229D3C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80229D40: lui         $s1, 0x8024
    ctx->r17 = S32(0X8024 << 16);
    // 0x80229D44: addiu       $s1, $s1, -0x6B4C
    ctx->r17 = ADD32(ctx->r17, -0X6B4C);
    // 0x80229D48: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80229D4C: jal         0x800A3450
    // 0x80229D50: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x80229D50: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    after_0:
    // 0x80229D54: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80229D58: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80229D5C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80229D60: lbu         $v1, -0x6B5C($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X6B5C);
    // 0x80229D64: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229D68: beq         $v1, $v0, L_80229E08
    if (ctx->r3 == ctx->r2) {
        // 0x80229D6C: addiu       $s2, $s0, 0x348
        ctx->r18 = ADD32(ctx->r16, 0X348);
            goto L_80229E08;
    }
    // 0x80229D6C: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x80229D70: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80229D74: beql        $v0, $zero, L_80229D8C
    if (ctx->r2 == 0) {
        // 0x80229D78: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80229D8C;
    }
    goto skip_0;
    // 0x80229D78: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80229D7C: beq         $v1, $zero, L_80229D9C
    if (ctx->r3 == 0) {
        // 0x80229D80: nop
    
            goto L_80229D9C;
    }
    // 0x80229D80: nop

    // 0x80229D84: j           L_80229E54
    // 0x80229D88: nop

        goto L_80229E54;
    // 0x80229D88: nop

L_80229D8C:
    // 0x80229D8C: beq         $v1, $v0, L_80229E28
    if (ctx->r3 == ctx->r2) {
        // 0x80229D90: nop
    
            goto L_80229E28;
    }
    // 0x80229D90: nop

    // 0x80229D94: j           L_80229E54
    // 0x80229D98: nop

        goto L_80229E54;
    // 0x80229D98: nop

L_80229D9C:
    // 0x80229D9C: lh          $v0, 0x35E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X35E);
    // 0x80229DA0: bne         $v0, $zero, L_80229DB4
    if (ctx->r2 != 0) {
        // 0x80229DA4: nop
    
            goto L_80229DB4;
    }
    // 0x80229DA4: nop

    // 0x80229DA8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80229DAC: j           L_80229DBC
    // 0x80229DB0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80229DBC;
    // 0x80229DB0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80229DB4:
    // 0x80229DB4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80229DB8: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
L_80229DBC:
    // 0x80229DBC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80229DC0: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80229DC4: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x80229DC8: beq         $v0, $zero, L_80229DE4
    if (ctx->r2 == 0) {
        // 0x80229DCC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80229DE4;
    }
    // 0x80229DCC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229DD0: jal         0x8022B798
    // 0x80229DD4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8022B798_ovl13(rdram, ctx);
        goto after_1;
    // 0x80229DD4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x80229DD8: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80229DDC: j           L_80229DF8
    // 0x80229DE0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_80229DF8;
    // 0x80229DE0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80229DE4:
    // 0x80229DE4: jal         0x8022B798
    // 0x80229DE8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8022B798_ovl13(rdram, ctx);
        goto after_2;
    // 0x80229DE8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x80229DEC: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80229DF0: jal         0x8022B758
    // 0x80229DF4: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    func_8022B758_ovl13(rdram, ctx);
        goto after_3;
    // 0x80229DF4: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    after_3:
L_80229DF8:
    // 0x80229DF8: lui         $s1, 0x8024
    ctx->r17 = S32(0X8024 << 16);
    // 0x80229DFC: addiu       $s1, $s1, -0x6B4C
    ctx->r17 = ADD32(ctx->r17, -0X6B4C);
    // 0x80229E00: j           L_80229E54
    // 0x80229E04: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_80229E54;
    // 0x80229E04: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_80229E08:
    // 0x80229E08: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80229E0C: jal         0x8022B748
    // 0x80229E10: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
    func_8022B748_ovl13(rdram, ctx);
        goto after_4;
    // 0x80229E10: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
    after_4:
    // 0x80229E14: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80229E18: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80229E1C: addiu       $v1, $v1, 0x3
    ctx->r3 = ADD32(ctx->r3, 0X3);
    // 0x80229E20: j           L_80229E54
    // 0x80229E24: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
        goto L_80229E54;
    // 0x80229E24: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_80229E28:
    // 0x80229E28: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80229E2C: jal         0x8022B758
    // 0x80229E30: addiu       $s1, $s1, 0x20
    ctx->r17 = ADD32(ctx->r17, 0X20);
    func_8022B758_ovl13(rdram, ctx);
        goto after_5;
    // 0x80229E30: addiu       $s1, $s1, 0x20
    ctx->r17 = ADD32(ctx->r17, 0X20);
    after_5:
    // 0x80229E34: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80229E38: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80229E3C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80229E40: addiu       $v1, $v1, 0x800
    ctx->r3 = ADD32(ctx->r3, 0X800);
    // 0x80229E44: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80229E48: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80229E4C: sh          $v1, 0x364($s0)
    MEM_H(0X364, ctx->r16) = ctx->r3;
    // 0x80229E50: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80229E54:
    // 0x80229E54: jal         0x800A3450
    // 0x80229E58: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_6;
    // 0x80229E58: nop

    after_6:
    // 0x80229E5C: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80229E60: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x80229E64: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80229E68: sh          $v0, 0x8($s2)
    MEM_H(0X8, ctx->r18) = ctx->r2;
    // 0x80229E6C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80229E70: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80229E74: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80229E78: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229E7C: jr          $ra
    // 0x80229E80: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80229E80: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022ED00_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022ED00: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8022ED04: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8022ED08: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022ED0C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8022ED10: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x8022ED14: addiu       $s2, $s0, 0x14
    ctx->r18 = ADD32(ctx->r16, 0X14);
    // 0x8022ED18: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022ED1C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022ED20: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8022ED24: jal         0x8009A3B4
    // 0x8022ED28: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022ED28: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    after_0:
    // 0x8022ED2C: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8022ED30: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022ED34: jal         0x8009A3B4
    // 0x8022ED38: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022ED38: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022ED3C: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8022ED40: addiu       $a1, $s0, 0x320
    ctx->r5 = ADD32(ctx->r16, 0X320);
    // 0x8022ED44: jal         0x8009A3B4
    // 0x8022ED48: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022ED48: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022ED4C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022ED50: addiu       $v1, $zero, 0x4210
    ctx->r3 = ADD32(0, 0X4210);
    // 0x8022ED54: sh          $v1, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r3;
    // 0x8022ED58: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022ED5C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022ED60: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022ED64: lw          $v0, -0x69A0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X69A0);
    // 0x8022ED68: jalr        $v0
    // 0x8022ED6C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x8022ED6C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022ED70: addiu       $a0, $s0, 0x310
    ctx->r4 = ADD32(ctx->r16, 0X310);
    // 0x8022ED74: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x8022ED78: addiu       $a1, $a1, -0x3D98
    ctx->r5 = ADD32(ctx->r5, -0X3D98);
    // 0x8022ED7C: jal         0x8003BD00
    // 0x8022ED80: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_8003BD00_17100(rdram, ctx);
        goto after_4;
    // 0x8022ED80: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x8022ED84: jal         0x80051248
    // 0x8022ED88: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80051248_2C648(rdram, ctx);
        goto after_5;
    // 0x8022ED88: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x8022ED8C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022ED90: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022ED94: beq         $v0, $zero, L_8022EDB0
    if (ctx->r2 == 0) {
        // 0x8022ED98: addiu       $s1, $s0, 0x308
        ctx->r17 = ADD32(ctx->r16, 0X308);
            goto L_8022EDB0;
    }
    // 0x8022ED98: addiu       $s1, $s0, 0x308
    ctx->r17 = ADD32(ctx->r16, 0X308);
    // 0x8022ED9C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022EDA0: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x8022EDA4: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8022EDA8: jal         0x8003B564
    // 0x8022EDAC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_6;
    // 0x8022EDAC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_6:
L_8022EDB0:
    // 0x8022EDB0: lbu         $v0, 0x36A($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X36A);
    // 0x8022EDB4: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x8022EDB8: beql        $v0, $zero, L_8022EE4C
    if (ctx->r2 == 0) {
        // 0x8022EDBC: sw          $zero, 0x28($s1)
        MEM_W(0X28, ctx->r17) = 0;
            goto L_8022EE4C;
    }
    goto skip_0;
    // 0x8022EDBC: sw          $zero, 0x28($s1)
    MEM_W(0X28, ctx->r17) = 0;
    skip_0:
    // 0x8022EDC0: lw          $v1, 0x5C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X5C);
    // 0x8022EDC4: lw          $v0, 0x320($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X320);
    // 0x8022EDC8: beql        $v1, $v0, L_8022EDFC
    if (ctx->r3 == ctx->r2) {
        // 0x8022EDCC: sb          $zero, 0x370($s0)
        MEM_B(0X370, ctx->r16) = 0;
            goto L_8022EDFC;
    }
    goto skip_1;
    // 0x8022EDCC: sb          $zero, 0x370($s0)
    MEM_B(0X370, ctx->r16) = 0;
    skip_1:
    // 0x8022EDD0: lb          $v0, 0x370($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X370);
    // 0x8022EDD4: bne         $v0, $zero, L_8022EDF4
    if (ctx->r2 != 0) {
        // 0x8022EDD8: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022EDF4;
    }
    // 0x8022EDD8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022EDDC: addiu       $a0, $zero, 0x147
    ctx->r4 = ADD32(0, 0X147);
    // 0x8022EDE0: jal         0x8002A33C
    // 0x8022EDE4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_7;
    // 0x8022EDE4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_7:
    // 0x8022EDE8: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022EDEC: j           L_8022EDFC
    // 0x8022EDF0: sb          $v0, 0x370($s0)
    MEM_B(0X370, ctx->r16) = ctx->r2;
        goto L_8022EDFC;
    // 0x8022EDF0: sb          $v0, 0x370($s0)
    MEM_B(0X370, ctx->r16) = ctx->r2;
L_8022EDF4:
    // 0x8022EDF4: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022EDF8: sb          $v0, 0x370($s0)
    MEM_B(0X370, ctx->r16) = ctx->r2;
L_8022EDFC:
    // 0x8022EDFC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022EE00: addiu       $a1, $s0, 0x190
    ctx->r5 = ADD32(ctx->r16, 0X190);
    // 0x8022EE04: jal         0x8009A3B4
    // 0x8022EE08: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x8022EE08: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_8:
    // 0x8022EE0C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022EE10: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x8022EE14: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    // 0x8022EE18: addiu       $v0, $s1, 0x28
    ctx->r2 = ADD32(ctx->r17, 0X28);
    // 0x8022EE1C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022EE20: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022EE24: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x8022EE28: lhu         $v1, 0x5C($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X5C);
    // 0x8022EE2C: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x8022EE30: lui         $v0, 0x408
    ctx->r2 = S32(0X408 << 16);
    // 0x8022EE34: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8022EE38: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8022EE3C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8022EE40: jal         0x80051E18
    // 0x8022EE44: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_9;
    // 0x8022EE44: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_9:
    // 0x8022EE48: sw          $zero, 0x28($s1)
    MEM_W(0X28, ctx->r17) = 0;
L_8022EE4C:
    // 0x8022EE4C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8022EE50: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x8022EE54: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x8022EE58: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8022EE5C: jr          $ra
    // 0x8022EE60: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8022EE60: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
