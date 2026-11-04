#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_802255E8_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802255E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802255EC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802255F0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802255F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802255F8: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x802255FC: bne         $v0, $zero, L_80225618
    if (ctx->r2 != 0) {
        // 0x80225600: nop
    
            goto L_80225618;
    }
    // 0x80225600: nop

    // 0x80225604: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80225608: jal         0x800607C4
    // 0x8022560C: addiu       $a0, $a0, -0x7CDC
    ctx->r4 = ADD32(ctx->r4, -0X7CDC);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x8022560C: addiu       $a0, $a0, -0x7CDC
    ctx->r4 = ADD32(ctx->r4, -0X7CDC);
    after_0:
    // 0x80225610: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225614: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225618:
    // 0x80225618: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022561C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225620: jr          $ra
    // 0x80225624: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225624: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80225628: nop

    // 0x8022562C: nop

;}
RECOMP_FUNC void func_80229BF4_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229BF4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229BF8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229BFC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229C00: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80229C04: lhu         $v0, 0x350($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X350);
    // 0x80229C08: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80229C0C: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x80229C10: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229C14: bne         $v0, $zero, L_80229C80
    if (ctx->r2 != 0) {
        // 0x80229C18: addiu       $a1, $zero, 0x40
        ctx->r5 = ADD32(0, 0X40);
            goto L_80229C80;
    }
    // 0x80229C18: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x80229C1C: jal         0x8022B7E4
    // 0x80229C20: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_8022B7E4_ovl13(rdram, ctx);
        goto after_0;
    // 0x80229C20: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_0:
    // 0x80229C24: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80229C28: beq         $v0, $zero, L_80229C7C
    if (ctx->r2 == 0) {
        // 0x80229C2C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80229C7C;
    }
    // 0x80229C2C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229C30: lh          $v0, 0x366($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X366);
    // 0x80229C34: lh          $v1, 0x35E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X35E);
    // 0x80229C38: addiu       $v0, $v0, -0x5
    ctx->r2 = ADD32(ctx->r2, -0X5);
    // 0x80229C3C: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80229C40: bne         $v1, $zero, L_80229C50
    if (ctx->r3 != 0) {
        // 0x80229C44: addiu       $v0, $zero, 0x3C
        ctx->r2 = ADD32(0, 0X3C);
            goto L_80229C50;
    }
    // 0x80229C44: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x80229C48: j           L_80229C80
    // 0x80229C4C: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
        goto L_80229C80;
    // 0x80229C4C: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
L_80229C50:
    // 0x80229C50: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80229C54: jal         0x8022B758
    // 0x80229C58: nop

    func_8022B758_ovl13(rdram, ctx);
        goto after_1;
    // 0x80229C58: nop

    after_1:
    // 0x80229C5C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80229C60: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80229C64: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80229C68: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80229C6C: addiu       $v1, $v1, 0x800
    ctx->r3 = ADD32(ctx->r3, 0X800);
    // 0x80229C70: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80229C74: j           L_80229C80
    // 0x80229C78: sh          $v1, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r3;
        goto L_80229C80;
    // 0x80229C78: sh          $v1, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r3;
L_80229C7C:
    // 0x80229C7C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80229C80:
    // 0x80229C80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80229C84: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229C88: jr          $ra
    // 0x80229C8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80229C8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227BBC_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227BBC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227BC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227BC4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227BC8: lbu         $v1, 0x9($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X9);
    // 0x80227BCC: sltiu       $v0, $v1, 0xA
    ctx->r2 = ctx->r3 < 0XA ? 1 : 0;
    // 0x80227BD0: beq         $v0, $zero, L_80227D88
    if (ctx->r2 == 0) {
        // 0x80227BD4: addu        $s0, $a2, $zero
        ctx->r16 = ADD32(ctx->r6, 0);
            goto L_80227D88;
    }
    // 0x80227BD4: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    // 0x80227BD8: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80227BDC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80227BE0: addu        $at, $at, $v0
    gpr jr_addend_80227BE8 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80227BE4: lw          $v0, -0x6508($at)
    ctx->r2 = ADD32(ctx->r1, -0X6508);
    // 0x80227BE8: jr          $v0
    // 0x80227BEC: nop

    switch (jr_addend_80227BE8 >> 2) {
        case 0: goto L_80227BF0; break;
        case 1: goto L_80227C08; break;
        case 2: goto L_80227C58; break;
        case 3: goto L_80227C70; break;
        case 4: goto L_80227C88; break;
        case 5: goto L_80227CB8; break;
        case 6: goto L_80227CD0; break;
        case 7: goto L_80227CE8; break;
        case 8: goto L_80227D00; break;
        case 9: goto L_80227D50; break;
        default: switch_error(__func__, 0x80227BE8, 0x80239AF8);
    }
    // 0x80227BEC: nop

L_80227BF0:
    // 0x80227BF0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80227BF4: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x80227BF8: sh          $zero, 0x0($s0)
    MEM_H(0X0, ctx->r16) = 0;
    // 0x80227BFC: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x80227C00: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227C04: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
L_80227C08:
    // 0x80227C08: lh          $v0, 0x0($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X0);
    // 0x80227C0C: slti        $v0, $v0, 0x6
    ctx->r2 = SIGNED(ctx->r2) < 0X6 ? 1 : 0;
    // 0x80227C10: beq         $v0, $zero, L_80227C34
    if (ctx->r2 == 0) {
        // 0x80227C14: nop
    
            goto L_80227C34;
    }
    // 0x80227C14: nop

    // 0x80227C18: lhu         $v0, 0x56($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X56);
    // 0x80227C1C: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
    // 0x80227C20: sh          $v0, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r2;
    // 0x80227C24: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x80227C28: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227C2C: j           L_80227C40
    // 0x80227C30: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
        goto L_80227C40;
    // 0x80227C30: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
L_80227C34:
    // 0x80227C34: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x80227C38: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227C3C: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
L_80227C40:
    // 0x80227C40: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x80227C44: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80227C48: jal         0x8004DA90
    // 0x80227C4C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x80227C4C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x80227C50: j           L_80227D88
    // 0x80227C54: nop

        goto L_80227D88;
    // 0x80227C54: nop

L_80227C58:
    // 0x80227C58: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80227C5C: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x80227C60: sh          $zero, 0x0($s0)
    MEM_H(0X0, ctx->r16) = 0;
    // 0x80227C64: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x80227C68: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227C6C: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
L_80227C70:
    // 0x80227C70: lh          $v0, 0x0($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X0);
    // 0x80227C74: slti        $v0, $v0, 0x8
    ctx->r2 = SIGNED(ctx->r2) < 0X8 ? 1 : 0;
    // 0x80227C78: bne         $v0, $zero, L_80227D24
    if (ctx->r2 != 0) {
        // 0x80227C7C: addiu       $a1, $zero, 0x30
        ctx->r5 = ADD32(0, 0X30);
            goto L_80227D24;
    }
    // 0x80227C7C: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x80227C80: j           L_80227D40
    // 0x80227C84: nop

        goto L_80227D40;
    // 0x80227C84: nop

L_80227C88:
    // 0x80227C88: lb          $v1, 0xA7($a0)
    ctx->r3 = MEM_B(ctx->r4, 0XA7);
    // 0x80227C8C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80227C90: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x80227C94: addiu       $v0, $zero, -0x34
    ctx->r2 = ADD32(0, -0X34);
    // 0x80227C98: sh          $v0, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r2;
    // 0x80227C9C: lui         $v0, 0xFFCC
    ctx->r2 = S32(0XFFCC << 16);
    // 0x80227CA0: sw          $v0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r2;
    // 0x80227CA4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80227CA8: beq         $v1, $v0, L_80227D40
    if (ctx->r3 == ctx->r2) {
        // 0x80227CAC: nop
    
            goto L_80227D40;
    }
    // 0x80227CAC: nop

    // 0x80227CB0: j           L_80227D88
    // 0x80227CB4: nop

        goto L_80227D88;
    // 0x80227CB4: nop

L_80227CB8:
    // 0x80227CB8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80227CBC: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x80227CC0: sh          $zero, 0x0($s0)
    MEM_H(0X0, ctx->r16) = 0;
    // 0x80227CC4: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x80227CC8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227CCC: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
L_80227CD0:
    // 0x80227CD0: lh          $v0, 0x0($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X0);
    // 0x80227CD4: slti        $v0, $v0, 0x14
    ctx->r2 = SIGNED(ctx->r2) < 0X14 ? 1 : 0;
    // 0x80227CD8: beq         $v0, $zero, L_80227D40
    if (ctx->r2 == 0) {
        // 0x80227CDC: addiu       $a1, $zero, 0x80
        ctx->r5 = ADD32(0, 0X80);
            goto L_80227D40;
    }
    // 0x80227CDC: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x80227CE0: j           L_80227D28
    // 0x80227CE4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
        goto L_80227D28;
    // 0x80227CE4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
L_80227CE8:
    // 0x80227CE8: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80227CEC: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x80227CF0: sh          $zero, 0x0($s0)
    MEM_H(0X0, ctx->r16) = 0;
    // 0x80227CF4: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x80227CF8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227CFC: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
L_80227D00:
    // 0x80227D00: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
    // 0x80227D04: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80227D08: bne         $v1, $v0, L_80227D14
    if (ctx->r3 != ctx->r2) {
        // 0x80227D0C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80227D14;
    }
    // 0x80227D0C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227D10: sh          $v0, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r2;
L_80227D14:
    // 0x80227D14: lh          $v0, 0x0($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X0);
    // 0x80227D18: slti        $v0, $v0, 0xD
    ctx->r2 = SIGNED(ctx->r2) < 0XD ? 1 : 0;
    // 0x80227D1C: beq         $v0, $zero, L_80227D40
    if (ctx->r2 == 0) {
        // 0x80227D20: addiu       $a1, $zero, 0x30
        ctx->r5 = ADD32(0, 0X30);
            goto L_80227D40;
    }
    // 0x80227D20: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
L_80227D24:
    // 0x80227D24: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
L_80227D28:
    // 0x80227D28: jal         0x8004DA90
    // 0x80227D2C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x80227D2C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x80227D30: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x80227D34: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227D38: j           L_80227D88
    // 0x80227D3C: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
        goto L_80227D88;
    // 0x80227D3C: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
L_80227D40:
    // 0x80227D40: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x80227D44: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227D48: j           L_80227D88
    // 0x80227D4C: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
        goto L_80227D88;
    // 0x80227D4C: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
L_80227D50:
    // 0x80227D50: lb          $v1, 0xA7($a0)
    ctx->r3 = MEM_B(ctx->r4, 0XA7);
    // 0x80227D54: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80227D58: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x80227D5C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80227D60: sh          $v0, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r2;
    // 0x80227D64: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x80227D68: sw          $v0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r2;
    // 0x80227D6C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80227D70: bne         $v1, $v0, L_80227D88
    if (ctx->r3 != ctx->r2) {
        // 0x80227D74: nop
    
            goto L_80227D88;
    }
    // 0x80227D74: nop

    // 0x80227D78: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80227D7C: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
    // 0x80227D80: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227D84: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
L_80227D88:
    // 0x80227D88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227D8C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227D90: jr          $ra
    // 0x80227D94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227D94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80230A60_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230A60: jr          $ra
    // 0x80230A64: nop

    TRACE_RETURN()
    return;
    // 0x80230A64: nop

;}
RECOMP_FUNC void func_802339A8_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802339A8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802339AC: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x802339B0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802339B4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802339B8: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x802339BC: lbu         $a1, 0xF($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XF);
    // 0x802339C0: addiu       $v1, $v0, -0x1
    ctx->r3 = ADD32(ctx->r2, -0X1);
    // 0x802339C4: andi        $v0, $a1, 0x1
    ctx->r2 = ctx->r5 & 0X1;
    // 0x802339C8: bne         $v0, $zero, L_802339E4
    if (ctx->r2 != 0) {
        // 0x802339CC: sb          $v1, 0xB($s0)
        MEM_B(0XB, ctx->r16) = ctx->r3;
            goto L_802339E4;
    }
    // 0x802339CC: sb          $v1, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r3;
    // 0x802339D0: lhu         $v0, 0x9A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X9A);
    // 0x802339D4: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x802339D8: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x802339DC: j           L_80233A88
    // 0x802339E0: sh          $v0, 0x9A($s0)
    MEM_H(0X9A, ctx->r16) = ctx->r2;
        goto L_80233A88;
    // 0x802339E0: sh          $v0, 0x9A($s0)
    MEM_H(0X9A, ctx->r16) = ctx->r2;
L_802339E4:
    // 0x802339E4: lui         $a0, 0x2AAA
    ctx->r4 = S32(0X2AAA << 16);
    // 0x802339E8: ori         $a0, $a0, 0xAAAB
    ctx->r4 = ctx->r4 | 0XAAAB;
    // 0x802339EC: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x802339F0: addiu       $v1, $zero, 0xF0
    ctx->r3 = ADD32(0, 0XF0);
    // 0x802339F4: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x802339F8: mult        $v1, $a0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802339FC: sra         $v0, $v1, 31
    ctx->r2 = S32(SIGNED(ctx->r3) >> 31);
    // 0x80233A00: mfhi        $t2
    ctx->r10 = hi;
    // 0x80233A04: subu        $a0, $t2, $v0
    ctx->r4 = SUB32(ctx->r10, ctx->r2);
    // 0x80233A08: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x80233A0C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80233A10: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80233A14: subu        $a0, $v1, $v0
    ctx->r4 = SUB32(ctx->r3, ctx->r2);
    // 0x80233A18: andi        $v0, $a1, 0x8
    ctx->r2 = ctx->r5 & 0X8;
    // 0x80233A1C: bne         $v0, $zero, L_80233A48
    if (ctx->r2 != 0) {
        // 0x80233A20: sll         $v0, $a0, 1
        ctx->r2 = S32(ctx->r4 << 1);
            goto L_80233A48;
    }
    // 0x80233A20: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x80233A24: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80233A28: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80233A2C: lbu         $v1, -0x6760($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X6760);
    // 0x80233A30: sb          $v1, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r3;
    // 0x80233A34: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80233A38: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80233A3C: lbu         $v0, -0x675F($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X675F);
    // 0x80233A40: j           L_80233A68
    // 0x80233A44: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
        goto L_80233A68;
    // 0x80233A44: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
L_80233A48:
    // 0x80233A48: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80233A4C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80233A50: lbu         $v1, -0x6754($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X6754);
    // 0x80233A54: sb          $v1, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r3;
    // 0x80233A58: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80233A5C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80233A60: lbu         $v0, -0x6753($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X6753);
    // 0x80233A64: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
L_80233A68:
    // 0x80233A68: lui         $v0, 0x2C80
    ctx->r2 = S32(0X2C80 << 16);
    // 0x80233A6C: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x80233A70: sw          $v0, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->r2;
    // 0x80233A74: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80233A78: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x80233A7C: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x80233A80: jal         0x8003B6B8
    // 0x80233A84: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B6B8_16AB8(rdram, ctx);
        goto after_0;
    // 0x80233A84: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
L_80233A88:
    // 0x80233A88: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x80233A8C: beql        $v0, $zero, L_80233B34
    if (ctx->r2 == 0) {
        // 0x80233A90: sb          $zero, 0x0($s0)
        MEM_B(0X0, ctx->r16) = 0;
            goto L_80233B34;
    }
    goto skip_0;
    // 0x80233A90: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    skip_0:
    // 0x80233A94: lh          $v0, 0x16($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X16);
    // 0x80233A98: bgezl       $v0, L_80233B34
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80233A9C: sb          $zero, 0x0($s0)
        MEM_B(0X0, ctx->r16) = 0;
            goto L_80233B34;
    }
    goto skip_1;
    // 0x80233A9C: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    skip_1:
    // 0x80233AA0: lhu         $v0, 0x44($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X44);
    // 0x80233AA4: lhu         $v1, 0x4C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X4C);
    // 0x80233AA8: lhu         $t0, 0x4E($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X4E);
    // 0x80233AAC: lhu         $t1, 0x50($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X50);
    // 0x80233AB0: lw          $a3, 0x1C($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X1C);
    // 0x80233AB4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80233AB8: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80233ABC: lhu         $v0, 0x46($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X46);
    // 0x80233AC0: lhu         $v1, 0x48($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X48);
    // 0x80233AC4: lh          $a2, 0x44($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X44);
    // 0x80233AC8: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x80233ACC: addu        $v1, $v1, $t1
    ctx->r3 = ADD32(ctx->r3, ctx->r9);
    // 0x80233AD0: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x80233AD4: lh          $v0, 0x46($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X46);
    // 0x80233AD8: sll         $a2, $a2, 8
    ctx->r6 = S32(ctx->r6 << 8);
    // 0x80233ADC: addu        $a3, $a3, $a2
    ctx->r7 = ADD32(ctx->r7, ctx->r6);
    // 0x80233AE0: sh          $v1, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r3;
    // 0x80233AE4: lw          $v1, 0x20($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X20);
    // 0x80233AE8: lh          $a2, 0x48($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X48);
    // 0x80233AEC: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80233AF0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80233AF4: sw          $a3, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r7;
    // 0x80233AF8: lw          $a3, 0x24($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X24);
    // 0x80233AFC: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80233B00: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80233B04: sll         $a2, $a2, 8
    ctx->r6 = S32(ctx->r6 << 8);
    // 0x80233B08: addu        $a3, $a3, $a2
    ctx->r7 = ADD32(ctx->r7, ctx->r6);
    // 0x80233B0C: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x80233B10: jal         0x8004DD04
    // 0x80233B14: sw          $a3, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r7;
    func_8004DD04_29104(rdram, ctx);
        goto after_1;
    // 0x80233B14: sw          $a3, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r7;
    after_1:
    // 0x80233B18: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x80233B1C: lhu         $v1, 0x16($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X16);
    // 0x80233B20: lhu         $a0, 0x18($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X18);
    // 0x80233B24: sh          $v0, 0x90($s0)
    MEM_H(0X90, ctx->r16) = ctx->r2;
    // 0x80233B28: sh          $v1, 0x92($s0)
    MEM_H(0X92, ctx->r16) = ctx->r3;
    // 0x80233B2C: j           L_80233B3C
    // 0x80233B30: sh          $a0, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r4;
        goto L_80233B3C;
    // 0x80233B30: sh          $a0, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r4;
L_80233B34:
    // 0x80233B34: jal         0x8004F4F8
    // 0x80233B38: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_2;
    // 0x80233B38: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
L_80233B3C:
    // 0x80233B3C: lw          $v0, 0xC0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC0);
    // 0x80233B40: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x80233B44: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80233B48: beq         $v0, $zero, L_80233B64
    if (ctx->r2 == 0) {
        // 0x80233B4C: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80233B64;
    }
    // 0x80233B4C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80233B50: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80233B54: sw          $zero, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = 0;
    // 0x80233B58: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80233B5C: j           L_80233BDC
    // 0x80233B60: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_80233BDC;
    // 0x80233B60: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80233B64:
    // 0x80233B64: lhu         $a1, 0x98($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X98);
    // 0x80233B68: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x80233B6C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80233B70: addiu       $v0, $s0, 0xC0
    ctx->r2 = ADD32(ctx->r16, 0XC0);
    // 0x80233B74: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80233B78: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x80233B7C: lb          $v1, 0xE($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XE);
    // 0x80233B80: ori         $a3, $zero, 0xA000
    ctx->r7 = 0 | 0XA000;
    // 0x80233B84: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80233B88: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80233B8C: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x80233B90: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80233B94: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80233B98: jal         0x80051E18
    // 0x80233B9C: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_3;
    // 0x80233B9C: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_3:
    // 0x80233BA0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80233BA4: jal         0x8003F754
    // 0x80233BA8: sw          $zero, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = 0;
    func_8003F754_1AB54(rdram, ctx);
        goto after_4;
    // 0x80233BA8: sw          $zero, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = 0;
    after_4:
    // 0x80233BAC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80233BB0: beq         $a0, $zero, L_80233BC4
    if (ctx->r4 == 0) {
        // 0x80233BB4: nop
    
            goto L_80233BC4;
    }
    // 0x80233BB4: nop

    // 0x80233BB8: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80233BBC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80233BC0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80233BC4:
    // 0x80233BC4: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x80233BC8: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x80233BCC: bne         $v0, $zero, L_80233BDC
    if (ctx->r2 != 0) {
        // 0x80233BD0: nop
    
            goto L_80233BDC;
    }
    // 0x80233BD0: nop

    // 0x80233BD4: jal         0x800711A8
    // 0x80233BD8: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    func_800711A8_4C5A8(rdram, ctx);
        goto after_5;
    // 0x80233BD8: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    after_5:
L_80233BDC:
    // 0x80233BDC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80233BE0: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80233BE4: jr          $ra
    // 0x80233BE8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80233BE8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80225518_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225518: jr          $ra
    // 0x8022551C: nop

    TRACE_RETURN()
    return;
    // 0x8022551C: nop

;}
RECOMP_FUNC void func_802354DC_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802354DC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x802354E0: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x802354E4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802354E8: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x802354EC: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x802354F0: lw          $v1, 0x9C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X9C);
    // 0x802354F4: lui         $v0, 0x2000
    ctx->r2 = S32(0X2000 << 16);
    // 0x802354F8: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x802354FC: beq         $v0, $zero, L_80235554
    if (ctx->r2 == 0) {
        // 0x80235500: nop
    
            goto L_80235554;
    }
    // 0x80235500: nop

    // 0x80235504: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x80235508: addiu       $s0, $s0, 0x4A06
    ctx->r16 = ADD32(ctx->r16, 0X4A06);
    // 0x8023550C: jal         0x800324B4
    // 0x80235510: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    func_800324B4_D8B4(rdram, ctx);
        goto after_0;
    // 0x80235510: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    after_0:
    // 0x80235514: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80235518: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x8023551C: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x80235520: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
    // 0x80235524: addiu       $v0, $zero, -0x1000
    ctx->r2 = ADD32(0, -0X1000);
    // 0x80235528: sh          $v0, 0x46($s1)
    MEM_H(0X46, ctx->r17) = ctx->r2;
    // 0x8023552C: jal         0x80032498
    // 0x80235530: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    func_80032498_D898(rdram, ctx);
        goto after_1;
    // 0x80235530: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    after_1:
    // 0x80235534: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80235538: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x8023553C: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x80235540: sh          $v0, 0x48($s1)
    MEM_H(0X48, ctx->r17) = ctx->r2;
    // 0x80235544: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80235548: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x8023554C: j           L_80235584
    // 0x80235550: sw          $zero, 0x9C($s1)
    MEM_W(0X9C, ctx->r17) = 0;
        goto L_80235584;
    // 0x80235550: sw          $zero, 0x9C($s1)
    MEM_W(0X9C, ctx->r17) = 0;
L_80235554:
    // 0x80235554: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80235558: beq         $v0, $zero, L_80235574
    if (ctx->r2 == 0) {
        // 0x8023555C: lui         $v0, 0x1C00
        ctx->r2 = S32(0X1C00 << 16);
            goto L_80235574;
    }
    // 0x8023555C: lui         $v0, 0x1C00
    ctx->r2 = S32(0X1C00 << 16);
    // 0x80235560: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x80235564: beq         $v0, $zero, L_80235584
    if (ctx->r2 == 0) {
        // 0x80235568: nop
    
            goto L_80235584;
    }
    // 0x80235568: nop

    // 0x8023556C: j           L_802355A0
    // 0x80235570: nop

        goto L_802355A0;
    // 0x80235570: nop

L_80235574:
    // 0x80235574: lui         $v0, 0x1A00
    ctx->r2 = S32(0X1A00 << 16);
    // 0x80235578: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x8023557C: bne         $v0, $zero, L_802355A0
    if (ctx->r2 != 0) {
        // 0x80235580: nop
    
            goto L_802355A0;
    }
    // 0x80235580: nop

L_80235584:
    // 0x80235584: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x80235588: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8023558C: bne         $v0, $zero, L_802355CC
    if (ctx->r2 != 0) {
        // 0x80235590: sw          $zero, 0x9C($s1)
        MEM_W(0X9C, ctx->r17) = 0;
            goto L_802355CC;
    }
    // 0x80235590: sw          $zero, 0x9C($s1)
    MEM_W(0X9C, ctx->r17) = 0;
    // 0x80235594: lh          $v0, 0x7C($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X7C);
    // 0x80235598: beq         $v0, $zero, L_802355D4
    if (ctx->r2 == 0) {
        // 0x8023559C: addiu       $a0, $s1, 0x34
        ctx->r4 = ADD32(ctx->r17, 0X34);
            goto L_802355D4;
    }
    // 0x8023559C: addiu       $a0, $s1, 0x34
    ctx->r4 = ADD32(ctx->r17, 0X34);
L_802355A0:
    // 0x802355A0: jal         0x8004F144
    // 0x802355A4: sw          $zero, 0x9C($s1)
    MEM_W(0X9C, ctx->r17) = 0;
    func_8004F144_2A544(rdram, ctx);
        goto after_2;
    // 0x802355A4: sw          $zero, 0x9C($s1)
    MEM_W(0X9C, ctx->r17) = 0;
    after_2:
    // 0x802355A8: beq         $v0, $zero, L_802355B8
    if (ctx->r2 == 0) {
        // 0x802355AC: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_802355B8;
    }
    // 0x802355AC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802355B0: jal         0x80235E20
    // 0x802355B4: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_80235E20_ovl13(rdram, ctx);
        goto after_3;
    // 0x802355B4: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_3:
L_802355B8:
    // 0x802355B8: sb          $zero, 0x0($s1)
    MEM_B(0X0, ctx->r17) = 0;
    // 0x802355BC: jal         0x8004F4F8
    // 0x802355C0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_4;
    // 0x802355C0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_4:
    // 0x802355C4: j           L_802356EC
    // 0x802355C8: nop

        goto L_802356EC;
    // 0x802355C8: nop

L_802355CC:
    // 0x802355CC: sh          $zero, 0x7C($s1)
    MEM_H(0X7C, ctx->r17) = 0;
    // 0x802355D0: addiu       $a0, $s1, 0x34
    ctx->r4 = ADD32(ctx->r17, 0X34);
L_802355D4:
    // 0x802355D4: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    // 0x802355D8: jal         0x8009A3B4
    // 0x802355DC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x802355DC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_5:
    // 0x802355E0: addiu       $a0, $s1, 0x2C
    ctx->r4 = ADD32(ctx->r17, 0X2C);
    // 0x802355E4: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x802355E8: jal         0x8009A3B4
    // 0x802355EC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x802355EC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_6:
    // 0x802355F0: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x802355F4: lui         $v1, 0x2C80
    ctx->r3 = S32(0X2C80 << 16);
    // 0x802355F8: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x802355FC: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x80235600: beq         $v0, $zero, L_8023563C
    if (ctx->r2 == 0) {
        // 0x80235604: sw          $v1, 0x8C($s1)
        MEM_W(0X8C, ctx->r17) = ctx->r3;
            goto L_8023563C;
    }
    // 0x80235604: sw          $v1, 0x8C($s1)
    MEM_W(0X8C, ctx->r17) = ctx->r3;
    // 0x80235608: lb          $v0, 0xF($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XF);
    // 0x8023560C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80235610: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80235614: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80235618: lhu         $v1, -0x6608($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X6608);
    // 0x8023561C: lb          $v0, 0xF($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XF);
    // 0x80235620: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80235624: sb          $v1, 0x96($s1)
    MEM_B(0X96, ctx->r17) = ctx->r3;
    // 0x80235628: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023562C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80235630: lhu         $v0, -0x6606($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X6606);
    // 0x80235634: j           L_8023566C
    // 0x80235638: sb          $v0, 0x97($s1)
    MEM_B(0X97, ctx->r17) = ctx->r2;
        goto L_8023566C;
    // 0x80235638: sb          $v0, 0x97($s1)
    MEM_B(0X97, ctx->r17) = ctx->r2;
L_8023563C:
    // 0x8023563C: lb          $v0, 0xF($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XF);
    // 0x80235640: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80235644: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80235648: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023564C: lhu         $v1, -0x6620($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X6620);
    // 0x80235650: lb          $v0, 0xF($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XF);
    // 0x80235654: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80235658: sb          $v1, 0x96($s1)
    MEM_B(0X96, ctx->r17) = ctx->r3;
    // 0x8023565C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80235660: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80235664: lhu         $v0, -0x661E($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X661E);
    // 0x80235668: sb          $v0, 0x97($s1)
    MEM_B(0X97, ctx->r17) = ctx->r2;
L_8023566C:
    // 0x8023566C: jal         0x80235D30
    // 0x80235670: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80235D30_ovl13(rdram, ctx);
        goto after_7;
    // 0x80235670: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_7:
    // 0x80235674: addiu       $a0, $s1, 0x34
    ctx->r4 = ADD32(ctx->r17, 0X34);
    // 0x80235678: jal         0x8004DD04
    // 0x8023567C: addiu       $a1, $s1, 0x2C
    ctx->r5 = ADD32(ctx->r17, 0X2C);
    func_8004DD04_29104(rdram, ctx);
        goto after_8;
    // 0x8023567C: addiu       $a1, $s1, 0x2C
    ctx->r5 = ADD32(ctx->r17, 0X2C);
    after_8:
    // 0x80235680: addiu       $a0, $s1, 0x1C
    ctx->r4 = ADD32(ctx->r17, 0X1C);
    // 0x80235684: jal         0x8004DD04
    // 0x80235688: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8004DD04_29104(rdram, ctx);
        goto after_9;
    // 0x80235688: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_9:
    // 0x8023568C: jal         0x80235B78
    // 0x80235690: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80235B78_ovl13(rdram, ctx);
        goto after_10;
    // 0x80235690: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_10:
    // 0x80235694: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80235698: beq         $v0, $zero, L_802356A8
    if (ctx->r2 == 0) {
        // 0x8023569C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_802356A8;
    }
    // 0x8023569C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802356A0: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x802356A4: sb          $zero, 0xD($s1)
    MEM_B(0XD, ctx->r17) = 0;
L_802356A8:
    // 0x802356A8: lbu         $v1, 0xC($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XC);
    // 0x802356AC: sltiu       $v0, $v1, 0x96
    ctx->r2 = ctx->r3 < 0X96 ? 1 : 0;
    // 0x802356B0: bne         $v0, $zero, L_802356C8
    if (ctx->r2 != 0) {
        // 0x802356B4: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_802356C8;
    }
    // 0x802356B4: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x802356B8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802356BC: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x802356C0: j           L_802356CC
    // 0x802356C4: sb          $zero, 0xD($s1)
    MEM_B(0XD, ctx->r17) = 0;
        goto L_802356CC;
    // 0x802356C4: sb          $zero, 0xD($s1)
    MEM_B(0XD, ctx->r17) = 0;
L_802356C8:
    // 0x802356C8: sb          $v0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r2;
L_802356CC:
    // 0x802356CC: lhu         $v0, 0x14($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X14);
    // 0x802356D0: lhu         $v1, 0x16($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X16);
    // 0x802356D4: lhu         $a0, 0x18($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X18);
    // 0x802356D8: sb          $zero, 0x76($s1)
    MEM_B(0X76, ctx->r17) = 0;
    // 0x802356DC: addiu       $v1, $v1, -0x10
    ctx->r3 = ADD32(ctx->r3, -0X10);
    // 0x802356E0: sh          $v0, 0x90($s1)
    MEM_H(0X90, ctx->r17) = ctx->r2;
    // 0x802356E4: sh          $v1, 0x92($s1)
    MEM_H(0X92, ctx->r17) = ctx->r3;
    // 0x802356E8: sh          $a0, 0x94($s1)
    MEM_H(0X94, ctx->r17) = ctx->r4;
L_802356EC:
    // 0x802356EC: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x802356F0: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x802356F4: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x802356F8: jr          $ra
    // 0x802356FC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x802356FC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8022A264_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A264: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022A268: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022A26C: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x8022A270: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022A274: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022A278: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022A27C: lw          $v0, -0x6B1C($at)
    ctx->r2 = MEM_W(ctx->r1, -0X6B1C);
    // 0x8022A280: jalr        $v0
    // 0x8022A284: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022A284: nop

    after_0:
    // 0x8022A288: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022A28C: jr          $ra
    // 0x8022A290: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022A290: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80232768_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232768: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023276C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80232770: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80232774: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80232778: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8023277C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80232780: lw          $v1, 0x454($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X454);
    // 0x80232784: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x80232788: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x8023278C: and         $s1, $v1, $v0
    ctx->r17 = ctx->r3 & ctx->r2;
    // 0x80232790: beq         $s1, $zero, L_802328DC
    if (ctx->r17 == 0) {
        // 0x80232794: addiu       $s2, $s0, 0x440
        ctx->r18 = ADD32(ctx->r16, 0X440);
            goto L_802328DC;
    }
    // 0x80232794: addiu       $s2, $s0, 0x440
    ctx->r18 = ADD32(ctx->r16, 0X440);
    // 0x80232798: lui         $v0, 0x2000
    ctx->r2 = S32(0X2000 << 16);
    // 0x8023279C: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x802327A0: bne         $v0, $zero, L_802328E0
    if (ctx->r2 != 0) {
        // 0x802327A4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802328E0;
    }
    // 0x802327A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802327A8: lui         $v0, 0x1800
    ctx->r2 = S32(0X1800 << 16);
    // 0x802327AC: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x802327B0: beq         $v0, $zero, L_802328D4
    if (ctx->r2 == 0) {
        // 0x802327B4: addiu       $a0, $zero, 0xA3
        ctx->r4 = ADD32(0, 0XA3);
            goto L_802328D4;
    }
    // 0x802327B4: addiu       $a0, $zero, 0xA3
    ctx->r4 = ADD32(0, 0XA3);
    // 0x802327B8: lhu         $v0, 0x440($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X440);
    // 0x802327BC: lhu         $a0, 0x6E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X6E);
    // 0x802327C0: lhu         $v1, 0x6E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X6E);
    // 0x802327C4: ori         $v0, $v0, 0x100
    ctx->r2 = ctx->r2 | 0X100;
    // 0x802327C8: andi        $v0, $v0, 0xBBFF
    ctx->r2 = ctx->r2 & 0XBBFF;
    // 0x802327CC: subu        $v1, $v1, $s1
    ctx->r3 = SUB32(ctx->r3, ctx->r17);
    // 0x802327D0: sh          $v1, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r3;
    // 0x802327D4: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x802327D8: sh          $v0, 0x440($s0)
    MEM_H(0X440, ctx->r16) = ctx->r2;
    // 0x802327DC: bgtz        $v1, L_80232834
    if (SIGNED(ctx->r3) > 0) {
        // 0x802327E0: sh          $a0, 0xB2($s0)
        MEM_H(0XB2, ctx->r16) = ctx->r4;
            goto L_80232834;
    }
    // 0x802327E0: sh          $a0, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r4;
    // 0x802327E4: jal         0x8006FF58
    // 0x802327E8: nop

    func_8006FF58_4B358(rdram, ctx);
        goto after_0;
    // 0x802327E8: nop

    after_0:
    // 0x802327EC: beq         $v0, $zero, L_80232830
    if (ctx->r2 == 0) {
        // 0x802327F0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80232830;
    }
    // 0x802327F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802327F4: lhu         $v1, 0x440($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X440);
    // 0x802327F8: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x802327FC: lui         $a0, 0x8019
    ctx->r4 = S32(0X8019 << 16);
    // 0x80232800: lw          $a0, 0x3C60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3C60);
    // 0x80232804: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
    // 0x80232808: andi        $v1, $v1, 0xFFF3
    ctx->r3 = ctx->r3 & 0XFFF3;
    // 0x8023280C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80232810: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80232814: sh          $v1, 0x440($s0)
    MEM_H(0X440, ctx->r16) = ctx->r3;
    // 0x80232818: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8023281C: lbu         $s1, 0x9($v0)
    ctx->r17 = MEM_BU(ctx->r2, 0X9);
    // 0x80232820: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80232824: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80232828: j           L_80232834
    // 0x8023282C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
        goto L_80232834;
    // 0x8023282C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_80232830:
    // 0x80232830: sh          $v0, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r2;
L_80232834:
    // 0x80232834: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x80232838: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x8023283C: beq         $v0, $zero, L_802328A4
    if (ctx->r2 == 0) {
        // 0x80232840: addiu       $a0, $zero, 0xA0
        ctx->r4 = ADD32(0, 0XA0);
            goto L_802328A4;
    }
    // 0x80232840: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x80232844: lhu         $v0, 0xA($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0XA);
    // 0x80232848: lw          $v1, 0x14($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X14);
    // 0x8023284C: addu        $a0, $v0, $s1
    ctx->r4 = ADD32(ctx->r2, ctx->r17);
    // 0x80232850: lui         $v0, 0x2000
    ctx->r2 = S32(0X2000 << 16);
    // 0x80232854: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x80232858: bne         $v1, $zero, L_80232890
    if (ctx->r3 != 0) {
        // 0x8023285C: sh          $a0, 0xA($s2)
        MEM_H(0XA, ctx->r18) = ctx->r4;
            goto L_80232890;
    }
    // 0x8023285C: sh          $a0, 0xA($s2)
    MEM_H(0XA, ctx->r18) = ctx->r4;
    // 0x80232860: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x80232864: lui         $v1, 0x8019
    ctx->r3 = S32(0X8019 << 16);
    // 0x80232868: lw          $v1, 0x3C60($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3C60);
    // 0x8023286C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80232870: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80232874: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80232878: lbu         $v1, 0x9($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X9);
    // 0x8023287C: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x80232880: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80232884: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80232888: bne         $v0, $zero, L_802328B0
    if (ctx->r2 != 0) {
        // 0x8023288C: addiu       $a0, $zero, 0x7FFF
        ctx->r4 = ADD32(0, 0X7FFF);
            goto L_802328B0;
    }
    // 0x8023288C: addiu       $a0, $zero, 0x7FFF
    ctx->r4 = ADD32(0, 0X7FFF);
L_80232890:
    // 0x80232890: addiu       $a0, $zero, 0xA2
    ctx->r4 = ADD32(0, 0XA2);
    // 0x80232894: jal         0x8002A33C
    // 0x80232898: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x80232898: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_1:
    // 0x8023289C: j           L_802328AC
    // 0x802328A0: sh          $zero, 0xA($s2)
    MEM_H(0XA, ctx->r18) = 0;
        goto L_802328AC;
    // 0x802328A0: sh          $zero, 0xA($s2)
    MEM_H(0XA, ctx->r18) = 0;
L_802328A4:
    // 0x802328A4: jal         0x8002A33C
    // 0x802328A8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x802328A8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_2:
L_802328AC:
    // 0x802328AC: addiu       $a0, $zero, 0x7FFF
    ctx->r4 = ADD32(0, 0X7FFF);
L_802328B0:
    // 0x802328B0: addiu       $v1, $zero, 0xE
    ctx->r3 = ADD32(0, 0XE);
    // 0x802328B4: addiu       $v0, $s0, 0x70
    ctx->r2 = ADD32(ctx->r16, 0X70);
L_802328B8:
    // 0x802328B8: sh          $a0, 0x186($v0)
    MEM_H(0X186, ctx->r2) = ctx->r4;
    // 0x802328BC: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x802328C0: bgez        $v1, L_802328B8
    if (SIGNED(ctx->r3) >= 0) {
        // 0x802328C4: addiu       $v0, $v0, -0x8
        ctx->r2 = ADD32(ctx->r2, -0X8);
            goto L_802328B8;
    }
    // 0x802328C4: addiu       $v0, $v0, -0x8
    ctx->r2 = ADD32(ctx->r2, -0X8);
    // 0x802328C8: lhu         $v0, 0x6E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6E);
    // 0x802328CC: j           L_802328DC
    // 0x802328D0: sh          $v0, 0xF8($s2)
    MEM_H(0XF8, ctx->r18) = ctx->r2;
        goto L_802328DC;
    // 0x802328D0: sh          $v0, 0xF8($s2)
    MEM_H(0XF8, ctx->r18) = ctx->r2;
L_802328D4:
    // 0x802328D4: jal         0x8002A33C
    // 0x802328D8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_3;
    // 0x802328D8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_3:
L_802328DC:
    // 0x802328DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802328E0:
    // 0x802328E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802328E4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x802328E8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802328EC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802328F0: jr          $ra
    // 0x802328F4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802328F4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022B758_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B758: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    // 0x8022B75C: addiu       $v0, $zero, 0x39
    ctx->r2 = ADD32(0, 0X39);
    // 0x8022B760: beq         $a0, $v0, L_8022B784
    if (ctx->r4 == ctx->r2) {
        // 0x8022B764: slti        $v0, $a0, 0x39
        ctx->r2 = SIGNED(ctx->r4) < 0X39 ? 1 : 0;
            goto L_8022B784;
    }
    // 0x8022B764: slti        $v0, $a0, 0x39
    ctx->r2 = SIGNED(ctx->r4) < 0X39 ? 1 : 0;
    // 0x8022B768: bne         $v0, $zero, L_8022B790
    if (ctx->r2 != 0) {
        // 0x8022B76C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022B790;
    }
    // 0x8022B76C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B770: slti        $v0, $a0, 0x4E
    ctx->r2 = SIGNED(ctx->r4) < 0X4E ? 1 : 0;
    // 0x8022B774: beq         $v0, $zero, L_8022B78C
    if (ctx->r2 == 0) {
        // 0x8022B778: slti        $v0, $a0, 0x4C
        ctx->r2 = SIGNED(ctx->r4) < 0X4C ? 1 : 0;
            goto L_8022B78C;
    }
    // 0x8022B778: slti        $v0, $a0, 0x4C
    ctx->r2 = SIGNED(ctx->r4) < 0X4C ? 1 : 0;
    // 0x8022B77C: bne         $v0, $zero, L_8022B790
    if (ctx->r2 != 0) {
        // 0x8022B780: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022B790;
    }
    // 0x8022B780: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022B784:
    // 0x8022B784: j           L_8022B790
    // 0x8022B788: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_8022B790;
    // 0x8022B788: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8022B78C:
    // 0x8022B78C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022B790:
    // 0x8022B790: jr          $ra
    // 0x8022B794: nop

    TRACE_RETURN()
    return;
    // 0x8022B794: nop

;}
RECOMP_FUNC void func_8022970C_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022970C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80229710: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80229714: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80229718: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8022971C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80229720: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80229724: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229728: lbu         $s0, 0xD($s1)
    ctx->r16 = MEM_BU(ctx->r17, 0XD);
    // 0x8022972C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80229730: addiu       $v0, $v0, -0x6BE8
    ctx->r2 = ADD32(ctx->r2, -0X6BE8);
    // 0x80229734: andi        $s0, $s0, 0x30
    ctx->r16 = ctx->r16 & 0X30;
    // 0x80229738: jal         0x800A3450
    // 0x8022973C: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8022973C: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    after_0:
    // 0x80229740: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80229744: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x80229748: lbu         $s3, 0x0($s0)
    ctx->r19 = MEM_BU(ctx->r16, 0X0);
    // 0x8022974C: lui         $s0, 0x8024
    ctx->r16 = S32(0X8024 << 16);
    // 0x80229750: addiu       $s0, $s0, -0x6BA8
    ctx->r16 = ADD32(ctx->r16, -0X6BA8);
    // 0x80229754: andi        $v1, $s3, 0xFF
    ctx->r3 = ctx->r19 & 0XFF;
    // 0x80229758: beq         $v1, $zero, L_80229774
    if (ctx->r3 == 0) {
        // 0x8022975C: addiu       $s2, $s1, 0x348
        ctx->r18 = ADD32(ctx->r17, 0X348);
            goto L_80229774;
    }
    // 0x8022975C: addiu       $s2, $s1, 0x348
    ctx->r18 = ADD32(ctx->r17, 0X348);
    // 0x80229760: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229764: beq         $v1, $v0, L_80229794
    if (ctx->r3 == ctx->r2) {
        // 0x80229768: nop
    
            goto L_80229794;
    }
    // 0x80229768: nop

    // 0x8022976C: j           L_802297A8
    // 0x80229770: nop

        goto L_802297A8;
    // 0x80229770: nop

L_80229774:
    // 0x80229774: jal         0x8022B758
    // 0x80229778: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    func_8022B758_ovl13(rdram, ctx);
        goto after_1;
    // 0x80229778: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    after_1:
    // 0x8022977C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80229780: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80229784: jal         0x8022B798
    // 0x80229788: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    func_8022B798_ovl13(rdram, ctx);
        goto after_2;
    // 0x80229788: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    after_2:
    // 0x8022978C: j           L_80229800
    // 0x80229790: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
        goto L_80229800;
    // 0x80229790: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
L_80229794:
    // 0x80229794: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    // 0x80229798: jal         0x8022B748
    // 0x8022979C: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    func_8022B748_ovl13(rdram, ctx);
        goto after_3;
    // 0x8022979C: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    after_3:
    // 0x802297A0: j           L_80229800
    // 0x802297A4: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
        goto L_80229800;
    // 0x802297A4: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
L_802297A8:
    // 0x802297A8: lh          $v1, 0x16($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X16);
    // 0x802297AC: lh          $v0, 0x1E($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X1E);
    // 0x802297B0: bne         $v1, $v0, L_802297C0
    if (ctx->r3 != ctx->r2) {
        // 0x802297B4: nop
    
            goto L_802297C0;
    }
    // 0x802297B4: nop

    // 0x802297B8: j           L_80229800
    // 0x802297BC: addiu       $s3, $zero, 0xFF
    ctx->r19 = ADD32(0, 0XFF);
        goto L_80229800;
    // 0x802297BC: addiu       $s3, $zero, 0xFF
    ctx->r19 = ADD32(0, 0XFF);
L_802297C0:
    // 0x802297C0: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    // 0x802297C4: jal         0x8022B758
    // 0x802297C8: nop

    func_8022B758_ovl13(rdram, ctx);
        goto after_4;
    // 0x802297C8: nop

    after_4:
    // 0x802297CC: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x802297D0: lh          $v0, 0x14($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X14);
    // 0x802297D4: beq         $v0, $zero, L_802297E8
    if (ctx->r2 == 0) {
        // 0x802297D8: nop
    
            goto L_802297E8;
    }
    // 0x802297D8: nop

    // 0x802297DC: lhu         $v0, 0xA($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0XA);
    // 0x802297E0: j           L_802297F8
    // 0x802297E4: sh          $v0, 0x64($s1)
    MEM_H(0X64, ctx->r17) = ctx->r2;
        goto L_802297F8;
    // 0x802297E4: sh          $v0, 0x64($s1)
    MEM_H(0X64, ctx->r17) = ctx->r2;
L_802297E8:
    // 0x802297E8: lhu         $v0, 0xA($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0XA);
    // 0x802297EC: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x802297F0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x802297F4: sh          $v0, 0x64($s1)
    MEM_H(0X64, ctx->r17) = ctx->r2;
L_802297F8:
    // 0x802297F8: lui         $s0, 0x8024
    ctx->r16 = S32(0X8024 << 16);
    // 0x802297FC: addiu       $s0, $s0, -0x6B88
    ctx->r16 = ADD32(ctx->r16, -0X6B88);
L_80229800:
    // 0x80229800: jal         0x800A3450
    // 0x80229804: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_5;
    // 0x80229804: nop

    after_5:
    // 0x80229808: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022980C: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x80229810: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80229814: andi        $v1, $s3, 0xFF
    ctx->r3 = ctx->r19 & 0XFF;
    // 0x80229818: sh          $v0, 0x8($s2)
    MEM_H(0X8, ctx->r18) = ctx->r2;
    // 0x8022981C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80229820: beq         $v1, $v0, L_80229838
    if (ctx->r3 == ctx->r2) {
        // 0x80229824: nop
    
            goto L_80229838;
    }
    // 0x80229824: nop

    // 0x80229828: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x8022982C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80229830: addu        $v0, $s3, $v0
    ctx->r2 = ADD32(ctx->r19, ctx->r2);
    // 0x80229834: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_80229838:
    // 0x80229838: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022983C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80229840: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80229844: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80229848: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022984C: jr          $ra
    // 0x80229850: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80229850: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022A824_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A824: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022A828: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A82C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A830: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8022A834: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022A838: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022A83C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022A840: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022A844: lbu         $v0, 0x34B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X34B);
    // 0x8022A848: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022A84C: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022A850: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022A854: sb          $v0, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r2;
    // 0x8022A858: sh          $v1, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r3;
    // 0x8022A85C: jal         0x8022B748
    // 0x8022A860: sb          $a1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r5;
    func_8022B748_ovl13(rdram, ctx);
        goto after_0;
    // 0x8022A860: sb          $a1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r5;
    after_0:
    // 0x8022A864: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x8022A868: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022A86C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022A870: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x8022A874: addiu       $s2, $s2, 0x49C4
    ctx->r18 = ADD32(ctx->r18, 0X49C4);
    // 0x8022A878: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022A87C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x8022A880: jal         0x8004F820
    // 0x8022A884: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x8022A884: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022A888: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A88C: bgez        $v0, L_8022A8BC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022A890: addiu       $s3, $s0, 0x348
        ctx->r19 = ADD32(ctx->r16, 0X348);
            goto L_8022A8BC;
    }
    // 0x8022A890: addiu       $s3, $s0, 0x348
    ctx->r19 = ADD32(ctx->r16, 0X348);
    // 0x8022A894: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022A898: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022A89C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022A8A0: jal         0x8004F820
    // 0x8022A8A4: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x8022A8A4: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_2:
    // 0x8022A8A8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A8AC: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022A8B0: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8022A8B4: j           L_8022A8D8
    // 0x8022A8B8: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
        goto L_8022A8D8;
    // 0x8022A8B8: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
L_8022A8BC:
    // 0x8022A8BC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022A8C0: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022A8C4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022A8C8: jal         0x8004F820
    // 0x8022A8CC: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x8022A8CC: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_3:
    // 0x8022A8D0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A8D4: sra         $v0, $v0, 19
    ctx->r2 = S32(SIGNED(ctx->r2) >> 19);
L_8022A8D8:
    // 0x8022A8D8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022A8DC: sh          $v0, 0x6($s3)
    MEM_H(0X6, ctx->r19) = ctx->r2;
    // 0x8022A8E0: lbu         $a3, 0xC($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XC);
    // 0x8022A8E4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022A8E8: jal         0x800610AC
    // 0x8022A8EC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_4;
    // 0x8022A8EC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
    // 0x8022A8F0: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022A8F4: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022A8F8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022A8FC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022A900: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A904: jr          $ra
    // 0x8022A908: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022A908: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80225EC0_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225EC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225EC4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80225EC8: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x80225ECC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80225ED0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80225ED4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80225ED8: lw          $v0, -0x76F0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X76F0);
    // 0x80225EDC: jalr        $v0
    // 0x80225EE0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80225EE0: nop

    after_0:
    // 0x80225EE4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80225EE8: jr          $ra
    // 0x80225EEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225EEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802283B0_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802283B0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802283B4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802283B8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802283BC: lbu         $v1, 0x9($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X9);
    // 0x802283C0: sltiu       $v0, $v1, 0xA
    ctx->r2 = ctx->r3 < 0XA ? 1 : 0;
    // 0x802283C4: beq         $v0, $zero, L_80228580
    if (ctx->r2 == 0) {
        // 0x802283C8: addu        $s0, $a2, $zero
        ctx->r16 = ADD32(ctx->r6, 0);
            goto L_80228580;
    }
    // 0x802283C8: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    // 0x802283CC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x802283D0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802283D4: addu        $at, $at, $v0
    gpr jr_addend_802283DC = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802283D8: lw          $v0, -0x64B0($at)
    ctx->r2 = ADD32(ctx->r1, -0X64B0);
    // 0x802283DC: jr          $v0
    // 0x802283E0: nop

    switch (jr_addend_802283DC >> 2) {
        case 0: goto L_802283E4; break;
        case 1: goto L_802283FC; break;
        case 2: goto L_80228418; break;
        case 3: goto L_80228430; break;
        case 4: goto L_80228448; break;
        case 5: goto L_80228478; break;
        case 6: goto L_80228490; break;
        case 7: goto L_802284E0; break;
        case 8: goto L_802284F8; break;
        case 9: goto L_80228548; break;
        default: switch_error(__func__, 0x802283DC, 0x80239B50);
    }
    // 0x802283E0: nop

L_802283E4:
    // 0x802283E4: sh          $zero, 0x0($s0)
    MEM_H(0X0, ctx->r16) = 0;
    // 0x802283E8: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x802283EC: addiu       $v1, $zero, 0x9
    ctx->r3 = ADD32(0, 0X9);
    // 0x802283F0: sb          $v1, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r3;
    // 0x802283F4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802283F8: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
L_802283FC:
    // 0x802283FC: lh          $v0, 0x0($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X0);
    // 0x80228400: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80228404: slti        $v0, $v0, 0xC
    ctx->r2 = SIGNED(ctx->r2) < 0XC ? 1 : 0;
    // 0x80228408: beq         $v0, $zero, L_802284BC
    if (ctx->r2 == 0) {
        // 0x8022840C: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_802284BC;
    }
    // 0x8022840C: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x80228410: j           L_802284C8
    // 0x80228414: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
        goto L_802284C8;
    // 0x80228414: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
L_80228418:
    // 0x80228418: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8022841C: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x80228420: sh          $zero, 0x0($s0)
    MEM_H(0X0, ctx->r16) = 0;
    // 0x80228424: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x80228428: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022842C: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
L_80228430:
    // 0x80228430: lh          $v0, 0x0($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X0);
    // 0x80228434: slti        $v0, $v0, 0x8
    ctx->r2 = SIGNED(ctx->r2) < 0X8 ? 1 : 0;
    // 0x80228438: bne         $v0, $zero, L_8022851C
    if (ctx->r2 != 0) {
        // 0x8022843C: addiu       $a1, $zero, 0x30
        ctx->r5 = ADD32(0, 0X30);
            goto L_8022851C;
    }
    // 0x8022843C: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x80228440: j           L_80228538
    // 0x80228444: nop

        goto L_80228538;
    // 0x80228444: nop

L_80228448:
    // 0x80228448: lb          $v1, 0xA7($a0)
    ctx->r3 = MEM_B(ctx->r4, 0XA7);
    // 0x8022844C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80228450: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x80228454: addiu       $v0, $zero, -0x34
    ctx->r2 = ADD32(0, -0X34);
    // 0x80228458: sh          $v0, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r2;
    // 0x8022845C: lui         $v0, 0xFFCC
    ctx->r2 = S32(0XFFCC << 16);
    // 0x80228460: sw          $v0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r2;
    // 0x80228464: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80228468: beq         $v1, $v0, L_80228538
    if (ctx->r3 == ctx->r2) {
        // 0x8022846C: nop
    
            goto L_80228538;
    }
    // 0x8022846C: nop

    // 0x80228470: j           L_80228580
    // 0x80228474: nop

        goto L_80228580;
    // 0x80228474: nop

L_80228478:
    // 0x80228478: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8022847C: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x80228480: sh          $zero, 0x0($s0)
    MEM_H(0X0, ctx->r16) = 0;
    // 0x80228484: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x80228488: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022848C: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
L_80228490:
    // 0x80228490: lh          $v0, 0x0($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X0);
    // 0x80228494: slti        $v0, $v0, 0x18
    ctx->r2 = SIGNED(ctx->r2) < 0X18 ? 1 : 0;
    // 0x80228498: beq         $v0, $zero, L_802284BC
    if (ctx->r2 == 0) {
        // 0x8022849C: nop
    
            goto L_802284BC;
    }
    // 0x8022849C: nop

    // 0x802284A0: lhu         $v0, 0x56($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X56);
    // 0x802284A4: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x802284A8: sh          $v0, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r2;
    // 0x802284AC: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x802284B0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802284B4: j           L_802284C8
    // 0x802284B8: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
        goto L_802284C8;
    // 0x802284B8: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
L_802284BC:
    // 0x802284BC: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x802284C0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802284C4: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
L_802284C8:
    // 0x802284C8: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x802284CC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802284D0: jal         0x8004DA90
    // 0x802284D4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x802284D4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x802284D8: j           L_80228580
    // 0x802284DC: nop

        goto L_80228580;
    // 0x802284DC: nop

L_802284E0:
    // 0x802284E0: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x802284E4: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x802284E8: sh          $zero, 0x0($s0)
    MEM_H(0X0, ctx->r16) = 0;
    // 0x802284EC: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x802284F0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802284F4: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
L_802284F8:
    // 0x802284F8: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
    // 0x802284FC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80228500: bne         $v1, $v0, L_8022850C
    if (ctx->r3 != ctx->r2) {
        // 0x80228504: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022850C;
    }
    // 0x80228504: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228508: sh          $v0, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r2;
L_8022850C:
    // 0x8022850C: lh          $v0, 0x0($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X0);
    // 0x80228510: slti        $v0, $v0, 0xD
    ctx->r2 = SIGNED(ctx->r2) < 0XD ? 1 : 0;
    // 0x80228514: beq         $v0, $zero, L_80228538
    if (ctx->r2 == 0) {
        // 0x80228518: addiu       $a1, $zero, 0x30
        ctx->r5 = ADD32(0, 0X30);
            goto L_80228538;
    }
    // 0x80228518: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
L_8022851C:
    // 0x8022851C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x80228520: jal         0x8004DA90
    // 0x80228524: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x80228524: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x80228528: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x8022852C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228530: j           L_80228580
    // 0x80228534: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
        goto L_80228580;
    // 0x80228534: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
L_80228538:
    // 0x80228538: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x8022853C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228540: j           L_80228580
    // 0x80228544: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
        goto L_80228580;
    // 0x80228544: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
L_80228548:
    // 0x80228548: lb          $v1, 0xA7($a0)
    ctx->r3 = MEM_B(ctx->r4, 0XA7);
    // 0x8022854C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80228550: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x80228554: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80228558: sh          $v0, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r2;
    // 0x8022855C: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x80228560: sw          $v0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r2;
    // 0x80228564: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80228568: bne         $v1, $v0, L_80228580
    if (ctx->r3 != ctx->r2) {
        // 0x8022856C: nop
    
            goto L_80228580;
    }
    // 0x8022856C: nop

    // 0x80228570: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80228574: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
    // 0x80228578: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022857C: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
L_80228580:
    // 0x80228580: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80228584: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80228588: jr          $ra
    // 0x8022858C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022858C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80234FAC_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234FAC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80234FB0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80234FB4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80234FB8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80234FBC: lh          $v0, 0x44($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X44);
    // 0x80234FC0: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x80234FC4: lh          $a0, 0x46($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X46);
    // 0x80234FC8: lw          $a1, 0x20($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X20);
    // 0x80234FCC: lhu         $a2, 0x50($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X50);
    // 0x80234FD0: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80234FD4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80234FD8: lh          $v0, 0x48($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X48);
    // 0x80234FDC: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x80234FE0: addu        $a1, $a1, $a0
    ctx->r5 = ADD32(ctx->r5, ctx->r4);
    // 0x80234FE4: sw          $v1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r3;
    // 0x80234FE8: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x80234FEC: lhu         $a0, 0x46($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X46);
    // 0x80234FF0: sw          $a1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r5;
    // 0x80234FF4: lhu         $a1, 0x4E($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X4E);
    // 0x80234FF8: lhu         $a3, 0x1C($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0X1C);
    // 0x80234FFC: lhu         $t0, 0x20($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X20);
    // 0x80235000: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80235004: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80235008: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    // 0x8023500C: sw          $v1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r3;
    // 0x80235010: lhu         $t1, 0x24($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X24);
    // 0x80235014: lhu         $v0, 0x44($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X44);
    // 0x80235018: lhu         $a1, 0x4C($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X4C);
    // 0x8023501C: lhu         $v1, 0x48($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X48);
    // 0x80235020: sh          $a0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r4;
    // 0x80235024: lh          $a0, 0x46($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X46);
    // 0x80235028: sh          $a3, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r7;
    // 0x8023502C: sh          $a3, 0xAC($s0)
    MEM_H(0XAC, ctx->r16) = ctx->r7;
    // 0x80235030: sh          $t0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r8;
    // 0x80235034: sh          $t0, 0xAE($s0)
    MEM_H(0XAE, ctx->r16) = ctx->r8;
    // 0x80235038: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x8023503C: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x80235040: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80235044: addiu       $v0, $zero, 0x3200
    ctx->r2 = ADD32(0, 0X3200);
    // 0x80235048: slt         $a0, $v0, $a0
    ctx->r4 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8023504C: sh          $v1, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r3;
    // 0x80235050: sh          $t1, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r9;
    // 0x80235054: beq         $a0, $zero, L_80235060
    if (ctx->r4 == 0) {
        // 0x80235058: sh          $t1, 0xB0($s0)
        MEM_H(0XB0, ctx->r16) = ctx->r9;
            goto L_80235060;
    }
    // 0x80235058: sh          $t1, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r9;
    // 0x8023505C: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
L_80235060:
    // 0x80235060: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x80235064: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80235068: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x8023506C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80235070: bne         $v0, $zero, L_80235090
    if (ctx->r2 != 0) {
        // 0x80235074: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80235090;
    }
    // 0x80235074: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80235078: jal         0x802351A8
    // 0x8023507C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802351A8_ovl13(rdram, ctx);
        goto after_0;
    // 0x8023507C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80235080: jal         0x8004F4F8
    // 0x80235084: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_1;
    // 0x80235084: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80235088: j           L_8023509C
    // 0x8023508C: nop

        goto L_8023509C;
    // 0x8023508C: nop

L_80235090:
    // 0x80235090: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80235094: jal         0x800472C0
    // 0x80235098: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800472C0_226C0(rdram, ctx);
        goto after_2;
    // 0x80235098: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
L_8023509C:
    // 0x8023509C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802350A0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802350A4: jr          $ra
    // 0x802350A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802350A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802341C8_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802341C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802341CC: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x802341D0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802341D4: lw          $a0, 0xD0($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XD0);
    // 0x802341D8: sltiu       $v0, $a0, 0x4
    ctx->r2 = ctx->r4 < 0X4 ? 1 : 0;
    // 0x802341DC: beq         $v0, $zero, L_80234228
    if (ctx->r2 == 0) {
        // 0x802341E0: sll         $v0, $a0, 4
        ctx->r2 = S32(ctx->r4 << 4);
            goto L_80234228;
    }
    // 0x802341E0: sll         $v0, $a0, 4
    ctx->r2 = S32(ctx->r4 << 4);
    // 0x802341E4: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x802341E8: subu        $a1, $a1, $v0
    ctx->r5 = SUB32(ctx->r5, ctx->r2);
    // 0x802341EC: sll         $v1, $a0, 3
    ctx->r3 = S32(ctx->r4 << 3);
    // 0x802341F0: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x802341F4: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x802341F8: addiu       $v0, $zero, 0xE0
    ctx->r2 = ADD32(0, 0XE0);
    // 0x802341FC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80234200: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x80234204: sll         $a0, $a1, 16
    ctx->r4 = S32(ctx->r5 << 16);
    // 0x80234208: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8023420C: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80234210: lui         $v1, 0x2E00
    ctx->r3 = S32(0X2E00 << 16);
    // 0x80234214: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80234218: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x8023421C: or          $a0, $a0, $a1
    ctx->r4 = ctx->r4 | ctx->r5;
    // 0x80234220: j           L_8023423C
    // 0x80234224: sw          $a0, 0x8C($a2)
    MEM_W(0X8C, ctx->r6) = ctx->r4;
        goto L_8023423C;
    // 0x80234224: sw          $a0, 0x8C($a2)
    MEM_W(0X8C, ctx->r6) = ctx->r4;
L_80234228:
    // 0x80234228: lbu         $v0, 0x0($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X0);
    // 0x8023422C: lui         $v1, 0x2E00
    ctx->r3 = S32(0X2E00 << 16);
    // 0x80234230: sw          $v1, 0x8C($a2)
    MEM_W(0X8C, ctx->r6) = ctx->r3;
    // 0x80234234: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x80234238: sb          $v0, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r2;
L_8023423C:
    // 0x8023423C: lw          $v0, 0xD0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0XD0);
    // 0x80234240: lbu         $v1, 0xB($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0XB);
    // 0x80234244: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80234248: bne         $v1, $zero, L_80234260
    if (ctx->r3 != 0) {
        // 0x8023424C: sw          $v0, 0xD0($a2)
        MEM_W(0XD0, ctx->r6) = ctx->r2;
            goto L_80234260;
    }
    // 0x8023424C: sw          $v0, 0xD0($a2)
    MEM_W(0XD0, ctx->r6) = ctx->r2;
    // 0x80234250: jal         0x8004F4F8
    // 0x80234254: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_0;
    // 0x80234254: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
    after_0:
    // 0x80234258: j           L_80234268
    // 0x8023425C: nop

        goto L_80234268;
    // 0x8023425C: nop

L_80234260:
    // 0x80234260: jal         0x802346C0
    // 0x80234264: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
    func_802346C0_ovl13(rdram, ctx);
        goto after_1;
    // 0x80234264: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
    after_1:
L_80234268:
    // 0x80234268: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8023426C: jr          $ra
    // 0x80234270: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80234270: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80232CA0_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232CA0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80232CA4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80232CA8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80232CAC: addiu       $a0, $s1, 0x2C
    ctx->r4 = ADD32(ctx->r17, 0X2C);
    // 0x80232CB0: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x80232CB4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80232CB8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80232CBC: jal         0x8009A3B4
    // 0x80232CC0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80232CC0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x80232CC4: addiu       $a0, $s1, 0x34
    ctx->r4 = ADD32(ctx->r17, 0X34);
    // 0x80232CC8: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    // 0x80232CCC: jal         0x8009A3B4
    // 0x80232CD0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80232CD0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80232CD4: addiu       $a0, $s1, 0x5C
    ctx->r4 = ADD32(ctx->r17, 0X5C);
    // 0x80232CD8: addiu       $a1, $s1, 0x54
    ctx->r5 = ADD32(ctx->r17, 0X54);
    // 0x80232CDC: jal         0x8009A3B4
    // 0x80232CE0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80232CE0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80232CE4: lbu         $v1, 0xAC($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XAC);
    // 0x80232CE8: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x80232CEC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80232CF0: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x80232CF4: addiu       $a1, $a1, -0x3A50
    ctx->r5 = ADD32(ctx->r5, -0X3A50);
    // 0x80232CF8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80232CFC: sb          $v1, 0xAD($s1)
    MEM_B(0XAD, ctx->r17) = ctx->r3;
    // 0x80232D00: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80232D04: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80232D08: lw          $v0, -0x6890($at)
    ctx->r2 = MEM_W(ctx->r1, -0X6890);
    // 0x80232D0C: addiu       $s0, $s1, 0x480
    ctx->r16 = ADD32(ctx->r17, 0X480);
    // 0x80232D10: jalr        $v0
    // 0x80232D14: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x80232D14: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80232D18: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80232D1C: jal         0x80233578
    // 0x80232D20: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80233578_ovl13(rdram, ctx);
        goto after_4;
    // 0x80232D20: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80232D24: lbu         $a1, 0xAC($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0XAC);
    // 0x80232D28: lbu         $v0, 0xAD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XAD);
    // 0x80232D2C: beq         $a1, $v0, L_80232D44
    if (ctx->r5 == ctx->r2) {
        // 0x80232D30: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80232D44;
    }
    // 0x80232D30: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80232D34: jal         0x80050294
    // 0x80232D38: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_5;
    // 0x80232D38: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
    // 0x80232D3C: j           L_80232D4C
    // 0x80232D40: nop

        goto L_80232D4C;
    // 0x80232D40: nop

L_80232D44:
    // 0x80232D44: jal         0x8005044C
    // 0x80232D48: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_6;
    // 0x80232D48: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_6:
L_80232D4C:
    // 0x80232D4C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80232D50: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80232D54: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80232D58: jr          $ra
    // 0x80232D5C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80232D5C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80236EE0_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236EE0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80236EE4: addu        $t0, $a0, $zero
    ctx->r8 = ADD32(ctx->r4, 0);
    // 0x80236EE8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80236EEC: lbu         $v0, 0x8($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0X8);
    // 0x80236EF0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80236EF4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80236EF8: addu        $at, $at, $v0
    gpr jr_addend_80236F00 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80236EFC: lw          $v0, -0x6590($at)
    ctx->r2 = ADD32(ctx->r1, -0X6590);
    // 0x80236F00: jr          $v0
    // 0x80236F04: nop

    switch (jr_addend_80236F00 >> 2) {
        case 0: goto L_80236F08; break;
        case 1: goto L_80236F20; break;
        case 2: goto L_80236FA4; break;
        default: switch_error(__func__, 0x80236F00, 0x80239A70);
    }
    // 0x80236F04: nop

L_80236F08:
    // 0x80236F08: lbu         $v1, 0x8($t0)
    ctx->r3 = MEM_BU(ctx->r8, 0X8);
    // 0x80236F0C: lbu         $v0, 0x0($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0X0);
    // 0x80236F10: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80236F14: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80236F18: sb          $v0, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r2;
    // 0x80236F1C: sb          $v1, 0x8($t0)
    MEM_B(0X8, ctx->r8) = ctx->r3;
L_80236F20:
    // 0x80236F20: lbu         $v0, 0xD($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0XD);
    // 0x80236F24: lw          $v1, 0x2C($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X2C);
    // 0x80236F28: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80236F2C: sb          $v0, 0xD($t0)
    MEM_B(0XD, ctx->r8) = ctx->r2;
    // 0x80236F30: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80236F34: beq         $v0, $zero, L_80236F48
    if (ctx->r2 == 0) {
        // 0x80236F38: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80236F48;
    }
    // 0x80236F38: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80236F3C: lbu         $v1, 0x8($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X8);
    // 0x80236F40: bne         $v1, $v0, L_80236F58
    if (ctx->r3 != ctx->r2) {
        // 0x80236F44: nop
    
            goto L_80236F58;
    }
    // 0x80236F44: nop

L_80236F48:
    // 0x80236F48: lbu         $v0, 0x8($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0X8);
    // 0x80236F4C: sb          $zero, 0xD($t0)
    MEM_B(0XD, ctx->r8) = 0;
    // 0x80236F50: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80236F54: sb          $v0, 0x8($t0)
    MEM_B(0X8, ctx->r8) = ctx->r2;
L_80236F58:
    // 0x80236F58: lbu         $a2, 0xF($t0)
    ctx->r6 = MEM_BU(ctx->r8, 0XF);
    // 0x80236F5C: lb          $v1, 0xD($t0)
    ctx->r3 = MEM_B(ctx->r8, 0XD);
    // 0x80236F60: lhu         $a0, 0x24($t0)
    ctx->r4 = MEM_HU(ctx->r8, 0X24);
    // 0x80236F64: lw          $a3, 0x28($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X28);
    // 0x80236F68: lhu         $a1, 0x1E($t0)
    ctx->r5 = MEM_HU(ctx->r8, 0X1E);
    // 0x80236F6C: sll         $a2, $a2, 24
    ctx->r6 = S32(ctx->r6 << 24);
    // 0x80236F70: sra         $a2, $a2, 24
    ctx->r6 = S32(SIGNED(ctx->r6) >> 24);
    // 0x80236F74: sll         $v0, $v1, 8
    ctx->r2 = S32(ctx->r3 << 8);
    // 0x80236F78: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x80236F7C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80236F80: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80236F84: lui         $v1, 0x2E00
    ctx->r3 = S32(0X2E00 << 16);
    // 0x80236F88: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80236F8C: addu        $a0, $a0, $a2
    ctx->r4 = ADD32(ctx->r4, ctx->r6);
    // 0x80236F90: addu        $a1, $a1, $a3
    ctx->r5 = ADD32(ctx->r5, ctx->r7);
    // 0x80236F94: sw          $v0, 0x18($t0)
    MEM_W(0X18, ctx->r8) = ctx->r2;
    // 0x80236F98: sh          $a0, 0x24($t0)
    MEM_H(0X24, ctx->r8) = ctx->r4;
    // 0x80236F9C: j           L_80236FAC
    // 0x80236FA0: sh          $a1, 0x1E($t0)
    MEM_H(0X1E, ctx->r8) = ctx->r5;
        goto L_80236FAC;
    // 0x80236FA0: sh          $a1, 0x1E($t0)
    MEM_H(0X1E, ctx->r8) = ctx->r5;
L_80236FA4:
    // 0x80236FA4: jal         0x8004F5C4
    // 0x80236FA8: addu        $a0, $t0, $zero
    ctx->r4 = ADD32(ctx->r8, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x80236FA8: addu        $a0, $t0, $zero
    ctx->r4 = ADD32(ctx->r8, 0);
    after_0:
L_80236FAC:
    // 0x80236FAC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80236FB0: jr          $ra
    // 0x80236FB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80236FB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225968_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225968: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022596C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225970: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225974: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225978: lbu         $a0, 0x5($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X5);
    // 0x8022597C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225980: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x80225984: beq         $v1, $v0, L_80225AA4
    if (ctx->r3 == ctx->r2) {
        // 0x80225988: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80225AA4;
    }
    // 0x80225988: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022598C: beql        $v0, $zero, L_802259A4
    if (ctx->r2 == 0) {
        // 0x80225990: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802259A4;
    }
    goto skip_0;
    // 0x80225990: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80225994: beq         $v1, $zero, L_802259BC
    if (ctx->r3 == 0) {
        // 0x80225998: nop
    
            goto L_802259BC;
    }
    // 0x80225998: nop

    // 0x8022599C: j           L_80225B5C
    // 0x802259A0: nop

        goto L_80225B5C;
    // 0x802259A0: nop

L_802259A4:
    // 0x802259A4: beq         $v1, $v0, L_80225B10
    if (ctx->r3 == ctx->r2) {
        // 0x802259A8: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80225B10;
    }
    // 0x802259A8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802259AC: beq         $v1, $v0, L_80225B30
    if (ctx->r3 == ctx->r2) {
        // 0x802259B0: nop
    
            goto L_80225B30;
    }
    // 0x802259B0: nop

    // 0x802259B4: j           L_80225B5C
    // 0x802259B8: nop

        goto L_80225B5C;
    // 0x802259B8: nop

L_802259BC:
    // 0x802259BC: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802259C0: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x802259C4: beq         $v0, $zero, L_802259F0
    if (ctx->r2 == 0) {
        // 0x802259C8: nop
    
            goto L_802259F0;
    }
    // 0x802259C8: nop

    // 0x802259CC: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x802259D0: bne         $v0, $zero, L_802259F0
    if (ctx->r2 != 0) {
        // 0x802259D4: nop
    
            goto L_802259F0;
    }
    // 0x802259D4: nop

    // 0x802259D8: jal         0x8004F488
    // 0x802259DC: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
    func_8004F488_2A888(rdram, ctx);
        goto after_0;
    // 0x802259DC: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
    after_0:
    // 0x802259E0: jal         0x8004F418
    // 0x802259E4: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    func_8004F418_2A818(rdram, ctx);
        goto after_1;
    // 0x802259E4: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    after_1:
    // 0x802259E8: jal         0x8004F418
    // 0x802259EC: lw          $a0, 0x30($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X30);
    func_8004F418_2A818(rdram, ctx);
        goto after_2;
    // 0x802259EC: lw          $a0, 0x30($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X30);
    after_2:
L_802259F0:
    // 0x802259F0: jal         0x80054578
    // 0x802259F4: nop

    func_80054578_2F978(rdram, ctx);
        goto after_3;
    // 0x802259F4: nop

    after_3:
    // 0x802259F8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802259FC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80225A00: jal         0x80036B00
    // 0x80225A04: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80036B00_11F00(rdram, ctx);
        goto after_4;
    // 0x80225A04: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
    // 0x80225A08: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80225A0C: lbu         $v1, 0x4A6D($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X4A6D);
    // 0x80225A10: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80225A14: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225A18: sb          $v0, 0x49B8($at)
    MEM_B(0X49B8, ctx->r1) = ctx->r2;
    // 0x80225A1C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225A20: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225A24: sb          $v0, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = ctx->r2;
    // 0x80225A28: addiu       $v0, $zero, -0xD00
    ctx->r2 = ADD32(0, -0XD00);
    // 0x80225A2C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225A30: sh          $v0, 0x4DE8($at)
    MEM_H(0X4DE8, ctx->r1) = ctx->r2;
    // 0x80225A34: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80225A38: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225A3C: sh          $v0, 0x4DEA($at)
    MEM_H(0X4DEA, ctx->r1) = ctx->r2;
    // 0x80225A40: addiu       $v0, $zero, 0x1A00
    ctx->r2 = ADD32(0, 0X1A00);
    // 0x80225A44: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225A48: sh          $v0, 0x4DEC($at)
    MEM_H(0X4DEC, ctx->r1) = ctx->r2;
    // 0x80225A4C: lui         $v0, 0xF300
    ctx->r2 = S32(0XF300 << 16);
    // 0x80225A50: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225A54: sw          $v0, 0x4DD8($at)
    MEM_W(0X4DD8, ctx->r1) = ctx->r2;
    // 0x80225A58: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x80225A5C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225A60: sw          $v0, 0x4DDC($at)
    MEM_W(0X4DDC, ctx->r1) = ctx->r2;
    // 0x80225A64: lui         $v0, 0x1A00
    ctx->r2 = S32(0X1A00 << 16);
    // 0x80225A68: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225A6C: sw          $v0, 0x4DE0($at)
    MEM_W(0X4DE0, ctx->r1) = ctx->r2;
    // 0x80225A70: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x80225A74: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225A78: sh          $zero, 0x4DF0($at)
    MEM_H(0X4DF0, ctx->r1) = 0;
    // 0x80225A7C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225A80: sh          $v0, 0x4DF2($at)
    MEM_H(0X4DF2, ctx->r1) = ctx->r2;
    // 0x80225A84: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225A88: sh          $zero, 0x4DF4($at)
    MEM_H(0X4DF4, ctx->r1) = 0;
    // 0x80225A8C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225A90: sb          $zero, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = 0;
    // 0x80225A94: ori         $v1, $v1, 0x10
    ctx->r3 = ctx->r3 | 0X10;
    // 0x80225A98: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225A9C: j           L_80225B00
    // 0x80225AA0: sb          $v1, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r3;
        goto L_80225B00;
    // 0x80225AA0: sb          $v1, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r3;
L_80225AA4:
    // 0x80225AA4: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80225AA8: jal         0x80070050
    // 0x80225AAC: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    func_80070050_4B450(rdram, ctx);
        goto after_5;
    // 0x80225AAC: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_5:
    // 0x80225AB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225AB4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225AB8: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    // 0x80225ABC: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80225AC0: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80225AC4: beq         $v0, $zero, L_80225ADC
    if (ctx->r2 == 0) {
        // 0x80225AC8: nop
    
            goto L_80225ADC;
    }
    // 0x80225AC8: nop

    // 0x80225ACC: jal         0x80034844
    // 0x80225AD0: nop

    func_80034844_FC44(rdram, ctx);
        goto after_6;
    // 0x80225AD0: nop

    after_6:
    // 0x80225AD4: j           L_80225AE4
    // 0x80225AD8: nop

        goto L_80225AE4;
    // 0x80225AD8: nop

L_80225ADC:
    // 0x80225ADC: jal         0x80035288
    // 0x80225AE0: nop

    func_80035288_10688(rdram, ctx);
        goto after_7;
    // 0x80225AE0: nop

    after_7:
L_80225AE4:
    // 0x80225AE4: jal         0x802326C4
    // 0x80225AE8: nop

    func_802326C4_ovl13(rdram, ctx);
        goto after_8;
    // 0x80225AE8: nop

    after_8:
    // 0x80225AEC: jal         0x8004F488
    // 0x80225AF0: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    func_8004F488_2A888(rdram, ctx);
        goto after_9;
    // 0x80225AF0: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    after_9:
    // 0x80225AF4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80225AF8: jal         0x800616FC
    // 0x80225AFC: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_10;
    // 0x80225AFC: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_10:
L_80225B00:
    // 0x80225B00: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x80225B04: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225B08: j           L_80225B5C
    // 0x80225B0C: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
        goto L_80225B5C;
    // 0x80225B0C: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
L_80225B10:
    // 0x80225B10: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80225B14: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80225B18: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80225B1C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80225B20: bne         $v0, $zero, L_80225B5C
    if (ctx->r2 != 0) {
        // 0x80225B24: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_80225B5C;
    }
    // 0x80225B24: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x80225B28: j           L_80225B5C
    // 0x80225B2C: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
        goto L_80225B5C;
    // 0x80225B2C: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
L_80225B30:
    // 0x80225B30: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80225B34: lbu         $v0, -0x7388($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7388);
    // 0x80225B38: bne         $v0, $zero, L_80225B5C
    if (ctx->r2 != 0) {
        // 0x80225B3C: addiu       $a0, $zero, 0xC
        ctx->r4 = ADD32(0, 0XC);
            goto L_80225B5C;
    }
    // 0x80225B3C: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x80225B40: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80225B44: jal         0x8002A2F8
    // 0x80225B48: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_11;
    // 0x80225B48: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_11:
    // 0x80225B4C: addiu       $v0, $zero, 0x73
    ctx->r2 = ADD32(0, 0X73);
    // 0x80225B50: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80225B54: sh          $v0, -0x3F82($at)
    MEM_H(-0X3F82, ctx->r1) = ctx->r2;
    // 0x80225B58: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
L_80225B5C:
    // 0x80225B5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225B60: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225B64: jr          $ra
    // 0x80225B68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225B68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80230C94_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230C94: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80230C98: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80230C9C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80230CA0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80230CA4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80230CA8: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80230CAC: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80230CB0: addiu       $a1, $a1, 0x49B0
    ctx->r5 = ADD32(ctx->r5, 0X49B0);
    // 0x80230CB4: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x80230CB8: beq         $v0, $zero, L_80230E30
    if (ctx->r2 == 0) {
        // 0x80230CBC: addiu       $s1, $s0, 0x440
        ctx->r17 = ADD32(ctx->r16, 0X440);
            goto L_80230E30;
    }
    // 0x80230CBC: addiu       $s1, $s0, 0x440
    ctx->r17 = ADD32(ctx->r16, 0X440);
    // 0x80230CC0: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80230CC4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80230CC8: addu        $at, $at, $v0
    gpr jr_addend_80230CD0 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80230CCC: lw          $v0, -0x6388($at)
    ctx->r2 = ADD32(ctx->r1, -0X6388);
    // 0x80230CD0: jr          $v0
    // 0x80230CD4: nop

    switch (jr_addend_80230CD0 >> 2) {
        case 0: goto L_80230CD8; break;
        case 1: goto L_80230CF0; break;
        case 2: goto L_80230D58; break;
        case 3: goto L_80230DD8; break;
        case 4: goto L_80230E14; break;
        default: switch_error(__func__, 0x80230CD0, 0x80239C78);
    }
    // 0x80230CD4: nop

L_80230CD8:
    // 0x80230CD8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80230CDC: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x80230CE0: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x80230CE4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80230CE8: j           L_80230E30
    // 0x80230CEC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_80230E30;
    // 0x80230CEC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80230CF0:
    // 0x80230CF0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80230CF4: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80230CF8: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    // 0x80230CFC: jal         0x8004F820
    // 0x80230D00: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x80230D00: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    after_0:
    // 0x80230D04: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80230D08: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80230D0C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80230D10: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80230D14: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x80230D18: lhu         $v0, 0x42($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X42);
    // 0x80230D1C: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x80230D20: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80230D24: sh          $v0, 0x42($s1)
    MEM_H(0X42, ctx->r17) = ctx->r2;
    // 0x80230D28: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x80230D2C: bgez        $v0, L_80230E30
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80230D30: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80230E30;
    }
    // 0x80230D30: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230D34: lbu         $v1, 0xA($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XA);
    // 0x80230D38: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80230D3C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80230D40: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x80230D44: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80230D48: jal         0x802329C0
    // 0x80230D4C: sb          $v1, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r3;
    func_802329C0_ovl13(rdram, ctx);
        goto after_1;
    // 0x80230D4C: sb          $v1, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r3;
    after_1:
    // 0x80230D50: j           L_80230E30
    // 0x80230D54: nop

        goto L_80230E30;
    // 0x80230D54: nop

L_80230D58:
    // 0x80230D58: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80230D5C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80230D60: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    // 0x80230D64: jal         0x8004F820
    // 0x80230D68: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x80230D68: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    after_2:
    // 0x80230D6C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80230D70: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80230D74: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80230D78: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80230D7C: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x80230D80: lhu         $v0, 0x42($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X42);
    // 0x80230D84: lw          $v1, 0x80($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X80);
    // 0x80230D88: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x80230D8C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80230D90: bne         $v1, $zero, L_80230DB0
    if (ctx->r3 != 0) {
        // 0x80230D94: sh          $v0, 0x42($s1)
        MEM_H(0X42, ctx->r17) = ctx->r2;
            goto L_80230DB0;
    }
    // 0x80230D94: sh          $v0, 0x42($s1)
    MEM_H(0X42, ctx->r17) = ctx->r2;
    // 0x80230D98: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80230D9C: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x80230DA0: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x80230DA4: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x80230DA8: j           L_80230E30
    // 0x80230DAC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_80230E30;
    // 0x80230DAC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80230DB0:
    // 0x80230DB0: lb          $v0, 0xC($v1)
    ctx->r2 = MEM_B(ctx->r3, 0XC);
    // 0x80230DB4: beq         $v0, $zero, L_80230E30
    if (ctx->r2 == 0) {
        // 0x80230DB8: addiu       $v1, $zero, 0x4
        ctx->r3 = ADD32(0, 0X4);
            goto L_80230E30;
    }
    // 0x80230DB8: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x80230DBC: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80230DC0: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x80230DC4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80230DC8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80230DCC: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x80230DD0: j           L_80230E30
    // 0x80230DD4: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
        goto L_80230E30;
    // 0x80230DD4: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_80230DD8:
    // 0x80230DD8: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80230DDC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80230DE0: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80230DE4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80230DE8: bne         $v0, $zero, L_80230E30
    if (ctx->r2 != 0) {
        // 0x80230DEC: nop
    
            goto L_80230E30;
    }
    // 0x80230DEC: nop

    // 0x80230DF0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80230DF4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80230DF8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80230DFC: lw          $v1, 0x80($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X80);
    // 0x80230E00: lbu         $v0, 0xC($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XC);
    // 0x80230E04: addiu       $v0, $v0, -0x80
    ctx->r2 = ADD32(ctx->r2, -0X80);
    // 0x80230E08: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
    // 0x80230E0C: j           L_80230E30
    // 0x80230E10: sw          $zero, 0x80($s1)
    MEM_W(0X80, ctx->r17) = 0;
        goto L_80230E30;
    // 0x80230E10: sw          $zero, 0x80($s1)
    MEM_W(0X80, ctx->r17) = 0;
L_80230E14:
    // 0x80230E14: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x80230E18: bgez        $v0, L_80230E30
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80230E1C: addiu       $v1, $zero, 0x78
        ctx->r3 = ADD32(0, 0X78);
            goto L_80230E30;
    }
    // 0x80230E1C: addiu       $v1, $zero, 0x78
    ctx->r3 = ADD32(0, 0X78);
    // 0x80230E20: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80230E24: sh          $v1, 0x40($s1)
    MEM_H(0X40, ctx->r17) = ctx->r3;
    // 0x80230E28: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80230E2C: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_80230E30:
    // 0x80230E30: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80230E34: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80230E38: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80230E3C: jr          $ra
    // 0x80230E40: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80230E40: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80228720_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228720: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80228724: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80228728: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022872C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80228730: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80228734: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x80228738: beq         $v0, $zero, L_802288A4
    if (ctx->r2 == 0) {
        // 0x8022873C: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_802288A4;
    }
    // 0x8022873C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80228740: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80228744: addu        $at, $at, $v0
    gpr jr_addend_8022874C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80228748: lw          $v0, -0x6460($at)
    ctx->r2 = ADD32(ctx->r1, -0X6460);
    // 0x8022874C: jr          $v0
    // 0x80228750: nop

    switch (jr_addend_8022874C >> 2) {
        case 0: goto L_80228754; break;
        case 1: goto L_80228768; break;
        case 2: goto L_802287E0; break;
        case 3: goto L_802287F8; break;
        case 4: goto L_8022884C; break;
        case 5: goto L_80228894; break;
        default: switch_error(__func__, 0x8022874C, 0x80239BA0);
    }
    // 0x80228750: nop

L_80228754:
    // 0x80228754: sh          $zero, 0x0($a2)
    MEM_H(0X0, ctx->r6) = 0;
    // 0x80228758: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022875C: addiu       $v1, $zero, 0x15
    ctx->r3 = ADD32(0, 0X15);
    // 0x80228760: j           L_802287D4
    // 0x80228764: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
        goto L_802287D4;
    // 0x80228764: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
L_80228768:
    // 0x80228768: lbu         $v1, 0xA4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA4);
    // 0x8022876C: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    // 0x80228770: beql        $v1, $v0, L_80228778
    if (ctx->r3 == ctx->r2) {
        // 0x80228774: sh          $zero, 0x2($a2)
        MEM_H(0X2, ctx->r6) = 0;
            goto L_80228778;
    }
    goto skip_0;
    // 0x80228774: sh          $zero, 0x2($a2)
    MEM_H(0X2, ctx->r6) = 0;
    skip_0:
L_80228778:
    // 0x80228778: lbu         $v1, 0xA4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA4);
    // 0x8022877C: addiu       $v0, $v1, -0xA
    ctx->r2 = ADD32(ctx->r3, -0XA);
    // 0x80228780: sltiu       $v0, $v0, 0x11
    ctx->r2 = ctx->r2 < 0X11 ? 1 : 0;
    // 0x80228784: beq         $v0, $zero, L_802287A4
    if (ctx->r2 == 0) {
        // 0x80228788: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802287A4;
    }
    // 0x80228788: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022878C: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x80228790: addiu       $a2, $zero, -0x30
    ctx->r6 = ADD32(0, -0X30);
    // 0x80228794: jal         0x8004DA90
    // 0x80228798: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x80228798: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x8022879C: j           L_802287C0
    // 0x802287A0: nop

        goto L_802287C0;
    // 0x802287A0: nop

L_802287A4:
    // 0x802287A4: andi        $v1, $v1, 0xFF
    ctx->r3 = ctx->r3 & 0XFF;
    // 0x802287A8: addiu       $v0, $zero, 0x1B
    ctx->r2 = ADD32(0, 0X1B);
    // 0x802287AC: bne         $v1, $v0, L_802287C0
    if (ctx->r3 != ctx->r2) {
        // 0x802287B0: addiu       $v0, $zero, -0x34
        ctx->r2 = ADD32(0, -0X34);
            goto L_802287C0;
    }
    // 0x802287B0: addiu       $v0, $zero, -0x34
    ctx->r2 = ADD32(0, -0X34);
    // 0x802287B4: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x802287B8: lui         $v0, 0xFFCC
    ctx->r2 = S32(0XFFCC << 16);
    // 0x802287BC: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
L_802287C0:
    // 0x802287C0: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x802287C4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802287C8: bne         $v1, $v0, L_802288A4
    if (ctx->r3 != ctx->r2) {
        // 0x802287CC: nop
    
            goto L_802288A4;
    }
    // 0x802287CC: nop

    // 0x802287D0: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
L_802287D4:
    // 0x802287D4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802287D8: j           L_802288A4
    // 0x802287DC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_802288A4;
    // 0x802287DC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_802287E0:
    // 0x802287E0: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x802287E4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802287E8: sh          $zero, 0x0($a2)
    MEM_H(0X0, ctx->r6) = 0;
    // 0x802287EC: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x802287F0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802287F4: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_802287F8:
    // 0x802287F8: lh          $v0, 0x0($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X0);
    // 0x802287FC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80228800: slti        $v0, $v0, 0x10
    ctx->r2 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
    // 0x80228804: beq         $v0, $zero, L_80228814
    if (ctx->r2 == 0) {
        // 0x80228808: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_80228814;
    }
    // 0x80228808: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8022880C: j           L_80228824
    // 0x80228810: sh          $v0, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r2;
        goto L_80228824;
    // 0x80228810: sh          $v0, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r2;
L_80228814:
    // 0x80228814: sh          $zero, 0x0($a2)
    MEM_H(0X0, ctx->r6) = 0;
    // 0x80228818: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022881C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228820: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80228824:
    // 0x80228824: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228828: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8022882C: lhu         $v0, 0x56($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X56);
    // 0x80228830: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80228834: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80228838: addiu       $v0, $v0, -0x38
    ctx->r2 = ADD32(ctx->r2, -0X38);
    // 0x8022883C: jal         0x8004DA90
    // 0x80228840: sh          $v0, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r2;
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x80228840: sh          $v0, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r2;
    after_1:
    // 0x80228844: j           L_802288A4
    // 0x80228848: nop

        goto L_802288A4;
    // 0x80228848: nop

L_8022884C:
    // 0x8022884C: lh          $v0, 0x0($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X0);
    // 0x80228850: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80228854: slti        $v0, $v0, 0xA
    ctx->r2 = SIGNED(ctx->r2) < 0XA ? 1 : 0;
    // 0x80228858: beq         $v0, $zero, L_80228868
    if (ctx->r2 == 0) {
        // 0x8022885C: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_80228868;
    }
    // 0x8022885C: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x80228860: j           L_80228878
    // 0x80228864: sh          $v0, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r2;
        goto L_80228878;
    // 0x80228864: sh          $v0, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r2;
L_80228868:
    // 0x80228868: sh          $zero, 0x0($a2)
    MEM_H(0X0, ctx->r6) = 0;
    // 0x8022886C: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80228870: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228874: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80228878:
    // 0x80228878: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022887C: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x80228880: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80228884: jal         0x8004DA90
    // 0x80228888: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x80228888: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_2:
    // 0x8022888C: j           L_802288A4
    // 0x80228890: nop

        goto L_802288A4;
    // 0x80228890: nop

L_80228894:
    // 0x80228894: addiu       $v0, $zero, 0xC00
    ctx->r2 = ADD32(0, 0XC00);
    // 0x80228898: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8022889C: addiu       $v0, $zero, 0x17
    ctx->r2 = ADD32(0, 0X17);
    // 0x802288A0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_802288A4:
    // 0x802288A4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802288A8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802288AC: jr          $ra
    // 0x802288B0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x802288B0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802288B4: nop

    // 0x802288B8: nop

    // 0x802288BC: nop

;}
RECOMP_FUNC void func_80225C74_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225C74: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225C78: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225C7C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225C80: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80225C84: addiu       $a0, $a0, -0xCBE
    ctx->r4 = ADD32(ctx->r4, -0XCBE);
    // 0x80225C88: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225C8C: sh          $zero, 0x0($a0)
    MEM_H(0X0, ctx->r4) = 0;
    // 0x80225C90: lbu         $v1, 0x6($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X6);
    // 0x80225C94: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225C98: beq         $v1, $v0, L_80225D68
    if (ctx->r3 == ctx->r2) {
        // 0x80225C9C: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80225D68;
    }
    // 0x80225C9C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80225CA0: beql        $v0, $zero, L_80225CB8
    if (ctx->r2 == 0) {
        // 0x80225CA4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80225CB8;
    }
    goto skip_0;
    // 0x80225CA4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80225CA8: beq         $v1, $zero, L_80225CD0
    if (ctx->r3 == 0) {
        // 0x80225CAC: nop
    
            goto L_80225CD0;
    }
    // 0x80225CAC: nop

    // 0x80225CB0: j           L_80225E54
    // 0x80225CB4: nop

        goto L_80225E54;
    // 0x80225CB4: nop

L_80225CB8:
    // 0x80225CB8: beq         $v1, $v0, L_80225E08
    if (ctx->r3 == ctx->r2) {
        // 0x80225CBC: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80225E08;
    }
    // 0x80225CBC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80225CC0: beq         $v1, $v0, L_80225E20
    if (ctx->r3 == ctx->r2) {
        // 0x80225CC4: nop
    
            goto L_80225E20;
    }
    // 0x80225CC4: nop

    // 0x80225CC8: j           L_80225E54
    // 0x80225CCC: nop

        goto L_80225E54;
    // 0x80225CCC: nop

L_80225CD0:
    // 0x80225CD0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80225CD4: lh          $v0, 0x49C8($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X49C8);
    // 0x80225CD8: slti        $v0, $v0, 0x1A00
    ctx->r2 = SIGNED(ctx->r2) < 0X1A00 ? 1 : 0;
    // 0x80225CDC: beq         $v0, $zero, L_80225D58
    if (ctx->r2 == 0) {
        // 0x80225CE0: addiu       $v0, $zero, -0xD00
        ctx->r2 = ADD32(0, -0XD00);
            goto L_80225D58;
    }
    // 0x80225CE0: addiu       $v0, $zero, -0xD00
    ctx->r2 = ADD32(0, -0XD00);
    // 0x80225CE4: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80225CE8: lbu         $v1, 0x4A6D($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X4A6D);
    // 0x80225CEC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225CF0: sh          $v0, 0x4DE8($at)
    MEM_H(0X4DE8, ctx->r1) = ctx->r2;
    // 0x80225CF4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80225CF8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225CFC: sh          $v0, 0x4DEA($at)
    MEM_H(0X4DEA, ctx->r1) = ctx->r2;
    // 0x80225D00: addiu       $v0, $zero, 0x1A00
    ctx->r2 = ADD32(0, 0X1A00);
    // 0x80225D04: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225D08: sh          $v0, 0x4DEC($at)
    MEM_H(0X4DEC, ctx->r1) = ctx->r2;
    // 0x80225D0C: lui         $v0, 0xF300
    ctx->r2 = S32(0XF300 << 16);
    // 0x80225D10: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225D14: sw          $v0, 0x4DD8($at)
    MEM_W(0X4DD8, ctx->r1) = ctx->r2;
    // 0x80225D18: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x80225D1C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225D20: sw          $v0, 0x4DDC($at)
    MEM_W(0X4DDC, ctx->r1) = ctx->r2;
    // 0x80225D24: lui         $v0, 0x1A00
    ctx->r2 = S32(0X1A00 << 16);
    // 0x80225D28: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225D2C: sw          $v0, 0x4DE0($at)
    MEM_W(0X4DE0, ctx->r1) = ctx->r2;
    // 0x80225D30: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225D34: sh          $zero, 0x4DF0($at)
    MEM_H(0X4DF0, ctx->r1) = 0;
    // 0x80225D38: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225D3C: sh          $zero, 0x4DF2($at)
    MEM_H(0X4DF2, ctx->r1) = 0;
    // 0x80225D40: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225D44: sh          $zero, 0x4DF4($at)
    MEM_H(0X4DF4, ctx->r1) = 0;
    // 0x80225D48: ori         $v1, $v1, 0x10
    ctx->r3 = ctx->r3 | 0X10;
    // 0x80225D4C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225D50: j           L_80225E48
    // 0x80225D54: sb          $v1, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r3;
        goto L_80225E48;
    // 0x80225D54: sb          $v1, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r3;
L_80225D58:
    // 0x80225D58: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80225D5C: lhu         $v0, 0x4AD4($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X4AD4);
    // 0x80225D60: j           L_80225E54
    // 0x80225D64: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
        goto L_80225E54;
    // 0x80225D64: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
L_80225D68:
    // 0x80225D68: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80225D6C: lhu         $v0, 0x4A06($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X4A06);
    // 0x80225D70: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80225D74: slti        $v0, $v0, 0x401
    ctx->r2 = SIGNED(ctx->r2) < 0X401 ? 1 : 0;
    // 0x80225D78: bne         $v0, $zero, L_80225DF8
    if (ctx->r2 != 0) {
        // 0x80225D7C: addiu       $v0, $zero, -0xD00
        ctx->r2 = ADD32(0, -0XD00);
            goto L_80225DF8;
    }
    // 0x80225D7C: addiu       $v0, $zero, -0xD00
    ctx->r2 = ADD32(0, -0XD00);
    // 0x80225D80: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80225D84: lbu         $v1, 0x4A6D($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X4A6D);
    // 0x80225D88: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225D8C: sh          $v0, 0x4DE8($at)
    MEM_H(0X4DE8, ctx->r1) = ctx->r2;
    // 0x80225D90: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80225D94: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225D98: sh          $v0, 0x4DEA($at)
    MEM_H(0X4DEA, ctx->r1) = ctx->r2;
    // 0x80225D9C: addiu       $v0, $zero, 0x1A00
    ctx->r2 = ADD32(0, 0X1A00);
    // 0x80225DA0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225DA4: sh          $v0, 0x4DEC($at)
    MEM_H(0X4DEC, ctx->r1) = ctx->r2;
    // 0x80225DA8: lui         $v0, 0xF300
    ctx->r2 = S32(0XF300 << 16);
    // 0x80225DAC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225DB0: sw          $v0, 0x4DD8($at)
    MEM_W(0X4DD8, ctx->r1) = ctx->r2;
    // 0x80225DB4: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x80225DB8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225DBC: sw          $v0, 0x4DDC($at)
    MEM_W(0X4DDC, ctx->r1) = ctx->r2;
    // 0x80225DC0: lui         $v0, 0x1A00
    ctx->r2 = S32(0X1A00 << 16);
    // 0x80225DC4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225DC8: sw          $v0, 0x4DE0($at)
    MEM_W(0X4DE0, ctx->r1) = ctx->r2;
    // 0x80225DCC: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x80225DD0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225DD4: sh          $zero, 0x4DF0($at)
    MEM_H(0X4DF0, ctx->r1) = 0;
    // 0x80225DD8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225DDC: sh          $v0, 0x4DF2($at)
    MEM_H(0X4DF2, ctx->r1) = ctx->r2;
    // 0x80225DE0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225DE4: sh          $zero, 0x4DF4($at)
    MEM_H(0X4DF4, ctx->r1) = 0;
    // 0x80225DE8: ori         $v1, $v1, 0x10
    ctx->r3 = ctx->r3 | 0X10;
    // 0x80225DEC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225DF0: j           L_80225E48
    // 0x80225DF4: sb          $v1, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r3;
        goto L_80225E48;
    // 0x80225DF4: sb          $v1, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r3;
L_80225DF8:
    // 0x80225DF8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80225DFC: lhu         $v0, 0x4ADA($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X4ADA);
    // 0x80225E00: j           L_80225E54
    // 0x80225E04: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
        goto L_80225E54;
    // 0x80225E04: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
L_80225E08:
    // 0x80225E08: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80225E0C: lbu         $v0, 0x49B9($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X49B9);
    // 0x80225E10: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225E14: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225E18: j           L_80225E48
    // 0x80225E1C: sb          $v0, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = ctx->r2;
        goto L_80225E48;
    // 0x80225E1C: sb          $v0, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = ctx->r2;
L_80225E20:
    // 0x80225E20: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80225E24: lbu         $v0, 0x49B9($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X49B9);
    // 0x80225E28: bne         $v0, $zero, L_80225E54
    if (ctx->r2 != 0) {
        // 0x80225E2C: nop
    
            goto L_80225E54;
    }
    // 0x80225E2C: nop

    // 0x80225E30: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80225E34: lbu         $v0, 0x4A6D($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4A6D);
    // 0x80225E38: andi        $v0, $v0, 0xDF
    ctx->r2 = ctx->r2 & 0XDF;
    // 0x80225E3C: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    // 0x80225E40: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225E44: sb          $v0, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r2;
L_80225E48:
    // 0x80225E48: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x80225E4C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225E50: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
L_80225E54:
    // 0x80225E54: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x80225E58: bne         $v0, $zero, L_80225E8C
    if (ctx->r2 != 0) {
        // 0x80225E5C: sltiu       $v1, $v0, 0x1
        ctx->r3 = ctx->r2 < 0X1 ? 1 : 0;
            goto L_80225E8C;
    }
    // 0x80225E5C: sltiu       $v1, $v0, 0x1
    ctx->r3 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80225E60: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
    // 0x80225E64: jal         0x8004F488
    // 0x80225E68: nop

    func_8004F488_2A888(rdram, ctx);
        goto after_0;
    // 0x80225E68: nop

    after_0:
    // 0x80225E6C: jal         0x8004F418
    // 0x80225E70: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    func_8004F418_2A818(rdram, ctx);
        goto after_1;
    // 0x80225E70: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    after_1:
    // 0x80225E74: jal         0x8004F418
    // 0x80225E78: lw          $a0, 0x30($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X30);
    func_8004F418_2A818(rdram, ctx);
        goto after_2;
    // 0x80225E78: lw          $a0, 0x30($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X30);
    after_2:
    // 0x80225E7C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225E80: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x80225E84: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x80225E88: sltiu       $v1, $v0, 0x1
    ctx->r3 = ctx->r2 < 0X1 ? 1 : 0;
L_80225E8C:
    // 0x80225E8C: xori        $v0, $v0, 0x32
    ctx->r2 = ctx->r2 ^ 0X32;
    // 0x80225E90: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80225E94: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80225E98: beq         $v1, $zero, L_80225EB0
    if (ctx->r3 == 0) {
        // 0x80225E9C: nop
    
            goto L_80225EB0;
    }
    // 0x80225E9C: nop

    // 0x80225EA0: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x80225EA4: lbu         $v0, 0x8($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X8);
    // 0x80225EA8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225EAC: sb          $v0, 0x8($v1)
    MEM_B(0X8, ctx->r3) = ctx->r2;
L_80225EB0:
    // 0x80225EB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225EB4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225EB8: jr          $ra
    // 0x80225EBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225EBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802288C0_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802288C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802288C4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802288C8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802288CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802288D0: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802288D4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802288D8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802288DC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802288E0: lw          $v0, -0x7220($at)
    ctx->r2 = MEM_W(ctx->r1, -0X7220);
    // 0x802288E4: jalr        $v0
    // 0x802288E8: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802288E8: nop

    after_0:
    // 0x802288EC: sw          $zero, 0x33C($s0)
    MEM_W(0X33C, ctx->r16) = 0;
    // 0x802288F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802288F4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802288F8: jr          $ra
    // 0x802288FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802288FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80236180_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236180: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80236184: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80236188: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023618C: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80236190: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80236194: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80236198: jal         0x8009A3B4
    // 0x8023619C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8023619C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_0:
    // 0x802361A0: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x802361A4: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x802361A8: jal         0x8009A3B4
    // 0x802361AC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x802361AC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x802361B0: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x802361B4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802361B8: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x802361BC: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x802361C0: bne         $v0, $zero, L_802361D8
    if (ctx->r2 != 0) {
        // 0x802361C4: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_802361D8;
    }
    // 0x802361C4: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x802361C8: jal         0x8004F4F8
    // 0x802361CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_2;
    // 0x802361CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x802361D0: j           L_80236300
    // 0x802361D4: nop

        goto L_80236300;
    // 0x802361D4: nop

L_802361D8:
    // 0x802361D8: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x802361DC: bne         $v1, $v0, L_802361E8
    if (ctx->r3 != ctx->r2) {
        // 0x802361E0: addiu       $v0, $v1, 0x2
        ctx->r2 = ADD32(ctx->r3, 0X2);
            goto L_802361E8;
    }
    // 0x802361E0: addiu       $v0, $v1, 0x2
    ctx->r2 = ADD32(ctx->r3, 0X2);
    // 0x802361E4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_802361E8:
    // 0x802361E8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x802361EC: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x802361F0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802361F4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802361F8: lbu         $v0, -0x65BC($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X65BC);
    // 0x802361FC: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80236200: lh          $a2, 0x4C($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X4C);
    // 0x80236204: lh          $a3, 0x50($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X50);
    // 0x80236208: sb          $v0, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r2;
    // 0x8023620C: lhu         $v0, 0x9A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X9A);
    // 0x80236210: lui         $t0, 0x8024
    ctx->r8 = S32(0X8024 << 16);
    // 0x80236214: addu        $t0, $t0, $v1
    ctx->r8 = ADD32(ctx->r8, ctx->r3);
    // 0x80236218: lbu         $t0, -0x65BB($t0)
    ctx->r8 = MEM_BU(ctx->r8, -0X65BB);
    // 0x8023621C: lh          $v1, 0x44($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X44);
    // 0x80236220: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80236224: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80236228: sh          $v0, 0x9A($s0)
    MEM_H(0X9A, ctx->r16) = ctx->r2;
    // 0x8023622C: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x80236230: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x80236234: lh          $a2, 0x48($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X48);
    // 0x80236238: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8023623C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80236240: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x80236244: lh          $v0, 0x46($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X46);
    // 0x80236248: lw          $v1, 0x20($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X20);
    // 0x8023624C: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80236250: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80236254: sb          $t0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r8;
    // 0x80236258: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023625C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80236260: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x80236264: addu        $a2, $a2, $a3
    ctx->r6 = ADD32(ctx->r6, ctx->r7);
    // 0x80236268: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x8023626C: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x80236270: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80236274: jal         0x8004DD04
    // 0x80236278: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    func_8004DD04_29104(rdram, ctx);
        goto after_3;
    // 0x80236278: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    after_3:
    // 0x8023627C: lb          $v0, 0xE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE);
    // 0x80236280: beq         $v0, $zero, L_8023629C
    if (ctx->r2 == 0) {
        // 0x80236284: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8023629C;
    }
    // 0x80236284: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80236288: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8023628C: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x80236290: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80236294: bne         $v0, $zero, L_802362E8
    if (ctx->r2 != 0) {
        // 0x80236298: nop
    
            goto L_802362E8;
    }
    // 0x80236298: nop

L_8023629C:
    // 0x8023629C: jal         0x8004F144
    // 0x802362A0: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_4;
    // 0x802362A0: nop

    after_4:
    // 0x802362A4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802362A8: beq         $v1, $zero, L_802362E8
    if (ctx->r3 == 0) {
        // 0x802362AC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802362E8;
    }
    // 0x802362AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802362B0: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x802362B4: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x802362B8: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x802362BC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802362C0: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    // 0x802362C4: sb          $zero, 0xC($v1)
    MEM_B(0XC, ctx->r3) = 0;
    // 0x802362C8: lhu         $v0, 0x90($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X90);
    // 0x802362CC: sh          $v0, 0x1C($v1)
    MEM_H(0X1C, ctx->r3) = ctx->r2;
    // 0x802362D0: lhu         $v0, 0x92($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X92);
    // 0x802362D4: sh          $v0, 0x1E($v1)
    MEM_H(0X1E, ctx->r3) = ctx->r2;
    // 0x802362D8: lhu         $v0, 0x94($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X94);
    // 0x802362DC: sh          $v0, 0x20($v1)
    MEM_H(0X20, ctx->r3) = ctx->r2;
    // 0x802362E0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802362E4: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
L_802362E8:
    // 0x802362E8: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x802362EC: lhu         $v1, 0x16($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X16);
    // 0x802362F0: lhu         $a0, 0x18($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X18);
    // 0x802362F4: sh          $v0, 0x90($s0)
    MEM_H(0X90, ctx->r16) = ctx->r2;
    // 0x802362F8: sh          $v1, 0x92($s0)
    MEM_H(0X92, ctx->r16) = ctx->r3;
    // 0x802362FC: sh          $a0, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r4;
L_80236300:
    // 0x80236300: jal         0x8003F754
    // 0x80236304: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003F754_1AB54(rdram, ctx);
        goto after_5;
    // 0x80236304: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80236308: bne         $v0, $zero, L_80236324
    if (ctx->r2 != 0) {
        // 0x8023630C: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80236324;
    }
    // 0x8023630C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80236310: lw          $v0, 0x9C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X9C);
    // 0x80236314: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x80236318: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8023631C: beq         $v0, $zero, L_80236338
    if (ctx->r2 == 0) {
        // 0x80236320: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80236338;
    }
    // 0x80236320: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_80236324:
    // 0x80236324: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80236328: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8023632C: sb          $zero, 0x96($s0)
    MEM_B(0X96, ctx->r16) = 0;
    // 0x80236330: j           L_80236388
    // 0x80236334: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
        goto L_80236388;
    // 0x80236334: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
L_80236338:
    // 0x80236338: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8023633C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80236340: beq         $v0, $zero, L_80236388
    if (ctx->r2 == 0) {
        // 0x80236344: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80236388;
    }
    // 0x80236344: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80236348: lhu         $a1, 0x98($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X98);
    // 0x8023634C: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x80236350: addiu       $v0, $s0, 0x9C
    ctx->r2 = ADD32(ctx->r16, 0X9C);
    // 0x80236354: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80236358: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8023635C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80236360: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x80236364: lb          $v1, 0xD($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XD);
    // 0x80236368: ori         $a3, $zero, 0xA000
    ctx->r7 = 0 | 0XA000;
    // 0x8023636C: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    // 0x80236370: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80236374: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x80236378: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8023637C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80236380: jal         0x80051E18
    // 0x80236384: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_6;
    // 0x80236384: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_6:
L_80236388:
    // 0x80236388: sw          $zero, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = 0;
    // 0x8023638C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80236390: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80236394: jr          $ra
    // 0x80236398: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80236398: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_802346C0_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802346C0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x802346C4: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x802346C8: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x802346CC: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x802346D0: addu        $s6, $zero, $zero
    ctx->r22 = ADD32(0, 0);
    // 0x802346D4: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x802346D8: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x802346DC: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x802346E0: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x802346E4: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x802346E8: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x802346EC: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x802346F0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802346F4: andi        $v0, $s6, 0xFF
    ctx->r2 = ctx->r22 & 0XFF;
L_802346F8:
    // 0x802346F8: sll         $s1, $v0, 3
    ctx->r17 = S32(ctx->r2 << 3);
    // 0x802346FC: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80234700: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x80234704: lh          $v0, -0x6708($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X6708);
    // 0x80234708: lw          $v1, 0xD0($s3)
    ctx->r3 = MEM_W(ctx->r19, 0XD0);
    // 0x8023470C: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x80234710: sltu        $v1, $v1, $v0
    ctx->r3 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x80234714: beq         $v1, $zero, L_8023496C
    if (ctx->r3 == 0) {
        // 0x80234718: andi        $v0, $s6, 0xFF
        ctx->r2 = ctx->r22 & 0XFF;
            goto L_8023496C;
    }
    // 0x80234718: andi        $v0, $s6, 0xFF
    ctx->r2 = ctx->r22 & 0XFF;
    // 0x8023471C: jal         0x8003B878
    // 0x80234720: nop

    func_8003B878_16C78(rdram, ctx);
        goto after_0;
    // 0x80234720: nop

    after_0:
    // 0x80234724: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80234728: addu        $v1, $v1, $s1
    ctx->r3 = ADD32(ctx->r3, ctx->r17);
    // 0x8023472C: lh          $v1, -0x6708($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X6708);
    // 0x80234730: lw          $a0, 0xD0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0XD0);
    // 0x80234734: addu        $a3, $v1, $zero
    ctx->r7 = ADD32(ctx->r3, 0);
    // 0x80234738: sltu        $v1, $a0, $v1
    ctx->r3 = ctx->r4 < ctx->r3 ? 1 : 0;
    // 0x8023473C: beq         $v1, $zero, L_802347B4
    if (ctx->r3 == 0) {
        // 0x80234740: addu        $s2, $v0, $zero
        ctx->r18 = ADD32(ctx->r2, 0);
            goto L_802347B4;
    }
    // 0x80234740: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x80234744: addiu       $s5, $zero, 0x60
    ctx->r21 = ADD32(0, 0X60);
    // 0x80234748: addiu       $fp, $zero, 0xE0
    ctx->r30 = ADD32(0, 0XE0);
    // 0x8023474C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80234750: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x80234754: lh          $v0, -0x6702($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X6702);
    // 0x80234758: lui         $s0, 0x8024
    ctx->r16 = S32(0X8024 << 16);
    // 0x8023475C: addu        $s0, $s0, $s1
    ctx->r16 = ADD32(ctx->r16, ctx->r17);
    // 0x80234760: lhu         $s0, -0x6704($s0)
    ctx->r16 = MEM_HU(ctx->r16, -0X6704);
    // 0x80234764: bgez        $v0, L_80234770
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80234768: addiu       $s7, $zero, 0x60
        ctx->r23 = ADD32(0, 0X60);
            goto L_80234770;
    }
    // 0x80234768: addiu       $s7, $zero, 0x60
    ctx->r23 = ADD32(0, 0X60);
    // 0x8023476C: addiu       $v0, $v0, 0xF
    ctx->r2 = ADD32(ctx->r2, 0XF);
L_80234770:
    // 0x80234770: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80234774: addu        $v1, $v1, $s1
    ctx->r3 = ADD32(ctx->r3, ctx->r17);
    // 0x80234778: lh          $v1, -0x6706($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X6706);
    // 0x8023477C: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x80234780: mult        $v0, $a0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80234784: mflo        $s4
    ctx->r20 = lo;
    // 0x80234788: nop

    // 0x8023478C: nop

    // 0x80234790: bltzl       $v1, L_80234798
    if (SIGNED(ctx->r3) < 0) {
        // 0x80234794: addiu       $v1, $v1, 0xF
        ctx->r3 = ADD32(ctx->r3, 0XF);
            goto L_80234798;
    }
    goto skip_0;
    // 0x80234794: addiu       $v1, $v1, 0xF
    ctx->r3 = ADD32(ctx->r3, 0XF);
    skip_0:
L_80234798:
    // 0x80234798: sra         $v0, $v1, 4
    ctx->r2 = S32(SIGNED(ctx->r3) >> 4);
    // 0x8023479C: mult        $v0, $a0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802347A0: mflo        $s1
    ctx->r17 = lo;
    // 0x802347A4: nop

    // 0x802347A8: nop

    // 0x802347AC: j           L_80234890
    // 0x802347B0: sll         $s0, $s0, 16
    ctx->r16 = S32(ctx->r16 << 16);
        goto L_80234890;
    // 0x802347B0: sll         $s0, $s0, 16
    ctx->r16 = S32(ctx->r16 << 16);
L_802347B4:
    // 0x802347B4: subu        $t1, $a0, $a3
    ctx->r9 = SUB32(ctx->r4, ctx->r7);
    // 0x802347B8: sll         $a0, $t1, 16
    ctx->r4 = S32(ctx->r9 << 16);
    // 0x802347BC: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x802347C0: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x802347C4: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x802347C8: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x802347CC: addiu       $v1, $zero, 0x60
    ctx->r3 = ADD32(0, 0X60);
    // 0x802347D0: subu        $s5, $v1, $v0
    ctx->r21 = SUB32(ctx->r3, ctx->r2);
    // 0x802347D4: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
    // 0x802347D8: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x802347DC: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x802347E0: addiu       $v1, $zero, -0x20
    ctx->r3 = ADD32(0, -0X20);
    // 0x802347E4: subu        $fp, $v1, $v0
    ctx->r30 = SUB32(ctx->r3, ctx->r2);
    // 0x802347E8: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x802347EC: addu        $v1, $v1, $s1
    ctx->r3 = ADD32(ctx->r3, ctx->r17);
    // 0x802347F0: lh          $v1, -0x6702($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X6702);
    // 0x802347F4: addu        $s7, $s5, $zero
    ctx->r23 = ADD32(ctx->r21, 0);
    // 0x802347F8: lui         $s0, 0x8024
    ctx->r16 = S32(0X8024 << 16);
    // 0x802347FC: addu        $s0, $s0, $s1
    ctx->r16 = ADD32(ctx->r16, ctx->r17);
    // 0x80234800: lhu         $s0, -0x6704($s0)
    ctx->r16 = MEM_HU(ctx->r16, -0X6704);
    // 0x80234804: bgez        $v1, L_80234810
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80234808: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_80234810;
    }
    // 0x80234808: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x8023480C: addiu       $v0, $v1, 0xF
    ctx->r2 = ADD32(ctx->r3, 0XF);
L_80234810:
    // 0x80234810: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x80234814: addu        $a1, $a1, $s1
    ctx->r5 = ADD32(ctx->r5, ctx->r17);
    // 0x80234818: lh          $a1, -0x6706($a1)
    ctx->r5 = MEM_H(ctx->r5, -0X6706);
    // 0x8023481C: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x80234820: mult        $a3, $v0
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80234824: mflo        $t0
    ctx->r8 = lo;
    // 0x80234828: nop

    // 0x8023482C: nop

    // 0x80234830: bgez        $a1, L_8023483C
    if (SIGNED(ctx->r5) >= 0) {
        // 0x80234834: addu        $a2, $a1, $zero
        ctx->r6 = ADD32(ctx->r5, 0);
            goto L_8023483C;
    }
    // 0x80234834: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x80234838: addiu       $a2, $a1, 0xF
    ctx->r6 = ADD32(ctx->r5, 0XF);
L_8023483C:
    // 0x8023483C: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x80234840: sra         $v0, $a2, 4
    ctx->r2 = S32(SIGNED(ctx->r6) >> 4);
    // 0x80234844: mult        $a3, $v0
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80234848: mflo        $v1
    ctx->r3 = lo;
    // 0x8023484C: nop

    // 0x80234850: nop

    // 0x80234854: bltzl       $a0, L_8023485C
    if (SIGNED(ctx->r4) < 0) {
        // 0x80234858: addiu       $a0, $a0, 0x1F
        ctx->r4 = ADD32(ctx->r4, 0X1F);
            goto L_8023485C;
    }
    goto skip_1;
    // 0x80234858: addiu       $a0, $a0, 0x1F
    ctx->r4 = ADD32(ctx->r4, 0X1F);
    skip_1:
L_8023485C:
    // 0x8023485C: sra         $v0, $a0, 5
    ctx->r2 = S32(SIGNED(ctx->r4) >> 5);
    // 0x80234860: mult        $t1, $v0
    result = S64(S32(ctx->r9)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80234864: mflo        $v0
    ctx->r2 = lo;
    // 0x80234868: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x8023486C: nop

    // 0x80234870: bgez        $a0, L_8023487C
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80234874: addu        $s4, $t0, $v0
        ctx->r20 = ADD32(ctx->r8, ctx->r2);
            goto L_8023487C;
    }
    // 0x80234874: addu        $s4, $t0, $v0
    ctx->r20 = ADD32(ctx->r8, ctx->r2);
    // 0x80234878: addiu       $a0, $a0, 0x1F
    ctx->r4 = ADD32(ctx->r4, 0X1F);
L_8023487C:
    // 0x8023487C: sra         $v0, $a0, 5
    ctx->r2 = S32(SIGNED(ctx->r4) >> 5);
    // 0x80234880: mult        $t1, $v0
    result = S64(S32(ctx->r9)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80234884: mflo        $v0
    ctx->r2 = lo;
    // 0x80234888: addu        $s1, $v1, $v0
    ctx->r17 = ADD32(ctx->r3, ctx->r2);
    // 0x8023488C: sll         $s0, $s0, 16
    ctx->r16 = S32(ctx->r16 << 16);
L_80234890:
    // 0x80234890: sra         $s0, $s0, 16
    ctx->r16 = S32(SIGNED(ctx->r16) >> 16);
    // 0x80234894: jal         0x800324B4
    // 0x80234898: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800324B4_D8B4(rdram, ctx);
        goto after_1;
    // 0x80234898: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8023489C: sll         $s1, $s1, 16
    ctx->r17 = S32(ctx->r17 << 16);
    // 0x802348A0: sra         $s1, $s1, 16
    ctx->r17 = S32(SIGNED(ctx->r17) >> 16);
    // 0x802348A4: mult        $v0, $s1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802348A8: mflo        $v0
    ctx->r2 = lo;
    // 0x802348AC: lhu         $v1, 0x14($s3)
    ctx->r3 = MEM_HU(ctx->r19, 0X14);
    // 0x802348B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802348B4: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x802348B8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802348BC: jal         0x80032498
    // 0x802348C0: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    func_80032498_D898(rdram, ctx);
        goto after_2;
    // 0x802348C0: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    after_2:
    // 0x802348C4: nop

    // 0x802348C8: mult        $v0, $s1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802348CC: mflo        $v0
    ctx->r2 = lo;
    // 0x802348D0: lhu         $v1, 0x18($s3)
    ctx->r3 = MEM_HU(ctx->r19, 0X18);
    // 0x802348D4: lui         $a1, 0x3D48
    ctx->r5 = S32(0X3D48 << 16);
    // 0x802348D8: andi        $a0, $s7, 0xFF
    ctx->r4 = ctx->r23 & 0XFF;
    // 0x802348DC: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x802348E0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802348E4: sh          $v1, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r3;
    // 0x802348E8: lhu         $v0, 0x16($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X16);
    // 0x802348EC: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x802348F0: lui         $v1, 0x2E00
    ctx->r3 = S32(0X2E00 << 16);
    // 0x802348F4: addu        $v0, $v0, $s4
    ctx->r2 = ADD32(ctx->r2, ctx->r20);
    // 0x802348F8: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x802348FC: andi        $v0, $fp, 0xFF
    ctx->r2 = ctx->r30 & 0XFF;
    // 0x80234900: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80234904: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80234908: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x8023490C: andi        $v0, $s5, 0xFF
    ctx->r2 = ctx->r21 & 0XFF;
    // 0x80234910: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x80234914: sw          $a0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r4;
    // 0x80234918: lh          $v0, 0x10($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X10);
    // 0x8023491C: lh          $v1, 0x12($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X12);
    // 0x80234920: ori         $a1, $a1, 0x2040
    ctx->r5 = ctx->r5 | 0X2040;
    // 0x80234924: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80234928: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023492C: sw          $v1, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r3;
    // 0x80234930: lh          $v1, 0x14($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X14);
    // 0x80234934: lui         $v0, 0x2E
    ctx->r2 = S32(0X2E << 16);
    // 0x80234938: ori         $v0, $v0, 0x205F
    ctx->r2 = ctx->r2 | 0X205F;
    // 0x8023493C: sw          $v0, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r2;
    // 0x80234940: addiu       $v0, $zero, 0x3F40
    ctx->r2 = ADD32(0, 0X3F40);
    // 0x80234944: sw          $v0, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->r2;
    // 0x80234948: addiu       $v0, $zero, 0x3F5F
    ctx->r2 = ADD32(0, 0X3F5F);
    // 0x8023494C: sw          $v0, 0x24($s2)
    MEM_W(0X24, ctx->r18) = ctx->r2;
    // 0x80234950: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x80234954: sw          $a1, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r5;
    // 0x80234958: sw          $v0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r2;
    // 0x8023495C: sw          $zero, 0x20($s2)
    MEM_W(0X20, ctx->r18) = 0;
    // 0x80234960: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80234964: sw          $v1, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->r3;
    // 0x80234968: andi        $v0, $s6, 0xFF
    ctx->r2 = ctx->r22 & 0XFF;
L_8023496C:
    // 0x8023496C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80234970: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80234974: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80234978: lh          $v0, -0x6708($at)
    ctx->r2 = MEM_H(ctx->r1, -0X6708);
    // 0x8023497C: lw          $v1, 0xD0($s3)
    ctx->r3 = MEM_W(ctx->r19, 0XD0);
    // 0x80234980: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x80234984: bne         $v1, $v0, L_80234998
    if (ctx->r3 != ctx->r2) {
        // 0x80234988: addiu       $s6, $s6, 0x1
        ctx->r22 = ADD32(ctx->r22, 0X1);
            goto L_80234998;
    }
    // 0x80234988: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    // 0x8023498C: lbu         $v0, 0xB($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0XB);
    // 0x80234990: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80234994: sb          $v0, 0xB($s3)
    MEM_B(0XB, ctx->r19) = ctx->r2;
L_80234998:
    // 0x80234998: andi        $v0, $s6, 0xFF
    ctx->r2 = ctx->r22 & 0XFF;
    // 0x8023499C: sltiu       $v0, $v0, 0x18
    ctx->r2 = ctx->r2 < 0X18 ? 1 : 0;
    // 0x802349A0: bne         $v0, $zero, L_802346F8
    if (ctx->r2 != 0) {
        // 0x802349A4: andi        $v0, $s6, 0xFF
        ctx->r2 = ctx->r22 & 0XFF;
            goto L_802346F8;
    }
    // 0x802349A4: andi        $v0, $s6, 0xFF
    ctx->r2 = ctx->r22 & 0XFF;
    // 0x802349A8: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x802349AC: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x802349B0: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x802349B4: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x802349B8: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x802349BC: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x802349C0: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x802349C4: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x802349C8: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x802349CC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802349D0: jr          $ra
    // 0x802349D4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x802349D4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x802349D8: nop

    // 0x802349DC: nop

;}
RECOMP_FUNC void func_80234274_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234274: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80234278: lh          $v1, 0x49C4($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X49C4);
    // 0x8023427C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80234280: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80234284: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80234288: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8023428C: lh          $v0, 0x14($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X14);
    // 0x80234290: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80234294: lh          $a0, 0x49C6($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X49C6);
    // 0x80234298: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8023429C: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x802342A0: lh          $v0, 0x16($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X16);
    // 0x802342A4: subu        $a2, $a0, $v0
    ctx->r6 = SUB32(ctx->r4, ctx->r2);
    // 0x802342A8: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x802342AC: lh          $a0, 0x49C8($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X49C8);
    // 0x802342B0: addiu       $v1, $v1, 0x687E
    ctx->r3 = ADD32(ctx->r3, 0X687E);
    // 0x802342B4: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x802342B8: lh          $v0, 0x18($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X18);
    // 0x802342BC: ori         $a1, $zero, 0xD0FC
    ctx->r5 = 0 | 0XD0FC;
    // 0x802342C0: sltu        $v1, $a1, $v1
    ctx->r3 = ctx->r5 < ctx->r3 ? 1 : 0;
    // 0x802342C4: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x802342C8: bne         $v1, $zero, L_802342EC
    if (ctx->r3 != 0) {
        // 0x802342CC: sw          $a0, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r4;
            goto L_802342EC;
    }
    // 0x802342CC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x802342D0: addiu       $v0, $a2, 0x687E
    ctx->r2 = ADD32(ctx->r6, 0X687E);
    // 0x802342D4: sltu        $v0, $a1, $v0
    ctx->r2 = ctx->r5 < ctx->r2 ? 1 : 0;
    // 0x802342D8: bne         $v0, $zero, L_802342EC
    if (ctx->r2 != 0) {
        // 0x802342DC: addiu       $v0, $a0, 0x687E
        ctx->r2 = ADD32(ctx->r4, 0X687E);
            goto L_802342EC;
    }
    // 0x802342DC: addiu       $v0, $a0, 0x687E
    ctx->r2 = ADD32(ctx->r4, 0X687E);
    // 0x802342E0: sltu        $v0, $a1, $v0
    ctx->r2 = ctx->r5 < ctx->r2 ? 1 : 0;
    // 0x802342E4: beq         $v0, $zero, L_80234314
    if (ctx->r2 == 0) {
        // 0x802342E8: addiu       $a0, $sp, 0x18
        ctx->r4 = ADD32(ctx->r29, 0X18);
            goto L_80234314;
    }
    // 0x802342E8: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
L_802342EC:
    // 0x802342EC: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x802342F0: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x802342F4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x802342F8: sra         $v0, $v0, 2
    ctx->r2 = S32(SIGNED(ctx->r2) >> 2);
    // 0x802342FC: sra         $v1, $v1, 2
    ctx->r3 = S32(SIGNED(ctx->r3) >> 2);
    // 0x80234300: sra         $a0, $a0, 2
    ctx->r4 = S32(SIGNED(ctx->r4) >> 2);
    // 0x80234304: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80234308: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x8023430C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80234310: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
L_80234314:
    // 0x80234314: jal         0x80032308
    // 0x80234318: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_80032308_D708(rdram, ctx);
        goto after_0;
    // 0x80234318: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_0:
    // 0x8023431C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80234320: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x80234324: jal         0x8009A3B4
    // 0x80234328: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80234328: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x8023432C: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x80234330: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80234334: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80234338: jr          $ra
    // 0x8023433C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8023433C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022C590_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C590: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022C594: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022C598: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C59C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022C5A0: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x8022C5A4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022C5A8: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8022C5AC: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x8022C5B0: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x8022C5B4: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x8022C5B8: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8022C5BC: jal         0x8004D5D4
    // 0x8022C5C0: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8022C5C0: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x8022C5C4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C5C8: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022C5CC: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8022C5D0: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022C5D4: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022C5D8: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022C5DC: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022C5E0: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022C5E4: addiu       $v0, $v0, -0x6A50
    ctx->r2 = ADD32(ctx->r2, -0X6A50);
    // 0x8022C5E8: jal         0x8003E934
    // 0x8022C5EC: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    func_8003E934_19D34(rdram, ctx);
        goto after_1;
    // 0x8022C5EC: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022C5F0: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022C5F4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C5F8: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022C5FC: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022C600: sh          $v0, 0x360($s0)
    MEM_H(0X360, ctx->r16) = ctx->r2;
    // 0x8022C604: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022C608: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022C60C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022C610: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
    // 0x8022C614: sh          $zero, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = 0;
    // 0x8022C618: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    // 0x8022C61C: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x8022C620: sh          $zero, 0x362($s0)
    MEM_H(0X362, ctx->r16) = 0;
    // 0x8022C624: sh          $zero, 0x364($s0)
    MEM_H(0X364, ctx->r16) = 0;
    // 0x8022C628: sb          $zero, 0x74($s0)
    MEM_B(0X74, ctx->r16) = 0;
    // 0x8022C62C: sw          $zero, 0x348($s0)
    MEM_W(0X348, ctx->r16) = 0;
    // 0x8022C630: sw          $zero, 0x34C($s0)
    MEM_W(0X34C, ctx->r16) = 0;
    // 0x8022C634: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x8022C638: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x8022C63C: sw          $zero, 0x350($s0)
    MEM_W(0X350, ctx->r16) = 0;
    // 0x8022C640: sw          $v0, 0x354($s0)
    MEM_W(0X354, ctx->r16) = ctx->r2;
    // 0x8022C644: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022C648: jal         0x800A3450
    // 0x8022C64C: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x8022C64C: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    after_2:
    // 0x8022C650: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C654: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8022C658: jal         0x80050294
    // 0x8022C65C: andi        $a2, $v0, 0x3
    ctx->r6 = ctx->r2 & 0X3;
    func_80050294_2B694(rdram, ctx);
        goto after_3;
    // 0x8022C65C: andi        $a2, $v0, 0x3
    ctx->r6 = ctx->r2 & 0X3;
    after_3:
    // 0x8022C660: lhu         $v1, 0x16($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X16);
    // 0x8022C664: lbu         $a2, 0x8($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X8);
    // 0x8022C668: addiu       $a0, $zero, 0x109
    ctx->r4 = ADD32(0, 0X109);
    // 0x8022C66C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022C670: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022C674: sb          $v0, 0x107($s0)
    MEM_B(0X107, ctx->r16) = ctx->r2;
    // 0x8022C678: addiu       $v0, $zero, -0x10
    ctx->r2 = ADD32(0, -0X10);
    // 0x8022C67C: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x8022C680: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C684: sb          $zero, 0xFF($s0)
    MEM_B(0XFF, ctx->r16) = 0;
    // 0x8022C688: sb          $zero, 0x103($s0)
    MEM_B(0X103, ctx->r16) = 0;
    // 0x8022C68C: sb          $v0, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r2;
    // 0x8022C690: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x8022C694: addiu       $v1, $v1, -0x50
    ctx->r3 = ADD32(ctx->r3, -0X50);
    // 0x8022C698: sh          $v1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r3;
    // 0x8022C69C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022C6A0: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x8022C6A4: jal         0x8002A33C
    // 0x8022C6A8: sb          $a2, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r6;
    func_8002A33C_573C(rdram, ctx);
        goto after_4;
    // 0x8022C6A8: sb          $a2, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r6;
    after_4:
    // 0x8022C6AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022C6B0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022C6B4: jr          $ra
    // 0x8022C6B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022C6B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226D68_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226D68: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226D6C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80226D70: jal         0x8004F418
    // 0x80226D74: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x80226D74: nop

    after_0:
    // 0x80226D78: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80226D7C: jr          $ra
    // 0x80226D80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226D80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022BF94_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BF94: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022BF98: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022BF9C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022BFA0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022BFA4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022BFA8: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8022BFAC: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x8022BFB0: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x8022BFB4: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x8022BFB8: beq         $v0, $zero, L_8022C174
    if (ctx->r2 == 0) {
        // 0x8022BFBC: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8022C174;
    }
    // 0x8022BFBC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022BFC0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022BFC4: addu        $at, $at, $v0
    gpr jr_addend_8022BFCC = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022BFC8: lw          $v0, -0x6400($at)
    ctx->r2 = ADD32(ctx->r1, -0X6400);
    // 0x8022BFCC: jr          $v0
    // 0x8022BFD0: nop

    switch (jr_addend_8022BFCC >> 2) {
        case 0: goto L_8022BFD4; break;
        case 1: goto L_8022C094; break;
        case 2: goto L_8022C0B0; break;
        case 3: goto L_8022C118; break;
        case 4: goto L_8022C144; break;
        default: switch_error(__func__, 0x8022BFCC, 0x80239C00);
    }
    // 0x8022BFD0: nop

L_8022BFD4:
    // 0x8022BFD4: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x8022BFD8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022BFDC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022BFE0: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8022BFE4: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x8022BFE8: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x8022BFEC: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x8022BFF0: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8022BFF4: jal         0x8004D5D4
    // 0x8022BFF8: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8022BFF8: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x8022BFFC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C000: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022C004: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8022C008: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022C00C: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022C010: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022C014: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022C018: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022C01C: addiu       $v0, $v0, -0x6A50
    ctx->r2 = ADD32(ctx->r2, -0X6A50);
    // 0x8022C020: jal         0x8003E934
    // 0x8022C024: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    func_8003E934_19D34(rdram, ctx);
        goto after_1;
    // 0x8022C024: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022C028: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8022C02C: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022C030: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C034: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022C038: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022C03C: sh          $v0, 0x360($s0)
    MEM_H(0X360, ctx->r16) = ctx->r2;
    // 0x8022C040: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022C044: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022C048: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022C04C: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
    // 0x8022C050: sh          $zero, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = 0;
    // 0x8022C054: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    // 0x8022C058: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x8022C05C: sh          $zero, 0x362($s0)
    MEM_H(0X362, ctx->r16) = 0;
    // 0x8022C060: sh          $zero, 0x364($s0)
    MEM_H(0X364, ctx->r16) = 0;
    // 0x8022C064: sb          $zero, 0x74($s0)
    MEM_B(0X74, ctx->r16) = 0;
    // 0x8022C068: sw          $zero, 0x348($s0)
    MEM_W(0X348, ctx->r16) = 0;
    // 0x8022C06C: sw          $zero, 0x34C($s0)
    MEM_W(0X34C, ctx->r16) = 0;
    // 0x8022C070: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x8022C074: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x8022C078: sw          $zero, 0x350($s0)
    MEM_W(0X350, ctx->r16) = 0;
    // 0x8022C07C: sw          $v0, 0x354($s0)
    MEM_W(0X354, ctx->r16) = ctx->r2;
    // 0x8022C080: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022C084: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x8022C088: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022C08C: j           L_8022C174
    // 0x8022C090: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
        goto L_8022C174;
    // 0x8022C090: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
L_8022C094:
    // 0x8022C094: jal         0x8022C320
    // 0x8022C098: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022C320_ovl13(rdram, ctx);
        goto after_2;
    // 0x8022C098: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022C09C: beq         $v0, $zero, L_8022C178
    if (ctx->r2 == 0) {
        // 0x8022C0A0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022C178;
    }
    // 0x8022C0A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C0A4: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022C0A8: j           L_8022C170
    // 0x8022C0AC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022C170;
    // 0x8022C0AC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022C0B0:
    // 0x8022C0B0: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022C0B4: lh          $a3, 0x64($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X64);
    // 0x8022C0B8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022C0BC: jal         0x8004F820
    // 0x8022C0C0: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x8022C0C0: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_3:
    // 0x8022C0C4: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022C0C8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022C0CC: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022C0D0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C0D4: bne         $v0, $zero, L_8022C174
    if (ctx->r2 != 0) {
        // 0x8022C0D8: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_8022C174;
    }
    // 0x8022C0D8: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022C0DC: jal         0x8003516C
    // 0x8022C0E0: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_4;
    // 0x8022C0E0: nop

    after_4:
    // 0x8022C0E4: bne         $v0, $zero, L_8022C178
    if (ctx->r2 != 0) {
        // 0x8022C0E8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022C178;
    }
    // 0x8022C0E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C0EC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022C0F0: jal         0x800616FC
    // 0x8022C0F4: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_5;
    // 0x8022C0F4: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    after_5:
    // 0x8022C0F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C0FC: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x8022C100: jal         0x80050294
    // 0x8022C104: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_6;
    // 0x8022C104: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_6:
    // 0x8022C108: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022C10C: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022C110: j           L_8022C170
    // 0x8022C114: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022C170;
    // 0x8022C114: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022C118:
    // 0x8022C118: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022C11C: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022C120: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8022C124: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022C128: bne         $v0, $zero, L_8022C178
    if (ctx->r2 != 0) {
        // 0x8022C12C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022C178;
    }
    // 0x8022C12C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C130: jal         0x80034E3C
    // 0x8022C134: nop

    func_80034E3C_1023C(rdram, ctx);
        goto after_7;
    // 0x8022C134: nop

    after_7:
    // 0x8022C138: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022C13C: j           L_8022C170
    // 0x8022C140: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022C170;
    // 0x8022C140: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022C144:
    // 0x8022C144: jal         0x8003516C
    // 0x8022C148: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_8;
    // 0x8022C148: nop

    after_8:
    // 0x8022C14C: bne         $v0, $zero, L_8022C178
    if (ctx->r2 != 0) {
        // 0x8022C150: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022C178;
    }
    // 0x8022C150: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C154: lbu         $v0, 0xBD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XBD);
    // 0x8022C158: lbu         $v1, 0x0($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X0);
    // 0x8022C15C: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x8022C160: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8022C164: sb          $v0, 0xBD($s1)
    MEM_B(0XBD, ctx->r17) = ctx->r2;
    // 0x8022C168: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C16C: sb          $v1, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r3;
L_8022C170:
    // 0x8022C170: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022C174:
    // 0x8022C174: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022C178:
    // 0x8022C178: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022C17C: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x8022C180: jal         0x80047284
    // 0x8022C184: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_9;
    // 0x8022C184: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_9:
    // 0x8022C188: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022C18C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022C190: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022C194: jr          $ra
    // 0x8022C198: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022C198: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022B544_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B544: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B548: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B54C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B550: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022B554: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022B558: lh          $a3, 0x34E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X34E);
    // 0x8022B55C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022B560: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022B564: jal         0x8004F820
    // 0x8022B568: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022B568: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x8022B56C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022B570: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022B574: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022B578: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022B57C: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8022B580: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x8022B584: bne         $v0, $zero, L_8022B5A8
    if (ctx->r2 != 0) {
        // 0x8022B588: addiu       $v1, $zero, 0x9
        ctx->r3 = ADD32(0, 0X9);
            goto L_8022B5A8;
    }
    // 0x8022B588: addiu       $v1, $zero, 0x9
    ctx->r3 = ADD32(0, 0X9);
    // 0x8022B58C: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x8022B590: lbu         $a0, 0x34B($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X34B);
    // 0x8022B594: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x8022B598: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8022B59C: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x8022B5A0: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    // 0x8022B5A4: sb          $a0, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r4;
L_8022B5A8:
    // 0x8022B5A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022B5AC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B5B0: jr          $ra
    // 0x8022B5B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B5B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802357F4_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802357F4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x802357F8: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x802357FC: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x80235800: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80235804: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80235808: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8023580C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80235810: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80235814: lw          $v1, 0x9C($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X9C);
    // 0x80235818: lui         $v0, 0x2000
    ctx->r2 = S32(0X2000 << 16);
    // 0x8023581C: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x80235820: beq         $v0, $zero, L_8023588C
    if (ctx->r2 == 0) {
        // 0x80235824: nop
    
            goto L_8023588C;
    }
    // 0x80235824: nop

    // 0x80235828: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x8023582C: addiu       $s0, $s0, 0x4A06
    ctx->r16 = ADD32(ctx->r16, 0X4A06);
    // 0x80235830: jal         0x800324B4
    // 0x80235834: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    func_800324B4_D8B4(rdram, ctx);
        goto after_0;
    // 0x80235834: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    after_0:
    // 0x80235838: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8023583C: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x80235840: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x80235844: sh          $v0, 0x44($s4)
    MEM_H(0X44, ctx->r20) = ctx->r2;
    // 0x80235848: addiu       $v0, $zero, -0x1000
    ctx->r2 = ADD32(0, -0X1000);
    // 0x8023584C: sh          $v0, 0x46($s4)
    MEM_H(0X46, ctx->r20) = ctx->r2;
    // 0x80235850: jal         0x80032498
    // 0x80235854: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    func_80032498_D898(rdram, ctx);
        goto after_1;
    // 0x80235854: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    after_1:
    // 0x80235858: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8023585C: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x80235860: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x80235864: sh          $v0, 0x48($s4)
    MEM_H(0X48, ctx->r20) = ctx->r2;
    // 0x80235868: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023586C: sb          $v0, 0xA($s4)
    MEM_B(0XA, ctx->r20) = ctx->r2;
    // 0x80235870: sb          $v0, 0x8($s4)
    MEM_B(0X8, ctx->r20) = ctx->r2;
    // 0x80235874: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80235878: sh          $zero, 0x4C($s4)
    MEM_H(0X4C, ctx->r20) = 0;
    // 0x8023587C: sh          $v0, 0x4E($s4)
    MEM_H(0X4E, ctx->r20) = ctx->r2;
    // 0x80235880: sh          $zero, 0x50($s4)
    MEM_H(0X50, ctx->r20) = 0;
    // 0x80235884: j           L_802358B4
    // 0x80235888: sw          $zero, 0x9C($s4)
    MEM_W(0X9C, ctx->r20) = 0;
        goto L_802358B4;
    // 0x80235888: sw          $zero, 0x9C($s4)
    MEM_W(0X9C, ctx->r20) = 0;
L_8023588C:
    // 0x8023588C: lbu         $v0, 0xA($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XA);
    // 0x80235890: beq         $v0, $zero, L_802358AC
    if (ctx->r2 == 0) {
        // 0x80235894: lui         $v0, 0x1C00
        ctx->r2 = S32(0X1C00 << 16);
            goto L_802358AC;
    }
    // 0x80235894: lui         $v0, 0x1C00
    ctx->r2 = S32(0X1C00 << 16);
L_80235898:
    // 0x80235898: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x8023589C: beq         $v0, $zero, L_802358B4
    if (ctx->r2 == 0) {
        // 0x802358A0: nop
    
            goto L_802358B4;
    }
    // 0x802358A0: nop

    // 0x802358A4: j           L_80235A0C
    // 0x802358A8: sw          $zero, 0x9C($s4)
    MEM_W(0X9C, ctx->r20) = 0;
        goto L_80235A0C;
    // 0x802358A8: sw          $zero, 0x9C($s4)
    MEM_W(0X9C, ctx->r20) = 0;
L_802358AC:
    // 0x802358AC: j           L_80235898
    // 0x802358B0: lui         $v0, 0x1A00
    ctx->r2 = S32(0X1A00 << 16);
        goto L_80235898;
    // 0x802358B0: lui         $v0, 0x1A00
    ctx->r2 = S32(0X1A00 << 16);
L_802358B4:
    // 0x802358B4: lw          $v0, 0x44($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X44);
    // 0x802358B8: bne         $v0, $zero, L_802358CC
    if (ctx->r2 != 0) {
        // 0x802358BC: sw          $zero, 0x9C($s4)
        MEM_W(0X9C, ctx->r20) = 0;
            goto L_802358CC;
    }
    // 0x802358BC: sw          $zero, 0x9C($s4)
    MEM_W(0X9C, ctx->r20) = 0;
    // 0x802358C0: lh          $v0, 0x48($s4)
    ctx->r2 = MEM_H(ctx->r20, 0X48);
    // 0x802358C4: beq         $v0, $zero, L_80235944
    if (ctx->r2 == 0) {
        // 0x802358C8: addiu       $s2, $s4, 0x34
        ctx->r18 = ADD32(ctx->r20, 0X34);
            goto L_80235944;
    }
    // 0x802358C8: addiu       $s2, $s4, 0x34
    ctx->r18 = ADD32(ctx->r20, 0X34);
L_802358CC:
    // 0x802358CC: lbu         $v0, 0x3($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X3);
    // 0x802358D0: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x802358D4: beq         $v0, $zero, L_80235910
    if (ctx->r2 == 0) {
        // 0x802358D8: nop
    
            goto L_80235910;
    }
    // 0x802358D8: nop

    // 0x802358DC: lb          $v0, 0xF($s4)
    ctx->r2 = MEM_B(ctx->r20, 0XF);
    // 0x802358E0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802358E4: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x802358E8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802358EC: lhu         $v1, -0x6608($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X6608);
    // 0x802358F0: lb          $v0, 0xF($s4)
    ctx->r2 = MEM_B(ctx->r20, 0XF);
    // 0x802358F4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802358F8: sb          $v1, 0x96($s4)
    MEM_B(0X96, ctx->r20) = ctx->r3;
    // 0x802358FC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80235900: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80235904: lhu         $v0, -0x6606($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X6606);
    // 0x80235908: j           L_80235940
    // 0x8023590C: sb          $v0, 0x97($s4)
    MEM_B(0X97, ctx->r20) = ctx->r2;
        goto L_80235940;
    // 0x8023590C: sb          $v0, 0x97($s4)
    MEM_B(0X97, ctx->r20) = ctx->r2;
L_80235910:
    // 0x80235910: lb          $v0, 0xF($s4)
    ctx->r2 = MEM_B(ctx->r20, 0XF);
    // 0x80235914: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80235918: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8023591C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80235920: lhu         $v1, -0x6620($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X6620);
    // 0x80235924: lb          $v0, 0xF($s4)
    ctx->r2 = MEM_B(ctx->r20, 0XF);
    // 0x80235928: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023592C: sb          $v1, 0x96($s4)
    MEM_B(0X96, ctx->r20) = ctx->r3;
    // 0x80235930: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80235934: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80235938: lhu         $v0, -0x661E($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X661E);
    // 0x8023593C: sb          $v0, 0x97($s4)
    MEM_B(0X97, ctx->r20) = ctx->r2;
L_80235940:
    // 0x80235940: addiu       $s2, $s4, 0x34
    ctx->r18 = ADD32(ctx->r20, 0X34);
L_80235944:
    // 0x80235944: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80235948: addiu       $s3, $s4, 0x1C
    ctx->r19 = ADD32(ctx->r20, 0X1C);
    // 0x8023594C: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x80235950: jal         0x8009A3B4
    // 0x80235954: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80235954: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_2:
    // 0x80235958: addiu       $s0, $s4, 0x2C
    ctx->r16 = ADD32(ctx->r20, 0X2C);
    // 0x8023595C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235960: addiu       $s1, $s4, 0x14
    ctx->r17 = ADD32(ctx->r20, 0X14);
    // 0x80235964: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80235968: jal         0x8009A3B4
    // 0x8023596C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8023596C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x80235970: jal         0x80235D30
    // 0x80235974: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_80235D30_ovl13(rdram, ctx);
        goto after_4;
    // 0x80235974: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_4:
    // 0x80235978: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8023597C: jal         0x8004DD04
    // 0x80235980: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8004DD04_29104(rdram, ctx);
        goto after_5;
    // 0x80235980: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80235984: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80235988: jal         0x8004DD04
    // 0x8023598C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8004DD04_29104(rdram, ctx);
        goto after_6;
    // 0x8023598C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_6:
    // 0x80235990: jal         0x80235B78
    // 0x80235994: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_80235B78_ovl13(rdram, ctx);
        goto after_7;
    // 0x80235994: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_7:
    // 0x80235998: lhu         $v1, 0x14($s4)
    ctx->r3 = MEM_HU(ctx->r20, 0X14);
    // 0x8023599C: lhu         $v0, 0x16($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X16);
    // 0x802359A0: lhu         $a0, 0x18($s4)
    ctx->r4 = MEM_HU(ctx->r20, 0X18);
    // 0x802359A4: lb          $a1, 0xD($s4)
    ctx->r5 = MEM_B(ctx->r20, 0XD);
    // 0x802359A8: addiu       $v0, $v0, -0x10
    ctx->r2 = ADD32(ctx->r2, -0X10);
    // 0x802359AC: sh          $v0, 0x92($s4)
    MEM_H(0X92, ctx->r20) = ctx->r2;
    // 0x802359B0: slti        $v0, $a1, 0x1E
    ctx->r2 = SIGNED(ctx->r5) < 0X1E ? 1 : 0;
    // 0x802359B4: sh          $v1, 0x90($s4)
    MEM_H(0X90, ctx->r20) = ctx->r3;
    // 0x802359B8: beq         $v0, $zero, L_80235A0C
    if (ctx->r2 == 0) {
        // 0x802359BC: sh          $a0, 0x94($s4)
        MEM_H(0X94, ctx->r20) = ctx->r4;
            goto L_80235A0C;
    }
    // 0x802359BC: sh          $a0, 0x94($s4)
    MEM_H(0X94, ctx->r20) = ctx->r4;
    // 0x802359C0: slti        $v0, $a1, 0xF
    ctx->r2 = SIGNED(ctx->r5) < 0XF ? 1 : 0;
    // 0x802359C4: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x802359C8: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x802359CC: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x802359D0: and         $v0, $a1, $v0
    ctx->r2 = ctx->r5 & ctx->r2;
    // 0x802359D4: beq         $v0, $zero, L_802359FC
    if (ctx->r2 == 0) {
        // 0x802359D8: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_802359FC;
    }
    // 0x802359D8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802359DC: lbu         $v1, 0x8F($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X8F);
    // 0x802359E0: bnel        $v1, $v0, L_802359F4
    if (ctx->r3 != ctx->r2) {
        // 0x802359E4: lui         $v0, 0x2CFF
        ctx->r2 = S32(0X2CFF << 16);
            goto L_802359F4;
    }
    goto skip_0;
    // 0x802359E4: lui         $v0, 0x2CFF
    ctx->r2 = S32(0X2CFF << 16);
    skip_0:
    // 0x802359E8: lui         $v0, 0x2C80
    ctx->r2 = S32(0X2C80 << 16);
    // 0x802359EC: j           L_802359F8
    // 0x802359F0: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
        goto L_802359F8;
    // 0x802359F0: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
L_802359F4:
    // 0x802359F4: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
L_802359F8:
    // 0x802359F8: sw          $v0, 0x8C($s4)
    MEM_W(0X8C, ctx->r20) = ctx->r2;
L_802359FC:
    // 0x802359FC: lbu         $v0, 0xD($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XD);
    // 0x80235A00: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80235A04: j           L_80235A30
    // 0x80235A08: sb          $v0, 0xD($s4)
    MEM_B(0XD, ctx->r20) = ctx->r2;
        goto L_80235A30;
    // 0x80235A08: sb          $v0, 0xD($s4)
    MEM_B(0XD, ctx->r20) = ctx->r2;
L_80235A0C:
    // 0x80235A0C: jal         0x8004F144
    // 0x80235A10: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_8;
    // 0x80235A10: nop

    after_8:
    // 0x80235A14: beq         $v0, $zero, L_80235A24
    if (ctx->r2 == 0) {
        // 0x80235A18: addu        $a0, $s4, $zero
        ctx->r4 = ADD32(ctx->r20, 0);
            goto L_80235A24;
    }
    // 0x80235A18: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x80235A1C: jal         0x80235E20
    // 0x80235A20: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_80235E20_ovl13(rdram, ctx);
        goto after_9;
    // 0x80235A20: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_9:
L_80235A24:
    // 0x80235A24: sb          $zero, 0x0($s4)
    MEM_B(0X0, ctx->r20) = 0;
    // 0x80235A28: jal         0x8004F4F8
    // 0x80235A2C: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_10;
    // 0x80235A2C: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_10:
L_80235A30:
    // 0x80235A30: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80235A34: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80235A38: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80235A3C: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80235A40: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80235A44: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80235A48: jr          $ra
    // 0x80235A4C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80235A4C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80237560_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237560: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x80237564: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x80237568: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8023756C: beq         $v1, $a0, L_802375F4
    if (ctx->r3 == ctx->r4) {
        // 0x80237570: addiu       $sp, $sp, -0x8
        ctx->r29 = ADD32(ctx->r29, -0X8);
            goto L_802375F4;
    }
    // 0x80237570: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80237574: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80237578: beq         $v0, $zero, L_8023762C
    if (ctx->r2 == 0) {
        // 0x8023757C: nop
    
            goto L_8023762C;
    }
    // 0x8023757C: nop

    // 0x80237580: bne         $v1, $zero, L_8023762C
    if (ctx->r3 != 0) {
        // 0x80237584: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023762C;
    }
    // 0x80237584: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80237588: lb          $v1, 0xC($a1)
    ctx->r3 = MEM_B(ctx->r5, 0XC);
    // 0x8023758C: beq         $v1, $a0, L_802375D0
    if (ctx->r3 == ctx->r4) {
        // 0x80237590: sb          $v0, 0x9($a1)
        MEM_B(0X9, ctx->r5) = ctx->r2;
            goto L_802375D0;
    }
    // 0x80237590: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x80237594: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80237598: beql        $v0, $zero, L_802375B0
    if (ctx->r2 == 0) {
        // 0x8023759C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802375B0;
    }
    goto skip_0;
    // 0x8023759C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x802375A0: beq         $v1, $zero, L_802375C0
    if (ctx->r3 == 0) {
        // 0x802375A4: lui         $v0, 0x2E00
        ctx->r2 = S32(0X2E00 << 16);
            goto L_802375C0;
    }
    // 0x802375A4: lui         $v0, 0x2E00
    ctx->r2 = S32(0X2E00 << 16);
    // 0x802375A8: j           L_802375F4
    // 0x802375AC: nop

        goto L_802375F4;
    // 0x802375AC: nop

L_802375B0:
    // 0x802375B0: beq         $v1, $v0, L_802375E4
    if (ctx->r3 == ctx->r2) {
        // 0x802375B4: lui         $v0, 0x2E00
        ctx->r2 = S32(0X2E00 << 16);
            goto L_802375E4;
    }
    // 0x802375B4: lui         $v0, 0x2E00
    ctx->r2 = S32(0X2E00 << 16);
    // 0x802375B8: j           L_802375F4
    // 0x802375BC: nop

        goto L_802375F4;
    // 0x802375BC: nop

L_802375C0:
    // 0x802375C0: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
    // 0x802375C4: sw          $v0, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r2;
    // 0x802375C8: j           L_802375F0
    // 0x802375CC: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_802375F0;
    // 0x802375CC: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_802375D0:
    // 0x802375D0: lui         $v0, 0x2E00
    ctx->r2 = S32(0X2E00 << 16);
    // 0x802375D4: ori         $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 | 0X8000;
    // 0x802375D8: sw          $v0, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r2;
    // 0x802375DC: j           L_802375F0
    // 0x802375E0: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
        goto L_802375F0;
    // 0x802375E0: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
L_802375E4:
    // 0x802375E4: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x802375E8: sw          $v0, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r2;
    // 0x802375EC: addiu       $v0, $zero, 0x808
    ctx->r2 = ADD32(0, 0X808);
L_802375F0:
    // 0x802375F0: sh          $v0, 0x26($a1)
    MEM_H(0X26, ctx->r5) = ctx->r2;
L_802375F4:
    // 0x802375F4: lh          $v0, 0x24($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X24);
    // 0x802375F8: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x802375FC: slti        $v0, $v0, 0x20
    ctx->r2 = SIGNED(ctx->r2) < 0X20 ? 1 : 0;
    // 0x80237600: bne         $v0, $zero, L_80237618
    if (ctx->r2 != 0) {
        // 0x80237604: addiu       $a0, $a0, 0x6
        ctx->r4 = ADD32(ctx->r4, 0X6);
            goto L_80237618;
    }
    // 0x80237604: addiu       $a0, $a0, 0x6
    ctx->r4 = ADD32(ctx->r4, 0X6);
    // 0x80237608: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023760C: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x80237610: j           L_8023762C
    // 0x80237614: sh          $zero, 0x24($a1)
    MEM_H(0X24, ctx->r5) = 0;
        goto L_8023762C;
    // 0x80237614: sh          $zero, 0x24($a1)
    MEM_H(0X24, ctx->r5) = 0;
L_80237618:
    // 0x80237618: lhu         $v0, 0x26($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X26);
    // 0x8023761C: lw          $v1, 0x18($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X18);
    // 0x80237620: sh          $a0, 0x24($a1)
    MEM_H(0X24, ctx->r5) = ctx->r4;
    // 0x80237624: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80237628: sw          $v1, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r3;
L_8023762C:
    // 0x8023762C: jr          $ra
    // 0x80237630: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x80237630: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8022CA9C_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CA9C: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8022CAA0: lhu         $v0, -0x3BBA($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3BBA);
    // 0x8022CAA4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022CAA8: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022CAAC: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x8022CAB0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8022CAB4: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x8022CAB8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022CABC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022CAC0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022CAC4: sll         $a2, $v0, 16
    ctx->r6 = S32(ctx->r2 << 16);
    // 0x8022CAC8: sra         $v1, $a2, 16
    ctx->r3 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8022CACC: bgez        $v1, L_8022CAD8
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8022CAD0: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_8022CAD8;
    }
    // 0x8022CAD0: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x8022CAD4: addiu       $v0, $v1, 0x3
    ctx->r2 = ADD32(ctx->r3, 0X3);
L_8022CAD8:
    // 0x8022CAD8: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x8022CADC: lh          $a1, -0x3BBC($a1)
    ctx->r5 = MEM_H(ctx->r5, -0X3BBC);
    // 0x8022CAE0: sra         $a0, $v0, 2
    ctx->r4 = S32(SIGNED(ctx->r2) >> 2);
    // 0x8022CAE4: slt         $v0, $a0, $a1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8022CAE8: bne         $v0, $zero, L_8022CAF8
    if (ctx->r2 != 0) {
        // 0x8022CAEC: srl         $v0, $a2, 31
        ctx->r2 = S32(U32(ctx->r6) >> 31);
            goto L_8022CAF8;
    }
    // 0x8022CAEC: srl         $v0, $a2, 31
    ctx->r2 = S32(U32(ctx->r6) >> 31);
    // 0x8022CAF0: j           L_8022CB20
    // 0x8022CAF4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_8022CB20;
    // 0x8022CAF4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_8022CAF8:
    // 0x8022CAF8: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x8022CAFC: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x8022CB00: slt         $v0, $v0, $a1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8022CB04: bne         $v0, $zero, L_8022CB14
    if (ctx->r2 != 0) {
        // 0x8022CB08: sll         $v0, $a0, 1
        ctx->r2 = S32(ctx->r4 << 1);
            goto L_8022CB14;
    }
    // 0x8022CB08: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x8022CB0C: j           L_8022CB20
    // 0x8022CB10: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_8022CB20;
    // 0x8022CB10: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8022CB14:
    // 0x8022CB14: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8022CB18: slt         $v0, $v0, $a1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8022CB1C: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
L_8022CB20:
    // 0x8022CB20: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022CB24: beq         $v0, $zero, L_8022CBA0
    if (ctx->r2 == 0) {
        // 0x8022CB28: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_8022CBA0;
    }
    // 0x8022CB28: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x8022CB2C: addu        $s4, $v0, $zero
    ctx->r20 = ADD32(ctx->r2, 0);
    // 0x8022CB30: andi        $v0, $s1, 0xFF
    ctx->r2 = ctx->r17 & 0XFF;
L_8022CB34:
    // 0x8022CB34: addu        $v0, $s3, $v0
    ctx->r2 = ADD32(ctx->r19, ctx->r2);
    // 0x8022CB38: lbu         $v0, 0x4($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4);
    // 0x8022CB3C: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
    // 0x8022CB40: beq         $v0, $zero, L_8022CB70
    if (ctx->r2 == 0) {
        // 0x8022CB44: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_8022CB70;
    }
    // 0x8022CB44: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x8022CB48: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x8022CB4C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_8022CB50:
    // 0x8022CB50: andi        $a1, $s1, 0xFF
    ctx->r5 = ctx->r17 & 0XFF;
    // 0x8022CB54: jal         0x8022CFE0
    // 0x8022CB58: andi        $a2, $s0, 0xFF
    ctx->r6 = ctx->r16 & 0XFF;
    func_8022CFE0_ovl13(rdram, ctx);
        goto after_0;
    // 0x8022CB58: andi        $a2, $s0, 0xFF
    ctx->r6 = ctx->r16 & 0XFF;
    after_0:
    // 0x8022CB5C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8022CB60: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
    // 0x8022CB64: sltu        $v0, $v0, $s2
    ctx->r2 = ctx->r2 < ctx->r18 ? 1 : 0;
    // 0x8022CB68: bne         $v0, $zero, L_8022CB50
    if (ctx->r2 != 0) {
        // 0x8022CB6C: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_8022CB50;
    }
    // 0x8022CB6C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_8022CB70:
    // 0x8022CB70: andi        $v0, $s1, 0xFF
    ctx->r2 = ctx->r17 & 0XFF;
    // 0x8022CB74: addu        $a0, $s3, $v0
    ctx->r4 = ADD32(ctx->r19, ctx->r2);
    // 0x8022CB78: lbu         $v1, 0x4($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X4);
    // 0x8022CB7C: sltiu       $v0, $v1, 0x40
    ctx->r2 = ctx->r3 < 0X40 ? 1 : 0;
    // 0x8022CB80: beq         $v0, $zero, L_8022CB8C
    if (ctx->r2 == 0) {
        // 0x8022CB84: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_8022CB8C;
    }
    // 0x8022CB84: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8022CB88: sb          $v0, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r2;
L_8022CB8C:
    // 0x8022CB8C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8022CB90: andi        $v0, $s1, 0xFF
    ctx->r2 = ctx->r17 & 0XFF;
    // 0x8022CB94: sltu        $v0, $v0, $s4
    ctx->r2 = ctx->r2 < ctx->r20 ? 1 : 0;
    // 0x8022CB98: bne         $v0, $zero, L_8022CB34
    if (ctx->r2 != 0) {
        // 0x8022CB9C: andi        $v0, $s1, 0xFF
        ctx->r2 = ctx->r17 & 0XFF;
            goto L_8022CB34;
    }
    // 0x8022CB9C: andi        $v0, $s1, 0xFF
    ctx->r2 = ctx->r17 & 0XFF;
L_8022CBA0:
    // 0x8022CBA0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8022CBA4: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x8022CBA8: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022CBAC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022CBB0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022CBB4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022CBB8: jr          $ra
    // 0x8022CBBC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022CBBC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022B798_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B798: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x8022B79C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B7A0: beq         $a1, $v0, L_8022B7CC
    if (ctx->r5 == ctx->r2) {
        // 0x8022B7A4: addiu       $v0, $zero, 0x2A
        ctx->r2 = ADD32(0, 0X2A);
            goto L_8022B7CC;
    }
    // 0x8022B7A4: addiu       $v0, $zero, 0x2A
    ctx->r2 = ADD32(0, 0X2A);
    // 0x8022B7A8: lbu         $a0, 0x2($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X2);
    // 0x8022B7AC: bne         $a0, $v0, L_8022B7BC
    if (ctx->r4 != ctx->r2) {
        // 0x8022B7B0: addiu       $v1, $zero, 0x5
        ctx->r3 = ADD32(0, 0X5);
            goto L_8022B7BC;
    }
    // 0x8022B7B0: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x8022B7B4: j           L_8022B7DC
    // 0x8022B7B8: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
        goto L_8022B7DC;
    // 0x8022B7B8: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
L_8022B7BC:
    // 0x8022B7BC: bne         $a0, $v1, L_8022B7DC
    if (ctx->r4 != ctx->r3) {
        // 0x8022B7C0: addiu       $v0, $zero, 0x180
        ctx->r2 = ADD32(0, 0X180);
            goto L_8022B7DC;
    }
    // 0x8022B7C0: addiu       $v0, $zero, 0x180
    ctx->r2 = ADD32(0, 0X180);
    // 0x8022B7C4: j           L_8022B7DC
    // 0x8022B7C8: addiu       $v0, $zero, 0x140
    ctx->r2 = ADD32(0, 0X140);
        goto L_8022B7DC;
    // 0x8022B7C8: addiu       $v0, $zero, 0x140
    ctx->r2 = ADD32(0, 0X140);
L_8022B7CC:
    // 0x8022B7CC: lbu         $v0, 0x2($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X2);
    // 0x8022B7D0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022B7D4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022B7D8: lbu         $v0, -0x6D10($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X6D10);
L_8022B7DC:
    // 0x8022B7DC: jr          $ra
    // 0x8022B7E0: nop

    TRACE_RETURN()
    return;
    // 0x8022B7E0: nop

;}
RECOMP_FUNC void func_8022F8DC_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F8DC: sll         $v0, $a1, 16
    ctx->r2 = S32(ctx->r5 << 16);
    // 0x8022F8E0: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022F8E4: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x8022F8E8: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8022F8EC: subu        $v0, $v1, $a2
    ctx->r2 = SUB32(ctx->r3, ctx->r6);
    // 0x8022F8F0: bltzl       $v0, L_8022F8F8
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022F8F4: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_8022F8F8;
    }
    goto skip_0;
    // 0x8022F8F4: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_0:
L_8022F8F8:
    // 0x8022F8F8: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x8022F8FC: bne         $v0, $zero, L_8022F914
    if (ctx->r2 != 0) {
        // 0x8022F900: slt         $v0, $a2, $v1
        ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_8022F914;
    }
    // 0x8022F900: slt         $v0, $a2, $v1
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8022F904: bne         $v0, $zero, L_8022F910
    if (ctx->r2 != 0) {
        // 0x8022F908: addiu       $v0, $a1, -0x20
        ctx->r2 = ADD32(ctx->r5, -0X20);
            goto L_8022F910;
    }
    // 0x8022F908: addiu       $v0, $a1, -0x20
    ctx->r2 = ADD32(ctx->r5, -0X20);
    // 0x8022F90C: addiu       $v0, $a1, 0x20
    ctx->r2 = ADD32(ctx->r5, 0X20);
L_8022F910:
    // 0x8022F910: sh          $v0, 0x328($a0)
    MEM_H(0X328, ctx->r4) = ctx->r2;
L_8022F914:
    // 0x8022F914: jr          $ra
    // 0x8022F918: nop

    TRACE_RETURN()
    return;
    // 0x8022F918: nop

    // 0x8022F91C: nop

;}
RECOMP_FUNC void func_80227618_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227618: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022761C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80227620: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80227624: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80227628: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x8022762C: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x80227630: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x80227634: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80227638: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022763C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227640: lw          $v1, 0x35C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X35C);
    // 0x80227644: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x80227648: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x8022764C: and         $s2, $v1, $v0
    ctx->r18 = ctx->r3 & ctx->r2;
    // 0x80227650: beq         $s2, $zero, L_8022783C
    if (ctx->r18 == 0) {
        // 0x80227654: addiu       $s3, $s1, 0x348
        ctx->r19 = ADD32(ctx->r17, 0X348);
            goto L_8022783C;
    }
    // 0x80227654: addiu       $s3, $s1, 0x348
    ctx->r19 = ADD32(ctx->r17, 0X348);
    // 0x80227658: lui         $v0, 0x3800
    ctx->r2 = S32(0X3800 << 16);
    // 0x8022765C: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x80227660: beql        $v0, $zero, L_80227834
    if (ctx->r2 == 0) {
        // 0x80227664: addiu       $a0, $zero, 0xA3
        ctx->r4 = ADD32(0, 0XA3);
            goto L_80227834;
    }
    goto skip_0;
    // 0x80227664: addiu       $a0, $zero, 0xA3
    ctx->r4 = ADD32(0, 0XA3);
    skip_0:
    // 0x80227668: lhu         $v0, 0x6E($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X6E);
    // 0x8022766C: lhu         $v1, 0x6E($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X6E);
    // 0x80227670: subu        $v0, $v0, $s2
    ctx->r2 = SUB32(ctx->r2, ctx->r18);
    // 0x80227674: sh          $v0, 0x6E($s1)
    MEM_H(0X6E, ctx->r17) = ctx->r2;
    // 0x80227678: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022767C: bgtz        $v0, L_80227774
    if (SIGNED(ctx->r2) > 0) {
        // 0x80227680: sh          $v1, 0xB2($s1)
        MEM_H(0XB2, ctx->r17) = ctx->r3;
            goto L_80227774;
    }
    // 0x80227680: sh          $v1, 0xB2($s1)
    MEM_H(0XB2, ctx->r17) = ctx->r3;
    // 0x80227684: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x80227688: lhu         $a0, 0x348($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X348);
    // 0x8022768C: lbu         $v1, 0x2($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X2);
    // 0x80227690: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80227694: lw          $a1, 0x298($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X298);
    // 0x80227698: addiu       $s6, $zero, 0x1
    ctx->r22 = ADD32(0, 0X1);
    // 0x8022769C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802276A0: sh          $v0, 0xB2($s1)
    MEM_H(0XB2, ctx->r17) = ctx->r2;
    // 0x802276A4: sh          $v0, 0x6E($s1)
    MEM_H(0X6E, ctx->r17) = ctx->r2;
    // 0x802276A8: andi        $a0, $a0, 0xFFF3
    ctx->r4 = ctx->r4 & 0XFFF3;
    // 0x802276AC: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x802276B0: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x802276B4: sh          $a0, 0x348($s1)
    MEM_H(0X348, ctx->r17) = ctx->r4;
    // 0x802276B8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x802276BC: addiu       $s5, $zero, 0x83
    ctx->r21 = ADD32(0, 0X83);
    // 0x802276C0: addiu       $s4, $zero, 0x3
    ctx->r20 = ADD32(0, 0X3);
    // 0x802276C4: lbu         $s2, 0x19($v0)
    ctx->r18 = MEM_BU(ctx->r2, 0X19);
L_802276C8:
    // 0x802276C8: jal         0x8004F144
    // 0x802276CC: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x802276CC: nop

    after_0:
    // 0x802276D0: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x802276D4: beq         $a1, $zero, L_80227768
    if (ctx->r5 == 0) {
        // 0x802276D8: sll         $a0, $s0, 16
        ctx->r4 = S32(ctx->r16 << 16);
            goto L_80227768;
    }
    // 0x802276D8: sll         $a0, $s0, 16
    ctx->r4 = S32(ctx->r16 << 16);
    // 0x802276DC: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x802276E0: sb          $s6, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r22;
    // 0x802276E4: sb          $s5, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r21;
    // 0x802276E8: sb          $s4, 0x3($a1)
    MEM_B(0X3, ctx->r5) = ctx->r20;
    // 0x802276EC: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802276F0: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x802276F4: lbu         $v0, -0x7270($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7270);
    // 0x802276F8: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x802276FC: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x80227700: lhu         $v0, 0x180($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X180);
    // 0x80227704: sh          $v0, 0x1C($a1)
    MEM_H(0X1C, ctx->r5) = ctx->r2;
    // 0x80227708: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022770C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80227710: lbu         $v0, -0x7270($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7270);
    // 0x80227714: sll         $v1, $a0, 1
    ctx->r3 = S32(ctx->r4 << 1);
    // 0x80227718: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022771C: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x80227720: lhu         $v0, 0x182($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X182);
    // 0x80227724: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80227728: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8022772C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80227730: sh          $v0, 0x1E($a1)
    MEM_H(0X1E, ctx->r5) = ctx->r2;
    // 0x80227734: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80227738: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8022773C: lbu         $v0, -0x7270($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7270);
    // 0x80227740: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80227744: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x80227748: lhu         $v1, 0x184($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X184);
    // 0x8022774C: addiu       $v0, $s0, 0x1
    ctx->r2 = ADD32(ctx->r16, 0X1);
    // 0x80227750: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80227754: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227758: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022775C: slti        $v0, $v0, 0x4
    ctx->r2 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x80227760: bne         $v0, $zero, L_802276C8
    if (ctx->r2 != 0) {
        // 0x80227764: sh          $v1, 0x20($a1)
        MEM_H(0X20, ctx->r5) = ctx->r3;
            goto L_802276C8;
    }
    // 0x80227764: sh          $v1, 0x20($a1)
    MEM_H(0X20, ctx->r5) = ctx->r3;
L_80227768:
    // 0x80227768: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022776C: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x80227770: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
L_80227774:
    // 0x80227774: lhu         $v0, 0x0($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X0);
    // 0x80227778: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x8022777C: beq         $v0, $zero, L_80227820
    if (ctx->r2 == 0) {
        // 0x80227780: addiu       $a0, $zero, 0xA0
        ctx->r4 = ADD32(0, 0XA0);
            goto L_80227820;
    }
    // 0x80227780: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x80227784: lhu         $v0, 0xA($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0XA);
    // 0x80227788: lw          $v1, 0x14($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X14);
    // 0x8022778C: addu        $a0, $v0, $s2
    ctx->r4 = ADD32(ctx->r2, ctx->r18);
    // 0x80227790: lui         $v0, 0x2000
    ctx->r2 = S32(0X2000 << 16);
    // 0x80227794: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x80227798: bne         $v1, $zero, L_802277D0
    if (ctx->r3 != 0) {
        // 0x8022779C: sh          $a0, 0xA($s3)
        MEM_H(0XA, ctx->r19) = ctx->r4;
            goto L_802277D0;
    }
    // 0x8022779C: sh          $a0, 0xA($s3)
    MEM_H(0XA, ctx->r19) = ctx->r4;
    // 0x802277A0: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x802277A4: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x802277A8: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x802277AC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802277B0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802277B4: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x802277B8: lbu         $v1, 0x19($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X19);
    // 0x802277BC: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x802277C0: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802277C4: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x802277C8: bnel        $v0, $zero, L_80227828
    if (ctx->r2 != 0) {
        // 0x802277CC: sh          $zero, 0xA($s1)
        MEM_H(0XA, ctx->r17) = 0;
            goto L_80227828;
    }
    goto skip_1;
    // 0x802277CC: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
    skip_1:
L_802277D0:
    // 0x802277D0: addiu       $a0, $zero, 0xA2
    ctx->r4 = ADD32(0, 0XA2);
    // 0x802277D4: addiu       $s0, $s1, 0x14
    ctx->r16 = ADD32(ctx->r17, 0X14);
    // 0x802277D8: jal         0x8002A33C
    // 0x802277DC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x802277DC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x802277E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802277E4: lh          $a2, 0x56($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X56);
    // 0x802277E8: addiu       $a1, $s3, 0x1C
    ctx->r5 = ADD32(ctx->r19, 0X1C);
    // 0x802277EC: jal         0x8004FEA0
    // 0x802277F0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004FEA0_2B2A0(rdram, ctx);
        goto after_2;
    // 0x802277F0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_2:
    // 0x802277F4: addiu       $v1, $v0, 0x800
    ctx->r3 = ADD32(ctx->r2, 0X800);
    // 0x802277F8: sh          $v1, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r3;
    // 0x802277FC: lui         $v1, 0xFFFF
    ctx->r3 = S32(0XFFFF << 16);
    // 0x80227800: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80227804: bne         $v0, $zero, L_80227810
    if (ctx->r2 != 0) {
        // 0x80227808: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80227810;
    }
    // 0x80227808: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022780C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80227810:
    // 0x80227810: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x80227814: sh          $zero, 0xA($s3)
    MEM_H(0XA, ctx->r19) = 0;
    // 0x80227818: j           L_80227828
    // 0x8022781C: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
        goto L_80227828;
    // 0x8022781C: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
L_80227820:
    // 0x80227820: jal         0x8002A33C
    // 0x80227824: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_3;
    // 0x80227824: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_3:
L_80227828:
    // 0x80227828: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x8022782C: j           L_8022783C
    // 0x80227830: sh          $v0, 0x15E($s1)
    MEM_H(0X15E, ctx->r17) = ctx->r2;
        goto L_8022783C;
    // 0x80227830: sh          $v0, 0x15E($s1)
    MEM_H(0X15E, ctx->r17) = ctx->r2;
L_80227834:
    // 0x80227834: jal         0x8002A33C
    // 0x80227838: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_4;
    // 0x80227838: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_4:
L_8022783C:
    // 0x8022783C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227840: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80227844: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x80227848: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x8022784C: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x80227850: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80227854: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80227858: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022785C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227860: jr          $ra
    // 0x80227864: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80227864: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80227868: nop

    // 0x8022786C: nop

;}
RECOMP_FUNC void func_80226D84_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226D84: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80226D88: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x80226D8C: beq         $v1, $zero, L_80226DA8
    if (ctx->r3 == 0) {
        // 0x80226D90: addiu       $a1, $a0, 0x348
        ctx->r5 = ADD32(ctx->r4, 0X348);
            goto L_80226DA8;
    }
    // 0x80226D90: addiu       $a1, $a0, 0x348
    ctx->r5 = ADD32(ctx->r4, 0X348);
    // 0x80226D94: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226D98: beq         $v1, $v0, L_80226DB4
    if (ctx->r3 == ctx->r2) {
        // 0x80226D9C: nop
    
            goto L_80226DB4;
    }
    // 0x80226D9C: nop

    // 0x80226DA0: j           L_80226DE0
    // 0x80226DA4: nop

        goto L_80226DE0;
    // 0x80226DA4: nop

L_80226DA8:
    // 0x80226DA8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226DAC: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x80226DB0: sb          $zero, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = 0;
L_80226DB4:
    // 0x80226DB4: lhu         $a0, 0x0($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X0);
    // 0x80226DB8: andi        $v0, $a0, 0x10
    ctx->r2 = ctx->r4 & 0X10;
    // 0x80226DBC: bne         $v0, $zero, L_80226DDC
    if (ctx->r2 != 0) {
        // 0x80226DC0: ori         $v0, $a0, 0x1
        ctx->r2 = ctx->r4 | 0X1;
            goto L_80226DDC;
    }
    // 0x80226DC0: ori         $v0, $a0, 0x1
    ctx->r2 = ctx->r4 | 0X1;
    // 0x80226DC4: lw          $v0, 0x14($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X14);
    // 0x80226DC8: lui         $v1, 0xFF
    ctx->r3 = S32(0XFF << 16);
    // 0x80226DCC: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x80226DD0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80226DD4: beq         $v0, $zero, L_80226DE0
    if (ctx->r2 == 0) {
        // 0x80226DD8: ori         $v0, $a0, 0x1
        ctx->r2 = ctx->r4 | 0X1;
            goto L_80226DE0;
    }
    // 0x80226DD8: ori         $v0, $a0, 0x1
    ctx->r2 = ctx->r4 | 0X1;
L_80226DDC:
    // 0x80226DDC: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
L_80226DE0:
    // 0x80226DE0: jr          $ra
    // 0x80226DE4: nop

    TRACE_RETURN()
    return;
    // 0x80226DE4: nop

;}
RECOMP_FUNC void func_802326C4_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802326C4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802326C8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802326CC: jal         0x8004EF48
    // 0x802326D0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_8004EF48_2A348(rdram, ctx);
        goto after_0;
    // 0x802326D0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x802326D4: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x802326D8: bne         $s0, $zero, L_802326E8
    if (ctx->r16 != 0) {
        // 0x802326DC: addiu       $a0, $s0, 0x1C
        ctx->r4 = ADD32(ctx->r16, 0X1C);
            goto L_802326E8;
    }
    // 0x802326DC: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x802326E0: j           L_80232758
    // 0x802326E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80232758;
    // 0x802326E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802326E8:
    // 0x802326E8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x802326EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802326F0: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x802326F4: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x802326F8: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    // 0x802326FC: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x80232700: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
    // 0x80232704: lui         $v0, 0xEB00
    ctx->r2 = S32(0XEB00 << 16);
    // 0x80232708: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x8023270C: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x80232710: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x80232714: lui         $v0, 0x1A00
    ctx->r2 = S32(0X1A00 << 16);
    // 0x80232718: sb          $zero, 0x3($s0)
    MEM_B(0X3, ctx->r16) = 0;
    // 0x8023271C: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x80232720: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    // 0x80232724: jal         0x8004DD04
    // 0x80232728: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    func_8004DD04_29104(rdram, ctx);
        goto after_1;
    // 0x80232728: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    after_1:
    // 0x8023272C: lui         $v0, 0x20
    ctx->r2 = S32(0X20 << 16);
    // 0x80232730: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x80232734: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80232738: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8023273C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80232740: addiu       $a3, $zero, 0x50
    ctx->r7 = ADD32(0, 0X50);
    // 0x80232744: sh          $zero, 0xB0($a0)
    MEM_H(0XB0, ctx->r4) = 0;
    // 0x80232748: sh          $zero, 0x6E($a0)
    MEM_H(0X6E, ctx->r4) = 0;
    // 0x8023274C: jal         0x8004A00C
    // 0x80232750: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_8004A00C_2540C(rdram, ctx);
        goto after_2;
    // 0x80232750: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_2:
    // 0x80232754: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80232758:
    // 0x80232758: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8023275C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80232760: jr          $ra
    // 0x80232764: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80232764: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80225330_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225330: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225334: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80225338: jal         0x80060798
    // 0x8022533C: nop

    func_80060798_3BB98(rdram, ctx);
        goto after_0;
    // 0x8022533C: nop

    after_0:
    // 0x80225340: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x80225344: lb          $a1, -0x3BC6($a1)
    ctx->r5 = MEM_B(ctx->r5, -0X3BC6);
    // 0x80225348: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022534C: addiu       $v0, $v0, -0x7CCC
    ctx->r2 = ADD32(ctx->r2, -0X7CCC);
    // 0x80225350: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80225354: addiu       $a0, $a0, -0x7CD4
    ctx->r4 = ADD32(ctx->r4, -0X7CD4);
    // 0x80225358: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8022535C: sw          $zero, -0x359C($at)
    MEM_W(-0X359C, ctx->r1) = 0;
    // 0x80225360: sll         $a1, $a1, 3
    ctx->r5 = S32(ctx->r5 << 3);
    // 0x80225364: jal         0x8006100C
    // 0x80225368: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    func_8006100C_3C40C(rdram, ctx);
        goto after_1;
    // 0x80225368: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    after_1:
    // 0x8022536C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80225370: jr          $ra
    // 0x80225374: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225374: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022C44C_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C44C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022C450: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022C454: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C458: beq         $a1, $zero, L_8022C4A8
    if (ctx->r5 == 0) {
        // 0x8022C45C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8022C4A8;
    }
    // 0x8022C45C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022C460: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x8022C464: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022C468: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x8022C46C: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022C470: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8022C474: slti        $v0, $v0, 0x3D
    ctx->r2 = SIGNED(ctx->r2) < 0X3D ? 1 : 0;
    // 0x8022C478: bne         $v0, $zero, L_8022C4A8
    if (ctx->r2 != 0) {
        // 0x8022C47C: nop
    
            goto L_8022C4A8;
    }
    // 0x8022C47C: nop

    // 0x8022C480: jal         0x800A3450
    // 0x8022C484: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8022C484: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    after_0:
    // 0x8022C488: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x8022C48C: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
    // 0x8022C490: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022C494: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x8022C498: addiu       $v0, $v0, 0x7D0
    ctx->r2 = ADD32(ctx->r2, 0X7D0);
    // 0x8022C49C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022C4A0: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022C4A4: sh          $v1, 0x66($s0)
    MEM_H(0X66, ctx->r16) = ctx->r3;
L_8022C4A8:
    // 0x8022C4A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022C4AC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022C4B0: jr          $ra
    // 0x8022C4B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022C4B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80232A90_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232A90: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80232A94: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80232A98: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x80232A9C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80232AA0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80232AA4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80232AA8: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x80232AAC: lui         $a3, 0xFF
    ctx->r7 = S32(0XFF << 16);
    // 0x80232AB0: ori         $a3, $a3, 0xFFFF
    ctx->r7 = ctx->r7 | 0XFFFF;
    // 0x80232AB4: lui         $t0, 0x3800
    ctx->r8 = S32(0X3800 << 16);
    // 0x80232AB8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80232ABC: addiu       $s2, $s4, 0x440
    ctx->r18 = ADD32(ctx->r20, 0X440);
    // 0x80232AC0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80232AC4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80232AC8: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80232ACC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
L_80232AD0:
    // 0x80232AD0: lw          $v0, 0x90($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X90);
    // 0x80232AD4: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x80232AD8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80232ADC: and         $v1, $v0, $a3
    ctx->r3 = ctx->r2 & ctx->r7;
    // 0x80232AE0: and         $v0, $v0, $t0
    ctx->r2 = ctx->r2 & ctx->r8;
    // 0x80232AE4: or          $a2, $a2, $v0
    ctx->r6 = ctx->r6 | ctx->r2;
    // 0x80232AE8: slti        $v0, $s1, 0x6
    ctx->r2 = SIGNED(ctx->r17) < 0X6 ? 1 : 0;
    // 0x80232AEC: bne         $v0, $zero, L_80232AD0
    if (ctx->r2 != 0) {
        // 0x80232AF0: addu        $a1, $a1, $v1
        ctx->r5 = ADD32(ctx->r5, ctx->r3);
            goto L_80232AD0;
    }
    // 0x80232AF0: addu        $a1, $a1, $v1
    ctx->r5 = ADD32(ctx->r5, ctx->r3);
    // 0x80232AF4: beq         $a1, $zero, L_80232BF4
    if (ctx->r5 == 0) {
        // 0x80232AF8: lui         $v0, 0x3800
        ctx->r2 = S32(0X3800 << 16);
            goto L_80232BF4;
    }
    // 0x80232AF8: lui         $v0, 0x3800
    ctx->r2 = S32(0X3800 << 16);
    // 0x80232AFC: and         $v0, $a2, $v0
    ctx->r2 = ctx->r6 & ctx->r2;
    // 0x80232B00: beql        $v0, $zero, L_80232BEC
    if (ctx->r2 == 0) {
        // 0x80232B04: addiu       $a0, $zero, 0xA3
        ctx->r4 = ADD32(0, 0XA3);
            goto L_80232BEC;
    }
    goto skip_0;
    // 0x80232B04: addiu       $a0, $zero, 0xA3
    ctx->r4 = ADD32(0, 0XA3);
    skip_0:
    // 0x80232B08: lhu         $v0, 0x46($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X46);
    // 0x80232B0C: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
    // 0x80232B10: sh          $v0, 0x46($s2)
    MEM_H(0X46, ctx->r18) = ctx->r2;
    // 0x80232B14: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80232B18: bgtzl       $v0, L_80232BD8
    if (SIGNED(ctx->r2) > 0) {
        // 0x80232B1C: addiu       $a0, $zero, 0xA2
        ctx->r4 = ADD32(0, 0XA2);
            goto L_80232BD8;
    }
    goto skip_1;
    // 0x80232B1C: addiu       $a0, $zero, 0xA2
    ctx->r4 = ADD32(0, 0XA2);
    skip_1:
    // 0x80232B20: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x80232B24: andi        $v0, $v0, 0x2000
    ctx->r2 = ctx->r2 & 0X2000;
    // 0x80232B28: beq         $v0, $zero, L_80232B38
    if (ctx->r2 == 0) {
        // 0x80232B2C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80232B38;
    }
    // 0x80232B2C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80232B30: j           L_80232BD4
    // 0x80232B34: sh          $v0, 0x46($s2)
    MEM_H(0X46, ctx->r18) = ctx->r2;
        goto L_80232BD4;
    // 0x80232B34: sh          $v0, 0x46($s2)
    MEM_H(0X46, ctx->r18) = ctx->r2;
L_80232B38:
    // 0x80232B38: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x80232B3C: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x80232B40: sh          $zero, 0x46($s2)
    MEM_H(0X46, ctx->r18) = 0;
    // 0x80232B44: ori         $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 | 0X8000;
    // 0x80232B48: andi        $v0, $v0, 0xEFFF
    ctx->r2 = ctx->r2 & 0XEFFF;
    // 0x80232B4C: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
    // 0x80232B50: lhu         $v0, 0x64($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X64);
    // 0x80232B54: addu        $s3, $s2, $zero
    ctx->r19 = ADD32(ctx->r18, 0);
    // 0x80232B58: lui         $s0, 0x8024
    ctx->r16 = S32(0X8024 << 16);
    // 0x80232B5C: addiu       $s0, $s0, -0x6960
    ctx->r16 = ADD32(ctx->r16, -0X6960);
    // 0x80232B60: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80232B64: sra         $v0, $v0, 17
    ctx->r2 = S32(SIGNED(ctx->r2) >> 17);
    // 0x80232B68: sh          $v0, 0x64($s4)
    MEM_H(0X64, ctx->r20) = ctx->r2;
L_80232B6C:
    // 0x80232B6C: addiu       $a0, $s4, 0x1D8
    ctx->r4 = ADD32(ctx->r20, 0X1D8);
    // 0x80232B70: lbu         $a1, 0x0($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X0);
    // 0x80232B74: lbu         $a2, 0x1($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X1);
    // 0x80232B78: lh          $a3, 0x2($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X2);
    // 0x80232B7C: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x80232B80: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80232B84: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80232B88: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80232B8C: jal         0x80237148
    // 0x80232B90: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_80237148_ovl13(rdram, ctx);
        goto after_0;
    // 0x80232B90: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x80232B94: sw          $v0, 0xE8($s3)
    MEM_W(0XE8, ctx->r19) = ctx->r2;
    // 0x80232B98: slti        $v0, $s1, 0x2
    ctx->r2 = SIGNED(ctx->r17) < 0X2 ? 1 : 0;
    // 0x80232B9C: bne         $v0, $zero, L_80232B6C
    if (ctx->r2 != 0) {
        // 0x80232BA0: addiu       $s3, $s3, 0x4
        ctx->r19 = ADD32(ctx->r19, 0X4);
            goto L_80232B6C;
    }
    // 0x80232BA0: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x80232BA4: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x80232BA8: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x80232BAC: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80232BB0: sb          $v0, 0x9($s4)
    MEM_B(0X9, ctx->r20) = ctx->r2;
    // 0x80232BB4: jal         0x800616FC
    // 0x80232BB8: sh          $zero, 0xA($s4)
    MEM_H(0XA, ctx->r20) = 0;
    func_800616FC_3CAFC(rdram, ctx);
        goto after_1;
    // 0x80232BB8: sh          $zero, 0xA($s4)
    MEM_H(0XA, ctx->r20) = 0;
    after_1:
    // 0x80232BBC: lhu         $v0, 0xF2($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0XF2);
    // 0x80232BC0: lhu         $v1, 0x0($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X0);
    // 0x80232BC4: ori         $v0, $v0, 0xE
    ctx->r2 = ctx->r2 | 0XE;
    // 0x80232BC8: ori         $v1, $v1, 0x4000
    ctx->r3 = ctx->r3 | 0X4000;
    // 0x80232BCC: sh          $v0, 0xF2($s2)
    MEM_H(0XF2, ctx->r18) = ctx->r2;
    // 0x80232BD0: sh          $v1, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r3;
L_80232BD4:
    // 0x80232BD4: addiu       $a0, $zero, 0xA2
    ctx->r4 = ADD32(0, 0XA2);
L_80232BD8:
    // 0x80232BD8: jal         0x8002A33C
    // 0x80232BDC: addiu       $a1, $s4, 0x14
    ctx->r5 = ADD32(ctx->r20, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x80232BDC: addiu       $a1, $s4, 0x14
    ctx->r5 = ADD32(ctx->r20, 0X14);
    after_2:
    // 0x80232BE0: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x80232BE4: j           L_80232BF4
    // 0x80232BE8: sh          $v0, 0x1DE($s4)
    MEM_H(0X1DE, ctx->r20) = ctx->r2;
        goto L_80232BF4;
    // 0x80232BE8: sh          $v0, 0x1DE($s4)
    MEM_H(0X1DE, ctx->r20) = ctx->r2;
L_80232BEC:
    // 0x80232BEC: jal         0x8002A33C
    // 0x80232BF0: addiu       $a1, $s4, 0x14
    ctx->r5 = ADD32(ctx->r20, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_3;
    // 0x80232BF0: addiu       $a1, $s4, 0x14
    ctx->r5 = ADD32(ctx->r20, 0X14);
    after_3:
L_80232BF4:
    // 0x80232BF4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80232BF8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80232BFC: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80232C00: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80232C04: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80232C08: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80232C0C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80232C10: jr          $ra
    // 0x80232C14: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80232C14: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_802299B8_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802299B8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802299BC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802299C0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802299C4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802299C8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802299CC: lh          $a0, 0x64($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X64);
    // 0x802299D0: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x802299D4: jal         0x8004FA7C
    // 0x802299D8: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x802299D8: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_0:
    // 0x802299DC: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x802299E0: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x802299E4: bne         $v0, $zero, L_80229A08
    if (ctx->r2 != 0) {
        // 0x802299E8: addiu       $v0, $zero, 0x14
        ctx->r2 = ADD32(0, 0X14);
            goto L_80229A08;
    }
    // 0x802299E8: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x802299EC: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x802299F0: jal         0x8022B748
    // 0x802299F4: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    func_8022B748_ovl13(rdram, ctx);
        goto after_1;
    // 0x802299F4: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    after_1:
    // 0x802299F8: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x802299FC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80229A00: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80229A04: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_80229A08:
    // 0x80229A08: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80229A0C: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x80229A10: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80229A14: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80229A18: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80229A1C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80229A20: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229A24: jr          $ra
    // 0x80229A28: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80229A28: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802267FC_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802267FC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80226800: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80226804: lui         $s1, 0x801A
    ctx->r17 = S32(0X801A << 16);
    // 0x80226808: lw          $s1, -0x5858($s1)
    ctx->r17 = MEM_W(ctx->r17, -0X5858);
    // 0x8022680C: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x80226810: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80226814: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80226818: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022681C: sb          $v0, 0x7($s1)
    MEM_B(0X7, ctx->r17) = ctx->r2;
    // 0x80226820: lbu         $v1, 0x7($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X7);
    // 0x80226824: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x80226828: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022682C: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    // 0x80226830: addiu       $v0, $zero, 0x140
    ctx->r2 = ADD32(0, 0X140);
    // 0x80226834: sh          $v0, 0xC($s1)
    MEM_H(0XC, ctx->r17) = ctx->r2;
    // 0x80226838: addiu       $v0, $zero, 0xF0
    ctx->r2 = ADD32(0, 0XF0);
    // 0x8022683C: sh          $v0, 0xE($s1)
    MEM_H(0XE, ctx->r17) = ctx->r2;
    // 0x80226840: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226844: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
    // 0x80226848: sh          $zero, 0x8($s1)
    MEM_H(0X8, ctx->r17) = 0;
    // 0x8022684C: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80226850: beq         $a0, $v0, L_802268A4
    if (ctx->r4 == ctx->r2) {
        // 0x80226854: sb          $v1, 0x7($s1)
        MEM_B(0X7, ctx->r17) = ctx->r3;
            goto L_802268A4;
    }
    // 0x80226854: sb          $v1, 0x7($s1)
    MEM_B(0X7, ctx->r17) = ctx->r3;
    // 0x80226858: slti        $v0, $a0, 0x2
    ctx->r2 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
    // 0x8022685C: beql        $v0, $zero, L_80226874
    if (ctx->r2 == 0) {
        // 0x80226860: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80226874;
    }
    goto skip_0;
    // 0x80226860: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80226864: beq         $a0, $zero, L_80226884
    if (ctx->r4 == 0) {
        // 0x80226868: nop
    
            goto L_80226884;
    }
    // 0x80226868: nop

    // 0x8022686C: j           L_80226910
    // 0x80226870: nop

        goto L_80226910;
    // 0x80226870: nop

L_80226874:
    // 0x80226874: beq         $a0, $v0, L_802268B8
    if (ctx->r4 == ctx->r2) {
        // 0x80226878: nop
    
            goto L_802268B8;
    }
    // 0x80226878: nop

    // 0x8022687C: j           L_80226910
    // 0x80226880: nop

        goto L_80226910;
    // 0x80226880: nop

L_80226884:
    // 0x80226884: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80226888: lbu         $v1, -0x621C($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X621C);
    // 0x8022688C: sltiu       $v0, $v1, 0x19
    ctx->r2 = ctx->r3 < 0X19 ? 1 : 0;
    // 0x80226890: bne         $v0, $zero, L_802268D4
    if (ctx->r2 != 0) {
        // 0x80226894: sll         $v0, $v1, 1
        ctx->r2 = S32(ctx->r3 << 1);
            goto L_802268D4;
    }
    // 0x80226894: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80226898: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x8022689C: j           L_802268D4
    // 0x802268A0: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
        goto L_802268D4;
    // 0x802268A0: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
L_802268A4:
    // 0x802268A4: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
    // 0x802268A8: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
    // 0x802268AC: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
    // 0x802268B0: j           L_80226910
    // 0x802268B4: sb          $v0, 0x4($s1)
    MEM_B(0X4, ctx->r17) = ctx->r2;
        goto L_80226910;
    // 0x802268B4: sb          $v0, 0x4($s1)
    MEM_B(0X4, ctx->r17) = ctx->r2;
L_802268B8:
    // 0x802268B8: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x802268BC: lbu         $v1, -0x621C($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X621C);
    // 0x802268C0: sltiu       $v0, $v1, 0x19
    ctx->r2 = ctx->r3 < 0X19 ? 1 : 0;
    // 0x802268C4: beq         $v0, $zero, L_802268E4
    if (ctx->r2 == 0) {
        // 0x802268C8: sll         $v1, $v1, 1
        ctx->r3 = S32(ctx->r3 << 1);
            goto L_802268E4;
    }
    // 0x802268C8: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x802268CC: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
    // 0x802268D0: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
L_802268D4:
    // 0x802268D4: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
    // 0x802268D8: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
    // 0x802268DC: j           L_802268F4
    // 0x802268E0: sb          $v0, 0x4($s1)
    MEM_B(0X4, ctx->r17) = ctx->r2;
        goto L_802268F4;
    // 0x802268E0: sb          $v0, 0x4($s1)
    MEM_B(0X4, ctx->r17) = ctx->r2;
L_802268E4:
    // 0x802268E4: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x802268E8: sb          $zero, 0x6($s1)
    MEM_B(0X6, ctx->r17) = 0;
    // 0x802268EC: sb          $zero, 0x5($s1)
    MEM_B(0X5, ctx->r17) = 0;
    // 0x802268F0: sb          $zero, 0x4($s1)
    MEM_B(0X4, ctx->r17) = 0;
L_802268F4:
    // 0x802268F4: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x802268F8: lbu         $v1, -0x621C($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X621C);
    // 0x802268FC: sltiu       $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 < 0XFF ? 1 : 0;
    // 0x80226900: beq         $v0, $zero, L_80226910
    if (ctx->r2 == 0) {
        // 0x80226904: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_80226910;
    }
    // 0x80226904: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x80226908: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022690C: sb          $v0, -0x621C($at)
    MEM_B(-0X621C, ctx->r1) = ctx->r2;
L_80226910:
    // 0x80226910: lui         $s0, 0x801A
    ctx->r16 = S32(0X801A << 16);
    // 0x80226914: lw          $s0, -0x5858($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X5858);
    // 0x80226918: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022691C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80226920: addiu       $a3, $zero, 0x4F
    ctx->r7 = ADD32(0, 0X4F);
    // 0x80226924: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80226928: addiu       $s0, $s0, 0x28
    ctx->r16 = ADD32(ctx->r16, 0X28);
    // 0x8022692C: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x80226930: sw          $s0, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r16;
    // 0x80226934: jal         0x8003055C
    // 0x80226938: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003055C_B95C(rdram, ctx);
        goto after_0;
    // 0x80226938: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8022693C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80226940: lw          $a0, 0x497C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X497C);
    // 0x80226944: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x80226948: lw          $v0, -0x5858($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5858);
    // 0x8022694C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80226950: addiu       $v0, $v0, 0x28
    ctx->r2 = ADD32(ctx->r2, 0X28);
    // 0x80226954: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x80226958: sw          $v0, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r2;
    // 0x8022695C: jal         0x8002FD30
    // 0x80226960: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    func_8002FD30_B130(rdram, ctx);
        goto after_1;
    // 0x80226960: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    after_1:
    // 0x80226964: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80226968: lw          $a0, 0x497C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X497C);
    // 0x8022696C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80226970: jal         0x8002FD30
    // 0x80226974: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    func_8002FD30_B130(rdram, ctx);
        goto after_2;
    // 0x80226974: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    after_2:
    // 0x80226978: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x8022697C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80226980: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80226984: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80226988: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022698C: jr          $ra
    // 0x80226990: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80226990: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80226994: nop

    // 0x80226998: nop

    // 0x8022699C: nop

;}
RECOMP_FUNC void func_80225BC8_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225BC8: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80225BCC: bne         $v0, $zero, L_80225C04
    if (ctx->r2 != 0) {
        // 0x80225BD0: addiu       $v1, $zero, -0x1400
        ctx->r3 = ADD32(0, -0X1400);
            goto L_80225C04;
    }
    // 0x80225BD0: addiu       $v1, $zero, -0x1400
    ctx->r3 = ADD32(0, -0X1400);
    // 0x80225BD4: lw          $v0, 0x28($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X28);
    // 0x80225BD8: sh          $v1, 0x14($v0)
    MEM_H(0X14, ctx->r2) = ctx->r3;
    // 0x80225BDC: lh          $a0, 0x14($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X14);
    // 0x80225BE0: addiu       $v1, $zero, 0x1A00
    ctx->r3 = ADD32(0, 0X1A00);
    // 0x80225BE4: sh          $v1, 0x18($v0)
    MEM_H(0X18, ctx->r2) = ctx->r3;
    // 0x80225BE8: lh          $a1, 0x18($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X18);
    // 0x80225BEC: addiu       $v1, $zero, 0x500
    ctx->r3 = ADD32(0, 0X500);
    // 0x80225BF0: sh          $v1, 0x56($v0)
    MEM_H(0X56, ctx->r2) = ctx->r3;
    // 0x80225BF4: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80225BF8: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x80225BFC: sw          $a0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r4;
    // 0x80225C00: sw          $a1, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r5;
L_80225C04:
    // 0x80225C04: jr          $ra
    // 0x80225C08: nop

    TRACE_RETURN()
    return;
    // 0x80225C08: nop

;}
RECOMP_FUNC void func_8022FAB4_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FAB4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022FAB8: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x8022FABC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022FAC0: lhu         $v0, 0x56($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X56);
    // 0x8022FAC4: lhu         $a0, 0x66($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X66);
    // 0x8022FAC8: lhu         $v1, 0x34C($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X34C);
    // 0x8022FACC: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8022FAD0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022FAD4: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8022FAD8: sh          $v1, 0x34C($a1)
    MEM_H(0X34C, ctx->r5) = ctx->r3;
    // 0x8022FADC: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022FAE0: bne         $v1, $zero, L_8022FAF4
    if (ctx->r3 != 0) {
        // 0x8022FAE4: sh          $v0, 0x56($a1)
        MEM_H(0X56, ctx->r5) = ctx->r2;
            goto L_8022FAF4;
    }
    // 0x8022FAE4: sh          $v0, 0x56($a1)
    MEM_H(0X56, ctx->r5) = ctx->r2;
    // 0x8022FAE8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022FAEC: sb          $v0, 0x8($a1)
    MEM_B(0X8, ctx->r5) = ctx->r2;
    // 0x8022FAF0: sb          $zero, 0x9($a1)
    MEM_B(0X9, ctx->r5) = 0;
L_8022FAF4:
    // 0x8022FAF4: jal         0x8022FBF8
    // 0x8022FAF8: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    func_8022FBF8_ovl13(rdram, ctx);
        goto after_0;
    // 0x8022FAF8: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    after_0:
    // 0x8022FAFC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022FB00: jr          $ra
    // 0x8022FB04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022FB04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802295B8_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802295B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802295BC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802295C0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802295C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802295C8: lhu         $v0, 0x350($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X350);
    // 0x802295CC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802295D0: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x802295D4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802295D8: bne         $v0, $zero, L_8022960C
    if (ctx->r2 != 0) {
        // 0x802295DC: addiu       $v0, $zero, 0x49
        ctx->r2 = ADD32(0, 0X49);
            goto L_8022960C;
    }
    // 0x802295DC: addiu       $v0, $zero, 0x49
    ctx->r2 = ADD32(0, 0X49);
    // 0x802295E0: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x802295E4: bne         $v1, $v0, L_802295F0
    if (ctx->r3 != ctx->r2) {
        // 0x802295E8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802295F0;
    }
    // 0x802295E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802295EC: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
L_802295F0:
    // 0x802295F0: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x802295F4: jal         0x8022B6B0
    // 0x802295F8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_8022B6B0_ovl13(rdram, ctx);
        goto after_0;
    // 0x802295F8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_0:
    // 0x802295FC: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80229600: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80229604: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80229608: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_8022960C:
    // 0x8022960C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80229610: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229614: jr          $ra
    // 0x80229618: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80229618: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80237720_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237720: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80237724: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80237728: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023772C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80237730: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80237734: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80237738: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x8023773C: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x80237740: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x80237744: beq         $v0, $zero, L_80237878
    if (ctx->r2 == 0) {
        // 0x80237748: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80237878;
    }
    // 0x80237748: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8023774C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80237750: addu        $at, $at, $v0
    gpr jr_addend_80237758 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80237754: lw          $v0, -0x6268($at)
    ctx->r2 = ADD32(ctx->r1, -0X6268);
    // 0x80237758: jr          $v0
    // 0x8023775C: nop

    switch (jr_addend_80237758 >> 2) {
        case 0: goto L_80237760; break;
        case 1: goto L_8023776C; break;
        case 2: goto L_802377AC; break;
        case 3: goto L_802377D4; break;
        case 4: goto L_802377F0; break;
        case 5: goto L_80237848; break;
        default: switch_error(__func__, 0x80237758, 0x80239D98);
    }
    // 0x8023775C: nop

L_80237760:
    // 0x80237760: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80237764: j           L_8023783C
    // 0x80237768: sw          $zero, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = 0;
        goto L_8023783C;
    // 0x80237768: sw          $zero, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = 0;
L_8023776C:
    // 0x8023776C: lh          $v0, 0x14($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X14);
    // 0x80237770: slti        $v0, $v0, -0x900
    ctx->r2 = SIGNED(ctx->r2) < -0X900 ? 1 : 0;
    // 0x80237774: beq         $v0, $zero, L_80237878
    if (ctx->r2 == 0) {
        // 0x80237778: nop
    
            goto L_80237878;
    }
    // 0x80237778: nop

    // 0x8023777C: jal         0x8006FF58
    // 0x80237780: nop

    func_8006FF58_4B358(rdram, ctx);
        goto after_0;
    // 0x80237780: nop

    after_0:
    // 0x80237784: beq         $v0, $zero, L_80237870
    if (ctx->r2 == 0) {
        // 0x80237788: addiu       $a0, $zero, 0x10
        ctx->r4 = ADD32(0, 0X10);
            goto L_80237870;
    }
    // 0x80237788: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x8023778C: lbu         $v0, 0xBD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XBD);
    // 0x80237790: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    // 0x80237794: jal         0x80036B58
    // 0x80237798: sb          $v0, 0xBD($s1)
    MEM_B(0XBD, ctx->r17) = ctx->r2;
    func_80036B58_11F58(rdram, ctx);
        goto after_1;
    // 0x80237798: sb          $v0, 0xBD($s1)
    MEM_B(0XBD, ctx->r17) = ctx->r2;
    after_1:
    // 0x8023779C: jal         0x8006036C
    // 0x802377A0: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
    func_8006036C_3B76C(rdram, ctx);
        goto after_2;
    // 0x802377A0: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
    after_2:
    // 0x802377A4: j           L_80237838
    // 0x802377A8: nop

        goto L_80237838;
    // 0x802377A8: nop

L_802377AC:
    // 0x802377AC: jal         0x8006033C
    // 0x802377B0: addiu       $a0, $zero, 0x604
    ctx->r4 = ADD32(0, 0X604);
    func_8006033C_3B73C(rdram, ctx);
        goto after_3;
    // 0x802377B0: addiu       $a0, $zero, 0x604
    ctx->r4 = ADD32(0, 0X604);
    after_3:
    // 0x802377B4: beq         $v0, $zero, L_80237878
    if (ctx->r2 == 0) {
        // 0x802377B8: nop
    
            goto L_80237878;
    }
    // 0x802377B8: nop

    // 0x802377BC: lbu         $v0, 0xBD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XBD);
    // 0x802377C0: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    // 0x802377C4: jal         0x80061724
    // 0x802377C8: sb          $v0, 0xBD($s1)
    MEM_B(0XBD, ctx->r17) = ctx->r2;
    func_80061724_3CB24(rdram, ctx);
        goto after_4;
    // 0x802377C8: sb          $v0, 0xBD($s1)
    MEM_B(0XBD, ctx->r17) = ctx->r2;
    after_4:
    // 0x802377CC: j           L_80237838
    // 0x802377D0: nop

        goto L_80237838;
    // 0x802377D0: nop

L_802377D4:
    // 0x802377D4: jal         0x80036E48
    // 0x802377D8: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    func_80036E48_12248(rdram, ctx);
        goto after_5;
    // 0x802377D8: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    after_5:
    // 0x802377DC: jal         0x80036B58
    // 0x802377E0: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    func_80036B58_11F58(rdram, ctx);
        goto after_6;
    // 0x802377E0: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_6:
    // 0x802377E4: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802377E8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802377EC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_802377F0:
    // 0x802377F0: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x802377F4: lui         $v0, 0xCCCC
    ctx->r2 = S32(0XCCCC << 16);
    // 0x802377F8: ori         $v0, $v0, 0xCCCD
    ctx->r2 = ctx->r2 | 0XCCCD;
    // 0x802377FC: multu       $a0, $v0
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80237800: mfhi        $a3
    ctx->r7 = hi;
    // 0x80237804: srl         $v1, $a3, 2
    ctx->r3 = S32(U32(ctx->r7) >> 2);
    // 0x80237808: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8023780C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80237810: bne         $a0, $v0, L_80237824
    if (ctx->r4 != ctx->r2) {
        // 0x80237814: addiu       $a0, $zero, 0xA1
        ctx->r4 = ADD32(0, 0XA1);
            goto L_80237824;
    }
    // 0x80237814: addiu       $a0, $zero, 0xA1
    ctx->r4 = ADD32(0, 0XA1);
    // 0x80237818: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8023781C: jal         0x8002A2F8
    // 0x80237820: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_7;
    // 0x80237820: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_7:
L_80237824:
    // 0x80237824: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x80237828: addiu       $v1, $zero, 0x2E
    ctx->r3 = ADD32(0, 0X2E);
    // 0x8023782C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80237830: bne         $v0, $v1, L_80237878
    if (ctx->r2 != ctx->r3) {
        // 0x80237834: sw          $v0, 0x1C($s0)
        MEM_W(0X1C, ctx->r16) = ctx->r2;
            goto L_80237878;
    }
    // 0x80237834: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
L_80237838:
    // 0x80237838: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
L_8023783C:
    // 0x8023783C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80237840: j           L_80237878
    // 0x80237844: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_80237878;
    // 0x80237844: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80237848:
    // 0x80237848: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8023784C: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x80237850: bne         $v0, $zero, L_80237878
    if (ctx->r2 != 0) {
        // 0x80237854: nop
    
            goto L_80237878;
    }
    // 0x80237854: nop

    // 0x80237858: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8023785C: lbu         $v0, -0x7388($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7388);
    // 0x80237860: bne         $v0, $zero, L_80237878
    if (ctx->r2 != 0) {
        // 0x80237864: nop
    
            goto L_80237878;
    }
    // 0x80237864: nop

    // 0x80237868: jal         0x8006036C
    // 0x8023786C: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    func_8006036C_3B76C(rdram, ctx);
        goto after_8;
    // 0x8023786C: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_8:
L_80237870:
    // 0x80237870: jal         0x8004F62C
    // 0x80237874: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F62C_2AA2C(rdram, ctx);
        goto after_9;
    // 0x80237874: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
L_80237878:
    // 0x80237878: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8023787C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80237880: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80237884: jr          $ra
    // 0x80237888: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80237888: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802376F0_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802376F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802376F4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802376F8: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x802376FC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80237700: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80237704: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80237708: lw          $v0, -0x6560($at)
    ctx->r2 = MEM_W(ctx->r1, -0X6560);
    // 0x8023770C: jalr        $v0
    // 0x80237710: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80237710: nop

    after_0:
    // 0x80237714: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80237718: jr          $ra
    // 0x8023771C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023771C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022C6BC_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C6BC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022C6C0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022C6C4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022C6C8: jal         0x8003E934
    // 0x8022C6CC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_0;
    // 0x8022C6CC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x8022C6D0: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x8022C6D4: addiu       $v0, $v0, -0x7D0
    ctx->r2 = ADD32(ctx->r2, -0X7D0);
    // 0x8022C6D8: sltu        $v1, $v1, $v0
    ctx->r3 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x8022C6DC: beq         $v1, $zero, L_8022C6EC
    if (ctx->r3 == 0) {
        // 0x8022C6E0: sw          $v0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r2;
            goto L_8022C6EC;
    }
    // 0x8022C6E0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8022C6E4: jal         0x8004F418
    // 0x8022C6E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_1;
    // 0x8022C6E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_8022C6EC:
    // 0x8022C6EC: lhu         $a2, 0x46($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X46);
    // 0x8022C6F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C6F4: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022C6F8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022C6FC: addiu       $a2, $a2, -0x10
    ctx->r6 = ADD32(ctx->r6, -0X10);
    // 0x8022C700: sh          $a2, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r6;
    // 0x8022C704: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x8022C708: jal         0x8004DA90
    // 0x8022C70C: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x8022C70C: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    after_2:
    // 0x8022C710: jal         0x8003E810
    // 0x8022C714: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8003E810_19C10(rdram, ctx);
        goto after_3;
    // 0x8022C714: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_3:
    // 0x8022C718: beq         $v0, $zero, L_8022C730
    if (ctx->r2 == 0) {
        // 0x8022C71C: nop
    
            goto L_8022C730;
    }
    // 0x8022C71C: nop

    // 0x8022C720: jal         0x8004F418
    // 0x8022C724: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_4;
    // 0x8022C724: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8022C728: j           L_8022C740
    // 0x8022C72C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8022C740;
    // 0x8022C72C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022C730:
    // 0x8022C730: jal         0x80040F30
    // 0x8022C734: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_5;
    // 0x8022C734: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x8022C738: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8022C73C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8022C740:
    // 0x8022C740: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022C744: bne         $v0, $zero, L_8022C754
    if (ctx->r2 != 0) {
        // 0x8022C748: nop
    
            goto L_8022C754;
    }
    // 0x8022C748: nop

    // 0x8022C74C: jal         0x8005044C
    // 0x8022C750: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_6;
    // 0x8022C750: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
L_8022C754:
    // 0x8022C754: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022C758: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022C75C: jr          $ra
    // 0x8022C760: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022C760: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8022C764: nop

    // 0x8022C768: nop

    // 0x8022C76C: nop

;}
RECOMP_FUNC void func_80229674_ovl13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229674: lb          $v0, 0xA7($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XA7);
    // 0x80229678: bltzl       $v0, L_80229680
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022967C: sb          $zero, 0xA($a0)
        MEM_B(0XA, ctx->r4) = 0;
            goto L_80229680;
    }
    goto skip_0;
    // 0x8022967C: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    skip_0:
L_80229680:
    // 0x80229680: jr          $ra
    // 0x80229684: nop

    TRACE_RETURN()
    return;
    // 0x80229684: nop

;}
