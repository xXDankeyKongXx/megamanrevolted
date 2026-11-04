#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80235B60_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235B60: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80235B64: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80235B68: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80235B6C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80235B70: jal         0x8006033C
    // 0x80235B74: addiu       $a0, $zero, 0x60D
    ctx->r4 = ADD32(0, 0X60D);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80235B74: addiu       $a0, $zero, 0x60D
    ctx->r4 = ADD32(0, 0X60D);
    after_0:
    // 0x80235B78: beq         $v0, $zero, L_80235B90
    if (ctx->r2 == 0) {
        // 0x80235B7C: nop
    
            goto L_80235B90;
    }
    // 0x80235B7C: nop

    // 0x80235B80: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80235B84: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80235B88: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80235B8C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80235B90:
    // 0x80235B90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80235B94: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80235B98: jr          $ra
    // 0x80235B9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80235B9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022A210_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A210: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022A214: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A218: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A21C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022A220: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022A224: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022A228: beq         $v1, $zero, L_8022A244
    if (ctx->r3 == 0) {
        // 0x8022A22C: addiu       $a0, $s0, 0x348
        ctx->r4 = ADD32(ctx->r16, 0X348);
            goto L_8022A244;
    }
    // 0x8022A22C: addiu       $a0, $s0, 0x348
    ctx->r4 = ADD32(ctx->r16, 0X348);
    // 0x8022A230: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A234: beq         $v1, $v0, L_8022A258
    if (ctx->r3 == ctx->r2) {
        // 0x8022A238: nop
    
            goto L_8022A258;
    }
    // 0x8022A238: nop

    // 0x8022A23C: j           L_8022A328
    // 0x8022A240: nop

        goto L_8022A328;
    // 0x8022A240: nop

L_8022A244:
    // 0x8022A244: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A248: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022A24C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022A250: addiu       $v0, $zero, 0x5A
    ctx->r2 = ADD32(0, 0X5A);
    // 0x8022A254: sh          $v0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r2;
L_8022A258:
    // 0x8022A258: lhu         $v0, 0x4($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X4);
    // 0x8022A25C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022A260: sh          $v0, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r2;
    // 0x8022A264: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A268: bgezl       $v0, L_8022A280
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022A26C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022A280;
    }
    goto skip_0;
    // 0x8022A26C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    skip_0:
    // 0x8022A270: lhu         $v0, 0x0($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X0);
    // 0x8022A274: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022A278: j           L_8022A328
    // 0x8022A27C: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
        goto L_8022A328;
    // 0x8022A27C: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
L_8022A280:
    // 0x8022A280: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022A284: lhu         $v1, 0x66($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X66);
    // 0x8022A288: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x8022A28C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022A290: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022A294: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022A298: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022A29C: jal         0x8004DA90
    // 0x8022A2A0: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x8022A2A0: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022A2A4: jal         0x80040F30
    // 0x8022A2A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_1;
    // 0x8022A2A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022A2AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A2B0: jal         0x8003E934
    // 0x8022A2B4: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_2;
    // 0x8022A2B4: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    after_2:
    // 0x8022A2B8: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022A2BC: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x8022A2C0: lh          $a0, 0x2E($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X2E);
    // 0x8022A2C4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A2C8: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x8022A2CC: slti        $v1, $v1, 0x11
    ctx->r3 = SIGNED(ctx->r3) < 0X11 ? 1 : 0;
    // 0x8022A2D0: bne         $v1, $zero, L_8022A30C
    if (ctx->r3 != 0) {
        // 0x8022A2D4: sw          $v0, 0x20($s0)
        MEM_W(0X20, ctx->r16) = ctx->r2;
            goto L_8022A30C;
    }
    // 0x8022A2D4: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022A2D8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022A2DC: addiu       $a1, $s0, 0x2C
    ctx->r5 = ADD32(ctx->r16, 0X2C);
    // 0x8022A2E0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022A2E4: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x8022A2E8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022A2EC: jal         0x8009A3B4
    // 0x8022A2F0: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8022A2F0: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    after_3:
    // 0x8022A2F4: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8022A2F8: addiu       $a1, $s0, 0x34
    ctx->r5 = ADD32(ctx->r16, 0X34);
    // 0x8022A2FC: jal         0x8009A3B4
    // 0x8022A300: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8022A300: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_4:
    // 0x8022A304: j           L_8022A328
    // 0x8022A308: nop

        goto L_8022A328;
    // 0x8022A308: nop

L_8022A30C:
    // 0x8022A30C: andi        $v0, $s1, 0xF00
    ctx->r2 = ctx->r17 & 0XF00;
    // 0x8022A310: beq         $v0, $zero, L_8022A328
    if (ctx->r2 == 0) {
        // 0x8022A314: nop
    
            goto L_8022A328;
    }
    // 0x8022A314: nop

    // 0x8022A318: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022A31C: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022A320: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022A324: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_8022A328:
    // 0x8022A328: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022A32C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022A330: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A334: jr          $ra
    // 0x8022A338: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022A338: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022D314_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D314: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022D318: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D31C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022D320: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x8022D324: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022D328: jal         0x8022E444
    // 0x8022D32C: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_8022E444_ovl7(rdram, ctx);
        goto after_0;
    // 0x8022D32C: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_0:
    // 0x8022D330: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022D334: beq         $v0, $zero, L_8022D360
    if (ctx->r2 == 0) {
        // 0x8022D338: addiu       $v1, $zero, 0x6
        ctx->r3 = ADD32(0, 0X6);
            goto L_8022D360;
    }
    // 0x8022D338: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
    // 0x8022D33C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022D340: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022D344: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022D348: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x8022D34C: sh          $v0, 0x360($s0)
    MEM_H(0X360, ctx->r16) = ctx->r2;
    // 0x8022D350: jal         0x8022E3A8
    // 0x8022D354: sh          $a1, 0x362($s0)
    MEM_H(0X362, ctx->r16) = ctx->r5;
    func_8022E3A8_ovl7(rdram, ctx);
        goto after_1;
    // 0x8022D354: sh          $a1, 0x362($s0)
    MEM_H(0X362, ctx->r16) = ctx->r5;
    after_1:
    // 0x8022D358: j           L_8022D3A0
    // 0x8022D35C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_8022D3A0;
    // 0x8022D35C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8022D360:
    // 0x8022D360: lhu         $v0, 0x350($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X350);
    // 0x8022D364: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022D368: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x8022D36C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D370: bne         $v0, $zero, L_8022D380
    if (ctx->r2 != 0) {
        // 0x8022D374: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022D380;
    }
    // 0x8022D374: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D378: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022D37C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022D380:
    // 0x8022D380: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022D384: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022D388: jal         0x8004DA90
    // 0x8022D38C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x8022D38C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_2:
    // 0x8022D390: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022D394: addiu       $v0, $v0, 0x80
    ctx->r2 = ADD32(ctx->r2, 0X80);
    // 0x8022D398: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022D39C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
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
RECOMP_FUNC void func_8022C854_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C854: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022C858: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022C85C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C860: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022C864: lhu         $v0, 0x350($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X350);
    // 0x8022C868: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022C86C: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x8022C870: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C874: bne         $v0, $zero, L_8022C8E0
    if (ctx->r2 != 0) {
        // 0x8022C878: addiu       $a1, $zero, 0x40
        ctx->r5 = ADD32(0, 0X40);
            goto L_8022C8E0;
    }
    // 0x8022C878: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x8022C87C: jal         0x8022E444
    // 0x8022C880: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_8022E444_ovl7(rdram, ctx);
        goto after_0;
    // 0x8022C880: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_0:
    // 0x8022C884: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022C888: beq         $v0, $zero, L_8022C8DC
    if (ctx->r2 == 0) {
        // 0x8022C88C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022C8DC;
    }
    // 0x8022C88C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C890: lh          $v0, 0x366($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X366);
    // 0x8022C894: lh          $v1, 0x35E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X35E);
    // 0x8022C898: addiu       $v0, $v0, -0x5
    ctx->r2 = ADD32(ctx->r2, -0X5);
    // 0x8022C89C: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8022C8A0: bne         $v1, $zero, L_8022C8B0
    if (ctx->r3 != 0) {
        // 0x8022C8A4: addiu       $v0, $zero, 0x3C
        ctx->r2 = ADD32(0, 0X3C);
            goto L_8022C8B0;
    }
    // 0x8022C8A4: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x8022C8A8: j           L_8022C8E0
    // 0x8022C8AC: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
        goto L_8022C8E0;
    // 0x8022C8AC: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
L_8022C8B0:
    // 0x8022C8B0: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022C8B4: jal         0x8022E3B8
    // 0x8022C8B8: nop

    func_8022E3B8_ovl7(rdram, ctx);
        goto after_1;
    // 0x8022C8B8: nop

    after_1:
    // 0x8022C8BC: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022C8C0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022C8C4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022C8C8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022C8CC: addiu       $v1, $v1, 0x800
    ctx->r3 = ADD32(ctx->r3, 0X800);
    // 0x8022C8D0: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022C8D4: j           L_8022C8E0
    // 0x8022C8D8: sh          $v1, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r3;
        goto L_8022C8E0;
    // 0x8022C8D8: sh          $v1, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r3;
L_8022C8DC:
    // 0x8022C8DC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022C8E0:
    // 0x8022C8E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022C8E4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022C8E8: jr          $ra
    // 0x8022C8EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022C8EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802338E0_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802338E0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802338E4: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x802338E8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802338EC: lbu         $a1, 0xA($a2)
    ctx->r5 = MEM_BU(ctx->r6, 0XA);
    // 0x802338F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802338F4: andi        $v1, $a1, 0xFF
    ctx->r3 = ctx->r5 & 0XFF;
    // 0x802338F8: beq         $v1, $v0, L_8023394C
    if (ctx->r3 == ctx->r2) {
        // 0x802338FC: addiu       $a0, $a2, 0xC0
        ctx->r4 = ADD32(ctx->r6, 0XC0);
            goto L_8023394C;
    }
    // 0x802338FC: addiu       $a0, $a2, 0xC0
    ctx->r4 = ADD32(ctx->r6, 0XC0);
    // 0x80233900: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80233904: beql        $v0, $zero, L_8023391C
    if (ctx->r2 == 0) {
        // 0x80233908: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8023391C;
    }
    goto skip_0;
    // 0x80233908: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8023390C: beq         $v1, $zero, L_8023392C
    if (ctx->r3 == 0) {
        // 0x80233910: addiu       $v0, $a1, 0x1
        ctx->r2 = ADD32(ctx->r5, 0X1);
            goto L_8023392C;
    }
    // 0x80233910: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
    // 0x80233914: j           L_802339EC
    // 0x80233918: nop

        goto L_802339EC;
    // 0x80233918: nop

L_8023391C:
    // 0x8023391C: beq         $v1, $v0, L_80233974
    if (ctx->r3 == ctx->r2) {
        // 0x80233920: nop
    
            goto L_80233974;
    }
    // 0x80233920: nop

    // 0x80233924: j           L_802339EC
    // 0x80233928: nop

        goto L_802339EC;
    // 0x80233928: nop

L_8023392C:
    // 0x8023392C: sb          $v0, 0xA($a2)
    MEM_B(0XA, ctx->r6) = ctx->r2;
    // 0x80233930: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80233934: sh          $v0, 0xC4($a2)
    MEM_H(0XC4, ctx->r6) = ctx->r2;
    // 0x80233938: addiu       $v0, $zero, -0x40
    ctx->r2 = ADD32(0, -0X40);
    // 0x8023393C: sh          $v0, 0x46($a2)
    MEM_H(0X46, ctx->r6) = ctx->r2;
    // 0x80233940: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80233944: sh          $v0, 0x4E($a2)
    MEM_H(0X4E, ctx->r6) = ctx->r2;
    // 0x80233948: sh          $zero, 0xC6($a2)
    MEM_H(0XC6, ctx->r6) = 0;
L_8023394C:
    // 0x8023394C: lh          $v0, 0x46($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X46);
    // 0x80233950: beq         $v0, $zero, L_80233964
    if (ctx->r2 == 0) {
        // 0x80233954: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80233964;
    }
    // 0x80233954: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80233958: lhu         $v0, 0x4E($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X4E);
    // 0x8023395C: j           L_802339C8
    // 0x80233960: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
        goto L_802339C8;
    // 0x80233960: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
L_80233964:
    // 0x80233964: lbu         $v0, 0xA($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0XA);
    // 0x80233968: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023396C: sb          $v0, 0xA($a2)
    MEM_B(0XA, ctx->r6) = ctx->r2;
    // 0x80233970: sh          $zero, 0x4($a0)
    MEM_H(0X4, ctx->r4) = 0;
L_80233974:
    // 0x80233974: lhu         $v0, 0x4($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X4);
    // 0x80233978: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023397C: sh          $v0, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r2;
    // 0x80233980: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80233984: bgez        $v0, L_802339BC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80233988: nop
    
            goto L_802339BC;
    }
    // 0x80233988: nop

    // 0x8023398C: lhu         $v0, 0x6($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X6);
    // 0x80233990: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80233994: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80233998: sh          $v0, 0x6($a0)
    MEM_H(0X6, ctx->r4) = ctx->r2;
    // 0x8023399C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802339A0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802339A4: lbu         $v0, -0x6BA4($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X6BA4);
    // 0x802339A8: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x802339AC: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x802339B0: sh          $v0, 0x4E($a2)
    MEM_H(0X4E, ctx->r6) = ctx->r2;
    // 0x802339B4: addiu       $v0, $zero, 0x1F
    ctx->r2 = ADD32(0, 0X1F);
    // 0x802339B8: sh          $v0, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r2;
L_802339BC:
    // 0x802339BC: lhu         $v0, 0x46($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X46);
    // 0x802339C0: lhu         $v1, 0x4E($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0X4E);
    // 0x802339C4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
L_802339C8:
    // 0x802339C8: lw          $v1, 0x20($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X20);
    // 0x802339CC: addiu       $a0, $a2, 0x1C
    ctx->r4 = ADD32(ctx->r6, 0X1C);
    // 0x802339D0: addiu       $a1, $a2, 0x14
    ctx->r5 = ADD32(ctx->r6, 0X14);
    // 0x802339D4: sh          $v0, 0x46($a2)
    MEM_H(0X46, ctx->r6) = ctx->r2;
    // 0x802339D8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802339DC: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x802339E0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802339E4: jal         0x8004DD04
    // 0x802339E8: sw          $v1, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->r3;
    func_8004DD04_29104(rdram, ctx);
        goto after_0;
    // 0x802339E8: sw          $v1, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->r3;
    after_0:
L_802339EC:
    // 0x802339EC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802339F0: jr          $ra
    // 0x802339F4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802339F4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80225470_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225470: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80225474: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80225478: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022547C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80225480: jal         0x80060798
    // 0x80225484: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_80060798_3BB98(rdram, ctx);
        goto after_0;
    // 0x80225484: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x80225488: lui         $s0, 0x801C
    ctx->r16 = S32(0X801C << 16);
    // 0x8022548C: addiu       $s0, $s0, -0x3BC6
    ctx->r16 = ADD32(ctx->r16, -0X3BC6);
    // 0x80225490: lb          $a1, 0x0($s0)
    ctx->r5 = MEM_B(ctx->r16, 0X0);
    // 0x80225494: lui         $s1, 0x8023
    ctx->r17 = S32(0X8023 << 16);
    // 0x80225498: addiu       $s1, $s1, 0x74E8
    ctx->r17 = ADD32(ctx->r17, 0X74E8);
    // 0x8022549C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802254A0: lui         $s2, 0x8023
    ctx->r18 = S32(0X8023 << 16);
    // 0x802254A4: addiu       $s2, $s2, 0x74F0
    ctx->r18 = ADD32(ctx->r18, 0X74F0);
    // 0x802254A8: sll         $a1, $a1, 3
    ctx->r5 = S32(ctx->r5 << 3);
    // 0x802254AC: jal         0x8006100C
    // 0x802254B0: addu        $a1, $a1, $s2
    ctx->r5 = ADD32(ctx->r5, ctx->r18);
    func_8006100C_3C40C(rdram, ctx);
        goto after_1;
    // 0x802254B0: addu        $a1, $a1, $s2
    ctx->r5 = ADD32(ctx->r5, ctx->r18);
    after_1:
    // 0x802254B4: lb          $v0, 0x0($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X0);
    // 0x802254B8: bne         $v0, $zero, L_8022550C
    if (ctx->r2 != 0) {
        // 0x802254BC: nop
    
            goto L_8022550C;
    }
    // 0x802254BC: nop

    // 0x802254C0: jal         0x8006033C
    // 0x802254C4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x802254C4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_2:
    // 0x802254C8: beq         $v0, $zero, L_802254D8
    if (ctx->r2 == 0) {
        // 0x802254CC: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_802254D8;
    }
    // 0x802254CC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802254D0: j           L_80225504
    // 0x802254D4: addiu       $a1, $s2, 0x70
    ctx->r5 = ADD32(ctx->r18, 0X70);
        goto L_80225504;
    // 0x802254D4: addiu       $a1, $s2, 0x70
    ctx->r5 = ADD32(ctx->r18, 0X70);
L_802254D8:
    // 0x802254D8: jal         0x8006033C
    // 0x802254DC: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    func_8006033C_3B73C(rdram, ctx);
        goto after_3;
    // 0x802254DC: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    after_3:
    // 0x802254E0: beq         $v0, $zero, L_802254F0
    if (ctx->r2 == 0) {
        // 0x802254E4: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_802254F0;
    }
    // 0x802254E4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802254E8: j           L_80225504
    // 0x802254EC: addiu       $a1, $s2, 0x68
    ctx->r5 = ADD32(ctx->r18, 0X68);
        goto L_80225504;
    // 0x802254EC: addiu       $a1, $s2, 0x68
    ctx->r5 = ADD32(ctx->r18, 0X68);
L_802254F0:
    // 0x802254F0: jal         0x8006033C
    // 0x802254F4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_8006033C_3B73C(rdram, ctx);
        goto after_4;
    // 0x802254F4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_4:
    // 0x802254F8: beq         $v0, $zero, L_8022550C
    if (ctx->r2 == 0) {
        // 0x802254FC: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8022550C;
    }
    // 0x802254FC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80225500: addiu       $a1, $s2, 0x60
    ctx->r5 = ADD32(ctx->r18, 0X60);
L_80225504:
    // 0x80225504: jal         0x8006100C
    // 0x80225508: nop

    func_8006100C_3C40C(rdram, ctx);
        goto after_5;
    // 0x80225508: nop

    after_5:
L_8022550C:
    // 0x8022550C: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x80225510: lw          $v1, 0x74E4($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X74E4);
    // 0x80225514: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225518: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8022551C: bne         $v1, $v0, L_8022552C
    if (ctx->r3 != ctx->r2) {
        // 0x80225520: sw          $zero, -0x359C($at)
        MEM_W(-0X359C, ctx->r1) = 0;
            goto L_8022552C;
    }
    // 0x80225520: sw          $zero, -0x359C($at)
    MEM_W(-0X359C, ctx->r1) = 0;
    // 0x80225524: jal         0x80226694
    // 0x80225528: nop

    func_80226694_ovl7(rdram, ctx);
        goto after_6;
    // 0x80225528: nop

    after_6:
L_8022552C:
    // 0x8022552C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80225530: sw          $zero, 0x74E4($at)
    MEM_W(0X74E4, ctx->r1) = 0;
    // 0x80225534: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80225538: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022553C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80225540: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225544: jr          $ra
    // 0x80225548: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80225548: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022CEC4_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CEC4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022CEC8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022CECC: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x8022CED0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022CED4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022CED8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022CEDC: lw          $v0, -0x6E3C($at)
    ctx->r2 = MEM_W(ctx->r1, -0X6E3C);
    // 0x8022CEE0: jalr        $v0
    // 0x8022CEE4: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022CEE4: nop

    after_0:
    // 0x8022CEE8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022CEEC: jr          $ra
    // 0x8022CEF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022CEF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022C4B4_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C4B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022C4B8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022C4BC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C4C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022C4C4: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022C4C8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022C4CC: jal         0x8004DA90
    // 0x8022C4D0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x8022C4D0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x8022C4D4: lhu         $v0, 0x35E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X35E);
    // 0x8022C4D8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022C4DC: sh          $v0, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = ctx->r2;
    // 0x8022C4E0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C4E4: bne         $v0, $zero, L_8022C51C
    if (ctx->r2 != 0) {
        // 0x8022C4E8: nop
    
            goto L_8022C51C;
    }
    // 0x8022C4E8: nop

    // 0x8022C4EC: lh          $v0, 0x35C($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X35C);
    // 0x8022C4F0: beq         $v0, $zero, L_8022C504
    if (ctx->r2 == 0) {
        // 0x8022C4F4: nop
    
            goto L_8022C504;
    }
    // 0x8022C4F4: nop

    // 0x8022C4F8: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x8022C4FC: j           L_8022C50C
    // 0x8022C500: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
        goto L_8022C50C;
    // 0x8022C500: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
L_8022C504:
    // 0x8022C504: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x8022C508: srl         $v0, $v0, 4
    ctx->r2 = S32(U32(ctx->r2) >> 4);
L_8022C50C:
    // 0x8022C50C: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8022C510: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x8022C514: j           L_8022C56C
    // 0x8022C518: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_8022C56C;
    // 0x8022C518: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_8022C51C:
    // 0x8022C51C: lhu         $v0, 0x350($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X350);
    // 0x8022C520: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022C524: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x8022C528: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C52C: bne         $v0, $zero, L_8022C53C
    if (ctx->r2 != 0) {
        // 0x8022C530: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022C53C;
    }
    // 0x8022C530: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C534: j           L_8022C56C
    // 0x8022C538: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8022C56C;
    // 0x8022C538: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022C53C:
    // 0x8022C53C: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x8022C540: jal         0x8022E444
    // 0x8022C544: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_8022E444_ovl7(rdram, ctx);
        goto after_1;
    // 0x8022C544: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_1:
    // 0x8022C548: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022C54C: beq         $v0, $zero, L_8022C570
    if (ctx->r2 == 0) {
        // 0x8022C550: nop
    
            goto L_8022C570;
    }
    // 0x8022C550: nop

    // 0x8022C554: jal         0x8022E3A8
    // 0x8022C558: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_8022E3A8_ovl7(rdram, ctx);
        goto after_2;
    // 0x8022C558: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_2:
    // 0x8022C55C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022C560: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x8022C564: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x8022C568: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
L_8022C56C:
    // 0x8022C56C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022C570:
    // 0x8022C570: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022C574: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022C578: jr          $ra
    // 0x8022C57C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022C57C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022BB68_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BB68: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x8022BB6C: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8022BB70: addiu       $v1, $v1, -0x7520
    ctx->r3 = ADD32(ctx->r3, -0X7520);
    // 0x8022BB74: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022BB78: beq         $v0, $zero, L_8022BB88
    if (ctx->r2 == 0) {
        // 0x8022BB7C: addiu       $t0, $a0, 0x348
        ctx->r8 = ADD32(ctx->r4, 0X348);
            goto L_8022BB88;
    }
    // 0x8022BB7C: addiu       $t0, $a0, 0x348
    ctx->r8 = ADD32(ctx->r4, 0X348);
    // 0x8022BB80: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8022BB84: addiu       $v1, $v1, -0x7528
    ctx->r3 = ADD32(ctx->r3, -0X7528);
L_8022BB88:
    // 0x8022BB88: lhu         $v0, 0x34A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X34A);
    // 0x8022BB8C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022BB90: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022BB94: andi        $a3, $v0, 0xF
    ctx->r7 = ctx->r2 & 0XF;
L_8022BB98:
    // 0x8022BB98: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8022BB9C: addu        $v0, $a2, $v0
    ctx->r2 = ADD32(ctx->r6, ctx->r2);
    // 0x8022BBA0: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x8022BBA4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022BBA8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022BBAC: slt         $v0, $a3, $v0
    ctx->r2 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8022BBB0: bne         $v0, $zero, L_8022BBD0
    if (ctx->r2 != 0) {
        // 0x8022BBB4: addiu       $v0, $a1, 0x1
        ctx->r2 = ADD32(ctx->r5, 0X1);
            goto L_8022BBD0;
    }
    // 0x8022BBB4: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
    // 0x8022BBB8: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8022BBBC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022BBC0: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022BBC4: slti        $v0, $v0, 0x6
    ctx->r2 = SIGNED(ctx->r2) < 0X6 ? 1 : 0;
    // 0x8022BBC8: bne         $v0, $zero, L_8022BB98
    if (ctx->r2 != 0) {
        // 0x8022BBCC: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_8022BB98;
    }
    // 0x8022BBCC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_8022BBD0:
    // 0x8022BBD0: sll         $v0, $a1, 16
    ctx->r2 = S32(ctx->r5 << 16);
    // 0x8022BBD4: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022BBD8: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x8022BBDC: beql        $v0, $zero, L_8022BC4C
    if (ctx->r2 == 0) {
        // 0x8022BBE0: sb          $zero, 0x9($a0)
        MEM_B(0X9, ctx->r4) = 0;
            goto L_8022BC4C;
    }
    goto skip_0;
    // 0x8022BBE0: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
    skip_0:
    // 0x8022BBE4: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022BBE8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022BBEC: addu        $at, $at, $v0
    gpr jr_addend_8022BBF4 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022BBF0: lw          $v0, -0x61E0($at)
    ctx->r2 = ADD32(ctx->r1, -0X61E0);
    // 0x8022BBF4: jr          $v0
    // 0x8022BBF8: nop

    switch (jr_addend_8022BBF4 >> 2) {
        case 0: goto L_8022BBFC; break;
        case 1: goto L_8022BC04; break;
        case 2: goto L_8022BC10; break;
        case 3: goto L_8022BC1C; break;
        case 4: goto L_8022BC2C; break;
        default: switch_error(__func__, 0x8022BBF4, 0x80239E20);
    }
    // 0x8022BBF8: nop

L_8022BBFC:
    // 0x8022BBFC: j           L_8022BC50
    // 0x8022BC00: sh          $zero, 0x66($a0)
    MEM_H(0X66, ctx->r4) = 0;
        goto L_8022BC50;
    // 0x8022BC00: sh          $zero, 0x66($a0)
    MEM_H(0X66, ctx->r4) = 0;
L_8022BC04:
    // 0x8022BC04: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022BC08: j           L_8022BC50
    // 0x8022BC0C: sh          $v0, 0x66($a0)
    MEM_H(0X66, ctx->r4) = ctx->r2;
        goto L_8022BC50;
    // 0x8022BC0C: sh          $v0, 0x66($a0)
    MEM_H(0X66, ctx->r4) = ctx->r2;
L_8022BC10:
    // 0x8022BC10: addiu       $v0, $zero, -0x6
    ctx->r2 = ADD32(0, -0X6);
    // 0x8022BC14: j           L_8022BC50
    // 0x8022BC18: sh          $v0, 0x66($a0)
    MEM_H(0X66, ctx->r4) = ctx->r2;
        goto L_8022BC50;
    // 0x8022BC18: sh          $v0, 0x66($a0)
    MEM_H(0X66, ctx->r4) = ctx->r2;
L_8022BC1C:
    // 0x8022BC1C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022BC20: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
    // 0x8022BC24: j           L_8022BC38
    // 0x8022BC28: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
        goto L_8022BC38;
    // 0x8022BC28: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
L_8022BC2C:
    // 0x8022BC2C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022BC30: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
    // 0x8022BC34: addiu       $v0, $zero, -0x10
    ctx->r2 = ADD32(0, -0X10);
L_8022BC38:
    // 0x8022BC38: sh          $v0, 0x66($a0)
    MEM_H(0X66, ctx->r4) = ctx->r2;
    // 0x8022BC3C: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8022BC40: sh          $zero, 0xA($a0)
    MEM_H(0XA, ctx->r4) = 0;
    // 0x8022BC44: j           L_8022BC50
    // 0x8022BC48: sh          $v0, 0x4($t0)
    MEM_H(0X4, ctx->r8) = ctx->r2;
        goto L_8022BC50;
    // 0x8022BC48: sh          $v0, 0x4($t0)
    MEM_H(0X4, ctx->r8) = ctx->r2;
L_8022BC4C:
    // 0x8022BC4C: sh          $zero, 0xA($a0)
    MEM_H(0XA, ctx->r4) = 0;
L_8022BC50:
    // 0x8022BC50: jr          $ra
    // 0x8022BC54: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x8022BC54: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_8023011C_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023011C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80230120: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80230124: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80230128: beq         $a1, $zero, L_80230178
    if (ctx->r5 == 0) {
        // 0x8023012C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80230178;
    }
    // 0x8023012C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80230130: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x80230134: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80230138: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x8023013C: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80230140: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80230144: slti        $v0, $v0, 0x3D
    ctx->r2 = SIGNED(ctx->r2) < 0X3D ? 1 : 0;
    // 0x80230148: bne         $v0, $zero, L_80230178
    if (ctx->r2 != 0) {
        // 0x8023014C: nop
    
            goto L_80230178;
    }
    // 0x8023014C: nop

    // 0x80230150: jal         0x800A3450
    // 0x80230154: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x80230154: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    after_0:
    // 0x80230158: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x8023015C: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
    // 0x80230160: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80230164: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80230168: addiu       $v0, $v0, 0x7D0
    ctx->r2 = ADD32(ctx->r2, 0X7D0);
    // 0x8023016C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80230170: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80230174: sh          $v1, 0x66($s0)
    MEM_H(0X66, ctx->r16) = ctx->r3;
L_80230178:
    // 0x80230178: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023017C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80230180: jr          $ra
    // 0x80230184: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80230184: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022B238_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B238: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022B23C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B240: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B244: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022B248: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022B24C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022B250: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x8022B254: beq         $v0, $zero, L_8022B460
    if (ctx->r2 == 0) {
        // 0x8022B258: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_8022B460;
    }
    // 0x8022B258: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x8022B25C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022B260: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022B264: addu        $at, $at, $v0
    gpr jr_addend_8022B26C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022B268: lw          $v0, -0x6210($at)
    ctx->r2 = ADD32(ctx->r1, -0X6210);
    // 0x8022B26C: jr          $v0
    // 0x8022B270: nop

    switch (jr_addend_8022B26C >> 2) {
        case 0: goto L_8022B274; break;
        case 1: goto L_8022B2A0; break;
        case 2: goto L_8022B2CC; break;
        case 3: goto L_8022B300; break;
        case 4: goto L_8022B408; break;
        case 5: goto L_8022B43C; break;
        default: switch_error(__func__, 0x8022B26C, 0x80239DF0);
    }
    // 0x8022B270: nop

L_8022B274:
    // 0x8022B274: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022B278: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022B27C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B280: sh          $zero, 0x8($s1)
    MEM_H(0X8, ctx->r17) = 0;
    // 0x8022B284: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022B288: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022B28C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022B290: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022B294: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022B298: addiu       $v0, $zero, -0xE
    ctx->r2 = ADD32(0, -0XE);
    // 0x8022B29C: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
L_8022B2A0:
    // 0x8022B2A0: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8022B2A4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022B2A8: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022B2AC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B2B0: bgez        $v0, L_8022B460
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022B2B4: addiu       $v0, $zero, 0xE
        ctx->r2 = ADD32(0, 0XE);
            goto L_8022B460;
    }
    // 0x8022B2B4: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x8022B2B8: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022B2BC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022B2C0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022B2C4: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x8022B2C8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8022B2CC:
    // 0x8022B2CC: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8022B2D0: addiu       $v1, $v0, -0x1
    ctx->r3 = ADD32(ctx->r2, -0X1);
    // 0x8022B2D4: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x8022B2D8: bgez        $v0, L_8022B2F0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022B2DC: sh          $v1, 0x4($s1)
        MEM_H(0X4, ctx->r17) = ctx->r3;
            goto L_8022B2F0;
    }
    // 0x8022B2DC: sh          $v1, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r3;
    // 0x8022B2E0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022B2E4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022B2E8: j           L_8022B300
    // 0x8022B2EC: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
        goto L_8022B300;
    // 0x8022B2EC: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
L_8022B2F0:
    // 0x8022B2F0: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8022B2F4: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022B2F8: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022B2FC: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
L_8022B300:
    // 0x8022B300: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022B304: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022B308: bne         $v1, $v0, L_8022B328
    if (ctx->r3 != ctx->r2) {
        // 0x8022B30C: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_8022B328;
    }
    // 0x8022B30C: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8022B310: lhu         $v1, 0x4($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X4);
    // 0x8022B314: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8022B318: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022B31C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022B320: sh          $v1, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r3;
    // 0x8022B324: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
L_8022B328:
    // 0x8022B328: lhu         $a1, 0x44($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X44);
    // 0x8022B32C: lhu         $a2, 0x46($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X46);
    // 0x8022B330: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B334: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022B338: sll         $a1, $a1, 20
    ctx->r5 = S32(ctx->r5 << 20);
    // 0x8022B33C: sll         $a2, $a2, 20
    ctx->r6 = S32(ctx->r6 << 20);
    // 0x8022B340: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8022B344: jal         0x8004DA90
    // 0x8022B348: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x8022B348: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    after_0:
    // 0x8022B34C: jal         0x80040F30
    // 0x8022B350: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_1;
    // 0x8022B350: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022B354: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022B358: beq         $v1, $zero, L_8022B460
    if (ctx->r3 == 0) {
        // 0x8022B35C: andi        $v0, $v1, 0xF00
        ctx->r2 = ctx->r3 & 0XF00;
            goto L_8022B460;
    }
    // 0x8022B35C: andi        $v0, $v1, 0xF00
    ctx->r2 = ctx->r3 & 0XF00;
    // 0x8022B360: bnel        $v0, $zero, L_8022B368
    if (ctx->r2 != 0) {
        // 0x8022B364: sh          $zero, 0x44($s0)
        MEM_H(0X44, ctx->r16) = 0;
            goto L_8022B368;
    }
    goto skip_0;
    // 0x8022B364: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    skip_0:
L_8022B368:
    // 0x8022B368: andi        $v0, $v1, 0x1000
    ctx->r2 = ctx->r3 & 0X1000;
    // 0x8022B36C: beq         $v0, $zero, L_8022B460
    if (ctx->r2 == 0) {
        // 0x8022B370: nop
    
            goto L_8022B460;
    }
    // 0x8022B370: nop

    // 0x8022B374: lhu         $v0, 0x2($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X2);
    // 0x8022B378: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022B37C: bne         $v0, $zero, L_8022B3EC
    if (ctx->r2 != 0) {
        // 0x8022B380: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_8022B3EC;
    }
    // 0x8022B380: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8022B384: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x8022B388: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022B38C: lbu         $v1, 0xAC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022B390: lb          $a0, 0xC($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XC);
    // 0x8022B394: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022B398: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022B39C: addiu       $v1, $v1, 0x3
    ctx->r3 = ADD32(ctx->r3, 0X3);
    // 0x8022B3A0: beq         $a0, $zero, L_8022B3E0
    if (ctx->r4 == 0) {
        // 0x8022B3A4: sb          $v1, 0xAC($s0)
        MEM_B(0XAC, ctx->r16) = ctx->r3;
            goto L_8022B3E0;
    }
    // 0x8022B3A4: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x8022B3A8: lw          $v0, 0x38($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X38);
    // 0x8022B3AC: sb          $zero, 0x8($v0)
    MEM_B(0X8, ctx->r2) = 0;
    // 0x8022B3B0: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022B3B4: lw          $v1, 0x38($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X38);
    // 0x8022B3B8: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022B3BC: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022B3C0: sh          $v0, 0x64($v1)
    MEM_H(0X64, ctx->r3) = ctx->r2;
    // 0x8022B3C4: lw          $v1, 0x38($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X38);
    // 0x8022B3C8: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8022B3CC: sw          $v0, 0x9C($v1)
    MEM_W(0X9C, ctx->r3) = ctx->r2;
    // 0x8022B3D0: lw          $v1, 0x38($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X38);
    // 0x8022B3D4: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022B3D8: sw          $v0, 0xA0($v1)
    MEM_W(0XA0, ctx->r3) = ctx->r2;
    // 0x8022B3DC: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
L_8022B3E0:
    // 0x8022B3E0: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8022B3E4: j           L_8022B460
    // 0x8022B3E8: sb          $v0, 0x110($s0)
    MEM_B(0X110, ctx->r16) = ctx->r2;
        goto L_8022B460;
    // 0x8022B3E8: sb          $v0, 0x110($s0)
    MEM_B(0X110, ctx->r16) = ctx->r2;
L_8022B3EC:
    // 0x8022B3EC: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022B3F0: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022B3F4: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x8022B3F8: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x8022B3FC: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x8022B400: j           L_8022B460
    // 0x8022B404: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_8022B460;
    // 0x8022B404: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8022B408:
    // 0x8022B408: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8022B40C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022B410: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022B414: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B418: bgez        $v0, L_8022B460
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022B41C: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_8022B460;
    }
    // 0x8022B41C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022B420: sb          $v0, 0x110($s0)
    MEM_B(0X110, ctx->r16) = ctx->r2;
    // 0x8022B424: addiu       $v0, $zero, 0x26
    ctx->r2 = ADD32(0, 0X26);
    // 0x8022B428: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022B42C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022B430: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022B434: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x8022B438: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8022B43C:
    // 0x8022B43C: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8022B440: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022B444: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022B448: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B44C: bgez        $v0, L_8022B460
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022B450: nop
    
            goto L_8022B460;
    }
    // 0x8022B450: nop

    // 0x8022B454: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022B458: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022B45C: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8022B460:
    // 0x8022B460: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022B464: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022B468: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B46C: jr          $ra
    // 0x8022B470: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022B470: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80231694_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231694: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80231698: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023169C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802316A0: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x802316A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802316A8: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x802316AC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x802316B0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x802316B4: jal         0x8009A3B4
    // 0x802316B8: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x802316B8: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    after_0:
    // 0x802316BC: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x802316C0: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x802316C4: jal         0x8009A3B4
    // 0x802316C8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x802316C8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x802316CC: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x802316D0: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x802316D4: jal         0x8009A3B4
    // 0x802316D8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x802316D8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x802316DC: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x802316E0: jal         0x800A3450
    // 0x802316E4: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x802316E4: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    after_3:
    // 0x802316E8: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x802316EC: sh          $v0, 0x34A($s0)
    MEM_H(0X34A, ctx->r16) = ctx->r2;
    // 0x802316F0: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x802316F4: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802316F8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802316FC: lw          $v0, -0x6C64($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6C64);
    // 0x80231700: jalr        $v0
    // 0x80231704: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x80231704: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80231708: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x8023170C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80231710: beq         $v0, $zero, L_8023172C
    if (ctx->r2 == 0) {
        // 0x80231714: nop
    
            goto L_8023172C;
    }
    // 0x80231714: nop

    // 0x80231718: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x8023171C: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80231720: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x80231724: andi        $v0, $v0, 0xFFFE
    ctx->r2 = ctx->r2 & 0XFFFE;
    // 0x80231728: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
L_8023172C:
    // 0x8023172C: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x80231730: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x80231734: beq         $v0, $a1, L_8023174C
    if (ctx->r2 == ctx->r5) {
        // 0x80231738: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023174C;
    }
    // 0x80231738: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023173C: jal         0x80050294
    // 0x80231740: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_5;
    // 0x80231740: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
    // 0x80231744: j           L_80231754
    // 0x80231748: nop

        goto L_80231754;
    // 0x80231748: nop

L_8023174C:
    // 0x8023174C: jal         0x8005044C
    // 0x80231750: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_6;
    // 0x80231750: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
L_80231754:
    // 0x80231754: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80231758: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8023175C: beq         $v0, $zero, L_80231774
    if (ctx->r2 == 0) {
        // 0x80231760: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80231774;
    }
    // 0x80231760: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80231764: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x80231768: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8023176C: jal         0x8003B564
    // 0x80231770: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_7;
    // 0x80231770: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_7:
L_80231774:
    // 0x80231774: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80231778: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8023177C: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x80231780: jal         0x80047284
    // 0x80231784: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_8;
    // 0x80231784: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_8:
    // 0x80231788: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023178C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80231790: jr          $ra
    // 0x80231794: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80231794: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022CE40_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CE40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022CE44: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022CE48: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022CE4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022CE50: lhu         $v0, 0x350($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X350);
    // 0x8022CE54: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022CE58: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x8022CE5C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022CE60: bne         $v0, $zero, L_8022CEB4
    if (ctx->r2 != 0) {
        // 0x8022CE64: addiu       $a1, $zero, 0x40
        ctx->r5 = ADD32(0, 0X40);
            goto L_8022CEB4;
    }
    // 0x8022CE64: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x8022CE68: jal         0x8022E444
    // 0x8022CE6C: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_8022E444_ovl7(rdram, ctx);
        goto after_0;
    // 0x8022CE6C: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_0:
    // 0x8022CE70: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022CE74: beq         $v0, $zero, L_8022CEB0
    if (ctx->r2 == 0) {
        // 0x8022CE78: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022CEB0;
    }
    // 0x8022CE78: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022CE7C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022CE80: jal         0x8022E3B8
    // 0x8022CE84: nop

    func_8022E3B8_ovl7(rdram, ctx);
        goto after_1;
    // 0x8022CE84: nop

    after_1:
    // 0x8022CE88: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022CE8C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022CE90: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x8022CE94: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x8022CE98: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022CE9C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022CEA0: addiu       $v1, $v1, 0x800
    ctx->r3 = ADD32(ctx->r3, 0X800);
    // 0x8022CEA4: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022CEA8: j           L_8022CEB4
    // 0x8022CEAC: sh          $v1, 0x364($s0)
    MEM_H(0X364, ctx->r16) = ctx->r3;
        goto L_8022CEB4;
    // 0x8022CEAC: sh          $v1, 0x364($s0)
    MEM_H(0X364, ctx->r16) = ctx->r3;
L_8022CEB0:
    // 0x8022CEB0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022CEB4:
    // 0x8022CEB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022CEB8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022CEBC: jr          $ra
    // 0x8022CEC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022CEC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80235540_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235540: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80235544: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80235548: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023554C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80235550: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80235554: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80235558: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023555C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80235560: lw          $v0, -0x67B8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X67B8);
    // 0x80235564: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x80235568: lw          $v1, 0x20($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X20);
    // 0x8023556C: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x80235570: lbu         $v0, 0x2($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X2);
    // 0x80235574: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x80235578: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x8023557C: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x80235580: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80235584: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x80235588: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x8023558C: lbu         $v0, 0x1($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X1);
    // 0x80235590: jal         0x802359E4
    // 0x80235594: sh          $v0, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r2;
    func_802359E4_ovl7(rdram, ctx);
        goto after_0;
    // 0x80235594: sh          $v0, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r2;
    after_0:
    // 0x80235598: beq         $v0, $zero, L_802355AC
    if (ctx->r2 == 0) {
        // 0x8023559C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802355AC;
    }
    // 0x8023559C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802355A0: jal         0x8004F62C
    // 0x802355A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F62C_2AA2C(rdram, ctx);
        goto after_1;
    // 0x802355A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x802355A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802355AC:
    // 0x802355AC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x802355B0: jal         0x8023562C
    // 0x802355B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8023562C_ovl7(rdram, ctx);
        goto after_2;
    // 0x802355B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x802355B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802355BC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802355C0: jr          $ra
    // 0x802355C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802355C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225F0C_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225F0C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225F10: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225F14: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225F18: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225F1C: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225F20: bne         $v0, $zero, L_80225F38
    if (ctx->r2 != 0) {
        // 0x80225F24: nop
    
            goto L_80225F38;
    }
    // 0x80225F24: nop

    // 0x80225F28: jal         0x802283FC
    // 0x80225F2C: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    func_802283FC_ovl7(rdram, ctx);
        goto after_0;
    // 0x80225F2C: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    after_0:
    // 0x80225F30: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225F34: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225F38:
    // 0x80225F38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225F3C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225F40: jr          $ra
    // 0x80225F44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225F44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80230D58_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230D58: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80230D5C: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x80230D60: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80230D64: lbu         $v0, 0xA4($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XA4);
    // 0x80230D68: xori        $v1, $v0, 0x7
    ctx->r3 = ctx->r2 ^ 0X7;
    // 0x80230D6C: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x80230D70: xori        $v0, $v0, 0x17
    ctx->r2 = ctx->r2 ^ 0X17;
    // 0x80230D74: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80230D78: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80230D7C: beq         $v1, $zero, L_80230D8C
    if (ctx->r3 == 0) {
        // 0x80230D80: addiu       $a0, $zero, 0x10C
        ctx->r4 = ADD32(0, 0X10C);
            goto L_80230D8C;
    }
    // 0x80230D80: addiu       $a0, $zero, 0x10C
    ctx->r4 = ADD32(0, 0X10C);
    // 0x80230D84: jal         0x8002A33C
    // 0x80230D88: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x80230D88: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_0:
L_80230D8C:
    // 0x80230D8C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80230D90: jr          $ra
    // 0x80230D94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80230D94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80230D98: nop

    // 0x80230D9C: nop

;}
RECOMP_FUNC void func_8022E7C8_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E7C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022E7CC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022E7D0: jal         0x8004F418
    // 0x8022E7D4: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x8022E7D4: nop

    after_0:
    // 0x8022E7D8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022E7DC: jr          $ra
    // 0x8022E7E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022E7E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022E1A4_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E1A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022E1A8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022E1AC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022E1B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022E1B4: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022E1B8: lh          $a3, 0x34E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X34E);
    // 0x8022E1BC: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022E1C0: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022E1C4: jal         0x8004F820
    // 0x8022E1C8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022E1C8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x8022E1CC: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022E1D0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022E1D4: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022E1D8: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022E1DC: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8022E1E0: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x8022E1E4: bne         $v0, $zero, L_8022E208
    if (ctx->r2 != 0) {
        // 0x8022E1E8: addiu       $v1, $zero, 0x9
        ctx->r3 = ADD32(0, 0X9);
            goto L_8022E208;
    }
    // 0x8022E1E8: addiu       $v1, $zero, 0x9
    ctx->r3 = ADD32(0, 0X9);
    // 0x8022E1EC: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x8022E1F0: lbu         $a0, 0x34B($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X34B);
    // 0x8022E1F4: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x8022E1F8: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8022E1FC: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x8022E200: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    // 0x8022E204: sb          $a0, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r4;
L_8022E208:
    // 0x8022E208: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022E20C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022E210: jr          $ra
    // 0x8022E214: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022E214: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022E7E4_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E7E4: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x8022E7E8: bne         $v0, $zero, L_8022E7F8
    if (ctx->r2 != 0) {
        // 0x8022E7EC: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_8022E7F8;
    }
    // 0x8022E7EC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022E7F0: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x8022E7F4: sb          $zero, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = 0;
L_8022E7F8:
    // 0x8022E7F8: jr          $ra
    // 0x8022E7FC: nop

    TRACE_RETURN()
    return;
    // 0x8022E7FC: nop

;}
RECOMP_FUNC void func_8022C68C_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C68C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022C690: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022C694: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C698: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022C69C: lhu         $v0, 0x350($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X350);
    // 0x8022C6A0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022C6A4: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x8022C6A8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C6AC: bne         $v0, $zero, L_8022C6D4
    if (ctx->r2 != 0) {
        // 0x8022C6B0: nop
    
            goto L_8022C6D4;
    }
    // 0x8022C6B0: nop

    // 0x8022C6B4: jal         0x8022E310
    // 0x8022C6B8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_8022E310_ovl7(rdram, ctx);
        goto after_0;
    // 0x8022C6B8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_0:
    // 0x8022C6BC: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022C6C0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022C6C4: addiu       $v0, $zero, 0x46
    ctx->r2 = ADD32(0, 0X46);
    // 0x8022C6C8: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x8022C6CC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022C6D0: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_8022C6D4:
    // 0x8022C6D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022C6D8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022C6DC: jr          $ra
    // 0x8022C6E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022C6E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802339F8_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802339F8: jr          $ra
    // 0x802339FC: nop

    TRACE_RETURN()
    return;
    // 0x802339FC: nop

;}
RECOMP_FUNC void func_80229140_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229140: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80229144: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80229148: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022914C: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80229150: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80229154: lb          $v1, 0xD($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XD);
    // 0x80229158: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8022915C: addiu       $a0, $a0, -0x3A50
    ctx->r4 = ADD32(ctx->r4, -0X3A50);
    // 0x80229160: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x80229164: beq         $v0, $zero, L_802292A4
    if (ctx->r2 == 0) {
        // 0x80229168: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_802292A4;
    }
    // 0x80229168: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022916C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80229170: addu        $at, $at, $v0
    gpr jr_addend_80229178 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80229174: lw          $v0, -0x6300($at)
    ctx->r2 = ADD32(ctx->r1, -0X6300);
    // 0x80229178: jr          $v0
    // 0x8022917C: nop

    switch (jr_addend_80229178 >> 2) {
        case 0: goto L_80229180; break;
        case 1: goto L_802291D8; break;
        case 2: goto L_802291F4; break;
        case 3: goto L_8022920C; break;
        case 4: goto L_80229268; break;
        case 5: goto L_80229290; break;
        default: switch_error(__func__, 0x80229178, 0x80239D00);
    }
    // 0x8022917C: nop

L_80229180:
    // 0x80229180: addiu       $v0, $zero, 0x174B
    ctx->r2 = ADD32(0, 0X174B);
    // 0x80229184: sh          $v0, 0x438($s1)
    MEM_H(0X438, ctx->r17) = ctx->r2;
    // 0x80229188: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022918C: sh          $v0, 0x43A($s1)
    MEM_H(0X43A, ctx->r17) = ctx->r2;
    // 0x80229190: addiu       $v0, $zero, 0x4DA0
    ctx->r2 = ADD32(0, 0X4DA0);
    // 0x80229194: sh          $v0, 0x43C($s1)
    MEM_H(0X43C, ctx->r17) = ctx->r2;
    // 0x80229198: addiu       $v0, $zero, 0x524
    ctx->r2 = ADD32(0, 0X524);
    // 0x8022919C: sh          $v0, 0x442($s1)
    MEM_H(0X442, ctx->r17) = ctx->r2;
    // 0x802291A0: lh          $v0, 0x438($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X438);
    // 0x802291A4: lbu         $a1, 0xD($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0XD);
    // 0x802291A8: lh          $v1, 0x43A($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X43A);
    // 0x802291AC: lh          $a0, 0x43C($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X43C);
    // 0x802291B0: sh          $zero, 0x440($s1)
    MEM_H(0X440, ctx->r17) = 0;
    // 0x802291B4: sh          $zero, 0x444($s1)
    MEM_H(0X444, ctx->r17) = 0;
    // 0x802291B8: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x802291BC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802291C0: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x802291C4: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x802291C8: sw          $v0, 0x428($s1)
    MEM_W(0X428, ctx->r17) = ctx->r2;
    // 0x802291CC: sw          $v1, 0x42C($s1)
    MEM_W(0X42C, ctx->r17) = ctx->r3;
    // 0x802291D0: sw          $a0, 0x430($s1)
    MEM_W(0X430, ctx->r17) = ctx->r4;
    // 0x802291D4: sb          $a1, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r5;
L_802291D8:
    // 0x802291D8: lbu         $v1, 0xD($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XD);
    // 0x802291DC: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x802291E0: sb          $v0, 0x448($s1)
    MEM_B(0X448, ctx->r17) = ctx->r2;
    // 0x802291E4: sw          $zero, 0x184($s1)
    MEM_W(0X184, ctx->r17) = 0;
    // 0x802291E8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802291EC: j           L_802292A4
    // 0x802291F0: sb          $v1, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r3;
        goto L_802292A4;
    // 0x802291F0: sb          $v1, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r3;
L_802291F4:
    // 0x802291F4: lbu         $v1, 0x9($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X9);
    // 0x802291F8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802291FC: beq         $v1, $v0, L_80229280
    if (ctx->r3 == ctx->r2) {
        // 0x80229200: nop
    
            goto L_80229280;
    }
    // 0x80229200: nop

    // 0x80229204: j           L_802292A4
    // 0x80229208: nop

        goto L_802292A4;
    // 0x80229208: nop

L_8022920C:
    // 0x8022920C: addiu       $s0, $sp, 0x10
    ctx->r16 = ADD32(ctx->r29, 0X10);
    // 0x80229210: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229214: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x80229218: addiu       $a1, $a1, -0x6308
    ctx->r5 = ADD32(ctx->r5, -0X6308);
    // 0x8022921C: jal         0x8009A3B4
    // 0x80229220: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80229220: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x80229224: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x80229228: lh          $a2, 0x56($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X56);
    // 0x8022922C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80229230: jal         0x8004F820
    // 0x80229234: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x80229234: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    after_1:
    // 0x80229238: lhu         $v1, 0x442($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X442);
    // 0x8022923C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80229240: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80229244: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229248: bne         $v0, $zero, L_802292A4
    if (ctx->r2 != 0) {
        // 0x8022924C: sh          $v1, 0x442($s1)
        MEM_H(0X442, ctx->r17) = ctx->r3;
            goto L_802292A4;
    }
    // 0x8022924C: sh          $v1, 0x442($s1)
    MEM_H(0X442, ctx->r17) = ctx->r3;
    // 0x80229250: lbu         $v0, 0xD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XD);
    // 0x80229254: addiu       $v1, $zero, 0xC
    ctx->r3 = ADD32(0, 0XC);
    // 0x80229258: sb          $v1, 0x448($s1)
    MEM_B(0X448, ctx->r17) = ctx->r3;
    // 0x8022925C: addiu       $v1, $zero, 0xA
    ctx->r3 = ADD32(0, 0XA);
    // 0x80229260: j           L_80229284
    // 0x80229264: sb          $v1, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r3;
        goto L_80229284;
    // 0x80229264: sb          $v1, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r3;
L_80229268:
    // 0x80229268: lbu         $v0, 0xE($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XE);
    // 0x8022926C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80229270: sb          $v0, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r2;
    // 0x80229274: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80229278: bne         $v0, $zero, L_802292A4
    if (ctx->r2 != 0) {
        // 0x8022927C: nop
    
            goto L_802292A4;
    }
    // 0x8022927C: nop

L_80229280:
    // 0x80229280: lbu         $v0, 0xD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XD);
L_80229284:
    // 0x80229284: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80229288: j           L_802292A4
    // 0x8022928C: sb          $v0, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r2;
        goto L_802292A4;
    // 0x8022928C: sb          $v0, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r2;
L_80229290:
    // 0x80229290: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80229294: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x80229298: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022929C: jal         0x8004DB18
    // 0x802292A0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DB18_28F18(rdram, ctx);
        goto after_2;
    // 0x802292A0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_2:
L_802292A4:
    // 0x802292A4: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x802292A8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x802292AC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802292B0: jr          $ra
    // 0x802292B4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x802292B4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022BFF4_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BFF4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022BFF8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022BFFC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C000: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022C004: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022C008: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022C00C: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x8022C010: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022C014: lhu         $a2, 0x368($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X368);
    // 0x8022C018: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8022C01C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022C020: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022C024: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8022C028: addiu       $v1, $v1, -0x7510
    ctx->r3 = ADD32(ctx->r3, -0X7510);
    // 0x8022C02C: jal         0x8022E444
    // 0x8022C030: addu        $s1, $v0, $v1
    ctx->r17 = ADD32(ctx->r2, ctx->r3);
    func_8022E444_ovl7(rdram, ctx);
        goto after_0;
    // 0x8022C030: addu        $s1, $v0, $v1
    ctx->r17 = ADD32(ctx->r2, ctx->r3);
    after_0:
    // 0x8022C034: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022C038: beq         $v0, $zero, L_8022C148
    if (ctx->r2 == 0) {
        // 0x8022C03C: addiu       $s2, $s0, 0x348
        ctx->r18 = ADD32(ctx->r16, 0X348);
            goto L_8022C148;
    }
    // 0x8022C03C: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x8022C040: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8022C044: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022C048: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022C04C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022C050: jal         0x8009A3B4
    // 0x8022C054: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022C054: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022C058: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8022C05C: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022C060: jal         0x8009A3B4
    // 0x8022C064: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022C064: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_2:
    // 0x8022C068: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8022C06C: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8022C070: jal         0x8009A3B4
    // 0x8022C074: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8022C074: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x8022C078: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x8022C07C: addiu       $v1, $zero, 0x4210
    ctx->r3 = ADD32(0, 0X4210);
    // 0x8022C080: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022C084: beq         $v0, $zero, L_8022C094
    if (ctx->r2 == 0) {
        // 0x8022C088: sh          $v1, 0x15E($s0)
        MEM_H(0X15E, ctx->r16) = ctx->r3;
            goto L_8022C094;
    }
    // 0x8022C088: sh          $v1, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r3;
    // 0x8022C08C: jal         0x8022E2AC
    // 0x8022C090: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022E2AC_ovl7(rdram, ctx);
        goto after_4;
    // 0x8022C090: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
L_8022C094:
    // 0x8022C094: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022C098: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022C09C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022C0A0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022C0A4: lw          $v0, -0x6FA8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X6FA8);
    // 0x8022C0A8: jalr        $v0
    // 0x8022C0AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_5;
    // 0x8022C0AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x8022C0B0: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8022C0B4: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x8022C0B8: bne         $v0, $zero, L_8022C0D4
    if (ctx->r2 != 0) {
        // 0x8022C0BC: nop
    
            goto L_8022C0D4;
    }
    // 0x8022C0BC: nop

    // 0x8022C0C0: jal         0x8003E934
    // 0x8022C0C4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_6;
    // 0x8022C0C4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x8022C0C8: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022C0CC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C0D0: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
L_8022C0D4:
    // 0x8022C0D4: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x8022C0D8: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022C0DC: beq         $v0, $a1, L_8022C0F4
    if (ctx->r2 == ctx->r5) {
        // 0x8022C0E0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022C0F4;
    }
    // 0x8022C0E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C0E4: jal         0x80050294
    // 0x8022C0E8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_7;
    // 0x8022C0E8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_7:
    // 0x8022C0EC: j           L_8022C0FC
    // 0x8022C0F0: nop

        goto L_8022C0FC;
    // 0x8022C0F0: nop

L_8022C0F4:
    // 0x8022C0F4: jal         0x8005044C
    // 0x8022C0F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_8;
    // 0x8022C0F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
L_8022C0FC:
    // 0x8022C0FC: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022C100: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022C104: beq         $v0, $zero, L_8022C120
    if (ctx->r2 == 0) {
        // 0x8022C108: nop
    
            goto L_8022C120;
    }
    // 0x8022C108: nop

    // 0x8022C10C: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x8022C110: lw          $a2, 0x4($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X4);
    // 0x8022C114: lw          $a3, 0x8($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X8);
    // 0x8022C118: jal         0x8003B564
    // 0x8022C11C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_9;
    // 0x8022C11C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
L_8022C120:
    // 0x8022C120: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x8022C124: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022C128: beq         $v0, $zero, L_8022C138
    if (ctx->r2 == 0) {
        // 0x8022C12C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022C138;
    }
    // 0x8022C12C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C130: j           L_8022C13C
    // 0x8022C134: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_8022C13C;
    // 0x8022C134: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_8022C138:
    // 0x8022C138: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
L_8022C13C:
    // 0x8022C13C: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x8022C140: jal         0x80047284
    // 0x8022C144: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_10;
    // 0x8022C144: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_10:
L_8022C148:
    // 0x8022C148: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022C14C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022C150: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022C154: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022C158: jr          $ra
    // 0x8022C15C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022C15C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022F5E4_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F5E4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022F5E8: lh          $v0, 0x49C8($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X49C8);
    // 0x8022F5EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022F5F0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022F5F4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F5F8: slti        $v0, $v0, -0x4D53
    ctx->r2 = SIGNED(ctx->r2) < -0X4D53 ? 1 : 0;
    // 0x8022F5FC: beq         $v0, $zero, L_8022F618
    if (ctx->r2 == 0) {
        // 0x8022F600: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8022F618;
    }
    // 0x8022F600: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022F604: jal         0x80060690
    // 0x8022F608: addiu       $a0, $zero, 0x1F
    ctx->r4 = ADD32(0, 0X1F);
    func_80060690_3BA90(rdram, ctx);
        goto after_0;
    // 0x8022F608: addiu       $a0, $zero, 0x1F
    ctx->r4 = ADD32(0, 0X1F);
    after_0:
    // 0x8022F60C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022F610: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022F614: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022F618:
    // 0x8022F618: jal         0x8005044C
    // 0x8022F61C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_1;
    // 0x8022F61C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022F620: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F624: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x8022F628: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8022F62C: jal         0x8003B564
    // 0x8022F630: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_2;
    // 0x8022F630: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_2:
    // 0x8022F634: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F638: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022F63C: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x8022F640: jal         0x80047284
    // 0x8022F644: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_3;
    // 0x8022F644: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_3:
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
RECOMP_FUNC void func_80233ED4_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233ED4: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80233ED8: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80233EDC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80233EE0: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80233EE4: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x80233EE8: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x80233EEC: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x80233EF0: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x80233EF4: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80233EF8: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80233EFC: lbu         $v1, 0xA($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA);
    // 0x80233F00: beq         $v1, $zero, L_80233F1C
    if (ctx->r3 == 0) {
        // 0x80233F04: addiu       $s3, $s1, 0xC0
        ctx->r19 = ADD32(ctx->r17, 0XC0);
            goto L_80233F1C;
    }
    // 0x80233F04: addiu       $s3, $s1, 0xC0
    ctx->r19 = ADD32(ctx->r17, 0XC0);
    // 0x80233F08: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80233F0C: beq         $v1, $v0, L_80233F78
    if (ctx->r3 == ctx->r2) {
        // 0x80233F10: nop
    
            goto L_80233F78;
    }
    // 0x80233F10: nop

    // 0x80233F14: j           L_80234150
    // 0x80233F18: nop

        goto L_80234150;
    // 0x80233F18: nop

L_80233F1C:
    // 0x80233F1C: lbu         $v1, 0x0($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X0);
    // 0x80233F20: lbu         $a0, 0xF($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0XF);
    // 0x80233F24: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80233F28: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x80233F2C: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x80233F30: sh          $v0, 0xC4($s1)
    MEM_H(0XC4, ctx->r17) = ctx->r2;
    // 0x80233F34: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80233F38: andi        $a0, $a0, 0x40
    ctx->r4 = ctx->r4 & 0X40;
    // 0x80233F3C: beq         $a0, $zero, L_80233F50
    if (ctx->r4 == 0) {
        // 0x80233F40: sb          $v1, 0x0($s1)
        MEM_B(0X0, ctx->r17) = ctx->r3;
            goto L_80233F50;
    }
    // 0x80233F40: sb          $v1, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r3;
    // 0x80233F44: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80233F48: j           L_80233F5C
    // 0x80233F4C: sh          $zero, 0x44($s1)
    MEM_H(0X44, ctx->r17) = 0;
        goto L_80233F5C;
    // 0x80233F4C: sh          $zero, 0x44($s1)
    MEM_H(0X44, ctx->r17) = 0;
L_80233F50:
    // 0x80233F50: addiu       $v0, $zero, 0x240
    ctx->r2 = ADD32(0, 0X240);
    // 0x80233F54: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
    // 0x80233F58: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_80233F5C:
    // 0x80233F5C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80233F60: sb          $v0, -0x5E90($at)
    MEM_B(-0X5E90, ctx->r1) = ctx->r2;
    // 0x80233F64: addiu       $v0, $zero, 0x16
    ctx->r2 = ADD32(0, 0X16);
    // 0x80233F68: sh          $v0, 0x4C($s1)
    MEM_H(0X4C, ctx->r17) = ctx->r2;
    // 0x80233F6C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80233F70: sh          $zero, 0x48($s1)
    MEM_H(0X48, ctx->r17) = 0;
    // 0x80233F74: sh          $v0, 0x8($s3)
    MEM_H(0X8, ctx->r19) = ctx->r2;
L_80233F78:
    // 0x80233F78: lbu         $v0, 0xF($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XF);
    // 0x80233F7C: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x80233F80: beq         $v0, $zero, L_80233F9C
    if (ctx->r2 == 0) {
        // 0x80233F84: nop
    
            goto L_80233F9C;
    }
    // 0x80233F84: nop

    // 0x80233F88: lh          $v0, 0x8($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X8);
    // 0x80233F8C: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80233F90: addiu       $v1, $v1, -0x6B00
    ctx->r3 = ADD32(ctx->r3, -0X6B00);
    // 0x80233F94: j           L_80233FAC
    // 0x80233F98: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
        goto L_80233FAC;
    // 0x80233F98: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
L_80233F9C:
    // 0x80233F9C: lh          $v0, 0x8($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X8);
    // 0x80233FA0: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80233FA4: addiu       $v1, $v1, -0x6B30
    ctx->r3 = ADD32(ctx->r3, -0X6B30);
    // 0x80233FA8: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
L_80233FAC:
    // 0x80233FAC: addu        $s0, $v0, $v1
    ctx->r16 = ADD32(ctx->r2, ctx->r3);
    // 0x80233FB0: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x80233FB4: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x80233FB8: addiu       $a1, $a1, -0x5EA0
    ctx->r5 = ADD32(ctx->r5, -0X5EA0);
    // 0x80233FBC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80233FC0: sh          $zero, -0x5E9E($at)
    MEM_H(-0X5E9E, ctx->r1) = 0;
    // 0x80233FC4: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
    // 0x80233FC8: lhu         $v0, 0x2($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X2);
    // 0x80233FCC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80233FD0: sh          $v0, -0x5E9C($at)
    MEM_H(-0X5E9C, ctx->r1) = ctx->r2;
    // 0x80233FD4: lh          $a2, 0x56($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X56);
    // 0x80233FD8: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x80233FDC: jal         0x8004F820
    // 0x80233FE0: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x80233FE0: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_0:
    // 0x80233FE4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80233FE8: lh          $a1, 0x44($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X44);
    // 0x80233FEC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80233FF0: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x80233FF4: sh          $v1, 0x48($s1)
    MEM_H(0X48, ctx->r17) = ctx->r3;
    // 0x80233FF8: lh          $a3, 0x48($s1)
    ctx->r7 = MEM_H(ctx->r17, 0X48);
    // 0x80233FFC: lhu         $t0, 0x56($s1)
    ctx->r8 = MEM_HU(ctx->r17, 0X56);
    // 0x80234000: sll         $v1, $v0, 19
    ctx->r3 = S32(ctx->r2 << 19);
    // 0x80234004: srl         $v1, $v1, 20
    ctx->r3 = S32(U32(ctx->r3) >> 20);
    // 0x80234008: sh          $v1, 0x58($s1)
    MEM_H(0X58, ctx->r17) = ctx->r3;
    // 0x8023400C: addu        $t0, $t0, $v0
    ctx->r8 = ADD32(ctx->r8, ctx->r2);
    // 0x80234010: andi        $t0, $t0, 0xFFF
    ctx->r8 = ctx->r8 & 0XFFF;
    // 0x80234014: jal         0x8004DA90
    // 0x80234018: sh          $t0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r8;
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x80234018: sh          $t0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r8;
    after_1:
    // 0x8023401C: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x80234020: lh          $a0, 0x14($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X14);
    // 0x80234024: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
    // 0x80234028: lh          $a1, 0x18($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X18);
    // 0x8023402C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80234030: sra         $a2, $v0, 16
    ctx->r6 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80234034: sra         $v0, $v0, 17
    ctx->r2 = S32(SIGNED(ctx->r2) >> 17);
    // 0x80234038: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8023403C: subu        $a0, $a0, $v1
    ctx->r4 = SUB32(ctx->r4, ctx->r3);
    // 0x80234040: lhu         $v0, 0x6($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6);
    // 0x80234044: lh          $v1, 0x2($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2);
    // 0x80234048: sltu        $a0, $a0, $a2
    ctx->r4 = ctx->r4 < ctx->r6 ? 1 : 0;
    // 0x8023404C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80234050: sra         $a3, $v0, 16
    ctx->r7 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80234054: sra         $v0, $v0, 17
    ctx->r2 = S32(SIGNED(ctx->r2) >> 17);
    // 0x80234058: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8023405C: beq         $a0, $zero, L_802340B0
    if (ctx->r4 == 0) {
        // 0x80234060: subu        $v0, $a1, $v1
        ctx->r2 = SUB32(ctx->r5, ctx->r3);
            goto L_802340B0;
    }
    // 0x80234060: subu        $v0, $a1, $v1
    ctx->r2 = SUB32(ctx->r5, ctx->r3);
    // 0x80234064: sltu        $v0, $v0, $a3
    ctx->r2 = ctx->r2 < ctx->r7 ? 1 : 0;
    // 0x80234068: beq         $v0, $zero, L_802340B0
    if (ctx->r2 == 0) {
        // 0x8023406C: nop
    
            goto L_802340B0;
    }
    // 0x8023406C: nop

    // 0x80234070: lh          $v1, 0x8($s3)
    ctx->r3 = MEM_H(ctx->r19, 0X8);
    // 0x80234074: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80234078: lbu         $v0, -0x5E90($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X5E90);
    // 0x8023407C: bne         $v1, $v0, L_802340A4
    if (ctx->r3 != ctx->r2) {
        // 0x80234080: nop
    
            goto L_802340A4;
    }
    // 0x80234080: nop

    // 0x80234084: lhu         $v0, 0x0($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X0);
    // 0x80234088: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8023408C: sh          $v0, 0x0($s3)
    MEM_H(0X0, ctx->r19) = ctx->r2;
    // 0x80234090: sh          $zero, 0x44($s1)
    MEM_H(0X44, ctx->r17) = 0;
    // 0x80234094: sh          $zero, 0x46($s1)
    MEM_H(0X46, ctx->r17) = 0;
    // 0x80234098: sh          $zero, 0x48($s1)
    MEM_H(0X48, ctx->r17) = 0;
    // 0x8023409C: sh          $zero, 0x54($s1)
    MEM_H(0X54, ctx->r17) = 0;
    // 0x802340A0: sh          $zero, 0x58($s1)
    MEM_H(0X58, ctx->r17) = 0;
L_802340A4:
    // 0x802340A4: lhu         $v0, 0x8($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X8);
    // 0x802340A8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802340AC: sh          $v0, 0x8($s3)
    MEM_H(0X8, ctx->r19) = ctx->r2;
L_802340B0:
    // 0x802340B0: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x802340B4: addiu       $a1, $a1, -0x5EA0
    ctx->r5 = ADD32(ctx->r5, -0X5EA0);
    // 0x802340B8: lhu         $a0, 0x0($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X0);
    // 0x802340BC: lhu         $v0, 0x14($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X14);
    // 0x802340C0: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x802340C4: sll         $v1, $a0, 16
    ctx->r3 = S32(ctx->r4 << 16);
    // 0x802340C8: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x802340CC: mult        $v1, $v1
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802340D0: mflo        $v1
    ctx->r3 = lo;
    // 0x802340D4: sh          $a0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r4;
    // 0x802340D8: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x802340DC: lhu         $a0, -0x5E9C($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X5E9C);
    // 0x802340E0: lhu         $v0, 0x18($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X18);
    // 0x802340E4: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x802340E8: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x802340EC: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802340F0: mult        $v0, $v0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802340F4: mflo        $v0
    ctx->r2 = lo;
    // 0x802340F8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802340FC: sh          $a0, -0x5E9C($at)
    MEM_H(-0X5E9C, ctx->r1) = ctx->r4;
    // 0x80234100: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80234104: slti        $v1, $v1, 0x4001
    ctx->r3 = SIGNED(ctx->r3) < 0X4001 ? 1 : 0;
    // 0x80234108: bne         $v1, $zero, L_80234130
    if (ctx->r3 != 0) {
        // 0x8023410C: nop
    
            goto L_80234130;
    }
    // 0x8023410C: nop

    // 0x80234110: lh          $v0, 0x44($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X44);
    // 0x80234114: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80234118: slti        $v0, $v0, 0x320
    ctx->r2 = SIGNED(ctx->r2) < 0X320 ? 1 : 0;
    // 0x8023411C: beq         $v0, $zero, L_80234150
    if (ctx->r2 == 0) {
        // 0x80234120: nop
    
            goto L_80234150;
    }
    // 0x80234120: nop

    // 0x80234124: lhu         $v0, 0x4C($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4C);
    // 0x80234128: j           L_8023414C
    // 0x8023412C: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
        goto L_8023414C;
    // 0x8023412C: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
L_80234130:
    // 0x80234130: lh          $v0, 0x44($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X44);
    // 0x80234134: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80234138: slti        $v0, $v0, 0x161
    ctx->r2 = SIGNED(ctx->r2) < 0X161 ? 1 : 0;
    // 0x8023413C: bne         $v0, $zero, L_80234150
    if (ctx->r2 != 0) {
        // 0x80234140: nop
    
            goto L_80234150;
    }
    // 0x80234140: nop

    // 0x80234144: lhu         $v0, 0x4C($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4C);
    // 0x80234148: subu        $v0, $v1, $v0
    ctx->r2 = SUB32(ctx->r3, ctx->r2);
L_8023414C:
    // 0x8023414C: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
L_80234150:
    // 0x80234150: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80234154: lhu         $v0, -0x730C($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X730C);
    // 0x80234158: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8023415C: bne         $v0, $zero, L_80234244
    if (ctx->r2 != 0) {
        // 0x80234160: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_80234244;
    }
    // 0x80234160: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x80234164: addiu       $s6, $zero, 0x1
    ctx->r22 = ADD32(0, 0X1);
    // 0x80234168: lui         $s4, 0x8024
    ctx->r20 = S32(0X8024 << 16);
    // 0x8023416C: addiu       $s4, $s4, -0x5E98
    ctx->r20 = ADD32(ctx->r20, -0X5E98);
    // 0x80234170: lui         $s5, 0x8024
    ctx->r21 = S32(0X8024 << 16);
    // 0x80234174: addiu       $s5, $s5, -0x5EB0
    ctx->r21 = ADD32(ctx->r21, -0X5EB0);
L_80234178:
    // 0x80234178: jal         0x8004F144
    // 0x8023417C: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_2;
    // 0x8023417C: nop

    after_2:
    // 0x80234180: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80234184: beq         $s0, $zero, L_80234244
    if (ctx->r16 == 0) {
        // 0x80234188: addu        $a0, $s4, $zero
        ctx->r4 = ADD32(ctx->r20, 0);
            goto L_80234244;
    }
    // 0x80234188: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x8023418C: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x80234190: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80234194: addiu       $v0, $zero, 0x83
    ctx->r2 = ADD32(0, 0X83);
    // 0x80234198: sb          $s6, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r22;
    // 0x8023419C: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x802341A0: jal         0x8009A3B4
    // 0x802341A4: sb          $s6, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r22;
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x802341A4: sb          $s6, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r22;
    after_3:
    // 0x802341A8: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x802341AC: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    // 0x802341B0: jal         0x8009A3B4
    // 0x802341B4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x802341B4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_4:
    // 0x802341B8: lhu         $v1, 0x2($s3)
    ctx->r3 = MEM_HU(ctx->r19, 0X2);
    // 0x802341BC: lh          $a2, 0x56($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X56);
    // 0x802341C0: sll         $v0, $s2, 16
    ctx->r2 = S32(ctx->r18 << 16);
    // 0x802341C4: sra         $v0, $v0, 13
    ctx->r2 = S32(SIGNED(ctx->r2) >> 13);
    // 0x802341C8: andi        $v1, $v1, 0x3
    ctx->r3 = ctx->r3 & 0X3;
    // 0x802341CC: sll         $v1, $v1, 5
    ctx->r3 = S32(ctx->r3 << 5);
    // 0x802341D0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802341D4: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x802341D8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802341DC: lh          $v1, -0x6AD6($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X6AD6);
    // 0x802341E0: lui         $a3, 0x8024
    ctx->r7 = S32(0X8024 << 16);
    // 0x802341E4: addu        $a3, $a3, $v0
    ctx->r7 = ADD32(ctx->r7, ctx->r2);
    // 0x802341E8: lh          $a3, -0x6AD8($a3)
    ctx->r7 = MEM_H(ctx->r7, -0X6AD8);
    // 0x802341EC: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x802341F0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802341F4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802341F8: lh          $v0, -0x6AD4($at)
    ctx->r2 = MEM_H(ctx->r1, -0X6AD4);
    // 0x802341FC: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x80234200: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x80234204: jal         0x8004DBA0
    // 0x80234208: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_5;
    // 0x80234208: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_5:
    // 0x8023420C: lhu         $v0, 0x0($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X0);
    // 0x80234210: sh          $v0, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r2;
    // 0x80234214: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80234218: lhu         $v0, -0x5E96($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X5E96);
    // 0x8023421C: sh          $v0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r2;
    // 0x80234220: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80234224: lhu         $v1, -0x5E94($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X5E94);
    // 0x80234228: addiu       $v0, $s2, 0x1
    ctx->r2 = ADD32(ctx->r18, 0X1);
    // 0x8023422C: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x80234230: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80234234: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80234238: slti        $v0, $v0, 0x4
    ctx->r2 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x8023423C: bne         $v0, $zero, L_80234178
    if (ctx->r2 != 0) {
        // 0x80234240: sh          $v1, 0x20($s0)
        MEM_H(0X20, ctx->r16) = ctx->r3;
            goto L_80234178;
    }
    // 0x80234240: sh          $v1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r3;
L_80234244:
    // 0x80234244: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80234248: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x8023424C: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x80234250: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x80234254: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x80234258: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x8023425C: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80234260: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80234264: jr          $ra
    // 0x80234268: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x80234268: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x8023426C: nop

;}
RECOMP_FUNC void func_802263B4_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802263B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802263B8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802263BC: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x802263C0: bne         $v0, $zero, L_8022640C
    if (ctx->r2 != 0) {
        // 0x802263C4: nop
    
            goto L_8022640C;
    }
    // 0x802263C4: nop

    // 0x802263C8: jal         0x8006033C
    // 0x802263CC: addiu       $a0, $zero, 0x238
    ctx->r4 = ADD32(0, 0X238);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x802263CC: addiu       $a0, $zero, 0x238
    ctx->r4 = ADD32(0, 0X238);
    after_0:
    // 0x802263D0: beq         $v0, $zero, L_8022640C
    if (ctx->r2 == 0) {
        // 0x802263D4: nop
    
            goto L_8022640C;
    }
    // 0x802263D4: nop

    // 0x802263D8: jal         0x8006033C
    // 0x802263DC: addiu       $a0, $zero, 0x239
    ctx->r4 = ADD32(0, 0X239);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x802263DC: addiu       $a0, $zero, 0x239
    ctx->r4 = ADD32(0, 0X239);
    after_1:
    // 0x802263E0: beq         $v0, $zero, L_802263F8
    if (ctx->r2 == 0) {
        // 0x802263E4: nop
    
            goto L_802263F8;
    }
    // 0x802263E4: nop

    // 0x802263E8: jal         0x802266D8
    // 0x802263EC: nop

    func_802266D8_ovl7(rdram, ctx);
        goto after_2;
    // 0x802263EC: nop

    after_2:
    // 0x802263F0: j           L_8022640C
    // 0x802263F4: nop

        goto L_8022640C;
    // 0x802263F4: nop

L_802263F8:
    // 0x802263F8: jal         0x8006036C
    // 0x802263FC: addiu       $a0, $zero, 0x239
    ctx->r4 = ADD32(0, 0X239);
    func_8006036C_3B76C(rdram, ctx);
        goto after_3;
    // 0x802263FC: addiu       $a0, $zero, 0x239
    ctx->r4 = ADD32(0, 0X239);
    after_3:
    // 0x80226400: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80226404: jal         0x8005FB30
    // 0x80226408: addiu       $a0, $a0, 0x73E0
    ctx->r4 = ADD32(ctx->r4, 0X73E0);
    func_8005FB30_3AF30(rdram, ctx);
        goto after_4;
    // 0x80226408: addiu       $a0, $a0, 0x73E0
    ctx->r4 = ADD32(ctx->r4, 0X73E0);
    after_4:
L_8022640C:
    // 0x8022640C: jal         0x8006036C
    // 0x80226410: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    func_8006036C_3B76C(rdram, ctx);
        goto after_5;
    // 0x80226410: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    after_5:
    // 0x80226414: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80226418: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8022641C: jr          $ra
    // 0x80226420: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226420: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225BA8_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225BA8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225BAC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225BB0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225BB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225BB8: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x80225BBC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225BC0: beq         $v1, $v0, L_80225BE8
    if (ctx->r3 == ctx->r2) {
        // 0x80225BC4: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80225BE8;
    }
    // 0x80225BC4: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80225BC8: beq         $v0, $zero, L_80225CA0
    if (ctx->r2 == 0) {
        // 0x80225BCC: nop
    
            goto L_80225CA0;
    }
    // 0x80225BCC: nop

    // 0x80225BD0: bne         $v1, $zero, L_80225CA0
    if (ctx->r3 != 0) {
        // 0x80225BD4: nop
    
            goto L_80225CA0;
    }
    // 0x80225BD4: nop

    // 0x80225BD8: jal         0x802283FC
    // 0x80225BDC: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    func_802283FC_ovl7(rdram, ctx);
        goto after_0;
    // 0x80225BDC: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    after_0:
    // 0x80225BE0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225BE4: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225BE8:
    // 0x80225BE8: jal         0x8006033C
    // 0x80225BEC: addiu       $a0, $zero, 0x2C
    ctx->r4 = ADD32(0, 0X2C);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x80225BEC: addiu       $a0, $zero, 0x2C
    ctx->r4 = ADD32(0, 0X2C);
    after_1:
    // 0x80225BF0: beq         $v0, $zero, L_80225C9C
    if (ctx->r2 == 0) {
        // 0x80225BF4: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_80225C9C;
    }
    // 0x80225BF4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225BF8: jal         0x8006033C
    // 0x80225BFC: addiu       $a0, $zero, 0x2D
    ctx->r4 = ADD32(0, 0X2D);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x80225BFC: addiu       $a0, $zero, 0x2D
    ctx->r4 = ADD32(0, 0X2D);
    after_2:
    // 0x80225C00: bne         $v0, $zero, L_80225C9C
    if (ctx->r2 != 0) {
        // 0x80225C04: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_80225C9C;
    }
    // 0x80225C04: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225C08: jal         0x8006033C
    // 0x80225C0C: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
    func_8006033C_3B73C(rdram, ctx);
        goto after_3;
    // 0x80225C0C: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
    after_3:
    // 0x80225C10: bne         $v0, $zero, L_80225C9C
    if (ctx->r2 != 0) {
        // 0x80225C14: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_80225C9C;
    }
    // 0x80225C14: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225C18: jal         0x8006033C
    // 0x80225C1C: addiu       $a0, $zero, 0x2E
    ctx->r4 = ADD32(0, 0X2E);
    func_8006033C_3B73C(rdram, ctx);
        goto after_4;
    // 0x80225C1C: addiu       $a0, $zero, 0x2E
    ctx->r4 = ADD32(0, 0X2E);
    after_4:
    // 0x80225C20: bne         $v0, $zero, L_80225C9C
    if (ctx->r2 != 0) {
        // 0x80225C24: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_80225C9C;
    }
    // 0x80225C24: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225C28: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80225C2C: lhu         $v0, 0x49C4($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X49C4);
    // 0x80225C30: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80225C34: lb          $a0, 0x7134($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X7134);
    // 0x80225C38: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80225C3C: lhu         $v1, 0x49C8($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X49C8);
    // 0x80225C40: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x80225C44: lbu         $a1, 0x7136($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X7136);
    // 0x80225C48: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80225C4C: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80225C50: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x80225C54: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80225C58: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80225C5C: lb          $a0, 0x7135($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X7135);
    // 0x80225C60: sra         $v1, $v1, 24
    ctx->r3 = S32(SIGNED(ctx->r3) >> 24);
    // 0x80225C64: sltu        $v0, $v0, $a1
    ctx->r2 = ctx->r2 < ctx->r5 ? 1 : 0;
    // 0x80225C68: beq         $v0, $zero, L_80225CA0
    if (ctx->r2 == 0) {
        // 0x80225C6C: subu        $v1, $v1, $a0
        ctx->r3 = SUB32(ctx->r3, ctx->r4);
            goto L_80225CA0;
    }
    // 0x80225C6C: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x80225C70: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225C74: lbu         $v0, 0x7137($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X7137);
    // 0x80225C78: sltu        $v0, $v1, $v0
    ctx->r2 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x80225C7C: beq         $v0, $zero, L_80225CA0
    if (ctx->r2 == 0) {
        // 0x80225C80: nop
    
            goto L_80225CA0;
    }
    // 0x80225C80: nop

    // 0x80225C84: jal         0x80060690
    // 0x80225C88: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    func_80060690_3BA90(rdram, ctx);
        goto after_5;
    // 0x80225C88: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    after_5:
    // 0x80225C8C: jal         0x8006036C
    // 0x80225C90: addiu       $a0, $zero, 0x2E
    ctx->r4 = ADD32(0, 0X2E);
    func_8006036C_3B76C(rdram, ctx);
        goto after_6;
    // 0x80225C90: addiu       $a0, $zero, 0x2E
    ctx->r4 = ADD32(0, 0X2E);
    after_6:
    // 0x80225C94: j           L_80225CA0
    // 0x80225C98: nop

        goto L_80225CA0;
    // 0x80225C98: nop

L_80225C9C:
    // 0x80225C9C: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225CA0:
    // 0x80225CA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225CA4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225CA8: jr          $ra
    // 0x80225CAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225CAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80230DD0_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230DD0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80230DD4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80230DD8: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x80230DDC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80230DE0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80230DE4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80230DE8: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x80230DEC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80230DF0: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80230DF4: jal         0x8004D5D4
    // 0x80230DF8: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80230DF8: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    after_0:
    // 0x80230DFC: lui         $s1, 0x8024
    ctx->r17 = S32(0X8024 << 16);
    // 0x80230E00: addiu       $s1, $s1, -0x5EF0
    ctx->r17 = ADD32(ctx->r17, -0X5EF0);
    // 0x80230E04: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80230E08: addiu       $a1, $s2, 0x1C
    ctx->r5 = ADD32(ctx->r18, 0X1C);
    // 0x80230E0C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80230E10: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80230E14: sh          $v0, 0x158($s2)
    MEM_H(0X158, ctx->r18) = ctx->r2;
    // 0x80230E18: sh          $v0, 0x15A($s2)
    MEM_H(0X15A, ctx->r18) = ctx->r2;
    // 0x80230E1C: sh          $v0, 0x15C($s2)
    MEM_H(0X15C, ctx->r18) = ctx->r2;
    // 0x80230E20: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80230E24: sh          $v0, 0x15E($s2)
    MEM_H(0X15E, ctx->r18) = ctx->r2;
    // 0x80230E28: sh          $zero, 0x348($s2)
    MEM_H(0X348, ctx->r18) = 0;
    // 0x80230E2C: jal         0x8009A3B4
    // 0x80230E30: sw          $zero, 0x34C($s2)
    MEM_W(0X34C, ctx->r18) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80230E30: sw          $zero, 0x34C($s2)
    MEM_W(0X34C, ctx->r18) = 0;
    after_1:
    // 0x80230E34: addiu       $s0, $s2, 0x354
    ctx->r16 = ADD32(ctx->r18, 0X354);
    // 0x80230E38: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230E3C: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    // 0x80230E40: jal         0x8009A3B4
    // 0x80230E44: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80230E44: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80230E48: lh          $a2, 0x56($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X56);
    // 0x80230E4C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230E50: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80230E54: addiu       $a3, $zero, 0x100
    ctx->r7 = ADD32(0, 0X100);
    // 0x80230E58: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80230E5C: jal         0x8004DBA0
    // 0x80230E60: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_3;
    // 0x80230E60: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_3:
    // 0x80230E64: lbu         $v1, 0x3($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X3);
    // 0x80230E68: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80230E6C: sh          $v0, 0x6E($s2)
    MEM_H(0X6E, ctx->r18) = ctx->r2;
    // 0x80230E70: sh          $v0, 0xB0($s2)
    MEM_H(0XB0, ctx->r18) = ctx->r2;
    // 0x80230E74: sh          $v0, 0xB2($s2)
    MEM_H(0XB2, ctx->r18) = ctx->r2;
    // 0x80230E78: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80230E7C: addiu       $v0, $v0, -0x6CB0
    ctx->r2 = ADD32(ctx->r2, -0X6CB0);
    // 0x80230E80: sw          $v0, 0x78($s2)
    MEM_W(0X78, ctx->r18) = ctx->r2;
    // 0x80230E84: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80230E88: addiu       $v0, $v0, -0x6CA4
    ctx->r2 = ADD32(ctx->r2, -0X6CA4);
    // 0x80230E8C: sh          $zero, 0x54($s2)
    MEM_H(0X54, ctx->r18) = 0;
    // 0x80230E90: sh          $zero, 0x58($s2)
    MEM_H(0X58, ctx->r18) = 0;
    // 0x80230E94: sw          $zero, 0x44($s2)
    MEM_W(0X44, ctx->r18) = 0;
    // 0x80230E98: sw          $zero, 0x48($s2)
    MEM_W(0X48, ctx->r18) = 0;
    // 0x80230E9C: bne         $v1, $zero, L_80230EB4
    if (ctx->r3 != 0) {
        // 0x80230EA0: sw          $v0, 0x10($s2)
        MEM_W(0X10, ctx->r18) = ctx->r2;
            goto L_80230EB4;
    }
    // 0x80230EA0: sw          $v0, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->r2;
    // 0x80230EA4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80230EA8: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
    // 0x80230EAC: j           L_80230EC4
    // 0x80230EB0: sb          $zero, 0x9($s2)
    MEM_B(0X9, ctx->r18) = 0;
        goto L_80230EC4;
    // 0x80230EB0: sb          $zero, 0x9($s2)
    MEM_B(0X9, ctx->r18) = 0;
L_80230EB4:
    // 0x80230EB4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80230EB8: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
    // 0x80230EBC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80230EC0: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
L_80230EC4:
    // 0x80230EC4: sh          $zero, 0xA($s2)
    MEM_H(0XA, ctx->r18) = 0;
    // 0x80230EC8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80230ECC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80230ED0: jal         0x80050294
    // 0x80230ED4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_4;
    // 0x80230ED4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
    // 0x80230ED8: jal         0x80230EF8
    // 0x80230EDC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_80230EF8_ovl7(rdram, ctx);
        goto after_5;
    // 0x80230EDC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_5:
    // 0x80230EE0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80230EE4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80230EE8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80230EEC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80230EF0: jr          $ra
    // 0x80230EF4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80230EF4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022EBA8_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022EBA8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022EBAC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022EBB0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022EBB4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022EBB8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022EBBC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022EBC0: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022EBC4: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x8022EBC8: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x8022EBCC: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x8022EBD0: beq         $v0, $zero, L_8022ED78
    if (ctx->r2 == 0) {
        // 0x8022EBD4: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8022ED78;
    }
    // 0x8022EBD4: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022EBD8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022EBDC: addu        $at, $at, $v0
    gpr jr_addend_8022EBE4 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022EBE0: lw          $v0, -0x6190($at)
    ctx->r2 = ADD32(ctx->r1, -0X6190);
    // 0x8022EBE4: jr          $v0
    // 0x8022EBE8: nop

    switch (jr_addend_8022EBE4 >> 2) {
        case 0: goto L_8022EBEC; break;
        case 1: goto L_8022EC28; break;
        case 2: goto L_8022EC58; break;
        case 3: goto L_8022ECF0; break;
        case 4: goto L_8022ED3C; break;
        case 5: goto L_8022ED78; break;
        default: switch_error(__func__, 0x8022EBE4, 0x80239E70);
    }
    // 0x8022EBE8: nop

L_8022EBEC:
    // 0x8022EBEC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022EBF0: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022EBF4: lui         $v1, 0x20
    ctx->r3 = S32(0X20 << 16);
    // 0x8022EBF8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022EBFC: beq         $v0, $zero, L_8022EC14
    if (ctx->r2 == 0) {
        // 0x8022EC00: addiu       $v1, $zero, 0x8
        ctx->r3 = ADD32(0, 0X8);
            goto L_8022EC14;
    }
    // 0x8022EC00: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x8022EC04: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022EC08: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x8022EC0C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022EC10: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022EC14:
    // 0x8022EC14: lw          $v0, 0x184($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X184);
    // 0x8022EC18: bne         $v0, $s0, L_8022ED78
    if (ctx->r2 != ctx->r16) {
        // 0x8022EC1C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022ED78;
    }
    // 0x8022EC1C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022EC20: sw          $zero, 0x184($s2)
    MEM_W(0X184, ctx->r18) = 0;
    // 0x8022EC24: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022EC28:
    // 0x8022EC28: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x8022EC2C: bgez        $v0, L_8022EC44
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022EC30: nop
    
            goto L_8022EC44;
    }
    // 0x8022EC30: nop

    // 0x8022EC34: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022EC38: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x8022EC3C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022EC40: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022EC44:
    // 0x8022EC44: lw          $v0, 0x184($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X184);
    // 0x8022EC48: bne         $v0, $s0, L_8022ED78
    if (ctx->r2 != ctx->r16) {
        // 0x8022EC4C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022ED78;
    }
    // 0x8022EC4C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022EC50: sw          $zero, 0x184($s2)
    MEM_W(0X184, ctx->r18) = 0;
    // 0x8022EC54: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022EC58:
    // 0x8022EC58: jal         0x8006036C
    // 0x8022EC5C: addiu       $a0, $zero, 0x604
    ctx->r4 = ADD32(0, 0X604);
    func_8006036C_3B76C(rdram, ctx);
        goto after_0;
    // 0x8022EC5C: addiu       $a0, $zero, 0x604
    ctx->r4 = ADD32(0, 0X604);
    after_0:
    // 0x8022EC60: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x8022EC64: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022EC68: addiu       $s2, $s2, 0x14
    ctx->r18 = ADD32(ctx->r18, 0X14);
    // 0x8022EC6C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022EC70: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022EC74: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022EC78: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x8022EC7C: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
    // 0x8022EC80: sb          $v1, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r3;
    // 0x8022EC84: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x8022EC88: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022EC8C: jal         0x8004F820
    // 0x8022EC90: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x8022EC90: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022EC94: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022EC98: bgez        $v0, L_8022ECC4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022EC9C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8022ECC4;
    }
    // 0x8022EC9C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022ECA0: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022ECA4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022ECA8: jal         0x8004F820
    // 0x8022ECAC: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x8022ECAC: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_2:
    // 0x8022ECB0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022ECB4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022ECB8: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8022ECBC: j           L_8022ECDC
    // 0x8022ECC0: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
        goto L_8022ECDC;
    // 0x8022ECC0: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
L_8022ECC4:
    // 0x8022ECC4: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022ECC8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022ECCC: jal         0x8004F820
    // 0x8022ECD0: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x8022ECD0: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_3:
    // 0x8022ECD4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022ECD8: sra         $v0, $v0, 19
    ctx->r2 = S32(SIGNED(ctx->r2) >> 19);
L_8022ECDC:
    // 0x8022ECDC: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x8022ECE0: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x8022ECE4: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x8022ECE8: j           L_8022ED78
    // 0x8022ECEC: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
        goto L_8022ED78;
    // 0x8022ECEC: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
L_8022ECF0:
    // 0x8022ECF0: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022ECF4: lh          $a3, 0x64($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X64);
    // 0x8022ECF8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022ECFC: jal         0x8004F820
    // 0x8022ED00: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_4;
    // 0x8022ED00: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    after_4:
    // 0x8022ED04: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022ED08: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022ED0C: lw          $a0, 0x3FF0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3FF0);
    // 0x8022ED10: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022ED14: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022ED18: lui         $v0, 0x20
    ctx->r2 = S32(0X20 << 16);
    // 0x8022ED1C: and         $a0, $a0, $v0
    ctx->r4 = ctx->r4 & ctx->r2;
    // 0x8022ED20: beq         $a0, $zero, L_8022ED78
    if (ctx->r4 == 0) {
        // 0x8022ED24: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_8022ED78;
    }
    // 0x8022ED24: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022ED28: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022ED2C: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x8022ED30: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x8022ED34: j           L_8022ED74
    // 0x8022ED38: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022ED74;
    // 0x8022ED38: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022ED3C:
    // 0x8022ED3C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022ED40: lh          $a3, 0x64($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X64);
    // 0x8022ED44: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022ED48: jal         0x8004F820
    // 0x8022ED4C: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_5;
    // 0x8022ED4C: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    after_5:
    // 0x8022ED50: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022ED54: lb          $a0, 0xA7($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XA7);
    // 0x8022ED58: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022ED5C: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022ED60: bgez        $a0, L_8022ED78
    if (SIGNED(ctx->r4) >= 0) {
        // 0x8022ED64: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_8022ED78;
    }
    // 0x8022ED64: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022ED68: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022ED6C: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x8022ED70: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
L_8022ED74:
    // 0x8022ED74: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022ED78:
    // 0x8022ED78: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022ED7C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022ED80: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022ED84: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022ED88: jr          $ra
    // 0x8022ED8C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022ED8C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022861C_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022861C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80228620: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80228624: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80228628: sll         $a0, $a0, 24
    ctx->r4 = S32(ctx->r4 << 24);
    // 0x8022862C: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80228630: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x80228634: lw          $v1, 0x7570($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X7570);
    // 0x80228638: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x8022863C: srlv        $v0, $v0, $a0
    ctx->r2 = S32(U32(ctx->r2) >> (ctx->r4 & 31));
    // 0x80228640: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80228644: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x80228648: beq         $v1, $zero, L_802286F8
    if (ctx->r3 == 0) {
        // 0x8022864C: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_802286F8;
    }
    // 0x8022864C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228650: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x80228654: lui         $s0, 0x8024
    ctx->r16 = S32(0X8024 << 16);
    // 0x80228658: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x8022865C: lw          $s0, -0x3E80($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X3E80);
    // 0x80228660: jal         0x8004DA68
    // 0x80228664: lbu         $a0, 0x1($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X1);
    func_8004DA68_28E68(rdram, ctx);
        goto after_0;
    // 0x80228664: lbu         $a0, 0x1($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X1);
    after_0:
    // 0x80228668: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022866C: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80228670: beq         $v1, $v0, L_80228688
    if (ctx->r3 == ctx->r2) {
        // 0x80228674: addiu       $v0, $zero, 0x60
        ctx->r2 = ADD32(0, 0X60);
            goto L_80228688;
    }
    // 0x80228674: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x80228678: beq         $v1, $v0, L_802286B4
    if (ctx->r3 == ctx->r2) {
        // 0x8022867C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802286B4;
    }
    // 0x8022867C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80228680: j           L_802286DC
    // 0x80228684: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
        goto L_802286DC;
    // 0x80228684: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
L_80228688:
    // 0x80228688: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x8022868C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80228690: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80228694: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80228698: lw          $v0, 0x4020($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4020);
    // 0x8022869C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x802286A0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802286A4: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x802286A8: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x802286AC: j           L_802286C8
    // 0x802286B0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
        goto L_802286C8;
    // 0x802286B0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
L_802286B4:
    // 0x802286B4: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x802286B8: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x802286BC: lui         $v1, 0x8022
    ctx->r3 = S32(0X8022 << 16);
    // 0x802286C0: lw          $v1, -0x26A8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X26A8);
    // 0x802286C4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
L_802286C8:
    // 0x802286C8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802286CC: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x802286D0: jalr        $v0
    // 0x802286D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x802286D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x802286D8: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
L_802286DC:
    // 0x802286DC: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x802286E0: lw          $v1, 0x7570($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X7570);
    // 0x802286E4: srlv        $v0, $v0, $s1
    ctx->r2 = S32(U32(ctx->r2) >> (ctx->r17 & 31));
    // 0x802286E8: nor         $v0, $zero, $v0
    ctx->r2 = ~(0 | ctx->r2);
    // 0x802286EC: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x802286F0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802286F4: sw          $v1, 0x7570($at)
    MEM_W(0X7570, ctx->r1) = ctx->r3;
L_802286F8:
    // 0x802286F8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802286FC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80228700: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228704: jr          $ra
    // 0x80228708: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80228708: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8022870C: nop

;}
RECOMP_FUNC void func_8023562C_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023562C: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x80235630: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x80235634: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x80235638: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x8023563C: sw          $s6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r22;
    // 0x80235640: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x80235644: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x80235648: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x8023564C: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x80235650: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x80235654: lbu         $v1, 0x3($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X3);
    // 0x80235658: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x8023565C: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80235660: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80235664: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80235668: lui         $s5, 0x8024
    ctx->r21 = S32(0X8024 << 16);
    // 0x8023566C: addu        $s5, $s5, $v0
    ctx->r21 = ADD32(ctx->r21, ctx->r2);
    // 0x80235670: lhu         $s5, -0x674C($s5)
    ctx->r21 = MEM_HU(ctx->r21, -0X674C);
    // 0x80235674: addiu       $a2, $sp, 0x1A
    ctx->r6 = ADD32(ctx->r29, 0X1A);
    // 0x80235678: lui         $s6, 0x8024
    ctx->r22 = S32(0X8024 << 16);
    // 0x8023567C: addu        $s6, $s6, $v0
    ctx->r22 = ADD32(ctx->r22, ctx->r2);
    // 0x80235680: lhu         $s6, -0x674A($s6)
    ctx->r22 = MEM_HU(ctx->r22, -0X674A);
    // 0x80235684: jal         0x800874D0
    // 0x80235688: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    func_800874D0_628D0(rdram, ctx);
        goto after_0;
    // 0x80235688: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    after_0:
    // 0x8023568C: lh          $a1, 0x18($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X18);
    // 0x80235690: lbu         $v0, 0x3($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X3);
    // 0x80235694: lh          $a2, 0x1A($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X1A);
    // 0x80235698: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8023569C: addiu       $a0, $a0, -0x5E80
    ctx->r4 = ADD32(ctx->r4, -0X5E80);
    // 0x802356A0: sll         $a3, $s6, 16
    ctx->r7 = S32(ctx->r22 << 16);
    // 0x802356A4: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x802356A8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802356AC: lbu         $v1, -0x66A8($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X66A8);
    // 0x802356B0: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    // 0x802356B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802356B8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x802356BC: sll         $v1, $v1, 5
    ctx->r3 = S32(ctx->r3 << 5);
    // 0x802356C0: jal         0x80086F94
    // 0x802356C4: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    func_80086F94_62394(rdram, ctx);
        goto after_1;
    // 0x802356C4: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    after_1:
    // 0x802356C8: lbu         $v1, 0x3($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X3);
    // 0x802356CC: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x802356D0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802356D4: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x802356D8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802356DC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802356E0: lhu         $v0, -0x6748($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X6748);
    // 0x802356E4: beq         $v0, $zero, L_80235900
    if (ctx->r2 == 0) {
        // 0x802356E8: addu        $s4, $zero, $zero
        ctx->r20 = ADD32(0, 0);
            goto L_80235900;
    }
    // 0x802356E8: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
L_802356EC:
    // 0x802356EC: bgez        $s6, L_802356F8
    if (SIGNED(ctx->r22) >= 0) {
        // 0x802356F0: addu        $v0, $s6, $zero
        ctx->r2 = ADD32(ctx->r22, 0);
            goto L_802356F8;
    }
    // 0x802356F0: addu        $v0, $s6, $zero
    ctx->r2 = ADD32(ctx->r22, 0);
    // 0x802356F4: addiu       $v0, $s6, 0xF
    ctx->r2 = ADD32(ctx->r22, 0XF);
L_802356F8:
    // 0x802356F8: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x802356FC: slt         $v0, $s4, $v0
    ctx->r2 = SIGNED(ctx->r20) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80235700: beq         $v0, $zero, L_802359BC
    if (ctx->r2 == 0) {
        // 0x80235704: addiu       $a1, $sp, 0x20
        ctx->r5 = ADD32(ctx->r29, 0X20);
            goto L_802359BC;
    }
    // 0x80235704: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x80235708: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    // 0x8023570C: lh          $v0, 0x14($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X14);
    // 0x80235710: lh          $a0, 0x16($s3)
    ctx->r4 = MEM_H(ctx->r19, 0X16);
    // 0x80235714: sll         $s0, $s4, 4
    ctx->r16 = S32(ctx->r20 << 4);
    // 0x80235718: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x8023571C: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x80235720: jal         0x800874D0
    // 0x80235724: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    func_800874D0_628D0(rdram, ctx);
        goto after_2;
    // 0x80235724: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_2:
    // 0x80235728: lh          $a0, 0x20($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X20);
    // 0x8023572C: jal         0x80087248
    // 0x80235730: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    func_80087248_62648(rdram, ctx);
        goto after_3;
    // 0x80235730: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    after_3:
    // 0x80235734: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80235738: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x8023573C: lh          $v0, 0x18($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X18);
    // 0x80235740: lh          $a0, 0x1A($s3)
    ctx->r4 = MEM_H(ctx->r19, 0X1A);
    // 0x80235744: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    // 0x80235748: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x8023574C: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x80235750: jal         0x800874D0
    // 0x80235754: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    func_800874D0_628D0(rdram, ctx);
        goto after_4;
    // 0x80235754: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_4:
    // 0x80235758: lh          $a0, 0x20($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X20);
    // 0x8023575C: jal         0x80087248
    // 0x80235760: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    func_80087248_62648(rdram, ctx);
        goto after_5;
    // 0x80235760: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    after_5:
    // 0x80235764: addu        $v1, $s5, $zero
    ctx->r3 = ADD32(ctx->r21, 0);
    // 0x80235768: bgez        $s5, L_80235774
    if (SIGNED(ctx->r21) >= 0) {
        // 0x8023576C: addu        $s2, $v0, $zero
        ctx->r18 = ADD32(ctx->r2, 0);
            goto L_80235774;
    }
    // 0x8023576C: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x80235770: addiu       $v1, $s5, 0xFF
    ctx->r3 = ADD32(ctx->r21, 0XFF);
L_80235774:
    // 0x80235774: addu        $a0, $s5, $s0
    ctx->r4 = ADD32(ctx->r21, ctx->r16);
    // 0x80235778: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x8023577C: jal         0x800874D0
    // 0x80235780: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    func_800874D0_628D0(rdram, ctx);
        goto after_6;
    // 0x80235780: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    after_6:
    // 0x80235784: lh          $a0, 0x20($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X20);
    // 0x80235788: jal         0x80087248
    // 0x8023578C: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    func_80087248_62648(rdram, ctx);
        goto after_7;
    // 0x8023578C: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    after_7:
    // 0x80235790: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x80235794: sltiu       $v0, $s1, 0x1
    ctx->r2 = ctx->r17 < 0X1 ? 1 : 0;
    // 0x80235798: sltiu       $v1, $s2, 0x1
    ctx->r3 = ctx->r18 < 0X1 ? 1 : 0;
    // 0x8023579C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x802357A0: bnel        $v0, $zero, L_802356EC
    if (ctx->r2 != 0) {
        // 0x802357A4: addiu       $s4, $s4, 0x1
        ctx->r20 = ADD32(ctx->r20, 0X1);
            goto L_802356EC;
    }
    goto skip_0;
    // 0x802357A4: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    skip_0:
    // 0x802357A8: beq         $a1, $zero, L_802358F8
    if (ctx->r5 == 0) {
        // 0x802357AC: addu        $t7, $zero, $zero
        ctx->r15 = ADD32(0, 0);
            goto L_802358F8;
    }
    // 0x802357AC: addu        $t7, $zero, $zero
    ctx->r15 = ADD32(0, 0);
    // 0x802357B0: addu        $t6, $a1, $zero
    ctx->r14 = ADD32(ctx->r5, 0);
    // 0x802357B4: addu        $t5, $s2, $zero
    ctx->r13 = ADD32(ctx->r18, 0);
    // 0x802357B8: addu        $t4, $s1, $zero
    ctx->r12 = ADD32(ctx->r17, 0);
L_802357BC:
    // 0x802357BC: lhu         $t1, 0x0($t4)
    ctx->r9 = MEM_HU(ctx->r12, 0X0);
    // 0x802357C0: lhu         $v1, 0x0($t5)
    ctx->r3 = MEM_HU(ctx->r13, 0X0);
    // 0x802357C4: lb          $t3, 0xD($s3)
    ctx->r11 = MEM_B(ctx->r19, 0XD);
    // 0x802357C8: andi        $a2, $t1, 0xFFFF
    ctx->r6 = ctx->r9 & 0XFFFF;
    // 0x802357CC: srl         $t2, $a2, 11
    ctx->r10 = S32(U32(ctx->r6) >> 11);
    // 0x802357D0: srl         $a3, $v1, 11
    ctx->r7 = S32(U32(ctx->r3) >> 11);
    // 0x802357D4: subu        $a3, $a3, $t2
    ctx->r7 = SUB32(ctx->r7, ctx->r10);
    // 0x802357D8: mult        $a3, $t3
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802357DC: mflo        $a3
    ctx->r7 = lo;
    // 0x802357E0: lb          $a1, 0xC($s3)
    ctx->r5 = MEM_B(ctx->r19, 0XC);
    // 0x802357E4: nop

    // 0x802357E8: div         $zero, $a3, $a1
    lo = S32(S64(S32(ctx->r7)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r7)) % S64(S32(ctx->r5)));
    // 0x802357EC: bne         $a1, $zero, L_802357F8
    if (ctx->r5 != 0) {
        // 0x802357F0: nop
    
            goto L_802357F8;
    }
    // 0x802357F0: nop

    // 0x802357F4: break       7
    do_break(2149799924);
L_802357F8:
    // 0x802357F8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802357FC: bne         $a1, $at, L_80235810
    if (ctx->r5 != ctx->r1) {
        // 0x80235800: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80235810;
    }
    // 0x80235800: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80235804: bne         $a3, $at, L_80235810
    if (ctx->r7 != ctx->r1) {
        // 0x80235808: nop
    
            goto L_80235810;
    }
    // 0x80235808: nop

    // 0x8023580C: break       6
    do_break(2149799948);
L_80235810:
    // 0x80235810: mflo        $a3
    ctx->r7 = lo;
    // 0x80235814: sra         $t0, $a2, 6
    ctx->r8 = S32(SIGNED(ctx->r6) >> 6);
    // 0x80235818: andi        $t0, $t0, 0x1F
    ctx->r8 = ctx->r8 & 0X1F;
    // 0x8023581C: sra         $v0, $v1, 6
    ctx->r2 = S32(SIGNED(ctx->r3) >> 6);
    // 0x80235820: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x80235824: subu        $v0, $v0, $t0
    ctx->r2 = SUB32(ctx->r2, ctx->r8);
    // 0x80235828: mult        $v0, $t3
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023582C: mflo        $v0
    ctx->r2 = lo;
    // 0x80235830: nop

    // 0x80235834: nop

    // 0x80235838: div         $zero, $v0, $a1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r5)));
    // 0x8023583C: bne         $a1, $zero, L_80235848
    if (ctx->r5 != 0) {
        // 0x80235840: nop
    
            goto L_80235848;
    }
    // 0x80235840: nop

    // 0x80235844: break       7
    do_break(2149800004);
L_80235848:
    // 0x80235848: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8023584C: bne         $a1, $at, L_80235860
    if (ctx->r5 != ctx->r1) {
        // 0x80235850: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80235860;
    }
    // 0x80235850: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80235854: bne         $v0, $at, L_80235860
    if (ctx->r2 != ctx->r1) {
        // 0x80235858: nop
    
            goto L_80235860;
    }
    // 0x80235858: nop

    // 0x8023585C: break       6
    do_break(2149800028);
L_80235860:
    // 0x80235860: mflo        $v0
    ctx->r2 = lo;
    // 0x80235864: sra         $a2, $a2, 1
    ctx->r6 = S32(SIGNED(ctx->r6) >> 1);
    // 0x80235868: andi        $a2, $a2, 0x1F
    ctx->r6 = ctx->r6 & 0X1F;
    // 0x8023586C: sra         $v1, $v1, 1
    ctx->r3 = S32(SIGNED(ctx->r3) >> 1);
    // 0x80235870: andi        $v1, $v1, 0x1F
    ctx->r3 = ctx->r3 & 0X1F;
    // 0x80235874: subu        $v1, $v1, $a2
    ctx->r3 = SUB32(ctx->r3, ctx->r6);
    // 0x80235878: mult        $v1, $t3
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023587C: mflo        $v1
    ctx->r3 = lo;
    // 0x80235880: nop

    // 0x80235884: nop

    // 0x80235888: div         $zero, $v1, $a1
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r5)));
    // 0x8023588C: bne         $a1, $zero, L_80235898
    if (ctx->r5 != 0) {
        // 0x80235890: nop
    
            goto L_80235898;
    }
    // 0x80235890: nop

    // 0x80235894: break       7
    do_break(2149800084);
L_80235898:
    // 0x80235898: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8023589C: bne         $a1, $at, L_802358B0
    if (ctx->r5 != ctx->r1) {
        // 0x802358A0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_802358B0;
    }
    // 0x802358A0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802358A4: bne         $v1, $at, L_802358B0
    if (ctx->r3 != ctx->r1) {
        // 0x802358A8: nop
    
            goto L_802358B0;
    }
    // 0x802358A8: nop

    // 0x802358AC: break       6
    do_break(2149800108);
L_802358B0:
    // 0x802358B0: mflo        $v1
    ctx->r3 = lo;
    // 0x802358B4: addiu       $t5, $t5, 0x2
    ctx->r13 = ADD32(ctx->r13, 0X2);
    // 0x802358B8: addiu       $t4, $t4, 0x2
    ctx->r12 = ADD32(ctx->r12, 0X2);
    // 0x802358BC: addiu       $t7, $t7, 0x1
    ctx->r15 = ADD32(ctx->r15, 0X1);
    // 0x802358C0: andi        $t1, $t1, 0x1
    ctx->r9 = ctx->r9 & 0X1;
    // 0x802358C4: addu        $t2, $t2, $a3
    ctx->r10 = ADD32(ctx->r10, ctx->r7);
    // 0x802358C8: sll         $t2, $t2, 11
    ctx->r10 = S32(ctx->r10 << 11);
    // 0x802358CC: or          $t1, $t1, $t2
    ctx->r9 = ctx->r9 | ctx->r10;
    // 0x802358D0: addu        $t0, $t0, $v0
    ctx->r8 = ADD32(ctx->r8, ctx->r2);
    // 0x802358D4: sll         $t0, $t0, 6
    ctx->r8 = S32(ctx->r8 << 6);
    // 0x802358D8: or          $t1, $t1, $t0
    ctx->r9 = ctx->r9 | ctx->r8;
    // 0x802358DC: slti        $v0, $t7, 0x10
    ctx->r2 = SIGNED(ctx->r15) < 0X10 ? 1 : 0;
    // 0x802358E0: addu        $a2, $a2, $v1
    ctx->r6 = ADD32(ctx->r6, ctx->r3);
    // 0x802358E4: sll         $a2, $a2, 1
    ctx->r6 = S32(ctx->r6 << 1);
    // 0x802358E8: or          $t1, $t1, $a2
    ctx->r9 = ctx->r9 | ctx->r6;
    // 0x802358EC: sh          $t1, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r9;
    // 0x802358F0: bne         $v0, $zero, L_802357BC
    if (ctx->r2 != 0) {
        // 0x802358F4: addiu       $t6, $t6, 0x2
        ctx->r14 = ADD32(ctx->r14, 0X2);
            goto L_802357BC;
    }
    // 0x802358F4: addiu       $t6, $t6, 0x2
    ctx->r14 = ADD32(ctx->r14, 0X2);
L_802358F8:
    // 0x802358F8: j           L_802356EC
    // 0x802358FC: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
        goto L_802356EC;
    // 0x802358FC: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
L_80235900:
    // 0x80235900: lb          $v0, 0xD($s3)
    ctx->r2 = MEM_B(ctx->r19, 0XD);
    // 0x80235904: bne         $v0, $zero, L_802359BC
    if (ctx->r2 != 0) {
        // 0x80235908: nop
    
            goto L_802359BC;
    }
    // 0x80235908: nop

L_8023590C:
    // 0x8023590C: addu        $v0, $s6, $zero
    ctx->r2 = ADD32(ctx->r22, 0);
    // 0x80235910: bltzl       $v0, L_80235918
    if (SIGNED(ctx->r2) < 0) {
        // 0x80235914: addiu       $v0, $v0, 0xF
        ctx->r2 = ADD32(ctx->r2, 0XF);
            goto L_80235918;
    }
    goto skip_1;
    // 0x80235914: addiu       $v0, $v0, 0xF
    ctx->r2 = ADD32(ctx->r2, 0XF);
    skip_1:
L_80235918:
    // 0x80235918: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x8023591C: slt         $v0, $s4, $v0
    ctx->r2 = SIGNED(ctx->r20) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80235920: beq         $v0, $zero, L_802359BC
    if (ctx->r2 == 0) {
        // 0x80235924: addiu       $a1, $sp, 0x20
        ctx->r5 = ADD32(ctx->r29, 0X20);
            goto L_802359BC;
    }
    // 0x80235924: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x80235928: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    // 0x8023592C: lh          $v0, 0x14($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X14);
    // 0x80235930: lh          $a0, 0x16($s3)
    ctx->r4 = MEM_H(ctx->r19, 0X16);
    // 0x80235934: sll         $s0, $s4, 4
    ctx->r16 = S32(ctx->r20 << 4);
    // 0x80235938: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x8023593C: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x80235940: jal         0x800874D0
    // 0x80235944: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    func_800874D0_628D0(rdram, ctx);
        goto after_8;
    // 0x80235944: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_8:
    // 0x80235948: lh          $a0, 0x20($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X20);
    // 0x8023594C: jal         0x80087248
    // 0x80235950: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    func_80087248_62648(rdram, ctx);
        goto after_9;
    // 0x80235950: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    after_9:
    // 0x80235954: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80235958: bgez        $s5, L_80235964
    if (SIGNED(ctx->r21) >= 0) {
        // 0x8023595C: addu        $v0, $s5, $zero
        ctx->r2 = ADD32(ctx->r21, 0);
            goto L_80235964;
    }
    // 0x8023595C: addu        $v0, $s5, $zero
    ctx->r2 = ADD32(ctx->r21, 0);
    // 0x80235960: addiu       $v0, $s5, 0xFF
    ctx->r2 = ADD32(ctx->r21, 0XFF);
L_80235964:
    // 0x80235964: sra         $v0, $v0, 8
    ctx->r2 = S32(SIGNED(ctx->r2) >> 8);
    // 0x80235968: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8023596C: subu        $v1, $s5, $v0
    ctx->r3 = SUB32(ctx->r21, ctx->r2);
    // 0x80235970: addu        $a0, $s0, $v1
    ctx->r4 = ADD32(ctx->r16, ctx->r3);
    // 0x80235974: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80235978: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x8023597C: jal         0x800874D0
    // 0x80235980: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    func_800874D0_628D0(rdram, ctx);
        goto after_10;
    // 0x80235980: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    after_10:
    // 0x80235984: lh          $a0, 0x20($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X20);
    // 0x80235988: jal         0x80087248
    // 0x8023598C: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    func_80087248_62648(rdram, ctx);
        goto after_11;
    // 0x8023598C: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    after_11:
    // 0x80235990: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x80235994: sltiu       $v0, $s1, 0x1
    ctx->r2 = ctx->r17 < 0X1 ? 1 : 0;
    // 0x80235998: sltiu       $v1, $a1, 0x1
    ctx->r3 = ctx->r5 < 0X1 ? 1 : 0;
    // 0x8023599C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x802359A0: bnel        $v0, $zero, L_8023590C
    if (ctx->r2 != 0) {
        // 0x802359A4: addiu       $s4, $s4, 0x1
        ctx->r20 = ADD32(ctx->r20, 0X1);
            goto L_8023590C;
    }
    goto skip_2;
    // 0x802359A4: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    skip_2:
    // 0x802359A8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802359AC: jal         0x80099F90
    // 0x802359B0: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    bcopy_recomp(rdram, ctx);
        goto after_12;
    // 0x802359B0: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_12:
    // 0x802359B4: j           L_8023590C
    // 0x802359B8: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
        goto L_8023590C;
    // 0x802359B8: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
L_802359BC:
    // 0x802359BC: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x802359C0: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x802359C4: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x802359C8: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x802359CC: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x802359D0: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x802359D4: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x802359D8: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x802359DC: jr          $ra
    // 0x802359E0: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    TRACE_RETURN()
    return;
    // 0x802359E0: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_8022D484_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D484: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022D488: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D48C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022D490: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8022D494: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022D498: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022D49C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022D4A0: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022D4A4: lbu         $v0, 0x34B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X34B);
    // 0x8022D4A8: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022D4AC: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022D4B0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022D4B4: sb          $v0, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r2;
    // 0x8022D4B8: sh          $v1, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r3;
    // 0x8022D4BC: jal         0x8022E3A8
    // 0x8022D4C0: sb          $a1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r5;
    func_8022E3A8_ovl7(rdram, ctx);
        goto after_0;
    // 0x8022D4C0: sb          $a1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r5;
    after_0:
    // 0x8022D4C4: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x8022D4C8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022D4CC: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022D4D0: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x8022D4D4: addiu       $s2, $s2, 0x49C4
    ctx->r18 = ADD32(ctx->r18, 0X49C4);
    // 0x8022D4D8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022D4DC: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x8022D4E0: jal         0x8004F820
    // 0x8022D4E4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x8022D4E4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022D4E8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D4EC: bgez        $v0, L_8022D51C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022D4F0: addiu       $s3, $s0, 0x348
        ctx->r19 = ADD32(ctx->r16, 0X348);
            goto L_8022D51C;
    }
    // 0x8022D4F0: addiu       $s3, $s0, 0x348
    ctx->r19 = ADD32(ctx->r16, 0X348);
    // 0x8022D4F4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022D4F8: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022D4FC: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022D500: jal         0x8004F820
    // 0x8022D504: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x8022D504: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_2:
    // 0x8022D508: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D50C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022D510: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8022D514: j           L_8022D538
    // 0x8022D518: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
        goto L_8022D538;
    // 0x8022D518: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
L_8022D51C:
    // 0x8022D51C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022D520: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022D524: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022D528: jal         0x8004F820
    // 0x8022D52C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x8022D52C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_3:
    // 0x8022D530: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D534: sra         $v0, $v0, 19
    ctx->r2 = S32(SIGNED(ctx->r2) >> 19);
L_8022D538:
    // 0x8022D538: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022D53C: sh          $v0, 0x6($s3)
    MEM_H(0X6, ctx->r19) = ctx->r2;
    // 0x8022D540: lbu         $a3, 0xC($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XC);
    // 0x8022D544: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022D548: jal         0x800610AC
    // 0x8022D54C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_4;
    // 0x8022D54C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
    // 0x8022D550: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022D554: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022D558: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022D55C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022D560: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D564: jr          $ra
    // 0x8022D568: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022D568: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80229648_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229648: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022964C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229650: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229654: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80229658: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x8022965C: sltiu       $v0, $v1, 0xC
    ctx->r2 = ctx->r3 < 0XC ? 1 : 0;
    // 0x80229660: beq         $v0, $zero, L_80229838
    if (ctx->r2 == 0) {
        // 0x80229664: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80229838;
    }
    // 0x80229664: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80229668: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022966C: addu        $at, $at, $v0
    gpr jr_addend_80229674 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80229670: lw          $v0, -0x6298($at)
    ctx->r2 = ADD32(ctx->r1, -0X6298);
    // 0x80229674: jr          $v0
    // 0x80229678: nop

    switch (jr_addend_80229674 >> 2) {
        case 0: goto L_8022967C; break;
        case 1: goto L_80229704; break;
        case 2: goto L_80229738; break;
        case 3: goto L_80229838; break;
        case 4: goto L_80229838; break;
        case 5: goto L_80229838; break;
        case 6: goto L_80229838; break;
        case 7: goto L_80229838; break;
        case 8: goto L_80229838; break;
        case 9: goto L_80229838; break;
        case 10: goto L_802297C4; break;
        case 11: goto L_80229818; break;
        default: switch_error(__func__, 0x80229674, 0x80239D68);
    }
    // 0x80229678: nop

L_8022967C:
    // 0x8022967C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80229680: jal         0x8006FF84
    // 0x80229684: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_0;
    // 0x80229684: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_0:
    // 0x80229688: beq         $v0, $zero, L_80229838
    if (ctx->r2 == 0) {
        // 0x8022968C: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80229838;
    }
    // 0x8022968C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80229690: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80229694: jal         0x8005F6B4
    // 0x80229698: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8005F6B4_3AAB4(rdram, ctx);
        goto after_1;
    // 0x80229698: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x8022969C: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x802296A0: addiu       $a0, $a0, -0x75FC
    ctx->r4 = ADD32(ctx->r4, -0X75FC);
    // 0x802296A4: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802296A8: addiu       $v0, $v0, -0x7650
    ctx->r2 = ADD32(ctx->r2, -0X7650);
    // 0x802296AC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x802296B0: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    // 0x802296B4: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802296B8: addiu       $v0, $v0, -0x75D4
    ctx->r2 = ADD32(ctx->r2, -0X75D4);
    // 0x802296BC: jal         0x8005FA7C
    // 0x802296C0: sw          $v0, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->r2;
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_2;
    // 0x802296C0: sw          $v0, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->r2;
    after_2:
    // 0x802296C4: lbu         $v1, 0x6($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X6);
    // 0x802296C8: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x802296CC: addiu       $a0, $a0, -0x75E8
    ctx->r4 = ADD32(ctx->r4, -0X75E8);
    // 0x802296D0: andi        $v1, $v1, 0xDF
    ctx->r3 = ctx->r3 & 0XDF;
    // 0x802296D4: jal         0x8005FA7C
    // 0x802296D8: sb          $v1, 0x6($v0)
    MEM_B(0X6, ctx->r2) = ctx->r3;
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_3;
    // 0x802296D8: sb          $v1, 0x6($v0)
    MEM_B(0X6, ctx->r2) = ctx->r3;
    after_3:
    // 0x802296DC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802296E0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802296E4: sb          $v0, 0x49B8($at)
    MEM_B(0X49B8, ctx->r1) = ctx->r2;
    // 0x802296E8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802296EC: sb          $zero, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = 0;
    // 0x802296F0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802296F4: jal         0x8005FB90
    // 0x802296F8: sw          $zero, 0x49BC($at)
    MEM_W(0X49BC, ctx->r1) = 0;
    func_8005FB90_3AF90(rdram, ctx);
        goto after_4;
    // 0x802296F8: sw          $zero, 0x49BC($at)
    MEM_W(0X49BC, ctx->r1) = 0;
    after_4:
    // 0x802296FC: j           L_80229808
    // 0x80229700: nop

        goto L_80229808;
    // 0x80229700: nop

L_80229704:
    // 0x80229704: lw          $v0, 0xA4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA4);
    // 0x80229708: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x8022970C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80229710: bne         $v1, $v0, L_80229724
    if (ctx->r3 != ctx->r2) {
        // 0x80229714: nop
    
            goto L_80229724;
    }
    // 0x80229714: nop

    // 0x80229718: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8022971C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80229720: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80229724:
    // 0x80229724: jal         0x8006072C
    // 0x80229728: nop

    func_8006072C_3BB2C(rdram, ctx);
        goto after_5;
    // 0x80229728: nop

    after_5:
    // 0x8022972C: beq         $v0, $zero, L_80229738
    if (ctx->r2 == 0) {
        // 0x80229730: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_80229738;
    }
    // 0x80229730: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80229734: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80229738:
    // 0x80229738: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8022973C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80229740: beq         $v1, $v0, L_80229758
    if (ctx->r3 == ctx->r2) {
        // 0x80229744: nop
    
            goto L_80229758;
    }
    // 0x80229744: nop

    // 0x80229748: lw          $v0, 0xA4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA4);
    // 0x8022974C: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x80229750: jalr        $v0
    // 0x80229754: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_6;
    // 0x80229754: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
L_80229758:
    // 0x80229758: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022975C: lb          $v0, 0x49BC($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X49BC);
    // 0x80229760: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80229764: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80229768: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022976C: lw          $v0, -0x7584($at)
    ctx->r2 = MEM_W(ctx->r1, -0X7584);
    // 0x80229770: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80229774: jalr        $v0
    // 0x80229778: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_7;
    // 0x80229778: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_7:
    // 0x8022977C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80229780: addiu       $a0, $a0, 0x4DD8
    ctx->r4 = ADD32(ctx->r4, 0X4DD8);
    // 0x80229784: jal         0x8004DD04
    // 0x80229788: addiu       $a1, $a0, 0x10
    ctx->r5 = ADD32(ctx->r4, 0X10);
    func_8004DD04_29104(rdram, ctx);
        goto after_8;
    // 0x80229788: addiu       $a1, $a0, 0x10
    ctx->r5 = ADD32(ctx->r4, 0X10);
    after_8:
    // 0x8022978C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80229790: addiu       $a0, $a0, 0x49CC
    ctx->r4 = ADD32(ctx->r4, 0X49CC);
    // 0x80229794: jal         0x8004DD04
    // 0x80229798: addiu       $a1, $a0, -0x8
    ctx->r5 = ADD32(ctx->r4, -0X8);
    func_8004DD04_29104(rdram, ctx);
        goto after_9;
    // 0x80229798: addiu       $a1, $a0, -0x8
    ctx->r5 = ADD32(ctx->r4, -0X8);
    after_9:
    // 0x8022979C: jal         0x8005FB90
    // 0x802297A0: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_10;
    // 0x802297A0: nop

    after_10:
    // 0x802297A4: jal         0x80060018
    // 0x802297A8: nop

    func_80060018_3B418(rdram, ctx);
        goto after_11;
    // 0x802297A8: nop

    after_11:
    // 0x802297AC: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x802297B0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802297B4: bne         $v1, $v0, L_80229838
    if (ctx->r3 != ctx->r2) {
        // 0x802297B8: addiu       $v0, $zero, 0xB
        ctx->r2 = ADD32(0, 0XB);
            goto L_80229838;
    }
    // 0x802297B8: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x802297BC: j           L_80229838
    // 0x802297C0: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
        goto L_80229838;
    // 0x802297C0: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_802297C4:
    // 0x802297C4: jal         0x80061798
    // 0x802297C8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_80061798_3CB98(rdram, ctx);
        goto after_12;
    // 0x802297C8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_12:
    // 0x802297CC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802297D0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802297D4: jal         0x80036B00
    // 0x802297D8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80036B00_11F00(rdram, ctx);
        goto after_13;
    // 0x802297D8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_13:
    // 0x802297DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802297E0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802297E4: jal         0x80034844
    // 0x802297E8: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    func_80034844_FC44(rdram, ctx);
        goto after_14;
    // 0x802297E8: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    after_14:
    // 0x802297EC: jal         0x8004F418
    // 0x802297F0: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
    func_8004F418_2A818(rdram, ctx);
        goto after_15;
    // 0x802297F0: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
    after_15:
    // 0x802297F4: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x802297F8: addiu       $a0, $zero, 0x52A
    ctx->r4 = ADD32(0, 0X52A);
    // 0x802297FC: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x80229800: jal         0x8006036C
    // 0x80229804: sb          $v1, 0x8($v0)
    MEM_B(0X8, ctx->r2) = ctx->r3;
    func_8006036C_3B76C(rdram, ctx);
        goto after_16;
    // 0x80229804: sb          $v1, 0x8($v0)
    MEM_B(0X8, ctx->r2) = ctx->r3;
    after_16:
L_80229808:
    // 0x80229808: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8022980C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80229810: j           L_80229838
    // 0x80229814: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
        goto L_80229838;
    // 0x80229814: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80229818:
    // 0x80229818: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022981C: jal         0x80070050
    // 0x80229820: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    func_80070050_4B450(rdram, ctx);
        goto after_17;
    // 0x80229820: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_17:
    // 0x80229824: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229828: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022982C: jal         0x80035288
    // 0x80229830: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    func_80035288_10688(rdram, ctx);
        goto after_18;
    // 0x80229830: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    after_18:
    // 0x80229834: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
L_80229838:
    // 0x80229838: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022983C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229840: jr          $ra
    // 0x80229844: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80229844: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022E904_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E904: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022E908: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022E90C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022E910: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022E914: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022E918: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022E91C: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x8022E920: beq         $v0, $zero, L_8022EA3C
    if (ctx->r2 == 0) {
        // 0x8022E924: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_8022EA3C;
    }
    // 0x8022E924: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x8022E928: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022E92C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022E930: addu        $at, $at, $v0
    gpr jr_addend_8022E938 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022E934: lw          $v0, -0x61A8($at)
    ctx->r2 = ADD32(ctx->r1, -0X61A8);
    // 0x8022E938: jr          $v0
    // 0x8022E93C: nop

    switch (jr_addend_8022E938 >> 2) {
        case 0: goto L_8022E940; break;
        case 1: goto L_8022E94C; break;
        case 2: goto L_8022E984; break;
        case 3: goto L_8022E99C; break;
        case 4: goto L_8022E9CC; break;
        case 5: goto L_8022E9F0; break;
        default: switch_error(__func__, 0x8022E938, 0x80239E58);
    }
    // 0x8022E93C: nop

L_8022E940:
    // 0x8022E940: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022E944: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022E948: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022E94C:
    // 0x8022E94C: jal         0x8006033C
    // 0x8022E950: addiu       $a0, $zero, 0x609
    ctx->r4 = ADD32(0, 0X609);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x8022E950: addiu       $a0, $zero, 0x609
    ctx->r4 = ADD32(0, 0X609);
    after_0:
    // 0x8022E954: beq         $v0, $zero, L_8022EA3C
    if (ctx->r2 == 0) {
        // 0x8022E958: nop
    
            goto L_8022EA3C;
    }
    // 0x8022E958: nop

    // 0x8022E95C: jal         0x80060590
    // 0x8022E960: addiu       $a0, $zero, 0x609
    ctx->r4 = ADD32(0, 0X609);
    func_80060590_3B990(rdram, ctx);
        goto after_1;
    // 0x8022E960: addiu       $a0, $zero, 0x609
    ctx->r4 = ADD32(0, 0X609);
    after_1:
    // 0x8022E964: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022E968: addiu       $v1, $zero, 0x14
    ctx->r3 = ADD32(0, 0X14);
    // 0x8022E96C: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x8022E970: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022E974: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022E978: addiu       $v0, $zero, 0x46
    ctx->r2 = ADD32(0, 0X46);
    // 0x8022E97C: j           L_8022EA3C
    // 0x8022E980: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
        goto L_8022EA3C;
    // 0x8022E980: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_8022E984:
    // 0x8022E984: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x8022E988: bgez        $v0, L_8022EA3C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022E98C: addiu       $v1, $zero, 0x15
        ctx->r3 = ADD32(0, 0X15);
            goto L_8022EA3C;
    }
    // 0x8022E98C: addiu       $v1, $zero, 0x15
    ctx->r3 = ADD32(0, 0X15);
    // 0x8022E990: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022E994: j           L_8022EA34
    // 0x8022E998: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
        goto L_8022EA34;
    // 0x8022E998: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
L_8022E99C:
    // 0x8022E99C: jal         0x8006033C
    // 0x8022E9A0: addiu       $a0, $zero, 0x609
    ctx->r4 = ADD32(0, 0X609);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x8022E9A0: addiu       $a0, $zero, 0x609
    ctx->r4 = ADD32(0, 0X609);
    after_2:
    // 0x8022E9A4: beq         $v0, $zero, L_8022EA3C
    if (ctx->r2 == 0) {
        // 0x8022E9A8: nop
    
            goto L_8022EA3C;
    }
    // 0x8022E9A8: nop

    // 0x8022E9AC: jal         0x80060590
    // 0x8022E9B0: addiu       $a0, $zero, 0x609
    ctx->r4 = ADD32(0, 0X609);
    func_80060590_3B990(rdram, ctx);
        goto after_3;
    // 0x8022E9B0: addiu       $a0, $zero, 0x609
    ctx->r4 = ADD32(0, 0X609);
    after_3:
    // 0x8022E9B4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022E9B8: addiu       $v1, $zero, 0x11
    ctx->r3 = ADD32(0, 0X11);
    // 0x8022E9BC: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x8022E9C0: addiu       $v1, $zero, 0x800
    ctx->r3 = ADD32(0, 0X800);
    // 0x8022E9C4: j           L_8022EA34
    // 0x8022E9C8: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
        goto L_8022EA34;
    // 0x8022E9C8: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
L_8022E9CC:
    // 0x8022E9CC: jal         0x8006033C
    // 0x8022E9D0: addiu       $a0, $zero, 0x609
    ctx->r4 = ADD32(0, 0X609);
    func_8006033C_3B73C(rdram, ctx);
        goto after_4;
    // 0x8022E9D0: addiu       $a0, $zero, 0x609
    ctx->r4 = ADD32(0, 0X609);
    after_4:
    // 0x8022E9D4: beq         $v0, $zero, L_8022EA3C
    if (ctx->r2 == 0) {
        // 0x8022E9D8: nop
    
            goto L_8022EA3C;
    }
    // 0x8022E9D8: nop

    // 0x8022E9DC: jal         0x80060590
    // 0x8022E9E0: addiu       $a0, $zero, 0x609
    ctx->r4 = ADD32(0, 0X609);
    func_80060590_3B990(rdram, ctx);
        goto after_5;
    // 0x8022E9E0: addiu       $a0, $zero, 0x609
    ctx->r4 = ADD32(0, 0X609);
    after_5:
    // 0x8022E9E4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022E9E8: j           L_8022EA30
    // 0x8022E9EC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_8022EA30;
    // 0x8022E9EC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_8022E9F0:
    // 0x8022E9F0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022E9F4: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022E9F8: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x8022E9FC: addiu       $a1, $a1, -0x6D34
    ctx->r5 = ADD32(ctx->r5, -0X6D34);
    // 0x8022EA00: jal         0x8004F820
    // 0x8022EA04: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    func_8004F820_2AC20(rdram, ctx);
        goto after_6;
    // 0x8022EA04: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    after_6:
    // 0x8022EA08: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022EA0C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022EA10: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022EA14: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022EA18: bne         $v0, $zero, L_8022EA3C
    if (ctx->r2 != 0) {
        // 0x8022EA1C: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_8022EA3C;
    }
    // 0x8022EA1C: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022EA20: jal         0x8006036C
    // 0x8022EA24: addiu       $a0, $zero, 0x607
    ctx->r4 = ADD32(0, 0X607);
    func_8006036C_3B76C(rdram, ctx);
        goto after_7;
    // 0x8022EA24: addiu       $a0, $zero, 0x607
    ctx->r4 = ADD32(0, 0X607);
    after_7:
    // 0x8022EA28: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022EA2C: addiu       $v1, $zero, 0x11
    ctx->r3 = ADD32(0, 0X11);
L_8022EA30:
    // 0x8022EA30: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
L_8022EA34:
    // 0x8022EA34: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022EA38: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022EA3C:
    // 0x8022EA3C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022EA40: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022EA44: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022EA48: jr          $ra
    // 0x8022EA4C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022EA4C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80225B30_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225B30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225B34: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225B38: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225B3C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225B40: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225B44: bne         $v0, $zero, L_80225B5C
    if (ctx->r2 != 0) {
        // 0x80225B48: nop
    
            goto L_80225B5C;
    }
    // 0x80225B48: nop

    // 0x80225B4C: jal         0x802283FC
    // 0x80225B50: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    func_802283FC_ovl7(rdram, ctx);
        goto after_0;
    // 0x80225B50: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    after_0:
    // 0x80225B54: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225B58: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
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
RECOMP_FUNC void func_8022948C_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022948C: jr          $ra
    // 0x80229490: nop

    TRACE_RETURN()
    return;
    // 0x80229490: nop

    // 0x80229494: nop

    // 0x80229498: nop

    // 0x8022949C: nop

;}
RECOMP_FUNC void func_802359E4_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802359E4: lhu         $v0, 0x18($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X18);
    // 0x802359E8: lw          $a1, 0x20($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X20);
    // 0x802359EC: lhu         $v1, 0x1A($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X1A);
    // 0x802359F0: sh          $v0, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r2;
    // 0x802359F4: sh          $v1, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r3;
    // 0x802359F8: lb          $v1, 0x3($a1)
    ctx->r3 = MEM_B(ctx->r5, 0X3);
    // 0x802359FC: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80235A00: bgez        $v1, L_80235A40
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80235A04: addu        $a1, $v1, $zero
        ctx->r5 = ADD32(ctx->r3, 0);
            goto L_80235A40;
    }
    // 0x80235A04: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x80235A08: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80235A0C: bne         $v1, $v0, L_80235A2C
    if (ctx->r3 != ctx->r2) {
        // 0x80235A10: andi        $v0, $a1, 0x7F
        ctx->r2 = ctx->r5 & 0X7F;
            goto L_80235A2C;
    }
    // 0x80235A10: andi        $v0, $a1, 0x7F
    ctx->r2 = ctx->r5 & 0X7F;
    // 0x80235A14: lb          $v1, 0xC($a0)
    ctx->r3 = MEM_B(ctx->r4, 0XC);
    // 0x80235A18: lb          $v0, 0xD($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XD);
    // 0x80235A1C: bne         $v1, $v0, L_80235A4C
    if (ctx->r3 != ctx->r2) {
        // 0x80235A20: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80235A4C;
    }
    // 0x80235A20: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80235A24: j           L_80235A70
    // 0x80235A28: nop

        goto L_80235A70;
    // 0x80235A28: nop

L_80235A2C:
    // 0x80235A2C: lw          $v1, 0x1C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X1C);
    // 0x80235A30: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80235A34: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80235A38: j           L_80235A4C
    // 0x80235A3C: sw          $v1, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r3;
        goto L_80235A4C;
    // 0x80235A3C: sw          $v1, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r3;
L_80235A40:
    // 0x80235A40: lw          $v0, 0x20($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X20);
    // 0x80235A44: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80235A48: sw          $v0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r2;
L_80235A4C:
    // 0x80235A4C: lw          $a1, 0x20($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X20);
    // 0x80235A50: lbu         $v0, 0x2($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X2);
    // 0x80235A54: sb          $zero, 0xD($a0)
    MEM_B(0XD, ctx->r4) = 0;
    // 0x80235A58: sb          $v0, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r2;
    // 0x80235A5C: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x80235A60: sh          $v0, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r2;
    // 0x80235A64: lbu         $v1, 0x1($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X1);
    // 0x80235A68: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80235A6C: sh          $v1, 0x1A($a0)
    MEM_H(0X1A, ctx->r4) = ctx->r3;
L_80235A70:
    // 0x80235A70: jr          $ra
    // 0x80235A74: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x80235A74: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    // 0x80235A78: nop

    // 0x80235A7C: nop

;}
RECOMP_FUNC void func_8022D800_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D800: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022D804: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D808: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022D80C: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8022D810: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022D814: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022D818: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022D81C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022D820: lbu         $v0, 0x34B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X34B);
    // 0x8022D824: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022D828: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022D82C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022D830: sb          $v0, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r2;
    // 0x8022D834: sh          $v1, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r3;
    // 0x8022D838: jal         0x8022E3A8
    // 0x8022D83C: sb          $a1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r5;
    func_8022E3A8_ovl7(rdram, ctx);
        goto after_0;
    // 0x8022D83C: sb          $a1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r5;
    after_0:
    // 0x8022D840: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x8022D844: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022D848: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022D84C: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x8022D850: addiu       $s2, $s2, 0x49C4
    ctx->r18 = ADD32(ctx->r18, 0X49C4);
    // 0x8022D854: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022D858: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x8022D85C: jal         0x8004F820
    // 0x8022D860: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x8022D860: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022D864: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D868: bgez        $v0, L_8022D898
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022D86C: addiu       $s3, $s0, 0x348
        ctx->r19 = ADD32(ctx->r16, 0X348);
            goto L_8022D898;
    }
    // 0x8022D86C: addiu       $s3, $s0, 0x348
    ctx->r19 = ADD32(ctx->r16, 0X348);
    // 0x8022D870: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022D874: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022D878: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022D87C: jal         0x8004F820
    // 0x8022D880: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x8022D880: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_2:
    // 0x8022D884: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D888: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022D88C: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8022D890: j           L_8022D8B4
    // 0x8022D894: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
        goto L_8022D8B4;
    // 0x8022D894: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
L_8022D898:
    // 0x8022D898: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022D89C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022D8A0: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022D8A4: jal         0x8004F820
    // 0x8022D8A8: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x8022D8A8: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_3:
    // 0x8022D8AC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D8B0: sra         $v0, $v0, 19
    ctx->r2 = S32(SIGNED(ctx->r2) >> 19);
L_8022D8B4:
    // 0x8022D8B4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022D8B8: sh          $v0, 0x6($s3)
    MEM_H(0X6, ctx->r19) = ctx->r2;
    // 0x8022D8BC: lbu         $a3, 0xC($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XC);
    // 0x8022D8C0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022D8C4: jal         0x800610AC
    // 0x8022D8C8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_4;
    // 0x8022D8C8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
    // 0x8022D8CC: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022D8D0: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022D8D4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022D8D8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022D8DC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D8E0: jr          $ra
    // 0x8022D8E4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022D8E4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80236020_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236020: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80236024: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80236028: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023602C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80236030: jal         0x80071A70
    // 0x80236034: lui         $a0, 0x13
    ctx->r4 = S32(0X13 << 16);
    func_80071A70_4CE70(rdram, ctx);
        goto after_0;
    // 0x80236034: lui         $a0, 0x13
    ctx->r4 = S32(0X13 << 16);
    after_0:
    // 0x80236038: beq         $v0, $zero, L_80236054
    if (ctx->r2 == 0) {
        // 0x8023603C: sw          $v0, 0x1C($s0)
        MEM_W(0X1C, ctx->r16) = ctx->r2;
            goto L_80236054;
    }
    // 0x8023603C: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x80236040: lui         $a0, 0x13
    ctx->r4 = S32(0X13 << 16);
    // 0x80236044: jal         0x80071A70
    // 0x80236048: ori         $a0, $a0, 0x200
    ctx->r4 = ctx->r4 | 0X200;
    func_80071A70_4CE70(rdram, ctx);
        goto after_1;
    // 0x80236048: ori         $a0, $a0, 0x200
    ctx->r4 = ctx->r4 | 0X200;
    after_1:
    // 0x8023604C: bne         $v0, $zero, L_80236064
    if (ctx->r2 != 0) {
        // 0x80236050: sw          $v0, 0x20($s0)
        MEM_W(0X20, ctx->r16) = ctx->r2;
            goto L_80236064;
    }
    // 0x80236050: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
L_80236054:
    // 0x80236054: jal         0x8004F62C
    // 0x80236058: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F62C_2AA2C(rdram, ctx);
        goto after_2;
    // 0x80236058: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8023605C: j           L_802360F0
    // 0x80236060: nop

        goto L_802360F0;
    // 0x80236060: nop

L_80236064:
    // 0x80236064: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x80236068: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8023606C: sb          $zero, 0x10($s0)
    MEM_B(0X10, ctx->r16) = 0;
    // 0x80236070: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
    // 0x80236074: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    // 0x80236078: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x8023607C: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80236080: lbu         $v1, -0x656F($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X656F);
    // 0x80236084: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80236088: sb          $v1, 0x11($s0)
    MEM_B(0X11, ctx->r16) = ctx->r3;
    // 0x8023608C: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80236090: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80236094: lbu         $v1, -0x6535($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X6535);
    // 0x80236098: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x8023609C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x802360A0: sb          $v1, 0x12($s0)
    MEM_B(0X12, ctx->r16) = ctx->r3;
    // 0x802360A4: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x802360A8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802360AC: lbu         $v1, -0x64FB($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X64FB);
    // 0x802360B0: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x802360B4: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x802360B8: sb          $v1, 0x13($s0)
    MEM_B(0X13, ctx->r16) = ctx->r3;
    // 0x802360BC: lbu         $v1, 0x10($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X10);
    // 0x802360C0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802360C4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802360C8: lbu         $v0, -0x64C1($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X64C1);
    // 0x802360CC: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x802360D0: sb          $v0, 0x14($s0)
    MEM_B(0X14, ctx->r16) = ctx->r2;
    // 0x802360D4: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802360D8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802360DC: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x802360E0: lbu         $v1, -0x6487($at)
    ctx->r3 = MEM_BU(ctx->r1, -0X6487);
    // 0x802360E4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802360E8: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x802360EC: sb          $v1, 0x15($s0)
    MEM_B(0X15, ctx->r16) = ctx->r3;
L_802360F0:
    // 0x802360F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802360F4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802360F8: jr          $ra
    // 0x802360FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802360FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80233528_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233528: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8023352C: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80233530: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x80233534: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80233538: lbu         $s4, 0x4F($sp)
    ctx->r20 = MEM_BU(ctx->r29, 0X4F);
    // 0x8023353C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80233540: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80233544: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80233548: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x8023354C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80233550: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x80233554: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80233558: addu        $s5, $a3, $zero
    ctx->r21 = ADD32(ctx->r7, 0);
    // 0x8023355C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80233560: jal         0x8004F144
    // 0x80233564: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80233564: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    after_0:
    // 0x80233568: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8023356C: beq         $s1, $zero, L_802335F4
    if (ctx->r17 == 0) {
        // 0x80233570: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802335F4;
    }
    // 0x80233570: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80233574: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x80233578: sb          $zero, 0x2($s1)
    MEM_B(0X2, ctx->r17) = 0;
    // 0x8023357C: sb          $zero, 0x3($s1)
    MEM_B(0X3, ctx->r17) = 0;
    // 0x80233580: sb          $zero, 0xC($s1)
    MEM_B(0XC, ctx->r17) = 0;
    // 0x80233584: sb          $s2, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r18;
    // 0x80233588: sb          $s3, 0xF($s1)
    MEM_B(0XF, ctx->r17) = ctx->r19;
    // 0x8023358C: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x80233590: sh          $v0, 0x1C($s1)
    MEM_H(0X1C, ctx->r17) = ctx->r2;
    // 0x80233594: lhu         $v0, 0x2($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X2);
    // 0x80233598: sh          $v0, 0x1E($s1)
    MEM_H(0X1E, ctx->r17) = ctx->r2;
    // 0x8023359C: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x802335A0: sh          $s5, 0x26($s1)
    MEM_H(0X26, ctx->r17) = ctx->r21;
    // 0x802335A4: beq         $s4, $zero, L_802335B8
    if (ctx->r20 == 0) {
        // 0x802335A8: sh          $v0, 0x20($s1)
        MEM_H(0X20, ctx->r17) = ctx->r2;
            goto L_802335B8;
    }
    // 0x802335A8: sh          $v0, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r2;
    // 0x802335AC: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x802335B0: j           L_802335C0
    // 0x802335B4: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
        goto L_802335C0;
    // 0x802335B4: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
L_802335B8:
    // 0x802335B8: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x802335BC: andi        $v0, $v0, 0xDF
    ctx->r2 = ctx->r2 & 0XDF;
L_802335C0:
    // 0x802335C0: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
    // 0x802335C4: sw          $s6, 0x28($s1)
    MEM_W(0X28, ctx->r17) = ctx->r22;
    // 0x802335C8: sll         $v0, $s5, 16
    ctx->r2 = S32(ctx->r21 << 16);
    // 0x802335CC: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802335D0: blez        $v0, L_802335F4
    if (SIGNED(ctx->r2) <= 0) {
        // 0x802335D4: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_802335F4;
    }
    // 0x802335D4: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x802335D8: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
L_802335DC:
    // 0x802335DC: jal         0x80233398
    // 0x802335E0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80233398_ovl7(rdram, ctx);
        goto after_1;
    // 0x802335E0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x802335E4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x802335E8: slt         $v0, $s0, $s2
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x802335EC: bne         $v0, $zero, L_802335DC
    if (ctx->r2 != 0) {
        // 0x802335F0: nop
    
            goto L_802335DC;
    }
    // 0x802335F0: nop

L_802335F4:
    // 0x802335F4: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
    // 0x802335F8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x802335FC: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80233600: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80233604: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80233608: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8023360C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80233610: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80233614: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80233618: jr          $ra
    // 0x8023361C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8023361C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80233A00_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233A00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80233A04: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80233A08: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80233A0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80233A10: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80233A14: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80233A18: andi        $a0, $v1, 0xFF
    ctx->r4 = ctx->r3 & 0XFF;
    // 0x80233A1C: beq         $a0, $v0, L_80233A98
    if (ctx->r4 == ctx->r2) {
        // 0x80233A20: slti        $v0, $a0, 0x2
        ctx->r2 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
            goto L_80233A98;
    }
    // 0x80233A20: slti        $v0, $a0, 0x2
    ctx->r2 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
    // 0x80233A24: beq         $v0, $zero, L_80233B38
    if (ctx->r2 == 0) {
        // 0x80233A28: nop
    
            goto L_80233B38;
    }
    // 0x80233A28: nop

    // 0x80233A2C: bne         $a0, $zero, L_80233B38
    if (ctx->r4 != 0) {
        // 0x80233A30: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_80233B38;
    }
    // 0x80233A30: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80233A34: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x80233A38: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x80233A3C: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80233A40: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80233A44: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80233A48: lhu         $v1, -0x6B9A($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X6B9A);
    // 0x80233A4C: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x80233A50: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80233A54: sh          $v1, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r3;
    // 0x80233A58: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80233A5C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80233A60: lhu         $v1, -0x6BA0($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X6BA0);
    // 0x80233A64: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x80233A68: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80233A6C: sh          $v1, 0xCE($s0)
    MEM_H(0XCE, ctx->r16) = ctx->r3;
    // 0x80233A70: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80233A74: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80233A78: lhu         $v1, -0x6B9E($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X6B9E);
    // 0x80233A7C: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x80233A80: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80233A84: sh          $v1, 0xD0($s0)
    MEM_H(0XD0, ctx->r16) = ctx->r3;
    // 0x80233A88: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80233A8C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80233A90: lhu         $v0, -0x6B9C($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X6B9C);
    // 0x80233A94: sh          $v0, 0xD2($s0)
    MEM_H(0XD2, ctx->r16) = ctx->r2;
L_80233A98:
    // 0x80233A98: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x80233A9C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80233AA0: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80233AA4: lui         $a3, 0x8024
    ctx->r7 = S32(0X8024 << 16);
    // 0x80233AA8: addu        $a3, $a3, $v0
    ctx->r7 = ADD32(ctx->r7, ctx->r2);
    // 0x80233AAC: lh          $a3, -0x6B92($a3)
    ctx->r7 = MEM_H(ctx->r7, -0X6B92);
    // 0x80233AB0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80233AB4: jal         0x8004F820
    // 0x80233AB8: addiu       $a1, $s0, 0xCE
    ctx->r5 = ADD32(ctx->r16, 0XCE);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x80233AB8: addiu       $a1, $s0, 0xCE
    ctx->r5 = ADD32(ctx->r16, 0XCE);
    after_0:
    // 0x80233ABC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80233AC0: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80233AC4: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80233AC8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80233ACC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80233AD0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80233AD4: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80233AD8: jal         0x8004DA90
    // 0x80233ADC: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x80233ADC: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    after_1:
    // 0x80233AE0: lh          $v1, 0x14($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X14);
    // 0x80233AE4: lh          $v0, 0xCE($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XCE);
    // 0x80233AE8: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80233AEC: mult        $v1, $v1
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80233AF0: mflo        $v1
    ctx->r3 = lo;
    // 0x80233AF4: lh          $a0, 0x18($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X18);
    // 0x80233AF8: lh          $v0, 0xD2($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XD2);
    // 0x80233AFC: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x80233B00: mult        $a0, $a0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80233B04: mflo        $a0
    ctx->r4 = lo;
    // 0x80233B08: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x80233B0C: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80233B10: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80233B14: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80233B18: lw          $v0, -0x6B98($at)
    ctx->r2 = MEM_W(ctx->r1, -0X6B98);
    // 0x80233B1C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80233B20: sltu        $v1, $v1, $v0
    ctx->r3 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x80233B24: beq         $v1, $zero, L_80233B38
    if (ctx->r3 == 0) {
        // 0x80233B28: nop
    
            goto L_80233B38;
    }
    // 0x80233B28: nop

    // 0x80233B2C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80233B30: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80233B34: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80233B38:
    // 0x80233B38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80233B3C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80233B40: jr          $ra
    // 0x80233B44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80233B44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022C5A4_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C5A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022C5A8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022C5AC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C5B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022C5B4: lh          $a0, 0x64($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X64);
    // 0x8022C5B8: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x8022C5BC: jal         0x8004FA7C
    // 0x8022C5C0: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x8022C5C0: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_0:
    // 0x8022C5C4: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x8022C5C8: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x8022C5CC: bne         $v0, $zero, L_8022C5F8
    if (ctx->r2 != 0) {
        // 0x8022C5D0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022C5F8;
    }
    // 0x8022C5D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C5D4: lhu         $a0, 0x35C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X35C);
    // 0x8022C5D8: lhu         $v1, 0x366($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X366);
    // 0x8022C5DC: lhu         $a1, 0x35E($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X35E);
    // 0x8022C5E0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022C5E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C5E8: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8022C5EC: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x8022C5F0: sh          $v0, 0x35C($s0)
    MEM_H(0X35C, ctx->r16) = ctx->r2;
    // 0x8022C5F4: sh          $v1, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = ctx->r3;
L_8022C5F8:
    // 0x8022C5F8: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022C5FC: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x8022C600: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022C604: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8022C608: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022C60C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022C610: jr          $ra
    // 0x8022C614: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022C614: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022BC58_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BC58: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022BC5C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8022BC60: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022BC64: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8022BC68: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x8022BC6C: addiu       $a1, $a1, -0x61CC
    ctx->r5 = ADD32(ctx->r5, -0X61CC);
    // 0x8022BC70: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022BC74: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8022BC78: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8022BC7C: jal         0x8009A3B4
    // 0x8022BC80: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022BC80: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x8022BC84: lw          $v1, 0x35C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X35C);
    // 0x8022BC88: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x8022BC8C: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x8022BC90: and         $a0, $v1, $v0
    ctx->r4 = ctx->r3 & ctx->r2;
    // 0x8022BC94: beq         $a0, $zero, L_8022BE14
    if (ctx->r4 == 0) {
        // 0x8022BC98: addiu       $s2, $s1, 0x348
        ctx->r18 = ADD32(ctx->r17, 0X348);
            goto L_8022BE14;
    }
    // 0x8022BC98: addiu       $s2, $s1, 0x348
    ctx->r18 = ADD32(ctx->r17, 0X348);
    // 0x8022BC9C: lui         $v0, 0x3800
    ctx->r2 = S32(0X3800 << 16);
    // 0x8022BCA0: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x8022BCA4: beq         $v0, $zero, L_8022BE18
    if (ctx->r2 == 0) {
        // 0x8022BCA8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022BE18;
    }
    // 0x8022BCA8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022BCAC: lh          $v0, 0x6E($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X6E);
    // 0x8022BCB0: bgtz        $v0, L_8022BCE4
    if (SIGNED(ctx->r2) > 0) {
        // 0x8022BCB4: nop
    
            goto L_8022BCE4;
    }
    // 0x8022BCB4: nop

    // 0x8022BCB8: lhu         $v0, 0x348($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X348);
    // 0x8022BCBC: lbu         $v1, 0x2($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X2);
    // 0x8022BCC0: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x8022BCC4: lw          $a0, 0x298($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X298);
    // 0x8022BCC8: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x8022BCCC: ori         $v0, $v0, 0x8
    ctx->r2 = ctx->r2 | 0X8;
    // 0x8022BCD0: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8022BCD4: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8022BCD8: sh          $v0, 0x348($s1)
    MEM_H(0X348, ctx->r17) = ctx->r2;
    // 0x8022BCDC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8022BCE0: lbu         $a0, 0x9($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X9);
L_8022BCE4:
    // 0x8022BCE4: lhu         $v0, 0x348($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X348);
    // 0x8022BCE8: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x8022BCEC: beq         $v0, $zero, L_8022BE10
    if (ctx->r2 == 0) {
        // 0x8022BCF0: addiu       $v0, $zero, 0x7FFF
        ctx->r2 = ADD32(0, 0X7FFF);
            goto L_8022BE10;
    }
    // 0x8022BCF0: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x8022BCF4: lhu         $v0, 0x352($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X352);
    // 0x8022BCF8: lw          $v1, 0x35C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X35C);
    // 0x8022BCFC: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    // 0x8022BD00: lui         $v0, 0x2000
    ctx->r2 = S32(0X2000 << 16);
    // 0x8022BD04: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x8022BD08: bne         $v1, $zero, L_8022BD54
    if (ctx->r3 != 0) {
        // 0x8022BD0C: sh          $a0, 0x352($s1)
        MEM_H(0X352, ctx->r17) = ctx->r4;
            goto L_8022BD54;
    }
    // 0x8022BD0C: sh          $a0, 0x352($s1)
    MEM_H(0X352, ctx->r17) = ctx->r4;
    // 0x8022BD10: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x8022BD14: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x8022BD18: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x8022BD1C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022BD20: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022BD24: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8022BD28: lbu         $v1, 0x9($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X9);
    // 0x8022BD2C: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x8022BD30: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022BD34: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8022BD38: beq         $v0, $zero, L_8022BD54
    if (ctx->r2 == 0) {
        // 0x8022BD3C: nop
    
            goto L_8022BD54;
    }
    // 0x8022BD3C: nop

    // 0x8022BD40: lh          $s0, 0x16($s1)
    ctx->r16 = MEM_H(ctx->r17, 0X16);
    // 0x8022BD44: jal         0x8003E934
    // 0x8022BD48: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_1;
    // 0x8022BD48: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x8022BD4C: beq         $s0, $v0, L_8022BE04
    if (ctx->r16 == ctx->r2) {
        // 0x8022BD50: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_8022BE04;
    }
    // 0x8022BD50: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
L_8022BD54:
    // 0x8022BD54: lhu         $v0, 0x22($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X22);
    // 0x8022BD58: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022BD5C: beq         $v0, $zero, L_8022BDA4
    if (ctx->r2 == 0) {
        // 0x8022BD60: addiu       $a0, $s1, 0x14
        ctx->r4 = ADD32(ctx->r17, 0X14);
            goto L_8022BDA4;
    }
    // 0x8022BD60: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x8022BD64: jal         0x8004EC38
    // 0x8022BD68: addiu       $a1, $s2, 0x1C
    ctx->r5 = ADD32(ctx->r18, 0X1C);
    func_8004EC38_2A038(rdram, ctx);
        goto after_2;
    // 0x8022BD68: addiu       $a1, $s2, 0x1C
    ctx->r5 = ADD32(ctx->r18, 0X1C);
    after_2:
    // 0x8022BD6C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8022BD70: lh          $v0, 0x56($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X56);
    // 0x8022BD74: sll         $v1, $a0, 16
    ctx->r3 = S32(ctx->r4 << 16);
    // 0x8022BD78: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8022BD7C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022BD80: addiu       $v0, $v0, 0x400
    ctx->r2 = ADD32(ctx->r2, 0X400);
    // 0x8022BD84: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022BD88: slti        $v0, $v0, 0x800
    ctx->r2 = SIGNED(ctx->r2) < 0X800 ? 1 : 0;
    // 0x8022BD8C: beq         $v0, $zero, L_8022BD9C
    if (ctx->r2 == 0) {
        // 0x8022BD90: addu        $a1, $a0, $zero
        ctx->r5 = ADD32(ctx->r4, 0);
            goto L_8022BD9C;
    }
    // 0x8022BD90: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x8022BD94: j           L_8022BDDC
    // 0x8022BD98: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
        goto L_8022BDDC;
    // 0x8022BD98: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
L_8022BD9C:
    // 0x8022BD9C: j           L_8022BDEC
    // 0x8022BDA0: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
        goto L_8022BDEC;
    // 0x8022BDA0: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_8022BDA4:
    // 0x8022BDA4: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8022BDA8: jal         0x8004EC38
    // 0x8022BDAC: addiu       $a1, $s2, 0x1C
    ctx->r5 = ADD32(ctx->r18, 0X1C);
    func_8004EC38_2A038(rdram, ctx);
        goto after_3;
    // 0x8022BDAC: addiu       $a1, $s2, 0x1C
    ctx->r5 = ADD32(ctx->r18, 0X1C);
    after_3:
    // 0x8022BDB0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8022BDB4: lh          $v1, 0x56($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X56);
    // 0x8022BDB8: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x8022BDBC: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022BDC0: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022BDC4: addiu       $v0, $v0, 0x400
    ctx->r2 = ADD32(ctx->r2, 0X400);
    // 0x8022BDC8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022BDCC: slti        $v0, $v0, 0x800
    ctx->r2 = SIGNED(ctx->r2) < 0X800 ? 1 : 0;
    // 0x8022BDD0: beq         $v0, $zero, L_8022BDE8
    if (ctx->r2 == 0) {
        // 0x8022BDD4: addu        $a1, $a0, $zero
        ctx->r5 = ADD32(ctx->r4, 0);
            goto L_8022BDE8;
    }
    // 0x8022BDD4: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x8022BDD8: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_8022BDDC:
    // 0x8022BDDC: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x8022BDE0: j           L_8022BDFC
    // 0x8022BDE4: sh          $a1, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r5;
        goto L_8022BDFC;
    // 0x8022BDE4: sh          $a1, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r5;
L_8022BDE8:
    // 0x8022BDE8: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
L_8022BDEC:
    // 0x8022BDEC: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x8022BDF0: addiu       $v0, $a0, 0x800
    ctx->r2 = ADD32(ctx->r4, 0X800);
    // 0x8022BDF4: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022BDF8: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
L_8022BDFC:
    // 0x8022BDFC: j           L_8022BE08
    // 0x8022BE00: sh          $zero, 0xA($s2)
    MEM_H(0XA, ctx->r18) = 0;
        goto L_8022BE08;
    // 0x8022BE00: sh          $zero, 0xA($s2)
    MEM_H(0XA, ctx->r18) = 0;
L_8022BE04:
    // 0x8022BE04: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
L_8022BE08:
    // 0x8022BE08: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
    // 0x8022BE0C: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
L_8022BE10:
    // 0x8022BE10: sh          $v0, 0x15E($s1)
    MEM_H(0X15E, ctx->r17) = ctx->r2;
L_8022BE14:
    // 0x8022BE14: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022BE18:
    // 0x8022BE18: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8022BE1C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8022BE20: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022BE24: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022BE28: jr          $ra
    // 0x8022BE2C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022BE2C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80225E50_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225E50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225E54: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225E58: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225E5C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225E60: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225E64: bne         $v0, $zero, L_80225E7C
    if (ctx->r2 != 0) {
        // 0x80225E68: nop
    
            goto L_80225E7C;
    }
    // 0x80225E68: nop

    // 0x80225E6C: jal         0x802283FC
    // 0x80225E70: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    func_802283FC_ovl7(rdram, ctx);
        goto after_0;
    // 0x80225E70: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    after_0:
    // 0x80225E74: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225E78: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225E7C:
    // 0x80225E7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225E80: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225E84: jr          $ra
    // 0x80225E88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225E88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226358_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226358: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022635C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80226360: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x80226364: bne         $v0, $zero, L_8022639C
    if (ctx->r2 != 0) {
        // 0x80226368: nop
    
            goto L_8022639C;
    }
    // 0x80226368: nop

    // 0x8022636C: jal         0x8006033C
    // 0x80226370: addiu       $a0, $zero, 0x235
    ctx->r4 = ADD32(0, 0X235);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80226370: addiu       $a0, $zero, 0x235
    ctx->r4 = ADD32(0, 0X235);
    after_0:
    // 0x80226374: beq         $v0, $zero, L_8022639C
    if (ctx->r2 == 0) {
        // 0x80226378: nop
    
            goto L_8022639C;
    }
    // 0x80226378: nop

    // 0x8022637C: jal         0x8006036C
    // 0x80226380: addiu       $a0, $zero, 0x7E2
    ctx->r4 = ADD32(0, 0X7E2);
    func_8006036C_3B76C(rdram, ctx);
        goto after_1;
    // 0x80226380: addiu       $a0, $zero, 0x7E2
    ctx->r4 = ADD32(0, 0X7E2);
    after_1:
    // 0x80226384: jal         0x8006036C
    // 0x80226388: addiu       $a0, $zero, 0x7E3
    ctx->r4 = ADD32(0, 0X7E3);
    func_8006036C_3B76C(rdram, ctx);
        goto after_2;
    // 0x80226388: addiu       $a0, $zero, 0x7E3
    ctx->r4 = ADD32(0, 0X7E3);
    after_2:
    // 0x8022638C: jal         0x8006036C
    // 0x80226390: addiu       $a0, $zero, 0x7E4
    ctx->r4 = ADD32(0, 0X7E4);
    func_8006036C_3B76C(rdram, ctx);
        goto after_3;
    // 0x80226390: addiu       $a0, $zero, 0x7E4
    ctx->r4 = ADD32(0, 0X7E4);
    after_3:
    // 0x80226394: jal         0x8006036C
    // 0x80226398: addiu       $a0, $zero, 0x7E8
    ctx->r4 = ADD32(0, 0X7E8);
    func_8006036C_3B76C(rdram, ctx);
        goto after_4;
    // 0x80226398: addiu       $a0, $zero, 0x7E8
    ctx->r4 = ADD32(0, 0X7E8);
    after_4:
L_8022639C:
    // 0x8022639C: jal         0x8006036C
    // 0x802263A0: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    func_8006036C_3B76C(rdram, ctx);
        goto after_5;
    // 0x802263A0: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    after_5:
    // 0x802263A4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802263A8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x802263AC: jr          $ra
    // 0x802263B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802263B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80234650_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234650: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80234654: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80234658: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8023465C: addiu       $a0, $s1, 0x2C
    ctx->r4 = ADD32(ctx->r17, 0X2C);
    // 0x80234660: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x80234664: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80234668: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8023466C: jal         0x8009A3B4
    // 0x80234670: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80234670: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    after_0:
    // 0x80234674: addiu       $a0, $s1, 0x34
    ctx->r4 = ADD32(ctx->r17, 0X34);
    // 0x80234678: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    // 0x8023467C: jal         0x8009A3B4
    // 0x80234680: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80234680: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80234684: addiu       $a0, $s1, 0x5C
    ctx->r4 = ADD32(ctx->r17, 0X5C);
    // 0x80234688: addiu       $s0, $s1, 0x54
    ctx->r16 = ADD32(ctx->r17, 0X54);
    // 0x8023468C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80234690: jal         0x8009A3B4
    // 0x80234694: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80234694: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80234698: jal         0x800A3450
    // 0x8023469C: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x8023469C: nop

    after_3:
    // 0x802346A0: lbu         $v1, 0x8($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X8);
    // 0x802346A4: sh          $v0, 0xC2($s1)
    MEM_H(0XC2, ctx->r17) = ctx->r2;
    // 0x802346A8: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x802346AC: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802346B0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802346B4: lw          $v0, -0x6A20($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6A20);
    // 0x802346B8: jalr        $v0
    // 0x802346BC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x802346BC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_4:
    // 0x802346C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802346C4: addiu       $s0, $s1, 0x8C
    ctx->r16 = ADD32(ctx->r17, 0X8C);
    // 0x802346C8: jal         0x80031600
    // 0x802346CC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80031600_CA00(rdram, ctx);
        goto after_5;
    // 0x802346CC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_5:
    // 0x802346D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802346D4: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x802346D8: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x802346DC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x802346E0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x802346E4: jal         0x80031DA8
    // 0x802346E8: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_6;
    // 0x802346E8: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_6:
    // 0x802346EC: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x802346F0: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x802346F4: beq         $v0, $zero, L_8023470C
    if (ctx->r2 == 0) {
        // 0x802346F8: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8023470C;
    }
    // 0x802346F8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802346FC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80234700: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x80234704: jal         0x80047284
    // 0x80234708: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_7;
    // 0x80234708: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_7:
L_8023470C:
    // 0x8023470C: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x80234710: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80234714: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80234718: jr          $ra
    // 0x8023471C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8023471C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022FFA8_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FFA8: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x8022FFAC: beq         $a1, $zero, L_8022FFBC
    if (ctx->r5 == 0) {
        // 0x8022FFB0: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_8022FFBC;
    }
    // 0x8022FFB0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022FFB4: j           L_8022FFC0
    // 0x8022FFB8: sb          $zero, 0x107($a0)
    MEM_B(0X107, ctx->r4) = 0;
        goto L_8022FFC0;
    // 0x8022FFB8: sb          $zero, 0x107($a0)
    MEM_B(0X107, ctx->r4) = 0;
L_8022FFBC:
    // 0x8022FFBC: sb          $v0, 0x107($a0)
    MEM_B(0X107, ctx->r4) = ctx->r2;
L_8022FFC0:
    // 0x8022FFC0: jr          $ra
    // 0x8022FFC4: nop

    TRACE_RETURN()
    return;
    // 0x8022FFC4: nop

;}
RECOMP_FUNC void func_80235184_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235184: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80235188: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8023518C: jal         0x8004F4F8
    // 0x80235190: nop

    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_0;
    // 0x80235190: nop

    after_0:
    // 0x80235194: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80235198: jr          $ra
    // 0x8023519C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023519C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802317D0_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802317D0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802317D4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802317D8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802317DC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802317E0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802317E4: lbu         $a0, 0xA($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XA);
    // 0x802317E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802317EC: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x802317F0: beq         $v1, $v0, L_80231860
    if (ctx->r3 == ctx->r2) {
        // 0x802317F4: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_80231860;
    }
    // 0x802317F4: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x802317F8: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x802317FC: beql        $v0, $zero, L_80231814
    if (ctx->r2 == 0) {
        // 0x80231800: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80231814;
    }
    goto skip_0;
    // 0x80231800: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80231804: beq         $v1, $zero, L_8023182C
    if (ctx->r3 == 0) {
        // 0x80231808: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_8023182C;
    }
    // 0x80231808: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x8023180C: j           L_8023194C
    // 0x80231810: nop

        goto L_8023194C;
    // 0x80231810: nop

L_80231814:
    // 0x80231814: beq         $v1, $v0, L_80231910
    if (ctx->r3 == ctx->r2) {
        // 0x80231818: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80231910;
    }
    // 0x80231818: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023181C: beq         $v1, $v0, L_80231938
    if (ctx->r3 == ctx->r2) {
        // 0x80231820: nop
    
            goto L_80231938;
    }
    // 0x80231820: nop

    // 0x80231824: j           L_8023194C
    // 0x80231828: nop

        goto L_8023194C;
    // 0x80231828: nop

L_8023182C:
    // 0x8023182C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80231830: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80231834: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80231838: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x8023183C: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80231840: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80231844: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x80231848: addiu       $v0, $zero, -0xBBB
    ctx->r2 = ADD32(0, -0XBBB);
    // 0x8023184C: sh          $v0, 0x354($s0)
    MEM_H(0X354, ctx->r16) = ctx->r2;
    // 0x80231850: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80231854: sh          $v0, 0x356($s0)
    MEM_H(0X356, ctx->r16) = ctx->r2;
    // 0x80231858: addiu       $v0, $zero, 0x53B
    ctx->r2 = ADD32(0, 0X53B);
    // 0x8023185C: sh          $v0, 0x358($s0)
    MEM_H(0X358, ctx->r16) = ctx->r2;
L_80231860:
    // 0x80231860: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80231864: lh          $a3, 0x64($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X64);
    // 0x80231868: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8023186C: jal         0x8004F820
    // 0x80231870: addiu       $a1, $s1, 0xC
    ctx->r5 = ADD32(ctx->r17, 0XC);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x80231870: addiu       $a1, $s1, 0xC
    ctx->r5 = ADD32(ctx->r17, 0XC);
    after_0:
    // 0x80231874: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80231878: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8023187C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80231880: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80231884: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80231888: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023188C: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80231890: jal         0x8004DA90
    // 0x80231894: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x80231894: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    after_1:
    // 0x80231898: lb          $v1, 0xA6($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA6);
    // 0x8023189C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802318A0: bne         $v1, $v0, L_802318B4
    if (ctx->r3 != ctx->r2) {
        // 0x802318A4: addiu       $a0, $zero, 0x10C
        ctx->r4 = ADD32(0, 0X10C);
            goto L_802318B4;
    }
    // 0x802318A4: addiu       $a0, $zero, 0x10C
    ctx->r4 = ADD32(0, 0X10C);
    // 0x802318A8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802318AC: jal         0x8002A2F8
    // 0x802318B0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_2;
    // 0x802318B0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
L_802318B4:
    // 0x802318B4: lh          $v1, 0x14($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X14);
    // 0x802318B8: lh          $v0, 0xC($s1)
    ctx->r2 = MEM_H(ctx->r17, 0XC);
    // 0x802318BC: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x802318C0: mult        $v1, $v1
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802318C4: mflo        $v1
    ctx->r3 = lo;
    // 0x802318C8: lh          $a0, 0x10($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X10);
    // 0x802318CC: lh          $v0, 0x18($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X18);
    // 0x802318D0: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x802318D4: mult        $v0, $v0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802318D8: mflo        $v0
    ctx->r2 = lo;
    // 0x802318DC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802318E0: slti        $v1, $v1, 0x800
    ctx->r3 = SIGNED(ctx->r3) < 0X800 ? 1 : 0;
    // 0x802318E4: beq         $v1, $zero, L_8023194C
    if (ctx->r3 == 0) {
        // 0x802318E8: addiu       $a0, $zero, 0x606
        ctx->r4 = ADD32(0, 0X606);
            goto L_8023194C;
    }
    // 0x802318E8: addiu       $a0, $zero, 0x606
    ctx->r4 = ADD32(0, 0X606);
    // 0x802318EC: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802318F0: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x802318F4: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x802318F8: sh          $zero, 0x64($s0)
    MEM_H(0X64, ctx->r16) = 0;
    // 0x802318FC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80231900: jal         0x8006036C
    // 0x80231904: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    func_8006036C_3B76C(rdram, ctx);
        goto after_3;
    // 0x80231904: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    after_3:
    // 0x80231908: j           L_8023194C
    // 0x8023190C: nop

        goto L_8023194C;
    // 0x8023190C: nop

L_80231910:
    // 0x80231910: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80231914: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80231918: lui         $v1, 0x20
    ctx->r3 = S32(0X20 << 16);
    // 0x8023191C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80231920: beq         $v0, $zero, L_8023194C
    if (ctx->r2 == 0) {
        // 0x80231924: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_8023194C;
    }
    // 0x80231924: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x80231928: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8023192C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80231930: j           L_8023194C
    // 0x80231934: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_8023194C;
    // 0x80231934: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_80231938:
    // 0x80231938: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x8023193C: bgez        $v0, L_8023194C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80231940: addiu       $v0, $a0, -0x1
        ctx->r2 = ADD32(ctx->r4, -0X1);
            goto L_8023194C;
    }
    // 0x80231940: addiu       $v0, $a0, -0x1
    ctx->r2 = ADD32(ctx->r4, -0X1);
    // 0x80231944: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80231948: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
L_8023194C:
    // 0x8023194C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80231950: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80231954: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80231958: jr          $ra
    // 0x8023195C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023195C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022C218_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C218: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022C21C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022C220: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C224: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022C228: lhu         $v0, 0x350($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X350);
    // 0x8022C22C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022C230: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x8022C234: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C238: bne         $v0, $zero, L_8022C26C
    if (ctx->r2 != 0) {
        // 0x8022C23C: addiu       $v0, $zero, 0x49
        ctx->r2 = ADD32(0, 0X49);
            goto L_8022C26C;
    }
    // 0x8022C23C: addiu       $v0, $zero, 0x49
    ctx->r2 = ADD32(0, 0X49);
    // 0x8022C240: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x8022C244: bne         $v1, $v0, L_8022C250
    if (ctx->r3 != ctx->r2) {
        // 0x8022C248: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022C250;
    }
    // 0x8022C248: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C24C: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
L_8022C250:
    // 0x8022C250: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x8022C254: jal         0x8022E310
    // 0x8022C258: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_8022E310_ovl7(rdram, ctx);
        goto after_0;
    // 0x8022C258: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_0:
    // 0x8022C25C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022C260: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022C264: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022C268: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_8022C26C:
    // 0x8022C26C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022C270: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022C274: jr          $ra
    // 0x8022C278: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022C278: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
