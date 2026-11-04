#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8022586C_ovl30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022586C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80225870: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80225874: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80225878: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022587C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225880: lbu         $s0, 0xE($s1)
    ctx->r16 = MEM_BU(ctx->r17, 0XE);
    // 0x80225884: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    // 0x80225888: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022588C: addiu       $v0, $v0, -0x7094
    ctx->r2 = ADD32(ctx->r2, -0X7094);
    // 0x80225890: andi        $s0, $s0, 0x3
    ctx->r16 = ctx->r16 & 0X3;
    // 0x80225894: sll         $s0, $s0, 4
    ctx->r16 = S32(ctx->r16 << 4);
    // 0x80225898: jal         0x80227A68
    // 0x8022589C: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    func_80227A68_ovl30(rdram, ctx);
        goto after_0;
    // 0x8022589C: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    after_0:
    // 0x802258A0: jal         0x800A3450
    // 0x802258A4: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x802258A4: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    after_1:
    // 0x802258A8: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x802258AC: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x802258B0: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x802258B4: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x802258B8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802258BC: sh          $v1, 0x350($s1)
    MEM_H(0X350, ctx->r17) = ctx->r3;
    // 0x802258C0: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x802258C4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802258C8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802258CC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802258D0: jr          $ra
    // 0x802258D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802258D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802259A8_ovl30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802259A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802259AC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802259B0: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x802259B4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802259B8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802259BC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802259C0: lw          $v0, -0x7054($at)
    ctx->r2 = MEM_W(ctx->r1, -0X7054);
    // 0x802259C4: jalr        $v0
    // 0x802259C8: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802259C8: nop

    after_0:
    // 0x802259CC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802259D0: jr          $ra
    // 0x802259D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802259D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225C40_ovl30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225C40: lhu         $v0, 0x350($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X350);
    // 0x80225C44: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80225C48: sh          $v0, 0x350($a0)
    MEM_H(0X350, ctx->r4) = ctx->r2;
    // 0x80225C4C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80225C50: bne         $v0, $zero, L_80225C5C
    if (ctx->r2 != 0) {
        // 0x80225C54: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80225C5C;
    }
    // 0x80225C54: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225C58: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_80225C5C:
    // 0x80225C5C: jr          $ra
    // 0x80225C60: nop

    TRACE_RETURN()
    return;
    // 0x80225C60: nop

;}
RECOMP_FUNC void func_80225300_ovl30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225300: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80225304: jr          $ra
    // 0x80225308: sw          $zero, -0x359C($at)
    MEM_W(-0X359C, ctx->r1) = 0;
    TRACE_RETURN()
    return;
    // 0x80225308: sw          $zero, -0x359C($at)
    MEM_W(-0X359C, ctx->r1) = 0;
;}
RECOMP_FUNC void func_80226D84_ovl30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226D84: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80226D88: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226D8C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226D90: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80226D94: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80226D98: lh          $a0, 0x34C($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X34C);
    // 0x80226D9C: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x80226DA0: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    // 0x80226DA4: jal         0x8004FA7C
    // 0x80226DA8: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x80226DA8: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    after_0:
    // 0x80226DAC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80226DB0: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x80226DB4: beq         $v0, $zero, L_80226E48
    if (ctx->r2 == 0) {
        // 0x80226DB8: nop
    
            goto L_80226E48;
    }
    // 0x80226DB8: nop

    // 0x80226DBC: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80226DC0: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x80226DC4: bne         $v0, $zero, L_80226E48
    if (ctx->r2 != 0) {
        // 0x80226DC8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80226E48;
    }
    // 0x80226DC8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226DCC: lbu         $v1, 0x34A($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34A);
    // 0x80226DD0: beq         $v1, $v0, L_80226DE8
    if (ctx->r3 == ctx->r2) {
        // 0x80226DD4: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80226DE8;
    }
    // 0x80226DD4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80226DD8: beq         $v1, $v0, L_80226E18
    if (ctx->r3 == ctx->r2) {
        // 0x80226DDC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80226E18;
    }
    // 0x80226DDC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80226DE0: j           L_80226E3C
    // 0x80226DE4: nop

        goto L_80226E3C;
    // 0x80226DE4: nop

L_80226DE8:
    // 0x80226DE8: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80226DEC: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x80226DF0: bne         $v0, $zero, L_80226E3C
    if (ctx->r2 != 0) {
        // 0x80226DF4: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80226E3C;
    }
    // 0x80226DF4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80226DF8: slti        $v0, $v1, 0x6
    ctx->r2 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    // 0x80226DFC: bne         $v0, $zero, L_80226E3C
    if (ctx->r2 != 0) {
        // 0x80226E00: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80226E3C;
    }
    // 0x80226E00: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226E04: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80226E08: bne         $v1, $v0, L_80226E3C
    if (ctx->r3 != ctx->r2) {
        // 0x80226E0C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80226E3C;
    }
    // 0x80226E0C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80226E10: j           L_80226E3C
    // 0x80226E14: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80226E3C;
    // 0x80226E14: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80226E18:
    // 0x80226E18: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80226E1C: slti        $v0, $v1, 0x6
    ctx->r2 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    // 0x80226E20: beq         $v0, $zero, L_80226E38
    if (ctx->r2 == 0) {
        // 0x80226E24: slti        $v0, $v1, 0x4
        ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
            goto L_80226E38;
    }
    // 0x80226E24: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x80226E28: bne         $v0, $zero, L_80226E3C
    if (ctx->r2 != 0) {
        // 0x80226E2C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80226E3C;
    }
    // 0x80226E2C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80226E30: j           L_80226E3C
    // 0x80226E34: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80226E3C;
    // 0x80226E34: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80226E38:
    // 0x80226E38: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80226E3C:
    // 0x80226E3C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80226E40: beq         $v0, $zero, L_80226E6C
    if (ctx->r2 == 0) {
        // 0x80226E44: nop
    
            goto L_80226E6C;
    }
    // 0x80226E44: nop

L_80226E48:
    // 0x80226E48: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x80226E4C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80226E50: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80226E54: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80226E58: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x80226E5C: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80226E60: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x80226E64: j           L_80226E7C
    // 0x80226E68: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80226E7C;
    // 0x80226E68: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80226E6C:
    // 0x80226E6C: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80226E70: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80226E74: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80226E78: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_80226E7C:
    // 0x80226E7C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80226E80: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80226E84: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226E88: jr          $ra
    // 0x80226E8C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80226E8C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022660C_ovl30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022660C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80226610: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226614: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226618: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8022661C: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x80226620: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80226624: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80226628: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022662C: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x80226630: addiu       $v0, $zero, 0x2A
    ctx->r2 = ADD32(0, 0X2A);
    // 0x80226634: bne         $v1, $v0, L_80226650
    if (ctx->r3 != ctx->r2) {
        // 0x80226638: addiu       $s2, $s0, 0x348
        ctx->r18 = ADD32(ctx->r16, 0X348);
            goto L_80226650;
    }
    // 0x80226638: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x8022663C: lui         $s1, 0x8023
    ctx->r17 = S32(0X8023 << 16);
    // 0x80226640: addiu       $s1, $s1, -0x6F30
    ctx->r17 = ADD32(ctx->r17, -0X6F30);
    // 0x80226644: lui         $s3, 0x8023
    ctx->r19 = S32(0X8023 << 16);
    // 0x80226648: j           L_80226660
    // 0x8022664C: addiu       $s3, $s3, -0x6F10
    ctx->r19 = ADD32(ctx->r19, -0X6F10);
        goto L_80226660;
    // 0x8022664C: addiu       $s3, $s3, -0x6F10
    ctx->r19 = ADD32(ctx->r19, -0X6F10);
L_80226650:
    // 0x80226650: lui         $s1, 0x8023
    ctx->r17 = S32(0X8023 << 16);
    // 0x80226654: addiu       $s1, $s1, -0x6F40
    ctx->r17 = ADD32(ctx->r17, -0X6F40);
    // 0x80226658: lui         $s3, 0x8023
    ctx->r19 = S32(0X8023 << 16);
    // 0x8022665C: addiu       $s3, $s3, -0x6F20
    ctx->r19 = ADD32(ctx->r19, -0X6F20);
L_80226660:
    // 0x80226660: lui         $s4, 0x8023
    ctx->r20 = S32(0X8023 << 16);
    // 0x80226664: jal         0x800A3450
    // 0x80226668: addiu       $s4, $s4, -0x6F00
    ctx->r20 = ADD32(ctx->r20, -0X6F00);
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x80226668: addiu       $s4, $s4, -0x6F00
    ctx->r20 = ADD32(ctx->r20, -0X6F00);
    after_0:
    // 0x8022666C: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80226670: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x80226674: lbu         $s1, 0x0($v0)
    ctx->r17 = MEM_BU(ctx->r2, 0X0);
    // 0x80226678: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022667C: andi        $v1, $s1, 0xFF
    ctx->r3 = ctx->r17 & 0XFF;
    // 0x80226680: beq         $v1, $v0, L_8022670C
    if (ctx->r3 == ctx->r2) {
        // 0x80226684: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8022670C;
    }
    // 0x80226684: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80226688: beql        $v0, $zero, L_802266A0
    if (ctx->r2 == 0) {
        // 0x8022668C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802266A0;
    }
    goto skip_0;
    // 0x8022668C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80226690: beq         $v1, $zero, L_802266B0
    if (ctx->r3 == 0) {
        // 0x80226694: nop
    
            goto L_802266B0;
    }
    // 0x80226694: nop

    // 0x80226698: j           L_8022679C
    // 0x8022669C: nop

        goto L_8022679C;
    // 0x8022669C: nop

L_802266A0:
    // 0x802266A0: beq         $v1, $v0, L_80226720
    if (ctx->r3 == ctx->r2) {
        // 0x802266A4: nop
    
            goto L_80226720;
    }
    // 0x802266A4: nop

    // 0x802266A8: j           L_8022679C
    // 0x802266AC: nop

        goto L_8022679C;
    // 0x802266AC: nop

L_802266B0:
    // 0x802266B0: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x802266B4: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x802266B8: bne         $v0, $zero, L_802266DC
    if (ctx->r2 != 0) {
        // 0x802266BC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802266DC;
    }
    // 0x802266BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802266C0: jal         0x800A3450
    // 0x802266C4: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x802266C4: nop

    after_1:
    // 0x802266C8: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x802266CC: addu        $v0, $s3, $v0
    ctx->r2 = ADD32(ctx->r19, ctx->r2);
    // 0x802266D0: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x802266D4: beq         $v0, $zero, L_802266E8
    if (ctx->r2 == 0) {
        // 0x802266D8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802266E8;
    }
    // 0x802266D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_802266DC:
    // 0x802266DC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802266E0: j           L_802266FC
    // 0x802266E4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_802266FC;
    // 0x802266E4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_802266E8:
    // 0x802266E8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x802266EC: jal         0x80227A78
    // 0x802266F0: nop

    func_80227A78_ovl30(rdram, ctx);
        goto after_2;
    // 0x802266F0: nop

    after_2:
    // 0x802266F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802266F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_802266FC:
    // 0x802266FC: jal         0x80227AB8
    // 0x80226700: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80227AB8_ovl30(rdram, ctx);
        goto after_3;
    // 0x80226700: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_3:
    // 0x80226704: j           L_802267C0
    // 0x80226708: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
        goto L_802267C0;
    // 0x80226708: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
L_8022670C:
    // 0x8022670C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80226710: jal         0x80227A68
    // 0x80226714: nop

    func_80227A68_ovl30(rdram, ctx);
        goto after_4;
    // 0x80226714: nop

    after_4:
    // 0x80226718: j           L_802267C0
    // 0x8022671C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_802267C0;
    // 0x8022671C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_80226720:
    // 0x80226720: lhu         $v1, 0x14($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X14);
    // 0x80226724: lhu         $v0, 0xC($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0XC);
    // 0x80226728: lhu         $a2, 0x14($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X14);
    // 0x8022672C: lhu         $a1, 0x18($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X18);
    // 0x80226730: lhu         $a0, 0x16($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X16);
    // 0x80226734: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80226738: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x8022673C: sra         $a3, $a2, 17
    ctx->r7 = S32(SIGNED(ctx->r6) >> 17);
    // 0x80226740: lhu         $v0, 0x10($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X10);
    // 0x80226744: addu        $v1, $v1, $a3
    ctx->r3 = ADD32(ctx->r3, ctx->r7);
    // 0x80226748: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022674C: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x80226750: andi        $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 & 0XFFFF;
    // 0x80226754: slt         $v1, $v1, $a2
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x80226758: subu        $a1, $a1, $v0
    ctx->r5 = SUB32(ctx->r5, ctx->r2);
    // 0x8022675C: sra         $v0, $a0, 17
    ctx->r2 = S32(SIGNED(ctx->r4) >> 17);
    // 0x80226760: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x80226764: beq         $v1, $zero, L_80226794
    if (ctx->r3 == 0) {
        // 0x80226768: sra         $a0, $a0, 16
        ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
            goto L_80226794;
    }
    // 0x80226768: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8022676C: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x80226770: slt         $v0, $v0, $a0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80226774: beq         $v0, $zero, L_80226794
    if (ctx->r2 == 0) {
        // 0x80226778: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80226794;
    }
    // 0x80226778: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022677C: jal         0x80227AB8
    // 0x80226780: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80227AB8_ovl30(rdram, ctx);
        goto after_5;
    // 0x80226780: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x80226784: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80226788: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022678C: j           L_802267C0
    // 0x80226790: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_802267C0;
    // 0x80226790: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_80226794:
    // 0x80226794: j           L_802267C0
    // 0x80226798: addiu       $s1, $zero, 0xFF
    ctx->r17 = ADD32(0, 0XFF);
        goto L_802267C0;
    // 0x80226798: addiu       $s1, $zero, 0xFF
    ctx->r17 = ADD32(0, 0XFF);
L_8022679C:
    // 0x8022679C: jal         0x800A3450
    // 0x802267A0: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_6;
    // 0x802267A0: nop

    after_6:
    // 0x802267A4: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x802267A8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x802267AC: jal         0x80227A78
    // 0x802267B0: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    func_80227A78_ovl30(rdram, ctx);
        goto after_7;
    // 0x802267B0: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    after_7:
    // 0x802267B4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802267B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802267BC: sh          $v0, 0x1E($s2)
    MEM_H(0X1E, ctx->r18) = ctx->r2;
L_802267C0:
    // 0x802267C0: jal         0x800A3450
    // 0x802267C4: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_8;
    // 0x802267C4: nop

    after_8:
    // 0x802267C8: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x802267CC: addu        $v0, $s4, $v0
    ctx->r2 = ADD32(ctx->r20, ctx->r2);
    // 0x802267D0: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x802267D4: andi        $v1, $s1, 0xFF
    ctx->r3 = ctx->r17 & 0XFF;
    // 0x802267D8: sh          $v0, 0x8($s2)
    MEM_H(0X8, ctx->r18) = ctx->r2;
    // 0x802267DC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802267E0: beq         $v1, $v0, L_802267F8
    if (ctx->r3 == ctx->r2) {
        // 0x802267E4: nop
    
            goto L_802267F8;
    }
    // 0x802267E4: nop

    // 0x802267E8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802267EC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802267F0: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x802267F4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802267F8:
    // 0x802267F8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802267FC: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x80226800: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80226804: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80226808: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022680C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226810: jr          $ra
    // 0x80226814: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80226814: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80225DA4_ovl30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225DA4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80225DA8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225DAC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225DB0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80225DB4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80225DB8: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x80225DBC: bgez        $v0, L_80225DE0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80225DC0: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_80225DE0;
    }
    // 0x80225DC0: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x80225DC4: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80225DC8: addiu       $v0, $zero, 0x49
    ctx->r2 = ADD32(0, 0X49);
    // 0x80225DCC: beq         $a0, $v0, L_80225DE0
    if (ctx->r4 == ctx->r2) {
        // 0x80225DD0: nop
    
            goto L_80225DE0;
    }
    // 0x80225DD0: nop

    // 0x80225DD4: jal         0x80227A68
    // 0x80225DD8: nop

    func_80227A68_ovl30(rdram, ctx);
        goto after_0;
    // 0x80225DD8: nop

    after_0:
    // 0x80225DDC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_80225DE0:
    // 0x80225DE0: lhu         $v0, 0x8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8);
    // 0x80225DE4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80225DE8: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
    // 0x80225DEC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80225DF0: bne         $v0, $zero, L_80225E5C
    if (ctx->r2 != 0) {
        // 0x80225DF4: addiu       $v0, $zero, 0x49
        ctx->r2 = ADD32(0, 0X49);
            goto L_80225E5C;
    }
    // 0x80225DF4: addiu       $v0, $zero, 0x49
    ctx->r2 = ADD32(0, 0X49);
    // 0x80225DF8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80225DFC: bne         $a0, $v0, L_80225E14
    if (ctx->r4 != ctx->r2) {
        // 0x80225E00: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_80225E14;
    }
    // 0x80225E00: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x80225E04: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80225E08: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80225E0C: j           L_80225E2C
    // 0x80225E10: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_80225E2C;
    // 0x80225E10: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80225E14:
    // 0x80225E14: jal         0x80227A78
    // 0x80225E18: nop

    func_80227A78_ovl30(rdram, ctx);
        goto after_1;
    // 0x80225E18: nop

    after_1:
    // 0x80225E1C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80225E20: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80225E24: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80225E28: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_80225E2C:
    // 0x80225E2C: lh          $v0, 0x14($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X14);
    // 0x80225E30: beq         $v0, $zero, L_80225E44
    if (ctx->r2 == 0) {
        // 0x80225E34: nop
    
            goto L_80225E44;
    }
    // 0x80225E34: nop

    // 0x80225E38: lhu         $v0, 0xA($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XA);
    // 0x80225E3C: j           L_80225E54
    // 0x80225E40: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
        goto L_80225E54;
    // 0x80225E40: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
L_80225E44:
    // 0x80225E44: lhu         $v0, 0xA($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XA);
    // 0x80225E48: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x80225E4C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80225E50: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
L_80225E54:
    // 0x80225E54: lhu         $v0, 0x1E($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X1E);
    // 0x80225E58: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
L_80225E5C:
    // 0x80225E5C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80225E60: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80225E64: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225E68: jr          $ra
    // 0x80225E6C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80225E6C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80225D4C_ovl30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225D4C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225D50: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225D54: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225D58: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225D5C: lhu         $v0, 0x350($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X350);
    // 0x80225D60: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80225D64: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x80225D68: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80225D6C: bne         $v0, $zero, L_80225D94
    if (ctx->r2 != 0) {
        // 0x80225D70: nop
    
            goto L_80225D94;
    }
    // 0x80225D70: nop

    // 0x80225D74: jal         0x802279D0
    // 0x80225D78: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_802279D0_ovl30(rdram, ctx);
        goto after_0;
    // 0x80225D78: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_0:
    // 0x80225D7C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80225D80: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80225D84: addiu       $v0, $zero, 0x46
    ctx->r2 = ADD32(0, 0X46);
    // 0x80225D88: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x80225D8C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80225D90: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_80225D94:
    // 0x80225D94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225D98: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225D9C: jr          $ra
    // 0x80225DA0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225DA0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802258D8_ovl30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802258D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802258DC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802258E0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802258E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802258E8: lhu         $v0, 0x350($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X350);
    // 0x802258EC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802258F0: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x802258F4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802258F8: bne         $v0, $zero, L_8022592C
    if (ctx->r2 != 0) {
        // 0x802258FC: addiu       $v0, $zero, 0x49
        ctx->r2 = ADD32(0, 0X49);
            goto L_8022592C;
    }
    // 0x802258FC: addiu       $v0, $zero, 0x49
    ctx->r2 = ADD32(0, 0X49);
    // 0x80225900: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x80225904: bne         $v1, $v0, L_80225910
    if (ctx->r3 != ctx->r2) {
        // 0x80225908: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80225910;
    }
    // 0x80225908: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022590C: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
L_80225910:
    // 0x80225910: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x80225914: jal         0x802279D0
    // 0x80225918: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_802279D0_ovl30(rdram, ctx);
        goto after_0;
    // 0x80225918: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_0:
    // 0x8022591C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80225920: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80225924: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80225928: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_8022592C:
    // 0x8022592C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225930: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225934: jr          $ra
    // 0x80225938: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225938: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227068_ovl30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227068: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022706C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227070: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227074: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80227078: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022707C: lh          $a0, 0x34C($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X34C);
    // 0x80227080: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x80227084: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    // 0x80227088: jal         0x8004FA7C
    // 0x8022708C: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x8022708C: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    after_0:
    // 0x80227090: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80227094: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x80227098: beq         $v0, $zero, L_8022712C
    if (ctx->r2 == 0) {
        // 0x8022709C: nop
    
            goto L_8022712C;
    }
    // 0x8022709C: nop

    // 0x802270A0: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x802270A4: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x802270A8: bne         $v0, $zero, L_8022712C
    if (ctx->r2 != 0) {
        // 0x802270AC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022712C;
    }
    // 0x802270AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802270B0: lbu         $v1, 0x34A($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34A);
    // 0x802270B4: beq         $v1, $v0, L_802270CC
    if (ctx->r3 == ctx->r2) {
        // 0x802270B8: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_802270CC;
    }
    // 0x802270B8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802270BC: beq         $v1, $v0, L_802270FC
    if (ctx->r3 == ctx->r2) {
        // 0x802270C0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_802270FC;
    }
    // 0x802270C0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x802270C4: j           L_80227120
    // 0x802270C8: nop

        goto L_80227120;
    // 0x802270C8: nop

L_802270CC:
    // 0x802270CC: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x802270D0: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x802270D4: bne         $v0, $zero, L_80227120
    if (ctx->r2 != 0) {
        // 0x802270D8: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80227120;
    }
    // 0x802270D8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x802270DC: slti        $v0, $v1, 0x6
    ctx->r2 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    // 0x802270E0: bne         $v0, $zero, L_80227120
    if (ctx->r2 != 0) {
        // 0x802270E4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80227120;
    }
    // 0x802270E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802270E8: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x802270EC: bne         $v1, $v0, L_80227120
    if (ctx->r3 != ctx->r2) {
        // 0x802270F0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80227120;
    }
    // 0x802270F0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x802270F4: j           L_80227120
    // 0x802270F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80227120;
    // 0x802270F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802270FC:
    // 0x802270FC: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80227100: slti        $v0, $v1, 0x6
    ctx->r2 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    // 0x80227104: beq         $v0, $zero, L_8022711C
    if (ctx->r2 == 0) {
        // 0x80227108: slti        $v0, $v1, 0x4
        ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
            goto L_8022711C;
    }
    // 0x80227108: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x8022710C: bne         $v0, $zero, L_80227120
    if (ctx->r2 != 0) {
        // 0x80227110: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80227120;
    }
    // 0x80227110: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80227114: j           L_80227120
    // 0x80227118: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80227120;
    // 0x80227118: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022711C:
    // 0x8022711C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80227120:
    // 0x80227120: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80227124: beq         $v0, $zero, L_80227150
    if (ctx->r2 == 0) {
        // 0x80227128: nop
    
            goto L_80227150;
    }
    // 0x80227128: nop

L_8022712C:
    // 0x8022712C: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x80227130: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80227134: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80227138: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022713C: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x80227140: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80227144: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x80227148: j           L_80227160
    // 0x8022714C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80227160;
    // 0x8022714C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80227150:
    // 0x80227150: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80227154: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80227158: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022715C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_80227160:
    // 0x80227160: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80227164: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227168: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022716C: jr          $ra
    // 0x80227170: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80227170: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022583C_ovl30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022583C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225840: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80225844: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80225848: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022584C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80225850: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80225854: lw          $v0, -0x70A4($at)
    ctx->r2 = MEM_W(ctx->r1, -0X70A4);
    // 0x80225858: jalr        $v0
    // 0x8022585C: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022585C: nop

    after_0:
    // 0x80225860: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80225864: jr          $ra
    // 0x80225868: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225868: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227A78_ovl30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227A78: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    // 0x80227A7C: addiu       $v0, $zero, 0x39
    ctx->r2 = ADD32(0, 0X39);
    // 0x80227A80: beq         $a0, $v0, L_80227AA4
    if (ctx->r4 == ctx->r2) {
        // 0x80227A84: slti        $v0, $a0, 0x39
        ctx->r2 = SIGNED(ctx->r4) < 0X39 ? 1 : 0;
            goto L_80227AA4;
    }
    // 0x80227A84: slti        $v0, $a0, 0x39
    ctx->r2 = SIGNED(ctx->r4) < 0X39 ? 1 : 0;
    // 0x80227A88: bne         $v0, $zero, L_80227AB0
    if (ctx->r2 != 0) {
        // 0x80227A8C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80227AB0;
    }
    // 0x80227A8C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227A90: slti        $v0, $a0, 0x4E
    ctx->r2 = SIGNED(ctx->r4) < 0X4E ? 1 : 0;
    // 0x80227A94: beq         $v0, $zero, L_80227AAC
    if (ctx->r2 == 0) {
        // 0x80227A98: slti        $v0, $a0, 0x4C
        ctx->r2 = SIGNED(ctx->r4) < 0X4C ? 1 : 0;
            goto L_80227AAC;
    }
    // 0x80227A98: slti        $v0, $a0, 0x4C
    ctx->r2 = SIGNED(ctx->r4) < 0X4C ? 1 : 0;
    // 0x80227A9C: bne         $v0, $zero, L_80227AB0
    if (ctx->r2 != 0) {
        // 0x80227AA0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80227AB0;
    }
    // 0x80227AA0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80227AA4:
    // 0x80227AA4: j           L_80227AB0
    // 0x80227AA8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_80227AB0;
    // 0x80227AA8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80227AAC:
    // 0x80227AAC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80227AB0:
    // 0x80227AB0: jr          $ra
    // 0x80227AB4: nop

    TRACE_RETURN()
    return;
    // 0x80227AB4: nop

;}
RECOMP_FUNC void func_8022763C_ovl30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022763C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80227640: lb          $v1, -0x3C18($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3C18);
    // 0x80227644: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227648: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022764C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227650: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80227654: bne         $v1, $v0, L_8022767C
    if (ctx->r3 != ctx->r2) {
        // 0x80227658: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8022767C;
    }
    // 0x80227658: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022765C: jal         0x80061724
    // 0x80227660: nop

    func_80061724_3CB24(rdram, ctx);
        goto after_0;
    // 0x80227660: nop

    after_0:
    // 0x80227664: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80227668: jal         0x800616FC
    // 0x8022766C: addiu       $a1, $zero, 0xDC
    ctx->r5 = ADD32(0, 0XDC);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_1;
    // 0x8022766C: addiu       $a1, $zero, 0xDC
    ctx->r5 = ADD32(0, 0XDC);
    after_1:
    // 0x80227670: lbu         $v0, 0x34B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X34B);
    // 0x80227674: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80227678: sb          $v0, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r2;
L_8022767C:
    // 0x8022767C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227680: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227684: jr          $ra
    // 0x80227688: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227688: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227864_ovl30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227864: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227868: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022786C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227870: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227874: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80227878: lh          $a3, 0x34E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X34E);
    // 0x8022787C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80227880: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x80227884: jal         0x8004F820
    // 0x80227888: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x80227888: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x8022788C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80227890: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80227894: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80227898: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022789C: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x802278A0: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x802278A4: bne         $v0, $zero, L_802278C8
    if (ctx->r2 != 0) {
        // 0x802278A8: addiu       $v1, $zero, 0x9
        ctx->r3 = ADD32(0, 0X9);
            goto L_802278C8;
    }
    // 0x802278A8: addiu       $v1, $zero, 0x9
    ctx->r3 = ADD32(0, 0X9);
    // 0x802278AC: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x802278B0: lbu         $a0, 0x34B($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X34B);
    // 0x802278B4: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x802278B8: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x802278BC: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x802278C0: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    // 0x802278C4: sb          $a0, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r4;
L_802278C8:
    // 0x802278C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802278CC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802278D0: jr          $ra
    // 0x802278D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802278D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226C2C_ovl30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226C2C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80226C30: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226C34: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226C38: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80226C3C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80226C40: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80226C44: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80226C48: addiu       $a1, $a1, 0x49B0
    ctx->r5 = ADD32(ctx->r5, 0X49B0);
    // 0x80226C4C: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x80226C50: bne         $v0, $zero, L_80226CAC
    if (ctx->r2 != 0) {
        // 0x80226C54: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_80226CAC;
    }
    // 0x80226C54: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x80226C58: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80226C5C: lh          $a3, 0x34E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X34E);
    // 0x80226C60: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80226C64: jal         0x8004F820
    // 0x80226C68: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x80226C68: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_0:
    // 0x80226C6C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80226C70: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80226C74: lw          $a0, 0x3FF0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3FF0);
    // 0x80226C78: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80226C7C: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80226C80: lui         $v0, 0x20
    ctx->r2 = S32(0X20 << 16);
    // 0x80226C84: and         $a0, $a0, $v0
    ctx->r4 = ctx->r4 & ctx->r2;
    // 0x80226C88: beq         $a0, $zero, L_80226CAC
    if (ctx->r4 == 0) {
        // 0x80226C8C: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_80226CAC;
    }
    // 0x80226C8C: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x80226C90: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80226C94: jal         0x802279D0
    // 0x80226C98: nop

    func_802279D0_ovl30(rdram, ctx);
        goto after_1;
    // 0x80226C98: nop

    after_1:
    // 0x80226C9C: lbu         $v1, 0x34B($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34B);
    // 0x80226CA0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80226CA4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80226CA8: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
L_80226CAC:
    // 0x80226CAC: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80226CB0: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x80226CB4: bne         $v0, $zero, L_80226CD8
    if (ctx->r2 != 0) {
        // 0x80226CB8: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_80226CD8;
    }
    // 0x80226CB8: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x80226CBC: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80226CC0: sb          $v1, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r3;
    // 0x80226CC4: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x80226CC8: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x80226CCC: jal         0x80227A68
    // 0x80226CD0: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_80227A68_ovl30(rdram, ctx);
        goto after_2;
    // 0x80226CD0: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_2:
    // 0x80226CD4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_80226CD8:
    // 0x80226CD8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80226CDC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80226CE0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226CE4: jr          $ra
    // 0x80226CE8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80226CE8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80227D3C_ovl30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227D3C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80227D40: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80227D44: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80227D48: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x80227D4C: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80227D50: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80227D54: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80227D58: lbu         $v1, 0xA($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA);
    // 0x80227D5C: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x80227D60: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x80227D64: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x80227D68: beq         $v0, $zero, L_80227FC4
    if (ctx->r2 == 0) {
        // 0x80227D6C: addu        $s3, $zero, $zero
        ctx->r19 = ADD32(0, 0);
            goto L_80227FC4;
    }
    // 0x80227D6C: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x80227D70: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80227D74: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227D78: addu        $at, $at, $v0
    gpr jr_addend_80227D80 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80227D7C: lw          $v0, -0x6E00($at)
    ctx->r2 = ADD32(ctx->r1, -0X6E00);
    // 0x80227D80: jr          $v0
    // 0x80227D84: nop

    switch (jr_addend_80227D80 >> 2) {
        case 0: goto L_80227D88; break;
        case 1: goto L_80227DC4; break;
        case 2: goto L_80227E38; break;
        case 3: goto L_80227E70; break;
        case 4: goto L_80227EF8; break;
        case 5: goto L_80227F84; break;
        default: switch_error(__func__, 0x80227D80, 0x80229200);
    }
    // 0x80227D84: nop

L_80227D88:
    // 0x80227D88: lh          $v0, 0x14($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X14);
    // 0x80227D8C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80227D90: lh          $v0, 0x16($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X16);
    // 0x80227D94: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80227D98: addiu       $a1, $zero, 0xD4
    ctx->r5 = ADD32(0, 0XD4);
    // 0x80227D9C: addiu       $v0, $v0, -0x92
    ctx->r2 = ADD32(ctx->r2, -0X92);
    // 0x80227DA0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80227DA4: lh          $v0, 0x18($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X18);
    // 0x80227DA8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80227DAC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80227DB0: jal         0x80034FCC
    // 0x80227DB4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80034FCC_103CC(rdram, ctx);
        goto after_0;
    // 0x80227DB4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_0:
    // 0x80227DB8: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x80227DBC: j           L_80227F70
    // 0x80227DC0: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
        goto L_80227F70;
    // 0x80227DC0: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
L_80227DC4:
    // 0x80227DC4: jal         0x8003516C
    // 0x80227DC8: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_1;
    // 0x80227DC8: nop

    after_1:
    // 0x80227DCC: bne         $v0, $zero, L_80227FC8
    if (ctx->r2 != 0) {
        // 0x80227DD0: andi        $v0, $s3, 0xFF
        ctx->r2 = ctx->r19 & 0XFF;
            goto L_80227FC8;
    }
    // 0x80227DD0: andi        $v0, $s3, 0xFF
    ctx->r2 = ctx->r19 & 0XFF;
    // 0x80227DD4: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_80227DD8:
    // 0x80227DD8: jal         0x8006033C
    // 0x80227DDC: addiu       $a0, $s0, 0x54B
    ctx->r4 = ADD32(ctx->r16, 0X54B);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x80227DDC: addiu       $a0, $s0, 0x54B
    ctx->r4 = ADD32(ctx->r16, 0X54B);
    after_2:
    // 0x80227DE0: bne         $v0, $zero, L_80227DF8
    if (ctx->r2 != 0) {
        // 0x80227DE4: addu        $v0, $s0, $zero
        ctx->r2 = ADD32(ctx->r16, 0);
            goto L_80227DF8;
    }
    // 0x80227DE4: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x80227DE8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80227DEC: slti        $v0, $s0, 0x8
    ctx->r2 = SIGNED(ctx->r16) < 0X8 ? 1 : 0;
    // 0x80227DF0: bne         $v0, $zero, L_80227DD8
    if (ctx->r2 != 0) {
        // 0x80227DF4: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_80227DD8;
    }
    // 0x80227DF4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_80227DF8:
    // 0x80227DF8: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x80227DFC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80227E00: bnel        $v1, $v0, L_80227E1C
    if (ctx->r3 != ctx->r2) {
        // 0x80227E04: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80227E1C;
    }
    goto skip_0;
    // 0x80227E04: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    skip_0:
    // 0x80227E08: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227E0C: sb          $v0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r2;
    // 0x80227E10: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80227E14: j           L_80227FC4
    // 0x80227E18: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
        goto L_80227FC4;
    // 0x80227E18: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_80227E1C:
    // 0x80227E1C: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x80227E20: jal         0x80050294
    // 0x80227E24: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_3;
    // 0x80227E24: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
    // 0x80227E28: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80227E2C: addiu       $v1, $zero, 0x1E
    ctx->r3 = ADD32(0, 0X1E);
    // 0x80227E30: j           L_80227F78
    // 0x80227E34: sb          $v1, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r3;
        goto L_80227F78;
    // 0x80227E34: sb          $v1, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r3;
L_80227E38:
    // 0x80227E38: lbu         $v0, 0xC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XC);
    // 0x80227E3C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80227E40: sb          $v0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r2;
    // 0x80227E44: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80227E48: bne         $v0, $zero, L_80227FC8
    if (ctx->r2 != 0) {
        // 0x80227E4C: andi        $v0, $s3, 0xFF
        ctx->r2 = ctx->r19 & 0XFF;
            goto L_80227FC8;
    }
    // 0x80227E4C: andi        $v0, $s3, 0xFF
    ctx->r2 = ctx->r19 & 0XFF;
    // 0x80227E50: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80227E54: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x80227E58: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80227E5C: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x80227E60: jal         0x80050294
    // 0x80227E64: sb          $v0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_4;
    // 0x80227E64: sb          $v0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r2;
    after_4:
    // 0x80227E68: j           L_80227F74
    // 0x80227E6C: nop

        goto L_80227F74;
    // 0x80227E6C: nop

L_80227E70:
    // 0x80227E70: lbu         $v0, 0xC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XC);
    // 0x80227E74: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80227E78: sb          $v0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r2;
    // 0x80227E7C: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80227E80: bne         $v0, $zero, L_80227FC8
    if (ctx->r2 != 0) {
        // 0x80227E84: andi        $v0, $s3, 0xFF
        ctx->r2 = ctx->r19 & 0XFF;
            goto L_80227FC8;
    }
    // 0x80227E84: andi        $v0, $s3, 0xFF
    ctx->r2 = ctx->r19 & 0XFF;
    // 0x80227E88: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80227E8C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x80227E90: jal         0x80050294
    // 0x80227E94: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_5;
    // 0x80227E94: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
    // 0x80227E98: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_80227E9C:
    // 0x80227E9C: jal         0x8006033C
    // 0x80227EA0: addiu       $a0, $s0, 0x54B
    ctx->r4 = ADD32(ctx->r16, 0X54B);
    func_8006033C_3B73C(rdram, ctx);
        goto after_6;
    // 0x80227EA0: addiu       $a0, $s0, 0x54B
    ctx->r4 = ADD32(ctx->r16, 0X54B);
    after_6:
    // 0x80227EA4: bne         $v0, $zero, L_80227EBC
    if (ctx->r2 != 0) {
        // 0x80227EA8: addu        $v0, $s0, $zero
        ctx->r2 = ADD32(ctx->r16, 0);
            goto L_80227EBC;
    }
    // 0x80227EA8: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x80227EAC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80227EB0: slti        $v0, $s0, 0x8
    ctx->r2 = SIGNED(ctx->r16) < 0X8 ? 1 : 0;
    // 0x80227EB4: bne         $v0, $zero, L_80227E9C
    if (ctx->r2 != 0) {
        // 0x80227EB8: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_80227E9C;
    }
    // 0x80227EB8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_80227EBC:
    // 0x80227EBC: andi        $s0, $v0, 0xFF
    ctx->r16 = ctx->r2 & 0XFF;
    // 0x80227EC0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80227EC4: bne         $s0, $v0, L_80227EDC
    if (ctx->r16 != ctx->r2) {
        // 0x80227EC8: addiu       $a0, $s1, 0x14
        ctx->r4 = ADD32(ctx->r17, 0X14);
            goto L_80227EDC;
    }
    // 0x80227EC8: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x80227ECC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80227ED0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80227ED4: j           L_80227EE8
    // 0x80227ED8: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
        goto L_80227EE8;
    // 0x80227ED8: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
L_80227EDC:
    // 0x80227EDC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80227EE0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80227EE4: addiu       $a3, $s0, 0x3
    ctx->r7 = ADD32(ctx->r16, 0X3);
L_80227EE8:
    // 0x80227EE8: jal         0x800610AC
    // 0x80227EEC: nop

    func_800610AC_3C4AC(rdram, ctx);
        goto after_7;
    // 0x80227EEC: nop

    after_7:
    // 0x80227EF0: j           L_80227F74
    // 0x80227EF4: nop

        goto L_80227F74;
    // 0x80227EF4: nop

L_80227EF8:
    // 0x80227EF8: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80227EFC: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x80227F00: bne         $v0, $zero, L_80227FC8
    if (ctx->r2 != 0) {
        // 0x80227F04: andi        $v0, $s3, 0xFF
        ctx->r2 = ctx->r19 & 0XFF;
            goto L_80227FC8;
    }
    // 0x80227F04: andi        $v0, $s3, 0xFF
    ctx->r2 = ctx->r19 & 0XFF;
    // 0x80227F08: jal         0x80034E3C
    // 0x80227F0C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    func_80034E3C_1023C(rdram, ctx);
        goto after_8;
    // 0x80227F0C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    after_8:
L_80227F10:
    // 0x80227F10: jal         0x8006033C
    // 0x80227F14: addiu       $a0, $s0, 0x54B
    ctx->r4 = ADD32(ctx->r16, 0X54B);
    func_8006033C_3B73C(rdram, ctx);
        goto after_9;
    // 0x80227F14: addiu       $a0, $s0, 0x54B
    ctx->r4 = ADD32(ctx->r16, 0X54B);
    after_9:
    // 0x80227F18: bne         $v0, $zero, L_80227F30
    if (ctx->r2 != 0) {
        // 0x80227F1C: addu        $v0, $s0, $zero
        ctx->r2 = ADD32(ctx->r16, 0);
            goto L_80227F30;
    }
    // 0x80227F1C: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x80227F20: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80227F24: slti        $v0, $s0, 0x8
    ctx->r2 = SIGNED(ctx->r16) < 0X8 ? 1 : 0;
    // 0x80227F28: bne         $v0, $zero, L_80227F10
    if (ctx->r2 != 0) {
        // 0x80227F2C: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_80227F10;
    }
    // 0x80227F2C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_80227F30:
    // 0x80227F30: andi        $s0, $v0, 0xFF
    ctx->r16 = ctx->r2 & 0XFF;
    // 0x80227F34: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80227F38: beq         $s0, $v0, L_80227F68
    if (ctx->r16 == ctx->r2) {
        // 0x80227F3C: nop
    
            goto L_80227F68;
    }
    // 0x80227F3C: nop

    // 0x80227F40: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80227F44: lbu         $v0, 0x3FF3($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3FF3);
    // 0x80227F48: bne         $v0, $zero, L_80227F68
    if (ctx->r2 != 0) {
        // 0x80227F4C: nop
    
            goto L_80227F68;
    }
    // 0x80227F4C: nop

    // 0x80227F50: jal         0x8006036C
    // 0x80227F54: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    func_8006036C_3B76C(rdram, ctx);
        goto after_10;
    // 0x80227F54: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    after_10:
    // 0x80227F58: jal         0x80060590
    // 0x80227F5C: addiu       $a0, $s0, 0x54B
    ctx->r4 = ADD32(ctx->r16, 0X54B);
    func_80060590_3B990(rdram, ctx);
        goto after_11;
    // 0x80227F5C: addiu       $a0, $s0, 0x54B
    ctx->r4 = ADD32(ctx->r16, 0X54B);
    after_11:
    // 0x80227F60: jal         0x80060D38
    // 0x80227F64: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    func_80060D38_3C138(rdram, ctx);
        goto after_12;
    // 0x80227F64: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    after_12:
L_80227F68:
    // 0x80227F68: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x80227F6C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
L_80227F70:
    // 0x80227F70: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
L_80227F74:
    // 0x80227F74: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
L_80227F78:
    // 0x80227F78: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227F7C: j           L_80227FC4
    // 0x80227F80: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
        goto L_80227FC4;
    // 0x80227F80: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_80227F84:
    // 0x80227F84: jal         0x8003516C
    // 0x80227F88: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_13;
    // 0x80227F88: nop

    after_13:
    // 0x80227F8C: bne         $v0, $zero, L_80227FC8
    if (ctx->r2 != 0) {
        // 0x80227F90: andi        $v0, $s3, 0xFF
        ctx->r2 = ctx->r19 & 0XFF;
            goto L_80227FC8;
    }
    // 0x80227F90: andi        $v0, $s3, 0xFF
    ctx->r2 = ctx->r19 & 0XFF;
    // 0x80227F94: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80227F98: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80227F9C: lbu         $v0, 0xBD($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XBD);
    // 0x80227FA0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80227FA4: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x80227FA8: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x80227FAC: jal         0x80050294
    // 0x80227FB0: sb          $v0, 0xBD($s2)
    MEM_B(0XBD, ctx->r18) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_14;
    // 0x80227FB0: sb          $v0, 0xBD($s2)
    MEM_B(0XBD, ctx->r18) = ctx->r2;
    after_14:
    // 0x80227FB4: jal         0x8006036C
    // 0x80227FB8: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    func_8006036C_3B76C(rdram, ctx);
        goto after_15;
    // 0x80227FB8: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    after_15:
    // 0x80227FBC: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
    // 0x80227FC0: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
L_80227FC4:
    // 0x80227FC4: andi        $v0, $s3, 0xFF
    ctx->r2 = ctx->r19 & 0XFF;
L_80227FC8:
    // 0x80227FC8: bne         $v0, $zero, L_80227FD8
    if (ctx->r2 != 0) {
        // 0x80227FCC: nop
    
            goto L_80227FD8;
    }
    // 0x80227FCC: nop

    // 0x80227FD0: jal         0x8005044C
    // 0x80227FD4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_16;
    // 0x80227FD4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_16:
L_80227FD8:
    // 0x80227FD8: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x80227FDC: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80227FE0: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80227FE4: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80227FE8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80227FEC: jr          $ra
    // 0x80227FF0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80227FF0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80227750_ovl30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227750: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227754: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80227758: lbu         $v0, 0x34B($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X34B);
    // 0x8022775C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80227760: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227764: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80227768: lw          $v0, -0x6EA8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X6EA8);
    // 0x8022776C: jalr        $v0
    // 0x80227770: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80227770: nop

    after_0:
    // 0x80227774: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80227778: jr          $ra
    // 0x8022777C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022777C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802251BC_ovl30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802251BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802251C0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802251C4: lui         $s0, 0x801C
    ctx->r16 = S32(0X801C << 16);
    // 0x802251C8: addiu       $s0, $s0, -0x3BC7
    ctx->r16 = ADD32(ctx->r16, -0X3BC7);
    // 0x802251CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802251D0: lb          $t0, 0x0($s0)
    ctx->r8 = MEM_B(ctx->r16, 0X0);
    // 0x802251D4: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x802251D8: lb          $a1, 0x47CD($a1)
    ctx->r5 = MEM_B(ctx->r5, 0X47CD);
    // 0x802251DC: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x802251E0: addiu       $a2, $a2, 0xCB4
    ctx->r6 = ADD32(ctx->r6, 0XCB4);
    // 0x802251E4: sll         $v0, $t0, 3
    ctx->r2 = S32(ctx->r8 << 3);
    // 0x802251E8: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x802251EC: lbu         $v1, 0x2($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X2);
    // 0x802251F0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802251F4: sh          $v1, 0x49AE($at)
    MEM_H(0X49AE, ctx->r1) = ctx->r3;
    // 0x802251F8: lbu         $a3, 0x3($v0)
    ctx->r7 = MEM_BU(ctx->r2, 0X3);
    // 0x802251FC: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x80225200: sh          $a3, -0x7386($at)
    MEM_H(-0X7386, ctx->r1) = ctx->r7;
    // 0x80225204: lbu         $t1, 0x0($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X0);
    // 0x80225208: lui         $t2, 0x7FE9
    ctx->r10 = S32(0X7FE9 << 16);
    // 0x8022520C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225210: sb          $t1, 0x6B40($at)
    MEM_B(0X6B40, ctx->r1) = ctx->r9;
    // 0x80225214: lbu         $t3, 0x1($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X1);
    // 0x80225218: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x8022521C: ori         $t2, $t2, 0xC000
    ctx->r10 = ctx->r10 | 0XC000;
    // 0x80225220: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80225224: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225228: sb          $zero, 0x4DFE($at)
    MEM_B(0X4DFE, ctx->r1) = 0;
    // 0x8022522C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80225230: addu        $a0, $a0, $t0
    ctx->r4 = ADD32(ctx->r4, ctx->r8);
    // 0x80225234: lw          $a0, -0x7A10($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X7A10);
    // 0x80225238: addiu       $a2, $a2, -0x4
    ctx->r6 = ADD32(ctx->r6, -0X4);
    // 0x8022523C: addu        $v1, $v1, $t1
    ctx->r3 = ADD32(ctx->r3, ctx->r9);
    // 0x80225240: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80225244: sb          $v1, -0x35BC($at)
    MEM_B(-0X35BC, ctx->r1) = ctx->r3;
    // 0x80225248: addu        $v0, $v0, $t2
    ctx->r2 = ADD32(ctx->r2, ctx->r10);
    // 0x8022524C: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
    // 0x80225250: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80225254: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80225258: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8022525C: sw          $v0, -0x35C0($at)
    MEM_W(-0X35C0, ctx->r1) = ctx->r2;
    // 0x80225260: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80225264: addiu       $v0, $v0, 0x5080
    ctx->r2 = ADD32(ctx->r2, 0X5080);
    // 0x80225268: addu        $a3, $a3, $t3
    ctx->r7 = ADD32(ctx->r7, ctx->r11);
    // 0x8022526C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80225270: sw          $v0, 0xB5C($at)
    MEM_W(0XB5C, ctx->r1) = ctx->r2;
    // 0x80225274: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80225278: sb          $t3, -0x39A6($at)
    MEM_B(-0X39A6, ctx->r1) = ctx->r11;
    // 0x8022527C: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x80225280: sb          $a3, 0x53D4($at)
    MEM_B(0X53D4, ctx->r1) = ctx->r7;
    // 0x80225284: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225288: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x8022528C: lw          $v0, -0x7990($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7990);
    // 0x80225290: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225294: jal         0x8004C790
    // 0x80225298: sw          $v0, 0x6B44($at)
    MEM_W(0X6B44, ctx->r1) = ctx->r2;
    func_8004C790_27B90(rdram, ctx);
        goto after_0;
    // 0x80225298: sw          $v0, 0x6B44($at)
    MEM_W(0X6B44, ctx->r1) = ctx->r2;
    after_0:
    // 0x8022529C: lb          $v0, 0x0($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X0);
    // 0x802252A0: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802252A4: addiu       $a0, $a0, -0x7970
    ctx->r4 = ADD32(ctx->r4, -0X7970);
    // 0x802252A8: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x802252AC: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802252B0: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x802252B4: lw          $v1, -0x78F0($at)
    ctx->r3 = MEM_W(ctx->r1, -0X78F0);
    // 0x802252B8: sll         $a1, $v0, 1
    ctx->r5 = S32(ctx->r2 << 1);
    // 0x802252BC: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x802252C0: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x802252C4: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802252C8: addiu       $v0, $v0, -0x7988
    ctx->r2 = ADD32(ctx->r2, -0X7988);
    // 0x802252CC: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x802252D0: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x802252D4: jal         0x80054FB8
    // 0x802252D8: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    func_80054FB8_303B8(rdram, ctx);
        goto after_1;
    // 0x802252D8: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    after_1:
    // 0x802252DC: jal         0x8004A614
    // 0x802252E0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_8004A614_25A14(rdram, ctx);
        goto after_2;
    // 0x802252E0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_2:
    // 0x802252E4: jal         0x80225300
    // 0x802252E8: nop

    func_80225300_ovl30(rdram, ctx);
        goto after_3;
    // 0x802252E8: nop

    after_3:
    // 0x802252EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802252F0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802252F4: jr          $ra
    // 0x802252F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802252F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802252FC: nop

;}
RECOMP_FUNC void func_80226500_ovl30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226500: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226504: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226508: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022650C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226510: lhu         $v0, 0x350($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X350);
    // 0x80226514: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80226518: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x8022651C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80226520: bne         $v0, $zero, L_80226574
    if (ctx->r2 != 0) {
        // 0x80226524: addiu       $a1, $zero, 0x40
        ctx->r5 = ADD32(0, 0X40);
            goto L_80226574;
    }
    // 0x80226524: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x80226528: jal         0x80227B04
    // 0x8022652C: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_80227B04_ovl30(rdram, ctx);
        goto after_0;
    // 0x8022652C: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_0:
    // 0x80226530: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80226534: beq         $v0, $zero, L_80226570
    if (ctx->r2 == 0) {
        // 0x80226538: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80226570;
    }
    // 0x80226538: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022653C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80226540: jal         0x80227A78
    // 0x80226544: nop

    func_80227A78_ovl30(rdram, ctx);
        goto after_1;
    // 0x80226544: nop

    after_1:
    // 0x80226548: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022654C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80226550: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x80226554: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x80226558: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022655C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80226560: addiu       $v1, $v1, 0x800
    ctx->r3 = ADD32(ctx->r3, 0X800);
    // 0x80226564: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80226568: j           L_80226574
    // 0x8022656C: sh          $v1, 0x364($s0)
    MEM_H(0X364, ctx->r16) = ctx->r3;
        goto L_80226574;
    // 0x8022656C: sh          $v1, 0x364($s0)
    MEM_H(0X364, ctx->r16) = ctx->r3;
L_80226570:
    // 0x80226570: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80226574:
    // 0x80226574: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226578: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022657C: jr          $ra
    // 0x80226580: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226580: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227A68_ovl30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227A68: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
    // 0x80227A6C: xori        $v0, $v0, 0x11
    ctx->r2 = ctx->r2 ^ 0X11;
    // 0x80227A70: jr          $ra
    // 0x80227A74: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    TRACE_RETURN()
    return;
    // 0x80227A74: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
;}
RECOMP_FUNC void func_802269B0_ovl30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802269B0: lhu         $v0, 0x350($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X350);
    // 0x802269B4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802269B8: sh          $v0, 0x350($a0)
    MEM_H(0X350, ctx->r4) = ctx->r2;
    // 0x802269BC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802269C0: bne         $v0, $zero, L_802269CC
    if (ctx->r2 != 0) {
        // 0x802269C4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802269CC;
    }
    // 0x802269C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802269C8: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_802269CC:
    // 0x802269CC: jr          $ra
    // 0x802269D0: nop

    TRACE_RETURN()
    return;
    // 0x802269D0: nop

;}
RECOMP_FUNC void func_80225994_ovl30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225994: lb          $v0, 0xA7($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XA7);
    // 0x80225998: bltzl       $v0, L_802259A0
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022599C: sb          $zero, 0xA($a0)
        MEM_B(0XA, ctx->r4) = 0;
            goto L_802259A0;
    }
    goto skip_0;
    // 0x8022599C: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    skip_0:
L_802259A0:
    // 0x802259A0: jr          $ra
    // 0x802259A4: nop

    TRACE_RETURN()
    return;
    // 0x802259A4: nop

;}
RECOMP_FUNC void func_80226CEC_ovl30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226CEC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226CF0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226CF4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226CF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226CFC: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80226D00: lh          $a3, 0x34E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X34E);
    // 0x80226D04: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80226D08: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x80226D0C: jal         0x8004F820
    // 0x80226D10: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x80226D10: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x80226D14: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80226D18: lb          $a0, 0xA7($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XA7);
    // 0x80226D1C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80226D20: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80226D24: bgez        $a0, L_80226D48
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80226D28: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_80226D48;
    }
    // 0x80226D28: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x80226D2C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80226D30: jal         0x80227A68
    // 0x80226D34: nop

    func_80227A68_ovl30(rdram, ctx);
        goto after_1;
    // 0x80226D34: nop

    after_1:
    // 0x80226D38: lbu         $v1, 0x34B($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34B);
    // 0x80226D3C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80226D40: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x80226D44: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
L_80226D48:
    // 0x80226D48: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80226D4C: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x80226D50: bne         $v0, $zero, L_80226D74
    if (ctx->r2 != 0) {
        // 0x80226D54: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_80226D74;
    }
    // 0x80226D54: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x80226D58: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80226D5C: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x80226D60: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
    // 0x80226D64: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x80226D68: jal         0x80227A68
    // 0x80226D6C: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    func_80227A68_ovl30(rdram, ctx);
        goto after_2;
    // 0x80226D6C: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    after_2:
    // 0x80226D70: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_80226D74:
    // 0x80226D74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226D78: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226D7C: jr          $ra
    // 0x80226D80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226D80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802253C4_ovl30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802253C4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802253C8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802253CC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802253D0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802253D4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x802253D8: jal         0x8022546C
    // 0x802253DC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8022546C_ovl30(rdram, ctx);
        goto after_0;
    // 0x802253DC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x802253E0: lbu         $v1, 0x4($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X4);
    // 0x802253E4: bne         $v1, $zero, L_80225454
    if (ctx->r3 != 0) {
        // 0x802253E8: andi        $v0, $v0, 0xFF
        ctx->r2 = ctx->r2 & 0XFF;
            goto L_80225454;
    }
    // 0x802253E8: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x802253EC: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x802253F0: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802253F4: addiu       $a0, $a0, -0x76A4
    ctx->r4 = ADD32(ctx->r4, -0X76A4);
    // 0x802253F8: jal         0x800607C4
    // 0x802253FC: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_1;
    // 0x802253FC: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_1:
    // 0x80225400: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x80225404: addiu       $s2, $zero, 0x22
    ctx->r18 = ADD32(0, 0X22);
L_80225408:
    // 0x80225408: jal         0x8006033C
    // 0x8022540C: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x8022540C: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    after_2:
    // 0x80225410: beql        $v0, $zero, L_80225444
    if (ctx->r2 == 0) {
        // 0x80225414: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_80225444;
    }
    goto skip_0;
    // 0x80225414: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x80225418: jal         0x8004F2C4
    // 0x8022541C: nop

    func_8004F2C4_2A6C4(rdram, ctx);
        goto after_3;
    // 0x8022541C: nop

    after_3:
    // 0x80225420: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80225424: beql        $v1, $zero, L_80225444
    if (ctx->r3 == 0) {
        // 0x80225428: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_80225444;
    }
    goto skip_1;
    // 0x80225428: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_1:
    // 0x8022542C: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80225430: sb          $s2, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r18;
    // 0x80225434: sb          $s0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r16;
    // 0x80225438: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022543C: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80225440: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_80225444:
    // 0x80225444: slti        $v0, $s0, 0x8
    ctx->r2 = SIGNED(ctx->r16) < 0X8 ? 1 : 0;
    // 0x80225448: bne         $v0, $zero, L_80225408
    if (ctx->r2 != 0) {
        // 0x8022544C: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_80225408;
    }
    // 0x8022544C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225450: sb          $v0, 0x4($s1)
    MEM_B(0X4, ctx->r17) = ctx->r2;
L_80225454:
    // 0x80225454: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80225458: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022545C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80225460: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225464: jr          $ra
    // 0x80225468: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80225468: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802269D4_ovl30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802269D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802269D8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802269DC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802269E0: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x802269E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802269E8: jal         0x80227B04
    // 0x802269EC: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_80227B04_ovl30(rdram, ctx);
        goto after_0;
    // 0x802269EC: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_0:
    // 0x802269F0: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x802269F4: beq         $v0, $zero, L_80226A20
    if (ctx->r2 == 0) {
        // 0x802269F8: addiu       $v1, $zero, 0x6
        ctx->r3 = ADD32(0, 0X6);
            goto L_80226A20;
    }
    // 0x802269F8: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
    // 0x802269FC: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80226A00: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80226A04: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x80226A08: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x80226A0C: sh          $v0, 0x360($s0)
    MEM_H(0X360, ctx->r16) = ctx->r2;
    // 0x80226A10: jal         0x80227A68
    // 0x80226A14: sh          $a1, 0x362($s0)
    MEM_H(0X362, ctx->r16) = ctx->r5;
    func_80227A68_ovl30(rdram, ctx);
        goto after_1;
    // 0x80226A14: sh          $a1, 0x362($s0)
    MEM_H(0X362, ctx->r16) = ctx->r5;
    after_1:
    // 0x80226A18: j           L_80226A60
    // 0x80226A1C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_80226A60;
    // 0x80226A1C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_80226A20:
    // 0x80226A20: lhu         $v0, 0x350($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X350);
    // 0x80226A24: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80226A28: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x80226A2C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80226A30: bne         $v0, $zero, L_80226A40
    if (ctx->r2 != 0) {
        // 0x80226A34: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80226A40;
    }
    // 0x80226A34: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226A38: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226A3C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80226A40:
    // 0x80226A40: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80226A44: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80226A48: jal         0x8004DA90
    // 0x80226A4C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x80226A4C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_2:
    // 0x80226A50: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80226A54: addiu       $v0, $v0, 0x80
    ctx->r2 = ADD32(ctx->r2, 0X80);
    // 0x80226A58: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80226A5C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_80226A60:
    // 0x80226A60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226A64: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226A68: jr          $ra
    // 0x80226A6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226A6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226314_ovl30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226314: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80226318: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022631C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80226320: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80226324: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80226328: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022632C: lh          $a0, 0x64($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X64);
    // 0x80226330: lh          $a1, 0x56($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X56);
    // 0x80226334: lb          $a2, 0xF($s1)
    ctx->r6 = MEM_B(ctx->r17, 0XF);
    // 0x80226338: jal         0x8004FA7C
    // 0x8022633C: addiu       $s0, $s1, 0x348
    ctx->r16 = ADD32(ctx->r17, 0X348);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x8022633C: addiu       $s0, $s1, 0x348
    ctx->r16 = ADD32(ctx->r17, 0X348);
    after_0:
    // 0x80226340: lh          $a1, 0x362($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X362);
    // 0x80226344: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x80226348: sll         $v1, $s2, 16
    ctx->r3 = S32(ctx->r18 << 16);
    // 0x8022634C: sra         $a0, $v1, 16
    ctx->r4 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80226350: srl         $v1, $a0, 31
    ctx->r3 = S32(U32(ctx->r4) >> 31);
    // 0x80226354: sltiu       $v0, $a1, 0x1
    ctx->r2 = ctx->r5 < 0X1 ? 1 : 0;
    // 0x80226358: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022635C: bnel        $v0, $zero, L_8022637C
    if (ctx->r2 != 0) {
        // 0x80226360: negu        $s2, $s2
        ctx->r18 = SUB32(0, ctx->r18);
            goto L_8022637C;
    }
    goto skip_0;
    // 0x80226360: negu        $s2, $s2
    ctx->r18 = SUB32(0, ctx->r18);
    skip_0:
    // 0x80226364: sltu        $v0, $zero, $a1
    ctx->r2 = 0 < ctx->r5 ? 1 : 0;
    // 0x80226368: slt         $v1, $zero, $a0
    ctx->r3 = SIGNED(0) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8022636C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80226370: beq         $v0, $zero, L_80226380
    if (ctx->r2 == 0) {
        // 0x80226374: sll         $v0, $s2, 16
        ctx->r2 = S32(ctx->r18 << 16);
            goto L_80226380;
    }
    // 0x80226374: sll         $v0, $s2, 16
    ctx->r2 = S32(ctx->r18 << 16);
    // 0x80226378: negu        $s2, $s2
    ctx->r18 = SUB32(0, ctx->r18);
L_8022637C:
    // 0x8022637C: sll         $v0, $s2, 16
    ctx->r2 = S32(ctx->r18 << 16);
L_80226380:
    // 0x80226380: bne         $v0, $zero, L_802263B0
    if (ctx->r2 != 0) {
        // 0x80226384: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802263B0;
    }
    // 0x80226384: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226388: lhu         $v1, 0x14($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X14);
    // 0x8022638C: lhu         $a0, 0x1E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X1E);
    // 0x80226390: lhu         $a1, 0x16($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X16);
    // 0x80226394: subu        $v1, $v0, $v1
    ctx->r3 = SUB32(ctx->r2, ctx->r3);
    // 0x80226398: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
    // 0x8022639C: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x802263A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802263A4: sh          $v1, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r3;
    // 0x802263A8: j           L_80226408
    // 0x802263AC: sh          $a0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r4;
        goto L_80226408;
    // 0x802263AC: sh          $a0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r4;
L_802263B0:
    // 0x802263B0: lhu         $v0, 0x8($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8);
    // 0x802263B4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802263B8: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x802263BC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802263C0: beq         $v0, $zero, L_80226404
    if (ctx->r2 == 0) {
        // 0x802263C4: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80226404;
    }
    // 0x802263C4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802263C8: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x802263CC: jal         0x80227B04
    // 0x802263D0: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_80227B04_ovl30(rdram, ctx);
        goto after_1;
    // 0x802263D0: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_1:
    // 0x802263D4: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x802263D8: beq         $v0, $zero, L_80226410
    if (ctx->r2 == 0) {
        // 0x802263DC: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80226410;
    }
    // 0x802263DC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802263E0: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    // 0x802263E4: jal         0x80227A68
    // 0x802263E8: nop

    func_80227A68_ovl30(rdram, ctx);
        goto after_2;
    // 0x802263E8: nop

    after_2:
    // 0x802263EC: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x802263F0: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x802263F4: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x802263F8: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x802263FC: j           L_80226430
    // 0x80226400: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
        goto L_80226430;
    // 0x80226400: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_80226404:
    // 0x80226404: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80226408:
    // 0x80226408: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x8022640C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_80226410:
    // 0x80226410: lhu         $v0, 0x56($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X56);
    // 0x80226414: lh          $a1, 0x44($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X44);
    // 0x80226418: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022641C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80226420: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x80226424: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80226428: jal         0x8004DA90
    // 0x8022642C: sh          $v0, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r2;
    func_8004DA90_28E90(rdram, ctx);
        goto after_3;
    // 0x8022642C: sh          $v0, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r2;
    after_3:
L_80226430:
    // 0x80226430: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80226434: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80226438: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022643C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226440: jr          $ra
    // 0x80226444: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80226444: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022F810_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F810: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022F814: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022F818: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F81C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8022F820: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022F824: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022F828: jal         0x8009A3B4
    // 0x8022F82C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022F82C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8022F830: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8022F834: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022F838: jal         0x8009A3B4
    // 0x8022F83C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022F83C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022F840: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8022F844: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8022F848: jal         0x8009A3B4
    // 0x8022F84C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022F84C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022F850: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022F854: jal         0x800A3450
    // 0x8022F858: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x8022F858: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    after_3:
    // 0x8022F85C: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8022F860: sh          $v0, 0x3B2($s0)
    MEM_H(0X3B2, ctx->r16) = ctx->r2;
    // 0x8022F864: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8022F868: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022F86C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022F870: lw          $v0, -0x7AE0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7AE0);
    // 0x8022F874: jalr        $v0
    // 0x8022F878: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x8022F878: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8022F87C: sw          $zero, 0x350($s0)
    MEM_W(0X350, ctx->r16) = 0;
    // 0x8022F880: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022F884: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022F888: jr          $ra
    // 0x8022F88C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022F88C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80229A80_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229A80: addiu       $a1, $a0, 0x328
    ctx->r5 = ADD32(ctx->r4, 0X328);
    // 0x80229A84: lui         $a2, 0x8024
    ctx->r6 = S32(0X8024 << 16);
    // 0x80229A88: addiu       $a2, $a2, -0x7DF4
    ctx->r6 = ADD32(ctx->r6, -0X7DF4);
    // 0x80229A8C: sh          $zero, 0x64($a0)
    MEM_H(0X64, ctx->r4) = 0;
    // 0x80229A90: sw          $zero, 0x374($a0)
    MEM_W(0X374, ctx->r4) = 0;
L_80229A94:
    // 0x80229A94: lw          $v0, 0x4C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X4C);
    // 0x80229A98: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80229A9C: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x80229AA0: lhu         $v0, 0x64($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X64);
    // 0x80229AA4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80229AA8: sh          $v0, 0x64($a0)
    MEM_H(0X64, ctx->r4) = ctx->r2;
    // 0x80229AAC: lhu         $v1, 0x2($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X2);
    // 0x80229AB0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229AB4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80229AB8: andi        $v1, $v1, 0xF
    ctx->r3 = ctx->r3 & 0XF;
    // 0x80229ABC: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80229AC0: bne         $v1, $zero, L_80229AE0
    if (ctx->r3 != 0) {
        // 0x80229AC4: nop
    
            goto L_80229AE0;
    }
    // 0x80229AC4: nop

    // 0x80229AC8: lw          $v0, 0x4C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X4C);
    // 0x80229ACC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80229AD0: sw          $v0, 0x4C($a1)
    MEM_W(0X4C, ctx->r5) = ctx->r2;
    // 0x80229AD4: slti        $v0, $v0, 0x2
    ctx->r2 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x80229AD8: bne         $v0, $zero, L_80229A94
    if (ctx->r2 != 0) {
        // 0x80229ADC: nop
    
            goto L_80229A94;
    }
    // 0x80229ADC: nop

L_80229AE0:
    // 0x80229AE0: jr          $ra
    // 0x80229AE4: lw          $v0, 0x4C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X4C);
    TRACE_RETURN()
    return;
    // 0x80229AE4: lw          $v0, 0x4C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X4C);
;}
RECOMP_FUNC void func_80228908_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228908: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022890C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228910: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228914: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80228918: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022891C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80228920: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80228924: addiu       $v0, $v0, 0x49B0
    ctx->r2 = ADD32(ctx->r2, 0X49B0);
    // 0x80228928: addiu       $s1, $s0, 0x328
    ctx->r17 = ADD32(ctx->r16, 0X328);
    // 0x8022892C: beq         $v1, $zero, L_80228948
    if (ctx->r3 == 0) {
        // 0x80228930: sw          $v0, 0x380($s0)
        MEM_W(0X380, ctx->r16) = ctx->r2;
            goto L_80228948;
    }
    // 0x80228930: sw          $v0, 0x380($s0)
    MEM_W(0X380, ctx->r16) = ctx->r2;
    // 0x80228934: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228938: beq         $v1, $v0, L_802289A8
    if (ctx->r3 == ctx->r2) {
        // 0x8022893C: nop
    
            goto L_802289A8;
    }
    // 0x8022893C: nop

    // 0x80228940: j           L_80228A00
    // 0x80228944: nop

        goto L_80228A00;
    // 0x80228944: nop

L_80228948:
    // 0x80228948: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022894C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80228950: lw          $a1, 0x380($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X380);
    // 0x80228954: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x80228958: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022895C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80228960: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80228964: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80228968: jal         0x8004F820
    // 0x8022896C: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022896C: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_0:
    // 0x80228970: lw          $v1, 0x368($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X368);
    // 0x80228974: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228978: sra         $v0, $v0, 18
    ctx->r2 = S32(SIGNED(ctx->r2) >> 18);
    // 0x8022897C: sh          $v0, 0x66($s0)
    MEM_H(0X66, ctx->r16) = ctx->r2;
    // 0x80228980: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80228984: sh          $v0, 0x32C($s0)
    MEM_H(0X32C, ctx->r16) = ctx->r2;
    // 0x80228988: sh          $zero, 0x330($s0)
    MEM_H(0X330, ctx->r16) = 0;
    // 0x8022898C: lbu         $v0, 0xF($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XF);
    // 0x80228990: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80228994: sb          $v0, 0xF($v1)
    MEM_B(0XF, ctx->r3) = ctx->r2;
    // 0x80228998: lw          $v0, 0x36C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X36C);
    // 0x8022899C: sb          $zero, 0x9($v0)
    MEM_B(0X9, ctx->r2) = 0;
    // 0x802289A0: lw          $v0, 0x370($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X370);
    // 0x802289A4: sb          $zero, 0x9($v0)
    MEM_B(0X9, ctx->r2) = 0;
L_802289A8:
    // 0x802289A8: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x802289AC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802289B0: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x802289B4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802289B8: bgez        $v0, L_802289CC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802289BC: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_802289CC;
    }
    // 0x802289BC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802289C0: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x802289C4: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x802289C8: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_802289CC:
    // 0x802289CC: lw          $a1, 0x58($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X58);
    // 0x802289D0: lh          $a3, 0x66($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X66);
    // 0x802289D4: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x802289D8: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    // 0x802289DC: bltzl       $a3, L_802289E4
    if (SIGNED(ctx->r7) < 0) {
        // 0x802289E0: negu        $a3, $a3
        ctx->r7 = SUB32(0, ctx->r7);
            goto L_802289E4;
    }
    goto skip_0;
    // 0x802289E0: negu        $a3, $a3
    ctx->r7 = SUB32(0, ctx->r7);
    skip_0:
L_802289E4:
    // 0x802289E4: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x802289E8: jal         0x8004F820
    // 0x802289EC: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x802289EC: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    after_1:
    // 0x802289F0: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x802289F4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802289F8: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x802289FC: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
L_80228A00:
    // 0x80228A00: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80228A04: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80228A08: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228A0C: jr          $ra
    // 0x80228A10: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80228A10: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80233374_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233374: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80233378: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023337C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80233380: jal         0x8005044C
    // 0x80233384: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_0;
    // 0x80233384: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x80233388: jal         0x80040F30
    // 0x8023338C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_1;
    // 0x8023338C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80233390: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80233394: jal         0x8003E934
    // 0x80233398: sw          $v0, 0xC4($s0)
    MEM_W(0XC4, ctx->r16) = ctx->r2;
    func_8003E934_19D34(rdram, ctx);
        goto after_2;
    // 0x80233398: sw          $v0, 0xC4($s0)
    MEM_W(0XC4, ctx->r16) = ctx->r2;
    after_2:
    // 0x8023339C: lh          $v1, 0x2E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2E);
    // 0x802333A0: subu        $v1, $v0, $v1
    ctx->r3 = SUB32(ctx->r2, ctx->r3);
    // 0x802333A4: slti        $v1, $v1, 0x10
    ctx->r3 = SIGNED(ctx->r3) < 0X10 ? 1 : 0;
    // 0x802333A8: bnel        $v1, $zero, L_802333DC
    if (ctx->r3 != 0) {
        // 0x802333AC: sh          $v0, 0x16($s0)
        MEM_H(0X16, ctx->r16) = ctx->r2;
            goto L_802333DC;
    }
    goto skip_0;
    // 0x802333AC: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    skip_0:
    // 0x802333B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802333B4: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802333B8: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
    // 0x802333BC: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x802333C0: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x802333C4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802333C8: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    // 0x802333CC: jal         0x80050294
    // 0x802333D0: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_3;
    // 0x802333D0: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    after_3:
    // 0x802333D4: j           L_802333E4
    // 0x802333D8: nop

        goto L_802333E4;
    // 0x802333D8: nop

L_802333DC:
    // 0x802333DC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802333E0: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
L_802333E4:
    // 0x802333E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802333E8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802333EC: jr          $ra
    // 0x802333F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802333F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802333F4: nop

    // 0x802333F8: nop

    // 0x802333FC: nop

;}
RECOMP_FUNC void func_80226C08_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226C08: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80226C0C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80226C10: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80226C14: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80226C18: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226C1C: lbu         $a0, 0x43A($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X43A);
    // 0x80226C20: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80226C24: bne         $a0, $v0, L_80226C98
    if (ctx->r4 != ctx->r2) {
        // 0x80226C28: nop
    
            goto L_80226C98;
    }
    // 0x80226C28: nop

    // 0x80226C2C: lbu         $v0, 0xA6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA6);
    // 0x80226C30: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x80226C34: beq         $v0, $zero, L_80226C44
    if (ctx->r2 == 0) {
        // 0x80226C38: addiu       $a0, $zero, 0x1C4
        ctx->r4 = ADD32(0, 0X1C4);
            goto L_80226C44;
    }
    // 0x80226C38: addiu       $a0, $zero, 0x1C4
    ctx->r4 = ADD32(0, 0X1C4);
    // 0x80226C3C: jal         0x8002A33C
    // 0x80226C40: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x80226C40: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_0:
L_80226C44:
    // 0x80226C44: lbu         $v0, 0xA6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA6);
    // 0x80226C48: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80226C4C: beq         $v0, $zero, L_80226C60
    if (ctx->r2 == 0) {
        // 0x80226C50: nop
    
            goto L_80226C60;
    }
    // 0x80226C50: nop

    // 0x80226C54: lbu         $v0, 0xC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XC);
    // 0x80226C58: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x80226C5C: sb          $v0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r2;
L_80226C60:
    // 0x80226C60: lb          $v1, 0xA7($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XA7);
    // 0x80226C64: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80226C68: bne         $v1, $v0, L_80226D2C
    if (ctx->r3 != ctx->r2) {
        // 0x80226C6C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80226D2C;
    }
    // 0x80226C6C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80226C70: lbu         $v1, 0xA($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XA);
    // 0x80226C74: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x80226C78: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80226C7C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80226C80: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x80226C84: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80226C88: jal         0x80050294
    // 0x80226C8C: sb          $v1, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r3;
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x80226C8C: sb          $v1, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r3;
    after_1:
    // 0x80226C90: j           L_80226D2C
    // 0x80226C94: nop

        goto L_80226D2C;
    // 0x80226C94: nop

L_80226C98:
    // 0x80226C98: lb          $v0, 0xE($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XE);
    // 0x80226C9C: beq         $v0, $a0, L_80226CB0
    if (ctx->r2 == ctx->r4) {
        // 0x80226CA0: nop
    
            goto L_80226CB0;
    }
    // 0x80226CA0: nop

    // 0x80226CA4: lb          $v0, 0xD($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XD);
    // 0x80226CA8: bne         $v0, $a0, L_80226D20
    if (ctx->r2 != ctx->r4) {
        // 0x80226CAC: nop
    
            goto L_80226D20;
    }
    // 0x80226CAC: nop

L_80226CB0:
    // 0x80226CB0: jal         0x80053ED8
    // 0x80226CB4: nop

    func_80053ED8_2F2D8(rdram, ctx);
        goto after_2;
    // 0x80226CB4: nop

    after_2:
    // 0x80226CB8: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80226CBC: lbu         $v0, 0xA6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA6);
    // 0x80226CC0: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x80226CC4: beq         $v0, $zero, L_80226CD4
    if (ctx->r2 == 0) {
        // 0x80226CC8: addiu       $a0, $zero, 0x1C4
        ctx->r4 = ADD32(0, 0X1C4);
            goto L_80226CD4;
    }
    // 0x80226CC8: addiu       $a0, $zero, 0x1C4
    ctx->r4 = ADD32(0, 0X1C4);
    // 0x80226CCC: jal         0x8002A33C
    // 0x80226CD0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_3;
    // 0x80226CD0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_3:
L_80226CD4:
    // 0x80226CD4: lbu         $v0, 0xA6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA6);
    // 0x80226CD8: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80226CDC: beq         $v0, $zero, L_80226CF0
    if (ctx->r2 == 0) {
        // 0x80226CE0: nop
    
            goto L_80226CF0;
    }
    // 0x80226CE0: nop

    // 0x80226CE4: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x80226CE8: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x80226CEC: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
L_80226CF0:
    // 0x80226CF0: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x80226CF4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80226CF8: bne         $v1, $v0, L_80226D2C
    if (ctx->r3 != ctx->r2) {
        // 0x80226CFC: nop
    
            goto L_80226D2C;
    }
    // 0x80226CFC: nop

    // 0x80226D00: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80226D04: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226D08: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x80226D0C: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x80226D10: andi        $v0, $v0, 0xF7
    ctx->r2 = ctx->r2 & 0XF7;
    // 0x80226D14: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
    // 0x80226D18: j           L_80226D2C
    // 0x80226D1C: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
        goto L_80226D2C;
    // 0x80226D1C: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
L_80226D20:
    // 0x80226D20: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80226D24: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226D28: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_80226D2C:
    // 0x80226D2C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80226D30: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80226D34: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226D38: jr          $ra
    // 0x80226D3C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80226D3C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022D678_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D678: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022D67C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022D680: lbu         $v0, 0x385($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X385);
    // 0x8022D684: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022D688: sb          $v0, 0x385($a0)
    MEM_B(0X385, ctx->r4) = ctx->r2;
    // 0x8022D68C: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022D690: bne         $v0, $zero, L_8022D6C8
    if (ctx->r2 != 0) {
        // 0x8022D694: addiu       $v0, $zero, 0x50
        ctx->r2 = ADD32(0, 0X50);
            goto L_8022D6C8;
    }
    // 0x8022D694: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    // 0x8022D698: lbu         $v1, 0xCA($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XCA);
    // 0x8022D69C: sh          $v0, 0x44($a0)
    MEM_H(0X44, ctx->r4) = ctx->r2;
    // 0x8022D6A0: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x8022D6A4: sb          $v0, 0x385($a0)
    MEM_B(0X385, ctx->r4) = ctx->r2;
    // 0x8022D6A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022D6AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022D6B0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022D6B4: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    // 0x8022D6B8: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x8022D6BC: andi        $v1, $v1, 0xFE
    ctx->r3 = ctx->r3 & 0XFE;
    // 0x8022D6C0: jal         0x80050294
    // 0x8022D6C4: sb          $v1, 0xCA($a0)
    MEM_B(0XCA, ctx->r4) = ctx->r3;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x8022D6C4: sb          $v1, 0xCA($a0)
    MEM_B(0XCA, ctx->r4) = ctx->r3;
    after_0:
L_8022D6C8:
    // 0x8022D6C8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022D6CC: jr          $ra
    // 0x8022D6D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022D6D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802369F8_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802369F8: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x802369FC: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x80236A00: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80236A04: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80236A08: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x80236A0C: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x80236A10: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80236A14: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x80236A18: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x80236A1C: sltiu       $v0, $v1, 0xB
    ctx->r2 = ctx->r3 < 0XB ? 1 : 0;
    // 0x80236A20: beq         $v0, $zero, L_80236D90
    if (ctx->r2 == 0) {
        // 0x80236A24: addiu       $s2, $s0, 0x308
        ctx->r18 = ADD32(ctx->r16, 0X308);
            goto L_80236D90;
    }
    // 0x80236A24: addiu       $s2, $s0, 0x308
    ctx->r18 = ADD32(ctx->r16, 0X308);
    // 0x80236A28: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80236A2C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80236A30: addu        $at, $at, $v0
    gpr jr_addend_80236A38 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80236A34: lw          $v0, -0x7018($at)
    ctx->r2 = ADD32(ctx->r1, -0X7018);
    // 0x80236A38: jr          $v0
    // 0x80236A3C: nop

    switch (jr_addend_80236A38 >> 2) {
        case 0: goto L_80236A40; break;
        case 1: goto L_80236A54; break;
        case 2: goto L_80236AA0; break;
        case 3: goto L_80236ACC; break;
        case 4: goto L_80236B24; break;
        case 5: goto L_80236B30; break;
        case 6: goto L_80236D30; break;
        case 7: goto L_80236B78; break;
        case 8: goto L_80236CD4; break;
        case 9: goto L_80236D30; break;
        case 10: goto L_80236D58; break;
        default: switch_error(__func__, 0x80236A38, 0x80238FE8);
    }
    // 0x80236A3C: nop

L_80236A40:
    // 0x80236A40: jal         0x8023687C
    // 0x80236A44: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8023687C_ovl31(rdram, ctx);
        goto after_0;
    // 0x80236A44: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80236A48: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80236A4C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80236A50: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80236A54:
    // 0x80236A54: jal         0x802371E0
    // 0x80236A58: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802371E0_ovl31(rdram, ctx);
        goto after_1;
    // 0x80236A58: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80236A5C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80236A60: beq         $v0, $zero, L_80236A7C
    if (ctx->r2 == 0) {
        // 0x80236A64: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80236A7C;
    }
    // 0x80236A64: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80236A68: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80236A6C: jal         0x80050294
    // 0x80236A70: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x80236A70: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x80236A74: j           L_80236A94
    // 0x80236A78: nop

        goto L_80236A94;
    // 0x80236A78: nop

L_80236A7C:
    // 0x80236A7C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80236A80: jal         0x80050294
    // 0x80236A84: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    func_80050294_2B694(rdram, ctx);
        goto after_3;
    // 0x80236A84: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_3:
    // 0x80236A88: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x80236A8C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80236A90: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
L_80236A94:
    // 0x80236A94: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80236A98: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80236A9C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80236AA0:
    // 0x80236AA0: lw          $v0, 0x184($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X184);
    // 0x80236AA4: bne         $v0, $s0, L_80236D94
    if (ctx->r2 != ctx->r16) {
        // 0x80236AA8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80236D94;
    }
    // 0x80236AA8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80236AAC: jal         0x80237228
    // 0x80236AB0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80237228_ovl31(rdram, ctx);
        goto after_4;
    // 0x80236AB0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80236AB4: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80236AB8: beql        $v0, $zero, L_80236D90
    if (ctx->r2 == 0) {
        // 0x80236ABC: sw          $zero, 0x184($s1)
        MEM_W(0X184, ctx->r17) = 0;
            goto L_80236D90;
    }
    goto skip_0;
    // 0x80236ABC: sw          $zero, 0x184($s1)
    MEM_W(0X184, ctx->r17) = 0;
    skip_0:
    // 0x80236AC0: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80236AC4: j           L_80236D8C
    // 0x80236AC8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80236D8C;
    // 0x80236AC8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80236ACC:
    // 0x80236ACC: jal         0x8006FF84
    // 0x80236AD0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_5;
    // 0x80236AD0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_5:
    // 0x80236AD4: beq         $v0, $zero, L_80236D90
    if (ctx->r2 == 0) {
        // 0x80236AD8: addiu       $a0, $zero, 0x3FE
        ctx->r4 = ADD32(0, 0X3FE);
            goto L_80236D90;
    }
    // 0x80236AD8: addiu       $a0, $zero, 0x3FE
    ctx->r4 = ADD32(0, 0X3FE);
    // 0x80236ADC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80236AE0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80236AE4: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x80236AE8: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x80236AEC: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
    // 0x80236AF0: sb          $v0, 0x448($s1)
    MEM_B(0X448, ctx->r17) = ctx->r2;
    // 0x80236AF4: jal         0x8004CB2C
    // 0x80236AF8: sw          $zero, 0xC($s1)
    MEM_W(0XC, ctx->r17) = 0;
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_6;
    // 0x80236AF8: sw          $zero, 0xC($s1)
    MEM_W(0XC, ctx->r17) = 0;
    after_6:
    // 0x80236AFC: lbu         $a0, 0x8($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X8);
    // 0x80236B00: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80236B04: lbu         $v1, 0x6($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X6);
    // 0x80236B08: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80236B0C: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80236B10: ori         $v1, $v1, 0x1
    ctx->r3 = ctx->r3 | 0X1;
    // 0x80236B14: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80236B18: sb          $v1, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r3;
    // 0x80236B1C: j           L_80236D90
    // 0x80236B20: sb          $a0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r4;
        goto L_80236D90;
    // 0x80236B20: sb          $a0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r4;
L_80236B24:
    // 0x80236B24: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80236B28: j           L_80236D8C
    // 0x80236B2C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80236D8C;
    // 0x80236B2C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80236B30:
    // 0x80236B30: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x80236B34: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80236B38: bne         $v0, $zero, L_80236B60
    if (ctx->r2 != 0) {
        // 0x80236B3C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80236B60;
    }
    // 0x80236B3C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80236B40: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80236B44: jal         0x80050294
    // 0x80236B48: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_7;
    // 0x80236B48: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_7:
    // 0x80236B4C: addiu       $a0, $zero, 0x103
    ctx->r4 = ADD32(0, 0X103);
    // 0x80236B50: jal         0x8002A33C
    // 0x80236B54: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_8;
    // 0x80236B54: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_8:
    // 0x80236B58: j           L_80236B6C
    // 0x80236B5C: nop

        goto L_80236B6C;
    // 0x80236B5C: nop

L_80236B60:
    // 0x80236B60: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80236B64: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80236B68: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80236B6C:
    // 0x80236B6C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80236B70: j           L_80236D8C
    // 0x80236B74: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80236D8C;
    // 0x80236B74: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80236B78:
    // 0x80236B78: jal         0x802371E0
    // 0x80236B7C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802371E0_ovl31(rdram, ctx);
        goto after_9;
    // 0x80236B7C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
    // 0x80236B80: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80236B84: beql        $v0, $zero, L_80236CB8
    if (ctx->r2 == 0) {
        // 0x80236B88: addiu       $a0, $zero, 0x2
        ctx->r4 = ADD32(0, 0X2);
            goto L_80236CB8;
    }
    goto skip_1;
    // 0x80236B88: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    skip_1:
    // 0x80236B8C: lb          $v1, 0xD($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XD);
    // 0x80236B90: bne         $v1, $zero, L_80236BB4
    if (ctx->r3 != 0) {
        // 0x80236B94: addu        $a1, $v1, $zero
        ctx->r5 = ADD32(ctx->r3, 0);
            goto L_80236BB4;
    }
    // 0x80236B94: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x80236B98: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80236B9C: lb          $a3, 0xE($s0)
    ctx->r7 = MEM_B(ctx->r16, 0XE);
    // 0x80236BA0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80236BA4: jal         0x800610AC
    // 0x80236BA8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_10;
    // 0x80236BA8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_10:
    // 0x80236BAC: j           L_80236CC8
    // 0x80236BB0: nop

        goto L_80236CC8;
    // 0x80236BB0: nop

L_80236BB4:
    // 0x80236BB4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80236BB8: bnel        $v1, $v0, L_80236BDC
    if (ctx->r3 != ctx->r2) {
        // 0x80236BBC: andi        $v0, $v1, 0x80
        ctx->r2 = ctx->r3 & 0X80;
            goto L_80236BDC;
    }
    goto skip_2;
    // 0x80236BBC: andi        $v0, $v1, 0x80
    ctx->r2 = ctx->r3 & 0X80;
    skip_2:
    // 0x80236BC0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80236BC4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80236BC8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80236BCC: jal         0x800610AC
    // 0x80236BD0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_11;
    // 0x80236BD0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_11:
    // 0x80236BD4: j           L_80236CC8
    // 0x80236BD8: nop

        goto L_80236CC8;
    // 0x80236BD8: nop

L_80236BDC:
    // 0x80236BDC: beq         $v0, $zero, L_80236C40
    if (ctx->r2 == 0) {
        // 0x80236BE0: lui         $a0, 0x6666
        ctx->r4 = S32(0X6666 << 16);
            goto L_80236C40;
    }
    // 0x80236BE0: lui         $a0, 0x6666
    ctx->r4 = S32(0X6666 << 16);
    // 0x80236BE4: ori         $a0, $a0, 0x6667
    ctx->r4 = ctx->r4 | 0X6667;
    // 0x80236BE8: lbu         $v1, 0xE($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XE);
    // 0x80236BEC: andi        $v0, $a1, 0x7F
    ctx->r2 = ctx->r5 & 0X7F;
    // 0x80236BF0: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80236BF4: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80236BF8: sll         $a2, $v0, 2
    ctx->r6 = S32(ctx->r2 << 2);
    // 0x80236BFC: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x80236C00: sll         $a2, $a2, 1
    ctx->r6 = S32(ctx->r6 << 1);
    // 0x80236C04: mult        $a2, $a0
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80236C08: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80236C0C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80236C10: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80236C14: sra         $a2, $a2, 31
    ctx->r6 = S32(SIGNED(ctx->r6) >> 31);
    // 0x80236C18: mfhi        $t0
    ctx->r8 = hi;
    // 0x80236C1C: sra         $v0, $t0, 2
    ctx->r2 = S32(SIGNED(ctx->r8) >> 2);
    // 0x80236C20: nop

    // 0x80236C24: jal         0x80069754
    // 0x80236C28: subu        $a2, $v0, $a2
    ctx->r6 = SUB32(ctx->r2, ctx->r6);
    func_80069754_44B54(rdram, ctx);
        goto after_12;
    // 0x80236C28: subu        $a2, $v0, $a2
    ctx->r6 = SUB32(ctx->r2, ctx->r6);
    after_12:
    // 0x80236C2C: lb          $a0, 0xC($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XC);
    // 0x80236C30: jal         0x8006036C
    // 0x80236C34: addiu       $a0, $a0, 0x400
    ctx->r4 = ADD32(ctx->r4, 0X400);
    func_8006036C_3B76C(rdram, ctx);
        goto after_13;
    // 0x80236C34: addiu       $a0, $a0, 0x400
    ctx->r4 = ADD32(ctx->r4, 0X400);
    after_13:
    // 0x80236C38: j           L_80236CC8
    // 0x80236C3C: nop

        goto L_80236CC8;
    // 0x80236C3C: nop

L_80236C40:
    // 0x80236C40: lb          $v1, 0xE($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XE);
    // 0x80236C44: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80236C48: beq         $v1, $v0, L_80236CB4
    if (ctx->r3 == ctx->r2) {
        // 0x80236C4C: addu        $a2, $v1, $zero
        ctx->r6 = ADD32(ctx->r3, 0);
            goto L_80236CB4;
    }
    // 0x80236C4C: addu        $a2, $v1, $zero
    ctx->r6 = ADD32(ctx->r3, 0);
    // 0x80236C50: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x80236C54: xori        $v1, $v0, 0x40
    ctx->r3 = ctx->r2 ^ 0X40;
    // 0x80236C58: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x80236C5C: xori        $v0, $v0, 0x42
    ctx->r2 = ctx->r2 ^ 0X42;
    // 0x80236C60: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80236C64: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80236C68: beq         $v1, $zero, L_80236C88
    if (ctx->r3 == 0) {
        // 0x80236C6C: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80236C88;
    }
    // 0x80236C6C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80236C70: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80236C74: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80236C78: jal         0x800610AC
    // 0x80236C7C: addiu       $a3, $zero, 0xC
    ctx->r7 = ADD32(0, 0XC);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_14;
    // 0x80236C7C: addiu       $a3, $zero, 0xC
    ctx->r7 = ADD32(0, 0XC);
    after_14:
    // 0x80236C80: j           L_80236C9C
    // 0x80236C84: nop

        goto L_80236C9C;
    // 0x80236C84: nop

L_80236C88:
    // 0x80236C88: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80236C8C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80236C90: andi        $a2, $a2, 0xFF
    ctx->r6 = ctx->r6 & 0XFF;
    // 0x80236C94: jal         0x80069754
    // 0x80236C98: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80069754_44B54(rdram, ctx);
        goto after_15;
    // 0x80236C98: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_15:
L_80236C9C:
    // 0x80236C9C: lb          $a0, 0xC($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XC);
    // 0x80236CA0: jal         0x8006036C
    // 0x80236CA4: addiu       $a0, $a0, 0x400
    ctx->r4 = ADD32(ctx->r4, 0X400);
    func_8006036C_3B76C(rdram, ctx);
        goto after_16;
    // 0x80236CA4: addiu       $a0, $a0, 0x400
    ctx->r4 = ADD32(ctx->r4, 0X400);
    after_16:
    // 0x80236CA8: addiu       $v0, $zero, 0x35
    ctx->r2 = ADD32(0, 0X35);
    // 0x80236CAC: j           L_80236CC8
    // 0x80236CB0: sb          $v0, 0x448($s1)
    MEM_B(0X448, ctx->r17) = ctx->r2;
        goto L_80236CC8;
    // 0x80236CB0: sb          $v0, 0x448($s1)
    MEM_B(0X448, ctx->r17) = ctx->r2;
L_80236CB4:
    // 0x80236CB4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
L_80236CB8:
    // 0x80236CB8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80236CBC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80236CC0: jal         0x80069754
    // 0x80236CC4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80069754_44B54(rdram, ctx);
        goto after_17;
    // 0x80236CC4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_17:
L_80236CC8:
    // 0x80236CC8: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80236CCC: j           L_80236D8C
    // 0x80236CD0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80236D8C;
    // 0x80236CD0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80236CD4:
    // 0x80236CD4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80236CD8: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80236CDC: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80236CE0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80236CE4: bne         $v0, $zero, L_80236D94
    if (ctx->r2 != 0) {
        // 0x80236CE8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80236D94;
    }
    // 0x80236CE8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80236CEC: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x80236CF0: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80236CF4: bne         $v0, $zero, L_80236D18
    if (ctx->r2 != 0) {
        // 0x80236CF8: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_80236D18;
    }
    // 0x80236CF8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80236CFC: jal         0x80050294
    // 0x80236D00: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_18;
    // 0x80236D00: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_18:
    // 0x80236D04: addiu       $a0, $zero, 0x104
    ctx->r4 = ADD32(0, 0X104);
    // 0x80236D08: jal         0x8002A33C
    // 0x80236D0C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_19;
    // 0x80236D0C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_19:
    // 0x80236D10: j           L_80236D24
    // 0x80236D14: nop

        goto L_80236D24;
    // 0x80236D14: nop

L_80236D18:
    // 0x80236D18: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80236D1C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80236D20: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80236D24:
    // 0x80236D24: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80236D28: j           L_80236D8C
    // 0x80236D2C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80236D8C;
    // 0x80236D2C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80236D30:
    // 0x80236D30: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x80236D34: bgez        $v0, L_80236D48
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80236D38: nop
    
            goto L_80236D48;
    }
    // 0x80236D38: nop

    // 0x80236D3C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80236D40: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80236D44: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80236D48:
    // 0x80236D48: jal         0x8005044C
    // 0x80236D4C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_20;
    // 0x80236D4C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_20:
    // 0x80236D50: j           L_80236D94
    // 0x80236D54: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_80236D94;
    // 0x80236D54: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80236D58:
    // 0x80236D58: addiu       $a0, $zero, 0x3FE
    ctx->r4 = ADD32(0, 0X3FE);
    // 0x80236D5C: jal         0x8004CB2C
    // 0x80236D60: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_21;
    // 0x80236D60: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_21:
    // 0x80236D64: jal         0x80070050
    // 0x80236D68: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80070050_4B450(rdram, ctx);
        goto after_22;
    // 0x80236D68: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_22:
    // 0x80236D6C: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80236D70: sw          $zero, 0x184($s1)
    MEM_W(0X184, ctx->r17) = 0;
    // 0x80236D74: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80236D78: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x80236D7C: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x80236D80: andi        $v0, $v0, 0xFFFD
    ctx->r2 = ctx->r2 & 0XFFFD;
    // 0x80236D84: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
    // 0x80236D88: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80236D8C:
    // 0x80236D8C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80236D90:
    // 0x80236D90: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80236D94:
    // 0x80236D94: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80236D98: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80236D9C: jal         0x80047284
    // 0x80236DA0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_23;
    // 0x80236DA0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_23:
    // 0x80236DA4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80236DA8: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x80236DAC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80236DB0: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x80236DB4: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x80236DB8: addiu       $v0, $s2, 0x18
    ctx->r2 = ADD32(ctx->r18, 0X18);
    // 0x80236DBC: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80236DC0: lui         $v0, 0x400
    ctx->r2 = S32(0X400 << 16);
    // 0x80236DC4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80236DC8: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80236DCC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80236DD0: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80236DD4: jal         0x80051E18
    // 0x80236DD8: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_24;
    // 0x80236DD8: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_24:
    // 0x80236DDC: sw          $zero, 0x18($s2)
    MEM_W(0X18, ctx->r18) = 0;
    // 0x80236DE0: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80236DE4: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x80236DE8: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x80236DEC: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x80236DF0: jr          $ra
    // 0x80236DF4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x80236DF4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80235340_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235340: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80235344: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80235348: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023534C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80235350: jal         0x8006033C
    // 0x80235354: addiu       $a0, $zero, 0x5F
    ctx->r4 = ADD32(0, 0X5F);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80235354: addiu       $a0, $zero, 0x5F
    ctx->r4 = ADD32(0, 0X5F);
    after_0:
    // 0x80235358: beq         $v0, $zero, L_8023536C
    if (ctx->r2 == 0) {
        // 0x8023535C: nop
    
            goto L_8023536C;
    }
    // 0x8023535C: nop

    // 0x80235360: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80235364: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80235368: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8023536C:
    // 0x8023536C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80235370: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80235374: jr          $ra
    // 0x80235378: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80235378: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022D31C_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D31C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022D320: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022D324: jal         0x8004F418
    // 0x8022D328: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x8022D328: nop

    after_0:
    // 0x8022D32C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022D330: jr          $ra
    // 0x8022D334: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022D334: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022A4D4_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A4D4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022A4D8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A4DC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A4E0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022A4E4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022A4E8: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022A4EC: beq         $v1, $zero, L_8022A508
    if (ctx->r3 == 0) {
        // 0x8022A4F0: addiu       $s1, $s0, 0x328
        ctx->r17 = ADD32(ctx->r16, 0X328);
            goto L_8022A508;
    }
    // 0x8022A4F0: addiu       $s1, $s0, 0x328
    ctx->r17 = ADD32(ctx->r16, 0X328);
    // 0x8022A4F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A4F8: beq         $v1, $v0, L_8022A518
    if (ctx->r3 == ctx->r2) {
        // 0x8022A4FC: nop
    
            goto L_8022A518;
    }
    // 0x8022A4FC: nop

    // 0x8022A500: j           L_8022A640
    // 0x8022A504: nop

        goto L_8022A640;
    // 0x8022A504: nop

L_8022A508:
    // 0x8022A508: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A50C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022A510: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022A514: sh          $zero, 0x330($s0)
    MEM_H(0X330, ctx->r16) = 0;
L_8022A518:
    // 0x8022A518: lb          $v1, 0xA6($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA6);
    // 0x8022A51C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A520: bnel        $v1, $v0, L_8022A538
    if (ctx->r3 != ctx->r2) {
        // 0x8022A524: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022A538;
    }
    goto skip_0;
    // 0x8022A524: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    skip_0:
    // 0x8022A528: addiu       $a0, $zero, 0xB0
    ctx->r4 = ADD32(0, 0XB0);
    // 0x8022A52C: jal         0x8002A33C
    // 0x8022A530: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x8022A530: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x8022A534: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022A538:
    // 0x8022A538: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022A53C: lhu         $v1, 0x66($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X66);
    // 0x8022A540: addiu       $a1, $zero, 0x34
    ctx->r5 = ADD32(0, 0X34);
    // 0x8022A544: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022A548: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022A54C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022A550: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022A554: jal         0x8004DA90
    // 0x8022A558: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x8022A558: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022A55C: jal         0x80040F30
    // 0x8022A560: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_2;
    // 0x8022A560: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022A564: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A568: jal         0x8003E934
    // 0x8022A56C: sw          $v0, 0x48($s1)
    MEM_W(0X48, ctx->r17) = ctx->r2;
    func_8003E934_19D34(rdram, ctx);
        goto after_3;
    // 0x8022A56C: sw          $v0, 0x48($s1)
    MEM_W(0X48, ctx->r17) = ctx->r2;
    after_3:
    // 0x8022A570: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022A574: lh          $a0, 0x16($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X16);
    // 0x8022A578: lh          $v1, 0x2E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2E);
    // 0x8022A57C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A580: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022A584: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
    // 0x8022A588: bltz        $v0, L_8022A5A0
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022A58C: slti        $v0, $v0, 0x21
        ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
            goto L_8022A5A0;
    }
    // 0x8022A58C: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x8022A590: beq         $v0, $zero, L_8022A5B0
    if (ctx->r2 == 0) {
        // 0x8022A594: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022A5B0;
    }
    // 0x8022A594: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022A598: j           L_8022A5F0
    // 0x8022A59C: nop

        goto L_8022A5F0;
    // 0x8022A59C: nop

L_8022A5A0:
    // 0x8022A5A0: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
    // 0x8022A5A4: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x8022A5A8: bne         $v0, $zero, L_8022A5F0
    if (ctx->r2 != 0) {
        // 0x8022A5AC: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022A5F0;
    }
    // 0x8022A5AC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
L_8022A5B0:
    // 0x8022A5B0: addiu       $a1, $s0, 0x2C
    ctx->r5 = ADD32(ctx->r16, 0X2C);
    // 0x8022A5B4: jal         0x8009A3B4
    // 0x8022A5B8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8022A5B8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x8022A5BC: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8022A5C0: addiu       $a1, $s0, 0x34
    ctx->r5 = ADD32(ctx->r16, 0X34);
    // 0x8022A5C4: jal         0x8009A3B4
    // 0x8022A5C8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x8022A5C8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_5:
    // 0x8022A5CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A5D0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022A5D4: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8022A5D8: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022A5DC: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x8022A5E0: bne         $v0, $zero, L_8022A618
    if (ctx->r2 != 0) {
        // 0x8022A5E4: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8022A618;
    }
    // 0x8022A5E4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022A5E8: j           L_8022A624
    // 0x8022A5EC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_8022A624;
    // 0x8022A5EC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8022A5F0:
    // 0x8022A5F0: lw          $v0, 0x48($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X48);
    // 0x8022A5F4: andi        $v0, $v0, 0xF00
    ctx->r2 = ctx->r2 & 0XF00;
    // 0x8022A5F8: beq         $v0, $zero, L_8022A62C
    if (ctx->r2 == 0) {
        // 0x8022A5FC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022A62C;
    }
    // 0x8022A5FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A600: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022A604: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8022A608: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022A60C: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x8022A610: beq         $v0, $zero, L_8022A620
    if (ctx->r2 == 0) {
        // 0x8022A614: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8022A620;
    }
    // 0x8022A614: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_8022A618:
    // 0x8022A618: j           L_8022A640
    // 0x8022A61C: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
        goto L_8022A640;
    // 0x8022A61C: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
L_8022A620:
    // 0x8022A620: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8022A624:
    // 0x8022A624: j           L_8022A640
    // 0x8022A628: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
        goto L_8022A640;
    // 0x8022A628: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
L_8022A62C:
    // 0x8022A62C: lhu         $v1, 0x0($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X0);
    // 0x8022A630: andi        $v0, $v1, 0x10
    ctx->r2 = ctx->r3 & 0X10;
    // 0x8022A634: beq         $v0, $zero, L_8022A640
    if (ctx->r2 == 0) {
        // 0x8022A638: ori         $v0, $v1, 0x1
        ctx->r2 = ctx->r3 | 0X1;
            goto L_8022A640;
    }
    // 0x8022A638: ori         $v0, $v1, 0x1
    ctx->r2 = ctx->r3 | 0X1;
    // 0x8022A63C: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8022A640:
    // 0x8022A640: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022A644: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022A648: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A64C: jr          $ra
    // 0x8022A650: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022A650: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802326F0_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802326F0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802326F4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802326F8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802326FC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80232700: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x80232704: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80232708: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8023270C: jal         0x80050294
    // 0x80232710: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80232710: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_0:
    // 0x80232714: lbu         $v1, 0x64($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X64);
    // 0x80232718: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8023271C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80232720: lbu         $v0, 0x65($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X65);
    // 0x80232724: lbu         $a0, 0x66($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X66);
    // 0x80232728: lbu         $a1, 0x66($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X66);
    // 0x8023272C: andi        $v1, $v1, 0x1F
    ctx->r3 = ctx->r3 & 0X1F;
    // 0x80232730: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x80232734: andi        $a0, $a0, 0x1F
    ctx->r4 = ctx->r4 & 0X1F;
    // 0x80232738: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x8023273C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80232740: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    // 0x80232744: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x80232748: sh          $v1, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r3;
    // 0x8023274C: lhu         $a0, 0x15E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X15E);
    // 0x80232750: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80232754: sb          $a1, 0x66($s0)
    MEM_B(0X66, ctx->r16) = ctx->r5;
    // 0x80232758: lb          $v1, 0x66($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X66);
    // 0x8023275C: addiu       $v0, $zero, -0x8000
    ctx->r2 = ADD32(0, -0X8000);
    // 0x80232760: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x80232764: slti        $v1, $v1, 0x10
    ctx->r3 = SIGNED(ctx->r3) < 0X10 ? 1 : 0;
    // 0x80232768: bne         $v1, $zero, L_802327A4
    if (ctx->r3 != 0) {
        // 0x8023276C: sh          $v0, 0x15E($s0)
        MEM_H(0X15E, ctx->r16) = ctx->r2;
            goto L_802327A4;
    }
    // 0x8023276C: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80232770: lb          $v1, 0x64($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X64);
    // 0x80232774: andi        $v0, $v0, 0x7FFF
    ctx->r2 = ctx->r2 & 0X7FFF;
    // 0x80232778: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8023277C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80232780: sb          $v0, 0x66($s0)
    MEM_B(0X66, ctx->r16) = ctx->r2;
    // 0x80232784: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80232788: beq         $v1, $v0, L_802327A4
    if (ctx->r3 == ctx->r2) {
        // 0x8023278C: addu        $a0, $v1, $zero
        ctx->r4 = ADD32(ctx->r3, 0);
            goto L_802327A4;
    }
    // 0x8023278C: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x80232790: lbu         $v0, 0x65($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X65);
    // 0x80232794: addiu       $v1, $a0, 0x4
    ctx->r3 = ADD32(ctx->r4, 0X4);
    // 0x80232798: sb          $v1, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r3;
    // 0x8023279C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x802327A0: sb          $v0, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r2;
L_802327A4:
    // 0x802327A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802327A8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802327AC: jr          $ra
    // 0x802327B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802327B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80234BE8_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234BE8: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x80234BEC: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80234BF0: addiu       $a0, $a0, -0x78AC
    ctx->r4 = ADD32(ctx->r4, -0X78AC);
    // 0x80234BF4: sw          $ra, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r31;
    // 0x80234BF8: sw          $fp, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r30;
    // 0x80234BFC: sw          $s7, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r23;
    // 0x80234C00: sw          $s6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r22;
    // 0x80234C04: sw          $s5, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r21;
    // 0x80234C08: sw          $s4, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r20;
    // 0x80234C0C: sw          $s3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r19;
    // 0x80234C10: sw          $s2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r18;
    // 0x80234C14: sw          $s1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r17;
    // 0x80234C18: sw          $s0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r16;
    // 0x80234C1C: lw          $t2, 0x0($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X0);
    // 0x80234C20: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80234C24: lbu         $v1, -0x78B0($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X78B0);
    // 0x80234C28: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80234C2C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80234C30: beq         $v1, $v0, L_80234C98
    if (ctx->r3 == ctx->r2) {
        // 0x80234C34: sw          $t2, 0x4C($sp)
        MEM_W(0X4C, ctx->r29) = ctx->r10;
            goto L_80234C98;
    }
    // 0x80234C34: sw          $t2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r10;
    // 0x80234C38: lui         $a3, 0x801C
    ctx->r7 = S32(0X801C << 16);
    // 0x80234C3C: addiu       $a3, $a3, -0x3BC8
    ctx->r7 = ADD32(ctx->r7, -0X3BC8);
    // 0x80234C40: lb          $t0, 0x0($a3)
    ctx->r8 = MEM_B(ctx->r7, 0X0);
    // 0x80234C44: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x80234C48: addiu       $a0, $a0, -0x4
    ctx->r4 = ADD32(ctx->r4, -0X4);
    // 0x80234C4C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80234C50: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
L_80234C54:
    // 0x80234C54: bnel        $t0, $v0, L_80234C8C
    if (ctx->r8 != ctx->r2) {
        // 0x80234C58: addiu       $a0, $a0, 0x8
        ctx->r4 = ADD32(ctx->r4, 0X8);
            goto L_80234C8C;
    }
    goto skip_0;
    // 0x80234C58: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    skip_0:
    // 0x80234C5C: lb          $v1, 0x1($a3)
    ctx->r3 = MEM_B(ctx->r7, 0X1);
    // 0x80234C60: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80234C64: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80234C68: lbu         $v0, -0x78AF($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X78AF);
    // 0x80234C6C: bnel        $v1, $v0, L_80234C8C
    if (ctx->r3 != ctx->r2) {
        // 0x80234C70: addiu       $a0, $a0, 0x8
        ctx->r4 = ADD32(ctx->r4, 0X8);
            goto L_80234C8C;
    }
    goto skip_1;
    // 0x80234C70: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    skip_1:
    // 0x80234C74: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80234C78: addu        $at, $at, $a1
    ctx->r1 = ADD32(ctx->r1, ctx->r5);
    // 0x80234C7C: lw          $a1, -0x78AC($at)
    ctx->r5 = MEM_W(ctx->r1, -0X78AC);
    // 0x80234C80: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80234C84: j           L_80234C98
    // 0x80234C88: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
        goto L_80234C98;
    // 0x80234C88: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
L_80234C8C:
    // 0x80234C8C: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x80234C90: bne         $v0, $t1, L_80234C54
    if (ctx->r2 != ctx->r9) {
        // 0x80234C94: addiu       $a1, $a1, 0x8
        ctx->r5 = ADD32(ctx->r5, 0X8);
            goto L_80234C54;
    }
    // 0x80234C94: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
L_80234C98:
    // 0x80234C98: beq         $a2, $zero, L_80234F18
    if (ctx->r6 == 0) {
        // 0x80234C9C: nop
    
            goto L_80234F18;
    }
    // 0x80234C9C: nop

    // 0x80234CA0: lui         $t3, 0x801C
    ctx->r11 = S32(0X801C << 16);
    // 0x80234CA4: lbu         $t3, -0x39A6($t3)
    ctx->r11 = MEM_BU(ctx->r11, -0X39A6);
    // 0x80234CA8: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80234CAC: addiu       $v1, $v1, -0x3B9A
    ctx->r3 = ADD32(ctx->r3, -0X3B9A);
    // 0x80234CB0: sw          $t3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r11;
    // 0x80234CB4: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80234CB8: lbu         $fp, 0x0($v1)
    ctx->r30 = MEM_BU(ctx->r3, 0X0);
    // 0x80234CBC: lui         $t3, 0x801A
    ctx->r11 = S32(0X801A << 16);
    // 0x80234CC0: lbu         $t3, 0x53D4($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X53D4);
    // 0x80234CC4: sw          $t2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r10;
    // 0x80234CC8: lui         $t2, 0x8020
    ctx->r10 = S32(0X8020 << 16);
    // 0x80234CCC: lbu         $t2, 0x6B40($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X6B40);
    // 0x80234CD0: sw          $t3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r11;
    // 0x80234CD4: lui         $t3, 0x801B
    ctx->r11 = S32(0X801B << 16);
    // 0x80234CD8: lbu         $t3, -0x35BC($t3)
    ctx->r11 = MEM_BU(ctx->r11, -0X35BC);
    // 0x80234CDC: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x80234CE0: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x80234CE4: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x80234CE8: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80234CEC: slt         $v0, $t2, $t3
    ctx->r2 = SIGNED(ctx->r10) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x80234CF0: beq         $v0, $zero, L_80234F18
    if (ctx->r2 == 0) {
        // 0x80234CF4: nop
    
            goto L_80234F18;
    }
    // 0x80234CF4: nop

L_80234CF8:
    // 0x80234CF8: lw          $s7, 0x1C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X1C);
    // 0x80234CFC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80234D00: slt         $v0, $s7, $t2
    ctx->r2 = SIGNED(ctx->r23) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x80234D04: beq         $v0, $zero, L_80234F00
    if (ctx->r2 == 0) {
        // 0x80234D08: nop
    
            goto L_80234F00;
    }
    // 0x80234D08: nop

    // 0x80234D0C: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80234D10: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80234D14: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x80234D18: sw          $t3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r11;
L_80234D1C:
    // 0x80234D1C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80234D20: lhu         $v1, 0x49AE($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X49AE);
    // 0x80234D24: lw          $t3, 0x54($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X54);
    // 0x80234D28: mult        $t3, $v1
    result = S64(S32(ctx->r11)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80234D2C: mflo        $v1
    ctx->r3 = lo;
    // 0x80234D30: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80234D34: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x80234D38: lw          $a0, -0x35C0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X35C0);
    // 0x80234D3C: subu        $v0, $s7, $t2
    ctx->r2 = SUB32(ctx->r23, ctx->r10);
    // 0x80234D40: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80234D44: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80234D48: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x80234D4C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80234D50: lh          $s6, 0x0($v1)
    ctx->r22 = MEM_H(ctx->r3, 0X0);
    // 0x80234D54: blez        $s6, L_80234EEC
    if (SIGNED(ctx->r22) <= 0) {
        // 0x80234D58: sll         $v0, $s6, 1
        ctx->r2 = S32(ctx->r22 << 1);
            goto L_80234EEC;
    }
    // 0x80234D58: sll         $v0, $s6, 1
    ctx->r2 = S32(ctx->r22 << 1);
    // 0x80234D5C: addu        $v0, $v0, $s6
    ctx->r2 = ADD32(ctx->r2, ctx->r22);
    // 0x80234D60: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80234D64: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80234D68: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80234D6C: lw          $v1, 0x5088($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X5088);
    // 0x80234D70: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x80234D74: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x80234D78: addu        $s4, $v0, $zero
    ctx->r20 = ADD32(ctx->r2, 0);
    // 0x80234D7C: sw          $v1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r3;
L_80234D80:
    // 0x80234D80: lw          $v0, 0x4($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X4);
    // 0x80234D84: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x80234D88: bnel        $v0, $t3, L_80234EE0
    if (ctx->r2 != ctx->r11) {
        // 0x80234D8C: addiu       $s5, $s5, 0x10
        ctx->r21 = ADD32(ctx->r21, 0X10);
            goto L_80234EE0;
    }
    goto skip_2;
    // 0x80234D8C: addiu       $s5, $s5, 0x10
    ctx->r21 = ADD32(ctx->r21, 0X10);
    skip_2:
    // 0x80234D90: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x80234D94: addu        $s2, $s5, $zero
    ctx->r18 = ADD32(ctx->r21, 0);
L_80234D98:
    // 0x80234D98: jal         0x8004F2C4
    // 0x80234D9C: nop

    func_8004F2C4_2A6C4(rdram, ctx);
        goto after_0;
    // 0x80234D9C: nop

    after_0:
    // 0x80234DA0: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80234DA4: beql        $s1, $zero, L_80234EB8
    if (ctx->r17 == 0) {
        // 0x80234DA8: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_80234EB8;
    }
    goto skip_3;
    // 0x80234DA8: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    skip_3:
    // 0x80234DAC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80234DB0: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x80234DB4: addiu       $v0, $zero, 0x34
    ctx->r2 = ADD32(0, 0X34);
    // 0x80234DB8: addu        $s0, $s2, $s3
    ctx->r16 = ADD32(ctx->r18, ctx->r19);
    // 0x80234DBC: sb          $v0, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r2;
    // 0x80234DC0: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x80234DC4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80234DC8: addiu       $a1, $s1, 0x3
    ctx->r5 = ADD32(ctx->r17, 0X3);
    // 0x80234DCC: srl         $v0, $v0, 4
    ctx->r2 = S32(U32(ctx->r2) >> 4);
    // 0x80234DD0: jal         0x8004D5D4
    // 0x80234DD4: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_1;
    // 0x80234DD4: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    after_1:
    // 0x80234DD8: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80234DDC: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x80234DE0: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x80234DE4: addiu       $a1, $a1, 0x5080
    ctx->r5 = ADD32(ctx->r5, 0X5080);
    // 0x80234DE8: addu        $a1, $s4, $a1
    ctx->r5 = ADD32(ctx->r20, ctx->r5);
    // 0x80234DEC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80234DF0: sb          $fp, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r30;
    // 0x80234DF4: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80234DF8: jal         0x8009A3B4
    // 0x80234DFC: sb          $v0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80234DFC: sb          $v0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r2;
    after_2:
    // 0x80234E00: lb          $v0, 0xC($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XC);
    // 0x80234E04: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80234E08: addu        $v1, $v1, $s4
    ctx->r3 = ADD32(ctx->r3, ctx->r20);
    // 0x80234E0C: lhu         $v1, 0x5080($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X5080);
    // 0x80234E10: lhu         $a0, 0x8($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X8);
    // 0x80234E14: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80234E18: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80234E1C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80234E20: lhu         $v0, -0x7890($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X7890);
    // 0x80234E24: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80234E28: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80234E2C: sh          $v0, 0x38($s1)
    MEM_H(0X38, ctx->r17) = ctx->r2;
    // 0x80234E30: lb          $v0, 0xC($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XC);
    // 0x80234E34: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80234E38: addu        $v1, $v1, $s4
    ctx->r3 = ADD32(ctx->r3, ctx->r20);
    // 0x80234E3C: lhu         $v1, 0x5084($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X5084);
    // 0x80234E40: lhu         $a0, 0xC($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0XC);
    // 0x80234E44: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80234E48: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80234E4C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80234E50: lhu         $v0, -0x788E($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X788E);
    // 0x80234E54: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80234E58: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80234E5C: sh          $v0, 0x3C($s1)
    MEM_H(0X3C, ctx->r17) = ctx->r2;
    // 0x80234E60: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80234E64: addu        $v0, $v0, $s4
    ctx->r2 = ADD32(ctx->r2, ctx->r20);
    // 0x80234E68: lhu         $v0, 0x5082($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X5082);
    // 0x80234E6C: lhu         $v1, 0xA($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0XA);
    // 0x80234E70: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x80234E74: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80234E78: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80234E7C: jal         0x8002C678
    // 0x80234E80: sh          $v0, 0x3A($s1)
    MEM_H(0X3A, ctx->r17) = ctx->r2;
    func_8002C678_7A78(rdram, ctx);
        goto after_3;
    // 0x80234E80: sh          $v0, 0x3A($s1)
    MEM_H(0X3A, ctx->r17) = ctx->r2;
    after_3:
    // 0x80234E84: lb          $a0, 0xC($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XC);
    // 0x80234E88: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80234E8C: jal         0x800319B4
    // 0x80234E90: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    func_800319B4_CDB4(rdram, ctx);
        goto after_4;
    // 0x80234E90: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    after_4:
    // 0x80234E94: sw          $s6, 0x44($s1)
    MEM_W(0X44, ctx->r17) = ctx->r22;
    // 0x80234E98: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80234E9C: addu        $v0, $v0, $s4
    ctx->r2 = ADD32(ctx->r2, ctx->r20);
    // 0x80234EA0: lw          $v0, 0x5088($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X5088);
    // 0x80234EA4: sw          $v0, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r2;
    // 0x80234EA8: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x80234EAC: jal         0x80071A70
    // 0x80234EB0: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    func_80071A70_4CE70(rdram, ctx);
        goto after_5;
    // 0x80234EB0: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    after_5:
    // 0x80234EB4: sw          $v0, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->r2;
L_80234EB8:
    // 0x80234EB8: slti        $v0, $s3, 0x2
    ctx->r2 = SIGNED(ctx->r19) < 0X2 ? 1 : 0;
    // 0x80234EBC: bne         $v0, $zero, L_80234D98
    if (ctx->r2 != 0) {
        // 0x80234EC0: nop
    
            goto L_80234D98;
    }
    // 0x80234EC0: nop

    // 0x80234EC4: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80234EC8: lbu         $v0, -0x3B9A($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3B9A);
    // 0x80234ECC: addiu       $fp, $fp, 0x1
    ctx->r30 = ADD32(ctx->r30, 0X1);
    // 0x80234ED0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80234ED4: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80234ED8: sb          $v0, -0x3B9A($at)
    MEM_B(-0X3B9A, ctx->r1) = ctx->r2;
    // 0x80234EDC: addiu       $s5, $s5, 0x10
    ctx->r21 = ADD32(ctx->r21, 0X10);
L_80234EE0:
    // 0x80234EE0: lw          $v0, 0x0($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X0);
    // 0x80234EE4: bne         $v0, $zero, L_80234D80
    if (ctx->r2 != 0) {
        // 0x80234EE8: nop
    
            goto L_80234D80;
    }
    // 0x80234EE8: nop

L_80234EEC:
    // 0x80234EEC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80234EF0: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x80234EF4: slt         $v0, $s7, $t2
    ctx->r2 = SIGNED(ctx->r23) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x80234EF8: bne         $v0, $zero, L_80234D1C
    if (ctx->r2 != 0) {
        // 0x80234EFC: nop
    
            goto L_80234D1C;
    }
    // 0x80234EFC: nop

L_80234F00:
    // 0x80234F00: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80234F04: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80234F08: addiu       $t3, $t3, 0x1
    ctx->r11 = ADD32(ctx->r11, 0X1);
    // 0x80234F0C: slt         $v0, $t3, $t2
    ctx->r2 = SIGNED(ctx->r11) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x80234F10: bne         $v0, $zero, L_80234CF8
    if (ctx->r2 != 0) {
        // 0x80234F14: sw          $t3, 0x3C($sp)
        MEM_W(0X3C, ctx->r29) = ctx->r11;
            goto L_80234CF8;
    }
    // 0x80234F14: sw          $t3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r11;
L_80234F18:
    // 0x80234F18: lw          $ra, 0x7C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X7C);
    // 0x80234F1C: lw          $fp, 0x78($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X78);
    // 0x80234F20: lw          $s7, 0x74($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X74);
    // 0x80234F24: lw          $s6, 0x70($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X70);
    // 0x80234F28: lw          $s5, 0x6C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X6C);
    // 0x80234F2C: lw          $s4, 0x68($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X68);
    // 0x80234F30: lw          $s3, 0x64($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X64);
    // 0x80234F34: lw          $s2, 0x60($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X60);
    // 0x80234F38: lw          $s1, 0x5C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X5C);
    // 0x80234F3C: lw          $s0, 0x58($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X58);
    // 0x80234F40: jr          $ra
    // 0x80234F44: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    TRACE_RETURN()
    return;
    // 0x80234F44: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    // 0x80234F48: nop

    // 0x80234F4C: nop

;}
RECOMP_FUNC void func_8022E1AC_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E1AC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022E1B0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022E1B4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022E1B8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022E1BC: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022E1C0: lh          $a3, 0x382($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X382);
    // 0x8022E1C4: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022E1C8: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022E1CC: jal         0x8004F820
    // 0x8022E1D0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022E1D0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x8022E1D4: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022E1D8: lb          $a0, 0xA7($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XA7);
    // 0x8022E1DC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022E1E0: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022E1E4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022E1E8: bne         $a0, $v0, L_8022E1F4
    if (ctx->r4 != ctx->r2) {
        // 0x8022E1EC: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_8022E1F4;
    }
    // 0x8022E1EC: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022E1F0: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_8022E1F4:
    // 0x8022E1F4: lbu         $v0, 0x64($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X64);
    // 0x8022E1F8: lbu         $v1, 0x65($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X65);
    // 0x8022E1FC: lbu         $a0, 0x66($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X66);
    // 0x8022E200: lbu         $a1, 0x66($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X66);
    // 0x8022E204: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x8022E208: andi        $v1, $v1, 0x1F
    ctx->r3 = ctx->r3 & 0X1F;
    // 0x8022E20C: andi        $a0, $a0, 0x1F
    ctx->r4 = ctx->r4 & 0X1F;
    // 0x8022E210: sll         $v1, $v1, 5
    ctx->r3 = S32(ctx->r3 << 5);
    // 0x8022E214: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8022E218: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    // 0x8022E21C: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x8022E220: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022E224: lhu         $a0, 0x15E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X15E);
    // 0x8022E228: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8022E22C: sb          $a1, 0x66($s0)
    MEM_B(0X66, ctx->r16) = ctx->r5;
    // 0x8022E230: lb          $v1, 0x66($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X66);
    // 0x8022E234: addiu       $v0, $zero, -0x8000
    ctx->r2 = ADD32(0, -0X8000);
    // 0x8022E238: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x8022E23C: slti        $v1, $v1, 0x10
    ctx->r3 = SIGNED(ctx->r3) < 0X10 ? 1 : 0;
    // 0x8022E240: bne         $v1, $zero, L_8022E27C
    if (ctx->r3 != 0) {
        // 0x8022E244: sh          $v0, 0x15E($s0)
        MEM_H(0X15E, ctx->r16) = ctx->r2;
            goto L_8022E27C;
    }
    // 0x8022E244: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022E248: lb          $v1, 0x64($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X64);
    // 0x8022E24C: andi        $v0, $v0, 0x7FFF
    ctx->r2 = ctx->r2 & 0X7FFF;
    // 0x8022E250: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022E254: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022E258: sb          $v0, 0x66($s0)
    MEM_B(0X66, ctx->r16) = ctx->r2;
    // 0x8022E25C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022E260: beq         $v1, $v0, L_8022E27C
    if (ctx->r3 == ctx->r2) {
        // 0x8022E264: addu        $a0, $v1, $zero
        ctx->r4 = ADD32(ctx->r3, 0);
            goto L_8022E27C;
    }
    // 0x8022E264: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x8022E268: lbu         $v0, 0x65($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X65);
    // 0x8022E26C: addiu       $v1, $a0, 0x4
    ctx->r3 = ADD32(ctx->r4, 0X4);
    // 0x8022E270: sb          $v1, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r3;
    // 0x8022E274: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8022E278: sb          $v0, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r2;
L_8022E27C:
    // 0x8022E27C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022E280: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022E284: jr          $ra
    // 0x8022E288: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022E288: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80231EF8_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231EF8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80231EFC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80231F00: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80231F04: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80231F08: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80231F0C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80231F10: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80231F14: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80231F18: lw          $v0, -0x7A04($at)
    ctx->r2 = MEM_W(ctx->r1, -0X7A04);
    // 0x80231F1C: jalr        $v0
    // 0x80231F20: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80231F20: nop

    after_0:
    // 0x80231F24: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x80231F28: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80231F2C: bne         $v1, $v0, L_80231FE8
    if (ctx->r3 != ctx->r2) {
        // 0x80231F30: nop
    
            goto L_80231FE8;
    }
    // 0x80231F30: nop

    // 0x80231F34: lb          $v0, 0x387($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X387);
    // 0x80231F38: bne         $v0, $zero, L_80231FCC
    if (ctx->r2 != 0) {
        // 0x80231F3C: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80231FCC;
    }
    // 0x80231F3C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80231F40: lbu         $v0, 0x64($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X64);
    // 0x80231F44: lbu         $v1, 0x65($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X65);
    // 0x80231F48: lbu         $a0, 0x66($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X66);
    // 0x80231F4C: lbu         $a1, 0x66($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X66);
    // 0x80231F50: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x80231F54: andi        $v1, $v1, 0x1F
    ctx->r3 = ctx->r3 & 0X1F;
    // 0x80231F58: andi        $a0, $a0, 0x1F
    ctx->r4 = ctx->r4 & 0X1F;
    // 0x80231F5C: sll         $v1, $v1, 5
    ctx->r3 = S32(ctx->r3 << 5);
    // 0x80231F60: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80231F64: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    // 0x80231F68: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x80231F6C: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80231F70: lhu         $a0, 0x15E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X15E);
    // 0x80231F74: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80231F78: sb          $a1, 0x66($s0)
    MEM_B(0X66, ctx->r16) = ctx->r5;
    // 0x80231F7C: lb          $v1, 0x66($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X66);
    // 0x80231F80: addiu       $v0, $zero, -0x8000
    ctx->r2 = ADD32(0, -0X8000);
    // 0x80231F84: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x80231F88: slti        $v1, $v1, 0x10
    ctx->r3 = SIGNED(ctx->r3) < 0X10 ? 1 : 0;
    // 0x80231F8C: bne         $v1, $zero, L_80231FE8
    if (ctx->r3 != 0) {
        // 0x80231F90: sh          $v0, 0x15E($s0)
        MEM_H(0X15E, ctx->r16) = ctx->r2;
            goto L_80231FE8;
    }
    // 0x80231F90: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80231F94: lb          $v1, 0x64($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X64);
    // 0x80231F98: andi        $v0, $v0, 0x7FFF
    ctx->r2 = ctx->r2 & 0X7FFF;
    // 0x80231F9C: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80231FA0: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80231FA4: sb          $v0, 0x66($s0)
    MEM_B(0X66, ctx->r16) = ctx->r2;
    // 0x80231FA8: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80231FAC: beq         $v1, $v0, L_80231FE8
    if (ctx->r3 == ctx->r2) {
        // 0x80231FB0: addu        $a0, $v1, $zero
        ctx->r4 = ADD32(ctx->r3, 0);
            goto L_80231FE8;
    }
    // 0x80231FB0: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x80231FB4: lbu         $v0, 0x65($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X65);
    // 0x80231FB8: addiu       $v1, $a0, 0x4
    ctx->r3 = ADD32(ctx->r4, 0X4);
    // 0x80231FBC: sb          $v1, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r3;
    // 0x80231FC0: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80231FC4: j           L_80231FE8
    // 0x80231FC8: sb          $v0, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r2;
        goto L_80231FE8;
    // 0x80231FC8: sb          $v0, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r2;
L_80231FCC:
    // 0x80231FCC: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80231FD0: sb          $v0, 0x387($s0)
    MEM_B(0X387, ctx->r16) = ctx->r2;
    // 0x80231FD4: addiu       $v0, $zero, -0x8000
    ctx->r2 = ADD32(0, -0X8000);
    // 0x80231FD8: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80231FDC: sb          $zero, 0x66($s0)
    MEM_B(0X66, ctx->r16) = 0;
    // 0x80231FE0: sb          $zero, 0x65($s0)
    MEM_B(0X65, ctx->r16) = 0;
    // 0x80231FE4: sb          $zero, 0x64($s0)
    MEM_B(0X64, ctx->r16) = 0;
L_80231FE8:
    // 0x80231FE8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80231FEC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80231FF0: jr          $ra
    // 0x80231FF4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80231FF4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80230B74_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230B74: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80230B78: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80230B7C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80230B80: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80230B84: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80230B88: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x80230B8C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80230B90: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x80230B94: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80230B98: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80230B9C: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80230BA0: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    // 0x80230BA4: addiu       $s3, $zero, 0x48
    ctx->r19 = ADD32(0, 0X48);
    // 0x80230BA8: sh          $zero, 0x54($s1)
    MEM_H(0X54, ctx->r17) = 0;
    // 0x80230BAC: sh          $zero, 0x58($s1)
    MEM_H(0X58, ctx->r17) = 0;
    // 0x80230BB0: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80230BB4: jal         0x8004D5D4
    // 0x80230BB8: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80230BB8: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    after_0:
    // 0x80230BBC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80230BC0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80230BC4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80230BC8: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80230BCC: sh          $v0, 0x15C($s1)
    MEM_H(0X15C, ctx->r17) = ctx->r2;
    // 0x80230BD0: sh          $v0, 0x15A($s1)
    MEM_H(0X15A, ctx->r17) = ctx->r2;
    // 0x80230BD4: sh          $v0, 0x158($s1)
    MEM_H(0X158, ctx->r17) = ctx->r2;
    // 0x80230BD8: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80230BDC: sh          $v0, 0x15E($s1)
    MEM_H(0X15E, ctx->r17) = ctx->r2;
    // 0x80230BE0: sw          $zero, 0x78($s1)
    MEM_W(0X78, ctx->r17) = 0;
    // 0x80230BE4: jal         0x80050294
    // 0x80230BE8: sb          $zero, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = 0;
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x80230BE8: sb          $zero, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = 0;
    after_1:
L_80230BEC:
    // 0x80230BEC: jal         0x8004EEAC
    // 0x80230BF0: nop

    func_8004EEAC_2A2AC(rdram, ctx);
        goto after_2;
    // 0x80230BF0: nop

    after_2:
    // 0x80230BF4: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80230BF8: beq         $s0, $zero, L_80230C98
    if (ctx->r16 == 0) {
        // 0x80230BFC: addiu       $v0, $s2, 0x1
        ctx->r2 = ADD32(ctx->r18, 0X1);
            goto L_80230C98;
    }
    // 0x80230BFC: addiu       $v0, $s2, 0x1
    ctx->r2 = ADD32(ctx->r18, 0X1);
    // 0x80230C00: sll         $v0, $s2, 24
    ctx->r2 = S32(ctx->r18 << 24);
    // 0x80230C04: bne         $v0, $zero, L_80230C18
    if (ctx->r2 != 0) {
        // 0x80230C08: nop
    
            goto L_80230C18;
    }
    // 0x80230C08: nop

    // 0x80230C0C: lbu         $v0, 0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1);
    // 0x80230C10: j           L_80230C20
    // 0x80230C14: sb          $v0, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r2;
        goto L_80230C20;
    // 0x80230C14: sb          $v0, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r2;
L_80230C18:
    // 0x80230C18: lbu         $v0, 0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1);
    // 0x80230C1C: sb          $v0, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r2;
L_80230C20:
    // 0x80230C20: sb          $s4, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r20;
    // 0x80230C24: sb          $s3, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r19;
    // 0x80230C28: sb          $s2, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r18;
    // 0x80230C2C: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
    // 0x80230C30: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x80230C34: lhu         $v0, 0x56($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X56);
    // 0x80230C38: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80230C3C: sll         $a1, $s2, 24
    ctx->r5 = S32(ctx->r18 << 24);
    // 0x80230C40: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80230C44: lbu         $v0, 0xC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XC);
    // 0x80230C48: sra         $a1, $a1, 21
    ctx->r5 = S32(SIGNED(ctx->r5) >> 21);
    // 0x80230C4C: addu        $a1, $s1, $a1
    ctx->r5 = ADD32(ctx->r17, ctx->r5);
    // 0x80230C50: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x80230C54: lbu         $v0, 0x1($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X1);
    // 0x80230C58: addiu       $a1, $a1, 0x188
    ctx->r5 = ADD32(ctx->r5, 0X188);
    // 0x80230C5C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80230C60: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    // 0x80230C64: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
    // 0x80230C68: jal         0x8009A3B4
    // 0x80230C6C: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80230C6C: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    after_3:
    // 0x80230C70: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x80230C74: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x80230C78: lh          $a0, 0x18($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X18);
    // 0x80230C7C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80230C80: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80230C84: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80230C88: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x80230C8C: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x80230C90: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
    // 0x80230C94: addiu       $v0, $s2, 0x1
    ctx->r2 = ADD32(ctx->r18, 0X1);
L_80230C98:
    // 0x80230C98: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x80230C9C: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80230CA0: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80230CA4: slti        $v0, $v0, 0x2
    ctx->r2 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x80230CA8: bne         $v0, $zero, L_80230BEC
    if (ctx->r2 != 0) {
        // 0x80230CAC: nop
    
            goto L_80230BEC;
    }
    // 0x80230CAC: nop

    // 0x80230CB0: jal         0x80053ED8
    // 0x80230CB4: lbu         $a0, 0xC($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0XC);
    func_80053ED8_2F2D8(rdram, ctx);
        goto after_4;
    // 0x80230CB4: lbu         $a0, 0xC($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0XC);
    after_4:
    // 0x80230CB8: lbu         $v1, 0xD($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XD);
    // 0x80230CBC: sb          $v1, 0xD($v0)
    MEM_B(0XD, ctx->r2) = ctx->r3;
    // 0x80230CC0: lbu         $v1, 0xE($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XE);
    // 0x80230CC4: sb          $v1, 0xE($v0)
    MEM_B(0XE, ctx->r2) = ctx->r3;
    // 0x80230CC8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80230CCC: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x80230CD0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80230CD4: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x80230CD8: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80230CDC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80230CE0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80230CE4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80230CE8: jr          $ra
    // 0x80230CEC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80230CEC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80232600_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232600: lbu         $v0, 0x395($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X395);
    // 0x80232604: lb          $v1, 0xA6($a0)
    ctx->r3 = MEM_B(ctx->r4, 0XA6);
    // 0x80232608: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x8023260C: sb          $v0, 0x395($a0)
    MEM_B(0X395, ctx->r4) = ctx->r2;
    // 0x80232610: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80232614: bne         $v1, $v0, L_80232620
    if (ctx->r3 != ctx->r2) {
        // 0x80232618: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80232620;
    }
    // 0x80232618: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023261C: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_80232620:
    // 0x80232620: jr          $ra
    // 0x80232624: nop

    TRACE_RETURN()
    return;
    // 0x80232624: nop

;}
RECOMP_FUNC void func_8022EFB0_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022EFB0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8022EFB4: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x8022EFB8: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x8022EFBC: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8022EFC0: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x8022EFC4: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x8022EFC8: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8022EFCC: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8022EFD0: lbu         $a0, 0xC($s3)
    ctx->r4 = MEM_BU(ctx->r19, 0XC);
    // 0x8022EFD4: jal         0x80053ED8
    // 0x8022EFD8: addiu       $s4, $s3, 0x308
    ctx->r20 = ADD32(ctx->r19, 0X308);
    func_80053ED8_2F2D8(rdram, ctx);
        goto after_0;
    // 0x8022EFD8: addiu       $s4, $s3, 0x308
    ctx->r20 = ADD32(ctx->r19, 0X308);
    after_0:
    // 0x8022EFDC: lbu         $a0, 0xD($s3)
    ctx->r4 = MEM_BU(ctx->r19, 0XD);
    // 0x8022EFE0: jal         0x80053ED8
    // 0x8022EFE4: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    func_80053ED8_2F2D8(rdram, ctx);
        goto after_1;
    // 0x8022EFE4: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    after_1:
    // 0x8022EFE8: lbu         $v1, 0x9($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X9);
    // 0x8022EFEC: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x8022EFF0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022EFF4: beq         $v1, $v0, L_8022F200
    if (ctx->r3 == ctx->r2) {
        // 0x8022EFF8: nop
    
            goto L_8022F200;
    }
    // 0x8022EFF8: nop

    // 0x8022EFFC: lhu         $v0, 0x34A($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X34A);
    // 0x8022F000: beq         $v0, $zero, L_8022F00C
    if (ctx->r2 == 0) {
        // 0x8022F004: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_8022F00C;
    }
    // 0x8022F004: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022F008: sh          $v0, 0x34A($s3)
    MEM_H(0X34A, ctx->r19) = ctx->r2;
L_8022F00C:
    // 0x8022F00C: lbu         $v0, 0xE($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0XE);
    // 0x8022F010: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022F014: bne         $v0, $zero, L_8022F14C
    if (ctx->r2 != 0) {
        // 0x8022F018: nop
    
            goto L_8022F14C;
    }
    // 0x8022F018: nop

    // 0x8022F01C: lw          $a0, 0x328($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X328);
    // 0x8022F020: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x8022F024: beq         $v0, $zero, L_8022F13C
    if (ctx->r2 == 0) {
        // 0x8022F028: addu        $a1, $a0, $zero
        ctx->r5 = ADD32(ctx->r4, 0);
            goto L_8022F13C;
    }
    // 0x8022F028: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x8022F02C: lhu         $v0, 0x6E($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X6E);
    // 0x8022F030: lhu         $v1, 0x6E($s3)
    ctx->r3 = MEM_HU(ctx->r19, 0X6E);
    // 0x8022F034: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8022F038: sh          $v1, 0xB2($s3)
    MEM_H(0XB2, ctx->r19) = ctx->r3;
    // 0x8022F03C: sh          $v0, 0x6E($s3)
    MEM_H(0X6E, ctx->r19) = ctx->r2;
    // 0x8022F040: lhu         $v0, 0x6E($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X6E);
    // 0x8022F044: lhu         $v1, 0x6E($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X6E);
    // 0x8022F048: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8022F04C: sh          $v1, 0xB2($s1)
    MEM_H(0XB2, ctx->r17) = ctx->r3;
    // 0x8022F050: sh          $v0, 0x6E($s1)
    MEM_H(0X6E, ctx->r17) = ctx->r2;
    // 0x8022F054: lbu         $v0, 0x3($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X3);
    // 0x8022F058: bne         $v0, $zero, L_8022F064
    if (ctx->r2 != 0) {
        // 0x8022F05C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022F064;
    }
    // 0x8022F05C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022F060: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022F064:
    // 0x8022F064: sb          $v0, 0xF($s1)
    MEM_B(0XF, ctx->r17) = ctx->r2;
    // 0x8022F068: lh          $v0, 0x6E($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X6E);
    // 0x8022F06C: bgez        $v0, L_8022F0D0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022F070: nop
    
            goto L_8022F0D0;
    }
    // 0x8022F070: nop

    // 0x8022F074: jal         0x80053ED8
    // 0x8022F078: lbu         $a0, 0xC($s3)
    ctx->r4 = MEM_BU(ctx->r19, 0XC);
    func_80053ED8_2F2D8(rdram, ctx);
        goto after_2;
    // 0x8022F078: lbu         $a0, 0xC($s3)
    ctx->r4 = MEM_BU(ctx->r19, 0XC);
    after_2:
    // 0x8022F07C: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8022F080: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022F084: sb          $v0, 0x9($s3)
    MEM_B(0X9, ctx->r19) = ctx->r2;
    // 0x8022F088: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x8022F08C: sb          $v0, 0x48($s4)
    MEM_B(0X48, ctx->r20) = ctx->r2;
    // 0x8022F090: lbu         $a1, 0x3($s3)
    ctx->r5 = MEM_BU(ctx->r19, 0X3);
    // 0x8022F094: addiu       $a0, $s3, 0x160
    ctx->r4 = ADD32(ctx->r19, 0X160);
    // 0x8022F098: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x8022F09C: sll         $a1, $a1, 5
    ctx->r5 = S32(ctx->r5 << 5);
    // 0x8022F0A0: addu        $a1, $s2, $a1
    ctx->r5 = ADD32(ctx->r18, ctx->r5);
    // 0x8022F0A4: jal         0x8009A3B4
    // 0x8022F0A8: addiu       $a1, $a1, 0x208
    ctx->r5 = ADD32(ctx->r5, 0X208);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8022F0A8: addiu       $a1, $a1, 0x208
    ctx->r5 = ADD32(ctx->r5, 0X208);
    after_3:
    // 0x8022F0AC: lbu         $v0, 0x3($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X3);
    // 0x8022F0B0: bne         $v0, $zero, L_8022F0C4
    if (ctx->r2 != 0) {
        // 0x8022F0B4: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_8022F0C4;
    }
    // 0x8022F0B4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022F0B8: sb          $v0, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r2;
    // 0x8022F0BC: j           L_8022F130
    // 0x8022F0C0: sb          $v0, 0xD($s2)
    MEM_B(0XD, ctx->r18) = ctx->r2;
        goto L_8022F130;
    // 0x8022F0C0: sb          $v0, 0xD($s2)
    MEM_B(0XD, ctx->r18) = ctx->r2;
L_8022F0C4:
    // 0x8022F0C4: sb          $v0, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r2;
    // 0x8022F0C8: j           L_8022F130
    // 0x8022F0CC: sb          $v0, 0xE($s2)
    MEM_B(0XE, ctx->r18) = ctx->r2;
        goto L_8022F130;
    // 0x8022F0CC: sb          $v0, 0xE($s2)
    MEM_B(0XE, ctx->r18) = ctx->r2;
L_8022F0D0:
    // 0x8022F0D0: lhu         $v1, 0x42($s4)
    ctx->r3 = MEM_HU(ctx->r20, 0X42);
    // 0x8022F0D4: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x8022F0D8: sh          $v1, 0x42($s4)
    MEM_H(0X42, ctx->r20) = ctx->r3;
    // 0x8022F0DC: lbu         $v0, 0x2($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X2);
    // 0x8022F0E0: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x8022F0E4: lw          $a0, 0x298($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X298);
    // 0x8022F0E8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022F0EC: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8022F0F0: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8022F0F4: lbu         $v0, 0x9($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X9);
    // 0x8022F0F8: andi        $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 & 0XFFFF;
    // 0x8022F0FC: sltu        $v1, $v1, $v0
    ctx->r3 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x8022F100: bne         $v1, $zero, L_8022F124
    if (ctx->r3 != 0) {
        // 0x8022F104: addiu       $a0, $zero, 0xA0
        ctx->r4 = ADD32(0, 0XA0);
            goto L_8022F124;
    }
    // 0x8022F104: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x8022F108: sh          $zero, 0x42($s4)
    MEM_H(0X42, ctx->r20) = 0;
    // 0x8022F10C: lbu         $v0, 0xC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XC);
    // 0x8022F110: addiu       $a0, $zero, 0xA2
    ctx->r4 = ADD32(0, 0XA2);
    // 0x8022F114: addiu       $a1, $s3, 0x14
    ctx->r5 = ADD32(ctx->r19, 0X14);
    // 0x8022F118: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    // 0x8022F11C: j           L_8022F128
    // 0x8022F120: sb          $v0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r2;
        goto L_8022F128;
    // 0x8022F120: sb          $v0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r2;
L_8022F124:
    // 0x8022F124: addiu       $a1, $s3, 0x14
    ctx->r5 = ADD32(ctx->r19, 0X14);
L_8022F128:
    // 0x8022F128: jal         0x8002A33C
    // 0x8022F12C: nop

    func_8002A33C_573C(rdram, ctx);
        goto after_4;
    // 0x8022F12C: nop

    after_4:
L_8022F130:
    // 0x8022F130: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x8022F134: j           L_8022F1D4
    // 0x8022F138: sh          $v0, 0x15E($s3)
    MEM_H(0X15E, ctx->r19) = ctx->r2;
        goto L_8022F1D4;
    // 0x8022F138: sh          $v0, 0x15E($s3)
    MEM_H(0X15E, ctx->r19) = ctx->r2;
L_8022F13C:
    // 0x8022F13C: lw          $v0, 0x320($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X320);
    // 0x8022F140: lui         $s0, 0xFF
    ctx->r16 = S32(0XFF << 16);
    // 0x8022F144: j           L_8022F190
    // 0x8022F148: ori         $s0, $s0, 0xFFFF
    ctx->r16 = ctx->r16 | 0XFFFF;
        goto L_8022F190;
    // 0x8022F148: ori         $s0, $s0, 0xFFFF
    ctx->r16 = ctx->r16 | 0XFFFF;
L_8022F14C:
    // 0x8022F14C: lb          $v0, 0xF($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XF);
    // 0x8022F150: beq         $v0, $zero, L_8022F16C
    if (ctx->r2 == 0) {
        // 0x8022F154: addiu       $v0, $zero, 0x7FFF
        ctx->r2 = ADD32(0, 0X7FFF);
            goto L_8022F16C;
    }
    // 0x8022F154: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x8022F158: sh          $v0, 0x15E($s3)
    MEM_H(0X15E, ctx->r19) = ctx->r2;
    // 0x8022F15C: lbu         $v0, 0xF($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XF);
    // 0x8022F160: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022F164: j           L_8022F1D4
    // 0x8022F168: sb          $v0, 0xF($s1)
    MEM_B(0XF, ctx->r17) = ctx->r2;
        goto L_8022F1D4;
    // 0x8022F168: sb          $v0, 0xF($s1)
    MEM_B(0XF, ctx->r17) = ctx->r2;
L_8022F16C:
    // 0x8022F16C: lw          $v0, 0x328($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X328);
    // 0x8022F170: lui         $s0, 0xFF
    ctx->r16 = S32(0XFF << 16);
    // 0x8022F174: ori         $s0, $s0, 0xFFFF
    ctx->r16 = ctx->r16 | 0XFFFF;
    // 0x8022F178: and         $v0, $v0, $s0
    ctx->r2 = ctx->r2 & ctx->r16;
    // 0x8022F17C: beq         $v0, $zero, L_8022F18C
    if (ctx->r2 == 0) {
        // 0x8022F180: addiu       $a0, $zero, 0xA3
        ctx->r4 = ADD32(0, 0XA3);
            goto L_8022F18C;
    }
    // 0x8022F180: addiu       $a0, $zero, 0xA3
    ctx->r4 = ADD32(0, 0XA3);
    // 0x8022F184: jal         0x8002A33C
    // 0x8022F188: addiu       $a1, $s3, 0x14
    ctx->r5 = ADD32(ctx->r19, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_5;
    // 0x8022F188: addiu       $a1, $s3, 0x14
    ctx->r5 = ADD32(ctx->r19, 0X14);
    after_5:
L_8022F18C:
    // 0x8022F18C: lw          $v0, 0x320($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X320);
L_8022F190:
    // 0x8022F190: and         $v0, $v0, $s0
    ctx->r2 = ctx->r2 & ctx->r16;
    // 0x8022F194: beq         $v0, $zero, L_8022F1A4
    if (ctx->r2 == 0) {
        // 0x8022F198: addiu       $a0, $zero, 0xA3
        ctx->r4 = ADD32(0, 0XA3);
            goto L_8022F1A4;
    }
    // 0x8022F198: addiu       $a0, $zero, 0xA3
    ctx->r4 = ADD32(0, 0XA3);
    // 0x8022F19C: jal         0x8002A33C
    // 0x8022F1A0: addiu       $a1, $s3, 0x14
    ctx->r5 = ADD32(ctx->r19, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_6;
    // 0x8022F1A0: addiu       $a1, $s3, 0x14
    ctx->r5 = ADD32(ctx->r19, 0X14);
    after_6:
L_8022F1A4:
    // 0x8022F1A4: lw          $v0, 0x330($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X330);
    // 0x8022F1A8: and         $v0, $v0, $s0
    ctx->r2 = ctx->r2 & ctx->r16;
    // 0x8022F1AC: beq         $v0, $zero, L_8022F1BC
    if (ctx->r2 == 0) {
        // 0x8022F1B0: addiu       $a0, $zero, 0xA3
        ctx->r4 = ADD32(0, 0XA3);
            goto L_8022F1BC;
    }
    // 0x8022F1B0: addiu       $a0, $zero, 0xA3
    ctx->r4 = ADD32(0, 0XA3);
    // 0x8022F1B4: jal         0x8002A33C
    // 0x8022F1B8: addiu       $a1, $s3, 0x14
    ctx->r5 = ADD32(ctx->r19, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_7;
    // 0x8022F1B8: addiu       $a1, $s3, 0x14
    ctx->r5 = ADD32(ctx->r19, 0X14);
    after_7:
L_8022F1BC:
    // 0x8022F1BC: lw          $v0, 0x338($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X338);
    // 0x8022F1C0: and         $v0, $v0, $s0
    ctx->r2 = ctx->r2 & ctx->r16;
    // 0x8022F1C4: beq         $v0, $zero, L_8022F1D4
    if (ctx->r2 == 0) {
        // 0x8022F1C8: addiu       $a0, $zero, 0xA3
        ctx->r4 = ADD32(0, 0XA3);
            goto L_8022F1D4;
    }
    // 0x8022F1C8: addiu       $a0, $zero, 0xA3
    ctx->r4 = ADD32(0, 0XA3);
    // 0x8022F1CC: jal         0x8002A33C
    // 0x8022F1D0: addiu       $a1, $s3, 0x14
    ctx->r5 = ADD32(ctx->r19, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_8;
    // 0x8022F1D0: addiu       $a1, $s3, 0x14
    ctx->r5 = ADD32(ctx->r19, 0X14);
    after_8:
L_8022F1D4:
    // 0x8022F1D4: lbu         $v1, 0x9($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X9);
    // 0x8022F1D8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022F1DC: beq         $v1, $v0, L_8022F200
    if (ctx->r3 == ctx->r2) {
        // 0x8022F1E0: nop
    
            goto L_8022F200;
    }
    // 0x8022F1E0: nop

    // 0x8022F1E4: lbu         $v0, 0xE($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0XE);
    // 0x8022F1E8: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x8022F1EC: bne         $v0, $zero, L_8022F1FC
    if (ctx->r2 != 0) {
        // 0x8022F1F0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022F1FC;
    }
    // 0x8022F1F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022F1F4: j           L_8022F200
    // 0x8022F1F8: sb          $zero, 0x9($s3)
    MEM_B(0X9, ctx->r19) = 0;
        goto L_8022F200;
    // 0x8022F1F8: sb          $zero, 0x9($s3)
    MEM_B(0X9, ctx->r19) = 0;
L_8022F1FC:
    // 0x8022F1FC: sb          $v0, 0x9($s3)
    MEM_B(0X9, ctx->r19) = ctx->r2;
L_8022F200:
    // 0x8022F200: lbu         $v0, 0x9($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X9);
    // 0x8022F204: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022F208: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022F20C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022F210: lw          $v0, -0x7B44($at)
    ctx->r2 = MEM_W(ctx->r1, -0X7B44);
    // 0x8022F214: jalr        $v0
    // 0x8022F218: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_9;
    // 0x8022F218: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_9:
    // 0x8022F21C: lbu         $v1, 0x9($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X9);
    // 0x8022F220: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022F224: beq         $v1, $v0, L_8022F534
    if (ctx->r3 == ctx->r2) {
        // 0x8022F228: nop
    
            goto L_8022F534;
    }
    // 0x8022F228: nop

    // 0x8022F22C: jal         0x800504EC
    // 0x8022F230: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_800504EC_2B8EC(rdram, ctx);
        goto after_10;
    // 0x8022F230: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_10:
    // 0x8022F234: lbu         $a1, 0x3($s3)
    ctx->r5 = MEM_BU(ctx->r19, 0X3);
    // 0x8022F238: addiu       $s0, $s3, 0x160
    ctx->r16 = ADD32(ctx->r19, 0X160);
    // 0x8022F23C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F240: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x8022F244: sll         $a1, $a1, 5
    ctx->r5 = S32(ctx->r5 << 5);
    // 0x8022F248: addu        $a1, $s2, $a1
    ctx->r5 = ADD32(ctx->r18, ctx->r5);
    // 0x8022F24C: jal         0x8009A3B4
    // 0x8022F250: addiu       $a1, $a1, 0x208
    ctx->r5 = ADD32(ctx->r5, 0X208);
    memcpy_recomp(rdram, ctx);
        goto after_11;
    // 0x8022F250: addiu       $a1, $a1, 0x208
    ctx->r5 = ADD32(ctx->r5, 0X208);
    after_11:
    // 0x8022F254: lbu         $a1, 0x3($s3)
    ctx->r5 = MEM_BU(ctx->r19, 0X3);
    // 0x8022F258: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x8022F25C: sll         $a1, $a1, 5
    ctx->r5 = S32(ctx->r5 << 5);
    // 0x8022F260: addiu       $a1, $a1, 0x208
    ctx->r5 = ADD32(ctx->r5, 0X208);
    // 0x8022F264: jal         0x80051364
    // 0x8022F268: addu        $a1, $s2, $a1
    ctx->r5 = ADD32(ctx->r18, ctx->r5);
    func_80051364_2C764(rdram, ctx);
        goto after_12;
    // 0x8022F268: addu        $a1, $s2, $a1
    ctx->r5 = ADD32(ctx->r18, ctx->r5);
    after_12:
    // 0x8022F26C: lb          $v0, 0xC($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XC);
    // 0x8022F270: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x8022F274: beq         $v0, $zero, L_8022F2B8
    if (ctx->r2 == 0) {
        // 0x8022F278: nop
    
            goto L_8022F2B8;
    }
    // 0x8022F278: nop

    // 0x8022F27C: jal         0x800504EC
    // 0x8022F280: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_800504EC_2B8EC(rdram, ctx);
        goto after_13;
    // 0x8022F280: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_13:
    // 0x8022F284: lbu         $a1, 0x3($s3)
    ctx->r5 = MEM_BU(ctx->r19, 0X3);
    // 0x8022F288: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F28C: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x8022F290: sll         $a1, $a1, 5
    ctx->r5 = S32(ctx->r5 << 5);
    // 0x8022F294: addu        $a1, $s2, $a1
    ctx->r5 = ADD32(ctx->r18, ctx->r5);
    // 0x8022F298: jal         0x8009A3B4
    // 0x8022F29C: addiu       $a1, $a1, 0x208
    ctx->r5 = ADD32(ctx->r5, 0X208);
    memcpy_recomp(rdram, ctx);
        goto after_14;
    // 0x8022F29C: addiu       $a1, $a1, 0x208
    ctx->r5 = ADD32(ctx->r5, 0X208);
    after_14:
    // 0x8022F2A0: lbu         $a1, 0x3($s3)
    ctx->r5 = MEM_BU(ctx->r19, 0X3);
    // 0x8022F2A4: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x8022F2A8: sll         $a1, $a1, 5
    ctx->r5 = S32(ctx->r5 << 5);
    // 0x8022F2AC: addiu       $a1, $a1, 0x208
    ctx->r5 = ADD32(ctx->r5, 0X208);
    // 0x8022F2B0: jal         0x80051364
    // 0x8022F2B4: addu        $a1, $s2, $a1
    ctx->r5 = ADD32(ctx->r18, ctx->r5);
    func_80051364_2C764(rdram, ctx);
        goto after_15;
    // 0x8022F2B4: addu        $a1, $s2, $a1
    ctx->r5 = ADD32(ctx->r18, ctx->r5);
    after_15:
L_8022F2B8:
    // 0x8022F2B8: lhu         $v0, 0x180($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X180);
    // 0x8022F2BC: sh          $v0, 0x10($s4)
    MEM_H(0X10, ctx->r20) = ctx->r2;
    // 0x8022F2C0: lhu         $v0, 0x182($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X182);
    // 0x8022F2C4: addiu       $v0, $v0, 0x28
    ctx->r2 = ADD32(ctx->r2, 0X28);
    // 0x8022F2C8: sh          $v0, 0x12($s4)
    MEM_H(0X12, ctx->r20) = ctx->r2;
    // 0x8022F2CC: lhu         $v0, 0x184($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X184);
    // 0x8022F2D0: lh          $v1, 0x12($s4)
    ctx->r3 = MEM_H(ctx->r20, 0X12);
    // 0x8022F2D4: addiu       $s0, $s4, 0x10
    ctx->r16 = ADD32(ctx->r20, 0X10);
    // 0x8022F2D8: sh          $v0, 0x14($s4)
    MEM_H(0X14, ctx->r20) = ctx->r2;
    // 0x8022F2DC: lh          $v0, 0x10($s4)
    ctx->r2 = MEM_H(ctx->r20, 0X10);
    // 0x8022F2E0: lh          $a1, 0x14($s4)
    ctx->r5 = MEM_H(ctx->r20, 0X14);
    // 0x8022F2E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F2E8: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022F2EC: sw          $v1, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->r3;
    // 0x8022F2F0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022F2F4: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x8022F2F8: sw          $v0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r2;
    // 0x8022F2FC: sw          $a1, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->r5;
    // 0x8022F300: lhu         $a2, 0x56($s3)
    ctx->r6 = MEM_HU(ctx->r19, 0X56);
    // 0x8022F304: addiu       $a3, $zero, -0x320
    ctx->r7 = ADD32(0, -0X320);
    // 0x8022F308: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x8022F30C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8022F310: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8022F314: jal         0x8004DBA0
    // 0x8022F318: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_16;
    // 0x8022F318: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_16:
    // 0x8022F31C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F320: lbu         $v1, 0x1($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X1);
    // 0x8022F324: addiu       $a1, $zero, 0xC8
    ctx->r5 = ADD32(0, 0XC8);
    // 0x8022F328: addiu       $v0, $s4, 0x18
    ctx->r2 = ADD32(ctx->r20, 0X18);
    // 0x8022F32C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022F330: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x8022F334: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022F338: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x8022F33C: lb          $v0, 0x73($s3)
    ctx->r2 = MEM_B(ctx->r19, 0X73);
    // 0x8022F340: addiu       $s1, $zero, 0x80
    ctx->r17 = ADD32(0, 0X80);
    // 0x8022F344: lui         $s2, 0x408
    ctx->r18 = S32(0X408 << 16);
    // 0x8022F348: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8022F34C: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x8022F350: or          $v0, $v0, $s2
    ctx->r2 = ctx->r2 | ctx->r18;
    // 0x8022F354: jal         0x80051E18
    // 0x8022F358: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80051E18_2D218(rdram, ctx);
        goto after_17;
    // 0x8022F358: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_17:
    // 0x8022F35C: lhu         $v0, 0x1B8($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X1B8);
    // 0x8022F360: sh          $v0, 0x10($s4)
    MEM_H(0X10, ctx->r20) = ctx->r2;
    // 0x8022F364: lhu         $v0, 0x1BA($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X1BA);
    // 0x8022F368: addiu       $v0, $v0, 0x78
    ctx->r2 = ADD32(ctx->r2, 0X78);
    // 0x8022F36C: sh          $v0, 0x12($s4)
    MEM_H(0X12, ctx->r20) = ctx->r2;
    // 0x8022F370: lhu         $v0, 0x1BC($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X1BC);
    // 0x8022F374: lh          $v1, 0x12($s4)
    ctx->r3 = MEM_H(ctx->r20, 0X12);
    // 0x8022F378: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F37C: sh          $v0, 0x14($s4)
    MEM_H(0X14, ctx->r20) = ctx->r2;
    // 0x8022F380: lh          $v0, 0x10($s4)
    ctx->r2 = MEM_H(ctx->r20, 0X10);
    // 0x8022F384: lh          $a1, 0x14($s4)
    ctx->r5 = MEM_H(ctx->r20, 0X14);
    // 0x8022F388: addiu       $a3, $zero, -0xF00
    ctx->r7 = ADD32(0, -0XF00);
    // 0x8022F38C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022F390: sw          $v1, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->r3;
    // 0x8022F394: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022F398: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x8022F39C: sw          $v0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r2;
    // 0x8022F3A0: sw          $a1, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->r5;
    // 0x8022F3A4: lhu         $a2, 0x56($s3)
    ctx->r6 = MEM_HU(ctx->r19, 0X56);
    // 0x8022F3A8: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x8022F3AC: addiu       $v0, $zero, 0x820
    ctx->r2 = ADD32(0, 0X820);
    // 0x8022F3B0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8022F3B4: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022F3B8: jal         0x8004DBA0
    // 0x8022F3BC: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_18;
    // 0x8022F3BC: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_18:
    // 0x8022F3C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F3C4: lbu         $v1, 0x1($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X1);
    // 0x8022F3C8: addiu       $a1, $zero, 0x46
    ctx->r5 = ADD32(0, 0X46);
    // 0x8022F3CC: addiu       $v0, $s4, 0x28
    ctx->r2 = ADD32(ctx->r20, 0X28);
    // 0x8022F3D0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022F3D4: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x8022F3D8: lb          $v0, 0x73($s3)
    ctx->r2 = MEM_B(ctx->r19, 0X73);
    // 0x8022F3DC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022F3E0: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x8022F3E4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8022F3E8: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x8022F3EC: or          $v0, $v0, $s2
    ctx->r2 = ctx->r2 | ctx->r18;
    // 0x8022F3F0: jal         0x80051E18
    // 0x8022F3F4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80051E18_2D218(rdram, ctx);
        goto after_19;
    // 0x8022F3F4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_19:
    // 0x8022F3F8: lhu         $v0, 0x1B8($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X1B8);
    // 0x8022F3FC: sh          $v0, 0x10($s4)
    MEM_H(0X10, ctx->r20) = ctx->r2;
    // 0x8022F400: lhu         $v0, 0x1BA($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X1BA);
    // 0x8022F404: addiu       $v0, $v0, 0x78
    ctx->r2 = ADD32(ctx->r2, 0X78);
    // 0x8022F408: sh          $v0, 0x12($s4)
    MEM_H(0X12, ctx->r20) = ctx->r2;
    // 0x8022F40C: lhu         $v0, 0x1BC($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X1BC);
    // 0x8022F410: lh          $v1, 0x12($s4)
    ctx->r3 = MEM_H(ctx->r20, 0X12);
    // 0x8022F414: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F418: sh          $v0, 0x14($s4)
    MEM_H(0X14, ctx->r20) = ctx->r2;
    // 0x8022F41C: lh          $v0, 0x10($s4)
    ctx->r2 = MEM_H(ctx->r20, 0X10);
    // 0x8022F420: lh          $a1, 0x14($s4)
    ctx->r5 = MEM_H(ctx->r20, 0X14);
    // 0x8022F424: addiu       $a3, $zero, -0xF00
    ctx->r7 = ADD32(0, -0XF00);
    // 0x8022F428: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022F42C: sw          $v1, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->r3;
    // 0x8022F430: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022F434: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x8022F438: sw          $v0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r2;
    // 0x8022F43C: sw          $a1, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->r5;
    // 0x8022F440: lhu         $a2, 0x56($s3)
    ctx->r6 = MEM_HU(ctx->r19, 0X56);
    // 0x8022F444: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x8022F448: addiu       $v0, $zero, -0x820
    ctx->r2 = ADD32(0, -0X820);
    // 0x8022F44C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8022F450: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022F454: jal         0x8004DBA0
    // 0x8022F458: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_20;
    // 0x8022F458: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_20:
    // 0x8022F45C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F460: lbu         $v1, 0x1($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X1);
    // 0x8022F464: addiu       $a1, $zero, 0x46
    ctx->r5 = ADD32(0, 0X46);
    // 0x8022F468: addiu       $v0, $s4, 0x30
    ctx->r2 = ADD32(ctx->r20, 0X30);
    // 0x8022F46C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022F470: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x8022F474: lb          $v0, 0x73($s3)
    ctx->r2 = MEM_B(ctx->r19, 0X73);
    // 0x8022F478: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022F47C: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x8022F480: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8022F484: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x8022F488: or          $v0, $v0, $s2
    ctx->r2 = ctx->r2 | ctx->r18;
    // 0x8022F48C: jal         0x80051E18
    // 0x8022F490: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80051E18_2D218(rdram, ctx);
        goto after_21;
    // 0x8022F490: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_21:
    // 0x8022F494: lhu         $v0, 0x1B8($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X1B8);
    // 0x8022F498: sh          $v0, 0x10($s4)
    MEM_H(0X10, ctx->r20) = ctx->r2;
    // 0x8022F49C: lhu         $v0, 0x1BA($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X1BA);
    // 0x8022F4A0: addiu       $v0, $v0, 0x78
    ctx->r2 = ADD32(ctx->r2, 0X78);
    // 0x8022F4A4: sh          $v0, 0x12($s4)
    MEM_H(0X12, ctx->r20) = ctx->r2;
    // 0x8022F4A8: lhu         $v0, 0x1BC($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X1BC);
    // 0x8022F4AC: lh          $v1, 0x12($s4)
    ctx->r3 = MEM_H(ctx->r20, 0X12);
    // 0x8022F4B0: sh          $v0, 0x14($s4)
    MEM_H(0X14, ctx->r20) = ctx->r2;
    // 0x8022F4B4: lh          $v0, 0x10($s4)
    ctx->r2 = MEM_H(ctx->r20, 0X10);
    // 0x8022F4B8: lh          $a1, 0x14($s4)
    ctx->r5 = MEM_H(ctx->r20, 0X14);
    // 0x8022F4BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F4C0: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022F4C4: sw          $v1, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->r3;
    // 0x8022F4C8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022F4CC: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x8022F4D0: sw          $v0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r2;
    // 0x8022F4D4: sw          $a1, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->r5;
    // 0x8022F4D8: lhu         $a2, 0x56($s3)
    ctx->r6 = MEM_HU(ctx->r19, 0X56);
    // 0x8022F4DC: addiu       $a3, $zero, -0xF00
    ctx->r7 = ADD32(0, -0XF00);
    // 0x8022F4E0: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x8022F4E4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8022F4E8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8022F4EC: jal         0x8004DBA0
    // 0x8022F4F0: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_22;
    // 0x8022F4F0: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_22:
    // 0x8022F4F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F4F8: lbu         $v1, 0x1($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X1);
    // 0x8022F4FC: addiu       $a1, $zero, 0x46
    ctx->r5 = ADD32(0, 0X46);
    // 0x8022F500: addiu       $v0, $s4, 0x20
    ctx->r2 = ADD32(ctx->r20, 0X20);
    // 0x8022F504: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022F508: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x8022F50C: lb          $v0, 0x73($s3)
    ctx->r2 = MEM_B(ctx->r19, 0X73);
    // 0x8022F510: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022F514: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x8022F518: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8022F51C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8022F520: or          $v0, $v0, $s2
    ctx->r2 = ctx->r2 | ctx->r18;
    // 0x8022F524: jal         0x80051E18
    // 0x8022F528: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80051E18_2D218(rdram, ctx);
        goto after_23;
    // 0x8022F528: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_23:
    // 0x8022F52C: j           L_8022F548
    // 0x8022F530: nop

        goto L_8022F548;
    // 0x8022F530: nop

L_8022F534:
    // 0x8022F534: jal         0x800504EC
    // 0x8022F538: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_800504EC_2B8EC(rdram, ctx);
        goto after_24;
    // 0x8022F538: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_24:
    // 0x8022F53C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x8022F540: jal         0x80051364
    // 0x8022F544: addiu       $a1, $a0, 0x160
    ctx->r5 = ADD32(ctx->r4, 0X160);
    func_80051364_2C764(rdram, ctx);
        goto after_25;
    // 0x8022F544: addiu       $a1, $a0, 0x160
    ctx->r5 = ADD32(ctx->r4, 0X160);
    after_25:
L_8022F548:
    // 0x8022F548: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8022F54C: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x8022F550: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x8022F554: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x8022F558: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8022F55C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8022F560: jr          $ra
    // 0x8022F564: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8022F564: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80230F48_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230F48: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80230F4C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80230F50: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80230F54: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80230F58: jal         0x8005131C
    // 0x80230F5C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    func_8005131C_2C71C(rdram, ctx);
        goto after_0;
    // 0x80230F5C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_0:
    // 0x80230F60: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80230F64: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230F68: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80230F6C: addiu       $v0, $zero, 0x37
    ctx->r2 = ADD32(0, 0X37);
    // 0x80230F70: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80230F74: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80230F78: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x80230F7C: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80230F80: jal         0x8004D5D4
    // 0x80230F84: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_1;
    // 0x80230F84: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_1:
    // 0x80230F88: addiu       $v0, $zero, 0x67
    ctx->r2 = ADD32(0, 0X67);
    // 0x80230F8C: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x80230F90: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x80230F94: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x80230F98: sw          $zero, 0x70($s0)
    MEM_W(0X70, ctx->r16) = 0;
    // 0x80230F9C: sw          $zero, 0x74($s0)
    MEM_W(0X74, ctx->r16) = 0;
    // 0x80230FA0: sb          $zero, 0x386($s0)
    MEM_B(0X386, ctx->r16) = 0;
    // 0x80230FA4: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80230FA8: lw          $a0, 0x298($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X298);
    // 0x80230FAC: addiu       $v0, $zero, 0x180
    ctx->r2 = ADD32(0, 0X180);
    // 0x80230FB0: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80230FB4: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80230FB8: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80230FBC: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80230FC0: addiu       $v0, $v0, -0x7A60
    ctx->r2 = ADD32(ctx->r2, -0X7A60);
    // 0x80230FC4: sh          $zero, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = 0;
    // 0x80230FC8: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    // 0x80230FCC: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80230FD0: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80230FD4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80230FD8: lbu         $v0, 0xA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XA);
    // 0x80230FDC: sb          $v0, 0x73($s0)
    MEM_B(0X73, ctx->r16) = ctx->r2;
    // 0x80230FE0: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x80230FE4: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x80230FE8: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x80230FEC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80230FF0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80230FF4: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80230FF8: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x80230FFC: addiu       $a2, $zero, -0x60
    ctx->r6 = ADD32(0, -0X60);
    // 0x80231000: lbu         $v1, 0xB($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0XB);
    // 0x80231004: addiu       $a0, $s0, 0x368
    ctx->r4 = ADD32(ctx->r16, 0X368);
    // 0x80231008: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x8023100C: sb          $zero, 0x1DC($s0)
    MEM_B(0X1DC, ctx->r16) = 0;
    // 0x80231010: sh          $zero, 0x1D8($s0)
    MEM_H(0X1D8, ctx->r16) = 0;
    // 0x80231014: sb          $v0, 0x1DD($s0)
    MEM_B(0X1DD, ctx->r16) = ctx->r2;
    // 0x80231018: sb          $zero, 0x67($s0)
    MEM_B(0X67, ctx->r16) = 0;
    // 0x8023101C: sb          $zero, 0xCA($s0)
    MEM_B(0XCA, ctx->r16) = 0;
    // 0x80231020: jal         0x800540BC
    // 0x80231024: sh          $v1, 0xC8($s0)
    MEM_H(0XC8, ctx->r16) = ctx->r3;
    func_800540BC_2F4BC(rdram, ctx);
        goto after_2;
    // 0x80231024: sh          $v1, 0xC8($s0)
    MEM_H(0XC8, ctx->r16) = ctx->r3;
    after_2:
    // 0x80231028: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x8023102C: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x80231030: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x80231034: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80231038: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023103C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80231040: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x80231044: lbu         $v0, 0x8($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X8);
    // 0x80231048: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8023104C: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x80231050: sb          $a0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r4;
    // 0x80231054: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80231058: sh          $v0, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r2;
    // 0x8023105C: sh          $v0, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r2;
    // 0x80231060: bne         $v1, $zero, L_80231088
    if (ctx->r3 != 0) {
        // 0x80231064: sh          $v0, 0xB2($s0)
        MEM_H(0XB2, ctx->r16) = ctx->r2;
            goto L_80231088;
    }
    // 0x80231064: sh          $v0, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r2;
    // 0x80231068: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8023106C: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80231070: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x80231074: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80231078: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8023107C: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
    // 0x80231080: j           L_802310A0
    // 0x80231084: sb          $a0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r4;
        goto L_802310A0;
    // 0x80231084: sb          $a0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r4;
L_80231088:
    // 0x80231088: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023108C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80231090: addiu       $v0, $zero, 0x2D0
    ctx->r2 = ADD32(0, 0X2D0);
    // 0x80231094: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80231098: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x8023109C: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
L_802310A0:
    // 0x802310A0: sb          $v0, 0x385($s0)
    MEM_B(0X385, ctx->r16) = ctx->r2;
    // 0x802310A4: sb          $zero, 0x384($s0)
    MEM_B(0X384, ctx->r16) = 0;
    // 0x802310A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802310AC: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x802310B0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802310B4: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x802310B8: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x802310BC: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x802310C0: jal         0x80050294
    // 0x802310C4: sh          $v0, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_3;
    // 0x802310C4: sh          $v0, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r2;
    after_3:
    // 0x802310C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802310CC: jal         0x802310E8
    // 0x802310D0: sw          $zero, 0x8($s1)
    MEM_W(0X8, ctx->r17) = 0;
    func_802310E8_ovl31(rdram, ctx);
        goto after_4;
    // 0x802310D0: sw          $zero, 0x8($s1)
    MEM_W(0X8, ctx->r17) = 0;
    after_4:
    // 0x802310D4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802310D8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802310DC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802310E0: jr          $ra
    // 0x802310E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802310E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80227D40_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227D40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227D44: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227D48: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227D4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227D50: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80227D54: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80227D58: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80227D5C: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80227D60: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x80227D64: sw          $zero, 0x44($s0)
    MEM_W(0X44, ctx->r16) = 0;
    // 0x80227D68: sw          $zero, 0x48($s0)
    MEM_W(0X48, ctx->r16) = 0;
    // 0x80227D6C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80227D70: jal         0x8004D5D4
    // 0x80227D74: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80227D74: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x80227D78: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x80227D7C: sw          $zero, 0x32C($s0)
    MEM_W(0X32C, ctx->r16) = 0;
    // 0x80227D80: sw          $zero, 0x330($s0)
    MEM_W(0X330, ctx->r16) = 0;
    // 0x80227D84: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80227D88: lw          $a0, 0x298($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X298);
    // 0x80227D8C: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80227D90: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80227D94: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80227D98: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80227D9C: addiu       $v0, $zero, 0x26
    ctx->r2 = ADD32(0, 0X26);
    // 0x80227DA0: sh          $v0, 0x328($s0)
    MEM_H(0X328, ctx->r16) = ctx->r2;
    // 0x80227DA4: sw          $zero, 0x33C($s0)
    MEM_W(0X33C, ctx->r16) = 0;
    // 0x80227DA8: sw          $zero, 0x340($s0)
    MEM_W(0X340, ctx->r16) = 0;
    // 0x80227DAC: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80227DB0: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80227DB4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80227DB8: lbu         $a1, 0xF($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0XF);
    // 0x80227DBC: addiu       $a2, $zero, -0x60
    ctx->r6 = ADD32(0, -0X60);
    // 0x80227DC0: jal         0x800540BC
    // 0x80227DC4: addiu       $a0, $s0, 0x34C
    ctx->r4 = ADD32(ctx->r16, 0X34C);
    func_800540BC_2F4BC(rdram, ctx);
        goto after_1;
    // 0x80227DC4: addiu       $a0, $s0, 0x34C
    ctx->r4 = ADD32(ctx->r16, 0X34C);
    after_1:
    // 0x80227DC8: lbu         $a0, 0xD($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XD);
    // 0x80227DCC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80227DD0: sh          $zero, 0x35C($s0)
    MEM_H(0X35C, ctx->r16) = 0;
    // 0x80227DD4: sh          $zero, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = 0;
    // 0x80227DD8: sh          $zero, 0x364($s0)
    MEM_H(0X364, ctx->r16) = 0;
    // 0x80227DDC: jal         0x80053ED8
    // 0x80227DE0: sh          $v0, 0x360($s0)
    MEM_H(0X360, ctx->r16) = ctx->r2;
    func_80053ED8_2F2D8(rdram, ctx);
        goto after_2;
    // 0x80227DE0: sh          $v0, 0x360($s0)
    MEM_H(0X360, ctx->r16) = ctx->r2;
    after_2:
    // 0x80227DE4: sw          $v0, 0x368($s0)
    MEM_W(0X368, ctx->r16) = ctx->r2;
    // 0x80227DE8: jal         0x80053ED8
    // 0x80227DEC: lbu         $a0, 0xD($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0XD);
    func_80053ED8_2F2D8(rdram, ctx);
        goto after_3;
    // 0x80227DEC: lbu         $a0, 0xD($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0XD);
    after_3:
    // 0x80227DF0: lw          $v1, 0x368($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X368);
    // 0x80227DF4: sw          $v0, 0x36C($s0)
    MEM_W(0X36C, ctx->r16) = ctx->r2;
    // 0x80227DF8: jal         0x80053ED8
    // 0x80227DFC: lbu         $a0, 0xE($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0XE);
    func_80053ED8_2F2D8(rdram, ctx);
        goto after_4;
    // 0x80227DFC: lbu         $a0, 0xE($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0XE);
    after_4:
    // 0x80227E00: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x80227E04: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80227E08: lw          $a0, 0x298($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X298);
    // 0x80227E0C: sw          $v0, 0x370($s0)
    MEM_W(0X370, ctx->r16) = ctx->r2;
    // 0x80227E10: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80227E14: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80227E18: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80227E1C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80227E20: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80227E24: lbu         $v1, 0x8($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X8);
    // 0x80227E28: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227E2C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80227E30: addiu       $v0, $v0, -0x7E04
    ctx->r2 = ADD32(ctx->r2, -0X7E04);
    // 0x80227E34: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    // 0x80227E38: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227E3C: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x80227E40: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80227E44: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80227E48: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x80227E4C: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x80227E50: sh          $v1, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r3;
    // 0x80227E54: sh          $v1, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r3;
    // 0x80227E58: jal         0x80050294
    // 0x80227E5C: sh          $v1, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r3;
    func_80050294_2B694(rdram, ctx);
        goto after_5;
    // 0x80227E5C: sh          $v1, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r3;
    after_5:
    // 0x80227E60: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80227E64: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80227E68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227E6C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227E70: jr          $ra
    // 0x80227E74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227E74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80232C10_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232C10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80232C14: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80232C18: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80232C1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80232C20: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x80232C24: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80232C28: bne         $v1, $v0, L_80232C6C
    if (ctx->r3 != ctx->r2) {
        // 0x80232C2C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80232C6C;
    }
    // 0x80232C2C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80232C30: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80232C34: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80232C38: jal         0x80050294
    // 0x80232C3C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80232C3C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_0:
    // 0x80232C40: lbu         $v1, 0xCA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XCA);
    // 0x80232C44: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80232C48: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80232C4C: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x80232C50: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80232C54: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80232C58: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
    // 0x80232C5C: sb          $v0, 0x385($s0)
    MEM_B(0X385, ctx->r16) = ctx->r2;
    // 0x80232C60: sb          $zero, 0x384($s0)
    MEM_B(0X384, ctx->r16) = 0;
    // 0x80232C64: andi        $v1, $v1, 0xFC
    ctx->r3 = ctx->r3 & 0XFC;
    // 0x80232C68: sb          $v1, 0xCA($s0)
    MEM_B(0XCA, ctx->r16) = ctx->r3;
L_80232C6C:
    // 0x80232C6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80232C70: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80232C74: jr          $ra
    // 0x80232C78: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80232C78: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802363A0_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802363A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802363A4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802363A8: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x802363AC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802363B0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802363B4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802363B8: lw          $v0, -0x72D0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X72D0);
    // 0x802363BC: jalr        $v0
    // 0x802363C0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802363C0: nop

    after_0:
    // 0x802363C4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802363C8: jr          $ra
    // 0x802363CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802363CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022F584_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F584: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022F588: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022F58C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F590: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022F594: jal         0x80053ED8
    // 0x8022F598: lbu         $a0, 0xC($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XC);
    func_80053ED8_2F2D8(rdram, ctx);
        goto after_0;
    // 0x8022F598: lbu         $a0, 0xC($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XC);
    after_0:
    // 0x8022F59C: lbu         $v0, 0xC($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XC);
    // 0x8022F5A0: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022F5A4: bne         $v0, $zero, L_8022F5B8
    if (ctx->r2 != 0) {
        // 0x8022F5A8: addiu       $a3, $zero, 0x1
        ctx->r7 = ADD32(0, 0X1);
            goto L_8022F5B8;
    }
    // 0x8022F5A8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x8022F5AC: lbu         $v1, 0xAD($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XAD);
    // 0x8022F5B0: j           L_8022F628
    // 0x8022F5B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8022F628;
    // 0x8022F5B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022F5B8:
    // 0x8022F5B8: lbu         $v1, 0xE($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XE);
    // 0x8022F5BC: andi        $v0, $v1, 0x4
    ctx->r2 = ctx->r3 & 0X4;
    // 0x8022F5C0: beq         $v0, $zero, L_8022F5E8
    if (ctx->r2 == 0) {
        // 0x8022F5C4: andi        $v0, $v1, 0x8
        ctx->r2 = ctx->r3 & 0X8;
            goto L_8022F5E8;
    }
    // 0x8022F5C4: andi        $v0, $v1, 0x8
    ctx->r2 = ctx->r3 & 0X8;
    // 0x8022F5C8: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x8022F5CC: beq         $v0, $zero, L_8022F648
    if (ctx->r2 == 0) {
        // 0x8022F5D0: sb          $zero, 0xAC($s0)
        MEM_B(0XAC, ctx->r16) = 0;
            goto L_8022F648;
    }
    // 0x8022F5D0: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x8022F5D4: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022F5D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F5DC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022F5E0: j           L_8022F640
    // 0x8022F5E4: sb          $zero, 0xAD($a0)
    MEM_B(0XAD, ctx->r4) = 0;
        goto L_8022F640;
    // 0x8022F5E4: sb          $zero, 0xAD($a0)
    MEM_B(0XAD, ctx->r4) = 0;
L_8022F5E8:
    // 0x8022F5E8: beq         $v0, $zero, L_8022F5FC
    if (ctx->r2 == 0) {
        // 0x8022F5EC: addiu       $a3, $zero, 0x3
        ctx->r7 = ADD32(0, 0X3);
            goto L_8022F5FC;
    }
    // 0x8022F5EC: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    // 0x8022F5F0: lbu         $v1, 0xAD($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XAD);
    // 0x8022F5F4: j           L_8022F628
    // 0x8022F5F8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_8022F628;
    // 0x8022F5F8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_8022F5FC:
    // 0x8022F5FC: andi        $v0, $v1, 0x10
    ctx->r2 = ctx->r3 & 0X10;
    // 0x8022F600: beq         $v0, $zero, L_8022F614
    if (ctx->r2 == 0) {
        // 0x8022F604: addiu       $a3, $zero, 0x4
        ctx->r7 = ADD32(0, 0X4);
            goto L_8022F614;
    }
    // 0x8022F604: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x8022F608: lbu         $v1, 0xAD($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XAD);
    // 0x8022F60C: j           L_8022F628
    // 0x8022F610: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_8022F628;
    // 0x8022F610: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_8022F614:
    // 0x8022F614: andi        $v0, $v1, 0x20
    ctx->r2 = ctx->r3 & 0X20;
    // 0x8022F618: beq         $v0, $zero, L_8022F648
    if (ctx->r2 == 0) {
        // 0x8022F61C: addiu       $a3, $zero, 0x5
        ctx->r7 = ADD32(0, 0X5);
            goto L_8022F648;
    }
    // 0x8022F61C: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    // 0x8022F620: lbu         $v1, 0xAD($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XAD);
    // 0x8022F624: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_8022F628:
    // 0x8022F628: beq         $v1, $v0, L_8022F648
    if (ctx->r3 == ctx->r2) {
        // 0x8022F62C: sb          $a3, 0xAC($s0)
        MEM_B(0XAC, ctx->r16) = ctx->r7;
            goto L_8022F648;
    }
    // 0x8022F62C: sb          $a3, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r7;
    // 0x8022F630: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022F634: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F638: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022F63C: sb          $a3, 0xAD($a0)
    MEM_B(0XAD, ctx->r4) = ctx->r7;
L_8022F640:
    // 0x8022F640: jal         0x800502EC
    // 0x8022F644: nop

    func_800502EC_2B6EC(rdram, ctx);
        goto after_1;
    // 0x8022F644: nop

    after_1:
L_8022F648:
    // 0x8022F648: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022F64C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022F650: jr          $ra
    // 0x8022F654: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022F654: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802273C0_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802273C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802273C4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802273C8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802273CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802273D0: lbu         $v1, 0x43A($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X43A);
    // 0x802273D4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802273D8: bnel        $v1, $v0, L_8022740C
    if (ctx->r3 != ctx->r2) {
        // 0x802273DC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022740C;
    }
    goto skip_0;
    // 0x802273DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    skip_0:
    // 0x802273E0: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x802273E4: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x802273E8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802273EC: addiu       $v1, $zero, 0x7
    ctx->r3 = ADD32(0, 0X7);
    // 0x802273F0: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x802273F4: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x802273F8: jal         0x80050294
    // 0x802273FC: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x802273FC: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    after_0:
    // 0x80227400: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80227404: j           L_8022744C
    // 0x80227408: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
        goto L_8022744C;
    // 0x80227408: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
L_8022740C:
    // 0x8022740C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80227410: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80227414: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80227418: jal         0x80050294
    // 0x8022741C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x8022741C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_1:
    // 0x80227420: lb          $v0, 0xE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE);
    // 0x80227424: lbu         $a0, 0x43A($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X43A);
    // 0x80227428: beq         $v0, $a0, L_8022743C
    if (ctx->r2 == ctx->r4) {
        // 0x8022742C: nop
    
            goto L_8022743C;
    }
    // 0x8022742C: nop

    // 0x80227430: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x80227434: bne         $v0, $a0, L_8022744C
    if (ctx->r2 != ctx->r4) {
        // 0x80227438: nop
    
            goto L_8022744C;
    }
    // 0x80227438: nop

L_8022743C:
    // 0x8022743C: jal         0x80053ED8
    // 0x80227440: nop

    func_80053ED8_2F2D8(rdram, ctx);
        goto after_2;
    // 0x80227440: nop

    after_2:
    // 0x80227444: addiu       $v1, $zero, 0x42
    ctx->r3 = ADD32(0, 0X42);
    // 0x80227448: sb          $v1, 0xE($v0)
    MEM_B(0XE, ctx->r2) = ctx->r3;
L_8022744C:
    // 0x8022744C: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x80227450: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227454: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x80227458: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022745C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227460: jr          $ra
    // 0x80227464: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227464: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802367F0_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802367F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802367F4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802367F8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802367FC: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80236800: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80236804: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80236808: jal         0x8009A3B4
    // 0x8023680C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8023680C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x80236810: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80236814: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80236818: jal         0x8009A3B4
    // 0x8023681C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8023681C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80236820: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80236824: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80236828: jal         0x8009A3B4
    // 0x8023682C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8023682C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80236830: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80236834: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80236838: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023683C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80236840: lw          $v0, -0x7290($at)
    ctx->r2 = MEM_W(ctx->r1, -0X7290);
    // 0x80236844: jalr        $v0
    // 0x80236848: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x80236848: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8023684C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80236850: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80236854: beq         $v0, $zero, L_8023686C
    if (ctx->r2 == 0) {
        // 0x80236858: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023686C;
    }
    // 0x80236858: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023685C: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x80236860: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x80236864: jal         0x8003B564
    // 0x80236868: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_4;
    // 0x80236868: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_4:
L_8023686C:
    // 0x8023686C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80236870: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80236874: jr          $ra
    // 0x80236878: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80236878: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
