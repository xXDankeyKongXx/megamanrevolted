#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80225F30_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225F30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225F34: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225F38: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225F3C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225F40: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x80225F44: sltiu       $v0, $v1, 0x7
    ctx->r2 = ctx->r3 < 0X7 ? 1 : 0;
    // 0x80225F48: beq         $v0, $zero, L_80226108
    if (ctx->r2 == 0) {
        // 0x80225F4C: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80226108;
    }
    // 0x80225F4C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80225F50: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80225F54: addu        $at, $at, $v0
    gpr jr_addend_80225F5C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80225F58: lw          $v0, 0x2AA8($at)
    ctx->r2 = ADD32(ctx->r1, 0X2AA8);
    // 0x80225F5C: jr          $v0
    // 0x80225F60: nop

    switch (jr_addend_80225F5C >> 2) {
        case 0: goto L_80225F64; break;
        case 1: goto L_80225FA0; break;
        case 2: goto L_80226058; break;
        case 3: goto L_80226008; break;
        case 4: goto L_8022601C; break;
        case 5: goto L_80226048; break;
        case 6: goto L_80226100; break;
        default: switch_error(__func__, 0x80225F5C, 0x80252AA8);
    }
    // 0x80225F60: nop

L_80225F64:
    // 0x80225F64: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80225F68: jal         0x8006FF84
    // 0x80225F6C: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_0;
    // 0x80225F6C: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_0:
    // 0x80225F70: beq         $v0, $zero, L_80226108
    if (ctx->r2 == 0) {
        // 0x80225F74: nop
    
            goto L_80226108;
    }
    // 0x80225F74: nop

    // 0x80225F78: jal         0x80226118
    // 0x80225F7C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80226118_ovl10(rdram, ctx);
        goto after_1;
    // 0x80225F7C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80225F80: jal         0x80226314
    // 0x80225F84: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80226314_ovl10(rdram, ctx);
        goto after_2;
    // 0x80225F84: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80225F88: jal         0x8005FB90
    // 0x80225F8C: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_3;
    // 0x80225F8C: nop

    after_3:
    // 0x80225F90: jal         0x80060018
    // 0x80225F94: nop

    func_80060018_3B418(rdram, ctx);
        goto after_4;
    // 0x80225F94: nop

    after_4:
    // 0x80225F98: j           L_80226058
    // 0x80225F9C: nop

        goto L_80226058;
    // 0x80225F9C: nop

L_80225FA0:
    // 0x80225FA0: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80225FA4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225FA8: bne         $v1, $v0, L_80225FCC
    if (ctx->r3 != ctx->r2) {
        // 0x80225FAC: nop
    
            goto L_80225FCC;
    }
    // 0x80225FAC: nop

    // 0x80225FB0: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225FB4: lbu         $v1, 0x5($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X5);
    // 0x80225FB8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225FBC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80225FC0: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    // 0x80225FC4: j           L_80226108
    // 0x80225FC8: sb          $v1, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r3;
        goto L_80226108;
    // 0x80225FC8: sb          $v1, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r3;
L_80225FCC:
    // 0x80225FCC: jal         0x8006072C
    // 0x80225FD0: nop

    func_8006072C_3BB2C(rdram, ctx);
        goto after_5;
    // 0x80225FD0: nop

    after_5:
    // 0x80225FD4: beq         $v0, $zero, L_80225FE8
    if (ctx->r2 == 0) {
        // 0x80225FD8: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_80225FE8;
    }
    // 0x80225FD8: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80225FDC: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    // 0x80225FE0: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x80225FE4: sh          $zero, 0x6($s0)
    MEM_H(0X6, ctx->r16) = 0;
L_80225FE8:
    // 0x80225FE8: jal         0x80226314
    // 0x80225FEC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80226314_ovl10(rdram, ctx);
        goto after_6;
    // 0x80225FEC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x80225FF0: jal         0x8005FB90
    // 0x80225FF4: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_7;
    // 0x80225FF4: nop

    after_7:
L_80225FF8:
    // 0x80225FF8: jal         0x80060018
    // 0x80225FFC: nop

    func_80060018_3B418(rdram, ctx);
        goto after_8;
    // 0x80225FFC: nop

    after_8:
    // 0x80226000: j           L_80226108
    // 0x80226004: nop

        goto L_80226108;
    // 0x80226004: nop

L_80226008:
    // 0x80226008: lui         $a0, 0x101
    ctx->r4 = S32(0X101 << 16);
    // 0x8022600C: jal         0x80036B1C
    // 0x80226010: ori         $a0, $a0, 0x2401
    ctx->r4 = ctx->r4 | 0X2401;
    func_80036B1C_11F1C(rdram, ctx);
        goto after_9;
    // 0x80226010: ori         $a0, $a0, 0x2401
    ctx->r4 = ctx->r4 | 0X2401;
    after_9:
    // 0x80226014: j           L_80226058
    // 0x80226018: nop

        goto L_80226058;
    // 0x80226018: nop

L_8022601C:
    // 0x8022601C: jal         0x80036B7C
    // 0x80226020: nop

    func_80036B7C_11F7C(rdram, ctx);
        goto after_10;
    // 0x80226020: nop

    after_10:
    // 0x80226024: beq         $v0, $zero, L_80226108
    if (ctx->r2 == 0) {
        // 0x80226028: nop
    
            goto L_80226108;
    }
    // 0x80226028: nop

    // 0x8022602C: jal         0x8004F488
    // 0x80226030: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
    func_8004F488_2A888(rdram, ctx);
        goto after_11;
    // 0x80226030: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
    after_11:
    // 0x80226034: jal         0x802261A4
    // 0x80226038: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802261A4_ovl10(rdram, ctx);
        goto after_12;
    // 0x80226038: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_12:
    // 0x8022603C: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80226040: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226044: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80226048:
    // 0x80226048: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8022604C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80226050: bne         $v1, $v0, L_80226068
    if (ctx->r3 != ctx->r2) {
        // 0x80226054: nop
    
            goto L_80226068;
    }
    // 0x80226054: nop

L_80226058:
    // 0x80226058: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8022605C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226060: j           L_80226108
    // 0x80226064: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
        goto L_80226108;
    // 0x80226064: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80226068:
    // 0x80226068: jal         0x8006072C
    // 0x8022606C: nop

    func_8006072C_3BB2C(rdram, ctx);
        goto after_13;
    // 0x8022606C: nop

    after_13:
    // 0x80226070: beq         $v0, $zero, L_80226080
    if (ctx->r2 == 0) {
        // 0x80226074: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_80226080;
    }
    // 0x80226074: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80226078: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    // 0x8022607C: sh          $zero, 0x6($s0)
    MEM_H(0X6, ctx->r16) = 0;
L_80226080:
    // 0x80226080: jal         0x80226314
    // 0x80226084: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80226314_ovl10(rdram, ctx);
        goto after_14;
    // 0x80226084: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_14:
    // 0x80226088: jal         0x8005FB90
    // 0x8022608C: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_15;
    // 0x8022608C: nop

    after_15:
    // 0x80226090: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80226094: lbu         $v0, 0x333A($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X333A);
    // 0x80226098: beq         $v0, $zero, L_802260A8
    if (ctx->r2 == 0) {
        // 0x8022609C: nop
    
            goto L_802260A8;
    }
    // 0x8022609C: nop

    // 0x802260A0: jal         0x80226FA0
    // 0x802260A4: nop

    func_80226FA0_ovl10(rdram, ctx);
        goto after_16;
    // 0x802260A4: nop

    after_16:
L_802260A8:
    // 0x802260A8: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x802260AC: lbu         $v1, 0x3378($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X3378);
    // 0x802260B0: beq         $v1, $zero, L_802260C8
    if (ctx->r3 == 0) {
        // 0x802260B4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802260C8;
    }
    // 0x802260B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802260B8: beq         $v1, $v0, L_802260D4
    if (ctx->r3 == ctx->r2) {
        // 0x802260BC: nop
    
            goto L_802260D4;
    }
    // 0x802260BC: nop

    // 0x802260C0: j           L_80225FF8
    // 0x802260C4: nop

        goto L_80225FF8;
    // 0x802260C4: nop

L_802260C8:
    // 0x802260C8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x802260CC: j           L_80225FF8
    // 0x802260D0: sw          $zero, 0xA74($at)
    MEM_W(0XA74, ctx->r1) = 0;
        goto L_80225FF8;
    // 0x802260D0: sw          $zero, 0xA74($at)
    MEM_W(0XA74, ctx->r1) = 0;
L_802260D4:
    // 0x802260D4: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x802260D8: lhu         $v0, -0x730C($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X730C);
    // 0x802260DC: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x802260E0: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x802260E4: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802260E8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802260EC: lh          $v0, -0x12E8($at)
    ctx->r2 = MEM_H(ctx->r1, -0X12E8);
    // 0x802260F0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802260F4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x802260F8: j           L_80225FF8
    // 0x802260FC: sw          $v0, 0xA74($at)
    MEM_W(0XA74, ctx->r1) = ctx->r2;
        goto L_80225FF8;
    // 0x802260FC: sw          $v0, 0xA74($at)
    MEM_W(0XA74, ctx->r1) = ctx->r2;
L_80226100:
    // 0x80226100: jal         0x80226348
    // 0x80226104: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80226348_ovl10(rdram, ctx);
        goto after_17;
    // 0x80226104: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_17:
L_80226108:
    // 0x80226108: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022610C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226110: jr          $ra
    // 0x80226114: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226114: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023109C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023109C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802310A0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802310A4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802310A8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802310AC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802310B0: lbu         $s0, 0xE($s1)
    ctx->r16 = MEM_BU(ctx->r17, 0XE);
    // 0x802310B4: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    // 0x802310B8: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x802310BC: addiu       $v0, $v0, 0xF8C
    ctx->r2 = ADD32(ctx->r2, 0XF8C);
    // 0x802310C0: andi        $s0, $s0, 0x3
    ctx->r16 = ctx->r16 & 0X3;
    // 0x802310C4: sll         $s0, $s0, 4
    ctx->r16 = S32(ctx->r16 << 4);
    // 0x802310C8: jal         0x80233298
    // 0x802310CC: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    func_80233298_ovl10(rdram, ctx);
        goto after_0;
    // 0x802310CC: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    after_0:
    // 0x802310D0: jal         0x800A3450
    // 0x802310D4: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x802310D4: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    after_1:
    // 0x802310D8: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x802310DC: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x802310E0: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x802310E4: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x802310E8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802310EC: sh          $v1, 0x350($s1)
    MEM_H(0X350, ctx->r17) = ctx->r3;
    // 0x802310F0: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x802310F4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802310F8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802310FC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80231100: jr          $ra
    // 0x80231104: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80231104: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80245910_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80245910: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80245914: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80245918: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8024591C: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x80245920: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80245924: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80245928: lh          $v1, 0x14($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X14);
    // 0x8024592C: lh          $a1, 0x18($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X18);
    // 0x80245930: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x80245934: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80245938: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x8024593C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80245940: sw          $v1, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r3;
    // 0x80245944: sw          $v1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r3;
    // 0x80245948: sw          $a1, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r5;
    // 0x8024594C: jal         0x8003E934
    // 0x80245950: sw          $a1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r5;
    func_8003E934_19D34(rdram, ctx);
        goto after_0;
    // 0x80245950: sw          $a1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r5;
    after_0:
    // 0x80245954: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80245958: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x8024595C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80245960: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80245964: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80245968: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8024596C: sw          $v0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r2;
    // 0x80245970: jal         0x8009A3B4
    // 0x80245974: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80245974: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    after_1:
    // 0x80245978: addiu       $a0, $s0, 0xAC
    ctx->r4 = ADD32(ctx->r16, 0XAC);
    // 0x8024597C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80245980: jal         0x8009A3B4
    // 0x80245984: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80245984: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80245988: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8024598C: addiu       $s1, $s0, 0x54
    ctx->r17 = ADD32(ctx->r16, 0X54);
    // 0x80245990: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80245994: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80245998: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x8024599C: sw          $zero, 0x58($s0)
    MEM_W(0X58, ctx->r16) = 0;
    // 0x802459A0: sw          $zero, 0x44($s0)
    MEM_W(0X44, ctx->r16) = 0;
    // 0x802459A4: sw          $zero, 0x48($s0)
    MEM_W(0X48, ctx->r16) = 0;
    // 0x802459A8: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x802459AC: sw          $zero, 0x70($s0)
    MEM_W(0X70, ctx->r16) = 0;
    // 0x802459B0: jal         0x8009A3B4
    // 0x802459B4: sw          $zero, 0x74($s0)
    MEM_W(0X74, ctx->r16) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x802459B4: sw          $zero, 0x74($s0)
    MEM_W(0X74, ctx->r16) = 0;
    after_3:
    // 0x802459B8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802459BC: addiu       $s1, $s0, 0x8C
    ctx->r17 = ADD32(ctx->r16, 0X8C);
    // 0x802459C0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802459C4: jal         0x80031600
    // 0x802459C8: sw          $zero, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = 0;
    func_80031600_CA00(rdram, ctx);
        goto after_4;
    // 0x802459C8: sw          $zero, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = 0;
    after_4:
    // 0x802459CC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802459D0: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x802459D4: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x802459D8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x802459DC: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x802459E0: jal         0x80031DA8
    // 0x802459E4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_5;
    // 0x802459E4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_5:
    // 0x802459E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802459EC: jal         0x8004D5D4
    // 0x802459F0: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    func_8004D5D4_289D4(rdram, ctx);
        goto after_6;
    // 0x802459F0: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    after_6:
    // 0x802459F4: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802459F8: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
    // 0x802459FC: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x80245A00: sw          $v1, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r3;
    // 0x80245A04: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80245A08: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80245A0C: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x80245A10: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80245A14: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80245A18: jr          $ra
    // 0x80245A1C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80245A1C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80231050_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231050: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80231054: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80231058: jal         0x8004F418
    // 0x8023105C: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x8023105C: nop

    after_0:
    // 0x80231060: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80231064: jr          $ra
    // 0x80231068: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80231068: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80247F64_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80247F64: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80247F68: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80247F6C: jal         0x8004F684
    // 0x80247F70: nop

    func_8004F684_2AA84(rdram, ctx);
        goto after_0;
    // 0x80247F70: nop

    after_0:
    // 0x80247F74: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80247F78: jr          $ra
    // 0x80247F7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80247F7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022AB98_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AB98: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022AB9C: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x8022ABA0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022ABA4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022ABA8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022ABAC: bne         $v0, $zero, L_8022AC4C
    if (ctx->r2 != 0) {
        // 0x8022ABB0: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8022AC4C;
    }
    // 0x8022ABB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022ABB4: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022ABB8: jal         0x8005FA7C
    // 0x8022ABBC: addiu       $a0, $a0, 0x5B0
    ctx->r4 = ADD32(ctx->r4, 0X5B0);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_0;
    // 0x8022ABBC: addiu       $a0, $a0, 0x5B0
    ctx->r4 = ADD32(ctx->r4, 0X5B0);
    after_0:
    // 0x8022ABC0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022ABC4: addiu       $v0, $zero, -0x100
    ctx->r2 = ADD32(0, -0X100);
    // 0x8022ABC8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022ABCC: sh          $v0, 0x4DE8($at)
    MEM_H(0X4DE8, ctx->r1) = ctx->r2;
    // 0x8022ABD0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022ABD4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022ABD8: sh          $v0, 0x4DEA($at)
    MEM_H(0X4DEA, ctx->r1) = ctx->r2;
    // 0x8022ABDC: addiu       $v0, $zero, 0xB00
    ctx->r2 = ADD32(0, 0XB00);
    // 0x8022ABE0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022ABE4: sh          $v0, 0x4DEC($at)
    MEM_H(0X4DEC, ctx->r1) = ctx->r2;
    // 0x8022ABE8: lui         $v0, 0xFF00
    ctx->r2 = S32(0XFF00 << 16);
    // 0x8022ABEC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022ABF0: sw          $v0, 0x4DD8($at)
    MEM_W(0X4DD8, ctx->r1) = ctx->r2;
    // 0x8022ABF4: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x8022ABF8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022ABFC: sw          $v0, 0x4DDC($at)
    MEM_W(0X4DDC, ctx->r1) = ctx->r2;
    // 0x8022AC00: lui         $v0, 0xB00
    ctx->r2 = S32(0XB00 << 16);
    // 0x8022AC04: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022AC08: sw          $v0, 0x4DE0($at)
    MEM_W(0X4DE0, ctx->r1) = ctx->r2;
    // 0x8022AC0C: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022AC10: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022AC14: sh          $v0, 0x4DF2($at)
    MEM_H(0X4DF2, ctx->r1) = ctx->r2;
    // 0x8022AC18: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022AC1C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022AC20: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022AC24: jal         0x8005F6B4
    // 0x8022AC28: sb          $v0, 0x7($s0)
    MEM_B(0X7, ctx->r16) = ctx->r2;
    func_8005F6B4_3AAB4(rdram, ctx);
        goto after_1;
    // 0x8022AC28: sb          $v0, 0x7($s0)
    MEM_B(0X7, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022AC2C: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8022AC30: addiu       $v0, $v0, 0x5C4
    ctx->r2 = ADD32(ctx->r2, 0X5C4);
    // 0x8022AC34: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8022AC38: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    // 0x8022AC3C: jal         0x80036E48
    // 0x8022AC40: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80036E48_12248(rdram, ctx);
        goto after_2;
    // 0x8022AC40: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
    // 0x8022AC44: jal         0x800600F8
    // 0x8022AC48: nop

    func_800600F8_3B4F8(rdram, ctx);
        goto after_3;
    // 0x8022AC48: nop

    after_3:
L_8022AC4C:
    // 0x8022AC4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022AC50: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022AC54: jr          $ra
    // 0x8022AC58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022AC58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022B034_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B034: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B038: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B03C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B040: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022B044: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x8022B048: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022B04C: beq         $v1, $v0, L_8022B174
    if (ctx->r3 == ctx->r2) {
        // 0x8022B050: nop
    
            goto L_8022B174;
    }
    // 0x8022B050: nop

    // 0x8022B054: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x8022B058: beq         $v0, $zero, L_8022B080
    if (ctx->r2 == 0) {
        // 0x8022B05C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022B080;
    }
    // 0x8022B05C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B060: beq         $v1, $v0, L_8022B118
    if (ctx->r3 == ctx->r2) {
        // 0x8022B064: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8022B118;
    }
    // 0x8022B064: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022B068: beq         $v0, $zero, L_8022B148
    if (ctx->r2 == 0) {
        // 0x8022B06C: nop
    
            goto L_8022B148;
    }
    // 0x8022B06C: nop

    // 0x8022B070: beq         $v1, $zero, L_8022B09C
    if (ctx->r3 == 0) {
        // 0x8022B074: nop
    
            goto L_8022B09C;
    }
    // 0x8022B074: nop

    // 0x8022B078: j           L_8022B1E4
    // 0x8022B07C: nop

        goto L_8022B1E4;
    // 0x8022B07C: nop

L_8022B080:
    // 0x8022B080: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022B084: beq         $v1, $v0, L_8022B1C0
    if (ctx->r3 == ctx->r2) {
        // 0x8022B088: slti        $v0, $v1, 0x5
        ctx->r2 = SIGNED(ctx->r3) < 0X5 ? 1 : 0;
            goto L_8022B1C0;
    }
    // 0x8022B088: slti        $v0, $v1, 0x5
    ctx->r2 = SIGNED(ctx->r3) < 0X5 ? 1 : 0;
    // 0x8022B08C: beq         $v0, $zero, L_8022B1E4
    if (ctx->r2 == 0) {
        // 0x8022B090: nop
    
            goto L_8022B1E4;
    }
    // 0x8022B090: nop

    // 0x8022B094: j           L_8022B194
    // 0x8022B098: nop

        goto L_8022B194;
    // 0x8022B098: nop

L_8022B09C:
    // 0x8022B09C: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022B0A0: jal         0x8003E6BC
    // 0x8022B0A4: addiu       $a0, $a0, 0x880
    ctx->r4 = ADD32(ctx->r4, 0X880);
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_0;
    // 0x8022B0A4: addiu       $a0, $a0, 0x880
    ctx->r4 = ADD32(ctx->r4, 0X880);
    after_0:
    // 0x8022B0A8: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8022B0AC: lui         $a1, 0xB
    ctx->r5 = S32(0XB << 16);
    // 0x8022B0B0: jal         0x80071ACC
    // 0x8022B0B4: ori         $a1, $a1, 0xE00
    ctx->r5 = ctx->r5 | 0XE00;
    func_80071ACC_4CECC(rdram, ctx);
        goto after_1;
    // 0x8022B0B4: ori         $a1, $a1, 0xE00
    ctx->r5 = ctx->r5 | 0XE00;
    after_1:
    // 0x8022B0B8: jal         0x8006033C
    // 0x8022B0BC: addiu       $a0, $zero, 0x59
    ctx->r4 = ADD32(0, 0X59);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x8022B0BC: addiu       $a0, $zero, 0x59
    ctx->r4 = ADD32(0, 0X59);
    after_2:
    // 0x8022B0C0: bne         $v0, $zero, L_8022B1E0
    if (ctx->r2 != 0) {
        // 0x8022B0C4: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_8022B1E0;
    }
    // 0x8022B0C4: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022B0C8: jal         0x8006033C
    // 0x8022B0CC: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    func_8006033C_3B73C(rdram, ctx);
        goto after_3;
    // 0x8022B0CC: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    after_3:
    // 0x8022B0D0: beq         $v0, $zero, L_8022B0E0
    if (ctx->r2 == 0) {
        // 0x8022B0D4: nop
    
            goto L_8022B0E0;
    }
    // 0x8022B0D4: nop

    // 0x8022B0D8: j           L_8022B1E0
    // 0x8022B0DC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_8022B1E0;
    // 0x8022B0DC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_8022B0E0:
    // 0x8022B0E0: jal         0x80060690
    // 0x8022B0E4: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    func_80060690_3BA90(rdram, ctx);
        goto after_4;
    // 0x8022B0E4: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    after_4:
    // 0x8022B0E8: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022B0EC: addiu       $a0, $a0, 0x7F8
    ctx->r4 = ADD32(ctx->r4, 0X7F8);
    // 0x8022B0F0: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x8022B0F4: jal         0x8006100C
    // 0x8022B0F8: addiu       $a1, $a1, 0x870
    ctx->r5 = ADD32(ctx->r5, 0X870);
    func_8006100C_3C40C(rdram, ctx);
        goto after_5;
    // 0x8022B0F8: addiu       $a1, $a1, 0x870
    ctx->r5 = ADD32(ctx->r5, 0X870);
    after_5:
    // 0x8022B0FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B100: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8022B104: jal         0x8022BDC8
    // 0x8022B108: sb          $v0, -0x3A4C($at)
    MEM_B(-0X3A4C, ctx->r1) = ctx->r2;
    func_8022BDC8_ovl10(rdram, ctx);
        goto after_6;
    // 0x8022B108: sb          $v0, -0x3A4C($at)
    MEM_B(-0X3A4C, ctx->r1) = ctx->r2;
    after_6:
    // 0x8022B10C: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8022B110: j           L_8022B1E0
    // 0x8022B114: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022B1E0;
    // 0x8022B114: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022B118:
    // 0x8022B118: jal         0x8006033C
    // 0x8022B11C: addiu       $a0, $zero, 0x611
    ctx->r4 = ADD32(0, 0X611);
    func_8006033C_3B73C(rdram, ctx);
        goto after_7;
    // 0x8022B11C: addiu       $a0, $zero, 0x611
    ctx->r4 = ADD32(0, 0X611);
    after_7:
    // 0x8022B120: beq         $v0, $zero, L_8022B1E4
    if (ctx->r2 == 0) {
        // 0x8022B124: nop
    
            goto L_8022B1E4;
    }
    // 0x8022B124: nop

    // 0x8022B128: jal         0x80060690
    // 0x8022B12C: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    func_80060690_3BA90(rdram, ctx);
        goto after_8;
    // 0x8022B12C: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    after_8:
    // 0x8022B130: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022B134: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8022B138: sb          $v0, -0x3A4C($at)
    MEM_B(-0X3A4C, ctx->r1) = ctx->r2;
    // 0x8022B13C: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8022B140: j           L_8022B1E0
    // 0x8022B144: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022B1E0;
    // 0x8022B144: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022B148:
    // 0x8022B148: jal         0x8006033C
    // 0x8022B14C: addiu       $a0, $zero, 0x620
    ctx->r4 = ADD32(0, 0X620);
    func_8006033C_3B73C(rdram, ctx);
        goto after_9;
    // 0x8022B14C: addiu       $a0, $zero, 0x620
    ctx->r4 = ADD32(0, 0X620);
    after_9:
    // 0x8022B150: beq         $v0, $zero, L_8022B1E4
    if (ctx->r2 == 0) {
        // 0x8022B154: nop
    
            goto L_8022B1E4;
    }
    // 0x8022B154: nop

    // 0x8022B158: jal         0x8006036C
    // 0x8022B15C: addiu       $a0, $zero, 0x621
    ctx->r4 = ADD32(0, 0X621);
    func_8006036C_3B76C(rdram, ctx);
        goto after_10;
    // 0x8022B15C: addiu       $a0, $zero, 0x621
    ctx->r4 = ADD32(0, 0X621);
    after_10:
    // 0x8022B160: jal         0x80060690
    // 0x8022B164: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    func_80060690_3BA90(rdram, ctx);
        goto after_11;
    // 0x8022B164: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_11:
    // 0x8022B168: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8022B16C: j           L_8022B1E0
    // 0x8022B170: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022B1E0;
    // 0x8022B170: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022B174:
    // 0x8022B174: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022B178: addiu       $a0, $a0, 0x7F8
    ctx->r4 = ADD32(ctx->r4, 0X7F8);
    // 0x8022B17C: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x8022B180: jal         0x8006100C
    // 0x8022B184: addiu       $a1, $a1, 0x870
    ctx->r5 = ADD32(ctx->r5, 0X870);
    func_8006100C_3C40C(rdram, ctx);
        goto after_12;
    // 0x8022B184: addiu       $a1, $a1, 0x870
    ctx->r5 = ADD32(ctx->r5, 0X870);
    after_12:
    // 0x8022B188: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8022B18C: j           L_8022B1E0
    // 0x8022B190: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022B1E0;
    // 0x8022B190: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022B194:
    // 0x8022B194: jal         0x8006033C
    // 0x8022B198: addiu       $a0, $zero, 0x660
    ctx->r4 = ADD32(0, 0X660);
    func_8006033C_3B73C(rdram, ctx);
        goto after_13;
    // 0x8022B198: addiu       $a0, $zero, 0x660
    ctx->r4 = ADD32(0, 0X660);
    after_13:
    // 0x8022B19C: beq         $v0, $zero, L_8022B1E4
    if (ctx->r2 == 0) {
        // 0x8022B1A0: nop
    
            goto L_8022B1E4;
    }
    // 0x8022B1A0: nop

    // 0x8022B1A4: jal         0x8006036C
    // 0x8022B1A8: addiu       $a0, $zero, 0x59
    ctx->r4 = ADD32(0, 0X59);
    func_8006036C_3B76C(rdram, ctx);
        goto after_14;
    // 0x8022B1A8: addiu       $a0, $zero, 0x59
    ctx->r4 = ADD32(0, 0X59);
    after_14:
    // 0x8022B1AC: jal         0x80060690
    // 0x8022B1B0: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_80060690_3BA90(rdram, ctx);
        goto after_15;
    // 0x8022B1B0: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_15:
    // 0x8022B1B4: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8022B1B8: j           L_8022B1E0
    // 0x8022B1BC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022B1E0;
    // 0x8022B1BC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022B1C0:
    // 0x8022B1C0: jal         0x80229F50
    // 0x8022B1C4: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    func_80229F50_ovl10(rdram, ctx);
        goto after_16;
    // 0x8022B1C4: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_16:
    // 0x8022B1C8: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022B1CC: addiu       $a0, $a0, 0x7F8
    ctx->r4 = ADD32(ctx->r4, 0X7F8);
    // 0x8022B1D0: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x8022B1D4: jal         0x8006100C
    // 0x8022B1D8: addiu       $a1, $a1, 0x878
    ctx->r5 = ADD32(ctx->r5, 0X878);
    func_8006100C_3C40C(rdram, ctx);
        goto after_17;
    // 0x8022B1D8: addiu       $a1, $a1, 0x878
    ctx->r5 = ADD32(ctx->r5, 0X878);
    after_17:
    // 0x8022B1DC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_8022B1E0:
    // 0x8022B1E0: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_8022B1E4:
    // 0x8022B1E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022B1E8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B1EC: jr          $ra
    // 0x8022B1F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B1F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8024A930_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024A930: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8024A934: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8024A938: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8024A93C: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8024A940: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8024A944: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8024A948: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8024A94C: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x8024A950: jal         0x8004D5D4
    // 0x8024A954: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8024A954: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x8024A958: addiu       $s1, $s0, 0x18
    ctx->r17 = ADD32(ctx->r16, 0X18);
    // 0x8024A95C: jal         0x8002C654
    // 0x8024A960: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8002C654_7A54(rdram, ctx);
        goto after_1;
    // 0x8024A960: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x8024A964: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8024A968: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x8024A96C: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x8024A970: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8024A974: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8024A978: jal         0x80031DA8
    // 0x8024A97C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_2;
    // 0x8024A97C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_2:
    // 0x8024A980: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    // 0x8024A984: lbu         $a3, 0x1($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X1);
    // 0x8024A988: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8024A98C: jal         0x8003E964
    // 0x8024A990: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8003E964_19D64(rdram, ctx);
        goto after_3;
    // 0x8024A990: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
    // 0x8024A994: lui         $a0, 0x80
    ctx->r4 = S32(0X80 << 16);
    // 0x8024A998: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8024A99C: ori         $a0, $a0, 0x8080
    ctx->r4 = ctx->r4 | 0X8080;
    // 0x8024A9A0: addiu       $v0, $v0, -0xA
    ctx->r2 = ADD32(ctx->r2, -0XA);
    // 0x8024A9A4: sh          $v0, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r2;
    // 0x8024A9A8: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8024A9AC: addiu       $v0, $v0, 0x241C
    ctx->r2 = ADD32(ctx->r2, 0X241C);
    // 0x8024A9B0: sw          $a0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r4;
    // 0x8024A9B4: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x8024A9B8: sw          $zero, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = 0;
    // 0x8024A9BC: sw          $zero, 0x50($s0)
    MEM_W(0X50, ctx->r16) = 0;
    // 0x8024A9C0: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8024A9C4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8024A9C8: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
    // 0x8024A9CC: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8024A9D0: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8024A9D4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8024A9D8: jr          $ra
    // 0x8024A9DC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8024A9DC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80247184_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80247184: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80247188: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x8024718C: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x80247190: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80247194: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80247198: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8024719C: lbu         $v1, 0x0($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X0);
    // 0x802471A0: lbu         $a0, 0x6($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X6);
    // 0x802471A4: lbu         $a1, 0x3($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X3);
    // 0x802471A8: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x802471AC: addiu       $v0, $v0, 0x2280
    ctx->r2 = ADD32(ctx->r2, 0X2280);
    // 0x802471B0: sw          $zero, 0xC8($s2)
    MEM_W(0XC8, ctx->r18) = 0;
    // 0x802471B4: sw          $zero, 0xCC($s2)
    MEM_W(0XCC, ctx->r18) = 0;
    // 0x802471B8: sw          $v0, 0x78($s2)
    MEM_W(0X78, ctx->r18) = ctx->r2;
    // 0x802471BC: ori         $v1, $v1, 0x6
    ctx->r3 = ctx->r3 | 0X6;
    // 0x802471C0: ori         $a0, $a0, 0x20
    ctx->r4 = ctx->r4 | 0X20;
    // 0x802471C4: andi        $a1, $a1, 0x40
    ctx->r5 = ctx->r5 & 0X40;
    // 0x802471C8: sb          $v1, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r3;
    // 0x802471CC: beq         $a1, $zero, L_802471E0
    if (ctx->r5 == 0) {
        // 0x802471D0: sb          $a0, 0x6($s2)
        MEM_B(0X6, ctx->r18) = ctx->r4;
            goto L_802471E0;
    }
    // 0x802471D0: sb          $a0, 0x6($s2)
    MEM_B(0X6, ctx->r18) = ctx->r4;
    // 0x802471D4: lhu         $v0, 0x66($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X66);
    // 0x802471D8: j           L_802471F8
    // 0x802471DC: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
        goto L_802471F8;
    // 0x802471DC: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
L_802471E0:
    // 0x802471E0: lb          $a0, 0xD($s2)
    ctx->r4 = MEM_B(ctx->r18, 0XD);
    // 0x802471E4: jal         0x800530E8
    // 0x802471E8: nop

    func_800530E8_2E4E8(rdram, ctx);
        goto after_0;
    // 0x802471E8: nop

    after_0:
    // 0x802471EC: jal         0x80034B34
    // 0x802471F0: nop

    func_80034B34_FF34(rdram, ctx);
        goto after_1;
    // 0x802471F0: nop

    after_1:
    // 0x802471F4: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
L_802471F8:
    // 0x802471F8: lhu         $v0, 0x64($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X64);
    // 0x802471FC: sh          $zero, 0x14($sp)
    MEM_H(0X14, ctx->r29) = 0;
    // 0x80247200: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80247204: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x80247208: lbu         $v0, 0x3($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X3);
    // 0x8024720C: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x80247210: beql        $v0, $zero, L_8024724C
    if (ctx->r2 == 0) {
        // 0x80247214: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8024724C;
    }
    goto skip_0;
    // 0x80247214: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_0:
    // 0x80247218: jal         0x800A3450
    // 0x8024721C: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x8024721C: nop

    after_2:
    // 0x80247220: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x80247224: lhu         $v1, 0x10($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X10);
    // 0x80247228: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x8024722C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80247230: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80247234: jal         0x800A3450
    // 0x80247238: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x80247238: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    after_3:
    // 0x8024723C: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x80247240: lhu         $v1, 0x12($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X12);
    // 0x80247244: j           L_80247308
    // 0x80247248: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
        goto L_80247308;
    // 0x80247248: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
L_8024724C:
    // 0x8024724C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80247250: lb          $v1, 0x4EB8($v1)
    ctx->r3 = MEM_B(ctx->r3, 0X4EB8);
    // 0x80247254: beq         $v1, $v0, L_802472A4
    if (ctx->r3 == ctx->r2) {
        // 0x80247258: nop
    
            goto L_802472A4;
    }
    // 0x80247258: nop

    // 0x8024725C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80247260: beq         $v0, $zero, L_802472D8
    if (ctx->r2 == 0) {
        // 0x80247264: nop
    
            goto L_802472D8;
    }
    // 0x80247264: nop

    // 0x80247268: bne         $v1, $zero, L_802472D8
    if (ctx->r3 != 0) {
        // 0x8024726C: nop
    
            goto L_802472D8;
    }
    // 0x8024726C: nop

    // 0x80247270: jal         0x800A3450
    // 0x80247274: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_4;
    // 0x80247274: nop

    after_4:
    // 0x80247278: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8024727C: lhu         $v1, 0x10($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X10);
    // 0x80247280: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
    // 0x80247284: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80247288: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8024728C: jal         0x800A3450
    // 0x80247290: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_5;
    // 0x80247290: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    after_5:
    // 0x80247294: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80247298: lhu         $v1, 0x12($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X12);
    // 0x8024729C: j           L_80247308
    // 0x802472A0: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
        goto L_80247308;
    // 0x802472A0: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
L_802472A4:
    // 0x802472A4: jal         0x800A3450
    // 0x802472A8: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_6;
    // 0x802472A8: nop

    after_6:
    // 0x802472AC: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x802472B0: lhu         $v1, 0x10($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X10);
    // 0x802472B4: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x802472B8: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x802472BC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802472C0: jal         0x800A3450
    // 0x802472C4: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_7;
    // 0x802472C4: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    after_7:
    // 0x802472C8: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x802472CC: lhu         $v1, 0x12($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X12);
    // 0x802472D0: j           L_80247308
    // 0x802472D4: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
        goto L_80247308;
    // 0x802472D4: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
L_802472D8:
    // 0x802472D8: jal         0x800A3450
    // 0x802472DC: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_8;
    // 0x802472DC: nop

    after_8:
    // 0x802472E0: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x802472E4: lhu         $v1, 0x10($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X10);
    // 0x802472E8: addiu       $v0, $v0, -0x8
    ctx->r2 = ADD32(ctx->r2, -0X8);
    // 0x802472EC: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x802472F0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802472F4: jal         0x800A3450
    // 0x802472F8: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_9;
    // 0x802472F8: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    after_9:
    // 0x802472FC: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80247300: lhu         $v1, 0x12($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X12);
    // 0x80247304: addiu       $v0, $v0, -0x8
    ctx->r2 = ADD32(ctx->r2, -0X8);
L_80247308:
    // 0x80247308: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8024730C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80247310: sh          $v1, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r3;
    // 0x80247314: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80247318: addiu       $s0, $s2, 0x8C
    ctx->r16 = ADD32(ctx->r18, 0X8C);
    // 0x8024731C: jal         0x80031600
    // 0x80247320: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80031600_CA00(rdram, ctx);
        goto after_10;
    // 0x80247320: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_10:
    // 0x80247324: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80247328: addiu       $s1, $sp, 0x18
    ctx->r17 = ADD32(ctx->r29, 0X18);
    // 0x8024732C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80247330: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x80247334: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80247338: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8024733C: jal         0x80031DA8
    // 0x80247340: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_11;
    // 0x80247340: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_11:
    // 0x80247344: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80247348: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x8024734C: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x80247350: addiu       $v0, $zero, -0x1000
    ctx->r2 = ADD32(0, -0X1000);
    // 0x80247354: sh          $zero, 0x10($sp)
    MEM_H(0X10, ctx->r29) = 0;
    // 0x80247358: sh          $zero, 0x12($sp)
    MEM_H(0X12, ctx->r29) = 0;
    // 0x8024735C: jal         0x800308E8
    // 0x80247360: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    func_800308E8_BCE8(rdram, ctx);
        goto after_12;
    // 0x80247360: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    after_12:
    // 0x80247364: lbu         $v0, 0x3($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X3);
    // 0x80247368: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x8024736C: bne         $v0, $zero, L_802473C4
    if (ctx->r2 != 0) {
        // 0x80247370: nop
    
            goto L_802473C4;
    }
    // 0x80247370: nop

    // 0x80247374: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80247378: lb          $v0, 0x4EB7($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X4EB7);
    // 0x8024737C: slti        $v0, $v0, 0x3
    ctx->r2 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x80247380: bne         $v0, $zero, L_802473C4
    if (ctx->r2 != 0) {
        // 0x80247384: nop
    
            goto L_802473C4;
    }
    // 0x80247384: nop

    // 0x80247388: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x8024738C: sll         $v0, $v1, 4
    ctx->r2 = S32(ctx->r3 << 4);
    // 0x80247390: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80247394: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
    // 0x80247398: sh          $v0, 0x44($s2)
    MEM_H(0X44, ctx->r18) = ctx->r2;
    // 0x8024739C: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x802473A0: sll         $v0, $v1, 4
    ctx->r2 = S32(ctx->r3 << 4);
    // 0x802473A4: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x802473A8: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
    // 0x802473AC: sh          $v0, 0x46($s2)
    MEM_H(0X46, ctx->r18) = ctx->r2;
    // 0x802473B0: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x802473B4: sll         $v0, $v1, 4
    ctx->r2 = S32(ctx->r3 << 4);
    // 0x802473B8: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x802473BC: j           L_80247414
    // 0x802473C0: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
        goto L_80247414;
    // 0x802473C0: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
L_802473C4:
    // 0x802473C4: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x802473C8: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x802473CC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802473D0: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x802473D4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802473D8: srl         $v0, $v0, 2
    ctx->r2 = S32(U32(ctx->r2) >> 2);
    // 0x802473DC: sh          $v0, 0x44($s2)
    MEM_H(0X44, ctx->r18) = ctx->r2;
    // 0x802473E0: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x802473E4: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x802473E8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802473EC: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x802473F0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802473F4: srl         $v0, $v0, 2
    ctx->r2 = S32(U32(ctx->r2) >> 2);
    // 0x802473F8: sh          $v0, 0x46($s2)
    MEM_H(0X46, ctx->r18) = ctx->r2;
    // 0x802473FC: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x80247400: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80247404: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80247408: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8024740C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80247410: srl         $v0, $v0, 2
    ctx->r2 = S32(U32(ctx->r2) >> 2);
L_80247414:
    // 0x80247414: sh          $v0, 0x48($s2)
    MEM_H(0X48, ctx->r18) = ctx->r2;
    // 0x80247418: lbu         $v0, 0x3($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X3);
    // 0x8024741C: sh          $zero, 0x4C($s2)
    MEM_H(0X4C, ctx->r18) = 0;
    // 0x80247420: sh          $zero, 0x4E($s2)
    MEM_H(0X4E, ctx->r18) = 0;
    // 0x80247424: sh          $zero, 0x50($s2)
    MEM_H(0X50, ctx->r18) = 0;
    // 0x80247428: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x8024742C: beq         $v0, $zero, L_80247488
    if (ctx->r2 == 0) {
        // 0x80247430: sh          $zero, 0x7C($s2)
        MEM_H(0X7C, ctx->r18) = 0;
            goto L_80247488;
    }
    // 0x80247430: sh          $zero, 0x7C($s2)
    MEM_H(0X7C, ctx->r18) = 0;
    // 0x80247434: lh          $v1, 0x44($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X44);
    // 0x80247438: sll         $v0, $v1, 3
    ctx->r2 = S32(ctx->r3 << 3);
    // 0x8024743C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80247440: lw          $v1, 0x1C($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X1C);
    // 0x80247444: lh          $a0, 0x46($s2)
    ctx->r4 = MEM_H(ctx->r18, 0X46);
    // 0x80247448: sll         $v0, $v0, 6
    ctx->r2 = S32(ctx->r2 << 6);
    // 0x8024744C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80247450: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
    // 0x80247454: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x80247458: sw          $v1, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->r3;
    // 0x8024745C: lw          $v1, 0x20($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X20);
    // 0x80247460: lh          $a0, 0x48($s2)
    ctx->r4 = MEM_H(ctx->r18, 0X48);
    // 0x80247464: sll         $v0, $v0, 6
    ctx->r2 = S32(ctx->r2 << 6);
    // 0x80247468: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8024746C: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
    // 0x80247470: sw          $v1, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->r3;
    // 0x80247474: lw          $v1, 0x24($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X24);
    // 0x80247478: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8024747C: sll         $v0, $v0, 6
    ctx->r2 = S32(ctx->r2 << 6);
    // 0x80247480: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80247484: sw          $v1, 0x24($s2)
    MEM_W(0X24, ctx->r18) = ctx->r3;
L_80247488:
    // 0x80247488: addiu       $a0, $s2, 0x34
    ctx->r4 = ADD32(ctx->r18, 0X34);
    // 0x8024748C: lhu         $v0, 0x1C($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X1C);
    // 0x80247490: lhu         $v1, 0x20($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X20);
    // 0x80247494: lhu         $a3, 0x24($s2)
    ctx->r7 = MEM_HU(ctx->r18, 0X24);
    // 0x80247498: addiu       $a1, $s2, 0x1C
    ctx->r5 = ADD32(ctx->r18, 0X1C);
    // 0x8024749C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x802474A0: sh          $v0, 0x14($s2)
    MEM_H(0X14, ctx->r18) = ctx->r2;
    // 0x802474A4: sh          $v0, 0xAC($s2)
    MEM_H(0XAC, ctx->r18) = ctx->r2;
    // 0x802474A8: sh          $v1, 0x16($s2)
    MEM_H(0X16, ctx->r18) = ctx->r3;
    // 0x802474AC: sh          $v1, 0xAE($s2)
    MEM_H(0XAE, ctx->r18) = ctx->r3;
    // 0x802474B0: sh          $a3, 0x18($s2)
    MEM_H(0X18, ctx->r18) = ctx->r7;
    // 0x802474B4: jal         0x8009A3B4
    // 0x802474B8: sh          $a3, 0xB0($s2)
    MEM_H(0XB0, ctx->r18) = ctx->r7;
    memcpy_recomp(rdram, ctx);
        goto after_13;
    // 0x802474B8: sh          $a3, 0xB0($s2)
    MEM_H(0XB0, ctx->r18) = ctx->r7;
    after_13:
    // 0x802474BC: addiu       $a0, $s2, 0x2C
    ctx->r4 = ADD32(ctx->r18, 0X2C);
    // 0x802474C0: addiu       $s0, $s2, 0x14
    ctx->r16 = ADD32(ctx->r18, 0X14);
    // 0x802474C4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x802474C8: jal         0x8009A3B4
    // 0x802474CC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_14;
    // 0x802474CC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_14:
    // 0x802474D0: lui         $v0, 0x280
    ctx->r2 = S32(0X280 << 16);
    // 0x802474D4: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x802474D8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x802474DC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802474E0: sw          $v0, 0xB4($s2)
    MEM_W(0XB4, ctx->r18) = ctx->r2;
    // 0x802474E4: addiu       $v0, $zero, 0x82
    ctx->r2 = ADD32(0, 0X82);
    // 0x802474E8: jal         0x8004D5D4
    // 0x802474EC: sb          $v0, 0x2($s2)
    MEM_B(0X2, ctx->r18) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_15;
    // 0x802474EC: sb          $v0, 0x2($s2)
    MEM_B(0X2, ctx->r18) = ctx->r2;
    after_15:
    // 0x802474F0: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x802474F4: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x802474F8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802474FC: addiu       $v0, $zero, 0x2E
    ctx->r2 = ADD32(0, 0X2E);
    // 0x80247500: jal         0x800710B8
    // 0x80247504: sb          $v0, 0x2($s2)
    MEM_B(0X2, ctx->r18) = ctx->r2;
    func_800710B8_4C4B8(rdram, ctx);
        goto after_16;
    // 0x80247504: sb          $v0, 0x2($s2)
    MEM_B(0X2, ctx->r18) = ctx->r2;
    after_16:
    // 0x80247508: lbu         $v1, 0x8($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X8);
    // 0x8024750C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80247510: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80247514: sb          $v0, 0xB($s2)
    MEM_B(0XB, ctx->r18) = ctx->r2;
    // 0x80247518: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8024751C: jal         0x802477C4
    // 0x80247520: sb          $v1, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r3;
    func_802477C4_ovl10(rdram, ctx);
        goto after_17;
    // 0x80247520: sb          $v1, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r3;
    after_17:
    // 0x80247524: jal         0x80247690
    // 0x80247528: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_80247690_ovl10(rdram, ctx);
        goto after_18;
    // 0x80247528: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_18:
    // 0x8024752C: addiu       $a0, $zero, 0x120
    ctx->r4 = ADD32(0, 0X120);
    // 0x80247530: jal         0x8002A33C
    // 0x80247534: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_19;
    // 0x80247534: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_19:
    // 0x80247538: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8024753C: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80247540: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80247544: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80247548: jr          $ra
    // 0x8024754C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8024754C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80240944_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80240944: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80240948: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8024094C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80240950: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x80240954: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80240958: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8024095C: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x80240960: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x80240964: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x80240968: beq         $v0, $zero, L_80240AF8
    if (ctx->r2 == 0) {
        // 0x8024096C: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80240AF8;
    }
    // 0x8024096C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80240970: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80240974: addu        $at, $at, $v0
    gpr jr_addend_8024097C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80240978: lw          $v0, 0x3088($at)
    ctx->r2 = ADD32(ctx->r1, 0X3088);
    // 0x8024097C: jr          $v0
    // 0x80240980: nop

    switch (jr_addend_8024097C >> 2) {
        case 0: goto L_80240984; break;
        case 1: goto L_802409E8; break;
        case 2: goto L_80240A00; break;
        case 3: goto L_80240A60; break;
        case 4: goto L_80240A8C; break;
        case 5: goto L_80240ABC; break;
        default: switch_error(__func__, 0x8024097C, 0x80253088);
    }
    // 0x80240980: nop

L_80240984:
    // 0x80240984: lbu         $v1, 0x0($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X0);
    // 0x80240988: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8024098C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80240990: sb          $v0, -0x3A4F($at)
    MEM_B(-0X3A4F, ctx->r1) = ctx->r2;
    // 0x80240994: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80240998: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8024099C: sb          $v0, -0x3A50($at)
    MEM_B(-0X3A50, ctx->r1) = ctx->r2;
    // 0x802409A0: andi        $v1, $v1, 0xFD
    ctx->r3 = ctx->r3 & 0XFD;
    // 0x802409A4: sb          $v1, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r3;
    // 0x802409A8: lh          $v0, 0x180($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X180);
    // 0x802409AC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x802409B0: lh          $v0, 0x182($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X182);
    // 0x802409B4: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x802409B8: lw          $a3, 0x435C($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X435C);
    // 0x802409BC: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x802409C0: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x802409C4: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x802409C8: lh          $v0, 0x184($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X184);
    // 0x802409CC: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x802409D0: addiu       $a2, $zero, 0xC00
    ctx->r6 = ADD32(0, 0XC00);
    // 0x802409D4: jal         0x80034FCC
    // 0x802409D8: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80034FCC_103CC(rdram, ctx);
        goto after_0;
    // 0x802409D8: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_0:
    // 0x802409DC: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802409E0: j           L_80240A80
    // 0x802409E4: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
        goto L_80240A80;
    // 0x802409E4: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
L_802409E8:
    // 0x802409E8: jal         0x8003516C
    // 0x802409EC: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_1;
    // 0x802409EC: nop

    after_1:
    // 0x802409F0: bne         $v0, $zero, L_80240AF8
    if (ctx->r2 != 0) {
        // 0x802409F4: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80240AF8;
    }
    // 0x802409F4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802409F8: j           L_80240A74
    // 0x802409FC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_80240A74;
    // 0x802409FC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_80240A00:
    // 0x80240A00: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80240A04: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80240A08: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80240A0C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80240A10: bne         $v0, $zero, L_80240AF8
    if (ctx->r2 != 0) {
        // 0x80240A14: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_80240AF8;
    }
    // 0x80240A14: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80240A18: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80240A1C: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
    // 0x80240A20: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80240A24: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80240A28: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x80240A2C: lw          $v1, 0x55EC($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X55EC);
    // 0x80240A30: lh          $v0, 0x180($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X180);
    // 0x80240A34: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80240A38: lh          $v0, 0x182($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X182);
    // 0x80240A3C: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x80240A40: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80240A44: lh          $v0, 0x184($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X184);
    // 0x80240A48: addiu       $a2, $zero, 0x400
    ctx->r6 = ADD32(0, 0X400);
    // 0x80240A4C: addiu       $a3, $zero, 0x100
    ctx->r7 = ADD32(0, 0X100);
    // 0x80240A50: jal         0x80034FCC
    // 0x80240A54: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80034FCC_103CC(rdram, ctx);
        goto after_2;
    // 0x80240A54: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_2:
    // 0x80240A58: j           L_80240AF8
    // 0x80240A5C: nop

        goto L_80240AF8;
    // 0x80240A5C: nop

L_80240A60:
    // 0x80240A60: jal         0x8003516C
    // 0x80240A64: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_3;
    // 0x80240A64: nop

    after_3:
    // 0x80240A68: bne         $v0, $zero, L_80240AF8
    if (ctx->r2 != 0) {
        // 0x80240A6C: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80240AF8;
    }
    // 0x80240A6C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80240A70: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
L_80240A74:
    // 0x80240A74: jal         0x800616FC
    // 0x80240A78: nop

    func_800616FC_3CAFC(rdram, ctx);
        goto after_4;
    // 0x80240A78: nop

    after_4:
    // 0x80240A7C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
L_80240A80:
    // 0x80240A80: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80240A84: j           L_80240AF8
    // 0x80240A88: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_80240AF8;
    // 0x80240A88: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80240A8C:
    // 0x80240A8C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80240A90: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80240A94: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80240A98: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80240A9C: bne         $v0, $zero, L_80240AF8
    if (ctx->r2 != 0) {
        // 0x80240AA0: nop
    
            goto L_80240AF8;
    }
    // 0x80240AA0: nop

    // 0x80240AA4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80240AA8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80240AAC: jal         0x80034E3C
    // 0x80240AB0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    func_80034E3C_1023C(rdram, ctx);
        goto after_5;
    // 0x80240AB0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    after_5:
    // 0x80240AB4: j           L_80240AF8
    // 0x80240AB8: nop

        goto L_80240AF8;
    // 0x80240AB8: nop

L_80240ABC:
    // 0x80240ABC: jal         0x8003516C
    // 0x80240AC0: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_6;
    // 0x80240AC0: nop

    after_6:
    // 0x80240AC4: bne         $v0, $zero, L_80240AF8
    if (ctx->r2 != 0) {
        // 0x80240AC8: nop
    
            goto L_80240AF8;
    }
    // 0x80240AC8: nop

    // 0x80240ACC: lbu         $v0, 0xBD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XBD);
    // 0x80240AD0: lbu         $v1, 0x0($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X0);
    // 0x80240AD4: andi        $v0, $v0, 0xDF
    ctx->r2 = ctx->r2 & 0XDF;
    // 0x80240AD8: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80240ADC: sb          $v0, 0xBD($s1)
    MEM_B(0XBD, ctx->r17) = ctx->r2;
    // 0x80240AE0: sb          $v1, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r3;
    // 0x80240AE4: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80240AE8: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80240AEC: sb          $zero, -0x3A4F($at)
    MEM_B(-0X3A4F, ctx->r1) = 0;
    // 0x80240AF0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80240AF4: sb          $zero, -0x3A50($at)
    MEM_B(-0X3A50, ctx->r1) = 0;
L_80240AF8:
    // 0x80240AF8: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x80240AFC: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80240B00: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80240B04: jr          $ra
    // 0x80240B08: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80240B08: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80240B0C: nop

;}
RECOMP_FUNC void func_8022DF50_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DF50: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8022DF54: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8022DF58: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022DF5C: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x8022DF60: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8022DF64: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x8022DF68: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022DF6C: lui         $s1, 0x8025
    ctx->r17 = S32(0X8025 << 16);
    // 0x8022DF70: lw          $s1, 0x5638($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X5638);
    // 0x8022DF74: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022DF78: beq         $v1, $v0, L_8022DFF4
    if (ctx->r3 == ctx->r2) {
        // 0x8022DF7C: addiu       $s2, $s0, 0x348
        ctx->r18 = ADD32(ctx->r16, 0X348);
            goto L_8022DFF4;
    }
    // 0x8022DF7C: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x8022DF80: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022DF84: beql        $v0, $zero, L_8022DF9C
    if (ctx->r2 == 0) {
        // 0x8022DF88: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022DF9C;
    }
    goto skip_0;
    // 0x8022DF88: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022DF8C: beq         $v1, $zero, L_8022DFB4
    if (ctx->r3 == 0) {
        // 0x8022DF90: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022DFB4;
    }
    // 0x8022DF90: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022DF94: j           L_8022E1D0
    // 0x8022DF98: nop

        goto L_8022E1D0;
    // 0x8022DF98: nop

L_8022DF9C:
    // 0x8022DF9C: beq         $v1, $v0, L_8022E158
    if (ctx->r3 == ctx->r2) {
        // 0x8022DFA0: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022E158;
    }
    // 0x8022DFA0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022DFA4: beq         $v1, $v0, L_8022E184
    if (ctx->r3 == ctx->r2) {
        // 0x8022DFA8: nop
    
            goto L_8022E184;
    }
    // 0x8022DFA8: nop

    // 0x8022DFAC: j           L_8022E1D0
    // 0x8022DFB0: nop

        goto L_8022E1D0;
    // 0x8022DFB0: nop

L_8022DFB4:
    // 0x8022DFB4: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x8022DFB8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022DFBC: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x8022DFC0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022DFC4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022DFC8: sb          $v0, 0x10B($s0)
    MEM_B(0X10B, ctx->r16) = ctx->r2;
    // 0x8022DFCC: sb          $v0, 0x10F($s0)
    MEM_B(0X10F, ctx->r16) = ctx->r2;
    // 0x8022DFD0: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x8022DFD4: sh          $v0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r2;
    // 0x8022DFD8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022DFDC: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x8022DFE0: sh          $zero, 0x350($s0)
    MEM_H(0X350, ctx->r16) = 0;
    // 0x8022DFE4: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8022DFE8: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    // 0x8022DFEC: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x8022DFF0: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
L_8022DFF4:
    // 0x8022DFF4: lhu         $v0, 0x4($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X4);
    // 0x8022DFF8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022DFFC: sh          $v0, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r2;
    // 0x8022E000: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022E004: bltz        $v0, L_8022E0A0
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022E008: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022E0A0;
    }
    // 0x8022E008: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022E00C: lb          $v0, 0xE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE);
    // 0x8022E010: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022E014: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x8022E018: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x8022E01C: lw          $a1, 0x5644($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X5644);
    // 0x8022E020: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022E024: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    // 0x8022E028: jal         0x8004F820
    // 0x8022E02C: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022E02C: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_0:
    // 0x8022E030: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022E034: lhu         $a0, 0x16($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X16);
    // 0x8022E038: lhu         $a1, 0x14($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X14);
    // 0x8022E03C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022E040: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022E044: addiu       $a0, $a0, -0x4
    ctx->r4 = ADD32(ctx->r4, -0X4);
    // 0x8022E048: sh          $a0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r4;
    // 0x8022E04C: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022E050: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022E054: sw          $a0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r4;
    // 0x8022E058: sh          $a1, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r5;
    // 0x8022E05C: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x8022E060: addiu       $v0, $v0, -0x50
    ctx->r2 = ADD32(ctx->r2, -0X50);
    // 0x8022E064: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x8022E068: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x8022E06C: lh          $v1, 0x16($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X16);
    // 0x8022E070: sh          $v0, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r2;
    // 0x8022E074: lh          $v0, 0x14($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X14);
    // 0x8022E078: lh          $a0, 0x18($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X18);
    // 0x8022E07C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022E080: sw          $v1, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r3;
    // 0x8022E084: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022E088: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022E08C: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    // 0x8022E090: sw          $a0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r4;
    // 0x8022E094: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022E098: j           L_8022E1D0
    // 0x8022E09C: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
        goto L_8022E1D0;
    // 0x8022E09C: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
L_8022E0A0:
    // 0x8022E0A0: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x8022E0A4: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022E0A8: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x8022E0AC: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x8022E0B0: sh          $v0, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r2;
    // 0x8022E0B4: sb          $v1, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r3;
    // 0x8022E0B8: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
    // 0x8022E0BC: lb          $v0, 0xE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE);
    // 0x8022E0C0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022E0C4: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x8022E0C8: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x8022E0CC: lw          $a1, 0x5644($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X5644);
    // 0x8022E0D0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022E0D4: addiu       $a0, $a1, 0xC4
    ctx->r4 = ADD32(ctx->r5, 0XC4);
    // 0x8022E0D8: jal         0x8009A3B4
    // 0x8022E0DC: addiu       $a1, $a1, 0x180
    ctx->r5 = ADD32(ctx->r5, 0X180);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022E0DC: addiu       $a1, $a1, 0x180
    ctx->r5 = ADD32(ctx->r5, 0X180);
    after_1:
    // 0x8022E0E0: lb          $v0, 0xE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE);
    // 0x8022E0E4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022E0E8: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x8022E0EC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022E0F0: lw          $v1, 0x5644($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X5644);
    // 0x8022E0F4: lhu         $v0, 0xC6($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0XC6);
    // 0x8022E0F8: addiu       $v0, $v0, -0x140
    ctx->r2 = ADD32(ctx->r2, -0X140);
    // 0x8022E0FC: sh          $v0, 0xC6($v1)
    MEM_H(0XC6, ctx->r3) = ctx->r2;
    // 0x8022E100: lb          $v0, 0xE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE);
    // 0x8022E104: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022E108: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022E10C: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x8022E110: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x8022E114: lw          $a1, 0x5644($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X5644);
    // 0x8022E118: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    // 0x8022E11C: jal         0x8004E428
    // 0x8022E120: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004E428_29828(rdram, ctx);
        goto after_2;
    // 0x8022E120: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_2:
    // 0x8022E124: lb          $v0, 0xE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE);
    // 0x8022E128: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022E12C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022E130: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022E134: lw          $v0, 0x5644($at)
    ctx->r2 = MEM_W(ctx->r1, 0X5644);
    // 0x8022E138: lb          $v0, 0xD($v0)
    ctx->r2 = MEM_B(ctx->r2, 0XD);
    // 0x8022E13C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022E140: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x8022E144: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022E148: lw          $v1, 0x5644($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X5644);
    // 0x8022E14C: lbu         $v0, 0xF($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XF);
    // 0x8022E150: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x8022E154: sb          $v0, 0xF($v1)
    MEM_B(0XF, ctx->r3) = ctx->r2;
L_8022E158:
    // 0x8022E158: lhu         $v0, 0x4($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X4);
    // 0x8022E15C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022E160: sh          $v0, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r2;
    // 0x8022E164: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022E168: bgez        $v0, L_8022E1D0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022E16C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022E1D0;
    }
    // 0x8022E16C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022E170: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022E174: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x8022E178: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022E17C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022E180: sh          $v0, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r2;
L_8022E184:
    // 0x8022E184: lhu         $v0, 0x4($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X4);
    // 0x8022E188: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022E18C: sh          $v0, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r2;
    // 0x8022E190: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022E194: bgez        $v0, L_8022E1BC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022E198: addiu       $v1, $zero, 0xF
        ctx->r3 = ADD32(0, 0XF);
            goto L_8022E1BC;
    }
    // 0x8022E198: addiu       $v1, $zero, 0xF
    ctx->r3 = ADD32(0, 0XF);
    // 0x8022E19C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022E1A0: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    // 0x8022E1A4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8022E1A8: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8022E1AC: sb          $v1, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r3;
    // 0x8022E1B0: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x8022E1B4: j           L_8022E1D0
    // 0x8022E1B8: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
        goto L_8022E1D0;
    // 0x8022E1B8: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
L_8022E1BC:
    // 0x8022E1BC: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x8022E1C0: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x8022E1C4: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022E1C8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022E1CC: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
L_8022E1D0:
    // 0x8022E1D0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8022E1D4: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x8022E1D8: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x8022E1DC: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8022E1E0: jr          $ra
    // 0x8022E1E4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8022E1E4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8023990C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023990C: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80239910: bne         $v0, $zero, L_80239920
    if (ctx->r2 != 0) {
        // 0x80239914: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_80239920;
    }
    // 0x80239914: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80239918: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x8023991C: sb          $zero, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = 0;
L_80239920:
    // 0x80239920: jr          $ra
    // 0x80239924: nop

    TRACE_RETURN()
    return;
    // 0x80239924: nop

;}
RECOMP_FUNC void func_8022A400_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A400: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022A404: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8022A408: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022A40C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8022A410: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8022A414: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022A418: lbu         $v1, 0x4($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X4);
    // 0x8022A41C: lui         $s2, 0x8021
    ctx->r18 = S32(0X8021 << 16);
    // 0x8022A420: addiu       $s2, $s2, 0x9D0
    ctx->r18 = ADD32(ctx->r18, 0X9D0);
    // 0x8022A424: sltiu       $v0, $v1, 0xA
    ctx->r2 = ctx->r3 < 0XA ? 1 : 0;
    // 0x8022A428: beq         $v0, $zero, L_8022A800
    if (ctx->r2 == 0) {
        // 0x8022A42C: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8022A800;
    }
    // 0x8022A42C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022A430: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022A434: addu        $at, $at, $v0
    gpr jr_addend_8022A43C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022A438: lw          $v0, 0x2D30($at)
    ctx->r2 = ADD32(ctx->r1, 0X2D30);
    // 0x8022A43C: jr          $v0
    // 0x8022A440: nop

    switch (jr_addend_8022A43C >> 2) {
        case 0: goto L_8022A444; break;
        case 1: goto L_8022A454; break;
        case 2: goto L_8022A5AC; break;
        case 3: goto L_8022A5C4; break;
        case 4: goto L_8022A5D8; break;
        case 5: goto L_8022A600; break;
        case 6: goto L_8022A664; break;
        case 7: goto L_8022A6F8; break;
        case 8: goto L_8022A71C; break;
        case 9: goto L_8022A7B0; break;
        default: switch_error(__func__, 0x8022A43C, 0x80252D30);
    }
    // 0x8022A440: nop

L_8022A444:
    // 0x8022A444: jal         0x8006036C
    // 0x8022A448: addiu       $a0, $zero, 0x7E0
    ctx->r4 = ADD32(0, 0X7E0);
    func_8006036C_3B76C(rdram, ctx);
        goto after_0;
    // 0x8022A448: addiu       $a0, $zero, 0x7E0
    ctx->r4 = ADD32(0, 0X7E0);
    after_0:
    // 0x8022A44C: j           L_8022A7A0
    // 0x8022A450: nop

        goto L_8022A7A0;
    // 0x8022A450: nop

L_8022A454:
    // 0x8022A454: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022A458: jal         0x8006FF84
    // 0x8022A45C: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_1;
    // 0x8022A45C: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_1:
    // 0x8022A460: beq         $v0, $zero, L_8022A800
    if (ctx->r2 == 0) {
        // 0x8022A464: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8022A800;
    }
    // 0x8022A464: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022A468: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8022A46C: lbu         $v1, 0x4A6D($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X4A6D);
    // 0x8022A470: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022A474: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022A478: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022A47C: sb          $v0, 0x49B8($at)
    MEM_B(0X49B8, ctx->r1) = ctx->r2;
    // 0x8022A480: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A484: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022A488: sb          $v0, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = ctx->r2;
    // 0x8022A48C: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x8022A490: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022A494: sh          $v0, 0x4DE8($at)
    MEM_H(0X4DE8, ctx->r1) = ctx->r2;
    // 0x8022A498: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022A49C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022A4A0: sh          $v0, 0x4DEA($at)
    MEM_H(0X4DEA, ctx->r1) = ctx->r2;
    // 0x8022A4A4: addiu       $v0, $zero, 0x1D1F
    ctx->r2 = ADD32(0, 0X1D1F);
    // 0x8022A4A8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022A4AC: sh          $v0, 0x4DEC($at)
    MEM_H(0X4DEC, ctx->r1) = ctx->r2;
    // 0x8022A4B0: lui         $v0, 0x400
    ctx->r2 = S32(0X400 << 16);
    // 0x8022A4B4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022A4B8: sw          $v0, 0x4DD8($at)
    MEM_W(0X4DD8, ctx->r1) = ctx->r2;
    // 0x8022A4BC: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x8022A4C0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022A4C4: sw          $v0, 0x4DDC($at)
    MEM_W(0X4DDC, ctx->r1) = ctx->r2;
    // 0x8022A4C8: lui         $v0, 0x1D1F
    ctx->r2 = S32(0X1D1F << 16);
    // 0x8022A4CC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022A4D0: sw          $v0, 0x4DE0($at)
    MEM_W(0X4DE0, ctx->r1) = ctx->r2;
    // 0x8022A4D4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022A4D8: sh          $zero, 0x4DF0($at)
    MEM_H(0X4DF0, ctx->r1) = 0;
    // 0x8022A4DC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022A4E0: sh          $zero, 0x4DF2($at)
    MEM_H(0X4DF2, ctx->r1) = 0;
    // 0x8022A4E4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022A4E8: sh          $zero, 0x4DF4($at)
    MEM_H(0X4DF4, ctx->r1) = 0;
    // 0x8022A4EC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022A4F0: sb          $zero, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = 0;
    // 0x8022A4F4: ori         $v1, $v1, 0x10
    ctx->r3 = ctx->r3 | 0X10;
    // 0x8022A4F8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022A4FC: sb          $v1, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r3;
    // 0x8022A500: jal         0x8005F6B4
    // 0x8022A504: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8005F6B4_3AAB4(rdram, ctx);
        goto after_2;
    // 0x8022A504: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x8022A508: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x8022A50C: lhu         $s0, 0x4A06($s0)
    ctx->r16 = MEM_HU(ctx->r16, 0X4A06);
    // 0x8022A510: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022A514: lh          $v0, 0x4A06($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X4A06);
    // 0x8022A518: addiu       $s0, $s0, 0x800
    ctx->r16 = ADD32(ctx->r16, 0X800);
    // 0x8022A51C: andi        $s0, $s0, 0xFFF
    ctx->r16 = ctx->r16 & 0XFFF;
    // 0x8022A520: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A524: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022A528: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A52C: jal         0x800324B4
    // 0x8022A530: sw          $v0, 0x40($s2)
    MEM_W(0X40, ctx->r18) = ctx->r2;
    func_800324B4_D8B4(rdram, ctx);
        goto after_3;
    // 0x8022A530: sw          $v0, 0x40($s2)
    MEM_W(0X40, ctx->r18) = ctx->r2;
    after_3:
    // 0x8022A534: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A538: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
    // 0x8022A53C: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8022A540: sll         $v1, $v1, 5
    ctx->r3 = S32(ctx->r3 << 5);
    // 0x8022A544: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022A548: lw          $a1, 0x4DD8($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X4DD8);
    // 0x8022A54C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022A550: sll         $v1, $v1, 6
    ctx->r3 = S32(ctx->r3 << 6);
    // 0x8022A554: subu        $a1, $a1, $v1
    ctx->r5 = SUB32(ctx->r5, ctx->r3);
    // 0x8022A558: jal         0x80032498
    // 0x8022A55C: sw          $a1, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->r5;
    func_80032498_D898(rdram, ctx);
        goto after_4;
    // 0x8022A55C: sw          $a1, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->r5;
    after_4:
    // 0x8022A560: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
    // 0x8022A564: sw          $v1, 0x44($s2)
    MEM_W(0X44, ctx->r18) = ctx->r3;
    // 0x8022A568: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x8022A56C: sw          $v1, 0x48($s2)
    MEM_W(0X48, ctx->r18) = ctx->r3;
    // 0x8022A570: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
    // 0x8022A574: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8022A578: sll         $v1, $v1, 5
    ctx->r3 = S32(ctx->r3 << 5);
    // 0x8022A57C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022A580: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022A584: lw          $v0, 0x4DE0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4DE0);
    // 0x8022A588: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022A58C: lw          $a0, 0x4DDC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4DDC);
    // 0x8022A590: sll         $v1, $v1, 6
    ctx->r3 = S32(ctx->r3 << 6);
    // 0x8022A594: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022A598: sw          $v0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r2;
    // 0x8022A59C: lui         $v0, 0xFD44
    ctx->r2 = S32(0XFD44 << 16);
    // 0x8022A5A0: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8022A5A4: j           L_8022A7A0
    // 0x8022A5A8: sw          $a0, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r4;
        goto L_8022A7A0;
    // 0x8022A5A8: sw          $a0, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r4;
L_8022A5AC:
    // 0x8022A5AC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022A5B0: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x8022A5B4: beq         $v0, $zero, L_8022A7A0
    if (ctx->r2 == 0) {
        // 0x8022A5B8: nop
    
            goto L_8022A7A0;
    }
    // 0x8022A5B8: nop

    // 0x8022A5BC: j           L_8022A800
    // 0x8022A5C0: nop

        goto L_8022A800;
    // 0x8022A5C0: nop

L_8022A5C4:
    // 0x8022A5C4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022A5C8: jal         0x800616FC
    // 0x8022A5CC: addiu       $a1, $zero, 0x2F
    ctx->r5 = ADD32(0, 0X2F);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_5;
    // 0x8022A5CC: addiu       $a1, $zero, 0x2F
    ctx->r5 = ADD32(0, 0X2F);
    after_5:
    // 0x8022A5D0: j           L_8022A7A0
    // 0x8022A5D4: nop

        goto L_8022A7A0;
    // 0x8022A5D4: nop

L_8022A5D8:
    // 0x8022A5D8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022A5DC: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022A5E0: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8022A5E4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022A5E8: bne         $v0, $zero, L_8022A800
    if (ctx->r2 != 0) {
        // 0x8022A5EC: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8022A800;
    }
    // 0x8022A5EC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022A5F0: jal         0x800616FC
    // 0x8022A5F4: addiu       $a1, $zero, 0x31
    ctx->r5 = ADD32(0, 0X31);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_6;
    // 0x8022A5F4: addiu       $a1, $zero, 0x31
    ctx->r5 = ADD32(0, 0X31);
    after_6:
    // 0x8022A5F8: j           L_8022A7A0
    // 0x8022A5FC: nop

        goto L_8022A7A0;
    // 0x8022A5FC: nop

L_8022A600:
    // 0x8022A600: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022A604: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022A608: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8022A60C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022A610: bne         $v0, $zero, L_8022A800
    if (ctx->r2 != 0) {
        // 0x8022A614: nop
    
            goto L_8022A800;
    }
    // 0x8022A614: nop

    // 0x8022A618: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022A61C: jal         0x80070050
    // 0x8022A620: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    func_80070050_4B450(rdram, ctx);
        goto after_7;
    // 0x8022A620: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_7:
    // 0x8022A624: jal         0x800A3450
    // 0x8022A628: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_8;
    // 0x8022A628: nop

    after_8:
    // 0x8022A62C: lui         $v1, 0x2AAA
    ctx->r3 = S32(0X2AAA << 16);
    // 0x8022A630: ori         $v1, $v1, 0xAAAB
    ctx->r3 = ctx->r3 | 0XAAAB;
    // 0x8022A634: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022A638: sra         $v1, $v0, 31
    ctx->r3 = S32(SIGNED(ctx->r2) >> 31);
    // 0x8022A63C: mfhi        $a3
    ctx->r7 = hi;
    // 0x8022A640: sra         $a0, $a3, 2
    ctx->r4 = S32(SIGNED(ctx->r7) >> 2);
    // 0x8022A644: subu        $a0, $a0, $v1
    ctx->r4 = SUB32(ctx->r4, ctx->r3);
    // 0x8022A648: sll         $v1, $a0, 1
    ctx->r3 = S32(ctx->r4 << 1);
    // 0x8022A64C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8022A650: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x8022A654: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022A658: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022A65C: j           L_8022A7A0
    // 0x8022A660: sb          $v0, 0x3400($at)
    MEM_B(0X3400, ctx->r1) = ctx->r2;
        goto L_8022A7A0;
    // 0x8022A660: sb          $v0, 0x3400($at)
    MEM_B(0X3400, ctx->r1) = ctx->r2;
L_8022A664:
    // 0x8022A664: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022A668: addiu       $v0, $v0, 0x4A06
    ctx->r2 = ADD32(ctx->r2, 0X4A06);
    // 0x8022A66C: lhu         $s0, 0x0($v0)
    ctx->r16 = MEM_HU(ctx->r2, 0X0);
    // 0x8022A670: lh          $v0, 0x0($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X0);
    // 0x8022A674: addiu       $s0, $s0, 0x800
    ctx->r16 = ADD32(ctx->r16, 0X800);
    // 0x8022A678: andi        $s0, $s0, 0xFFF
    ctx->r16 = ctx->r16 & 0XFFF;
    // 0x8022A67C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A680: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022A684: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A688: jal         0x800324B4
    // 0x8022A68C: sw          $v0, 0x40($s2)
    MEM_W(0X40, ctx->r18) = ctx->r2;
    func_800324B4_D8B4(rdram, ctx);
        goto after_9;
    // 0x8022A68C: sw          $v0, 0x40($s2)
    MEM_W(0X40, ctx->r18) = ctx->r2;
    after_9:
    // 0x8022A690: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A694: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
    // 0x8022A698: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8022A69C: sll         $v1, $v1, 5
    ctx->r3 = S32(ctx->r3 << 5);
    // 0x8022A6A0: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022A6A4: lw          $a1, 0x49CC($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X49CC);
    // 0x8022A6A8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022A6AC: sll         $v1, $v1, 6
    ctx->r3 = S32(ctx->r3 << 6);
    // 0x8022A6B0: subu        $a1, $a1, $v1
    ctx->r5 = SUB32(ctx->r5, ctx->r3);
    // 0x8022A6B4: jal         0x80032498
    // 0x8022A6B8: sw          $a1, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->r5;
    func_80032498_D898(rdram, ctx);
        goto after_10;
    // 0x8022A6B8: sw          $a1, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->r5;
    after_10:
    // 0x8022A6BC: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
    // 0x8022A6C0: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8022A6C4: sll         $v1, $v1, 5
    ctx->r3 = S32(ctx->r3 << 5);
    // 0x8022A6C8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022A6CC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022A6D0: lw          $v0, 0x49D4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X49D4);
    // 0x8022A6D4: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022A6D8: lw          $a0, 0x49D0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X49D0);
    // 0x8022A6DC: sll         $v1, $v1, 6
    ctx->r3 = S32(ctx->r3 << 6);
    // 0x8022A6E0: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022A6E4: sw          $v0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r2;
    // 0x8022A6E8: lui         $v0, 0xFD44
    ctx->r2 = S32(0XFD44 << 16);
    // 0x8022A6EC: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8022A6F0: j           L_8022A800
    // 0x8022A6F4: sw          $a0, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r4;
        goto L_8022A800;
    // 0x8022A6F4: sw          $a0, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r4;
L_8022A6F8:
    // 0x8022A6F8: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022A6FC: jal         0x8006FF84
    // 0x8022A700: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_11;
    // 0x8022A700: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_11:
    // 0x8022A704: beq         $v0, $zero, L_8022A800
    if (ctx->r2 == 0) {
        // 0x8022A708: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8022A800;
    }
    // 0x8022A708: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022A70C: jal         0x800616FC
    // 0x8022A710: addiu       $a1, $zero, 0x35
    ctx->r5 = ADD32(0, 0X35);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_12;
    // 0x8022A710: addiu       $a1, $zero, 0x35
    ctx->r5 = ADD32(0, 0X35);
    after_12:
    // 0x8022A714: j           L_8022A7A0
    // 0x8022A718: nop

        goto L_8022A7A0;
    // 0x8022A718: nop

L_8022A71C:
    // 0x8022A71C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022A720: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022A724: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8022A728: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022A72C: bne         $v0, $zero, L_8022A800
    if (ctx->r2 != 0) {
        // 0x8022A730: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022A800;
    }
    // 0x8022A730: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A734: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022A738: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x8022A73C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022A740: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x8022A744: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022A748: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x8022A74C: addiu       $v0, $zero, -0x21
    ctx->r2 = ADD32(0, -0X21);
    // 0x8022A750: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022A754: sh          $v0, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = ctx->r2;
    // 0x8022A758: addiu       $v0, $zero, -0x41
    ctx->r2 = ADD32(0, -0X41);
    // 0x8022A75C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022A760: sh          $v0, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = ctx->r2;
    // 0x8022A764: addiu       $v0, $zero, 0x20F
    ctx->r2 = ADD32(0, 0X20F);
    // 0x8022A768: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022A76C: sh          $v0, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = ctx->r2;
    // 0x8022A770: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x8022A774: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022A778: sh          $v0, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = ctx->r2;
    // 0x8022A77C: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022A780: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022A784: sb          $v1, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r3;
    // 0x8022A788: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022A78C: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x8022A790: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022A794: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x8022A798: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022A79C: sb          $v1, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r3;
L_8022A7A0:
    // 0x8022A7A0: lbu         $v0, 0x4($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X4);
    // 0x8022A7A4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022A7A8: j           L_8022A800
    // 0x8022A7AC: sb          $v0, 0x4($s1)
    MEM_B(0X4, ctx->r17) = ctx->r2;
        goto L_8022A800;
    // 0x8022A7AC: sb          $v0, 0x4($s1)
    MEM_B(0X4, ctx->r17) = ctx->r2;
L_8022A7B0:
    // 0x8022A7B0: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022A7B4: addiu       $a1, $a1, 0x47CC
    ctx->r5 = ADD32(ctx->r5, 0X47CC);
    // 0x8022A7B8: lb          $v1, 0x0($a1)
    ctx->r3 = MEM_B(ctx->r5, 0X0);
    // 0x8022A7BC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022A7C0: bne         $v1, $v0, L_8022A800
    if (ctx->r3 != ctx->r2) {
        // 0x8022A7C4: addu        $a0, $v1, $zero
        ctx->r4 = ADD32(ctx->r3, 0);
            goto L_8022A800;
    }
    // 0x8022A7C4: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x8022A7C8: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x8022A7CC: addiu       $a0, $zero, 0x7E0
    ctx->r4 = ADD32(0, 0X7E0);
    // 0x8022A7D0: jal         0x80060590
    // 0x8022A7D4: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    func_80060590_3B990(rdram, ctx);
        goto after_13;
    // 0x8022A7D4: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    after_13:
    // 0x8022A7D8: jal         0x80060590
    // 0x8022A7DC: addiu       $a0, $zero, 0x208
    ctx->r4 = ADD32(0, 0X208);
    func_80060590_3B990(rdram, ctx);
        goto after_14;
    // 0x8022A7DC: addiu       $a0, $zero, 0x208
    ctx->r4 = ADD32(0, 0X208);
    after_14:
    // 0x8022A7E0: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022A7E4: jal         0x80070050
    // 0x8022A7E8: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    func_80070050_4B450(rdram, ctx);
        goto after_15;
    // 0x8022A7E8: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_15:
    // 0x8022A7EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A7F0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022A7F4: jal         0x80034844
    // 0x8022A7F8: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    func_80034844_FC44(rdram, ctx);
        goto after_16;
    // 0x8022A7F8: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    after_16:
    // 0x8022A7FC: sb          $zero, 0x0($s1)
    MEM_B(0X0, ctx->r17) = 0;
L_8022A800:
    // 0x8022A800: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8022A804: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8022A808: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022A80C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022A810: jr          $ra
    // 0x8022A814: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022A814: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8022A818: nop

    // 0x8022A81C: nop

;}
RECOMP_FUNC void func_80246FC8_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80246FC8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80246FCC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80246FD0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80246FD4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80246FD8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80246FDC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80246FE0: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x80246FE4: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x80246FE8: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x80246FEC: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x80246FF0: beq         $v0, $zero, L_80247004
    if (ctx->r2 == 0) {
        // 0x80246FF4: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80247004;
    }
    // 0x80246FF4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80246FF8: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80246FFC: j           L_80247120
    // 0x80247000: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
        goto L_80247120;
    // 0x80247000: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
L_80247004:
    // 0x80247004: jal         0x8004F144
    // 0x80247008: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80247008: nop

    after_0:
    // 0x8024700C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x80247010: beq         $a1, $zero, L_80247120
    if (ctx->r5 == 0) {
        // 0x80247014: andi        $v0, $s1, 0xFF
        ctx->r2 = ctx->r17 & 0XFF;
            goto L_80247120;
    }
    // 0x80247014: andi        $v0, $s1, 0xFF
    ctx->r2 = ctx->r17 & 0XFF;
    // 0x80247018: bne         $v0, $zero, L_802470C8
    if (ctx->r2 != 0) {
        // 0x8024701C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802470C8;
    }
    // 0x8024701C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80247020: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80247024: lhu         $v0, 0x49C4($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X49C4);
    // 0x80247028: lhu         $v1, 0x14($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X14);
    // 0x8024702C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80247030: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x80247034: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80247038: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8024703C: sra         $v0, $v0, 20
    ctx->r2 = S32(SIGNED(ctx->r2) >> 20);
    // 0x80247040: beq         $v0, $zero, L_80247054
    if (ctx->r2 == 0) {
        // 0x80247044: nop
    
            goto L_80247054;
    }
    // 0x80247044: nop

    // 0x80247048: bgez        $v1, L_80247054
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8024704C: addiu       $a2, $zero, 0x64
        ctx->r6 = ADD32(0, 0X64);
            goto L_80247054;
    }
    // 0x8024704C: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    // 0x80247050: addiu       $a2, $zero, -0x64
    ctx->r6 = ADD32(0, -0X64);
L_80247054:
    // 0x80247054: lhu         $v0, 0x18($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X18);
    // 0x80247058: lhu         $v1, 0x18($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X18);
    // 0x8024705C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80247060: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80247064: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80247068: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8024706C: sra         $v0, $v0, 20
    ctx->r2 = S32(SIGNED(ctx->r2) >> 20);
    // 0x80247070: beql        $v0, $zero, L_80247088
    if (ctx->r2 == 0) {
        // 0x80247074: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80247088;
    }
    goto skip_0;
    // 0x80247074: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    skip_0:
    // 0x80247078: bgez        $v1, L_80247084
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8024707C: addiu       $a0, $zero, 0x64
        ctx->r4 = ADD32(0, 0X64);
            goto L_80247084;
    }
    // 0x8024707C: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    // 0x80247080: addiu       $a0, $zero, -0x64
    ctx->r4 = ADD32(0, -0X64);
L_80247084:
    // 0x80247084: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_80247088:
    // 0x80247088: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x8024708C: addiu       $v0, $zero, 0x83
    ctx->r2 = ADD32(0, 0X83);
    // 0x80247090: sb          $v0, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r2;
    // 0x80247094: sb          $zero, 0x3($a1)
    MEM_B(0X3, ctx->r5) = 0;
    // 0x80247098: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x8024709C: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x802470A0: sh          $v0, 0x1C($a1)
    MEM_H(0X1C, ctx->r5) = ctx->r2;
    // 0x802470A4: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x802470A8: addiu       $v0, $v0, -0x50
    ctx->r2 = ADD32(ctx->r2, -0X50);
    // 0x802470AC: sh          $v0, 0x1E($a1)
    MEM_H(0X1E, ctx->r5) = ctx->r2;
    // 0x802470B0: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x802470B4: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x802470B8: sh          $v0, 0x20($a1)
    MEM_H(0X20, ctx->r5) = ctx->r2;
    // 0x802470BC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802470C0: j           L_80247120
    // 0x802470C4: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
        goto L_80247120;
    // 0x802470C4: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
L_802470C8:
    // 0x802470C8: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x802470CC: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x802470D0: sb          $v0, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r2;
    // 0x802470D4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802470D8: sb          $v0, 0x3($a1)
    MEM_B(0X3, ctx->r5) = ctx->r2;
    // 0x802470DC: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x802470E0: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x802470E4: sb          $zero, 0xC($a1)
    MEM_B(0XC, ctx->r5) = 0;
    // 0x802470E8: sb          $zero, 0xD($a1)
    MEM_B(0XD, ctx->r5) = 0;
    // 0x802470EC: sb          $v0, 0xE($a1)
    MEM_B(0XE, ctx->r5) = ctx->r2;
    // 0x802470F0: sb          $a0, 0xF($a1)
    MEM_B(0XF, ctx->r5) = ctx->r4;
    // 0x802470F4: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x802470F8: sh          $v0, 0x1C($a1)
    MEM_H(0X1C, ctx->r5) = ctx->r2;
    // 0x802470FC: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x80247100: addiu       $v0, $v0, -0x50
    ctx->r2 = ADD32(ctx->r2, -0X50);
    // 0x80247104: sh          $v0, 0x1E($a1)
    MEM_H(0X1E, ctx->r5) = ctx->r2;
    // 0x80247108: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x8024710C: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x80247110: sb          $v1, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r3;
    // 0x80247114: addiu       $v0, $v0, -0x28
    ctx->r2 = ADD32(ctx->r2, -0X28);
    // 0x80247118: sh          $v0, 0x20($a1)
    MEM_H(0X20, ctx->r5) = ctx->r2;
    // 0x8024711C: sb          $a0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r4;
L_80247120:
    // 0x80247120: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80247124: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80247128: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8024712C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80247130: jr          $ra
    // 0x80247134: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80247134: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80247138: nop

    // 0x8024713C: nop

;}
RECOMP_FUNC void func_8022B560_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B560: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B564: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B568: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B56C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022B570: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8022B574: bne         $v0, $zero, L_8022B594
    if (ctx->r2 != 0) {
        // 0x8022B578: nop
    
            goto L_8022B594;
    }
    // 0x8022B578: nop

    // 0x8022B57C: jal         0x80229F50
    // 0x8022B580: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    func_80229F50_ovl10(rdram, ctx);
        goto after_0;
    // 0x8022B580: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    after_0:
    // 0x8022B584: jal         0x80229F50
    // 0x8022B588: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    func_80229F50_ovl10(rdram, ctx);
        goto after_1;
    // 0x8022B588: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    after_1:
    // 0x8022B58C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022B590: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_8022B594:
    // 0x8022B594: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022B598: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B59C: jr          $ra
    // 0x8022B5A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B5A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80247BEC_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80247BEC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80247BF0: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80247BF4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80247BF8: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x80247BFC: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80247C00: lbu         $v1, 0xB($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XB);
    // 0x80247C04: sltiu       $v0, $v1, 0x18
    ctx->r2 = ctx->r3 < 0X18 ? 1 : 0;
    // 0x80247C08: beq         $v0, $zero, L_80247C5C
    if (ctx->r2 == 0) {
        // 0x80247C0C: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_80247C5C;
    }
    // 0x80247C0C: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x80247C10: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x80247C14: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80247C18: jal         0x8002C678
    // 0x80247C1C: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
    func_8002C678_7A78(rdram, ctx);
        goto after_0;
    // 0x80247C1C: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
    after_0:
    // 0x80247C20: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x80247C24: lui         $v1, 0x2AAA
    ctx->r3 = S32(0X2AAA << 16);
    // 0x80247C28: ori         $v1, $v1, 0xAAAB
    ctx->r3 = ctx->r3 | 0XAAAB;
    // 0x80247C2C: sll         $v0, $v0, 12
    ctx->r2 = S32(ctx->r2 << 12);
    // 0x80247C30: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80247C34: lb          $a0, 0xC($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XC);
    // 0x80247C38: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80247C3C: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    // 0x80247C40: mfhi        $a2
    ctx->r6 = hi;
    // 0x80247C44: sra         $v0, $a2, 2
    ctx->r2 = S32(SIGNED(ctx->r6) >> 2);
    // 0x80247C48: nop

    // 0x80247C4C: jal         0x800319B4
    // 0x80247C50: sh          $v0, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r2;
    func_800319B4_CDB4(rdram, ctx);
        goto after_1;
    // 0x80247C50: sh          $v0, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r2;
    after_1:
    // 0x80247C54: j           L_80247C64
    // 0x80247C58: nop

        goto L_80247C64;
    // 0x80247C58: nop

L_80247C5C:
    // 0x80247C5C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80247C60: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
L_80247C64:
    // 0x80247C64: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x80247C68: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80247C6C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80247C70: jr          $ra
    // 0x80247C74: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80247C74: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8024C190_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024C190: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8024C194: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8024C198: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8024C19C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8024C1A0: lbu         $v1, 0xB($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XB);
    // 0x8024C1A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8024C1A8: beq         $v1, $v0, L_8024C23C
    if (ctx->r3 == ctx->r2) {
        // 0x8024C1AC: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8024C23C;
    }
    // 0x8024C1AC: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8024C1B0: beql        $v0, $zero, L_8024C1C8
    if (ctx->r2 == 0) {
        // 0x8024C1B4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8024C1C8;
    }
    goto skip_0;
    // 0x8024C1B4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8024C1B8: beq         $v1, $zero, L_8024C1E0
    if (ctx->r3 == 0) {
        // 0x8024C1BC: nop
    
            goto L_8024C1E0;
    }
    // 0x8024C1BC: nop

    // 0x8024C1C0: j           L_8024C324
    // 0x8024C1C4: nop

        goto L_8024C324;
    // 0x8024C1C4: nop

L_8024C1C8:
    // 0x8024C1C8: beq         $v1, $v0, L_8024C290
    if (ctx->r3 == ctx->r2) {
        // 0x8024C1CC: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8024C290;
    }
    // 0x8024C1CC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8024C1D0: beq         $v1, $v0, L_8024C2CC
    if (ctx->r3 == ctx->r2) {
        // 0x8024C1D4: lui         $v1, 0x800
        ctx->r3 = S32(0X800 << 16);
            goto L_8024C2CC;
    }
    // 0x8024C1D4: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8024C1D8: j           L_8024C324
    // 0x8024C1DC: nop

        goto L_8024C324;
    // 0x8024C1DC: nop

L_8024C1E0:
    // 0x8024C1E0: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8024C1E4: jal         0x8006FF84
    // 0x8024C1E8: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_0;
    // 0x8024C1E8: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_0:
    // 0x8024C1EC: beq         $v0, $zero, L_8024C324
    if (ctx->r2 == 0) {
        // 0x8024C1F0: nop
    
            goto L_8024C324;
    }
    // 0x8024C1F0: nop

    // 0x8024C1F4: lb          $a0, 0xF($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XF);
    // 0x8024C1F8: jal         0x8006036C
    // 0x8024C1FC: addiu       $a0, $a0, 0x201
    ctx->r4 = ADD32(ctx->r4, 0X201);
    func_8006036C_3B76C(rdram, ctx);
        goto after_1;
    // 0x8024C1FC: addiu       $a0, $a0, 0x201
    ctx->r4 = ADD32(ctx->r4, 0X201);
    after_1:
    // 0x8024C200: lb          $v1, 0xF($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XF);
    // 0x8024C204: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8024C208: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8024C20C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8024C210: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8024C214: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8024C218: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8024C21C: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8024C220: jal         0x80069820
    // 0x8024C224: lbu         $a0, 0x26D3($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X26D3);
    func_80069820_44C20(rdram, ctx);
        goto after_2;
    // 0x8024C224: lbu         $a0, 0x26D3($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X26D3);
    after_2:
    // 0x8024C228: jal         0x80060D38
    // 0x8024C22C: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_80060D38_3C138(rdram, ctx);
        goto after_3;
    // 0x8024C22C: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_3:
    // 0x8024C230: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8024C234: j           L_8024C2B4
    // 0x8024C238: addiu       $a1, $zero, 0x36
    ctx->r5 = ADD32(0, 0X36);
        goto L_8024C2B4;
    // 0x8024C238: addiu       $a1, $zero, 0x36
    ctx->r5 = ADD32(0, 0X36);
L_8024C23C:
    // 0x8024C23C: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x8024C240: lbu         $a1, 0x35D0($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X35D0);
    // 0x8024C244: sltiu       $v0, $a1, 0x3
    ctx->r2 = ctx->r5 < 0X3 ? 1 : 0;
    // 0x8024C248: beq         $v0, $zero, L_8024C284
    if (ctx->r2 == 0) {
        // 0x8024C24C: lui         $v1, 0x800
        ctx->r3 = S32(0X800 << 16);
            goto L_8024C284;
    }
    // 0x8024C24C: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8024C250: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8024C254: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8024C258: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8024C25C: bne         $v0, $zero, L_8024C324
    if (ctx->r2 != 0) {
        // 0x8024C260: nop
    
            goto L_8024C324;
    }
    // 0x8024C260: nop

    // 0x8024C264: lb          $v0, 0xF($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XF);
    // 0x8024C268: sll         $a0, $v0, 1
    ctx->r4 = S32(ctx->r2 << 1);
    // 0x8024C26C: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8024C270: jal         0x80069850
    // 0x8024C274: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    func_80069850_44C50(rdram, ctx);
        goto after_4;
    // 0x8024C274: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    after_4:
    // 0x8024C278: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8024C27C: j           L_8024C2B4
    // 0x8024C280: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
        goto L_8024C2B4;
    // 0x8024C280: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
L_8024C284:
    // 0x8024C284: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8024C288: j           L_8024C324
    // 0x8024C28C: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
        goto L_8024C324;
    // 0x8024C28C: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
L_8024C290:
    // 0x8024C290: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8024C294: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8024C298: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8024C29C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8024C2A0: bne         $v0, $zero, L_8024C324
    if (ctx->r2 != 0) {
        // 0x8024C2A4: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8024C324;
    }
    // 0x8024C2A4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8024C2A8: lbu         $a1, 0xF($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XF);
    // 0x8024C2AC: addiu       $a1, $a1, 0x3
    ctx->r5 = ADD32(ctx->r5, 0X3);
    // 0x8024C2B0: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
L_8024C2B4:
    // 0x8024C2B4: jal         0x800616FC
    // 0x8024C2B8: nop

    func_800616FC_3CAFC(rdram, ctx);
        goto after_5;
    // 0x8024C2B8: nop

    after_5:
    // 0x8024C2BC: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8024C2C0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8024C2C4: j           L_8024C324
    // 0x8024C2C8: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
        goto L_8024C324;
    // 0x8024C2C8: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
L_8024C2CC:
    // 0x8024C2CC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8024C2D0: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8024C2D4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8024C2D8: bne         $v0, $zero, L_8024C324
    if (ctx->r2 != 0) {
        // 0x8024C2DC: nop
    
            goto L_8024C324;
    }
    // 0x8024C2DC: nop

    // 0x8024C2E0: jal         0x8002A398
    // 0x8024C2E4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_8002A398_5798(rdram, ctx);
        goto after_6;
    // 0x8024C2E4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_6:
    // 0x8024C2E8: bne         $v0, $zero, L_8024C324
    if (ctx->r2 != 0) {
        // 0x8024C2EC: nop
    
            goto L_8024C324;
    }
    // 0x8024C2EC: nop

    // 0x8024C2F0: lb          $a0, 0xF($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XF);
    // 0x8024C2F4: jal         0x8006036C
    // 0x8024C2F8: addiu       $a0, $a0, 0x201
    ctx->r4 = ADD32(ctx->r4, 0X201);
    func_8006036C_3B76C(rdram, ctx);
        goto after_7;
    // 0x8024C2F8: addiu       $a0, $a0, 0x201
    ctx->r4 = ADD32(ctx->r4, 0X201);
    after_7:
    // 0x8024C2FC: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    // 0x8024C300: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8024C304: jal         0x8002A2F8
    // 0x8024C308: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_8;
    // 0x8024C308: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_8:
    // 0x8024C30C: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x8024C310: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8024C314: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8024C318: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x8024C31C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8024C320: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
L_8024C324:
    // 0x8024C324: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8024C328: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8024C32C: jr          $ra
    // 0x8024C330: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8024C330: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80235318_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235318: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8023531C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80235320: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80235324: addiu       $a0, $s0, 0x34C
    ctx->r4 = ADD32(ctx->r16, 0X34C);
    // 0x80235328: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8023532C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80235330: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80235334: addiu       $s1, $s0, 0x328
    ctx->r17 = ADD32(ctx->r16, 0X328);
    // 0x80235338: jal         0x800540EC
    // 0x8023533C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_800540EC_2F4EC(rdram, ctx);
        goto after_0;
    // 0x8023533C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80235340: beq         $v0, $zero, L_80235354
    if (ctx->r2 == 0) {
        // 0x80235344: nop
    
            goto L_80235354;
    }
    // 0x80235344: nop

    // 0x80235348: lhu         $v0, 0x328($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X328);
    // 0x8023534C: j           L_8023535C
    // 0x80235350: ori         $v0, $v0, 0x100
    ctx->r2 = ctx->r2 | 0X100;
        goto L_8023535C;
    // 0x80235350: ori         $v0, $v0, 0x100
    ctx->r2 = ctx->r2 | 0X100;
L_80235354:
    // 0x80235354: lhu         $v0, 0x328($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X328);
    // 0x80235358: andi        $v0, $v0, 0xFEFF
    ctx->r2 = ctx->r2 & 0XFEFF;
L_8023535C:
    // 0x8023535C: sh          $v0, 0x328($s0)
    MEM_H(0X328, ctx->r16) = ctx->r2;
    // 0x80235360: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80235364: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80235368: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8023536C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80235370: lw          $v0, 0x1228($at)
    ctx->r2 = MEM_W(ctx->r1, 0X1228);
    // 0x80235374: jalr        $v0
    // 0x80235378: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x80235378: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8023537C: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80235380: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80235384: beq         $v0, $zero, L_8023545C
    if (ctx->r2 == 0) {
        // 0x80235388: nop
    
            goto L_8023545C;
    }
    // 0x80235388: nop

    // 0x8023538C: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80235390: sltiu       $v0, $v1, 0x9
    ctx->r2 = ctx->r3 < 0X9 ? 1 : 0;
    // 0x80235394: beq         $v0, $zero, L_8023544C
    if (ctx->r2 == 0) {
        // 0x80235398: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8023544C;
    }
    // 0x80235398: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8023539C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802353A0: addu        $at, $at, $v0
    gpr jr_addend_802353A8 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802353A4: lw          $v0, 0x2ED8($at)
    ctx->r2 = ADD32(ctx->r1, 0X2ED8);
    // 0x802353A8: jr          $v0
    // 0x802353AC: nop

    switch (jr_addend_802353A8 >> 2) {
        case 0: goto L_802353C4; break;
        case 1: goto L_80235400; break;
        case 2: goto L_8023544C; break;
        case 3: goto L_80235400; break;
        case 4: goto L_8023544C; break;
        case 5: goto L_8023544C; break;
        case 6: goto L_802353C4; break;
        case 7: goto L_802353B0; break;
        case 8: goto L_802353C4; break;
        default: switch_error(__func__, 0x802353A8, 0x80252ED8);
    }
    // 0x802353AC: nop

L_802353B0:
    // 0x802353B0: addiu       $v0, $zero, 0xF0
    ctx->r2 = ADD32(0, 0XF0);
    // 0x802353B4: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802353B8: sw          $zero, 0x566C($at)
    MEM_W(0X566C, ctx->r1) = 0;
    // 0x802353BC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802353C0: sw          $v0, 0x5640($at)
    MEM_W(0X5640, ctx->r1) = ctx->r2;
L_802353C4:
    // 0x802353C4: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x802353C8: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x802353CC: bne         $v0, $zero, L_802353F4
    if (ctx->r2 != 0) {
        // 0x802353D0: nop
    
            goto L_802353F4;
    }
    // 0x802353D0: nop

    // 0x802353D4: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x802353D8: andi        $v0, $v0, 0x100
    ctx->r2 = ctx->r2 & 0X100;
    // 0x802353DC: bne         $v0, $zero, L_802353F4
    if (ctx->r2 != 0) {
        // 0x802353E0: nop
    
            goto L_802353F4;
    }
    // 0x802353E0: nop

    // 0x802353E4: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x802353E8: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x802353EC: beql        $v0, $zero, L_8023544C
    if (ctx->r2 == 0) {
        // 0x802353F0: sb          $zero, 0x9($s0)
        MEM_B(0X9, ctx->r16) = 0;
            goto L_8023544C;
    }
    goto skip_0;
    // 0x802353F0: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    skip_0:
L_802353F4:
    // 0x802353F4: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x802353F8: j           L_80235440
    // 0x802353FC: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
        goto L_80235440;
    // 0x802353FC: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
L_80235400:
    // 0x80235400: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x80235404: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80235408: bne         $v0, $zero, L_80235430
    if (ctx->r2 != 0) {
        // 0x8023540C: nop
    
            goto L_80235430;
    }
    // 0x8023540C: nop

    // 0x80235410: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80235414: andi        $v0, $v0, 0x100
    ctx->r2 = ctx->r2 & 0X100;
    // 0x80235418: bne         $v0, $zero, L_80235430
    if (ctx->r2 != 0) {
        // 0x8023541C: nop
    
            goto L_80235430;
    }
    // 0x8023541C: nop

    // 0x80235420: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x80235424: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80235428: beql        $v0, $zero, L_8023543C
    if (ctx->r2 == 0) {
        // 0x8023542C: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_8023543C;
    }
    goto skip_1;
    // 0x8023542C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    skip_1:
L_80235430:
    // 0x80235430: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x80235434: j           L_80235440
    // 0x80235438: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
        goto L_80235440;
    // 0x80235438: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
L_8023543C:
    // 0x8023543C: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
L_80235440:
    // 0x80235440: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    // 0x80235444: andi        $v0, $v0, 0xFE
    ctx->r2 = ctx->r2 & 0XFE;
    // 0x80235448: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
L_8023544C:
    // 0x8023544C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x80235450: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80235454: andi        $v0, $v0, 0xFFFE
    ctx->r2 = ctx->r2 & 0XFFFE;
    // 0x80235458: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8023545C:
    // 0x8023545C: lh          $v0, 0xA($s1)
    ctx->r2 = MEM_H(ctx->r17, 0XA);
    // 0x80235460: beq         $v0, $zero, L_80235470
    if (ctx->r2 == 0) {
        // 0x80235464: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80235470;
    }
    // 0x80235464: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80235468: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8023546C: sh          $v0, 0xA($s1)
    MEM_H(0XA, ctx->r17) = ctx->r2;
L_80235470:
    // 0x80235470: lh          $v0, 0x38($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X38);
    // 0x80235474: beq         $v0, $zero, L_80235484
    if (ctx->r2 == 0) {
        // 0x80235478: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80235484;
    }
    // 0x80235478: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8023547C: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80235480: sh          $v0, 0x38($s1)
    MEM_H(0X38, ctx->r17) = ctx->r2;
L_80235484:
    // 0x80235484: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x80235488: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8023548C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80235490: jr          $ra
    // 0x80235494: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80235494: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_802317E0_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802317E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802317E4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802317E8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802317EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802317F0: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x802317F4: bgez        $v0, L_8023180C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802317F8: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_8023180C;
    }
    // 0x802317F8: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x802317FC: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80231800: jal         0x802332A8
    // 0x80231804: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    func_802332A8_ovl10(rdram, ctx);
        goto after_0;
    // 0x80231804: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    after_0:
    // 0x80231808: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8023180C:
    // 0x8023180C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80231810: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80231814: jr          $ra
    // 0x80231818: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80231818: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022E668_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E668: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8022E66C: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8022E670: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022E674: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8022E678: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8022E67C: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x8022E680: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x8022E684: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022E688: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022E68C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022E690: jal         0x8009A3B4
    // 0x8022E694: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022E694: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022E698: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8022E69C: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022E6A0: jal         0x8009A3B4
    // 0x8022E6A4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022E6A4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022E6A8: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8022E6AC: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8022E6B0: jal         0x8009A3B4
    // 0x8022E6B4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022E6B4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022E6B8: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022E6BC: jal         0x800A3450
    // 0x8022E6C0: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x8022E6C0: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    after_3:
    // 0x8022E6C4: lhu         $v1, 0x348($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X348);
    // 0x8022E6C8: sh          $v0, 0x34A($s0)
    MEM_H(0X34A, ctx->r16) = ctx->r2;
    // 0x8022E6CC: addiu       $v0, $zero, 0x104
    ctx->r2 = ADD32(0, 0X104);
    // 0x8022E6D0: andi        $v1, $v1, 0x104
    ctx->r3 = ctx->r3 & 0X104;
    // 0x8022E6D4: bne         $v1, $v0, L_8022E6E4
    if (ctx->r3 != ctx->r2) {
        // 0x8022E6D8: addiu       $s2, $s0, 0x348
        ctx->r18 = ADD32(ctx->r16, 0X348);
            goto L_8022E6E4;
    }
    // 0x8022E6D8: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x8022E6DC: jal         0x8022F128
    // 0x8022E6E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022F128_ovl10(rdram, ctx);
        goto after_4;
    // 0x8022E6E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
L_8022E6E4:
    // 0x8022E6E4: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022E6E8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022E6EC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022E6F0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022E6F4: lw          $v0, 0x90C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X90C);
    // 0x8022E6F8: jalr        $v0
    // 0x8022E6FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_5;
    // 0x8022E6FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x8022E700: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x8022E704: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022E708: beq         $v0, $zero, L_8022E748
    if (ctx->r2 == 0) {
        // 0x8022E70C: nop
    
            goto L_8022E748;
    }
    // 0x8022E70C: nop

    // 0x8022E710: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8022E714: bltz        $v1, L_8022E738
    if (SIGNED(ctx->r3) < 0) {
        // 0x8022E718: slti        $v0, $v1, 0x3
        ctx->r2 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
            goto L_8022E738;
    }
    // 0x8022E718: slti        $v0, $v1, 0x3
    ctx->r2 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
    // 0x8022E71C: bne         $v0, $zero, L_8022E734
    if (ctx->r2 != 0) {
        // 0x8022E720: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8022E734;
    }
    // 0x8022E720: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022E724: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022E728: bnel        $v1, $v0, L_8022E73C
    if (ctx->r3 != ctx->r2) {
        // 0x8022E72C: sh          $zero, 0xA($s0)
        MEM_H(0XA, ctx->r16) = 0;
            goto L_8022E73C;
    }
    goto skip_0;
    // 0x8022E72C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    skip_0:
    // 0x8022E730: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_8022E734:
    // 0x8022E734: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022E738:
    // 0x8022E738: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_8022E73C:
    // 0x8022E73C: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x8022E740: andi        $v0, $v0, 0xFFFE
    ctx->r2 = ctx->r2 & 0XFFFE;
    // 0x8022E744: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
L_8022E748:
    // 0x8022E748: lhu         $v0, 0x36($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X36);
    // 0x8022E74C: bne         $v0, $zero, L_8022E77C
    if (ctx->r2 != 0) {
        // 0x8022E750: lui         $v0, 0x80
        ctx->r2 = S32(0X80 << 16);
            goto L_8022E77C;
    }
    // 0x8022E750: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x8022E754: lw          $v1, 0x80($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X80);
    // 0x8022E758: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8022E75C: beq         $v0, $zero, L_8022E77C
    if (ctx->r2 == 0) {
        // 0x8022E760: nop
    
            goto L_8022E77C;
    }
    // 0x8022E760: nop

    // 0x8022E764: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x8022E768: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x8022E76C: bne         $v0, $zero, L_8022E77C
    if (ctx->r2 != 0) {
        // 0x8022E770: nop
    
            goto L_8022E77C;
    }
    // 0x8022E770: nop

    // 0x8022E774: jal         0x8004F418
    // 0x8022E778: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_6;
    // 0x8022E778: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
L_8022E77C:
    // 0x8022E77C: lh          $v0, 0xA($s2)
    ctx->r2 = MEM_H(ctx->r18, 0XA);
    // 0x8022E780: beq         $v0, $zero, L_8022E790
    if (ctx->r2 == 0) {
        // 0x8022E784: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022E790;
    }
    // 0x8022E784: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022E788: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022E78C: sh          $v0, 0xA($s2)
    MEM_H(0XA, ctx->r18) = ctx->r2;
L_8022E790:
    // 0x8022E790: lhu         $v0, 0x36($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X36);
    // 0x8022E794: beq         $v0, $zero, L_8022E7A0
    if (ctx->r2 == 0) {
        // 0x8022E798: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_8022E7A0;
    }
    // 0x8022E798: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022E79C: sh          $v0, 0x36($s2)
    MEM_H(0X36, ctx->r18) = ctx->r2;
L_8022E7A0:
    // 0x8022E7A0: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x8022E7A4: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022E7A8: beq         $v0, $a1, L_8022E7C0
    if (ctx->r2 == ctx->r5) {
        // 0x8022E7AC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022E7C0;
    }
    // 0x8022E7AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E7B0: jal         0x80050294
    // 0x8022E7B4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_7;
    // 0x8022E7B4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_7:
    // 0x8022E7B8: j           L_8022E7C8
    // 0x8022E7BC: nop

        goto L_8022E7C8;
    // 0x8022E7BC: nop

L_8022E7C0:
    // 0x8022E7C0: jal         0x8005044C
    // 0x8022E7C4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_8;
    // 0x8022E7C4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
L_8022E7C8:
    // 0x8022E7C8: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022E7CC: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022E7D0: beq         $v0, $zero, L_8022E7E8
    if (ctx->r2 == 0) {
        // 0x8022E7D4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022E7E8;
    }
    // 0x8022E7D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E7D8: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x8022E7DC: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8022E7E0: jal         0x8003B564
    // 0x8022E7E4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_9;
    // 0x8022E7E4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_9:
L_8022E7E8:
    // 0x8022E7E8: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022E7EC: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022E7F0: beq         $v0, $zero, L_8022E860
    if (ctx->r2 == 0) {
        // 0x8022E7F4: nop
    
            goto L_8022E860;
    }
    // 0x8022E7F4: nop

    // 0x8022E7F8: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x8022E7FC: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022E800: beq         $v0, $zero, L_8022E860
    if (ctx->r2 == 0) {
        // 0x8022E804: addiu       $s1, $s2, 0xC
        ctx->r17 = ADD32(ctx->r18, 0XC);
            goto L_8022E860;
    }
    // 0x8022E804: addiu       $s1, $s2, 0xC
    ctx->r17 = ADD32(ctx->r18, 0XC);
    // 0x8022E808: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022E80C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022E810: jal         0x8009A3B4
    // 0x8022E814: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_10;
    // 0x8022E814: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_10:
    // 0x8022E818: lhu         $v0, 0xE($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0XE);
    // 0x8022E81C: addiu       $v0, $v0, -0x28
    ctx->r2 = ADD32(ctx->r2, -0X28);
    // 0x8022E820: sh          $v0, 0xE($s2)
    MEM_H(0XE, ctx->r18) = ctx->r2;
    // 0x8022E824: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022E828: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x8022E82C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022E830: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x8022E834: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x8022E838: addiu       $v0, $s2, 0x14
    ctx->r2 = ADD32(ctx->r18, 0X14);
    // 0x8022E83C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022E840: lui         $v0, 0x400
    ctx->r2 = S32(0X400 << 16);
    // 0x8022E844: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8022E848: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x8022E84C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8022E850: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022E854: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8022E858: jal         0x80051E18
    // 0x8022E85C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_11;
    // 0x8022E85C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_11:
L_8022E860:
    // 0x8022E860: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8022E864: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x8022E868: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x8022E86C: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8022E870: jr          $ra
    // 0x8022E874: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8022E874: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_802429D0_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802429D0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802429D4: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x802429D8: addiu       $v0, $zero, 0x83
    ctx->r2 = ADD32(0, 0X83);
    // 0x802429DC: sb          $v0, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r2;
    // 0x802429E0: sb          $zero, 0x3($a1)
    MEM_B(0X3, ctx->r5) = 0;
    // 0x802429E4: lhu         $v1, 0x14($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X14);
    // 0x802429E8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802429EC: sh          $v0, 0x1E($a1)
    MEM_H(0X1E, ctx->r5) = ctx->r2;
    // 0x802429F0: sh          $v1, 0x1C($a1)
    MEM_H(0X1C, ctx->r5) = ctx->r3;
    // 0x802429F4: lhu         $v0, 0x18($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X18);
    // 0x802429F8: jr          $ra
    // 0x802429FC: sh          $v0, 0x20($a1)
    MEM_H(0X20, ctx->r5) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x802429FC: sh          $v0, 0x20($a1)
    MEM_H(0X20, ctx->r5) = ctx->r2;
;}
RECOMP_FUNC void func_80231DE4_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231DE4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80231DE8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80231DEC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80231DF0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80231DF4: jal         0x802332E8
    // 0x80231DF8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_802332E8_ovl10(rdram, ctx);
        goto after_0;
    // 0x80231DF8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x80231DFC: lbu         $a0, 0xA($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XA);
    // 0x80231E00: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80231E04: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x80231E08: lbu         $v1, 0xF($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XF);
    // 0x80231E0C: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80231E10: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x80231E14: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80231E18: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80231E1C: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x80231E20: sh          $v0, 0x35C($s0)
    MEM_H(0X35C, ctx->r16) = ctx->r2;
    // 0x80231E24: sh          $v1, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = ctx->r3;
    // 0x80231E28: sb          $a0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r4;
    // 0x80231E2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80231E30: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80231E34: jr          $ra
    // 0x80231E38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80231E38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023DB68_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023DB68: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8023DB6C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8023DB70: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8023DB74: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8023DB78: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x8023DB7C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8023DB80: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023DB84: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023DB88: lbu         $v0, 0xB($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XB);
    // 0x8023DB8C: lui         $s3, 0x8020
    ctx->r19 = S32(0X8020 << 16);
    // 0x8023DB90: addiu       $s3, $s3, 0x49B0
    ctx->r19 = ADD32(ctx->r19, 0X49B0);
    // 0x8023DB94: bne         $v0, $zero, L_8023DC08
    if (ctx->r2 != 0) {
        // 0x8023DB98: addiu       $s4, $s2, 0x440
        ctx->r20 = ADD32(ctx->r18, 0X440);
            goto L_8023DC08;
    }
    // 0x8023DB98: addiu       $s4, $s2, 0x440
    ctx->r20 = ADD32(ctx->r18, 0X440);
    // 0x8023DB9C: lbu         $v1, 0xA($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0XA);
    // 0x8023DBA0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023DBA4: sb          $v0, 0xB($s2)
    MEM_B(0XB, ctx->r18) = ctx->r2;
    // 0x8023DBA8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023DBAC: beq         $v1, $v0, L_8023DBE4
    if (ctx->r3 == ctx->r2) {
        // 0x8023DBB0: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8023DBE4;
    }
    // 0x8023DBB0: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8023DBB4: beql        $v0, $zero, L_8023DBCC
    if (ctx->r2 == 0) {
        // 0x8023DBB8: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8023DBCC;
    }
    goto skip_0;
    // 0x8023DBB8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    skip_0:
    // 0x8023DBBC: beq         $v1, $zero, L_8023DBDC
    if (ctx->r3 == 0) {
        // 0x8023DBC0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8023DBDC;
    }
    // 0x8023DBC0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023DBC4: j           L_8023DE94
    // 0x8023DBC8: nop

        goto L_8023DE94;
    // 0x8023DBC8: nop

L_8023DBCC:
    // 0x8023DBCC: beq         $v1, $v0, L_8023DC00
    if (ctx->r3 == ctx->r2) {
        // 0x8023DBD0: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8023DC00;
    }
    // 0x8023DBD0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8023DBD4: j           L_8023DE94
    // 0x8023DBD8: nop

        goto L_8023DE94;
    // 0x8023DBD8: nop

L_8023DBDC:
    // 0x8023DBDC: j           L_8023DE94
    // 0x8023DBE0: sb          $v0, 0xAC($s2)
    MEM_B(0XAC, ctx->r18) = ctx->r2;
        goto L_8023DE94;
    // 0x8023DBE0: sb          $v0, 0xAC($s2)
    MEM_B(0XAC, ctx->r18) = ctx->r2;
L_8023DBE4:
    // 0x8023DBE4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023DBE8: sb          $v0, 0xAC($s2)
    MEM_B(0XAC, ctx->r18) = ctx->r2;
    // 0x8023DBEC: addiu       $a0, $zero, 0xCB
    ctx->r4 = ADD32(0, 0XCB);
    // 0x8023DBF0: jal         0x8002A33C
    // 0x8023DBF4: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x8023DBF4: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    after_0:
    // 0x8023DBF8: j           L_8023DE94
    // 0x8023DBFC: nop

        goto L_8023DE94;
    // 0x8023DBFC: nop

L_8023DC00:
    // 0x8023DC00: j           L_8023DE94
    // 0x8023DC04: sb          $v0, 0xAC($s2)
    MEM_B(0XAC, ctx->r18) = ctx->r2;
        goto L_8023DE94;
    // 0x8023DC04: sb          $v0, 0xAC($s2)
    MEM_B(0XAC, ctx->r18) = ctx->r2;
L_8023DC08:
    // 0x8023DC08: lbu         $v1, 0xA($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0XA);
    // 0x8023DC0C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023DC10: beq         $v1, $v0, L_8023DCF8
    if (ctx->r3 == ctx->r2) {
        // 0x8023DC14: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8023DCF8;
    }
    // 0x8023DC14: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8023DC18: beql        $v0, $zero, L_8023DC30
    if (ctx->r2 == 0) {
        // 0x8023DC1C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8023DC30;
    }
    goto skip_1;
    // 0x8023DC1C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_1:
    // 0x8023DC20: beq         $v1, $zero, L_8023DC48
    if (ctx->r3 == 0) {
        // 0x8023DC24: addiu       $v0, $zero, 0xE
        ctx->r2 = ADD32(0, 0XE);
            goto L_8023DC48;
    }
    // 0x8023DC24: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x8023DC28: j           L_8023DE94
    // 0x8023DC2C: nop

        goto L_8023DE94;
    // 0x8023DC2C: nop

L_8023DC30:
    // 0x8023DC30: beq         $v1, $v0, L_8023DE24
    if (ctx->r3 == ctx->r2) {
        // 0x8023DC34: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8023DE24;
    }
    // 0x8023DC34: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023DC38: beq         $v1, $v0, L_8023DE7C
    if (ctx->r3 == ctx->r2) {
        // 0x8023DC3C: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_8023DE7C;
    }
    // 0x8023DC3C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8023DC40: j           L_8023DE94
    // 0x8023DC44: nop

        goto L_8023DE94;
    // 0x8023DC44: nop

L_8023DC48:
    // 0x8023DC48: lh          $a1, 0x444($s2)
    ctx->r5 = MEM_H(ctx->r18, 0X444);
    // 0x8023DC4C: lh          $v1, 0x506($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X506);
    // 0x8023DC50: mult        $a1, $v1
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023DC54: mflo        $v1
    ctx->r3 = lo;
    // 0x8023DC58: lh          $a0, 0x4FE($s2)
    ctx->r4 = MEM_H(ctx->r18, 0X4FE);
    // 0x8023DC5C: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
    // 0x8023DC60: mult        $v0, $a0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023DC64: mflo        $v0
    ctx->r2 = lo;
    // 0x8023DC68: lui         $a0, 0x9249
    ctx->r4 = S32(0X9249 << 16);
    // 0x8023DC6C: ori         $a0, $a0, 0x2493
    ctx->r4 = ctx->r4 | 0X2493;
    // 0x8023DC70: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023DC74: mult        $v1, $a0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023DC78: lhu         $v0, 0x444($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X444);
    // 0x8023DC7C: lb          $a0, 0xA7($s2)
    ctx->r4 = MEM_B(ctx->r18, 0XA7);
    // 0x8023DC80: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023DC84: sh          $v0, 0x444($s2)
    MEM_H(0X444, ctx->r18) = ctx->r2;
    // 0x8023DC88: mfhi        $t0
    ctx->r8 = hi;
    // 0x8023DC8C: addu        $v0, $t0, $v1
    ctx->r2 = ADD32(ctx->r8, ctx->r3);
    // 0x8023DC90: sra         $v0, $v0, 3
    ctx->r2 = S32(SIGNED(ctx->r2) >> 3);
    // 0x8023DC94: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
    // 0x8023DC98: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8023DC9C: sh          $v0, 0x56($s2)
    MEM_H(0X56, ctx->r18) = ctx->r2;
    // 0x8023DCA0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8023DCA4: bne         $a0, $v0, L_8023DE94
    if (ctx->r4 != ctx->r2) {
        // 0x8023DCA8: nop
    
            goto L_8023DE94;
    }
    // 0x8023DCA8: nop

    // 0x8023DCAC: lhu         $a1, 0x506($s2)
    ctx->r5 = MEM_HU(ctx->r18, 0X506);
    // 0x8023DCB0: lbu         $v0, 0xA($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XA);
    // 0x8023DCB4: lbu         $v1, 0x52E($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X52E);
    // 0x8023DCB8: lbu         $a0, 0x52D($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X52D);
    // 0x8023DCBC: sb          $zero, 0xB($s2)
    MEM_B(0XB, ctx->r18) = 0;
    // 0x8023DCC0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023DCC4: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x8023DCC8: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x8023DCCC: sh          $a1, 0x56($s2)
    MEM_H(0X56, ctx->r18) = ctx->r5;
    // 0x8023DCD0: sb          $v0, 0xA($s2)
    MEM_B(0XA, ctx->r18) = ctx->r2;
    // 0x8023DCD4: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8023DCD8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023DCDC: lhu         $v0, 0x1892($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X1892);
    // 0x8023DCE0: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x8023DCE4: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8023DCE8: lhu         $v1, 0x1892($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X1892);
    // 0x8023DCEC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023DCF0: j           L_8023DE94
    // 0x8023DCF4: sh          $v0, 0x444($s2)
    MEM_H(0X444, ctx->r18) = ctx->r2;
        goto L_8023DE94;
    // 0x8023DCF4: sh          $v0, 0x444($s2)
    MEM_H(0X444, ctx->r18) = ctx->r2;
L_8023DCF8:
    // 0x8023DCF8: lhu         $v0, 0x444($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X444);
    // 0x8023DCFC: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8023DD00: beq         $v0, $zero, L_8023DD14
    if (ctx->r2 == 0) {
        // 0x8023DD04: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_8023DD14;
    }
    // 0x8023DD04: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8023DD08: jal         0x8023F2F4
    // 0x8023DD0C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8023F2F4_ovl10(rdram, ctx);
        goto after_1;
    // 0x8023DD0C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_1:
    // 0x8023DD10: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_8023DD14:
    // 0x8023DD14: addiu       $a1, $zero, 0x400
    ctx->r5 = ADD32(0, 0X400);
    // 0x8023DD18: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023DD1C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8023DD20: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x8023DD24: jal         0x8004DA90
    // 0x8023DD28: sh          $v0, 0x44($s2)
    MEM_H(0X44, ctx->r18) = ctx->r2;
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x8023DD28: sh          $v0, 0x44($s2)
    MEM_H(0X44, ctx->r18) = ctx->r2;
    after_2:
    // 0x8023DD2C: lhu         $v0, 0x444($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X444);
    // 0x8023DD30: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023DD34: sh          $v0, 0x444($s2)
    MEM_H(0X444, ctx->r18) = ctx->r2;
    // 0x8023DD38: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023DD3C: bne         $v0, $zero, L_8023DE94
    if (ctx->r2 != 0) {
        // 0x8023DD40: addiu       $s0, $s2, 0x14
        ctx->r16 = ADD32(ctx->r18, 0X14);
            goto L_8023DE94;
    }
    // 0x8023DD40: addiu       $s0, $s2, 0x14
    ctx->r16 = ADD32(ctx->r18, 0X14);
    // 0x8023DD44: lbu         $a1, 0x52E($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X52E);
    // 0x8023DD48: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023DD4C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8023DD50: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8023DD54: addiu       $v0, $v0, 0x188C
    ctx->r2 = ADD32(ctx->r2, 0X188C);
    // 0x8023DD58: sh          $zero, 0x44($s2)
    MEM_H(0X44, ctx->r18) = 0;
    // 0x8023DD5C: sll         $a1, $a1, 3
    ctx->r5 = S32(ctx->r5 << 3);
    // 0x8023DD60: jal         0x8009A3B4
    // 0x8023DD64: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8023DD64: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    after_3:
    // 0x8023DD68: addiu       $a0, $s3, 0xC4
    ctx->r4 = ADD32(ctx->r19, 0XC4);
    // 0x8023DD6C: addiu       $s1, $s3, 0x14
    ctx->r17 = ADD32(ctx->r19, 0X14);
    // 0x8023DD70: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023DD74: jal         0x8009A3B4
    // 0x8023DD78: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8023DD78: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x8023DD7C: addiu       $a0, $s2, 0xC4
    ctx->r4 = ADD32(ctx->r18, 0XC4);
    // 0x8023DD80: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8023DD84: jal         0x8009A3B4
    // 0x8023DD88: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x8023DD88: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_5:
    // 0x8023DD8C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8023DD90: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x8023DD94: addiu       $a2, $s2, 0x508
    ctx->r6 = ADD32(ctx->r18, 0X508);
    // 0x8023DD98: addiu       $a3, $s2, 0x510
    ctx->r7 = ADD32(ctx->r18, 0X510);
    // 0x8023DD9C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023DDA0: sh          $v0, 0x508($s2)
    MEM_H(0X508, ctx->r18) = ctx->r2;
    // 0x8023DDA4: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8023DDA8: sh          $v0, 0x50A($s2)
    MEM_H(0X50A, ctx->r18) = ctx->r2;
    // 0x8023DDAC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8023DDB0: jal         0x8004DF78
    // 0x8023DDB4: sh          $v0, 0x50C($s2)
    MEM_H(0X50C, ctx->r18) = ctx->r2;
    func_8004DF78_29378(rdram, ctx);
        goto after_6;
    // 0x8023DDB4: sh          $v0, 0x50C($s2)
    MEM_H(0X50C, ctx->r18) = ctx->r2;
    after_6:
    // 0x8023DDB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023DDBC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023DDC0: jal         0x8004EC38
    // 0x8023DDC4: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_8004EC38_2A038(rdram, ctx);
        goto after_7;
    // 0x8023DDC4: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_7:
    // 0x8023DDC8: addiu       $v0, $v0, 0x1000
    ctx->r2 = ADD32(ctx->r2, 0X1000);
    // 0x8023DDCC: andi        $s0, $s0, 0x1
    ctx->r16 = ctx->r16 & 0X1;
    // 0x8023DDD0: beq         $s0, $zero, L_8023DDF0
    if (ctx->r16 == 0) {
        // 0x8023DDD4: andi        $a0, $v0, 0xFFF
        ctx->r4 = ctx->r2 & 0XFFF;
            goto L_8023DDF0;
    }
    // 0x8023DDD4: andi        $a0, $v0, 0xFFF
    ctx->r4 = ctx->r2 & 0XFFF;
    // 0x8023DDD8: lhu         $v0, 0x56($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X56);
    // 0x8023DDDC: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x8023DDE0: sb          $v1, 0x52F($s2)
    MEM_B(0X52F, ctx->r18) = ctx->r3;
    // 0x8023DDE4: addiu       $v1, $a0, -0x1000
    ctx->r3 = ADD32(ctx->r4, -0X1000);
    // 0x8023DDE8: j           L_8023DE04
    // 0x8023DDEC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
        goto L_8023DE04;
    // 0x8023DDEC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
L_8023DDF0:
    // 0x8023DDF0: lhu         $v0, 0x56($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X56);
    // 0x8023DDF4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8023DDF8: sb          $v1, 0x52F($s2)
    MEM_B(0X52F, ctx->r18) = ctx->r3;
    // 0x8023DDFC: addiu       $v0, $v0, -0x1000
    ctx->r2 = ADD32(ctx->r2, -0X1000);
    // 0x8023DE00: subu        $v0, $a0, $v0
    ctx->r2 = SUB32(ctx->r4, ctx->r2);
L_8023DE04:
    // 0x8023DE04: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8023DE08: bltzl       $v0, L_8023DE10
    if (SIGNED(ctx->r2) < 0) {
        // 0x8023DE0C: addiu       $v0, $v0, 0x3F
        ctx->r2 = ADD32(ctx->r2, 0X3F);
            goto L_8023DE10;
    }
    goto skip_2;
    // 0x8023DE0C: addiu       $v0, $v0, 0x3F
    ctx->r2 = ADD32(ctx->r2, 0X3F);
    skip_2:
L_8023DE10:
    // 0x8023DE10: sra         $v0, $v0, 6
    ctx->r2 = S32(SIGNED(ctx->r2) >> 6);
    // 0x8023DE14: sh          $v0, 0x4($s4)
    MEM_H(0X4, ctx->r20) = ctx->r2;
    // 0x8023DE18: lbu         $v0, 0xA($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XA);
    // 0x8023DE1C: j           L_8023DE74
    // 0x8023DE20: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8023DE74;
    // 0x8023DE20: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8023DE24:
    // 0x8023DE24: lhu         $v0, 0x444($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X444);
    // 0x8023DE28: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8023DE2C: beq         $v0, $zero, L_8023DE3C
    if (ctx->r2 == 0) {
        // 0x8023DE30: nop
    
            goto L_8023DE3C;
    }
    // 0x8023DE30: nop

    // 0x8023DE34: jal         0x8023F2F4
    // 0x8023DE38: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8023F2F4_ovl10(rdram, ctx);
        goto after_8;
    // 0x8023DE38: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_8:
L_8023DE3C:
    // 0x8023DE3C: lb          $v0, 0x52F($s2)
    ctx->r2 = MEM_B(ctx->r18, 0X52F);
    // 0x8023DE40: lhu         $v1, 0x56($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X56);
    // 0x8023DE44: lhu         $a0, 0x444($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X444);
    // 0x8023DE48: sll         $v0, $v0, 6
    ctx->r2 = S32(ctx->r2 << 6);
    // 0x8023DE4C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023DE50: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8023DE54: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x8023DE58: sh          $a0, 0x444($s2)
    MEM_H(0X444, ctx->r18) = ctx->r4;
    // 0x8023DE5C: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8023DE60: bgtz        $a0, L_8023DE94
    if (SIGNED(ctx->r4) > 0) {
        // 0x8023DE64: sh          $v1, 0x56($s2)
        MEM_H(0X56, ctx->r18) = ctx->r3;
            goto L_8023DE94;
    }
    // 0x8023DE64: sh          $v1, 0x56($s2)
    MEM_H(0X56, ctx->r18) = ctx->r3;
    // 0x8023DE68: lbu         $v0, 0xA($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XA);
    // 0x8023DE6C: sb          $zero, 0xB($s2)
    MEM_B(0XB, ctx->r18) = 0;
    // 0x8023DE70: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8023DE74:
    // 0x8023DE74: j           L_8023DE94
    // 0x8023DE78: sb          $v0, 0xA($s2)
    MEM_B(0XA, ctx->r18) = ctx->r2;
        goto L_8023DE94;
    // 0x8023DE78: sb          $v0, 0xA($s2)
    MEM_B(0XA, ctx->r18) = ctx->r2;
L_8023DE7C:
    // 0x8023DE7C: lb          $v1, 0xA7($s2)
    ctx->r3 = MEM_B(ctx->r18, 0XA7);
    // 0x8023DE80: bne         $v1, $v0, L_8023DE94
    if (ctx->r3 != ctx->r2) {
        // 0x8023DE84: nop
    
            goto L_8023DE94;
    }
    // 0x8023DE84: nop

    // 0x8023DE88: lhu         $v0, 0x440($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X440);
    // 0x8023DE8C: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8023DE90: sh          $v0, 0x440($s2)
    MEM_H(0X440, ctx->r18) = ctx->r2;
L_8023DE94:
    // 0x8023DE94: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8023DE98: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x8023DE9C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8023DEA0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8023DEA4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023DEA8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023DEAC: jr          $ra
    // 0x8023DEB0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8023DEB0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022B390_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B390: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B394: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B398: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B39C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022B3A0: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8022B3A4: bne         $v0, $zero, L_8022B3F0
    if (ctx->r2 != 0) {
        // 0x8022B3A8: nop
    
            goto L_8022B3F0;
    }
    // 0x8022B3A8: nop

    // 0x8022B3AC: jal         0x8022BE40
    // 0x8022B3B0: nop

    func_8022BE40_ovl10(rdram, ctx);
        goto after_0;
    // 0x8022B3B0: nop

    after_0:
    // 0x8022B3B4: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022B3B8: bne         $v0, $zero, L_8022B3EC
    if (ctx->r2 != 0) {
        // 0x8022B3BC: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_8022B3EC;
    }
    // 0x8022B3BC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022B3C0: jal         0x80229F50
    // 0x8022B3C4: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    func_80229F50_ovl10(rdram, ctx);
        goto after_1;
    // 0x8022B3C4: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    after_1:
    // 0x8022B3C8: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022B3CC: jal         0x8003E87C
    // 0x8022B3D0: addiu       $a0, $a0, 0x7C8
    ctx->r4 = ADD32(ctx->r4, 0X7C8);
    func_8003E87C_19C7C(rdram, ctx);
        goto after_2;
    // 0x8022B3D0: addiu       $a0, $a0, 0x7C8
    ctx->r4 = ADD32(ctx->r4, 0X7C8);
    after_2:
    // 0x8022B3D4: addiu       $v1, $zero, 0x100
    ctx->r3 = ADD32(0, 0X100);
    // 0x8022B3D8: bne         $v0, $v1, L_8022B3EC
    if (ctx->r2 != ctx->r3) {
        // 0x8022B3DC: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_8022B3EC;
    }
    // 0x8022B3DC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022B3E0: jal         0x8022A170
    // 0x8022B3E4: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_8022A170_ovl10(rdram, ctx);
        goto after_3;
    // 0x8022B3E4: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_3:
    // 0x8022B3E8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_8022B3EC:
    // 0x8022B3EC: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_8022B3F0:
    // 0x8022B3F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022B3F4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B3F8: jr          $ra
    // 0x8022B3FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B3FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022BDC8_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BDC8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022BDCC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022BDD0: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x8022BDD4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022BDD8: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x8022BDDC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022BDE0: addiu       $s1, $zero, 0x32
    ctx->r17 = ADD32(0, 0X32);
    // 0x8022BDE4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
L_8022BDE8:
    // 0x8022BDE8: jal         0x8004EEAC
    // 0x8022BDEC: nop

    func_8004EEAC_2A2AC(rdram, ctx);
        goto after_0;
    // 0x8022BDEC: nop

    after_0:
    // 0x8022BDF0: beql        $v0, $zero, L_8022BE10
    if (ctx->r2 == 0) {
        // 0x8022BDF4: addiu       $v0, $s0, 0x1
        ctx->r2 = ADD32(ctx->r16, 0X1);
            goto L_8022BE10;
    }
    goto skip_0;
    // 0x8022BDF4: addiu       $v0, $s0, 0x1
    ctx->r2 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x8022BDF8: sb          $s2, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r18;
    // 0x8022BDFC: sb          $s1, 0x2($v0)
    MEM_B(0X2, ctx->r2) = ctx->r17;
    // 0x8022BE00: sb          $zero, 0x4($v0)
    MEM_B(0X4, ctx->r2) = 0;
    // 0x8022BE04: sb          $zero, 0x3($v0)
    MEM_B(0X3, ctx->r2) = 0;
    // 0x8022BE08: sb          $s0, 0xC($v0)
    MEM_B(0XC, ctx->r2) = ctx->r16;
    // 0x8022BE0C: addiu       $v0, $s0, 0x1
    ctx->r2 = ADD32(ctx->r16, 0X1);
L_8022BE10:
    // 0x8022BE10: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8022BE14: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022BE18: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8022BE1C: slti        $v0, $v0, 0x2
    ctx->r2 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x8022BE20: bne         $v0, $zero, L_8022BDE8
    if (ctx->r2 != 0) {
        // 0x8022BE24: nop
    
            goto L_8022BDE8;
    }
    // 0x8022BE24: nop

    // 0x8022BE28: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022BE2C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022BE30: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022BE34: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022BE38: jr          $ra
    // 0x8022BE3C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022BE3C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023D120_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023D120: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8023D124: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8023D128: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8023D12C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8023D130: lui         $s3, 0x8020
    ctx->r19 = S32(0X8020 << 16);
    // 0x8023D134: addiu       $s3, $s3, 0x49B0
    ctx->r19 = ADD32(ctx->r19, 0X49B0);
    // 0x8023D138: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8023D13C: addiu       $s2, $s1, 0x440
    ctx->r18 = ADD32(ctx->r17, 0X440);
    // 0x8023D140: addiu       $a0, $s1, 0x2C
    ctx->r4 = ADD32(ctx->r17, 0X2C);
    // 0x8023D144: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x8023D148: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8023D14C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8023D150: lbu         $v0, 0xAC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XAC);
    // 0x8023D154: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8023D158: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x8023D15C: jal         0x8009A3B4
    // 0x8023D160: sb          $v0, 0xAD($s1)
    MEM_B(0XAD, ctx->r17) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8023D160: sb          $v0, 0xAD($s1)
    MEM_B(0XAD, ctx->r17) = ctx->r2;
    after_0:
    // 0x8023D164: addiu       $a0, $s1, 0x34
    ctx->r4 = ADD32(ctx->r17, 0X34);
    // 0x8023D168: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    // 0x8023D16C: jal         0x8009A3B4
    // 0x8023D170: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8023D170: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8023D174: addiu       $a0, $s1, 0x5C
    ctx->r4 = ADD32(ctx->r17, 0X5C);
    // 0x8023D178: addiu       $a1, $s1, 0x54
    ctx->r5 = ADD32(ctx->r17, 0X54);
    // 0x8023D17C: jal         0x8009A3B4
    // 0x8023D180: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8023D180: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8023D184: addiu       $v1, $zero, 0x4210
    ctx->r3 = ADD32(0, 0X4210);
    // 0x8023D188: sll         $v0, $s0, 16
    ctx->r2 = S32(ctx->r16 << 16);
L_8023D18C:
    // 0x8023D18C: sra         $v0, $v0, 13
    ctx->r2 = S32(SIGNED(ctx->r2) >> 13);
    // 0x8023D190: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x8023D194: sh          $v1, 0x186($v0)
    MEM_H(0X186, ctx->r2) = ctx->r3;
    // 0x8023D198: addiu       $v0, $s0, 0x1
    ctx->r2 = ADD32(ctx->r16, 0X1);
    // 0x8023D19C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8023D1A0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023D1A4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023D1A8: slti        $v0, $v0, 0xE
    ctx->r2 = SIGNED(ctx->r2) < 0XE ? 1 : 0;
    // 0x8023D1AC: bne         $v0, $zero, L_8023D18C
    if (ctx->r2 != 0) {
        // 0x8023D1B0: sll         $v0, $s0, 16
        ctx->r2 = S32(ctx->r16 << 16);
            goto L_8023D18C;
    }
    // 0x8023D1B0: sll         $v0, $s0, 16
    ctx->r2 = S32(ctx->r16 << 16);
    // 0x8023D1B4: jal         0x800A3450
    // 0x8023D1B8: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x8023D1B8: nop

    after_3:
    // 0x8023D1BC: sh          $v0, 0x2($s2)
    MEM_H(0X2, ctx->r18) = ctx->r2;
    // 0x8023D1C0: jal         0x80032424
    // 0x8023D1C4: lw          $a0, 0x80($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X80);
    func_80032424_D824(rdram, ctx);
        goto after_4;
    // 0x8023D1C4: lw          $a0, 0x80($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X80);
    after_4:
    // 0x8023D1C8: sw          $v0, 0xE0($s2)
    MEM_W(0XE0, ctx->r18) = ctx->r2;
    // 0x8023D1CC: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x8023D1D0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023D1D4: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8023D1D8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023D1DC: lw          $v0, 0x18D4($at)
    ctx->r2 = MEM_W(ctx->r1, 0X18D4);
    // 0x8023D1E0: jalr        $v0
    // 0x8023D1E4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_5;
    // 0x8023D1E4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_5:
    // 0x8023D1E8: lbu         $v1, 0xAD($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XAD);
    // 0x8023D1EC: lbu         $a1, 0xAC($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0XAC);
    // 0x8023D1F0: beq         $v1, $a1, L_8023D200
    if (ctx->r3 == ctx->r5) {
        // 0x8023D1F4: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8023D200;
    }
    // 0x8023D1F4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023D1F8: j           L_8023D224
    // 0x8023D1FC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
        goto L_8023D224;
    // 0x8023D1FC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
L_8023D200:
    // 0x8023D200: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x8023D204: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x8023D208: beq         $v0, $zero, L_8023D220
    if (ctx->r2 == 0) {
        // 0x8023D20C: addu        $a1, $v1, $zero
        ctx->r5 = ADD32(ctx->r3, 0);
            goto L_8023D220;
    }
    // 0x8023D20C: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x8023D210: jal         0x8005044C
    // 0x8023D214: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_6;
    // 0x8023D214: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_6:
    // 0x8023D218: j           L_8023D22C
    // 0x8023D21C: nop

        goto L_8023D22C;
    // 0x8023D21C: nop

L_8023D220:
    // 0x8023D220: lbu         $a2, 0xA4($s1)
    ctx->r6 = MEM_BU(ctx->r17, 0XA4);
L_8023D224:
    // 0x8023D224: jal         0x80050294
    // 0x8023D228: nop

    func_80050294_2B694(rdram, ctx);
        goto after_7;
    // 0x8023D228: nop

    after_7:
L_8023D22C:
    // 0x8023D22C: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x8023D230: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x8023D234: beq         $v0, $zero, L_8023D244
    if (ctx->r2 == 0) {
        // 0x8023D238: nop
    
            goto L_8023D244;
    }
    // 0x8023D238: nop

    // 0x8023D23C: jal         0x8023FB10
    // 0x8023D240: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8023FB10_ovl10(rdram, ctx);
        goto after_8;
    // 0x8023D240: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_8:
L_8023D244:
    // 0x8023D244: lhu         $v0, 0x14($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X14);
    // 0x8023D248: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x8023D24C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023D250: sra         $a2, $v0, 25
    ctx->r6 = S32(SIGNED(ctx->r2) >> 25);
    // 0x8023D254: sll         $v0, $s0, 16
    ctx->r2 = S32(ctx->r16 << 16);
L_8023D258:
    // 0x8023D258: sra         $a1, $v0, 14
    ctx->r5 = S32(SIGNED(ctx->r2) >> 14);
    // 0x8023D25C: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8023D260: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x8023D264: lb          $v0, 0x184C($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X184C);
    // 0x8023D268: slt         $v0, $a2, $v0
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8023D26C: bne         $v0, $zero, L_8023D2C8
    if (ctx->r2 != 0) {
        // 0x8023D270: addiu       $v0, $s0, 0x1
        ctx->r2 = ADD32(ctx->r16, 0X1);
            goto L_8023D2C8;
    }
    // 0x8023D270: addiu       $v0, $s0, 0x1
    ctx->r2 = ADD32(ctx->r16, 0X1);
    // 0x8023D274: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8023D278: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x8023D27C: lb          $v0, 0x184E($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X184E);
    // 0x8023D280: slt         $v0, $a2, $v0
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8023D284: beq         $v0, $zero, L_8023D2C8
    if (ctx->r2 == 0) {
        // 0x8023D288: addiu       $v0, $s0, 0x1
        ctx->r2 = ADD32(ctx->r16, 0X1);
            goto L_8023D2C8;
    }
    // 0x8023D288: addiu       $v0, $s0, 0x1
    ctx->r2 = ADD32(ctx->r16, 0X1);
    // 0x8023D28C: lhu         $v0, 0x18($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X18);
    // 0x8023D290: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x8023D294: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x8023D298: lb          $v1, 0x184D($v1)
    ctx->r3 = MEM_B(ctx->r3, 0X184D);
    // 0x8023D29C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023D2A0: sra         $a0, $v0, 25
    ctx->r4 = S32(SIGNED(ctx->r2) >> 25);
    // 0x8023D2A4: slt         $v1, $a0, $v1
    ctx->r3 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8023D2A8: bne         $v1, $zero, L_8023D2C8
    if (ctx->r3 != 0) {
        // 0x8023D2AC: addiu       $v0, $s0, 0x1
        ctx->r2 = ADD32(ctx->r16, 0X1);
            goto L_8023D2C8;
    }
    // 0x8023D2AC: addiu       $v0, $s0, 0x1
    ctx->r2 = ADD32(ctx->r16, 0X1);
    // 0x8023D2B0: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8023D2B4: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x8023D2B8: lb          $v0, 0x184F($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X184F);
    // 0x8023D2BC: slt         $v0, $a0, $v0
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8023D2C0: bne         $v0, $zero, L_8023D2E0
    if (ctx->r2 != 0) {
        // 0x8023D2C4: addiu       $v0, $s0, 0x1
        ctx->r2 = ADD32(ctx->r16, 0X1);
            goto L_8023D2E0;
    }
    // 0x8023D2C4: addiu       $v0, $s0, 0x1
    ctx->r2 = ADD32(ctx->r16, 0X1);
L_8023D2C8:
    // 0x8023D2C8: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8023D2CC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023D2D0: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023D2D4: slti        $v0, $v0, 0x10
    ctx->r2 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
    // 0x8023D2D8: bne         $v0, $zero, L_8023D258
    if (ctx->r2 != 0) {
        // 0x8023D2DC: sll         $v0, $s0, 16
        ctx->r2 = S32(ctx->r16 << 16);
            goto L_8023D258;
    }
    // 0x8023D2DC: sll         $v0, $s0, 16
    ctx->r2 = S32(ctx->r16 << 16);
L_8023D2E0:
    // 0x8023D2E0: sb          $s0, 0xEC($s2)
    MEM_B(0XEC, ctx->r18) = ctx->r16;
    // 0x8023D2E4: lhu         $v0, 0x14($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X14);
    // 0x8023D2E8: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x8023D2EC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023D2F0: sra         $a2, $v0, 25
    ctx->r6 = S32(SIGNED(ctx->r2) >> 25);
    // 0x8023D2F4: sll         $v0, $s0, 16
    ctx->r2 = S32(ctx->r16 << 16);
L_8023D2F8:
    // 0x8023D2F8: sra         $a1, $v0, 14
    ctx->r5 = S32(SIGNED(ctx->r2) >> 14);
    // 0x8023D2FC: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8023D300: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x8023D304: lb          $v0, 0x184C($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X184C);
    // 0x8023D308: slt         $v0, $a2, $v0
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8023D30C: bne         $v0, $zero, L_8023D368
    if (ctx->r2 != 0) {
        // 0x8023D310: addiu       $v0, $s0, 0x1
        ctx->r2 = ADD32(ctx->r16, 0X1);
            goto L_8023D368;
    }
    // 0x8023D310: addiu       $v0, $s0, 0x1
    ctx->r2 = ADD32(ctx->r16, 0X1);
    // 0x8023D314: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8023D318: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x8023D31C: lb          $v0, 0x184E($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X184E);
    // 0x8023D320: slt         $v0, $a2, $v0
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8023D324: beq         $v0, $zero, L_8023D368
    if (ctx->r2 == 0) {
        // 0x8023D328: addiu       $v0, $s0, 0x1
        ctx->r2 = ADD32(ctx->r16, 0X1);
            goto L_8023D368;
    }
    // 0x8023D328: addiu       $v0, $s0, 0x1
    ctx->r2 = ADD32(ctx->r16, 0X1);
    // 0x8023D32C: lhu         $v0, 0x18($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X18);
    // 0x8023D330: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x8023D334: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x8023D338: lb          $v1, 0x184D($v1)
    ctx->r3 = MEM_B(ctx->r3, 0X184D);
    // 0x8023D33C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023D340: sra         $a0, $v0, 25
    ctx->r4 = S32(SIGNED(ctx->r2) >> 25);
    // 0x8023D344: slt         $v1, $a0, $v1
    ctx->r3 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8023D348: bne         $v1, $zero, L_8023D368
    if (ctx->r3 != 0) {
        // 0x8023D34C: addiu       $v0, $s0, 0x1
        ctx->r2 = ADD32(ctx->r16, 0X1);
            goto L_8023D368;
    }
    // 0x8023D34C: addiu       $v0, $s0, 0x1
    ctx->r2 = ADD32(ctx->r16, 0X1);
    // 0x8023D350: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8023D354: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x8023D358: lb          $v0, 0x184F($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X184F);
    // 0x8023D35C: slt         $v0, $a0, $v0
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8023D360: bne         $v0, $zero, L_8023D380
    if (ctx->r2 != 0) {
        // 0x8023D364: addiu       $v0, $s0, 0x1
        ctx->r2 = ADD32(ctx->r16, 0X1);
            goto L_8023D380;
    }
    // 0x8023D364: addiu       $v0, $s0, 0x1
    ctx->r2 = ADD32(ctx->r16, 0X1);
L_8023D368:
    // 0x8023D368: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8023D36C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023D370: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023D374: slti        $v0, $v0, 0x4
    ctx->r2 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x8023D378: bne         $v0, $zero, L_8023D2F8
    if (ctx->r2 != 0) {
        // 0x8023D37C: sll         $v0, $s0, 16
        ctx->r2 = S32(ctx->r16 << 16);
            goto L_8023D2F8;
    }
    // 0x8023D37C: sll         $v0, $s0, 16
    ctx->r2 = S32(ctx->r16 << 16);
L_8023D380:
    // 0x8023D380: sll         $v0, $s0, 16
    ctx->r2 = S32(ctx->r16 << 16);
    // 0x8023D384: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023D388: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x8023D38C: beql        $v0, $v1, L_8023D394
    if (ctx->r2 == ctx->r3) {
        // 0x8023D390: addiu       $s0, $zero, 0x3
        ctx->r16 = ADD32(0, 0X3);
            goto L_8023D394;
    }
    goto skip_0;
    // 0x8023D390: addiu       $s0, $zero, 0x3
    ctx->r16 = ADD32(0, 0X3);
    skip_0:
L_8023D394:
    // 0x8023D394: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x8023D398: andi        $v0, $v0, 0x100
    ctx->r2 = ctx->r2 & 0X100;
    // 0x8023D39C: beq         $v0, $zero, L_8023D3D8
    if (ctx->r2 == 0) {
        // 0x8023D3A0: sb          $s0, 0xED($s2)
        MEM_B(0XED, ctx->r18) = ctx->r16;
            goto L_8023D3D8;
    }
    // 0x8023D3A0: sb          $s0, 0xED($s2)
    MEM_B(0XED, ctx->r18) = ctx->r16;
    // 0x8023D3A4: addiu       $s0, $sp, 0x10
    ctx->r16 = ADD32(ctx->r29, 0X10);
    // 0x8023D3A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023D3AC: addiu       $a1, $s1, 0x180
    ctx->r5 = ADD32(ctx->r17, 0X180);
    // 0x8023D3B0: jal         0x8009A3B4
    // 0x8023D3B4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_9;
    // 0x8023D3B4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_9:
    // 0x8023D3B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023D3BC: addiu       $a1, $zero, 0x12C
    ctx->r5 = ADD32(0, 0X12C);
    // 0x8023D3C0: lhu         $v0, 0x12($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X12);
    // 0x8023D3C4: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8023D3C8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8023D3CC: addiu       $v0, $v0, 0x1E0
    ctx->r2 = ADD32(ctx->r2, 0X1E0);
    // 0x8023D3D0: jal         0x8003B6B8
    // 0x8023D3D4: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    func_8003B6B8_16AB8(rdram, ctx);
        goto after_10;
    // 0x8023D3D4: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    after_10:
L_8023D3D8:
    // 0x8023D3D8: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x8023D3DC: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x8023D3E0: beq         $v0, $zero, L_8023D444
    if (ctx->r2 == 0) {
        // 0x8023D3E4: addiu       $s0, $zero, 0x3
        ctx->r16 = ADD32(0, 0X3);
            goto L_8023D444;
    }
    // 0x8023D3E4: addiu       $s0, $zero, 0x3
    ctx->r16 = ADD32(0, 0X3);
    // 0x8023D3E8: addiu       $s2, $sp, 0x10
    ctx->r18 = ADD32(ctx->r29, 0X10);
    // 0x8023D3EC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_8023D3F0:
    // 0x8023D3F0: sll         $a1, $s0, 16
    ctx->r5 = S32(ctx->r16 << 16);
    // 0x8023D3F4: sra         $a1, $a1, 13
    ctx->r5 = S32(SIGNED(ctx->r5) >> 13);
    // 0x8023D3F8: addu        $a1, $a1, $s1
    ctx->r5 = ADD32(ctx->r5, ctx->r17);
    // 0x8023D3FC: addiu       $a1, $a1, 0x180
    ctx->r5 = ADD32(ctx->r5, 0X180);
    // 0x8023D400: jal         0x8009A3B4
    // 0x8023D404: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_11;
    // 0x8023D404: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_11:
    // 0x8023D408: lhu         $v0, 0x12($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X12);
    // 0x8023D40C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8023D410: addiu       $v0, $v0, 0xA0
    ctx->r2 = ADD32(ctx->r2, 0XA0);
    // 0x8023D414: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x8023D418: lh          $a3, 0x56($s1)
    ctx->r7 = MEM_H(ctx->r17, 0X56);
    // 0x8023D41C: addiu       $a1, $zero, 0xC8
    ctx->r5 = ADD32(0, 0XC8);
    // 0x8023D420: jal         0x8003B6B8
    // 0x8023D424: addiu       $a2, $zero, 0x155
    ctx->r6 = ADD32(0, 0X155);
    func_8003B6B8_16AB8(rdram, ctx);
        goto after_12;
    // 0x8023D424: addiu       $a2, $zero, 0x155
    ctx->r6 = ADD32(0, 0X155);
    after_12:
    // 0x8023D428: addiu       $v0, $s0, 0x3
    ctx->r2 = ADD32(ctx->r16, 0X3);
    // 0x8023D42C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8023D430: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023D434: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023D438: slti        $v0, $v0, 0xD
    ctx->r2 = SIGNED(ctx->r2) < 0XD ? 1 : 0;
    // 0x8023D43C: bne         $v0, $zero, L_8023D3F0
    if (ctx->r2 != 0) {
        // 0x8023D440: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_8023D3F0;
    }
    // 0x8023D440: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_8023D444:
    // 0x8023D444: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8023D448: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8023D44C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8023D450: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8023D454: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8023D458: jr          $ra
    // 0x8023D45C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8023D45C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80233634_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233634: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80233638: bne         $v0, $zero, L_80233648
    if (ctx->r2 != 0) {
        // 0x8023363C: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_80233648;
    }
    // 0x8023363C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80233640: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x80233644: sb          $zero, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = 0;
L_80233648:
    // 0x80233648: jr          $ra
    // 0x8023364C: nop

    TRACE_RETURN()
    return;
    // 0x8023364C: nop

;}
RECOMP_FUNC void func_802420E4_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802420E4: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x802420E8: sh          $zero, 0x4($a0)
    MEM_H(0X4, ctx->r4) = 0;
    // 0x802420EC: sh          $zero, 0x2($a0)
    MEM_H(0X2, ctx->r4) = 0;
    // 0x802420F0: sh          $zero, 0x0($a0)
    MEM_H(0X0, ctx->r4) = 0;
    // 0x802420F4: sh          $zero, 0xA($a0)
    MEM_H(0XA, ctx->r4) = 0;
    // 0x802420F8: sh          $zero, 0x8($a0)
    MEM_H(0X8, ctx->r4) = 0;
    // 0x802420FC: sh          $zero, 0x6($a0)
    MEM_H(0X6, ctx->r4) = 0;
    // 0x80242100: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80242104: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80242108: lw          $v0, 0x1B18($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1B18);
    // 0x8024210C: sw          $v0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r2;
    // 0x80242110: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80242114: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80242118: lw          $v0, 0x1B34($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1B34);
    // 0x8024211C: jr          $ra
    // 0x80242120: sw          $v0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80242120: sw          $v0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_8022E8F8_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E8F8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022E8FC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022E900: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022E904: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022E908: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022E90C: lbu         $a0, 0xA($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XA);
    // 0x8022E910: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E914: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x8022E918: beq         $v1, $v0, L_8022E990
    if (ctx->r3 == ctx->r2) {
        // 0x8022E91C: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_8022E990;
    }
    // 0x8022E91C: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x8022E920: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022E924: beql        $v0, $zero, L_8022E93C
    if (ctx->r2 == 0) {
        // 0x8022E928: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022E93C;
    }
    goto skip_0;
    // 0x8022E928: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022E92C: beq         $v1, $zero, L_8022E954
    if (ctx->r3 == 0) {
        // 0x8022E930: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_8022E954;
    }
    // 0x8022E930: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x8022E934: j           L_8022EAA4
    // 0x8022E938: nop

        goto L_8022EAA4;
    // 0x8022E938: nop

L_8022E93C:
    // 0x8022E93C: beq         $v1, $v0, L_8022E9F0
    if (ctx->r3 == ctx->r2) {
        // 0x8022E940: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022E9F0;
    }
    // 0x8022E940: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022E944: beq         $v1, $v0, L_8022EA7C
    if (ctx->r3 == ctx->r2) {
        // 0x8022E948: nop
    
            goto L_8022EA7C;
    }
    // 0x8022E948: nop

    // 0x8022E94C: j           L_8022EAA4
    // 0x8022E950: nop

        goto L_8022EAA4;
    // 0x8022E950: nop

L_8022E954:
    // 0x8022E954: lhu         $v1, 0x348($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X348);
    // 0x8022E958: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022E95C: addiu       $v0, $zero, 0x21
    ctx->r2 = ADD32(0, 0X21);
    // 0x8022E960: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022E964: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x8022E968: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022E96C: addiu       $v0, $zero, -0x18
    ctx->r2 = ADD32(0, -0X18);
    // 0x8022E970: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x8022E974: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8022E978: sb          $v0, 0x110($s0)
    MEM_B(0X110, ctx->r16) = ctx->r2;
    // 0x8022E97C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022E980: sh          $v0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r2;
    // 0x8022E984: sh          $zero, 0x350($s0)
    MEM_H(0X350, ctx->r16) = 0;
    // 0x8022E988: andi        $v1, $v1, 0xFFF7
    ctx->r3 = ctx->r3 & 0XFFF7;
    // 0x8022E98C: sh          $v1, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r3;
L_8022E990:
    // 0x8022E990: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8022E994: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022E998: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022E99C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022E9A0: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022E9A4: bltz        $v0, L_8022E9D4
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022E9A8: slti        $v0, $v0, 0x2
        ctx->r2 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
            goto L_8022E9D4;
    }
    // 0x8022E9A8: slti        $v0, $v0, 0x2
    ctx->r2 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x8022E9AC: beq         $v0, $zero, L_8022EAA4
    if (ctx->r2 == 0) {
        // 0x8022E9B0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022EAA4;
    }
    // 0x8022E9B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E9B4: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022E9B8: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x8022E9BC: jal         0x8004DA90
    // 0x8022E9C0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x8022E9C0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x8022E9C4: jal         0x80040F30
    // 0x8022E9C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_1;
    // 0x8022E9C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022E9CC: j           L_8022EAA4
    // 0x8022E9D0: nop

        goto L_8022EAA4;
    // 0x8022E9D0: nop

L_8022E9D4:
    // 0x8022E9D4: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8022E9D8: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022E9DC: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022E9E0: addiu       $v1, $zero, 0x22
    ctx->r3 = ADD32(0, 0X22);
    // 0x8022E9E4: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x8022E9E8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022E9EC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022E9F0:
    // 0x8022E9F0: lhu         $v1, 0x4($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X4);
    // 0x8022E9F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E9F8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022E9FC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022EA00: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8022EA04: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022EA08: sh          $v1, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r3;
    // 0x8022EA0C: lhu         $a1, 0x44($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X44);
    // 0x8022EA10: sll         $a2, $v0, 23
    ctx->r6 = S32(ctx->r2 << 23);
    // 0x8022EA14: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8022EA18: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022EA1C: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x8022EA20: sll         $a1, $a1, 20
    ctx->r5 = S32(ctx->r5 << 20);
    // 0x8022EA24: jal         0x8004DA90
    // 0x8022EA28: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x8022EA28: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    after_2:
    // 0x8022EA2C: jal         0x80040F30
    // 0x8022EA30: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_3;
    // 0x8022EA30: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022EA34: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022EA38: beq         $v1, $zero, L_8022EAA4
    if (ctx->r3 == 0) {
        // 0x8022EA3C: andi        $v0, $v1, 0xF00
        ctx->r2 = ctx->r3 & 0XF00;
            goto L_8022EAA4;
    }
    // 0x8022EA3C: andi        $v0, $v1, 0xF00
    ctx->r2 = ctx->r3 & 0XF00;
    // 0x8022EA40: bnel        $v0, $zero, L_8022EA48
    if (ctx->r2 != 0) {
        // 0x8022EA44: sh          $zero, 0x44($s0)
        MEM_H(0X44, ctx->r16) = 0;
            goto L_8022EA48;
    }
    goto skip_1;
    // 0x8022EA44: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    skip_1:
L_8022EA48:
    // 0x8022EA48: andi        $v0, $v1, 0x1000
    ctx->r2 = ctx->r3 & 0X1000;
    // 0x8022EA4C: beq         $v0, $zero, L_8022EAA4
    if (ctx->r2 == 0) {
        // 0x8022EA50: nop
    
            goto L_8022EAA4;
    }
    // 0x8022EA50: nop

    // 0x8022EA54: lh          $v0, 0x4($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X4);
    // 0x8022EA58: bgtz        $v0, L_8022EAA4
    if (SIGNED(ctx->r2) > 0) {
        // 0x8022EA5C: addiu       $v0, $zero, 0x12
        ctx->r2 = ADD32(0, 0X12);
            goto L_8022EAA4;
    }
    // 0x8022EA5C: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    // 0x8022EA60: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022EA64: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022EA68: addiu       $v1, $zero, 0x23
    ctx->r3 = ADD32(0, 0X23);
    // 0x8022EA6C: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x8022EA70: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022EA74: j           L_8022EAA4
    // 0x8022EA78: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_8022EAA4;
    // 0x8022EA78: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022EA7C:
    // 0x8022EA7C: lhu         $v0, 0x34C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X34C);
    // 0x8022EA80: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022EA84: sh          $v0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r2;
    // 0x8022EA88: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022EA8C: bgez        $v0, L_8022EAA4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022EA90: addiu       $v1, $zero, 0x6
        ctx->r3 = ADD32(0, 0X6);
            goto L_8022EAA4;
    }
    // 0x8022EA90: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
    // 0x8022EA94: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x8022EA98: sb          $v1, 0x110($s0)
    MEM_B(0X110, ctx->r16) = ctx->r3;
    // 0x8022EA9C: ori         $v0, $v0, 0x109
    ctx->r2 = ctx->r2 | 0X109;
    // 0x8022EAA0: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
L_8022EAA4:
    // 0x8022EAA4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022EAA8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022EAAC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022EAB0: jr          $ra
    // 0x8022EAB4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022EAB4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80233754_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233754: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80233758: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023375C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80233760: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80233764: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80233768: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8023376C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80233770: addiu       $a1, $a1, 0x49B0
    ctx->r5 = ADD32(ctx->r5, 0X49B0);
    // 0x80233774: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x80233778: beq         $v0, $zero, L_8023386C
    if (ctx->r2 == 0) {
        // 0x8023377C: addiu       $s1, $s0, 0x368
        ctx->r17 = ADD32(ctx->r16, 0X368);
            goto L_8023386C;
    }
    // 0x8023377C: addiu       $s1, $s0, 0x368
    ctx->r17 = ADD32(ctx->r16, 0X368);
    // 0x80233780: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80233784: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80233788: addu        $at, $at, $v0
    gpr jr_addend_80233790 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023378C: lw          $v0, 0x2E80($at)
    ctx->r2 = ADD32(ctx->r1, 0X2E80);
    // 0x80233790: jr          $v0
    // 0x80233794: nop

    switch (jr_addend_80233790 >> 2) {
        case 0: goto L_80233798; break;
        case 1: goto L_802337BC; break;
        case 2: goto L_80233800; break;
        case 3: goto L_8023381C; break;
        case 4: goto L_8023386C; break;
        default: switch_error(__func__, 0x80233790, 0x80252E80);
    }
    // 0x80233794: nop

L_80233798:
    // 0x80233798: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8023379C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802337A0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802337A4: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x802337A8: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x802337AC: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x802337B0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802337B4: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x802337B8: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_802337BC:
    // 0x802337BC: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x802337C0: lh          $a3, 0x64($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X64);
    // 0x802337C4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802337C8: jal         0x8004F820
    // 0x802337CC: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x802337CC: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_0:
    // 0x802337D0: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x802337D4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802337D8: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x802337DC: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x802337E0: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x802337E4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802337E8: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x802337EC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802337F0: beq         $v0, $zero, L_80233860
    if (ctx->r2 == 0) {
        // 0x802337F4: nop
    
            goto L_80233860;
    }
    // 0x802337F4: nop

    // 0x802337F8: j           L_8023386C
    // 0x802337FC: nop

        goto L_8023386C;
    // 0x802337FC: nop

L_80233800:
    // 0x80233800: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80233804: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x80233808: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023380C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80233810: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x80233814: j           L_8023386C
    // 0x80233818: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
        goto L_8023386C;
    // 0x80233818: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_8023381C:
    // 0x8023381C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80233820: lhu         $a2, 0x56($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X56);
    // 0x80233824: lhu         $v0, 0xA($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XA);
    // 0x80233828: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    // 0x8023382C: lh          $a3, 0x64($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X64);
    // 0x80233830: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x80233834: jal         0x8004F820
    // 0x80233838: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x80233838: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_1:
    // 0x8023383C: lhu         $v1, 0xA($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0XA);
    // 0x80233840: lhu         $a0, 0x4($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X4);
    // 0x80233844: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80233848: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8023384C: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x80233850: sh          $a0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r4;
    // 0x80233854: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80233858: bne         $a0, $zero, L_8023386C
    if (ctx->r4 != 0) {
        // 0x8023385C: sh          $v1, 0xA($s1)
        MEM_H(0XA, ctx->r17) = ctx->r3;
            goto L_8023386C;
    }
    // 0x8023385C: sh          $v1, 0xA($s1)
    MEM_H(0XA, ctx->r17) = ctx->r3;
L_80233860:
    // 0x80233860: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80233864: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80233868: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8023386C:
    // 0x8023386C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80233870: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80233874: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80233878: jr          $ra
    // 0x8023387C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023387C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802327D8_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802327D8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802327DC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802327E0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802327E4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802327E8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802327EC: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x802327F0: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x802327F4: addiu       $a1, $a1, 0x49B0
    ctx->r5 = ADD32(ctx->r5, 0X49B0);
    // 0x802327F8: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x802327FC: bne         $v0, $zero, L_80232858
    if (ctx->r2 != 0) {
        // 0x80232800: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_80232858;
    }
    // 0x80232800: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x80232804: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80232808: lh          $a3, 0x34E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X34E);
    // 0x8023280C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80232810: jal         0x8004F820
    // 0x80232814: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x80232814: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_0:
    // 0x80232818: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8023281C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80232820: lw          $a0, 0x3FF0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3FF0);
    // 0x80232824: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80232828: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8023282C: lui         $v0, 0x20
    ctx->r2 = S32(0X20 << 16);
    // 0x80232830: and         $a0, $a0, $v0
    ctx->r4 = ctx->r4 & ctx->r2;
    // 0x80232834: beq         $a0, $zero, L_80232858
    if (ctx->r4 == 0) {
        // 0x80232838: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_80232858;
    }
    // 0x80232838: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8023283C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80232840: jal         0x80233200
    // 0x80232844: nop

    func_80233200_ovl10(rdram, ctx);
        goto after_1;
    // 0x80232844: nop

    after_1:
    // 0x80232848: lbu         $v1, 0x34B($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34B);
    // 0x8023284C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80232850: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80232854: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
L_80232858:
    // 0x80232858: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8023285C: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x80232860: bne         $v0, $zero, L_80232884
    if (ctx->r2 != 0) {
        // 0x80232864: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_80232884;
    }
    // 0x80232864: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x80232868: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8023286C: sb          $v1, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r3;
    // 0x80232870: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x80232874: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x80232878: jal         0x80233298
    // 0x8023287C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_80233298_ovl10(rdram, ctx);
        goto after_2;
    // 0x8023287C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_2:
    // 0x80232880: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_80232884:
    // 0x80232884: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80232888: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023288C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80232890: jr          $ra
    // 0x80232894: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80232894: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022DC10_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DC10: lbu         $v1, 0xA($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XA);
    // 0x8022DC14: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x8022DC18: beq         $v0, $zero, L_8022DCF4
    if (ctx->r2 == 0) {
        // 0x8022DC1C: addiu       $a1, $a0, 0x348
        ctx->r5 = ADD32(ctx->r4, 0X348);
            goto L_8022DCF4;
    }
    // 0x8022DC1C: addiu       $a1, $a0, 0x348
    ctx->r5 = ADD32(ctx->r4, 0X348);
    // 0x8022DC20: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022DC24: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022DC28: addu        $at, $at, $v0
    gpr jr_addend_8022DC30 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022DC2C: lw          $v0, 0x2DE8($at)
    ctx->r2 = ADD32(ctx->r1, 0X2DE8);
    // 0x8022DC30: jr          $v0
    // 0x8022DC34: nop

    switch (jr_addend_8022DC30 >> 2) {
        case 0: goto L_8022DCF4; break;
        case 1: goto L_8022DC38; break;
        case 2: goto L_8022DC6C; break;
        case 3: goto L_8022DCF4; break;
        case 4: goto L_8022DCA4; break;
        case 5: goto L_8022DCBC; break;
        default: switch_error(__func__, 0x8022DC30, 0x80252DE8);
    }
    // 0x8022DC34: nop

L_8022DC38:
    // 0x8022DC38: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x8022DC3C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022DC40: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x8022DC44: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x8022DC48: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x8022DC4C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022DC50: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8022DC54: sb          $v1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r3;
    // 0x8022DC58: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
    // 0x8022DC5C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022DC60: sh          $zero, 0x8($a1)
    MEM_H(0X8, ctx->r5) = 0;
    // 0x8022DC64: sb          $v0, 0x10B($a0)
    MEM_B(0X10B, ctx->r4) = ctx->r2;
    // 0x8022DC68: sb          $v0, 0x10F($a0)
    MEM_B(0X10F, ctx->r4) = ctx->r2;
L_8022DC6C:
    // 0x8022DC6C: lhu         $v0, 0x4($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X4);
    // 0x8022DC70: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022DC74: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
    // 0x8022DC78: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022DC7C: bgez        $v0, L_8022DC98
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022DC80: nop
    
            goto L_8022DC98;
    }
    // 0x8022DC80: nop

    // 0x8022DC84: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022DC88: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x8022DC8C: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022DC90: j           L_8022DCF4
    // 0x8022DC94: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
        goto L_8022DCF4;
    // 0x8022DC94: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
L_8022DC98:
    // 0x8022DC98: lhu         $v0, 0x16($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X16);
    // 0x8022DC9C: j           L_8022DCF0
    // 0x8022DCA0: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
        goto L_8022DCF0;
    // 0x8022DCA0: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
L_8022DCA4:
    // 0x8022DCA4: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022DCA8: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x8022DCAC: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x8022DCB0: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x8022DCB4: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022DCB8: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
L_8022DCBC:
    // 0x8022DCBC: lhu         $v0, 0x4($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X4);
    // 0x8022DCC0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022DCC4: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
    // 0x8022DCC8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022DCCC: bgez        $v0, L_8022DCE8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022DCD0: addiu       $v1, $zero, 0x6
        ctx->r3 = ADD32(0, 0X6);
            goto L_8022DCE8;
    }
    // 0x8022DCD0: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
    // 0x8022DCD4: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x8022DCD8: sb          $v1, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r3;
    // 0x8022DCDC: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x8022DCE0: j           L_8022DCF4
    // 0x8022DCE4: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
        goto L_8022DCF4;
    // 0x8022DCE4: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
L_8022DCE8:
    // 0x8022DCE8: lhu         $v0, 0x16($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X16);
    // 0x8022DCEC: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
L_8022DCF0:
    // 0x8022DCF0: sh          $v0, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r2;
L_8022DCF4:
    // 0x8022DCF4: jr          $ra
    // 0x8022DCF8: nop

    TRACE_RETURN()
    return;
    // 0x8022DCF8: nop

;}
RECOMP_FUNC void func_8022BED0_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BED0: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8022BED4: lw          $v0, -0x3BC8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3BC8);
    // 0x8022BED8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8022BEDC: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8022BEE0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022BEE4: lui         $v1, 0xFFFF
    ctx->r3 = S32(0XFFFF << 16);
    // 0x8022BEE8: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8022BEEC: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x8022BEF0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022BEF4: lui         $v1, 0x500
    ctx->r3 = S32(0X500 << 16);
    // 0x8022BEF8: bne         $v0, $v1, L_8022BF10
    if (ctx->r2 != ctx->r3) {
        // 0x8022BEFC: sw          $s0, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r16;
            goto L_8022BF10;
    }
    // 0x8022BEFC: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8022BF00: jal         0x80230D20
    // 0x8022BF04: nop

    func_80230D20_ovl10(rdram, ctx);
        goto after_0;
    // 0x8022BF04: nop

    after_0:
    // 0x8022BF08: j           L_8022C054
    // 0x8022BF0C: nop

        goto L_8022C054;
    // 0x8022BF0C: nop

L_8022BF10:
    // 0x8022BF10: addiu       $a0, $s1, 0x2C
    ctx->r4 = ADD32(ctx->r17, 0X2C);
    // 0x8022BF14: lbu         $v0, 0xAC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XAC);
    // 0x8022BF18: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x8022BF1C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022BF20: jal         0x8009A3B4
    // 0x8022BF24: sb          $v0, 0xAD($s1)
    MEM_B(0XAD, ctx->r17) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022BF24: sb          $v0, 0xAD($s1)
    MEM_B(0XAD, ctx->r17) = ctx->r2;
    after_1:
    // 0x8022BF28: addiu       $a0, $s1, 0x34
    ctx->r4 = ADD32(ctx->r17, 0X34);
    // 0x8022BF2C: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    // 0x8022BF30: jal         0x8009A3B4
    // 0x8022BF34: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022BF34: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_2:
    // 0x8022BF38: addiu       $a0, $s1, 0x5C
    ctx->r4 = ADD32(ctx->r17, 0X5C);
    // 0x8022BF3C: addiu       $a1, $s1, 0x54
    ctx->r5 = ADD32(ctx->r17, 0X54);
    // 0x8022BF40: jal         0x8009A3B4
    // 0x8022BF44: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8022BF44: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x8022BF48: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022BF4C: jal         0x800A3450
    // 0x8022BF50: sh          $v0, 0x15E($s1)
    MEM_H(0X15E, ctx->r17) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_4;
    // 0x8022BF50: sh          $v0, 0x15E($s1)
    MEM_H(0X15E, ctx->r17) = ctx->r2;
    after_4:
    // 0x8022BF54: lbu         $v1, 0x8($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X8);
    // 0x8022BF58: sh          $v0, 0x34A($s1)
    MEM_H(0X34A, ctx->r17) = ctx->r2;
    // 0x8022BF5C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8022BF60: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8022BF64: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022BF68: lw          $v0, 0x890($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X890);
    // 0x8022BF6C: jalr        $v0
    // 0x8022BF70: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_5;
    // 0x8022BF70: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_5:
    // 0x8022BF74: lbu         $v0, 0xAD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XAD);
    // 0x8022BF78: lbu         $a1, 0xAC($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0XAC);
    // 0x8022BF7C: beq         $v0, $a1, L_8022BF98
    if (ctx->r2 == ctx->r5) {
        // 0x8022BF80: addiu       $s2, $s1, 0x348
        ctx->r18 = ADD32(ctx->r17, 0X348);
            goto L_8022BF98;
    }
    // 0x8022BF80: addiu       $s2, $s1, 0x348
    ctx->r18 = ADD32(ctx->r17, 0X348);
    // 0x8022BF84: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022BF88: jal         0x80050294
    // 0x8022BF8C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_6;
    // 0x8022BF8C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_6:
    // 0x8022BF90: j           L_8022BFA0
    // 0x8022BF94: nop

        goto L_8022BFA0;
    // 0x8022BF94: nop

L_8022BF98:
    // 0x8022BF98: jal         0x8005044C
    // 0x8022BF9C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_7;
    // 0x8022BF9C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_7:
L_8022BFA0:
    // 0x8022BFA0: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x8022BFA4: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022BFA8: beq         $v0, $zero, L_8022BFD0
    if (ctx->r2 == 0) {
        // 0x8022BFAC: nop
    
            goto L_8022BFD0;
    }
    // 0x8022BFAC: nop

    // 0x8022BFB0: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x8022BFB4: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x8022BFB8: bne         $v0, $zero, L_8022BFD0
    if (ctx->r2 != 0) {
        // 0x8022BFBC: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8022BFD0;
    }
    // 0x8022BFBC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022BFC0: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x8022BFC4: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8022BFC8: jal         0x8003B564
    // 0x8022BFCC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_8;
    // 0x8022BFCC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_8:
L_8022BFD0:
    // 0x8022BFD0: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x8022BFD4: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022BFD8: beql        $v0, $zero, L_8022C054
    if (ctx->r2 == 0) {
        // 0x8022BFDC: sw          $zero, 0x14($s2)
        MEM_W(0X14, ctx->r18) = 0;
            goto L_8022C054;
    }
    goto skip_0;
    // 0x8022BFDC: sw          $zero, 0x14($s2)
    MEM_W(0X14, ctx->r18) = 0;
    skip_0:
    // 0x8022BFE0: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x8022BFE4: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022BFE8: beq         $v0, $zero, L_8022C050
    if (ctx->r2 == 0) {
        // 0x8022BFEC: addiu       $s0, $s2, 0xC
        ctx->r16 = ADD32(ctx->r18, 0XC);
            goto L_8022C050;
    }
    // 0x8022BFEC: addiu       $s0, $s2, 0xC
    ctx->r16 = ADD32(ctx->r18, 0XC);
    // 0x8022BFF0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022BFF4: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x8022BFF8: jal         0x8009A3B4
    // 0x8022BFFC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_9;
    // 0x8022BFFC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_9:
    // 0x8022C000: lhu         $v0, 0xE($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0XE);
    // 0x8022C004: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C008: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x8022C00C: addiu       $v0, $v0, -0x28
    ctx->r2 = ADD32(ctx->r2, -0X28);
    // 0x8022C010: sh          $v0, 0xE($s2)
    MEM_H(0XE, ctx->r18) = ctx->r2;
    // 0x8022C014: lbu         $v1, 0x1($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X1);
    // 0x8022C018: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022C01C: addiu       $v0, $s2, 0x14
    ctx->r2 = ADD32(ctx->r18, 0X14);
    // 0x8022C020: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022C024: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x8022C028: lhu         $v1, 0x8($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X8);
    // 0x8022C02C: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x8022C030: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x8022C034: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8022C038: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022C03C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8022C040: lui         $v0, 0x400
    ctx->r2 = S32(0X400 << 16);
    // 0x8022C044: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8022C048: jal         0x80051E18
    // 0x8022C04C: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_10;
    // 0x8022C04C: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_10:
L_8022C050:
    // 0x8022C050: sw          $zero, 0x14($s2)
    MEM_W(0X14, ctx->r18) = 0;
L_8022C054:
    // 0x8022C054: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8022C058: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x8022C05C: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8022C060: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8022C064: jr          $ra
    // 0x8022C068: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8022C068: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_802333E0_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802333E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802333E4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802333E8: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x802333EC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802333F0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802333F4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802333F8: lw          $v0, 0x1190($at)
    ctx->r2 = MEM_W(ctx->r1, 0X1190);
    // 0x802333FC: jalr        $v0
    // 0x80233400: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80233400: nop

    after_0:
    // 0x80233404: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80233408: jr          $ra
    // 0x8023340C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023340C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80241C0C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80241C0C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80241C10: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80241C14: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80241C18: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80241C1C: lbu         $v1, -0x3A49($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3A49);
    // 0x80241C20: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x80241C24: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80241C28: bne         $v1, $v0, L_80241C50
    if (ctx->r3 != ctx->r2) {
        // 0x80241C2C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80241C50;
    }
    // 0x80241C2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80241C30: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80241C34: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80241C38: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80241C3C: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80241C40: lbu         $v0, -0x3A49($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3A49);
    // 0x80241C44: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80241C48: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80241C4C: sb          $v0, -0x3A49($at)
    MEM_B(-0X3A49, ctx->r1) = ctx->r2;
L_80241C50:
    // 0x80241C50: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80241C54: bne         $v0, $zero, L_80241C88
    if (ctx->r2 != 0) {
        // 0x80241C58: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80241C88;
    }
    // 0x80241C58: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80241C5C: jal         0x802420E4
    // 0x80241C60: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_802420E4_ovl10(rdram, ctx);
        goto after_0;
    // 0x80241C60: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_0:
    // 0x80241C64: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80241C68: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x80241C6C: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x80241C70: lbu         $a1, 0x1A70($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X1A70);
    // 0x80241C74: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80241C78: jal         0x80050294
    // 0x80241C7C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x80241C7C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x80241C80: j           L_80241CBC
    // 0x80241C84: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_80241CBC;
    // 0x80241C84: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80241C88:
    // 0x80241C88: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x80241C8C: bne         $v1, $v0, L_80241CB0
    if (ctx->r3 != ctx->r2) {
        // 0x80241C90: nop
    
            goto L_80241CB0;
    }
    // 0x80241C90: nop

    // 0x80241C94: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80241C98: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80241C9C: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80241CA0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80241CA4: addiu       $v0, $v0, 0x80
    ctx->r2 = ADD32(ctx->r2, 0X80);
    // 0x80241CA8: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80241CAC: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
L_80241CB0:
    // 0x80241CB0: jal         0x8005044C
    // 0x80241CB4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_2;
    // 0x80241CB4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80241CB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80241CBC:
    // 0x80241CBC: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x80241CC0: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x80241CC4: jal         0x8003B564
    // 0x80241CC8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_3;
    // 0x80241CC8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_3:
    // 0x80241CCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80241CD0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80241CD4: jr          $ra
    // 0x80241CD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80241CD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8024D230_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024D230: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8024D234: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8024D238: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8024D23C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8024D240: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8024D244: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8024D248: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024D24C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8024D250: lw          $v0, 0x2958($at)
    ctx->r2 = MEM_W(ctx->r1, 0X2958);
    // 0x8024D254: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8024D258: lw          $v1, 0x20($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X20);
    // 0x8024D25C: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x8024D260: lbu         $v0, 0x2($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X2);
    // 0x8024D264: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x8024D268: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x8024D26C: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x8024D270: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8024D274: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x8024D278: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x8024D27C: lbu         $v0, 0x1($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X1);
    // 0x8024D280: jal         0x8024D6D4
    // 0x8024D284: sh          $v0, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r2;
    func_8024D6D4_ovl10(rdram, ctx);
        goto after_0;
    // 0x8024D284: sh          $v0, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r2;
    after_0:
    // 0x8024D288: beq         $v0, $zero, L_8024D29C
    if (ctx->r2 == 0) {
        // 0x8024D28C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8024D29C;
    }
    // 0x8024D28C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8024D290: jal         0x8004F62C
    // 0x8024D294: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F62C_2AA2C(rdram, ctx);
        goto after_1;
    // 0x8024D294: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8024D298: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8024D29C:
    // 0x8024D29C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8024D2A0: jal         0x8024D31C
    // 0x8024D2A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8024D31C_ovl10(rdram, ctx);
        goto after_2;
    // 0x8024D2A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8024D2A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8024D2AC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8024D2B0: jr          $ra
    // 0x8024D2B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8024D2B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80232D44_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232D44: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80232D48: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80232D4C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80232D50: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x80232D54: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x80232D58: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80232D5C: jal         0x8003516C
    // 0x80232D60: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8003516C_1056C(rdram, ctx);
        goto after_0;
    // 0x80232D60: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x80232D64: bne         $v0, $zero, L_80232D88
    if (ctx->r2 != 0) {
        // 0x80232D68: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80232D88;
    }
    // 0x80232D68: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80232D6C: lbu         $a3, 0xC($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XC);
    // 0x80232D70: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x80232D74: jal         0x800610AC
    // 0x80232D78: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_1;
    // 0x80232D78: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x80232D7C: lbu         $v0, 0x34B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X34B);
    // 0x80232D80: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80232D84: sb          $v0, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r2;
L_80232D88:
    // 0x80232D88: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80232D8C: lh          $a3, 0x34E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X34E);
    // 0x80232D90: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80232D94: jal         0x8004F820
    // 0x80232D98: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x80232D98: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_2:
    // 0x80232D9C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80232DA0: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x80232DA4: sb          $a0, 0x11B($s0)
    MEM_B(0X11B, ctx->r16) = ctx->r4;
    // 0x80232DA8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80232DAC: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80232DB0: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x80232DB4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80232DB8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80232DBC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80232DC0: jr          $ra
    // 0x80232DC4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80232DC4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80226F30_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226F30: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80226F34: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226F38: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x80226F3C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80226F40: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226F44: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x80226F48: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x80226F4C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226F50: sh          $v0, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = ctx->r2;
    // 0x80226F54: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80226F58: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226F5C: sh          $v0, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = ctx->r2;
    // 0x80226F60: addiu       $v0, $zero, 0x1BE0
    ctx->r2 = ADD32(0, 0X1BE0);
    // 0x80226F64: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226F68: sh          $v0, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = ctx->r2;
    // 0x80226F6C: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x80226F70: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226F74: sh          $v0, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = ctx->r2;
    // 0x80226F78: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80226F7C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226F80: sb          $a0, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r4;
    // 0x80226F84: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226F88: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x80226F8C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226F90: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x80226F94: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226F98: jr          $ra
    // 0x80226F9C: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80226F9C: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
;}
RECOMP_FUNC void func_80246060_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80246060: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80246064: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80246068: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8024606C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80246070: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80246074: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80246078: lw          $v0, 0x2138($at)
    ctx->r2 = MEM_W(ctx->r1, 0X2138);
    // 0x8024607C: jalr        $v0
    // 0x80246080: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80246080: nop

    after_0:
    // 0x80246084: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80246088: jr          $ra
    // 0x8024608C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8024608C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023DA48_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023DA48: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023DA4C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023DA50: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023DA54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023DA58: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8023DA5C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8023DA60: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x8023DA64: beq         $v1, $a0, L_8023DAC4
    if (ctx->r3 == ctx->r4) {
        // 0x8023DA68: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_8023DAC4;
    }
    // 0x8023DA68: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023DA6C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8023DA70: beql        $v0, $zero, L_8023DA88
    if (ctx->r2 == 0) {
        // 0x8023DA74: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8023DA88;
    }
    goto skip_0;
    // 0x8023DA74: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8023DA78: beq         $v1, $zero, L_8023DA98
    if (ctx->r3 == 0) {
        // 0x8023DA7C: nop
    
            goto L_8023DA98;
    }
    // 0x8023DA7C: nop

    // 0x8023DA80: j           L_8023DB50
    // 0x8023DA84: nop

        goto L_8023DB50;
    // 0x8023DA84: nop

L_8023DA88:
    // 0x8023DA88: beq         $v1, $v0, L_8023DAD8
    if (ctx->r3 == ctx->r2) {
        // 0x8023DA8C: nop
    
            goto L_8023DAD8;
    }
    // 0x8023DA8C: nop

    // 0x8023DA90: j           L_8023DB50
    // 0x8023DA94: nop

        goto L_8023DB50;
    // 0x8023DA94: nop

L_8023DA98:
    // 0x8023DA98: lhu         $v0, 0x444($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X444);
    // 0x8023DA9C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023DAA0: sh          $v0, 0x444($s0)
    MEM_H(0X444, ctx->r16) = ctx->r2;
    // 0x8023DAA4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023DAA8: bgtz        $v0, L_8023DB50
    if (SIGNED(ctx->r2) > 0) {
        // 0x8023DAAC: nop
    
            goto L_8023DB50;
    }
    // 0x8023DAAC: nop

    // 0x8023DAB0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8023DAB4: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x8023DAB8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023DABC: j           L_8023DB50
    // 0x8023DAC0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_8023DB50;
    // 0x8023DAC0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8023DAC4:
    // 0x8023DAC4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8023DAC8: addiu       $v0, $zero, 0x96
    ctx->r2 = ADD32(0, 0X96);
    // 0x8023DACC: sh          $v0, 0x444($s0)
    MEM_H(0X444, ctx->r16) = ctx->r2;
    // 0x8023DAD0: j           L_8023DB50
    // 0x8023DAD4: sh          $zero, 0x448($s0)
    MEM_H(0X448, ctx->r16) = 0;
        goto L_8023DB50;
    // 0x8023DAD4: sh          $zero, 0x448($s0)
    MEM_H(0X448, ctx->r16) = 0;
L_8023DAD8:
    // 0x8023DAD8: lhu         $v0, 0x440($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X440);
    // 0x8023DADC: andi        $v0, $v0, 0x200
    ctx->r2 = ctx->r2 & 0X200;
    // 0x8023DAE0: beq         $v0, $zero, L_8023DAFC
    if (ctx->r2 == 0) {
        // 0x8023DAE4: nop
    
            goto L_8023DAFC;
    }
    // 0x8023DAE4: nop

    // 0x8023DAE8: lbu         $v0, 0x52D($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X52D);
    // 0x8023DAEC: beq         $v0, $a0, L_8023DB48
    if (ctx->r2 == ctx->r4) {
        // 0x8023DAF0: nop
    
            goto L_8023DB48;
    }
    // 0x8023DAF0: nop

    // 0x8023DAF4: j           L_8023DB30
    // 0x8023DAF8: nop

        goto L_8023DB30;
    // 0x8023DAF8: nop

L_8023DAFC:
    // 0x8023DAFC: jal         0x8023F814
    // 0x8023DB00: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8023F814_ovl10(rdram, ctx);
        goto after_0;
    // 0x8023DB00: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8023DB04: beq         $v0, $zero, L_8023DB18
    if (ctx->r2 == 0) {
        // 0x8023DB08: nop
    
            goto L_8023DB18;
    }
    // 0x8023DB08: nop

    // 0x8023DB0C: lhu         $v0, 0x440($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X440);
    // 0x8023DB10: j           L_8023DB40
    // 0x8023DB14: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
        goto L_8023DB40;
    // 0x8023DB14: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
L_8023DB18:
    // 0x8023DB18: lhu         $v0, 0x444($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X444);
    // 0x8023DB1C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023DB20: sh          $v0, 0x444($s0)
    MEM_H(0X444, ctx->r16) = ctx->r2;
    // 0x8023DB24: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023DB28: bgtz        $v0, L_8023DB48
    if (SIGNED(ctx->r2) > 0) {
        // 0x8023DB2C: nop
    
            goto L_8023DB48;
    }
    // 0x8023DB2C: nop

L_8023DB30:
    // 0x8023DB30: lhu         $v0, 0x440($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X440);
    // 0x8023DB34: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8023DB38: sb          $v1, 0x52E($s0)
    MEM_B(0X52E, ctx->r16) = ctx->r3;
    // 0x8023DB3C: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
L_8023DB40:
    // 0x8023DB40: j           L_8023DB50
    // 0x8023DB44: sh          $v0, 0x440($s0)
    MEM_H(0X440, ctx->r16) = ctx->r2;
        goto L_8023DB50;
    // 0x8023DB44: sh          $v0, 0x440($s0)
    MEM_H(0X440, ctx->r16) = ctx->r2;
L_8023DB48:
    // 0x8023DB48: jal         0x8023F9A8
    // 0x8023DB4C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8023F9A8_ovl10(rdram, ctx);
        goto after_1;
    // 0x8023DB4C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_8023DB50:
    // 0x8023DB50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023DB54: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023DB58: jr          $ra
    // 0x8023DB5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023DB5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226A24_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226A24: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80226A28: lw          $v1, 0x24($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X24);
    // 0x80226A2C: bne         $v0, $zero, L_80226A44
    if (ctx->r2 != 0) {
        // 0x80226A30: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80226A44;
    }
    // 0x80226A30: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80226A34: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80226A38: sb          $zero, 0x333A($at)
    MEM_B(0X333A, ctx->r1) = 0;
    // 0x80226A3C: j           L_80226A54
    // 0x80226A40: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
        goto L_80226A54;
    // 0x80226A40: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
L_80226A44:
    // 0x80226A44: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226A48: sb          $zero, 0x4B18($at)
    MEM_B(0X4B18, ctx->r1) = 0;
    // 0x80226A4C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226A50: sb          $zero, 0x4B19($at)
    MEM_B(0X4B19, ctx->r1) = 0;
L_80226A54:
    // 0x80226A54: jr          $ra
    // 0x80226A58: nop

    TRACE_RETURN()
    return;
    // 0x80226A58: nop

;}
RECOMP_FUNC void func_802479E8_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802479E8: jr          $ra
    // 0x802479EC: nop

    TRACE_RETURN()
    return;
    // 0x802479EC: nop

;}
RECOMP_FUNC void func_80245E28_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80245E28: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80245E2C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80245E30: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80245E34: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80245E38: lh          $a0, 0x4A06($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X4A06);
    // 0x80245E3C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80245E40: jal         0x80032498
    // 0x80245E44: nop

    func_80032498_D898(rdram, ctx);
        goto after_0;
    // 0x80245E44: nop

    after_0:
    // 0x80245E48: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x80245E4C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80245E50: sll         $v1, $v1, 9
    ctx->r3 = S32(ctx->r3 << 9);
    // 0x80245E54: negu        $v1, $v1
    ctx->r3 = SUB32(0, ctx->r3);
    // 0x80245E58: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x80245E5C: sh          $v1, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r3;
    // 0x80245E60: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80245E64: jal         0x800324B4
    // 0x80245E68: lh          $a0, 0x4A06($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X4A06);
    func_800324B4_D8B4(rdram, ctx);
        goto after_1;
    // 0x80245E68: lh          $a0, 0x4A06($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X4A06);
    after_1:
    // 0x80245E6C: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x80245E70: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80245E74: sll         $v1, $v1, 9
    ctx->r3 = S32(ctx->r3 << 9);
    // 0x80245E78: lw          $a0, 0xC0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC0);
    // 0x80245E7C: negu        $v1, $v1
    ctx->r3 = SUB32(0, ctx->r3);
    // 0x80245E80: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x80245E84: addiu       $v0, $zero, -0x640
    ctx->r2 = ADD32(0, -0X640);
    // 0x80245E88: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x80245E8C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80245E90: sh          $v0, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r2;
    // 0x80245E94: lui         $v0, 0x2000
    ctx->r2 = S32(0X2000 << 16);
    // 0x80245E98: and         $a0, $a0, $v0
    ctx->r4 = ctx->r4 & ctx->r2;
    // 0x80245E9C: bne         $a0, $zero, L_80245EB8
    if (ctx->r4 != 0) {
        // 0x80245EA0: sh          $v1, 0x44($s0)
        MEM_H(0X44, ctx->r16) = ctx->r3;
            goto L_80245EB8;
    }
    // 0x80245EA0: sh          $v1, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r3;
    // 0x80245EA4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80245EA8: lh          $v0, 0x49F4($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X49F4);
    // 0x80245EAC: slti        $v0, $v0, 0x259
    ctx->r2 = SIGNED(ctx->r2) < 0X259 ? 1 : 0;
    // 0x80245EB0: bne         $v0, $zero, L_80245ED0
    if (ctx->r2 != 0) {
        // 0x80245EB4: nop
    
            goto L_80245ED0;
    }
    // 0x80245EB4: nop

L_80245EB8:
    // 0x80245EB8: lhu         $v0, 0x44($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X44);
    // 0x80245EBC: lhu         $v1, 0x48($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X48);
    // 0x80245EC0: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80245EC4: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x80245EC8: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80245ECC: sh          $v1, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r3;
L_80245ED0:
    // 0x80245ED0: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80245ED4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80245ED8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80245EDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80245EE0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80245EE4: jr          $ra
    // 0x80245EE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80245EE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802349EC_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802349EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802349F0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802349F4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802349F8: beq         $a1, $zero, L_80234A48
    if (ctx->r5 == 0) {
        // 0x802349FC: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80234A48;
    }
    // 0x802349FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80234A00: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x80234A04: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80234A08: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x80234A0C: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80234A10: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80234A14: slti        $v0, $v0, 0x3D
    ctx->r2 = SIGNED(ctx->r2) < 0X3D ? 1 : 0;
    // 0x80234A18: bne         $v0, $zero, L_80234A48
    if (ctx->r2 != 0) {
        // 0x80234A1C: nop
    
            goto L_80234A48;
    }
    // 0x80234A1C: nop

    // 0x80234A20: jal         0x800A3450
    // 0x80234A24: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x80234A24: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    after_0:
    // 0x80234A28: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x80234A2C: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
    // 0x80234A30: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80234A34: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80234A38: addiu       $v0, $v0, 0x7D0
    ctx->r2 = ADD32(ctx->r2, 0X7D0);
    // 0x80234A3C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80234A40: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80234A44: sh          $v1, 0x66($s0)
    MEM_H(0X66, ctx->r16) = ctx->r3;
L_80234A48:
    // 0x80234A48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80234A4C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80234A50: jr          $ra
    // 0x80234A54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80234A54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80242D80_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80242D80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80242D84: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80242D88: jal         0x8004F4F8
    // 0x80242D8C: nop

    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_0;
    // 0x80242D8C: nop

    after_0:
    // 0x80242D90: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80242D94: jr          $ra
    // 0x80242D98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80242D98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023DA1C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023DA1C: lh          $v0, 0x444($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X444);
    // 0x8023DA20: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8023DA24: beq         $v0, $zero, L_8023DA38
    if (ctx->r2 == 0) {
        // 0x8023DA28: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8023DA38;
    }
    // 0x8023DA28: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8023DA2C: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8023DA30: j           L_8023DA40
    // 0x8023DA34: sh          $v0, 0x444($a0)
    MEM_H(0X444, ctx->r4) = ctx->r2;
        goto L_8023DA40;
    // 0x8023DA34: sh          $v0, 0x444($a0)
    MEM_H(0X444, ctx->r4) = ctx->r2;
L_8023DA38:
    // 0x8023DA38: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023DA3C: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
L_8023DA40:
    // 0x8023DA40: jr          $ra
    // 0x8023DA44: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x8023DA44: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80240CA0_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80240CA0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80240CA4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80240CA8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80240CAC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80240CB0: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80240CB4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80240CB8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80240CBC: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80240CC0: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80240CC4: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x80240CC8: sh          $v0, 0x502($s0)
    MEM_H(0X502, ctx->r16) = ctx->r2;
    // 0x80240CCC: sh          $v0, 0x500($s0)
    MEM_H(0X500, ctx->r16) = ctx->r2;
    // 0x80240CD0: sw          $zero, 0x504($s0)
    MEM_W(0X504, ctx->r16) = 0;
    // 0x80240CD4: sw          $zero, 0x508($s0)
    MEM_W(0X508, ctx->r16) = 0;
    // 0x80240CD8: sw          $zero, 0x50C($s0)
    MEM_W(0X50C, ctx->r16) = 0;
    // 0x80240CDC: sw          $zero, 0x510($s0)
    MEM_W(0X510, ctx->r16) = 0;
    // 0x80240CE0: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80240CE4: jal         0x8004D5D4
    // 0x80240CE8: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80240CE8: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x80240CEC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80240CF0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80240CF4: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80240CF8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80240CFC: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80240D00: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80240D04: jal         0x80050294
    // 0x80240D08: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x80240D08: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    after_1:
    // 0x80240D0C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80240D10: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80240D14: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80240D18: jal         0x80240D30
    // 0x80240D1C: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
    func_80240D30_ovl10(rdram, ctx);
        goto after_2;
    // 0x80240D1C: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
    after_2:
    // 0x80240D20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80240D24: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80240D28: jr          $ra
    // 0x80240D2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80240D2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227C94_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227C94: jr          $ra
    // 0x80227C98: nop

    TRACE_RETURN()
    return;
    // 0x80227C98: nop

;}
RECOMP_FUNC void func_8022B400_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B400: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B404: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B408: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B40C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022B410: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8022B414: bne         $v0, $zero, L_8022B42C
    if (ctx->r2 != 0) {
        // 0x8022B418: nop
    
            goto L_8022B42C;
    }
    // 0x8022B418: nop

    // 0x8022B41C: jal         0x80229F50
    // 0x8022B420: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    func_80229F50_ovl10(rdram, ctx);
        goto after_0;
    // 0x8022B420: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    after_0:
    // 0x8022B424: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022B428: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_8022B42C:
    // 0x8022B42C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022B430: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B434: jr          $ra
    // 0x8022B438: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B438: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802270B0_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802270B0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802270B4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802270B8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802270BC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802270C0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802270C4: lbu         $v1, 0x5($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X5);
    // 0x802270C8: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x802270CC: addiu       $s0, $s0, 0x49B0
    ctx->r16 = ADD32(ctx->r16, 0X49B0);
    // 0x802270D0: beq         $v1, $zero, L_802270E8
    if (ctx->r3 == 0) {
        // 0x802270D4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802270E8;
    }
    // 0x802270D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802270D8: beq         $v1, $v0, L_80227100
    if (ctx->r3 == ctx->r2) {
        // 0x802270DC: nop
    
            goto L_80227100;
    }
    // 0x802270DC: nop

    // 0x802270E0: j           L_802271C8
    // 0x802270E4: nop

        goto L_802271C8;
    // 0x802270E4: nop

L_802270E8:
    // 0x802270E8: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x802270EC: jal         0x8004CB2C
    // 0x802270F0: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_0;
    // 0x802270F0: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_0:
    // 0x802270F4: lbu         $v0, 0x5($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X5);
    // 0x802270F8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802270FC: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
L_80227100:
    // 0x80227100: jal         0x8006FF84
    // 0x80227104: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_1;
    // 0x80227104: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80227108: beq         $v0, $zero, L_802271C8
    if (ctx->r2 == 0) {
        // 0x8022710C: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_802271C8;
    }
    // 0x8022710C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80227110: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80227114: jal         0x8005F6B4
    // 0x80227118: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8005F6B4_3AAB4(rdram, ctx);
        goto after_2;
    // 0x80227118: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x8022711C: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80227120: addiu       $v0, $v0, -0x1298
    ctx->r2 = ADD32(ctx->r2, -0X1298);
    // 0x80227124: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80227128: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    // 0x8022712C: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80227130: addiu       $v0, $v0, -0x10A4
    ctx->r2 = ADD32(ctx->r2, -0X10A4);
    // 0x80227134: sw          $v0, 0xA4($s1)
    MEM_W(0XA4, ctx->r17) = ctx->r2;
    // 0x80227138: sw          $zero, 0xC($s1)
    MEM_W(0XC, ctx->r17) = 0;
    // 0x8022713C: lbu         $v1, 0xBD($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XBD);
    // 0x80227140: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x80227144: sh          $v0, 0x438($s0)
    MEM_H(0X438, ctx->r16) = ctx->r2;
    // 0x80227148: lh          $a0, 0x438($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X438);
    // 0x8022714C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80227150: sh          $v0, 0x43A($s0)
    MEM_H(0X43A, ctx->r16) = ctx->r2;
    // 0x80227154: lh          $a1, 0x43A($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X43A);
    // 0x80227158: addiu       $v0, $zero, 0x1900
    ctx->r2 = ADD32(0, 0X1900);
    // 0x8022715C: sh          $v0, 0x43C($s0)
    MEM_H(0X43C, ctx->r16) = ctx->r2;
    // 0x80227160: lh          $a2, 0x43C($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X43C);
    // 0x80227164: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80227168: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022716C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227170: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80227174: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x80227178: sh          $zero, 0x440($s0)
    MEM_H(0X440, ctx->r16) = 0;
    // 0x8022717C: sh          $v0, 0x442($s0)
    MEM_H(0X442, ctx->r16) = ctx->r2;
    // 0x80227180: sh          $zero, 0x444($s0)
    MEM_H(0X444, ctx->r16) = 0;
    // 0x80227184: sb          $zero, 0x448($s0)
    MEM_B(0X448, ctx->r16) = 0;
    // 0x80227188: ori         $v1, $v1, 0x10
    ctx->r3 = ctx->r3 | 0X10;
    // 0x8022718C: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80227190: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x80227194: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x80227198: sb          $v1, 0xBD($s0)
    MEM_B(0XBD, ctx->r16) = ctx->r3;
    // 0x8022719C: sw          $a0, 0x428($s0)
    MEM_W(0X428, ctx->r16) = ctx->r4;
    // 0x802271A0: sw          $a1, 0x42C($s0)
    MEM_W(0X42C, ctx->r16) = ctx->r5;
    // 0x802271A4: sw          $a2, 0x430($s0)
    MEM_W(0X430, ctx->r16) = ctx->r6;
    // 0x802271A8: lbu         $v0, 0x4($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X4);
    // 0x802271AC: sb          $zero, 0x5($s1)
    MEM_B(0X5, ctx->r17) = 0;
    // 0x802271B0: sb          $zero, 0x7($s1)
    MEM_B(0X7, ctx->r17) = 0;
    // 0x802271B4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802271B8: jal         0x8005FB90
    // 0x802271BC: sb          $v0, 0x4($s1)
    MEM_B(0X4, ctx->r17) = ctx->r2;
    func_8005FB90_3AF90(rdram, ctx);
        goto after_3;
    // 0x802271BC: sb          $v0, 0x4($s1)
    MEM_B(0X4, ctx->r17) = ctx->r2;
    after_3:
    // 0x802271C0: jal         0x80060018
    // 0x802271C4: nop

    func_80060018_3B418(rdram, ctx);
        goto after_4;
    // 0x802271C4: nop

    after_4:
L_802271C8:
    // 0x802271C8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802271CC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802271D0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802271D4: jr          $ra
    // 0x802271D8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802271D8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
