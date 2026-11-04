#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80226BD0_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226BD0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226BD4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80226BD8: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x80226BDC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80226BE0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80226BE4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80226BE8: lw          $v0, -0x6BCC($at)
    ctx->r2 = MEM_W(ctx->r1, -0X6BCC);
    // 0x80226BEC: jalr        $v0
    // 0x80226BF0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80226BF0: nop

    after_0:
    // 0x80226BF4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80226BF8: jr          $ra
    // 0x80226BFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226BFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022BEC8_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BEC8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022BECC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022BED0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022BED4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022BED8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022BEDC: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022BEE0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022BEE4: beq         $v1, $v0, L_8022BF60
    if (ctx->r3 == ctx->r2) {
        // 0x8022BEE8: addiu       $s1, $s0, 0x328
        ctx->r17 = ADD32(ctx->r16, 0X328);
            goto L_8022BF60;
    }
    // 0x8022BEE8: addiu       $s1, $s0, 0x328
    ctx->r17 = ADD32(ctx->r16, 0X328);
    // 0x8022BEEC: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022BEF0: beql        $v0, $zero, L_8022BF08
    if (ctx->r2 == 0) {
        // 0x8022BEF4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022BF08;
    }
    goto skip_0;
    // 0x8022BEF4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022BEF8: beq         $v1, $zero, L_8022BF20
    if (ctx->r3 == 0) {
        // 0x8022BEFC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022BF20;
    }
    // 0x8022BEFC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022BF00: j           L_8022C0C8
    // 0x8022BF04: nop

        goto L_8022C0C8;
    // 0x8022BF04: nop

L_8022BF08:
    // 0x8022BF08: beq         $v1, $v0, L_8022BF70
    if (ctx->r3 == ctx->r2) {
        // 0x8022BF0C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022BF70;
    }
    // 0x8022BF0C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022BF10: beq         $v1, $v0, L_8022C078
    if (ctx->r3 == ctx->r2) {
        // 0x8022BF14: nop
    
            goto L_8022C078;
    }
    // 0x8022BF14: nop

    // 0x8022BF18: j           L_8022C0C8
    // 0x8022BF1C: nop

        goto L_8022C0C8;
    // 0x8022BF1C: nop

L_8022BF20:
    // 0x8022BF20: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022BF24: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8022BF28: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022BF2C: addiu       $v0, $zero, -0x10
    ctx->r2 = ADD32(0, -0X10);
    // 0x8022BF30: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022BF34: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022BF38: lbu         $v0, -0x64EC($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X64EC);
    // 0x8022BF3C: lhu         $a0, 0x328($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X328);
    // 0x8022BF40: lh          $v1, 0x6E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X6E);
    // 0x8022BF44: sh          $zero, 0x330($s0)
    MEM_H(0X330, ctx->r16) = 0;
    // 0x8022BF48: sh          $v0, 0x32C($s0)
    MEM_H(0X32C, ctx->r16) = ctx->r2;
    // 0x8022BF4C: andi        $v0, $a0, 0xFFF7
    ctx->r2 = ctx->r4 & 0XFFF7;
    // 0x8022BF50: bgtz        $v1, L_8022BF60
    if (SIGNED(ctx->r3) > 0) {
        // 0x8022BF54: sh          $v0, 0x328($s0)
        MEM_H(0X328, ctx->r16) = ctx->r2;
            goto L_8022BF60;
    }
    // 0x8022BF54: sh          $v0, 0x328($s0)
    MEM_H(0X328, ctx->r16) = ctx->r2;
    // 0x8022BF58: andi        $v0, $a0, 0xFFF3
    ctx->r2 = ctx->r4 & 0XFFF3;
    // 0x8022BF5C: sh          $v0, 0x328($s0)
    MEM_H(0X328, ctx->r16) = ctx->r2;
L_8022BF60:
    // 0x8022BF60: lh          $v0, 0x4($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X4);
    // 0x8022BF64: bgez        $v0, L_8022BF70
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022BF68: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022BF70;
    }
    // 0x8022BF68: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022BF6C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022BF70:
    // 0x8022BF70: lhu         $v1, 0x4($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X4);
    // 0x8022BF74: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022BF78: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8022BF7C: sh          $v1, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r3;
    // 0x8022BF80: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8022BF84: lhu         $a1, 0x44($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X44);
    // 0x8022BF88: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022BF8C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022BF90: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022BF94: lbu         $v0, -0x64EB($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X64EB);
    // 0x8022BF98: sll         $a1, $a1, 20
    ctx->r5 = S32(ctx->r5 << 20);
    // 0x8022BF9C: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8022BFA0: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022BFA4: sll         $a2, $v0, 23
    ctx->r6 = S32(ctx->r2 << 23);
    // 0x8022BFA8: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8022BFAC: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022BFB0: jal         0x8004DA90
    // 0x8022BFB4: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x8022BFB4: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022BFB8: jal         0x80040F30
    // 0x8022BFBC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_1;
    // 0x8022BFBC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022BFC0: beq         $v0, $zero, L_8022C0C8
    if (ctx->r2 == 0) {
        // 0x8022BFC4: sw          $v0, 0x48($s1)
        MEM_W(0X48, ctx->r17) = ctx->r2;
            goto L_8022C0C8;
    }
    // 0x8022BFC4: sw          $v0, 0x48($s1)
    MEM_W(0X48, ctx->r17) = ctx->r2;
    // 0x8022BFC8: andi        $v0, $v0, 0xF00
    ctx->r2 = ctx->r2 & 0XF00;
    // 0x8022BFCC: bnel        $v0, $zero, L_8022BFD4
    if (ctx->r2 != 0) {
        // 0x8022BFD0: sh          $zero, 0x44($s0)
        MEM_H(0X44, ctx->r16) = 0;
            goto L_8022BFD4;
    }
    goto skip_1;
    // 0x8022BFD0: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    skip_1:
L_8022BFD4:
    // 0x8022BFD4: lw          $v0, 0x48($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X48);
    // 0x8022BFD8: andi        $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 & 0X1000;
    // 0x8022BFDC: beq         $v0, $zero, L_8022C0C8
    if (ctx->r2 == 0) {
        // 0x8022BFE0: addiu       $a0, $zero, 0xDE
        ctx->r4 = ADD32(0, 0XDE);
            goto L_8022C0C8;
    }
    // 0x8022BFE0: addiu       $a0, $zero, 0xDE
    ctx->r4 = ADD32(0, 0XDE);
    // 0x8022BFE4: jal         0x8002A33C
    // 0x8022BFE8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x8022BFE8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_2:
    // 0x8022BFEC: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8022BFF0: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x8022BFF4: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x8022BFF8: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022BFFC: sltiu       $v0, $v0, 0xA
    ctx->r2 = ctx->r2 < 0XA ? 1 : 0;
    // 0x8022C000: beq         $v0, $zero, L_8022C044
    if (ctx->r2 == 0) {
        // 0x8022C004: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022C044;
    }
    // 0x8022C004: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C008: lbu         $v1, 0xAC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022C00C: lbu         $a0, 0xB($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XB);
    // 0x8022C010: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022C014: addiu       $v0, $zero, -0x10
    ctx->r2 = ADD32(0, -0X10);
    // 0x8022C018: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022C01C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022C020: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x8022C024: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022C028: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8022C02C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8022C030: lbu         $v1, -0x64EC($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X64EC);
    // 0x8022C034: ori         $v0, $v0, 0x8
    ctx->r2 = ctx->r2 | 0X8;
    // 0x8022C038: sh          $v1, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r3;
    // 0x8022C03C: j           L_8022C0C8
    // 0x8022C040: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
        goto L_8022C0C8;
    // 0x8022C040: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8022C044:
    // 0x8022C044: lh          $v0, 0x6E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X6E);
    // 0x8022C048: bgtz        $v0, L_8022C060
    if (SIGNED(ctx->r2) > 0) {
        // 0x8022C04C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022C060;
    }
    // 0x8022C04C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022C050: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022C054: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022C058: j           L_8022C0C8
    // 0x8022C05C: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
        goto L_8022C0C8;
    // 0x8022C05C: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8022C060:
    // 0x8022C060: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022C064: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x8022C068: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022C06C: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    // 0x8022C070: j           L_8022C0C8
    // 0x8022C074: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
        goto L_8022C0C8;
    // 0x8022C074: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_8022C078:
    // 0x8022C078: lhu         $v0, 0x32C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X32C);
    // 0x8022C07C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022C080: sh          $v0, 0x32C($s0)
    MEM_H(0X32C, ctx->r16) = ctx->r2;
    // 0x8022C084: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C088: bgez        $v0, L_8022C0A0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022C08C: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022C0A0;
    }
    // 0x8022C08C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022C090: lhu         $v0, 0x328($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X328);
    // 0x8022C094: ori         $v0, $v0, 0x9
    ctx->r2 = ctx->r2 | 0X9;
    // 0x8022C098: j           L_8022C0C8
    // 0x8022C09C: sh          $v0, 0x328($s0)
    MEM_H(0X328, ctx->r16) = ctx->r2;
        goto L_8022C0C8;
    // 0x8022C09C: sh          $v0, 0x328($s0)
    MEM_H(0X328, ctx->r16) = ctx->r2;
L_8022C0A0:
    // 0x8022C0A0: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022C0A4: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022C0A8: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022C0AC: jal         0x8004F820
    // 0x8022C0B0: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x8022C0B0: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    after_3:
    // 0x8022C0B4: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022C0B8: sh          $v0, 0x36C($s0)
    MEM_H(0X36C, ctx->r16) = ctx->r2;
    // 0x8022C0BC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022C0C0: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022C0C4: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
L_8022C0C8:
    // 0x8022C0C8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022C0CC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022C0D0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022C0D4: jr          $ra
    // 0x8022C0D8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022C0D8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80233BD0_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233BD0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80233BD4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80233BD8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80233BDC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80233BE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80233BE4: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80233BE8: addiu       $a1, $s0, 0x4E4
    ctx->r5 = ADD32(ctx->r16, 0X4E4);
    // 0x80233BEC: jal         0x8004F820
    // 0x80233BF0: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x80233BF0: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    after_0:
    // 0x80233BF4: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80233BF8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80233BFC: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80233C00: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x80233C04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80233C08: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80233C0C: jr          $ra
    // 0x80233C10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80233C10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022B220_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B220: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B224: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022B228: jal         0x8004F418
    // 0x8022B22C: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x8022B22C: nop

    after_0:
    // 0x8022B230: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022B234: jr          $ra
    // 0x8022B238: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B238: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802336B4_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802336B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802336B8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802336BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802336C0: jal         0x80233B5C
    // 0x802336C4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_80233B5C_ovl22(rdram, ctx);
        goto after_0;
    // 0x802336C4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x802336C8: bne         $v0, $zero, L_80233738
    if (ctx->r2 != 0) {
        // 0x802336CC: nop
    
            goto L_80233738;
    }
    // 0x802336CC: nop

    // 0x802336D0: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x802336D4: lbu         $v1, 0xA4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA4);
    // 0x802336D8: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x802336DC: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x802336E0: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x802336E4: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x802336E8: bne         $v1, $v0, L_80233720
    if (ctx->r3 != ctx->r2) {
        // 0x802336EC: addiu       $a0, $zero, 0x199
        ctx->r4 = ADD32(0, 0X199);
            goto L_80233720;
    }
    // 0x802336EC: addiu       $a0, $zero, 0x199
    ctx->r4 = ADD32(0, 0X199);
    // 0x802336F0: jal         0x8002A33C
    // 0x802336F4: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x802336F4: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_1:
    // 0x802336F8: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x802336FC: lui         $v1, 0x8019
    ctx->r3 = S32(0X8019 << 16);
    // 0x80233700: lw          $v1, 0x3C60($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3C60);
    // 0x80233704: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80233708: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023370C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80233710: lbu         $v0, 0xB($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XB);
    // 0x80233714: lui         $v1, 0x100
    ctx->r3 = S32(0X100 << 16);
    // 0x80233718: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8023371C: sw          $v0, 0x560($s0)
    MEM_W(0X560, ctx->r16) = ctx->r2;
L_80233720:
    // 0x80233720: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x80233724: beq         $v0, $zero, L_80233738
    if (ctx->r2 == 0) {
        // 0x80233728: nop
    
            goto L_80233738;
    }
    // 0x80233728: nop

    // 0x8023372C: sw          $zero, 0x560($s0)
    MEM_W(0X560, ctx->r16) = 0;
    // 0x80233730: jal         0x80233AB0
    // 0x80233734: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80233AB0_ovl22(rdram, ctx);
        goto after_2;
    // 0x80233734: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
L_80233738:
    // 0x80233738: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023373C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80233740: jr          $ra
    // 0x80233744: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80233744: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802338B4_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802338B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802338B8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802338BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802338C0: jal         0x80233BD0
    // 0x802338C4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_80233BD0_ovl22(rdram, ctx);
        goto after_0;
    // 0x802338C4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x802338C8: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x802338CC: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x802338D0: lh          $a3, 0x48($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X48);
    // 0x802338D4: jal         0x8004DA90
    // 0x802338D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x802338D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x802338DC: lhu         $v0, 0x46($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X46);
    // 0x802338E0: lhu         $v1, 0x4E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X4E);
    // 0x802338E4: lb          $a0, 0xA7($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XA7);
    // 0x802338E8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802338EC: beq         $a0, $zero, L_80233908
    if (ctx->r4 == 0) {
        // 0x802338F0: sh          $v0, 0x46($s0)
        MEM_H(0X46, ctx->r16) = ctx->r2;
            goto L_80233908;
    }
    // 0x802338F0: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x802338F4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802338F8: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x802338FC: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x80233900: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80233904: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80233908:
    // 0x80233908: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023390C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80233910: jr          $ra
    // 0x80233914: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80233914: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80229E70_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229E70: addu        $t4, $a0, $zero
    ctx->r12 = ADD32(ctx->r4, 0);
    // 0x80229E74: lhu         $v0, 0x30($t4)
    ctx->r2 = MEM_HU(ctx->r12, 0X30);
    // 0x80229E78: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80229E7C: sh          $v0, 0x30($t4)
    MEM_H(0X30, ctx->r12) = ctx->r2;
    // 0x80229E80: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229E84: bne         $v0, $zero, L_80229E98
    if (ctx->r2 != 0) {
        // 0x80229E88: nop
    
            goto L_80229E98;
    }
    // 0x80229E88: nop

    // 0x80229E8C: lbu         $v0, 0x8($t4)
    ctx->r2 = MEM_BU(ctx->r12, 0X8);
    // 0x80229E90: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80229E94: sb          $v0, 0x8($t4)
    MEM_B(0X8, ctx->r12) = ctx->r2;
L_80229E98:
    // 0x80229E98: lh          $v1, 0x30($t4)
    ctx->r3 = MEM_H(ctx->r12, 0X30);
    // 0x80229E9C: lui         $v0, 0x2E00
    ctx->r2 = S32(0X2E00 << 16);
    // 0x80229EA0: lhu         $a1, 0x1C($t4)
    ctx->r5 = MEM_HU(ctx->r12, 0X1C);
    // 0x80229EA4: lhu         $t0, 0x28($t4)
    ctx->r8 = MEM_HU(ctx->r12, 0X28);
    // 0x80229EA8: lhu         $t1, 0x2E($t4)
    ctx->r9 = MEM_HU(ctx->r12, 0X2E);
    // 0x80229EAC: lhu         $a2, 0x1E($t4)
    ctx->r6 = MEM_HU(ctx->r12, 0X1E);
    // 0x80229EB0: lhu         $a3, 0x20($t4)
    ctx->r7 = MEM_HU(ctx->r12, 0X20);
    // 0x80229EB4: lhu         $t2, 0x2C($t4)
    ctx->r10 = MEM_HU(ctx->r12, 0X2C);
    // 0x80229EB8: sll         $t3, $v1, 3
    ctx->r11 = S32(ctx->r3 << 3);
    // 0x80229EBC: sll         $a0, $v1, 19
    ctx->r4 = S32(ctx->r3 << 19);
    // 0x80229EC0: sll         $v1, $v1, 11
    ctx->r3 = S32(ctx->r3 << 11);
    // 0x80229EC4: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80229EC8: lhu         $v0, 0x2A($t4)
    ctx->r2 = MEM_HU(ctx->r12, 0X2A);
    // 0x80229ECC: or          $a0, $a0, $v1
    ctx->r4 = ctx->r4 | ctx->r3;
    // 0x80229ED0: or          $a0, $a0, $t3
    ctx->r4 = ctx->r4 | ctx->r11;
    // 0x80229ED4: addu        $a1, $a1, $t0
    ctx->r5 = ADD32(ctx->r5, ctx->r8);
    // 0x80229ED8: addu        $a3, $a3, $t2
    ctx->r7 = ADD32(ctx->r7, ctx->r10);
    // 0x80229EDC: sw          $a0, 0x18($t4)
    MEM_W(0X18, ctx->r12) = ctx->r4;
    // 0x80229EE0: sh          $a1, 0x1C($t4)
    MEM_H(0X1C, ctx->r12) = ctx->r5;
    // 0x80229EE4: sh          $a3, 0x20($t4)
    MEM_H(0X20, ctx->r12) = ctx->r7;
    // 0x80229EE8: addu        $v0, $v0, $t1
    ctx->r2 = ADD32(ctx->r2, ctx->r9);
    // 0x80229EEC: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x80229EF0: sh          $v0, 0x2A($t4)
    MEM_H(0X2A, ctx->r12) = ctx->r2;
    // 0x80229EF4: jr          $ra
    // 0x80229EF8: sh          $a2, 0x1E($t4)
    MEM_H(0X1E, ctx->r12) = ctx->r6;
    TRACE_RETURN()
    return;
    // 0x80229EF8: sh          $a2, 0x1E($t4)
    MEM_H(0X1E, ctx->r12) = ctx->r6;
;}
RECOMP_FUNC void func_8022D8A0_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D8A0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022D8A4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D8A8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022D8AC: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8022D8B0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022D8B4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022D8B8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022D8BC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022D8C0: jal         0x8009A3B4
    // 0x8022D8C4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022D8C4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_0:
    // 0x8022D8C8: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8022D8CC: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022D8D0: jal         0x8009A3B4
    // 0x8022D8D4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022D8D4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022D8D8: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8022D8DC: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8022D8E0: jal         0x8009A3B4
    // 0x8022D8E4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022D8E4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022D8E8: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022D8EC: jal         0x800A3450
    // 0x8022D8F0: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x8022D8F0: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    after_3:
    // 0x8022D8F4: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8022D8F8: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x8022D8FC: sh          $v0, 0x1DA($s0)
    MEM_H(0X1DA, ctx->r16) = ctx->r2;
    // 0x8022D900: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022D904: bne         $v1, $v0, L_8022D924
    if (ctx->r3 != ctx->r2) {
        // 0x8022D908: addiu       $s1, $s0, 0x64
        ctx->r17 = ADD32(ctx->r16, 0X64);
            goto L_8022D924;
    }
    // 0x8022D908: addiu       $s1, $s0, 0x64
    ctx->r17 = ADD32(ctx->r16, 0X64);
    // 0x8022D90C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022D910: beq         $v0, $zero, L_8022D92C
    if (ctx->r2 == 0) {
        // 0x8022D914: sll         $v0, $v0, 2
        ctx->r2 = S32(ctx->r2 << 2);
            goto L_8022D92C;
    }
    // 0x8022D914: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022D918: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022D91C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022D920: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
L_8022D924:
    // 0x8022D924: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022D928: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
L_8022D92C:
    // 0x8022D92C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022D930: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022D934: lw          $v0, -0x6464($at)
    ctx->r2 = MEM_W(ctx->r1, -0X6464);
    // 0x8022D938: jalr        $v0
    // 0x8022D93C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x8022D93C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8022D940: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8022D944: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022D948: bnel        $v1, $v0, L_8022DA00
    if (ctx->r3 != ctx->r2) {
        // 0x8022D94C: sw          $zero, 0x8($s2)
        MEM_W(0X8, ctx->r18) = 0;
            goto L_8022DA00;
    }
    goto skip_0;
    // 0x8022D94C: sw          $zero, 0x8($s2)
    MEM_W(0X8, ctx->r18) = 0;
    skip_0:
    // 0x8022D950: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022D954: beq         $v0, $zero, L_8022D9D8
    if (ctx->r2 == 0) {
        // 0x8022D958: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022D9D8;
    }
    // 0x8022D958: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022D95C: lb          $v0, 0x3($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X3);
    // 0x8022D960: beq         $v0, $zero, L_8022D98C
    if (ctx->r2 == 0) {
        // 0x8022D964: nop
    
            goto L_8022D98C;
    }
    // 0x8022D964: nop

    // 0x8022D968: lb          $v0, 0x0($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X0);
    // 0x8022D96C: bne         $v0, $zero, L_8022D980
    if (ctx->r2 != 0) {
        // 0x8022D970: addiu       $a0, $zero, 0x190
        ctx->r4 = ADD32(0, 0X190);
            goto L_8022D980;
    }
    // 0x8022D970: addiu       $a0, $zero, 0x190
    ctx->r4 = ADD32(0, 0X190);
    // 0x8022D974: jal         0x8002A33C
    // 0x8022D978: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_5;
    // 0x8022D978: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_5:
    // 0x8022D97C: sb          $zero, 0x3($s1)
    MEM_B(0X3, ctx->r17) = 0;
L_8022D980:
    // 0x8022D980: lb          $v0, 0x3($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X3);
    // 0x8022D984: bne         $v0, $zero, L_8022D9A8
    if (ctx->r2 != 0) {
        // 0x8022D988: nop
    
            goto L_8022D9A8;
    }
    // 0x8022D988: nop

L_8022D98C:
    // 0x8022D98C: lb          $v0, 0x0($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X0);
    // 0x8022D990: blez        $v0, L_8022D9A8
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8022D994: addiu       $a0, $zero, 0x191
        ctx->r4 = ADD32(0, 0X191);
            goto L_8022D9A8;
    }
    // 0x8022D994: addiu       $a0, $zero, 0x191
    ctx->r4 = ADD32(0, 0X191);
    // 0x8022D998: jal         0x8002A33C
    // 0x8022D99C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_6;
    // 0x8022D99C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_6:
    // 0x8022D9A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022D9A4: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
L_8022D9A8:
    // 0x8022D9A8: lh          $v0, 0x15E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X15E);
    // 0x8022D9AC: andi        $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 & 0X8000;
    // 0x8022D9B0: beq         $v0, $zero, L_8022D9D0
    if (ctx->r2 == 0) {
        // 0x8022D9B4: nop
    
            goto L_8022D9D0;
    }
    // 0x8022D9B4: nop

    // 0x8022D9B8: lb          $v0, 0x2($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X2);
    // 0x8022D9BC: bne         $v0, $zero, L_8022D9D0
    if (ctx->r2 != 0) {
        // 0x8022D9C0: nop
    
            goto L_8022D9D0;
    }
    // 0x8022D9C0: nop

    // 0x8022D9C4: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022D9C8: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x8022D9CC: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
L_8022D9D0:
    // 0x8022D9D0: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8022D9D4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8022D9D8:
    // 0x8022D9D8: bnel        $v1, $v0, L_8022DA00
    if (ctx->r3 != ctx->r2) {
        // 0x8022D9DC: sw          $zero, 0x8($s2)
        MEM_W(0X8, ctx->r18) = 0;
            goto L_8022DA00;
    }
    goto skip_1;
    // 0x8022D9DC: sw          $zero, 0x8($s2)
    MEM_W(0X8, ctx->r18) = 0;
    skip_1:
    // 0x8022D9E0: lw          $v0, 0x8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X8);
    // 0x8022D9E4: lui         $v1, 0xFF
    ctx->r3 = S32(0XFF << 16);
    // 0x8022D9E8: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x8022D9EC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022D9F0: beq         $v0, $zero, L_8022D9FC
    if (ctx->r2 == 0) {
        // 0x8022D9F4: addiu       $v0, $zero, 0x7FFF
        ctx->r2 = ADD32(0, 0X7FFF);
            goto L_8022D9FC;
    }
    // 0x8022D9F4: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x8022D9F8: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
L_8022D9FC:
    // 0x8022D9FC: sw          $zero, 0x8($s2)
    MEM_W(0X8, ctx->r18) = 0;
L_8022DA00:
    // 0x8022DA00: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022DA04: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022DA08: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022DA0C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022DA10: jr          $ra
    // 0x8022DA14: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022DA14: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80233B5C_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233B5C: lh          $v0, 0x56E($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X56E);
    // 0x80233B60: bne         $v0, $zero, L_80233B70
    if (ctx->r2 != 0) {
        // 0x80233B64: addiu       $a2, $a0, 0x4E0
        ctx->r6 = ADD32(ctx->r4, 0X4E0);
            goto L_80233B70;
    }
    // 0x80233B64: addiu       $a2, $a0, 0x4E0
    ctx->r6 = ADD32(ctx->r4, 0X4E0);
    // 0x80233B68: j           L_80233BC8
    // 0x80233B6C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_80233BC8;
    // 0x80233B6C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80233B70:
    // 0x80233B70: sh          $zero, 0xB2($a0)
    MEM_H(0XB2, ctx->r4) = 0;
    // 0x80233B74: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80233B78: addu        $v1, $a2, $zero
    ctx->r3 = ADD32(ctx->r6, 0);
L_80233B7C:
    // 0x80233B7C: sw          $zero, 0x6C($v1)
    MEM_W(0X6C, ctx->r3) = 0;
    // 0x80233B80: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80233B84: sltiu       $v0, $a1, 0x6
    ctx->r2 = ctx->r5 < 0X6 ? 1 : 0;
    // 0x80233B88: bne         $v0, $zero, L_80233B7C
    if (ctx->r2 != 0) {
        // 0x80233B8C: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_80233B7C;
    }
    // 0x80233B8C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80233B90: lh          $v1, 0x8E($a2)
    ctx->r3 = MEM_H(ctx->r6, 0X8E);
    // 0x80233B94: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80233B98: blez        $v1, L_80233BB0
    if (SIGNED(ctx->r3) <= 0) {
        // 0x80233B9C: sh          $v0, 0x90($a2)
        MEM_H(0X90, ctx->r6) = ctx->r2;
            goto L_80233BB0;
    }
    // 0x80233B9C: sh          $v0, 0x90($a2)
    MEM_H(0X90, ctx->r6) = ctx->r2;
    // 0x80233BA0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80233BA4: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x80233BA8: j           L_80233BBC
    // 0x80233BAC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_80233BBC;
    // 0x80233BAC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_80233BB0:
    // 0x80233BB0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80233BB4: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x80233BB8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_80233BBC:
    // 0x80233BBC: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
    // 0x80233BC0: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    // 0x80233BC4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80233BC8:
    // 0x80233BC8: jr          $ra
    // 0x80233BCC: nop

    TRACE_RETURN()
    return;
    // 0x80233BCC: nop

;}
RECOMP_FUNC void func_80232998_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232998: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8023299C: sll         $a2, $a2, 2
    ctx->r6 = S32(ctx->r6 << 2);
    // 0x802329A0: sh          $zero, 0x4($a1)
    MEM_H(0X4, ctx->r5) = 0;
    // 0x802329A4: sh          $zero, 0x0($a1)
    MEM_H(0X0, ctx->r5) = 0;
    // 0x802329A8: sh          $zero, 0xA($a1)
    MEM_H(0XA, ctx->r5) = 0;
    // 0x802329AC: sh          $zero, 0x6($a1)
    MEM_H(0X6, ctx->r5) = 0;
    // 0x802329B0: sh          $v0, 0x8($a1)
    MEM_H(0X8, ctx->r5) = ctx->r2;
    // 0x802329B4: sh          $v0, 0x2($a1)
    MEM_H(0X2, ctx->r5) = ctx->r2;
    // 0x802329B8: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802329BC: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x802329C0: lw          $v0, -0x6234($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6234);
    // 0x802329C4: sw          $v0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r2;
    // 0x802329C8: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802329CC: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x802329D0: lw          $v0, -0x6210($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6210);
    // 0x802329D4: jr          $ra
    // 0x802329D8: sw          $v0, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x802329D8: sw          $v0, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r2;
;}
RECOMP_FUNC void func_8022C920_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C920: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022C924: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022C928: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C92C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022C930: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022C934: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022C938: lw          $v1, 0x33C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X33C);
    // 0x8022C93C: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x8022C940: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x8022C944: and         $a0, $v1, $v0
    ctx->r4 = ctx->r3 & ctx->r2;
    // 0x8022C948: beq         $a0, $zero, L_8022CBA4
    if (ctx->r4 == 0) {
        // 0x8022C94C: addiu       $s2, $s0, 0x328
        ctx->r18 = ADD32(ctx->r16, 0X328);
            goto L_8022CBA4;
    }
    // 0x8022C94C: addiu       $s2, $s0, 0x328
    ctx->r18 = ADD32(ctx->r16, 0X328);
    // 0x8022C950: lui         $v0, 0x3800
    ctx->r2 = S32(0X3800 << 16);
    // 0x8022C954: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x8022C958: beql        $v0, $zero, L_8022CB9C
    if (ctx->r2 == 0) {
        // 0x8022C95C: addiu       $a0, $zero, 0xA3
        ctx->r4 = ADD32(0, 0XA3);
            goto L_8022CB9C;
    }
    goto skip_0;
    // 0x8022C95C: addiu       $a0, $zero, 0xA3
    ctx->r4 = ADD32(0, 0XA3);
    skip_0:
    // 0x8022C960: lhu         $v0, 0x6E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6E);
    // 0x8022C964: lhu         $v1, 0x6E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X6E);
    // 0x8022C968: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8022C96C: sh          $v0, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r2;
    // 0x8022C970: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C974: bgtz        $v0, L_8022C9B4
    if (SIGNED(ctx->r2) > 0) {
        // 0x8022C978: sh          $v1, 0xB2($s0)
        MEM_H(0XB2, ctx->r16) = ctx->r3;
            goto L_8022C9B4;
    }
    // 0x8022C978: sh          $v1, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r3;
    // 0x8022C97C: lhu         $v0, 0x328($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X328);
    // 0x8022C980: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x8022C984: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x8022C988: lw          $a0, 0x298($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X298);
    // 0x8022C98C: andi        $v0, $v0, 0xFFFD
    ctx->r2 = ctx->r2 & 0XFFFD;
    // 0x8022C990: ori         $v0, $v0, 0x48
    ctx->r2 = ctx->r2 | 0X48;
    // 0x8022C994: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8022C998: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8022C99C: sh          $v0, 0x328($s0)
    MEM_H(0X328, ctx->r16) = ctx->r2;
    // 0x8022C9A0: lh          $v0, 0x32E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X32E);
    // 0x8022C9A4: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x8022C9A8: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8022C9AC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022C9B0: lbu         $a0, 0x9($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X9);
L_8022C9B4:
    // 0x8022C9B4: lhu         $v0, 0x328($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X328);
    // 0x8022C9B8: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x8022C9BC: beq         $v0, $zero, L_8022CB20
    if (ctx->r2 == 0) {
        // 0x8022C9C0: lui         $v1, 0x2000
        ctx->r3 = S32(0X2000 << 16);
            goto L_8022CB20;
    }
    // 0x8022C9C0: lui         $v1, 0x2000
    ctx->r3 = S32(0X2000 << 16);
    // 0x8022C9C4: lhu         $v0, 0x332($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X332);
    // 0x8022C9C8: lw          $v1, 0x33C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X33C);
    // 0x8022C9CC: addu        $a1, $v0, $a0
    ctx->r5 = ADD32(ctx->r2, ctx->r4);
    // 0x8022C9D0: lui         $v0, 0x2000
    ctx->r2 = S32(0X2000 << 16);
    // 0x8022C9D4: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x8022C9D8: bne         $v1, $zero, L_8022CA40
    if (ctx->r3 != 0) {
        // 0x8022C9DC: sh          $a1, 0x332($s0)
        MEM_H(0X332, ctx->r16) = ctx->r5;
            goto L_8022CA40;
    }
    // 0x8022C9DC: sh          $a1, 0x332($s0)
    MEM_H(0X332, ctx->r16) = ctx->r5;
    // 0x8022C9E0: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x8022C9E4: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x8022C9E8: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x8022C9EC: lh          $a0, 0x32E($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X32E);
    // 0x8022C9F0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022C9F4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022C9F8: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x8022C9FC: sll         $v0, $a0, 4
    ctx->r2 = S32(ctx->r4 << 4);
    // 0x8022CA00: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022CA04: lbu         $v1, 0x9($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X9);
    // 0x8022CA08: sll         $v0, $a1, 16
    ctx->r2 = S32(ctx->r5 << 16);
    // 0x8022CA0C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022CA10: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8022CA14: beq         $v0, $zero, L_8022CA40
    if (ctx->r2 == 0) {
        // 0x8022CA18: nop
    
            goto L_8022CA40;
    }
    // 0x8022CA18: nop

    // 0x8022CA1C: bnel        $a0, $zero, L_8022CB7C
    if (ctx->r4 != 0) {
        // 0x8022CA20: addiu       $a0, $zero, 0xA0
        ctx->r4 = ADD32(0, 0XA0);
            goto L_8022CB7C;
    }
    goto skip_1;
    // 0x8022CA20: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    skip_1:
    // 0x8022CA24: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8022CA28: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022CA2C: bnel        $v1, $v0, L_8022CA34
    if (ctx->r3 != ctx->r2) {
        // 0x8022CA30: sh          $zero, 0xA($s0)
        MEM_H(0XA, ctx->r16) = 0;
            goto L_8022CA34;
    }
    goto skip_2;
    // 0x8022CA30: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    skip_2:
L_8022CA34:
    // 0x8022CA34: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022CA38: j           L_8022CB78
    // 0x8022CA3C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022CB78;
    // 0x8022CA3C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022CA40:
    // 0x8022CA40: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8022CA44: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022CA48: beq         $v1, $v0, L_8022CB78
    if (ctx->r3 == ctx->r2) {
        // 0x8022CA4C: addiu       $a0, $zero, 0xA2
        ctx->r4 = ADD32(0, 0XA2);
            goto L_8022CB78;
    }
    // 0x8022CA4C: addiu       $a0, $zero, 0xA2
    ctx->r4 = ADD32(0, 0XA2);
    // 0x8022CA50: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x8022CA54: jal         0x8002A33C
    // 0x8022CA58: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x8022CA58: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_0:
    // 0x8022CA5C: lhu         $v0, 0x22($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X22);
    // 0x8022CA60: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022CA64: beq         $v0, $zero, L_8022CAB4
    if (ctx->r2 == 0) {
        // 0x8022CA68: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8022CAB4;
    }
    // 0x8022CA68: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022CA6C: jal         0x8004EC38
    // 0x8022CA70: addiu       $a1, $s2, 0x1C
    ctx->r5 = ADD32(ctx->r18, 0X1C);
    func_8004EC38_2A038(rdram, ctx);
        goto after_1;
    // 0x8022CA70: addiu       $a1, $s2, 0x1C
    ctx->r5 = ADD32(ctx->r18, 0X1C);
    after_1:
    // 0x8022CA74: sh          $v0, 0x44($s2)
    MEM_H(0X44, ctx->r18) = ctx->r2;
    // 0x8022CA78: lh          $v1, 0x56($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X56);
    // 0x8022CA7C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022CA80: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022CA84: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8022CA88: addiu       $v1, $v1, 0x400
    ctx->r3 = ADD32(ctx->r3, 0X400);
    // 0x8022CA8C: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022CA90: slti        $v1, $v1, 0x800
    ctx->r3 = SIGNED(ctx->r3) < 0X800 ? 1 : 0;
    // 0x8022CA94: beq         $v1, $zero, L_8022CAAC
    if (ctx->r3 == 0) {
        // 0x8022CA98: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_8022CAAC;
    }
    // 0x8022CA98: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8022CA9C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022CAA0: lhu         $v0, 0x44($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X44);
    // 0x8022CAA4: j           L_8022CB14
    // 0x8022CAA8: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
        goto L_8022CB14;
    // 0x8022CAA8: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_8022CAAC:
    // 0x8022CAAC: j           L_8022CB00
    // 0x8022CAB0: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_8022CB00;
    // 0x8022CAB0: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_8022CAB4:
    // 0x8022CAB4: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8022CAB8: addiu       $a0, $a0, -0x64C4
    ctx->r4 = ADD32(ctx->r4, -0X64C4);
    // 0x8022CABC: jal         0x8004EC38
    // 0x8022CAC0: addiu       $a1, $s2, 0x1C
    ctx->r5 = ADD32(ctx->r18, 0X1C);
    func_8004EC38_2A038(rdram, ctx);
        goto after_2;
    // 0x8022CAC0: addiu       $a1, $s2, 0x1C
    ctx->r5 = ADD32(ctx->r18, 0X1C);
    after_2:
    // 0x8022CAC4: sh          $v0, 0x44($s2)
    MEM_H(0X44, ctx->r18) = ctx->r2;
    // 0x8022CAC8: lh          $v1, 0x56($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X56);
    // 0x8022CACC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022CAD0: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022CAD4: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022CAD8: addiu       $v0, $v0, 0x400
    ctx->r2 = ADD32(ctx->r2, 0X400);
    // 0x8022CADC: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022CAE0: slti        $v0, $v0, 0x800
    ctx->r2 = SIGNED(ctx->r2) < 0X800 ? 1 : 0;
    // 0x8022CAE4: beq         $v0, $zero, L_8022CAFC
    if (ctx->r2 == 0) {
        // 0x8022CAE8: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_8022CAFC;
    }
    // 0x8022CAE8: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022CAEC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022CAF0: lhu         $v0, 0x44($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X44);
    // 0x8022CAF4: j           L_8022CB14
    // 0x8022CAF8: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
        goto L_8022CB14;
    // 0x8022CAF8: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_8022CAFC:
    // 0x8022CAFC: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
L_8022CB00:
    // 0x8022CB00: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022CB04: lhu         $v0, 0x44($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X44);
    // 0x8022CB08: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022CB0C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022CB10: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_8022CB14:
    // 0x8022CB14: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8022CB18: j           L_8022CB84
    // 0x8022CB1C: sh          $zero, 0xA($s2)
    MEM_H(0XA, ctx->r18) = 0;
        goto L_8022CB84;
    // 0x8022CB1C: sh          $zero, 0xA($s2)
    MEM_H(0XA, ctx->r18) = 0;
L_8022CB20:
    // 0x8022CB20: lw          $v0, 0x33C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X33C);
    // 0x8022CB24: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022CB28: bne         $v0, $zero, L_8022CB68
    if (ctx->r2 != 0) {
        // 0x8022CB2C: nop
    
            goto L_8022CB68;
    }
    // 0x8022CB2C: nop

    // 0x8022CB30: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x8022CB34: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x8022CB38: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x8022CB3C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022CB40: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022CB44: lh          $v1, 0x32E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X32E);
    // 0x8022CB48: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8022CB4C: lh          $a0, 0x332($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X332);
    // 0x8022CB50: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x8022CB54: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022CB58: lbu         $v0, 0x9($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X9);
    // 0x8022CB5C: slt         $a0, $a0, $v0
    ctx->r4 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8022CB60: bne         $a0, $zero, L_8022CB7C
    if (ctx->r4 != 0) {
        // 0x8022CB64: addiu       $a0, $zero, 0xA0
        ctx->r4 = ADD32(0, 0XA0);
            goto L_8022CB7C;
    }
    // 0x8022CB64: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
L_8022CB68:
    // 0x8022CB68: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8022CB6C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022CB70: bne         $v1, $v0, L_8022CB7C
    if (ctx->r3 != ctx->r2) {
        // 0x8022CB74: addiu       $a0, $zero, 0xA2
        ctx->r4 = ADD32(0, 0XA2);
            goto L_8022CB7C;
    }
    // 0x8022CB74: addiu       $a0, $zero, 0xA2
    ctx->r4 = ADD32(0, 0XA2);
L_8022CB78:
    // 0x8022CB78: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
L_8022CB7C:
    // 0x8022CB7C: jal         0x8002A33C
    // 0x8022CB80: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_3;
    // 0x8022CB80: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_3:
L_8022CB84:
    // 0x8022CB84: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8022CB88: addiu       $v1, $zero, 0x7FFF
    ctx->r3 = ADD32(0, 0X7FFF);
    // 0x8022CB8C: sh          $v1, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r3;
    // 0x8022CB90: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x8022CB94: j           L_8022CBA4
    // 0x8022CB98: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
        goto L_8022CBA4;
    // 0x8022CB98: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
L_8022CB9C:
    // 0x8022CB9C: jal         0x8002A33C
    // 0x8022CBA0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_4;
    // 0x8022CBA0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_4:
L_8022CBA4:
    // 0x8022CBA4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022CBA8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022CBAC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022CBB0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022CBB4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022CBB8: jr          $ra
    // 0x8022CBBC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022CBBC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80231384_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231384: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80231388: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8023138C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80231390: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x80231394: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80231398: lbu         $v1, 0xB($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XB);
    // 0x8023139C: sltiu       $v0, $v1, 0xB
    ctx->r2 = ctx->r3 < 0XB ? 1 : 0;
    // 0x802313A0: beq         $v0, $zero, L_8023177C
    if (ctx->r2 == 0) {
        // 0x802313A4: addiu       $s1, $s0, 0x328
        ctx->r17 = ADD32(ctx->r16, 0X328);
            goto L_8023177C;
    }
    // 0x802313A4: addiu       $s1, $s0, 0x328
    ctx->r17 = ADD32(ctx->r16, 0X328);
    // 0x802313A8: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x802313AC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802313B0: addu        $at, $at, $v0
    gpr jr_addend_802313B8 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802313B4: lw          $v0, -0x5B20($at)
    ctx->r2 = ADD32(ctx->r1, -0X5B20);
    // 0x802313B8: jr          $v0
    // 0x802313BC: nop

    switch (jr_addend_802313B8 >> 2) {
        case 0: goto L_802313C0; break;
        case 1: goto L_8023146C; break;
        case 2: goto L_802314F4; break;
        case 3: goto L_80231544; break;
        case 4: goto L_8023155C; break;
        case 5: goto L_80231578; break;
        case 6: goto L_8023160C; break;
        case 7: goto L_8023165C; break;
        case 8: goto L_80231690; break;
        case 9: goto L_802316C8; break;
        case 10: goto L_8023173C; break;
        default: switch_error(__func__, 0x802313B8, 0x8023A4E0);
    }
    // 0x802313BC: nop

L_802313C0:
    // 0x802313C0: lh          $v1, 0x14($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X14);
    // 0x802313C4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x802313C8: slti        $v0, $v1, -0x200
    ctx->r2 = SIGNED(ctx->r3) < -0X200 ? 1 : 0;
    // 0x802313CC: beq         $v0, $zero, L_802313F4
    if (ctx->r2 == 0) {
        // 0x802313D0: sb          $a0, 0xAC($s0)
        MEM_B(0XAC, ctx->r16) = ctx->r4;
            goto L_802313F4;
    }
    // 0x802313D0: sb          $a0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r4;
    // 0x802313D4: slti        $v0, $v1, -0x800
    ctx->r2 = SIGNED(ctx->r3) < -0X800 ? 1 : 0;
    // 0x802313D8: beq         $v0, $zero, L_802313EC
    if (ctx->r2 == 0) {
        // 0x802313DC: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_802313EC;
    }
    // 0x802313DC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802313E0: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x802313E4: j           L_80231414
    // 0x802313E8: addiu       $v0, $zero, 0xC00
    ctx->r2 = ADD32(0, 0XC00);
        goto L_80231414;
    // 0x802313E8: addiu       $v0, $zero, 0xC00
    ctx->r2 = ADD32(0, 0XC00);
L_802313EC:
    // 0x802313EC: j           L_80231410
    // 0x802313F0: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
        goto L_80231410;
    // 0x802313F0: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
L_802313F4:
    // 0x802313F4: slti        $v0, $v1, 0x401
    ctx->r2 = SIGNED(ctx->r3) < 0X401 ? 1 : 0;
    // 0x802313F8: bnel        $v0, $zero, L_80231410
    if (ctx->r2 != 0) {
        // 0x802313FC: addiu       $v0, $zero, 0xC00
        ctx->r2 = ADD32(0, 0XC00);
            goto L_80231410;
    }
    goto skip_0;
    // 0x802313FC: addiu       $v0, $zero, 0xC00
    ctx->r2 = ADD32(0, 0XC00);
    skip_0:
    // 0x80231400: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80231404: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x80231408: j           L_80231414
    // 0x8023140C: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
        goto L_80231414;
    // 0x8023140C: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
L_80231410:
    // 0x80231410: sb          $a0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r4;
L_80231414:
    // 0x80231414: sh          $v0, 0x3A($s1)
    MEM_H(0X3A, ctx->r17) = ctx->r2;
    // 0x80231418: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8023141C: lh          $a2, 0x3A($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X3A);
    // 0x80231420: sh          $v0, 0x38($s1)
    MEM_H(0X38, ctx->r17) = ctx->r2;
    // 0x80231424: lh          $a1, 0x38($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X38);
    // 0x80231428: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x8023142C: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
    // 0x80231430: sh          $v0, 0xA($s1)
    MEM_H(0XA, ctx->r17) = ctx->r2;
    // 0x80231434: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
    // 0x80231438: subu        $v0, $a2, $a1
    ctx->r2 = SUB32(ctx->r6, ctx->r5);
    // 0x8023143C: slti        $v0, $v0, 0x800
    ctx->r2 = SIGNED(ctx->r2) < 0X800 ? 1 : 0;
    // 0x80231440: bne         $v0, $zero, L_80231454
    if (ctx->r2 != 0) {
        // 0x80231444: addu        $v1, $a1, $zero
        ctx->r3 = ADD32(ctx->r5, 0);
            goto L_80231454;
    }
    // 0x80231444: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
    // 0x80231448: addiu       $v0, $v1, 0x1000
    ctx->r2 = ADD32(ctx->r3, 0X1000);
    // 0x8023144C: j           L_8023177C
    // 0x80231450: sh          $v0, 0x38($s1)
    MEM_H(0X38, ctx->r17) = ctx->r2;
        goto L_8023177C;
    // 0x80231450: sh          $v0, 0x38($s1)
    MEM_H(0X38, ctx->r17) = ctx->r2;
L_80231454:
    // 0x80231454: subu        $v0, $a1, $a2
    ctx->r2 = SUB32(ctx->r5, ctx->r6);
    // 0x80231458: slti        $v0, $v0, 0x800
    ctx->r2 = SIGNED(ctx->r2) < 0X800 ? 1 : 0;
    // 0x8023145C: bne         $v0, $zero, L_8023177C
    if (ctx->r2 != 0) {
        // 0x80231460: addiu       $v0, $a0, 0x1000
        ctx->r2 = ADD32(ctx->r4, 0X1000);
            goto L_8023177C;
    }
    // 0x80231460: addiu       $v0, $a0, 0x1000
    ctx->r2 = ADD32(ctx->r4, 0X1000);
    // 0x80231464: j           L_8023177C
    // 0x80231468: sh          $v0, 0x3A($s1)
    MEM_H(0X3A, ctx->r17) = ctx->r2;
        goto L_8023177C;
    // 0x80231468: sh          $v0, 0x3A($s1)
    MEM_H(0X3A, ctx->r17) = ctx->r2;
L_8023146C:
    // 0x8023146C: lhu         $a2, 0x8($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X8);
    // 0x80231470: lh          $v1, 0x38($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X38);
    // 0x80231474: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x80231478: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x8023147C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80231480: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80231484: mflo        $v1
    ctx->r3 = lo;
    // 0x80231488: lh          $a0, 0xA($s1)
    ctx->r4 = MEM_H(ctx->r17, 0XA);
    // 0x8023148C: lh          $a1, 0x3A($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X3A);
    // 0x80231490: subu        $v0, $a0, $v0
    ctx->r2 = SUB32(ctx->r4, ctx->r2);
    // 0x80231494: mult        $v0, $a1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80231498: mflo        $v0
    ctx->r2 = lo;
    // 0x8023149C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802314A0: nop

    // 0x802314A4: div         $zero, $v1, $a0
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r4))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r4)));
    // 0x802314A8: bne         $a0, $zero, L_802314B4
    if (ctx->r4 != 0) {
        // 0x802314AC: nop
    
            goto L_802314B4;
    }
    // 0x802314AC: nop

    // 0x802314B0: break       7
    do_break(2149782704);
L_802314B4:
    // 0x802314B4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802314B8: bne         $a0, $at, L_802314CC
    if (ctx->r4 != ctx->r1) {
        // 0x802314BC: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_802314CC;
    }
    // 0x802314BC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802314C0: bne         $v1, $at, L_802314CC
    if (ctx->r3 != ctx->r1) {
        // 0x802314C4: nop
    
            goto L_802314CC;
    }
    // 0x802314C4: nop

    // 0x802314C8: break       6
    do_break(2149782728);
L_802314CC:
    // 0x802314CC: mflo        $v1
    ctx->r3 = lo;
    // 0x802314D0: sh          $a2, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r6;
    // 0x802314D4: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x802314D8: lh          $v0, 0x8($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X8);
    // 0x802314DC: bne         $v0, $zero, L_8023177C
    if (ctx->r2 != 0) {
        // 0x802314E0: addiu       $v1, $zero, 0x200
        ctx->r3 = ADD32(0, 0X200);
            goto L_8023177C;
    }
    // 0x802314E0: addiu       $v1, $zero, 0x200
    ctx->r3 = ADD32(0, 0X200);
    // 0x802314E4: lhu         $v0, 0x3A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X3A);
    // 0x802314E8: sh          $v1, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r3;
    // 0x802314EC: j           L_802315FC
    // 0x802314F0: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
        goto L_802315FC;
    // 0x802314F0: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
L_802314F4:
    // 0x802314F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802314F8: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x802314FC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80231500: jal         0x8004DA90
    // 0x80231504: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x80231504: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x80231508: lh          $v1, 0x14($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X14);
    // 0x8023150C: slti        $v0, $v1, -0x200
    ctx->r2 = SIGNED(ctx->r3) < -0X200 ? 1 : 0;
    // 0x80231510: beq         $v0, $zero, L_80231528
    if (ctx->r2 == 0) {
        // 0x80231514: slti        $v0, $v1, -0xA00
        ctx->r2 = SIGNED(ctx->r3) < -0XA00 ? 1 : 0;
            goto L_80231528;
    }
    // 0x80231514: slti        $v0, $v1, -0xA00
    ctx->r2 = SIGNED(ctx->r3) < -0XA00 ? 1 : 0;
    // 0x80231518: beq         $v0, $zero, L_8023177C
    if (ctx->r2 == 0) {
        // 0x8023151C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8023177C;
    }
    // 0x8023151C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80231520: j           L_80231534
    // 0x80231524: nop

        goto L_80231534;
    // 0x80231524: nop

L_80231528:
    // 0x80231528: slti        $v0, $v1, 0x601
    ctx->r2 = SIGNED(ctx->r3) < 0X601 ? 1 : 0;
    // 0x8023152C: bne         $v0, $zero, L_8023177C
    if (ctx->r2 != 0) {
        // 0x80231530: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8023177C;
    }
    // 0x80231530: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80231534:
    // 0x80231534: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80231538: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023153C: j           L_8023177C
    // 0x80231540: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
        goto L_8023177C;
    // 0x80231540: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
L_80231544:
    // 0x80231544: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x80231548: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8023154C: bne         $v1, $v0, L_8023177C
    if (ctx->r3 != ctx->r2) {
        // 0x80231550: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8023177C;
    }
    // 0x80231550: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80231554: j           L_8023177C
    // 0x80231558: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
        goto L_8023177C;
    // 0x80231558: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
L_8023155C:
    // 0x8023155C: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80231560: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80231564: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x80231568: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
    // 0x8023156C: sb          $v1, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r3;
    // 0x80231570: j           L_80231600
    // 0x80231574: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
        goto L_80231600;
    // 0x80231574: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
L_80231578:
    // 0x80231578: lhu         $a2, 0x8($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X8);
    // 0x8023157C: lh          $v1, 0x38($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X38);
    // 0x80231580: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x80231584: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x80231588: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023158C: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80231590: mflo        $v1
    ctx->r3 = lo;
    // 0x80231594: lh          $a0, 0xA($s1)
    ctx->r4 = MEM_H(ctx->r17, 0XA);
    // 0x80231598: lh          $a1, 0x3A($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X3A);
    // 0x8023159C: subu        $v0, $a0, $v0
    ctx->r2 = SUB32(ctx->r4, ctx->r2);
    // 0x802315A0: mult        $v0, $a1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802315A4: mflo        $v0
    ctx->r2 = lo;
    // 0x802315A8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802315AC: nop

    // 0x802315B0: div         $zero, $v1, $a0
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r4))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r4)));
    // 0x802315B4: bne         $a0, $zero, L_802315C0
    if (ctx->r4 != 0) {
        // 0x802315B8: nop
    
            goto L_802315C0;
    }
    // 0x802315B8: nop

    // 0x802315BC: break       7
    do_break(2149782972);
L_802315C0:
    // 0x802315C0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802315C4: bne         $a0, $at, L_802315D8
    if (ctx->r4 != ctx->r1) {
        // 0x802315C8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_802315D8;
    }
    // 0x802315C8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802315CC: bne         $v1, $at, L_802315D8
    if (ctx->r3 != ctx->r1) {
        // 0x802315D0: nop
    
            goto L_802315D8;
    }
    // 0x802315D0: nop

    // 0x802315D4: break       6
    do_break(2149782996);
L_802315D8:
    // 0x802315D8: mflo        $v1
    ctx->r3 = lo;
    // 0x802315DC: sh          $a2, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r6;
    // 0x802315E0: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x802315E4: lh          $v0, 0x8($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X8);
    // 0x802315E8: bne         $v0, $zero, L_8023177C
    if (ctx->r2 != 0) {
        // 0x802315EC: addiu       $v1, $zero, 0x200
        ctx->r3 = ADD32(0, 0X200);
            goto L_8023177C;
    }
    // 0x802315EC: addiu       $v1, $zero, 0x200
    ctx->r3 = ADD32(0, 0X200);
    // 0x802315F0: lhu         $v0, 0x3A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X3A);
    // 0x802315F4: sh          $v1, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r3;
    // 0x802315F8: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
L_802315FC:
    // 0x802315FC: sb          $v1, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r3;
L_80231600:
    // 0x80231600: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80231604: j           L_8023177C
    // 0x80231608: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
        goto L_8023177C;
    // 0x80231608: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_8023160C:
    // 0x8023160C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80231610: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80231614: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80231618: jal         0x8004DA90
    // 0x8023161C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x8023161C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x80231620: lh          $v1, 0x14($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X14);
    // 0x80231624: slti        $v0, $v1, -0x200
    ctx->r2 = SIGNED(ctx->r3) < -0X200 ? 1 : 0;
    // 0x80231628: beq         $v0, $zero, L_80231640
    if (ctx->r2 == 0) {
        // 0x8023162C: slti        $v0, $v1, -0x7FF
        ctx->r2 = SIGNED(ctx->r3) < -0X7FF ? 1 : 0;
            goto L_80231640;
    }
    // 0x8023162C: slti        $v0, $v1, -0x7FF
    ctx->r2 = SIGNED(ctx->r3) < -0X7FF ? 1 : 0;
    // 0x80231630: bne         $v0, $zero, L_8023177C
    if (ctx->r2 != 0) {
        // 0x80231634: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_8023177C;
    }
    // 0x80231634: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80231638: j           L_8023164C
    // 0x8023163C: nop

        goto L_8023164C;
    // 0x8023163C: nop

L_80231640:
    // 0x80231640: slti        $v0, $v1, 0x400
    ctx->r2 = SIGNED(ctx->r3) < 0X400 ? 1 : 0;
    // 0x80231644: beq         $v0, $zero, L_8023177C
    if (ctx->r2 == 0) {
        // 0x80231648: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_8023177C;
    }
    // 0x80231648: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_8023164C:
    // 0x8023164C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80231650: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80231654: j           L_8023177C
    // 0x80231658: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
        goto L_8023177C;
    // 0x80231658: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
L_8023165C:
    // 0x8023165C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80231660: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80231664: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80231668: jal         0x8004DA90
    // 0x8023166C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x8023166C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_2:
    // 0x80231670: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x80231674: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80231678: bne         $v1, $v0, L_8023177C
    if (ctx->r3 != ctx->r2) {
        // 0x8023167C: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_8023177C;
    }
    // 0x8023167C: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x80231680: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80231684: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80231688: j           L_8023177C
    // 0x8023168C: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
        goto L_8023177C;
    // 0x8023168C: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
L_80231690:
    // 0x80231690: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80231694: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80231698: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023169C: jal         0x8004DA90
    // 0x802316A0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_3;
    // 0x802316A0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_3:
    // 0x802316A4: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x802316A8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802316AC: bne         $v1, $v0, L_8023177C
    if (ctx->r3 != ctx->r2) {
        // 0x802316B0: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_8023177C;
    }
    // 0x802316B0: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x802316B4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802316B8: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x802316BC: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x802316C0: j           L_8023177C
    // 0x802316C4: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
        goto L_8023177C;
    // 0x802316C4: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
L_802316C8:
    // 0x802316C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802316CC: lhu         $v0, 0x46($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X46);
    // 0x802316D0: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x802316D4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x802316D8: addiu       $v0, $v0, 0x40
    ctx->r2 = ADD32(ctx->r2, 0X40);
    // 0x802316DC: sll         $a2, $v0, 16
    ctx->r6 = S32(ctx->r2 << 16);
    // 0x802316E0: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x802316E4: jal         0x8004DA90
    // 0x802316E8: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    func_8004DA90_28E90(rdram, ctx);
        goto after_4;
    // 0x802316E8: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    after_4:
    // 0x802316EC: lh          $v0, 0x16($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X16);
    // 0x802316F0: slti        $v0, $v0, -0x1
    ctx->r2 = SIGNED(ctx->r2) < -0X1 ? 1 : 0;
    // 0x802316F4: bne         $v0, $zero, L_8023177C
    if (ctx->r2 != 0) {
        // 0x802316F8: addiu       $v0, $zero, -0x200
        ctx->r2 = ADD32(0, -0X200);
            goto L_8023177C;
    }
    // 0x802316F8: addiu       $v0, $zero, -0x200
    ctx->r2 = ADD32(0, -0X200);
    // 0x802316FC: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x80231700: lh          $v1, 0x14($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X14);
    // 0x80231704: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80231708: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8023170C: lh          $a0, 0x16($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X16);
    // 0x80231710: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x80231714: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80231718: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8023171C: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80231720: sw          $zero, 0x48($s0)
    MEM_W(0X48, ctx->r16) = 0;
    // 0x80231724: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x80231728: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8023172C: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80231730: sw          $v1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r3;
    // 0x80231734: j           L_8023177C
    // 0x80231738: sw          $a0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r4;
        goto L_8023177C;
    // 0x80231738: sw          $a0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r4;
L_8023173C:
    // 0x8023173C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80231740: lhu         $v0, 0x44($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X44);
    // 0x80231744: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80231748: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8023174C: addiu       $v0, $v0, -0x20
    ctx->r2 = ADD32(ctx->r2, -0X20);
    // 0x80231750: sll         $a1, $v0, 16
    ctx->r5 = S32(ctx->r2 << 16);
    // 0x80231754: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x80231758: jal         0x8004DA90
    // 0x8023175C: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    func_8004DA90_28E90(rdram, ctx);
        goto after_5;
    // 0x8023175C: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    after_5:
    // 0x80231760: lh          $v0, 0x44($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X44);
    // 0x80231764: bne         $v0, $zero, L_8023177C
    if (ctx->r2 != 0) {
        // 0x80231768: nop
    
            goto L_8023177C;
    }
    // 0x80231768: nop

    // 0x8023176C: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x80231770: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80231774: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80231778: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_8023177C:
    // 0x8023177C: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x80231780: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80231784: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80231788: jr          $ra
    // 0x8023178C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8023178C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80235BB0_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235BB0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80235BB4: lw          $v0, 0x4B34($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4B34);
    // 0x80235BB8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80235BBC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80235BC0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80235BC4: bne         $v0, $s0, L_80235BF4
    if (ctx->r2 != ctx->r16) {
        // 0x80235BC8: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80235BF4;
    }
    // 0x80235BC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80235BCC: jal         0x8006033C
    // 0x80235BD0: addiu       $a0, $zero, 0x635
    ctx->r4 = ADD32(0, 0X635);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80235BD0: addiu       $a0, $zero, 0x635
    ctx->r4 = ADD32(0, 0X635);
    after_0:
    // 0x80235BD4: bne         $v0, $zero, L_80235BF8
    if (ctx->r2 != 0) {
        // 0x80235BD8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80235BF8;
    }
    // 0x80235BD8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235BDC: jal         0x8006036C
    // 0x80235BE0: addiu       $a0, $zero, 0x635
    ctx->r4 = ADD32(0, 0X635);
    func_8006036C_3B76C(rdram, ctx);
        goto after_1;
    // 0x80235BE0: addiu       $a0, $zero, 0x635
    ctx->r4 = ADD32(0, 0X635);
    after_1:
    // 0x80235BE4: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80235BE8: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80235BEC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80235BF0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80235BF4:
    // 0x80235BF4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80235BF8:
    // 0x80235BF8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80235BFC: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x80235C00: jal         0x80047284
    // 0x80235C04: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_2;
    // 0x80235C04: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_2:
    // 0x80235C08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80235C0C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80235C10: jr          $ra
    // 0x80235C14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80235C14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80229EFC_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229EFC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229F00: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80229F04: jal         0x8004F5C4
    // 0x80229F08: nop

    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x80229F08: nop

    after_0:
    // 0x80229F0C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80229F10: jr          $ra
    // 0x80229F14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80229F14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023670C_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023670C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80236710: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80236714: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x80236718: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8023671C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80236720: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80236724: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80236728: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8023672C: lbu         $s3, 0x3($s4)
    ctx->r19 = MEM_BU(ctx->r20, 0X3);
    // 0x80236730: sll         $v0, $s3, 1
    ctx->r2 = S32(ctx->r19 << 1);
    // 0x80236734: addu        $v0, $v0, $s3
    ctx->r2 = ADD32(ctx->r2, ctx->r19);
    // 0x80236738: sll         $s0, $v0, 2
    ctx->r16 = S32(ctx->r2 << 2);
    // 0x8023673C: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80236740: addu        $a0, $a0, $s0
    ctx->r4 = ADD32(ctx->r4, ctx->r16);
    // 0x80236744: lhu         $a0, -0x5D56($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X5D56);
    // 0x80236748: jal         0x8006033C
    // 0x8023674C: lbu         $s1, 0xA($s4)
    ctx->r17 = MEM_BU(ctx->r20, 0XA);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x8023674C: lbu         $s1, 0xA($s4)
    ctx->r17 = MEM_BU(ctx->r20, 0XA);
    after_0:
    // 0x80236750: beq         $v0, $zero, L_80236954
    if (ctx->r2 == 0) {
        // 0x80236754: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80236954;
    }
    // 0x80236754: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80236758: lb          $v1, 0xC($s4)
    ctx->r3 = MEM_B(ctx->r20, 0XC);
    // 0x8023675C: beq         $v1, $v0, L_80236828
    if (ctx->r3 == ctx->r2) {
        // 0x80236760: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_80236828;
    }
    // 0x80236760: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80236764: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80236768: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x8023676C: lhu         $v0, -0x5D60($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X5D60);
    // 0x80236770: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x80236774: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80236778: addu        $v1, $v1, $s0
    ctx->r3 = ADD32(ctx->r3, ctx->r16);
    // 0x8023677C: lhu         $v1, -0x5D5E($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X5D5E);
    // 0x80236780: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80236784: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    // 0x80236788: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8023678C: subu        $v0, $v0, $s1
    ctx->r2 = SUB32(ctx->r2, ctx->r17);
    // 0x80236790: sh          $v0, 0x16($sp)
    MEM_H(0X16, ctx->r29) = ctx->r2;
    // 0x80236794: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x80236798: lw          $v0, -0x5858($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5858);
    // 0x8023679C: addu        $v1, $v1, $s1
    ctx->r3 = ADD32(ctx->r3, ctx->r17);
    // 0x802367A0: sh          $v1, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r3;
    // 0x802367A4: lui         $a2, 0x8024
    ctx->r6 = S32(0X8024 << 16);
    // 0x802367A8: addu        $a2, $a2, $s0
    ctx->r6 = ADD32(ctx->r6, ctx->r16);
    // 0x802367AC: lh          $a2, -0x5D5E($a2)
    ctx->r6 = MEM_H(ctx->r6, -0X5D5E);
    // 0x802367B0: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x802367B4: addu        $a1, $a1, $s0
    ctx->r5 = ADD32(ctx->r5, ctx->r16);
    // 0x802367B8: lh          $a1, -0x5D60($a1)
    ctx->r5 = MEM_H(ctx->r5, -0X5D60);
    // 0x802367BC: addu        $s2, $s1, $zero
    ctx->r18 = ADD32(ctx->r17, 0);
    // 0x802367C0: addiu       $v0, $v0, 0x18
    ctx->r2 = ADD32(ctx->r2, 0X18);
    // 0x802367C4: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x802367C8: sw          $v0, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r2;
    // 0x802367CC: jal         0x8002FDF4
    // 0x802367D0: addiu       $a2, $a2, -0x40
    ctx->r6 = ADD32(ctx->r6, -0X40);
    func_8002FDF4_B1F4(rdram, ctx);
        goto after_1;
    // 0x802367D0: addiu       $a2, $a2, -0x40
    ctx->r6 = ADD32(ctx->r6, -0X40);
    after_1:
    // 0x802367D4: beq         $s1, $zero, L_80236824
    if (ctx->r17 == 0) {
        // 0x802367D8: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_80236824;
    }
    // 0x802367D8: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x802367DC: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802367E0: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x802367E4: lhu         $v0, -0x5D5E($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X5D5E);
    // 0x802367E8: sh          $s2, 0x16($sp)
    MEM_H(0X16, ctx->r29) = ctx->r18;
    // 0x802367EC: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x802367F0: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x802367F4: lw          $v0, -0x5858($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5858);
    // 0x802367F8: lui         $a2, 0x8024
    ctx->r6 = S32(0X8024 << 16);
    // 0x802367FC: addu        $a2, $a2, $s0
    ctx->r6 = ADD32(ctx->r6, ctx->r16);
    // 0x80236800: lh          $a2, -0x5D5E($a2)
    ctx->r6 = MEM_H(ctx->r6, -0X5D5E);
    // 0x80236804: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x80236808: addu        $a1, $a1, $s0
    ctx->r5 = ADD32(ctx->r5, ctx->r16);
    // 0x8023680C: lh          $a1, -0x5D60($a1)
    ctx->r5 = MEM_H(ctx->r5, -0X5D60);
    // 0x80236810: addiu       $v0, $v0, 0x18
    ctx->r2 = ADD32(ctx->r2, 0X18);
    // 0x80236814: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x80236818: sw          $v0, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r2;
    // 0x8023681C: jal         0x8002FDF4
    // 0x80236820: subu        $a2, $a2, $s1
    ctx->r6 = SUB32(ctx->r6, ctx->r17);
    func_8002FDF4_B1F4(rdram, ctx);
        goto after_2;
    // 0x80236820: subu        $a2, $a2, $s1
    ctx->r6 = SUB32(ctx->r6, ctx->r17);
    after_2:
L_80236824:
    // 0x80236824: lb          $v1, 0xC($s4)
    ctx->r3 = MEM_B(ctx->r20, 0XC);
L_80236828:
    // 0x80236828: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023682C: beq         $v1, $v0, L_80236904
    if (ctx->r3 == ctx->r2) {
        // 0x80236830: sra         $s1, $s1, 1
        ctx->r17 = S32(SIGNED(ctx->r17) >> 1);
            goto L_80236904;
    }
    // 0x80236830: sra         $s1, $s1, 1
    ctx->r17 = S32(SIGNED(ctx->r17) >> 1);
    // 0x80236834: sll         $v0, $s3, 1
    ctx->r2 = S32(ctx->r19 << 1);
    // 0x80236838: addu        $v0, $v0, $s3
    ctx->r2 = ADD32(ctx->r2, ctx->r19);
    // 0x8023683C: sll         $s0, $v0, 2
    ctx->r16 = S32(ctx->r2 << 2);
    // 0x80236840: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80236844: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x80236848: lhu         $v0, -0x5D5C($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X5D5C);
    // 0x8023684C: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x80236850: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80236854: addu        $v1, $v1, $s0
    ctx->r3 = ADD32(ctx->r3, ctx->r16);
    // 0x80236858: lhu         $v1, -0x5D5A($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X5D5A);
    // 0x8023685C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80236860: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    // 0x80236864: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80236868: subu        $v0, $v0, $s1
    ctx->r2 = SUB32(ctx->r2, ctx->r17);
    // 0x8023686C: sh          $v0, 0x16($sp)
    MEM_H(0X16, ctx->r29) = ctx->r2;
    // 0x80236870: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x80236874: lw          $v0, -0x5858($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5858);
    // 0x80236878: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8023687C: addu        $v1, $v1, $s1
    ctx->r3 = ADD32(ctx->r3, ctx->r17);
    // 0x80236880: sh          $v1, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r3;
    // 0x80236884: lui         $a2, 0x8024
    ctx->r6 = S32(0X8024 << 16);
    // 0x80236888: addu        $a2, $a2, $s0
    ctx->r6 = ADD32(ctx->r6, ctx->r16);
    // 0x8023688C: lh          $a2, -0x5D5A($a2)
    ctx->r6 = MEM_H(ctx->r6, -0X5D5A);
    // 0x80236890: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x80236894: addu        $a1, $a1, $s0
    ctx->r5 = ADD32(ctx->r5, ctx->r16);
    // 0x80236898: lh          $a1, -0x5D5C($a1)
    ctx->r5 = MEM_H(ctx->r5, -0X5D5C);
    // 0x8023689C: addu        $s2, $s1, $zero
    ctx->r18 = ADD32(ctx->r17, 0);
    // 0x802368A0: addiu       $v0, $v0, 0x18
    ctx->r2 = ADD32(ctx->r2, 0X18);
    // 0x802368A4: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x802368A8: sw          $v0, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r2;
    // 0x802368AC: jal         0x8002FDF4
    // 0x802368B0: addiu       $a2, $a2, -0x20
    ctx->r6 = ADD32(ctx->r6, -0X20);
    func_8002FDF4_B1F4(rdram, ctx);
        goto after_3;
    // 0x802368B0: addiu       $a2, $a2, -0x20
    ctx->r6 = ADD32(ctx->r6, -0X20);
    after_3:
    // 0x802368B4: beq         $s1, $zero, L_80236904
    if (ctx->r17 == 0) {
        // 0x802368B8: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_80236904;
    }
    // 0x802368B8: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x802368BC: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802368C0: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x802368C4: lhu         $v0, -0x5D5A($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X5D5A);
    // 0x802368C8: sh          $s2, 0x16($sp)
    MEM_H(0X16, ctx->r29) = ctx->r18;
    // 0x802368CC: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x802368D0: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x802368D4: lw          $v0, -0x5858($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5858);
    // 0x802368D8: lui         $a2, 0x8024
    ctx->r6 = S32(0X8024 << 16);
    // 0x802368DC: addu        $a2, $a2, $s0
    ctx->r6 = ADD32(ctx->r6, ctx->r16);
    // 0x802368E0: lh          $a2, -0x5D5A($a2)
    ctx->r6 = MEM_H(ctx->r6, -0X5D5A);
    // 0x802368E4: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x802368E8: addu        $a1, $a1, $s0
    ctx->r5 = ADD32(ctx->r5, ctx->r16);
    // 0x802368EC: lh          $a1, -0x5D5C($a1)
    ctx->r5 = MEM_H(ctx->r5, -0X5D5C);
    // 0x802368F0: addiu       $v0, $v0, 0x18
    ctx->r2 = ADD32(ctx->r2, 0X18);
    // 0x802368F4: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x802368F8: sw          $v0, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r2;
    // 0x802368FC: jal         0x8002FDF4
    // 0x80236900: subu        $a2, $a2, $s1
    ctx->r6 = SUB32(ctx->r6, ctx->r17);
    func_8002FDF4_B1F4(rdram, ctx);
        goto after_4;
    // 0x80236900: subu        $a2, $a2, $s1
    ctx->r6 = SUB32(ctx->r6, ctx->r17);
    after_4:
L_80236904:
    // 0x80236904: lbu         $v0, 0xB($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XB);
    // 0x80236908: beq         $v0, $zero, L_80236930
    if (ctx->r2 == 0) {
        // 0x8023690C: sll         $v0, $s3, 1
        ctx->r2 = S32(ctx->r19 << 1);
            goto L_80236930;
    }
    // 0x8023690C: sll         $v0, $s3, 1
    ctx->r2 = S32(ctx->r19 << 1);
    // 0x80236910: addu        $v0, $v0, $s3
    ctx->r2 = ADD32(ctx->r2, ctx->r19);
    // 0x80236914: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80236918: lbu         $v1, 0xA($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0XA);
    // 0x8023691C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80236920: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80236924: lbu         $v0, -0x5D57($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X5D57);
    // 0x80236928: j           L_8023694C
    // 0x8023692C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
        goto L_8023694C;
    // 0x8023692C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
L_80236930:
    // 0x80236930: addu        $v0, $v0, $s3
    ctx->r2 = ADD32(ctx->r2, ctx->r19);
    // 0x80236934: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80236938: lbu         $v1, 0xA($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0XA);
    // 0x8023693C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80236940: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80236944: lbu         $v0, -0x5D57($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X5D57);
    // 0x80236948: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
L_8023694C:
    // 0x8023694C: andi        $v1, $v1, 0x3F
    ctx->r3 = ctx->r3 & 0X3F;
    // 0x80236950: sb          $v1, 0xA($s4)
    MEM_B(0XA, ctx->r20) = ctx->r3;
L_80236954:
    // 0x80236954: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80236958: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8023695C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80236960: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80236964: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80236968: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8023696C: jr          $ra
    // 0x80236970: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80236970: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80236974: nop

    // 0x80236978: nop

    // 0x8023697C: nop

;}
RECOMP_FUNC void func_802329DC_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802329DC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802329E0: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x802329E4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802329E8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802329EC: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x802329F0: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x802329F4: lh          $a0, 0x4($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X4);
    // 0x802329F8: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x802329FC: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x80232A00: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80232A04: lh          $v1, 0x2($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X2);
    // 0x80232A08: addiu       $v0, $zero, 0x3FFF
    ctx->r2 = ADD32(0, 0X3FFF);
    // 0x80232A0C: beq         $v1, $v0, L_80232A28
    if (ctx->r3 == ctx->r2) {
        // 0x80232A10: addiu       $v0, $zero, 0x7FFF
        ctx->r2 = ADD32(0, 0X7FFF);
            goto L_80232A28;
    }
    // 0x80232A10: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x80232A14: bne         $v1, $v0, L_80232A24
    if (ctx->r3 != ctx->r2) {
        // 0x80232A18: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_80232A24;
    }
    // 0x80232A18: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x80232A1C: j           L_80232A28
    // 0x80232A20: sh          $zero, 0x4($s0)
    MEM_H(0X4, ctx->r16) = 0;
        goto L_80232A28;
    // 0x80232A20: sh          $zero, 0x4($s0)
    MEM_H(0X4, ctx->r16) = 0;
L_80232A24:
    // 0x80232A24: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
L_80232A28:
    // 0x80232A28: lh          $v0, 0x4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X4);
    // 0x80232A2C: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x80232A30: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80232A34: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80232A38: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x80232A3C: lh          $v1, 0x2($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2);
    // 0x80232A40: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
    // 0x80232A44: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80232A48: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80232A4C: beq         $a0, $v1, L_80232A74
    if (ctx->r4 == ctx->r3) {
        // 0x80232A50: addiu       $a1, $zero, 0x2A
        ctx->r5 = ADD32(0, 0X2A);
            goto L_80232A74;
    }
    // 0x80232A50: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x80232A54: addiu       $a2, $zero, 0x33
    ctx->r6 = ADD32(0, 0X33);
    // 0x80232A58: jal         0x8003B85C
    // 0x80232A5C: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_0;
    // 0x80232A5C: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_0:
    // 0x80232A60: lw          $a0, 0x88($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X88);
    // 0x80232A64: lui         $a1, 0x11
    ctx->r5 = S32(0X11 << 16);
    // 0x80232A68: ori         $a1, $a1, 0x10
    ctx->r5 = ctx->r5 | 0X10;
    // 0x80232A6C: jal         0x8003B840
    // 0x80232A70: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_1;
    // 0x80232A70: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_1:
L_80232A74:
    // 0x80232A74: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x80232A78: lh          $a0, 0xA($s0)
    ctx->r4 = MEM_H(ctx->r16, 0XA);
    // 0x80232A7C: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x80232A80: sh          $v0, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r2;
    // 0x80232A84: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x80232A88: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80232A8C: lh          $v1, 0x2($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X2);
    // 0x80232A90: addiu       $v0, $zero, 0x3FFF
    ctx->r2 = ADD32(0, 0X3FFF);
    // 0x80232A94: beq         $v1, $v0, L_80232AB0
    if (ctx->r3 == ctx->r2) {
        // 0x80232A98: addiu       $v0, $zero, 0x7FFF
        ctx->r2 = ADD32(0, 0X7FFF);
            goto L_80232AB0;
    }
    // 0x80232A98: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x80232A9C: bne         $v1, $v0, L_80232AAC
    if (ctx->r3 != ctx->r2) {
        // 0x80232AA0: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_80232AAC;
    }
    // 0x80232AA0: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x80232AA4: j           L_80232AB0
    // 0x80232AA8: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
        goto L_80232AB0;
    // 0x80232AA8: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_80232AAC:
    // 0x80232AAC: sh          $v0, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r2;
L_80232AB0:
    // 0x80232AB0: lh          $v0, 0xA($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XA);
    // 0x80232AB4: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x80232AB8: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80232ABC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80232AC0: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x80232AC4: lh          $v1, 0x8($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X8);
    // 0x80232AC8: sh          $v0, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r2;
    // 0x80232ACC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80232AD0: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80232AD4: beq         $a0, $v1, L_80232AFC
    if (ctx->r4 == ctx->r3) {
        // 0x80232AD8: addiu       $a1, $zero, 0x2A
        ctx->r5 = ADD32(0, 0X2A);
            goto L_80232AFC;
    }
    // 0x80232AD8: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x80232ADC: addiu       $a2, $zero, 0x33
    ctx->r6 = ADD32(0, 0X33);
    // 0x80232AE0: jal         0x8003B85C
    // 0x80232AE4: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_2;
    // 0x80232AE4: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_2:
    // 0x80232AE8: lw          $a0, 0x88($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X88);
    // 0x80232AEC: lui         $a1, 0x13
    ctx->r5 = S32(0X13 << 16);
    // 0x80232AF0: ori         $a1, $a1, 0x12
    ctx->r5 = ctx->r5 | 0X12;
    // 0x80232AF4: jal         0x8003B840
    // 0x80232AF8: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_3;
    // 0x80232AF8: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_3:
L_80232AFC:
    // 0x80232AFC: lhu         $v0, 0x6($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6);
    // 0x80232B00: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x80232B04: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x80232B08: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80232B0C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80232B10: jr          $ra
    // 0x80232B14: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80232B14: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80232B18: nop

    // 0x80232B1C: nop

;}
RECOMP_FUNC void func_802283A4_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802283A4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802283A8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802283AC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802283B0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802283B4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802283B8: lbu         $v1, 0x5($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X5);
    // 0x802283BC: bne         $v1, $zero, L_802283E8
    if (ctx->r3 != 0) {
        // 0x802283C0: addiu       $s1, $s0, 0x2C
        ctx->r17 = ADD32(ctx->r16, 0X2C);
            goto L_802283E8;
    }
    // 0x802283C0: addiu       $s1, $s0, 0x2C
    ctx->r17 = ADD32(ctx->r16, 0X2C);
    // 0x802283C4: jal         0x8006033C
    // 0x802283C8: addiu       $a0, $zero, 0x605
    ctx->r4 = ADD32(0, 0X605);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x802283C8: addiu       $a0, $zero, 0x605
    ctx->r4 = ADD32(0, 0X605);
    after_0:
    // 0x802283CC: bnel        $v0, $zero, L_80228440
    if (ctx->r2 != 0) {
        // 0x802283D0: addiu       $a0, $zero, 0x605
        ctx->r4 = ADD32(0, 0X605);
            goto L_80228440;
    }
    goto skip_0;
    // 0x802283D0: addiu       $a0, $zero, 0x605
    ctx->r4 = ADD32(0, 0X605);
    skip_0:
    // 0x802283D4: addiu       $a0, $zero, 0x11E
    ctx->r4 = ADD32(0, 0X11E);
    // 0x802283D8: jal         0x8002A33C
    // 0x802283DC: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x802283DC: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    after_1:
    // 0x802283E0: j           L_80228440
    // 0x802283E4: addiu       $a0, $zero, 0x605
    ctx->r4 = ADD32(0, 0X605);
        goto L_80228440;
    // 0x802283E4: addiu       $a0, $zero, 0x605
    ctx->r4 = ADD32(0, 0X605);
L_802283E8:
    // 0x802283E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802283EC: bne         $v1, $v0, L_80228418
    if (ctx->r3 != ctx->r2) {
        // 0x802283F0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80228418;
    }
    // 0x802283F0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802283F4: jal         0x8006033C
    // 0x802283F8: addiu       $a0, $zero, 0x606
    ctx->r4 = ADD32(0, 0X606);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x802283F8: addiu       $a0, $zero, 0x606
    ctx->r4 = ADD32(0, 0X606);
    after_2:
    // 0x802283FC: bnel        $v0, $zero, L_80228440
    if (ctx->r2 != 0) {
        // 0x80228400: addiu       $a0, $zero, 0x606
        ctx->r4 = ADD32(0, 0X606);
            goto L_80228440;
    }
    goto skip_1;
    // 0x80228400: addiu       $a0, $zero, 0x606
    ctx->r4 = ADD32(0, 0X606);
    skip_1:
    // 0x80228404: addiu       $a0, $zero, 0x11E
    ctx->r4 = ADD32(0, 0X11E);
    // 0x80228408: jal         0x8002A33C
    // 0x8022840C: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    func_8002A33C_573C(rdram, ctx);
        goto after_3;
    // 0x8022840C: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    after_3:
    // 0x80228410: j           L_80228440
    // 0x80228414: addiu       $a0, $zero, 0x606
    ctx->r4 = ADD32(0, 0X606);
        goto L_80228440;
    // 0x80228414: addiu       $a0, $zero, 0x606
    ctx->r4 = ADD32(0, 0X606);
L_80228418:
    // 0x80228418: bne         $v1, $v0, L_8022844C
    if (ctx->r3 != ctx->r2) {
        // 0x8022841C: addiu       $v0, $zero, 0x10
        ctx->r2 = ADD32(0, 0X10);
            goto L_8022844C;
    }
    // 0x8022841C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80228420: jal         0x8006033C
    // 0x80228424: addiu       $a0, $zero, 0x604
    ctx->r4 = ADD32(0, 0X604);
    func_8006033C_3B73C(rdram, ctx);
        goto after_4;
    // 0x80228424: addiu       $a0, $zero, 0x604
    ctx->r4 = ADD32(0, 0X604);
    after_4:
    // 0x80228428: bne         $v0, $zero, L_80228440
    if (ctx->r2 != 0) {
        // 0x8022842C: addiu       $a0, $zero, 0x604
        ctx->r4 = ADD32(0, 0X604);
            goto L_80228440;
    }
    // 0x8022842C: addiu       $a0, $zero, 0x604
    ctx->r4 = ADD32(0, 0X604);
    // 0x80228430: addiu       $a0, $zero, 0x11E
    ctx->r4 = ADD32(0, 0X11E);
    // 0x80228434: jal         0x8002A33C
    // 0x80228438: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    func_8002A33C_573C(rdram, ctx);
        goto after_5;
    // 0x80228438: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    after_5:
    // 0x8022843C: addiu       $a0, $zero, 0x604
    ctx->r4 = ADD32(0, 0X604);
L_80228440:
    // 0x80228440: jal         0x8006036C
    // 0x80228444: nop

    func_8006036C_3B76C(rdram, ctx);
        goto after_6;
    // 0x80228444: nop

    after_6:
    // 0x80228448: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
L_8022844C:
    // 0x8022844C: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x80228450: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80228454: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80228458: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022845C: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x80228460: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80228464: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80228468: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022846C: jr          $ra
    // 0x80228470: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80228470: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80229DE4_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229DE4: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x80229DE8: bne         $v0, $zero, L_80229DFC
    if (ctx->r2 != 0) {
        // 0x80229DEC: nop
    
            goto L_80229DFC;
    }
    // 0x80229DEC: nop

    // 0x80229DF0: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x80229DF4: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80229DF8: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
L_80229DFC:
    // 0x80229DFC: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80229E00: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
    // 0x80229E04: sh          $v1, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r3;
    // 0x80229E08: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80229E0C: jr          $ra
    // 0x80229E10: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80229E10: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_8022D67C_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D67C: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x8022D680: lw          $v1, 0x320($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X320);
    // 0x8022D684: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x8022D688: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x8022D68C: and         $a2, $v1, $v0
    ctx->r6 = ctx->r3 & ctx->r2;
    // 0x8022D690: beq         $a2, $zero, L_8022D6DC
    if (ctx->r6 == 0) {
        // 0x8022D694: lui         $v0, 0x3800
        ctx->r2 = S32(0X3800 << 16);
            goto L_8022D6DC;
    }
    // 0x8022D694: lui         $v0, 0x3800
    ctx->r2 = S32(0X3800 << 16);
    // 0x8022D698: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x8022D69C: beq         $v0, $zero, L_8022D6DC
    if (ctx->r2 == 0) {
        // 0x8022D6A0: nop
    
            goto L_8022D6DC;
    }
    // 0x8022D6A0: nop

    // 0x8022D6A4: lhu         $v0, 0x6E($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X6E);
    // 0x8022D6A8: lhu         $a0, 0x6E($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X6E);
    // 0x8022D6AC: subu        $v0, $v0, $a2
    ctx->r2 = SUB32(ctx->r2, ctx->r6);
    // 0x8022D6B0: sh          $v0, 0x6E($a1)
    MEM_H(0X6E, ctx->r5) = ctx->r2;
    // 0x8022D6B4: lh          $v1, 0x6E($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X6E);
    // 0x8022D6B8: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022D6BC: sh          $v0, 0x30A($a1)
    MEM_H(0X30A, ctx->r5) = ctx->r2;
    // 0x8022D6C0: bgtz        $v1, L_8022D6D4
    if (SIGNED(ctx->r3) > 0) {
        // 0x8022D6C4: sh          $a0, 0xB2($a1)
        MEM_H(0XB2, ctx->r5) = ctx->r4;
            goto L_8022D6D4;
    }
    // 0x8022D6C4: sh          $a0, 0xB2($a1)
    MEM_H(0XB2, ctx->r5) = ctx->r4;
    // 0x8022D6C8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022D6CC: sb          $v0, 0x8($a1)
    MEM_B(0X8, ctx->r5) = ctx->r2;
    // 0x8022D6D0: sb          $zero, 0x9($a1)
    MEM_B(0X9, ctx->r5) = 0;
L_8022D6D4:
    // 0x8022D6D4: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x8022D6D8: sh          $v0, 0x15E($a1)
    MEM_H(0X15E, ctx->r5) = ctx->r2;
L_8022D6DC:
    // 0x8022D6DC: jr          $ra
    // 0x8022D6E0: nop

    TRACE_RETURN()
    return;
    // 0x8022D6E0: nop

;}
RECOMP_FUNC void func_802303B0_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802303B0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x802303B4: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x802303B8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802303BC: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x802303C0: addiu       $s1, $s0, 0x360
    ctx->r17 = ADD32(ctx->r16, 0X360);
    // 0x802303C4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802303C8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x802303CC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x802303D0: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x802303D4: jal         0x8009A3B4
    // 0x802303D8: sw          $zero, 0x368($s0)
    MEM_W(0X368, ctx->r16) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x802303D8: sw          $zero, 0x368($s0)
    MEM_W(0X368, ctx->r16) = 0;
    after_0:
    // 0x802303DC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802303E0: lhu         $v0, 0x362($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X362);
    // 0x802303E4: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x802303E8: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x802303EC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802303F0: addiu       $v0, $v0, -0x50
    ctx->r2 = ADD32(ctx->r2, -0X50);
    // 0x802303F4: sh          $v0, 0x362($s0)
    MEM_H(0X362, ctx->r16) = ctx->r2;
    // 0x802303F8: addiu       $v0, $s0, 0x368
    ctx->r2 = ADD32(ctx->r16, 0X368);
    // 0x802303FC: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x80230400: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80230404: lw          $v1, 0x378($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X378);
    // 0x80230408: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x8023040C: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x80230410: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80230414: lui         $v0, 0x408
    ctx->r2 = S32(0X408 << 16);
    // 0x80230418: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8023041C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80230420: jal         0x80051E18
    // 0x80230424: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_1;
    // 0x80230424: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_1:
    // 0x80230428: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x8023042C: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80230430: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80230434: jr          $ra
    // 0x80230438: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80230438: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80236B1C_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236B1C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80236B20: lhu         $v1, -0x3AA4($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X3AA4);
    // 0x80236B24: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80236B28: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80236B2C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80236B30: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80236B34: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x80236B38: addiu       $v0, $zero, 0x6F
    ctx->r2 = ADD32(0, 0X6F);
    // 0x80236B3C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80236B40: bne         $v1, $v0, L_80236B64
    if (ctx->r3 != ctx->r2) {
        // 0x80236B44: sw          $s2, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r18;
            goto L_80236B64;
    }
    // 0x80236B44: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80236B48: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80236B4C: j           L_80236BF4
    // 0x80236B50: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_80236BF4;
    // 0x80236B50: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80236B54:
    // 0x80236B54: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80236B58: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80236B5C: j           L_80236BF4
    // 0x80236B60: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
        goto L_80236BF4;
    // 0x80236B60: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_80236B64:
    // 0x80236B64: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80236B68: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x80236B6C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80236B70: lhu         $v0, 0x49C4($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X49C4);
    // 0x80236B74: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80236B78: sra         $v0, $v0, 25
    ctx->r2 = S32(SIGNED(ctx->r2) >> 25);
    // 0x80236B7C: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x80236B80: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80236B84: lhu         $v0, 0x49C8($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X49C8);
    // 0x80236B88: lui         $s2, 0x8024
    ctx->r18 = S32(0X8024 << 16);
    // 0x80236B8C: addiu       $s2, $s2, -0x5CFC
    ctx->r18 = ADD32(ctx->r18, -0X5CFC);
    // 0x80236B90: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80236B94: sra         $v0, $v0, 25
    ctx->r2 = S32(SIGNED(ctx->r2) >> 25);
    // 0x80236B98: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x80236B9C: sll         $v0, $s1, 24
    ctx->r2 = S32(ctx->r17 << 24);
L_80236BA0:
    // 0x80236BA0: sra         $v0, $v0, 22
    ctx->r2 = S32(SIGNED(ctx->r2) >> 22);
    // 0x80236BA4: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x80236BA8: sb          $s1, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r17;
    // 0x80236BAC: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80236BB0: jalr        $v0
    // 0x80236BB4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80236BB4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80236BB8: beq         $v0, $zero, L_80236BDC
    if (ctx->r2 == 0) {
        // 0x80236BBC: addiu       $v0, $s1, 0x1
        ctx->r2 = ADD32(ctx->r17, 0X1);
            goto L_80236BDC;
    }
    // 0x80236BBC: addiu       $v0, $s1, 0x1
    ctx->r2 = ADD32(ctx->r17, 0X1);
    // 0x80236BC0: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80236BC4: lhu         $v0, -0x3AA4($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3AA4);
    // 0x80236BC8: lb          $v1, 0xC($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XC);
    // 0x80236BCC: srav        $v0, $v0, $v1
    ctx->r2 = S32(SIGNED(ctx->r2) >> (ctx->r3 & 31));
    // 0x80236BD0: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80236BD4: beq         $v0, $zero, L_80236B54
    if (ctx->r2 == 0) {
        // 0x80236BD8: addiu       $v0, $s1, 0x1
        ctx->r2 = ADD32(ctx->r17, 0X1);
            goto L_80236B54;
    }
    // 0x80236BD8: addiu       $v0, $s1, 0x1
    ctx->r2 = ADD32(ctx->r17, 0X1);
L_80236BDC:
    // 0x80236BDC: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80236BE0: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80236BE4: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80236BE8: slti        $v0, $v0, 0x7
    ctx->r2 = SIGNED(ctx->r2) < 0X7 ? 1 : 0;
    // 0x80236BEC: bne         $v0, $zero, L_80236BA0
    if (ctx->r2 != 0) {
        // 0x80236BF0: sll         $v0, $s1, 24
        ctx->r2 = S32(ctx->r17 << 24);
            goto L_80236BA0;
    }
    // 0x80236BF0: sll         $v0, $s1, 24
    ctx->r2 = S32(ctx->r17 << 24);
L_80236BF4:
    // 0x80236BF4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80236BF8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80236BFC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80236C00: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80236C04: jr          $ra
    // 0x80236C08: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80236C08: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802298A0_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802298A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802298A4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802298A8: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x802298AC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802298B0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802298B4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802298B8: lw          $v0, -0x66B0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X66B0);
    // 0x802298BC: jalr        $v0
    // 0x802298C0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802298C0: nop

    after_0:
    // 0x802298C4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802298C8: jr          $ra
    // 0x802298CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802298CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226B0C_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226B0C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80226B10: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226B14: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226B18: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80226B1C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80226B20: lw          $v0, 0x50($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X50);
    // 0x80226B24: addiu       $s1, $s0, 0x18
    ctx->r17 = ADD32(ctx->r16, 0X18);
    // 0x80226B28: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80226B2C: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
    // 0x80226B30: jal         0x8002C654
    // 0x80226B34: sw          $v0, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->r2;
    func_8002C654_7A54(rdram, ctx);
        goto after_0;
    // 0x80226B34: sw          $v0, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->r2;
    after_0:
    // 0x80226B38: lw          $a0, 0x50($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X50);
    // 0x80226B3C: jal         0x800319B4
    // 0x80226B40: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_800319B4_CDB4(rdram, ctx);
        goto after_1;
    // 0x80226B40: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
    // 0x80226B44: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x80226B48: addiu       $a1, $a1, -0x6C10
    ctx->r5 = ADD32(ctx->r5, -0X6C10);
    // 0x80226B4C: jal         0x80031DA8
    // 0x80226B50: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80031DA8_D1A8(rdram, ctx);
        goto after_2;
    // 0x80226B50: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
    // 0x80226B54: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80226B58: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80226B5C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226B60: jr          $ra
    // 0x80226B64: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80226B64: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80225964_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225964: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80225968: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x8022596C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80225970: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80225974: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80225978: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022597C: bne         $v0, $zero, L_80225A4C
    if (ctx->r2 != 0) {
        // 0x80225980: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_80225A4C;
    }
    // 0x80225980: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225984: lbu         $v1, 0x5($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X5);
    // 0x80225988: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022598C: beq         $v1, $v0, L_802259CC
    if (ctx->r3 == ctx->r2) {
        // 0x80225990: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_802259CC;
    }
    // 0x80225990: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80225994: beql        $v0, $zero, L_802259AC
    if (ctx->r2 == 0) {
        // 0x80225998: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802259AC;
    }
    goto skip_0;
    // 0x80225998: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022599C: beq         $v1, $zero, L_802259BC
    if (ctx->r3 == 0) {
        // 0x802259A0: nop
    
            goto L_802259BC;
    }
    // 0x802259A0: nop

    // 0x802259A4: j           L_80225A4C
    // 0x802259A8: nop

        goto L_80225A4C;
    // 0x802259A8: nop

L_802259AC:
    // 0x802259AC: beq         $v1, $v0, L_80225A20
    if (ctx->r3 == ctx->r2) {
        // 0x802259B0: addiu       $a0, $zero, 0x56
        ctx->r4 = ADD32(0, 0X56);
            goto L_80225A20;
    }
    // 0x802259B0: addiu       $a0, $zero, 0x56
    ctx->r4 = ADD32(0, 0X56);
    // 0x802259B4: j           L_80225A4C
    // 0x802259B8: nop

        goto L_80225A4C;
    // 0x802259B8: nop

L_802259BC:
    // 0x802259BC: jal         0x8004F488
    // 0x802259C0: lw          $a0, 0x24($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X24);
    func_8004F488_2A888(rdram, ctx);
        goto after_0;
    // 0x802259C0: lw          $a0, 0x24($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X24);
    after_0:
    // 0x802259C4: j           L_80225A10
    // 0x802259C8: nop

        goto L_80225A10;
    // 0x802259C8: nop

L_802259CC:
    // 0x802259CC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802259D0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802259D4: jal         0x80036B00
    // 0x802259D8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80036B00_11F00(rdram, ctx);
        goto after_1;
    // 0x802259D8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x802259DC: jal         0x80054578
    // 0x802259E0: nop

    func_80054578_2F978(rdram, ctx);
        goto after_2;
    // 0x802259E0: nop

    after_2:
    // 0x802259E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802259E8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802259EC: jal         0x80034844
    // 0x802259F0: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    func_80034844_FC44(rdram, ctx);
        goto after_3;
    // 0x802259F0: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    after_3:
    // 0x802259F4: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x802259F8: addiu       $s0, $s0, 0x49B0
    ctx->r16 = ADD32(ctx->r16, 0X49B0);
    // 0x802259FC: jal         0x80070050
    // 0x80225A00: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80070050_4B450(rdram, ctx);
        goto after_4;
    // 0x80225A00: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80225A04: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80225A08: ori         $v0, $v0, 0x3
    ctx->r2 = ctx->r2 | 0X3;
    // 0x80225A0C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
L_80225A10:
    // 0x80225A10: lbu         $v0, 0x5($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X5);
    // 0x80225A14: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225A18: j           L_80225A4C
    // 0x80225A1C: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
        goto L_80225A4C;
    // 0x80225A1C: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
L_80225A20:
    // 0x80225A20: jal         0x8004CB2C
    // 0x80225A24: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_5;
    // 0x80225A24: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_5:
    // 0x80225A28: jal         0x8006036C
    // 0x80225A2C: addiu       $a0, $zero, 0x529
    ctx->r4 = ADD32(0, 0X529);
    func_8006036C_3B76C(rdram, ctx);
        goto after_6;
    // 0x80225A2C: addiu       $a0, $zero, 0x529
    ctx->r4 = ADD32(0, 0X529);
    after_6:
    // 0x80225A30: jal         0x80060D38
    // 0x80225A34: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    func_80060D38_3C138(rdram, ctx);
        goto after_7;
    // 0x80225A34: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    after_7:
    // 0x80225A38: jal         0x80036B58
    // 0x80225A3C: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    func_80036B58_11F58(rdram, ctx);
        goto after_8;
    // 0x80225A3C: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    after_8:
    // 0x80225A40: sb          $zero, 0x0($s1)
    MEM_B(0X0, ctx->r17) = 0;
    // 0x80225A44: jal         0x80036E48
    // 0x80225A48: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_80036E48_12248(rdram, ctx);
        goto after_9;
    // 0x80225A48: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_9:
L_80225A4C:
    // 0x80225A4C: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80225A50: beq         $v0, $zero, L_80225A68
    if (ctx->r2 == 0) {
        // 0x80225A54: nop
    
            goto L_80225A68;
    }
    // 0x80225A54: nop

    // 0x80225A58: jal         0x8005FB90
    // 0x80225A5C: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_10;
    // 0x80225A5C: nop

    after_10:
    // 0x80225A60: jal         0x80060018
    // 0x80225A64: nop

    func_80060018_3B418(rdram, ctx);
        goto after_11;
    // 0x80225A64: nop

    after_11:
L_80225A68:
    // 0x80225A68: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80225A6C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80225A70: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225A74: jr          $ra
    // 0x80225A78: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80225A78: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80233020_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233020: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80233024: lhu         $v0, -0x730C($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X730C);
    // 0x80233028: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8023302C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80233030: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80233034: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80233038: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    // 0x8023303C: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80233040: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80233044: bne         $v0, $zero, L_80233060
    if (ctx->r2 != 0) {
        // 0x80233048: sh          $zero, 0x56E($s0)
        MEM_H(0X56E, ctx->r16) = 0;
            goto L_80233060;
    }
    // 0x80233048: sh          $zero, 0x56E($s0)
    MEM_H(0X56E, ctx->r16) = 0;
    // 0x8023304C: lh          $v0, 0xB2($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XB2);
    // 0x80233050: beq         $v0, $zero, L_80233060
    if (ctx->r2 == 0) {
        // 0x80233054: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80233060;
    }
    // 0x80233054: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80233058: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8023305C: sh          $v0, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r2;
L_80233060:
    // 0x80233060: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80233064: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80233068: lui         $a1, 0xFF
    ctx->r5 = S32(0XFF << 16);
    // 0x8023306C: ori         $a1, $a1, 0xFFFF
    ctx->r5 = ctx->r5 | 0XFFFF;
    // 0x80233070: addiu       $v1, $s1, 0x8
    ctx->r3 = ADD32(ctx->r17, 0X8);
L_80233074:
    // 0x80233074: lw          $v0, 0x3C($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X3C);
    // 0x80233078: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8023307C: and         $v0, $v0, $a1
    ctx->r2 = ctx->r2 & ctx->r5;
    // 0x80233080: or          $a2, $a2, $v0
    ctx->r6 = ctx->r6 | ctx->r2;
    // 0x80233084: slti        $v0, $a0, 0x6
    ctx->r2 = SIGNED(ctx->r4) < 0X6 ? 1 : 0;
    // 0x80233088: bne         $v0, $zero, L_80233074
    if (ctx->r2 != 0) {
        // 0x8023308C: addiu       $v1, $v1, 0x8
        ctx->r3 = ADD32(ctx->r3, 0X8);
            goto L_80233074;
    }
    // 0x8023308C: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x80233090: bnel        $a2, $zero, L_802330BC
    if (ctx->r6 != 0) {
        // 0x80233094: addiu       $a0, $zero, 0xA3
        ctx->r4 = ADD32(0, 0XA3);
            goto L_802330BC;
    }
    goto skip_0;
    // 0x80233094: addiu       $a0, $zero, 0xA3
    ctx->r4 = ADD32(0, 0XA3);
    skip_0:
    // 0x80233098: lw          $v1, 0x3C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X3C);
    // 0x8023309C: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x802330A0: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x802330A4: and         $a2, $v1, $v0
    ctx->r6 = ctx->r3 & ctx->r2;
    // 0x802330A8: beq         $a2, $zero, L_80233180
    if (ctx->r6 == 0) {
        // 0x802330AC: nop
    
            goto L_80233180;
    }
    // 0x802330AC: nop

    // 0x802330B0: lh          $v0, 0x90($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X90);
    // 0x802330B4: beq         $v0, $zero, L_802330CC
    if (ctx->r2 == 0) {
        // 0x802330B8: addiu       $a0, $zero, 0xA3
        ctx->r4 = ADD32(0, 0XA3);
            goto L_802330CC;
    }
    // 0x802330B8: addiu       $a0, $zero, 0xA3
    ctx->r4 = ADD32(0, 0XA3);
L_802330BC:
    // 0x802330BC: jal         0x8002A33C
    // 0x802330C0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x802330C0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x802330C4: j           L_80233180
    // 0x802330C8: nop

        goto L_80233180;
    // 0x802330C8: nop

L_802330CC:
    // 0x802330CC: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x802330D0: lhu         $v0, 0x6E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6E);
    // 0x802330D4: lhu         $v1, 0xB2($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XB2);
    // 0x802330D8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x802330DC: subu        $v0, $v0, $a2
    ctx->r2 = SUB32(ctx->r2, ctx->r6);
    // 0x802330E0: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x802330E4: sh          $v0, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r2;
    // 0x802330E8: jal         0x8002A33C
    // 0x802330EC: sh          $v1, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r3;
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x802330EC: sh          $v1, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r3;
    after_1:
    // 0x802330F0: lh          $a0, 0x6E($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X6E);
    // 0x802330F4: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x802330F8: bgtz        $a0, L_8023310C
    if (SIGNED(ctx->r4) > 0) {
        // 0x802330FC: sh          $v0, 0x15E($s0)
        MEM_H(0X15E, ctx->r16) = ctx->r2;
            goto L_8023310C;
    }
    // 0x802330FC: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80233100: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80233104: j           L_8023317C
    // 0x80233108: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
        goto L_8023317C;
    // 0x80233108: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
L_8023310C:
    // 0x8023310C: lh          $v0, 0x92($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X92);
    // 0x80233110: bne         $v0, $zero, L_8023314C
    if (ctx->r2 != 0) {
        // 0x80233114: nop
    
            goto L_8023314C;
    }
    // 0x80233114: nop

    // 0x80233118: lh          $v1, 0xB0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0XB0);
    // 0x8023311C: bltzl       $v1, L_80233124
    if (SIGNED(ctx->r3) < 0) {
        // 0x80233120: addiu       $v1, $v1, 0x3
        ctx->r3 = ADD32(ctx->r3, 0X3);
            goto L_80233124;
    }
    goto skip_1;
    // 0x80233120: addiu       $v1, $v1, 0x3
    ctx->r3 = ADD32(ctx->r3, 0X3);
    skip_1:
L_80233124:
    // 0x80233124: sra         $v1, $v1, 2
    ctx->r3 = S32(SIGNED(ctx->r3) >> 2);
    // 0x80233128: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8023312C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80233130: slt         $v0, $v0, $a0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80233134: bne         $v0, $zero, L_8023314C
    if (ctx->r2 != 0) {
        // 0x80233138: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8023314C;
    }
    // 0x80233138: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8023313C: jal         0x800616FC
    // 0x80233140: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_2;
    // 0x80233140: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    after_2:
    // 0x80233144: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80233148: sh          $v0, 0x92($s1)
    MEM_H(0X92, ctx->r17) = ctx->r2;
L_8023314C:
    // 0x8023314C: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x80233150: lui         $v1, 0x8019
    ctx->r3 = S32(0X8019 << 16);
    // 0x80233154: lw          $v1, 0x3C60($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3C60);
    // 0x80233158: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023315C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80233160: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80233164: lbu         $v0, 0x9($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X9);
    // 0x80233168: lh          $v1, 0xB2($s0)
    ctx->r3 = MEM_H(ctx->r16, 0XB2);
    // 0x8023316C: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80233170: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80233174: bne         $v1, $zero, L_80233180
    if (ctx->r3 != 0) {
        // 0x80233178: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80233180;
    }
    // 0x80233178: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8023317C:
    // 0x8023317C: sh          $v0, 0x8E($s1)
    MEM_H(0X8E, ctx->r17) = ctx->r2;
L_80233180:
    // 0x80233180: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80233184: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80233188: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8023318C: jr          $ra
    // 0x80233190: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80233190: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_802273AC_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802273AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802273B0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802273B4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802273B8: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x802273BC: addiu       $a0, $a0, -0x3BC8
    ctx->r4 = ADD32(ctx->r4, -0X3BC8);
    // 0x802273C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802273C4: lb          $v0, 0x0($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X0);
    // 0x802273C8: xori        $v1, $v0, 0xE
    ctx->r3 = ctx->r2 ^ 0XE;
    // 0x802273CC: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x802273D0: xori        $v0, $v0, 0x14
    ctx->r2 = ctx->r2 ^ 0X14;
    // 0x802273D4: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x802273D8: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x802273DC: bne         $v1, $zero, L_802273F8
    if (ctx->r3 != 0) {
        // 0x802273E0: lui         $v1, 0xFFFF
        ctx->r3 = S32(0XFFFF << 16);
            goto L_802273F8;
    }
    // 0x802273E0: lui         $v1, 0xFFFF
    ctx->r3 = S32(0XFFFF << 16);
    // 0x802273E4: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x802273E8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x802273EC: lui         $v1, 0x1300
    ctx->r3 = S32(0X1300 << 16);
    // 0x802273F0: bne         $v0, $v1, L_80227444
    if (ctx->r2 != ctx->r3) {
        // 0x802273F4: nop
    
            goto L_80227444;
    }
    // 0x802273F4: nop

L_802273F8:
    // 0x802273F8: lb          $v1, 0xD($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XD);
    // 0x802273FC: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x80227400: beq         $v1, $v0, L_80227430
    if (ctx->r3 == ctx->r2) {
        // 0x80227404: nop
    
            goto L_80227430;
    }
    // 0x80227404: nop

    // 0x80227408: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x8022740C: lbu         $a0, 0xD($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XD);
    // 0x80227410: lhu         $v1, 0x3A($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X3A);
    // 0x80227414: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80227418: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8022741C: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x80227420: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80227424: sh          $v1, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r3;
    // 0x80227428: j           L_80227554
    // 0x8022742C: sb          $a0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r4;
        goto L_80227554;
    // 0x8022742C: sb          $a0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r4;
L_80227430:
    // 0x80227430: jal         0x80036E48
    // 0x80227434: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_80036E48_12248(rdram, ctx);
        goto after_0;
    // 0x80227434: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_0:
    // 0x80227438: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022743C: j           L_80227554
    // 0x80227440: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80227554;
    // 0x80227440: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80227444:
    // 0x80227444: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x80227448: lhu         $a0, 0x3A($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X3A);
    // 0x8022744C: lbu         $v1, 0x5($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X5);
    // 0x80227450: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80227454: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80227458: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8022745C: andi        $v1, $v1, 0xF0
    ctx->r3 = ctx->r3 & 0XF0;
    // 0x80227460: bne         $v1, $zero, L_802274F0
    if (ctx->r3 != 0) {
        // 0x80227464: sh          $a0, 0x3A($s0)
        MEM_H(0X3A, ctx->r16) = ctx->r4;
            goto L_802274F0;
    }
    // 0x80227464: sh          $a0, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r4;
    // 0x80227468: lw          $v1, 0x2C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X2C);
    // 0x8022746C: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x80227470: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80227474: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80227478: bltzl       $v0, L_80227480
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022747C: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_80227480;
    }
    goto skip_0;
    // 0x8022747C: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_0:
L_80227480:
    // 0x80227480: slti        $v0, $v0, 0x2E0
    ctx->r2 = SIGNED(ctx->r2) < 0X2E0 ? 1 : 0;
    // 0x80227484: bne         $v0, $zero, L_80227554
    if (ctx->r2 != 0) {
        // 0x80227488: addiu       $v0, $v1, -0x2E0
        ctx->r2 = ADD32(ctx->r3, -0X2E0);
            goto L_80227554;
    }
    // 0x80227488: addiu       $v0, $v1, -0x2E0
    ctx->r2 = ADD32(ctx->r3, -0X2E0);
    // 0x8022748C: sh          $v0, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r2;
    // 0x80227490: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80227494: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80227498: lbu         $v0, 0x4A6D($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4A6D);
    // 0x8022749C: addiu       $a0, $zero, 0x179
    ctx->r4 = ADD32(0, 0X179);
    // 0x802274A0: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    // 0x802274A4: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x802274A8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802274AC: sb          $v0, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r2;
    // 0x802274B0: jal         0x8002A33C
    // 0x802274B4: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x802274B4: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    after_1:
    // 0x802274B8: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x802274BC: lbu         $v1, 0xB($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XB);
    // 0x802274C0: andi        $v0, $v0, 0xF0
    ctx->r2 = ctx->r2 & 0XF0;
    // 0x802274C4: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x802274C8: bne         $v1, $zero, L_802274E0
    if (ctx->r3 != 0) {
        // 0x802274CC: sb          $v0, 0x5($s0)
        MEM_B(0X5, ctx->r16) = ctx->r2;
            goto L_802274E0;
    }
    // 0x802274CC: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
    // 0x802274D0: lhu         $v0, 0x3A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X3A);
    // 0x802274D4: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x802274D8: j           L_80227554
    // 0x802274DC: sh          $v0, -0x3A82($at)
    MEM_H(-0X3A82, ctx->r1) = ctx->r2;
        goto L_80227554;
    // 0x802274DC: sh          $v0, -0x3A82($at)
    MEM_H(-0X3A82, ctx->r1) = ctx->r2;
L_802274E0:
    // 0x802274E0: lhu         $v0, 0x3A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X3A);
    // 0x802274E4: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x802274E8: j           L_80227554
    // 0x802274EC: sh          $v0, -0x3A80($at)
    MEM_H(-0X3A80, ctx->r1) = ctx->r2;
        goto L_80227554;
    // 0x802274EC: sh          $v0, -0x3A80($at)
    MEM_H(-0X3A80, ctx->r1) = ctx->r2;
L_802274F0:
    // 0x802274F0: lw          $v1, 0x2C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X2C);
    // 0x802274F4: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x802274F8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802274FC: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80227500: bne         $v0, $zero, L_80227554
    if (ctx->r2 != 0) {
        // 0x80227504: addiu       $v0, $a0, 0x10
        ctx->r2 = ADD32(ctx->r4, 0X10);
            goto L_80227554;
    }
    // 0x80227504: addiu       $v0, $a0, 0x10
    ctx->r2 = ADD32(ctx->r4, 0X10);
    // 0x80227508: subu        $v1, $a0, $v1
    ctx->r3 = SUB32(ctx->r4, ctx->r3);
    // 0x8022750C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80227510: sh          $v0, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r2;
    // 0x80227514: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80227518: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022751C: lbu         $v0, 0x4A6D($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4A6D);
    // 0x80227520: addiu       $a0, $zero, 0x179
    ctx->r4 = ADD32(0, 0X179);
    // 0x80227524: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    // 0x80227528: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x8022752C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227530: sb          $v0, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r2;
    // 0x80227534: jal         0x8002A33C
    // 0x80227538: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x80227538: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    after_2:
    // 0x8022753C: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x80227540: andi        $v0, $v0, 0xF0
    ctx->r2 = ctx->r2 & 0XF0;
    // 0x80227544: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80227548: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
    // 0x8022754C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80227550: sh          $zero, -0x3A7E($at)
    MEM_H(-0X3A7E, ctx->r1) = 0;
L_80227554:
    // 0x80227554: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227558: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022755C: jr          $ra
    // 0x80227560: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227560: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022F010_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F010: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022F014: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022F018: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F01C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022F020: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022F024: lh          $a3, 0x382($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X382);
    // 0x8022F028: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022F02C: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022F030: jal         0x8004F820
    // 0x8022F034: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022F034: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x8022F038: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022F03C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022F040: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022F044: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022F048: bne         $v0, $zero, L_8022F09C
    if (ctx->r2 != 0) {
        // 0x8022F04C: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_8022F09C;
    }
    // 0x8022F04C: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022F050: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F054: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022F058: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022F05C: lbu         $v0, 0xCA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XCA);
    // 0x8022F060: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022F064: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022F068: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022F06C: jal         0x80050294
    // 0x8022F070: sb          $v0, 0xCA($s0)
    MEM_B(0XCA, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x8022F070: sb          $v0, 0xCA($s0)
    MEM_B(0XCA, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022F074: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x8022F078: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x8022F07C: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x8022F080: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022F084: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022F088: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8022F08C: lbu         $v1, 0xB($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0XB);
    // 0x8022F090: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022F094: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022F098: sh          $v1, 0xC8($s0)
    MEM_H(0XC8, ctx->r16) = ctx->r3;
L_8022F09C:
    // 0x8022F09C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022F0A0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022F0A4: jr          $ra
    // 0x8022F0A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022F0A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80231790_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231790: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80231794: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80231798: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023179C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802317A0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802317A4: lbu         $v1, 0xB($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XB);
    // 0x802317A8: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x802317AC: beq         $v0, $zero, L_802318F4
    if (ctx->r2 == 0) {
        // 0x802317B0: addiu       $s1, $s0, 0x328
        ctx->r17 = ADD32(ctx->r16, 0X328);
            goto L_802318F4;
    }
    // 0x802317B0: addiu       $s1, $s0, 0x328
    ctx->r17 = ADD32(ctx->r16, 0X328);
    // 0x802317B4: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x802317B8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802317BC: addu        $at, $at, $v0
    gpr jr_addend_802317C4 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802317C0: lw          $v0, -0x5AF0($at)
    ctx->r2 = ADD32(ctx->r1, -0X5AF0);
    // 0x802317C4: jr          $v0
    // 0x802317C8: nop

    switch (jr_addend_802317C4 >> 2) {
        case 0: goto L_802317CC; break;
        case 1: goto L_802317E0; break;
        case 2: goto L_80231828; break;
        case 3: goto L_80231870; break;
        case 4: goto L_802318B4; break;
        default: switch_error(__func__, 0x802317C4, 0x8023A510);
    }
    // 0x802317C8: nop

L_802317CC:
    // 0x802317CC: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x802317D0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802317D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802317D8: j           L_802318F4
    // 0x802317DC: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
        goto L_802318F4;
    // 0x802317DC: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
L_802317E0:
    // 0x802317E0: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x802317E4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802317E8: bne         $v1, $v0, L_802318F4
    if (ctx->r3 != ctx->r2) {
        // 0x802317EC: addiu       $a0, $zero, 0x194
        ctx->r4 = ADD32(0, 0X194);
            goto L_802318F4;
    }
    // 0x802317EC: addiu       $a0, $zero, 0x194
    ctx->r4 = ADD32(0, 0X194);
    // 0x802317F0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x802317F4: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x802317F8: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x802317FC: addiu       $v0, $zero, -0x400
    ctx->r2 = ADD32(0, -0X400);
    // 0x80231800: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x80231804: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80231808: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
    // 0x8023180C: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x80231810: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80231814: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80231818: jal         0x8002A33C
    // 0x8023181C: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x8023181C: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    after_0:
    // 0x80231820: j           L_802318F4
    // 0x80231824: nop

        goto L_802318F4;
    // 0x80231824: nop

L_80231828:
    // 0x80231828: lhu         $v0, 0x8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8);
    // 0x8023182C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80231830: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
    // 0x80231834: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80231838: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x8023183C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80231840: jal         0x8004DA90
    // 0x80231844: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x80231844: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x80231848: lhu         $v0, 0x46($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X46);
    // 0x8023184C: addiu       $v0, $v0, 0x40
    ctx->r2 = ADD32(ctx->r2, 0X40);
    // 0x80231850: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x80231854: lh          $v0, 0x8($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X8);
    // 0x80231858: bne         $v0, $zero, L_802318F4
    if (ctx->r2 != 0) {
        // 0x8023185C: addiu       $v0, $zero, 0xE
        ctx->r2 = ADD32(0, 0XE);
            goto L_802318F4;
    }
    // 0x8023185C: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x80231860: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80231864: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80231868: j           L_802318F4
    // 0x8023186C: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
        goto L_802318F4;
    // 0x8023186C: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
L_80231870:
    // 0x80231870: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80231874: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80231878: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023187C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80231880: jal         0x8004DA90
    // 0x80231884: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x80231884: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    after_2:
    // 0x80231888: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x8023188C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80231890: bne         $v1, $v0, L_802318F4
    if (ctx->r3 != ctx->r2) {
        // 0x80231894: addiu       $v0, $zero, 0x180
        ctx->r2 = ADD32(0, 0X180);
            goto L_802318F4;
    }
    // 0x80231894: addiu       $v0, $zero, 0x180
    ctx->r2 = ADD32(0, 0X180);
    // 0x80231898: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8023189C: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x802318A0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802318A4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802318A8: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x802318AC: j           L_802318F4
    // 0x802318B0: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
        goto L_802318F4;
    // 0x802318B0: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
L_802318B4:
    // 0x802318B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802318B8: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x802318BC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802318C0: jal         0x8004DA90
    // 0x802318C4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_3;
    // 0x802318C4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_3:
    // 0x802318C8: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x802318CC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802318D0: bne         $v1, $v0, L_802318F4
    if (ctx->r3 != ctx->r2) {
        // 0x802318D4: nop
    
            goto L_802318F4;
    }
    // 0x802318D4: nop

    // 0x802318D8: jal         0x800540B4
    // 0x802318DC: addiu       $a0, $s1, 0x28
    ctx->r4 = ADD32(ctx->r17, 0X28);
    func_800540B4_2F4B4(rdram, ctx);
        goto after_4;
    // 0x802318DC: addiu       $a0, $s1, 0x28
    ctx->r4 = ADD32(ctx->r17, 0X28);
    after_4:
    // 0x802318E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802318E4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802318E8: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x802318EC: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x802318F0: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_802318F4:
    // 0x802318F4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802318F8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802318FC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80231900: jr          $ra
    // 0x80231904: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80231904: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802277E8_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802277E8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802277EC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802277F0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802277F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802277F8: addiu       $a0, $zero, 0x179
    ctx->r4 = ADD32(0, 0X179);
    // 0x802277FC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80227800: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80227804: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227808: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x8022780C: jal         0x8002A33C
    // 0x80227810: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x80227810: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    after_0:
    // 0x80227814: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80227818: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x8022781C: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x80227820: addiu       $s1, $s1, 0x47B8
    ctx->r17 = ADD32(ctx->r17, 0X47B8);
    // 0x80227824: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x80227828: bnel        $v1, $v0, L_8022785C
    if (ctx->r3 != ctx->r2) {
        // 0x8022782C: addiu       $v0, $zero, 0x14
        ctx->r2 = ADD32(0, 0X14);
            goto L_8022785C;
    }
    goto skip_0;
    // 0x8022782C: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    skip_0:
    // 0x80227830: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x80227834: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227838: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x8022783C: addiu       $v0, $zero, 0xBEC
    ctx->r2 = ADD32(0, 0XBEC);
    // 0x80227840: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227844: sh          $v0, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = ctx->r2;
    // 0x80227848: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022784C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227850: sh          $v0, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = ctx->r2;
    // 0x80227854: j           L_80227918
    // 0x80227858: addiu       $v0, $zero, 0x13FD
    ctx->r2 = ADD32(0, 0X13FD);
        goto L_80227918;
    // 0x80227858: addiu       $v0, $zero, 0x13FD
    ctx->r2 = ADD32(0, 0X13FD);
L_8022785C:
    // 0x8022785C: bne         $v1, $v0, L_80227898
    if (ctx->r3 != ctx->r2) {
        // 0x80227860: addiu       $v0, $zero, 0xB
        ctx->r2 = ADD32(0, 0XB);
            goto L_80227898;
    }
    // 0x80227860: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x80227864: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227868: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x8022786C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80227870: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227874: sb          $v0, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r2;
    // 0x80227878: addiu       $v0, $zero, -0x200
    ctx->r2 = ADD32(0, -0X200);
    // 0x8022787C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227880: sh          $v0, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = ctx->r2;
    // 0x80227884: addiu       $v0, $zero, -0x101
    ctx->r2 = ADD32(0, -0X101);
    // 0x80227888: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022788C: sh          $v0, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = ctx->r2;
    // 0x80227890: j           L_80227920
    // 0x80227894: addiu       $v0, $zero, -0x271
    ctx->r2 = ADD32(0, -0X271);
        goto L_80227920;
    // 0x80227894: addiu       $v0, $zero, -0x271
    ctx->r2 = ADD32(0, -0X271);
L_80227898:
    // 0x80227898: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8022789C: lb          $v0, -0x3B9D($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3B9D);
    // 0x802278A0: beq         $v0, $zero, L_802278F0
    if (ctx->r2 == 0) {
        // 0x802278A4: addiu       $v0, $zero, 0x13
        ctx->r2 = ADD32(0, 0X13);
            goto L_802278F0;
    }
    // 0x802278A4: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
    // 0x802278A8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802278AC: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x802278B0: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x802278B4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802278B8: sb          $v0, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r2;
    // 0x802278BC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802278C0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802278C4: sh          $v0, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = ctx->r2;
    // 0x802278C8: addiu       $v0, $zero, -0x1C0
    ctx->r2 = ADD32(0, -0X1C0);
    // 0x802278CC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802278D0: sh          $v0, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = ctx->r2;
    // 0x802278D4: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x802278D8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802278DC: sh          $zero, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = 0;
    // 0x802278E0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802278E4: sh          $v0, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = ctx->r2;
    // 0x802278E8: j           L_80227934
    // 0x802278EC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
        goto L_80227934;
    // 0x802278EC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_802278F0:
    // 0x802278F0: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x802278F4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802278F8: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x802278FC: addiu       $v0, $zero, -0x1A00
    ctx->r2 = ADD32(0, -0X1A00);
    // 0x80227900: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227904: sh          $v0, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = ctx->r2;
    // 0x80227908: addiu       $v0, $zero, -0x601
    ctx->r2 = ADD32(0, -0X601);
    // 0x8022790C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227910: sh          $v0, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = ctx->r2;
    // 0x80227914: addiu       $v0, $zero, 0x17E0
    ctx->r2 = ADD32(0, 0X17E0);
L_80227918:
    // 0x80227918: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022791C: sb          $zero, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = 0;
L_80227920:
    // 0x80227920: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227924: sh          $v0, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = ctx->r2;
    // 0x80227928: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022792C: sh          $zero, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = 0;
    // 0x80227930: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_80227934:
    // 0x80227934: sb          $v0, 0x19($s1)
    MEM_B(0X19, ctx->r17) = ctx->r2;
    // 0x80227938: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022793C: sb          $zero, 0x15($s1)
    MEM_B(0X15, ctx->r17) = 0;
    // 0x80227940: sb          $v0, 0x18($s1)
    MEM_B(0X18, ctx->r17) = ctx->r2;
    // 0x80227944: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80227948: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022794C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80227950: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80227954: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227958: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022795C: jr          $ra
    // 0x80227960: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80227960: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802284DC_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802284DC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x802284E0: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x802284E4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802284E8: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x802284EC: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x802284F0: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802284F4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802284F8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802284FC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80228500: lw          $v0, -0x6B44($at)
    ctx->r2 = MEM_W(ctx->r1, -0X6B44);
    // 0x80228504: jalr        $v0
    // 0x80228508: addiu       $s1, $s0, 0x18
    ctx->r17 = ADD32(ctx->r16, 0X18);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80228508: addiu       $s1, $s0, 0x18
    ctx->r17 = ADD32(ctx->r16, 0X18);
    after_0:
    // 0x8022850C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80228510: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80228514: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x80228518: sh          $zero, 0x10($sp)
    MEM_H(0X10, ctx->r29) = 0;
    // 0x8022851C: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x80228520: jal         0x80031600
    // 0x80228524: sh          $zero, 0x14($sp)
    MEM_H(0X14, ctx->r29) = 0;
    func_80031600_CA00(rdram, ctx);
        goto after_1;
    // 0x80228524: sh          $zero, 0x14($sp)
    MEM_H(0X14, ctx->r29) = 0;
    after_1:
    // 0x80228528: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x8022852C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80228530: lw          $v1, 0x2C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X2C);
    // 0x80228534: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80228538: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x8022853C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80228540: jal         0x80031DA8
    // 0x80228544: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_2;
    // 0x80228544: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_2:
    // 0x80228548: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x8022854C: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80228550: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80228554: jr          $ra
    // 0x80228558: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80228558: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8022C0DC_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C0DC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022C0E0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022C0E4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C0E8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022C0EC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022C0F0: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022C0F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C0F8: beq         $v1, $v0, L_8022C1E4
    if (ctx->r3 == ctx->r2) {
        // 0x8022C0FC: addiu       $s1, $s0, 0x328
        ctx->r17 = ADD32(ctx->r16, 0X328);
            goto L_8022C1E4;
    }
    // 0x8022C0FC: addiu       $s1, $s0, 0x328
    ctx->r17 = ADD32(ctx->r16, 0X328);
    // 0x8022C100: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022C104: beql        $v0, $zero, L_8022C11C
    if (ctx->r2 == 0) {
        // 0x8022C108: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022C11C;
    }
    goto skip_0;
    // 0x8022C108: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022C10C: beq         $v1, $zero, L_8022C134
    if (ctx->r3 == 0) {
        // 0x8022C110: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022C134;
    }
    // 0x8022C110: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C114: j           L_8022C360
    // 0x8022C118: nop

        goto L_8022C360;
    // 0x8022C118: nop

L_8022C11C:
    // 0x8022C11C: beq         $v1, $v0, L_8022C1F4
    if (ctx->r3 == ctx->r2) {
        // 0x8022C120: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022C1F4;
    }
    // 0x8022C120: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022C124: beq         $v1, $v0, L_8022C310
    if (ctx->r3 == ctx->r2) {
        // 0x8022C128: nop
    
            goto L_8022C310;
    }
    // 0x8022C128: nop

    // 0x8022C12C: j           L_8022C360
    // 0x8022C130: nop

        goto L_8022C360;
    // 0x8022C130: nop

L_8022C134:
    // 0x8022C134: lhu         $v1, 0x328($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X328);
    // 0x8022C138: lbu         $a0, 0x3($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X3);
    // 0x8022C13C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022C140: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x8022C144: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022C148: sh          $zero, 0x330($s0)
    MEM_H(0X330, ctx->r16) = 0;
    // 0x8022C14C: andi        $v1, $v1, 0xFFF7
    ctx->r3 = ctx->r3 & 0XFFF7;
    // 0x8022C150: andi        $a0, $a0, 0x40
    ctx->r4 = ctx->r4 & 0X40;
    // 0x8022C154: beq         $a0, $zero, L_8022C1B0
    if (ctx->r4 == 0) {
        // 0x8022C158: sh          $v1, 0x328($s0)
        MEM_H(0X328, ctx->r16) = ctx->r3;
            goto L_8022C1B0;
    }
    // 0x8022C158: sh          $v1, 0x328($s0)
    MEM_H(0X328, ctx->r16) = ctx->r3;
    // 0x8022C15C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022C160: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022C164: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022C168: addiu       $v0, $v0, -0x64D4
    ctx->r2 = ADD32(ctx->r2, -0X64D4);
    // 0x8022C16C: sw          $v0, 0x364($s0)
    MEM_W(0X364, ctx->r16) = ctx->r2;
    // 0x8022C170: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x8022C174: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x8022C178: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x8022C17C: lw          $a1, 0x298($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X298);
    // 0x8022C180: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8022C184: sh          $v0, 0x32A($s0)
    MEM_H(0X32A, ctx->r16) = ctx->r2;
    // 0x8022C188: lh          $v0, 0x32E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X32E);
    // 0x8022C18C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8022C190: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x8022C194: sh          $a0, 0x32C($s0)
    MEM_H(0X32C, ctx->r16) = ctx->r4;
    // 0x8022C198: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x8022C19C: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8022C1A0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022C1A4: lbu         $v0, 0xB($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XB);
    // 0x8022C1A8: j           L_8022C1CC
    // 0x8022C1AC: sh          $v0, 0x330($s0)
    MEM_H(0X330, ctx->r16) = ctx->r2;
        goto L_8022C1CC;
    // 0x8022C1AC: sh          $v0, 0x330($s0)
    MEM_H(0X330, ctx->r16) = ctx->r2;
L_8022C1B0:
    // 0x8022C1B0: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022C1B4: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022C1B8: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022C1BC: addiu       $v0, $v0, -0x64E0
    ctx->r2 = ADD32(ctx->r2, -0X64E0);
    // 0x8022C1C0: sw          $v0, 0x364($s0)
    MEM_W(0X364, ctx->r16) = ctx->r2;
    // 0x8022C1C4: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x8022C1C8: sh          $v0, 0x32C($s0)
    MEM_H(0X32C, ctx->r16) = ctx->r2;
L_8022C1CC:
    // 0x8022C1CC: lh          $v0, 0x6E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X6E);
    // 0x8022C1D0: bgtz        $v0, L_8022C1E4
    if (SIGNED(ctx->r2) > 0) {
        // 0x8022C1D4: nop
    
            goto L_8022C1E4;
    }
    // 0x8022C1D4: nop

    // 0x8022C1D8: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022C1DC: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x8022C1E0: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8022C1E4:
    // 0x8022C1E4: lh          $v0, 0x4($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X4);
    // 0x8022C1E8: bgez        $v0, L_8022C1F4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022C1EC: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022C1F4;
    }
    // 0x8022C1EC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022C1F0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022C1F4:
    // 0x8022C1F4: lhu         $v1, 0x4($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X4);
    // 0x8022C1F8: lw          $a2, 0x3C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X3C);
    // 0x8022C1FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C200: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8022C204: sh          $v1, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r3;
    // 0x8022C208: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8022C20C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022C210: lhu         $a1, 0x44($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X44);
    // 0x8022C214: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x8022C218: lbu         $v0, 0x1($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1);
    // 0x8022C21C: sll         $a1, $a1, 20
    ctx->r5 = S32(ctx->r5 << 20);
    // 0x8022C220: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8022C224: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022C228: sll         $a2, $v0, 23
    ctx->r6 = S32(ctx->r2 << 23);
    // 0x8022C22C: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8022C230: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022C234: jal         0x8004DA90
    // 0x8022C238: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x8022C238: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022C23C: jal         0x80040F30
    // 0x8022C240: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_1;
    // 0x8022C240: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022C244: beq         $v0, $zero, L_8022C360
    if (ctx->r2 == 0) {
        // 0x8022C248: sw          $v0, 0x48($s1)
        MEM_W(0X48, ctx->r17) = ctx->r2;
            goto L_8022C360;
    }
    // 0x8022C248: sw          $v0, 0x48($s1)
    MEM_W(0X48, ctx->r17) = ctx->r2;
    // 0x8022C24C: andi        $v0, $v0, 0xF00
    ctx->r2 = ctx->r2 & 0XF00;
    // 0x8022C250: bnel        $v0, $zero, L_8022C258
    if (ctx->r2 != 0) {
        // 0x8022C254: sh          $zero, 0x44($s0)
        MEM_H(0X44, ctx->r16) = 0;
            goto L_8022C258;
    }
    goto skip_1;
    // 0x8022C254: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    skip_1:
L_8022C258:
    // 0x8022C258: lw          $v0, 0x48($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X48);
    // 0x8022C25C: andi        $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 & 0X1000;
    // 0x8022C260: beq         $v0, $zero, L_8022C360
    if (ctx->r2 == 0) {
        // 0x8022C264: addiu       $a0, $zero, 0xDE
        ctx->r4 = ADD32(0, 0XDE);
            goto L_8022C360;
    }
    // 0x8022C264: addiu       $a0, $zero, 0xDE
    ctx->r4 = ADD32(0, 0XDE);
    // 0x8022C268: jal         0x8002A33C
    // 0x8022C26C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x8022C26C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_2:
    // 0x8022C270: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8022C274: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x8022C278: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x8022C27C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022C280: sltiu       $v0, $v0, 0xA
    ctx->r2 = ctx->r2 < 0XA ? 1 : 0;
    // 0x8022C284: beq         $v0, $zero, L_8022C2DC
    if (ctx->r2 == 0) {
        // 0x8022C288: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_8022C2DC;
    }
    // 0x8022C288: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8022C28C: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022C290: lbu         $a0, 0x3($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X3);
    // 0x8022C294: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x8022C298: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022C29C: andi        $a0, $a0, 0x40
    ctx->r4 = ctx->r4 & 0X40;
    // 0x8022C2A0: beq         $a0, $zero, L_8022C2B0
    if (ctx->r4 == 0) {
        // 0x8022C2A4: sb          $v0, 0xAC($s0)
        MEM_B(0XAC, ctx->r16) = ctx->r2;
            goto L_8022C2B0;
    }
    // 0x8022C2A4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022C2A8: j           L_8022C2B4
    // 0x8022C2AC: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_8022C2B4;
    // 0x8022C2AC: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_8022C2B0:
    // 0x8022C2B0: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
L_8022C2B4:
    // 0x8022C2B4: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022C2B8: lbu         $v1, 0xB($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XB);
    // 0x8022C2BC: lw          $v0, 0x3C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X3C);
    // 0x8022C2C0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022C2C4: lhu         $v1, 0x0($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X0);
    // 0x8022C2C8: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x8022C2CC: ori         $v1, $v1, 0x8
    ctx->r3 = ctx->r3 | 0X8;
    // 0x8022C2D0: sh          $v1, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r3;
    // 0x8022C2D4: j           L_8022C360
    // 0x8022C2D8: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
        goto L_8022C360;
    // 0x8022C2D8: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_8022C2DC:
    // 0x8022C2DC: lh          $v0, 0x6E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X6E);
    // 0x8022C2E0: bgtz        $v0, L_8022C2F8
    if (SIGNED(ctx->r2) > 0) {
        // 0x8022C2E4: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022C2F8;
    }
    // 0x8022C2E4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022C2E8: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022C2EC: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022C2F0: j           L_8022C360
    // 0x8022C2F4: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
        goto L_8022C360;
    // 0x8022C2F4: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8022C2F8:
    // 0x8022C2F8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022C2FC: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x8022C300: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022C304: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    // 0x8022C308: j           L_8022C360
    // 0x8022C30C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
        goto L_8022C360;
    // 0x8022C30C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_8022C310:
    // 0x8022C310: lhu         $v0, 0x32C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X32C);
    // 0x8022C314: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022C318: sh          $v0, 0x32C($s0)
    MEM_H(0X32C, ctx->r16) = ctx->r2;
    // 0x8022C31C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C320: bgez        $v0, L_8022C338
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022C324: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022C338;
    }
    // 0x8022C324: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022C328: lhu         $v0, 0x328($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X328);
    // 0x8022C32C: ori         $v0, $v0, 0x9
    ctx->r2 = ctx->r2 | 0X9;
    // 0x8022C330: j           L_8022C360
    // 0x8022C334: sh          $v0, 0x328($s0)
    MEM_H(0X328, ctx->r16) = ctx->r2;
        goto L_8022C360;
    // 0x8022C334: sh          $v0, 0x328($s0)
    MEM_H(0X328, ctx->r16) = ctx->r2;
L_8022C338:
    // 0x8022C338: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022C33C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022C340: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022C344: jal         0x8004F820
    // 0x8022C348: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x8022C348: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    after_3:
    // 0x8022C34C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022C350: sh          $v0, 0x36C($s0)
    MEM_H(0X36C, ctx->r16) = ctx->r2;
    // 0x8022C354: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022C358: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022C35C: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
L_8022C360:
    // 0x8022C360: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022C364: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022C368: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022C36C: jr          $ra
    // 0x8022C370: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022C370: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022A6D0_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A6D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022A6D4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022A6D8: jal         0x8004F5C4
    // 0x8022A6DC: nop

    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x8022A6DC: nop

    after_0:
    // 0x8022A6E0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022A6E4: jr          $ra
    // 0x8022A6E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022A6E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022A6EC: nop

;}
RECOMP_FUNC void func_802310C8_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802310C8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802310CC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802310D0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802310D4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802310D8: addiu       $s1, $s0, 0x328
    ctx->r17 = ADD32(ctx->r16, 0X328);
    // 0x802310DC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802310E0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802310E4: jal         0x80231F18
    // 0x802310E8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_80231F18_ovl22(rdram, ctx);
        goto after_0;
    // 0x802310E8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x802310EC: lbu         $v1, 0xB($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XB);
    // 0x802310F0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x802310F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802310F8: beq         $v1, $v0, L_8023113C
    if (ctx->r3 == ctx->r2) {
        // 0x802310FC: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8023113C;
    }
    // 0x802310FC: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80231100: beql        $v0, $zero, L_80231118
    if (ctx->r2 == 0) {
        // 0x80231104: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80231118;
    }
    goto skip_0;
    // 0x80231104: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80231108: beq         $v1, $zero, L_80231128
    if (ctx->r3 == 0) {
        // 0x8023110C: addiu       $v0, $zero, 0x1E
        ctx->r2 = ADD32(0, 0X1E);
            goto L_80231128;
    }
    // 0x8023110C: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x80231110: j           L_8023118C
    // 0x80231114: nop

        goto L_8023118C;
    // 0x80231114: nop

L_80231118:
    // 0x80231118: beq         $v1, $v0, L_8023115C
    if (ctx->r3 == ctx->r2) {
        // 0x8023111C: nop
    
            goto L_8023115C;
    }
    // 0x8023111C: nop

    // 0x80231120: j           L_8023118C
    // 0x80231124: nop

        goto L_8023118C;
    // 0x80231124: nop

L_80231128:
    // 0x80231128: sh          $v0, 0x330($s0)
    MEM_H(0X330, ctx->r16) = ctx->r2;
    // 0x8023112C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80231130: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x80231134: j           L_8023118C
    // 0x80231138: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
        goto L_8023118C;
    // 0x80231138: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
L_8023113C:
    // 0x8023113C: lhu         $v0, 0x330($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X330);
    // 0x80231140: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80231144: sh          $v0, 0x330($s0)
    MEM_H(0X330, ctx->r16) = ctx->r2;
    // 0x80231148: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023114C: bne         $v0, $zero, L_8023118C
    if (ctx->r2 != 0) {
        // 0x80231150: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8023118C;
    }
    // 0x80231150: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80231154: j           L_8023118C
    // 0x80231158: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
        goto L_8023118C;
    // 0x80231158: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
L_8023115C:
    // 0x8023115C: lhu         $v1, 0x32C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X32C);
    // 0x80231160: andi        $v0, $v1, 0x20
    ctx->r2 = ctx->r3 & 0X20;
    // 0x80231164: beq         $v0, $zero, L_80231180
    if (ctx->r2 == 0) {
        // 0x80231168: ori         $v0, $v1, 0x80
        ctx->r2 = ctx->r3 | 0X80;
            goto L_80231180;
    }
    // 0x80231168: ori         $v0, $v1, 0x80
    ctx->r2 = ctx->r3 | 0X80;
    // 0x8023116C: sh          $v0, 0x32C($s0)
    MEM_H(0X32C, ctx->r16) = ctx->r2;
    // 0x80231170: andi        $v0, $a0, 0x2
    ctx->r2 = ctx->r4 & 0X2;
    // 0x80231174: beq         $v0, $zero, L_80231180
    if (ctx->r2 == 0) {
        // 0x80231178: ori         $v0, $v1, 0x180
        ctx->r2 = ctx->r3 | 0X180;
            goto L_80231180;
    }
    // 0x80231178: ori         $v0, $v1, 0x180
    ctx->r2 = ctx->r3 | 0X180;
    // 0x8023117C: sh          $v0, 0x32C($s0)
    MEM_H(0X32C, ctx->r16) = ctx->r2;
L_80231180:
    // 0x80231180: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80231184: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80231188: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_8023118C:
    // 0x8023118C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80231190: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80231194: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80231198: jr          $ra
    // 0x8023119C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023119C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80233B28_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233B28: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
    // 0x80233B2C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80233B30: sb          $v1, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r3;
    // 0x80233B34: sh          $v0, 0x570($a0)
    MEM_H(0X570, ctx->r4) = ctx->r2;
    // 0x80233B38: sh          $zero, 0x48($a0)
    MEM_H(0X48, ctx->r4) = 0;
    // 0x80233B3C: sh          $zero, 0x46($a0)
    MEM_H(0X46, ctx->r4) = 0;
    // 0x80233B40: sh          $zero, 0x44($a0)
    MEM_H(0X44, ctx->r4) = 0;
    // 0x80233B44: sh          $zero, 0x50($a0)
    MEM_H(0X50, ctx->r4) = 0;
    // 0x80233B48: sh          $zero, 0x4E($a0)
    MEM_H(0X4E, ctx->r4) = 0;
    // 0x80233B4C: sh          $zero, 0x4C($a0)
    MEM_H(0X4C, ctx->r4) = 0;
    // 0x80233B50: sb          $v1, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r3;
    // 0x80233B54: jr          $ra
    // 0x80233B58: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    TRACE_RETURN()
    return;
    // 0x80233B58: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
;}
RECOMP_FUNC void func_80230790_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230790: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80230794: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80230798: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023079C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802307A0: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x802307A4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802307A8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802307AC: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x802307B0: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x802307B4: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x802307B8: jal         0x8004F820
    // 0x802307BC: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x802307BC: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    after_0:
    // 0x802307C0: lbu         $v1, 0xA4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA4);
    // 0x802307C4: lhu         $a0, 0x56($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X56);
    // 0x802307C8: sltiu       $a1, $v1, 0x1
    ctx->r5 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x802307CC: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x802307D0: andi        $a0, $a0, 0xFFF
    ctx->r4 = ctx->r4 & 0XFFF;
    // 0x802307D4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802307D8: bne         $v1, $v0, L_802307E4
    if (ctx->r3 != ctx->r2) {
        // 0x802307DC: sh          $a0, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r4;
            goto L_802307E4;
    }
    // 0x802307DC: sh          $a0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r4;
    // 0x802307E0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_802307E4:
    // 0x802307E4: beq         $a1, $zero, L_802307F4
    if (ctx->r5 == 0) {
        // 0x802307E8: addiu       $a0, $zero, 0x196
        ctx->r4 = ADD32(0, 0X196);
            goto L_802307F4;
    }
    // 0x802307E8: addiu       $a0, $zero, 0x196
    ctx->r4 = ADD32(0, 0X196);
    // 0x802307EC: jal         0x8002A33C
    // 0x802307F0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x802307F0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
L_802307F4:
    // 0x802307F4: lhu         $v0, 0x380($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X380);
    // 0x802307F8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802307FC: sh          $v0, 0x380($s0)
    MEM_H(0X380, ctx->r16) = ctx->r2;
    // 0x80230800: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x80230804: bne         $v0, $zero, L_80230854
    if (ctx->r2 != 0) {
        // 0x80230808: addiu       $v0, $zero, 0x3C
        ctx->r2 = ADD32(0, 0X3C);
            goto L_80230854;
    }
    // 0x80230808: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x8023080C: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x80230810: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80230814: lw          $a0, 0x298($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X298);
    // 0x80230818: sh          $v0, 0x380($s0)
    MEM_H(0X380, ctx->r16) = ctx->r2;
    // 0x8023081C: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80230820: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80230824: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80230828: sh          $zero, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = 0;
    // 0x8023082C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80230830: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80230834: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x80230838: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8023083C: lbu         $v1, 0xA($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0XA);
    // 0x80230840: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80230844: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80230848: lui         $v0, 0x100
    ctx->r2 = S32(0X100 << 16);
    // 0x8023084C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80230850: sw          $v1, 0x378($s0)
    MEM_W(0X378, ctx->r16) = ctx->r3;
L_80230854:
    // 0x80230854: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80230858: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023085C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80230860: jr          $ra
    // 0x80230864: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80230864: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80225B8C_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225B8C: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80225B90: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x80225B94: bne         $v1, $v0, L_80225BA8
    if (ctx->r3 != ctx->r2) {
        // 0x80225B98: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80225BA8;
    }
    // 0x80225B98: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80225B9C: lw          $v1, 0x24($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X24);
    // 0x80225BA0: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80225BA4: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
L_80225BA8:
    // 0x80225BA8: jr          $ra
    // 0x80225BAC: nop

    TRACE_RETURN()
    return;
    // 0x80225BAC: nop

;}
RECOMP_FUNC void func_80234618_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234618: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8023461C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80234620: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80234624: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80234628: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x8023462C: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80234630: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80234634: jal         0x80040F30
    // 0x80234638: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_80040F30_1C330(rdram, ctx);
        goto after_0;
    // 0x80234638: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x8023463C: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x80234640: beq         $s2, $zero, L_802347B0
    if (ctx->r18 == 0) {
        // 0x80234644: andi        $v0, $s2, 0x1000
        ctx->r2 = ctx->r18 & 0X1000;
            goto L_802347B0;
    }
    // 0x80234644: andi        $v0, $s2, 0x1000
    ctx->r2 = ctx->r18 & 0X1000;
    // 0x80234648: beq         $v0, $zero, L_80234748
    if (ctx->r2 == 0) {
        // 0x8023464C: addiu       $v0, $zero, 0xB
        ctx->r2 = ADD32(0, 0XB);
            goto L_80234748;
    }
    // 0x8023464C: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x80234650: lh          $v0, 0x46($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X46);
    // 0x80234654: bltzl       $v0, L_80234670
    if (SIGNED(ctx->r2) < 0) {
        // 0x80234658: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_80234670;
    }
    goto skip_0;
    // 0x80234658: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_0:
    // 0x8023465C: slti        $v0, $v0, 0xA01
    ctx->r2 = SIGNED(ctx->r2) < 0XA01 ? 1 : 0;
    // 0x80234660: bnel        $v0, $zero, L_80234680
    if (ctx->r2 != 0) {
        // 0x80234664: addiu       $s3, $zero, 0x1
        ctx->r19 = ADD32(0, 0X1);
            goto L_80234680;
    }
    goto skip_1;
    // 0x80234664: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    skip_1:
    // 0x80234668: j           L_8023469C
    // 0x8023466C: nop

        goto L_8023469C;
    // 0x8023466C: nop

L_80234670:
    // 0x80234670: slti        $v0, $v0, 0xA01
    ctx->r2 = SIGNED(ctx->r2) < 0XA01 ? 1 : 0;
    // 0x80234674: beq         $v0, $zero, L_8023469C
    if (ctx->r2 == 0) {
        // 0x80234678: nop
    
            goto L_8023469C;
    }
    // 0x80234678: nop

    // 0x8023467C: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
L_80234680:
    // 0x80234680: sh          $zero, 0x44($s1)
    MEM_H(0X44, ctx->r17) = 0;
    // 0x80234684: sh          $zero, 0x46($s1)
    MEM_H(0X46, ctx->r17) = 0;
    // 0x80234688: sh          $zero, 0x48($s1)
    MEM_H(0X48, ctx->r17) = 0;
    // 0x8023468C: sh          $zero, 0x4C($s1)
    MEM_H(0X4C, ctx->r17) = 0;
    // 0x80234690: sh          $zero, 0x4E($s1)
    MEM_H(0X4E, ctx->r17) = 0;
    // 0x80234694: j           L_802346DC
    // 0x80234698: sh          $zero, 0x50($s1)
    MEM_H(0X50, ctx->r17) = 0;
        goto L_802346DC;
    // 0x80234698: sh          $zero, 0x50($s1)
    MEM_H(0X50, ctx->r17) = 0;
L_8023469C:
    // 0x8023469C: lh          $v1, 0x46($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X46);
    // 0x802346A0: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x802346A4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802346A8: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x802346AC: bltzl       $v0, L_802346B4
    if (SIGNED(ctx->r2) < 0) {
        // 0x802346B0: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_802346B4;
    }
    goto skip_2;
    // 0x802346B0: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_2:
L_802346B4:
    // 0x802346B4: srl         $v1, $v0, 8
    ctx->r3 = S32(U32(ctx->r2) >> 8);
    // 0x802346B8: lhu         $v0, 0x44($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X44);
    // 0x802346BC: sh          $v1, 0x46($s1)
    MEM_H(0X46, ctx->r17) = ctx->r3;
    // 0x802346C0: lhu         $v1, 0x48($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X48);
    // 0x802346C4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802346C8: sra         $v0, $v0, 17
    ctx->r2 = S32(SIGNED(ctx->r2) >> 17);
    // 0x802346CC: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x802346D0: sra         $v1, $v1, 17
    ctx->r3 = S32(SIGNED(ctx->r3) >> 17);
    // 0x802346D4: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
    // 0x802346D8: sh          $v1, 0x48($s1)
    MEM_H(0X48, ctx->r17) = ctx->r3;
L_802346DC:
    // 0x802346DC: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x802346E0: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x802346E4: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x802346E8: bne         $v1, $v0, L_80234768
    if (ctx->r3 != ctx->r2) {
        // 0x802346EC: addiu       $a0, $zero, 0xB3
        ctx->r4 = ADD32(0, 0XB3);
            goto L_80234768;
    }
    // 0x802346EC: addiu       $a0, $zero, 0xB3
    ctx->r4 = ADD32(0, 0XB3);
    // 0x802346F0: lh          $v1, 0x16($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X16);
    // 0x802346F4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802346F8: bne         $v1, $v0, L_80234768
    if (ctx->r3 != ctx->r2) {
        // 0x802346FC: nop
    
            goto L_80234768;
    }
    // 0x802346FC: nop

    // 0x80234700: jal         0x8004F568
    // 0x80234704: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F568_2A968(rdram, ctx);
        goto after_1;
    // 0x80234704: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x80234708: addiu       $a0, $zero, 0x102
    ctx->r4 = ADD32(0, 0X102);
    // 0x8023470C: jal         0x8002A33C
    // 0x80234710: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x80234710: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_2:
    // 0x80234714: jal         0x8004F144
    // 0x80234718: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_3;
    // 0x80234718: nop

    after_3:
    // 0x8023471C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80234720: beq         $s0, $zero, L_80234734
    if (ctx->r16 == 0) {
        // 0x80234724: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80234734;
    }
    // 0x80234724: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80234728: addiu       $a1, $s1, 0x88
    ctx->r5 = ADD32(ctx->r17, 0X88);
    // 0x8023472C: jal         0x8009A3B4
    // 0x80234730: addiu       $a2, $zero, 0x34
    ctx->r6 = ADD32(0, 0X34);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x80234730: addiu       $a2, $zero, 0x34
    ctx->r6 = ADD32(0, 0X34);
    after_4:
L_80234734:
    // 0x80234734: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80234738: jal         0x8023490C
    // 0x8023473C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8023490C_ovl22(rdram, ctx);
        goto after_5;
    // 0x8023473C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80234740: j           L_802347A8
    // 0x80234744: addiu       $a0, $s1, 0x44
    ctx->r4 = ADD32(ctx->r17, 0X44);
        goto L_802347A8;
    // 0x80234744: addiu       $a0, $s1, 0x44
    ctx->r4 = ADD32(ctx->r17, 0X44);
L_80234748:
    // 0x80234748: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8023474C: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x80234750: bne         $v1, $v0, L_80234768
    if (ctx->r3 != ctx->r2) {
        // 0x80234754: addiu       $a0, $zero, 0xB3
        ctx->r4 = ADD32(0, 0XB3);
            goto L_80234768;
    }
    // 0x80234754: addiu       $a0, $zero, 0xB3
    ctx->r4 = ADD32(0, 0XB3);
    // 0x80234758: lh          $v1, 0x16($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X16);
    // 0x8023475C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80234760: beq         $v1, $v0, L_80234770
    if (ctx->r3 == ctx->r2) {
        // 0x80234764: nop
    
            goto L_80234770;
    }
    // 0x80234764: nop

L_80234768:
    // 0x80234768: jal         0x8002A33C
    // 0x8023476C: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_6;
    // 0x8023476C: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_6:
L_80234770:
    // 0x80234770: jal         0x8004F144
    // 0x80234774: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_7;
    // 0x80234774: nop

    after_7:
    // 0x80234778: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8023477C: beq         $s0, $zero, L_802347A4
    if (ctx->r16 == 0) {
        // 0x80234780: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_802347A4;
    }
    // 0x80234780: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80234784: addiu       $a1, $s1, 0x88
    ctx->r5 = ADD32(ctx->r17, 0X88);
    // 0x80234788: addiu       $a2, $zero, 0x34
    ctx->r6 = ADD32(0, 0X34);
    // 0x8023478C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80234790: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80234794: addiu       $v0, $zero, 0x83
    ctx->r2 = ADD32(0, 0X83);
    // 0x80234798: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x8023479C: jal         0x8009A3B4
    // 0x802347A0: sb          $zero, 0x3($s0)
    MEM_B(0X3, ctx->r16) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x802347A0: sb          $zero, 0x3($s0)
    MEM_B(0X3, ctx->r16) = 0;
    after_8:
L_802347A4:
    // 0x802347A4: addiu       $a0, $s1, 0x44
    ctx->r4 = ADD32(ctx->r17, 0X44);
L_802347A8:
    // 0x802347A8: jal         0x80040834
    // 0x802347AC: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_80040834_1BC34(rdram, ctx);
        goto after_9;
    // 0x802347AC: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_9:
L_802347B0:
    // 0x802347B0: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
    // 0x802347B4: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x802347B8: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x802347BC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x802347C0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802347C4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802347C8: jr          $ra
    // 0x802347CC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x802347CC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80233818_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233818: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023381C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80233820: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80233824: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80233828: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023382C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80233830: lw          $v0, -0x6160($at)
    ctx->r2 = MEM_W(ctx->r1, -0X6160);
    // 0x80233834: jalr        $v0
    // 0x80233838: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80233838: nop

    after_0:
    // 0x8023383C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80233840: jr          $ra
    // 0x80233844: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80233844: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022E9B4_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E9B4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022E9B8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8022E9BC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022E9C0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8022E9C4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022E9C8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022E9CC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022E9D0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022E9D4: lw          $v0, -0x6414($at)
    ctx->r2 = MEM_W(ctx->r1, -0X6414);
    // 0x8022E9D8: jalr        $v0
    // 0x8022E9DC: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022E9DC: nop

    after_0:
    // 0x8022E9E0: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8022E9E4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022E9E8: bne         $v1, $v0, L_8022EAA4
    if (ctx->r3 != ctx->r2) {
        // 0x8022E9EC: nop
    
            goto L_8022EAA4;
    }
    // 0x8022E9EC: nop

    // 0x8022E9F0: lb          $v0, 0x387($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X387);
    // 0x8022E9F4: bne         $v0, $zero, L_8022EA88
    if (ctx->r2 != 0) {
        // 0x8022E9F8: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022EA88;
    }
    // 0x8022E9F8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022E9FC: lbu         $v0, 0x64($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X64);
    // 0x8022EA00: lbu         $v1, 0x65($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X65);
    // 0x8022EA04: lbu         $a0, 0x66($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X66);
    // 0x8022EA08: lbu         $a1, 0x66($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X66);
    // 0x8022EA0C: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x8022EA10: andi        $v1, $v1, 0x1F
    ctx->r3 = ctx->r3 & 0X1F;
    // 0x8022EA14: andi        $a0, $a0, 0x1F
    ctx->r4 = ctx->r4 & 0X1F;
    // 0x8022EA18: sll         $v1, $v1, 5
    ctx->r3 = S32(ctx->r3 << 5);
    // 0x8022EA1C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8022EA20: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    // 0x8022EA24: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x8022EA28: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022EA2C: lhu         $a0, 0x15E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X15E);
    // 0x8022EA30: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8022EA34: sb          $a1, 0x66($s0)
    MEM_B(0X66, ctx->r16) = ctx->r5;
    // 0x8022EA38: lb          $v1, 0x66($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X66);
    // 0x8022EA3C: addiu       $v0, $zero, -0x8000
    ctx->r2 = ADD32(0, -0X8000);
    // 0x8022EA40: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x8022EA44: slti        $v1, $v1, 0x10
    ctx->r3 = SIGNED(ctx->r3) < 0X10 ? 1 : 0;
    // 0x8022EA48: bne         $v1, $zero, L_8022EAA4
    if (ctx->r3 != 0) {
        // 0x8022EA4C: sh          $v0, 0x15E($s0)
        MEM_H(0X15E, ctx->r16) = ctx->r2;
            goto L_8022EAA4;
    }
    // 0x8022EA4C: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022EA50: lb          $v1, 0x64($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X64);
    // 0x8022EA54: andi        $v0, $v0, 0x7FFF
    ctx->r2 = ctx->r2 & 0X7FFF;
    // 0x8022EA58: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022EA5C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022EA60: sb          $v0, 0x66($s0)
    MEM_B(0X66, ctx->r16) = ctx->r2;
    // 0x8022EA64: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022EA68: beq         $v1, $v0, L_8022EAA4
    if (ctx->r3 == ctx->r2) {
        // 0x8022EA6C: addu        $a0, $v1, $zero
        ctx->r4 = ADD32(ctx->r3, 0);
            goto L_8022EAA4;
    }
    // 0x8022EA6C: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x8022EA70: lbu         $v0, 0x65($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X65);
    // 0x8022EA74: addiu       $v1, $a0, 0x4
    ctx->r3 = ADD32(ctx->r4, 0X4);
    // 0x8022EA78: sb          $v1, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r3;
    // 0x8022EA7C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8022EA80: j           L_8022EAA4
    // 0x8022EA84: sb          $v0, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r2;
        goto L_8022EAA4;
    // 0x8022EA84: sb          $v0, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r2;
L_8022EA88:
    // 0x8022EA88: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022EA8C: sb          $v0, 0x387($s0)
    MEM_B(0X387, ctx->r16) = ctx->r2;
    // 0x8022EA90: addiu       $v0, $zero, -0x8000
    ctx->r2 = ADD32(0, -0X8000);
    // 0x8022EA94: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022EA98: sb          $zero, 0x66($s0)
    MEM_B(0X66, ctx->r16) = 0;
    // 0x8022EA9C: sb          $zero, 0x65($s0)
    MEM_B(0X65, ctx->r16) = 0;
    // 0x8022EAA0: sb          $zero, 0x64($s0)
    MEM_B(0X64, ctx->r16) = 0;
L_8022EAA4:
    // 0x8022EAA4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8022EAA8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8022EAAC: jr          $ra
    // 0x8022EAB0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022EAB0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022EBC0_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022EBC0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022EBC4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022EBC8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022EBCC: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8022EBD0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022EBD4: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x8022EBD8: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8022EBDC: lh          $v1, 0x4A06($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X4A06);
    // 0x8022EBE0: addiu       $a2, $zero, 0x400
    ctx->r6 = ADD32(0, 0X400);
    // 0x8022EBE4: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x8022EBE8: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x8022EBEC: addiu       $a3, $a3, 0x49CC
    ctx->r7 = ADD32(ctx->r7, 0X49CC);
    // 0x8022EBF0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022EBF4: jal         0x8004FAEC
    // 0x8022EBF8: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_8004FAEC_2AEEC(rdram, ctx);
        goto after_0;
    // 0x8022EBF8: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_0:
    // 0x8022EBFC: beq         $v0, $zero, L_8022EC10
    if (ctx->r2 == 0) {
        // 0x8022EC00: nop
    
            goto L_8022EC10;
    }
    // 0x8022EC00: nop

    // 0x8022EC04: lbu         $v0, 0x1DE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1DE);
    // 0x8022EC08: bne         $v0, $zero, L_8022EC8C
    if (ctx->r2 != 0) {
        // 0x8022EC0C: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_8022EC8C;
    }
    // 0x8022EC0C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
L_8022EC10:
    // 0x8022EC10: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8022EC14: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022EC18: bne         $v1, $v0, L_8022EC5C
    if (ctx->r3 != ctx->r2) {
        // 0x8022EC1C: nop
    
            goto L_8022EC5C;
    }
    // 0x8022EC1C: nop

    // 0x8022EC20: lbu         $v0, 0x1DE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1DE);
    // 0x8022EC24: bne         $v0, $zero, L_8022EC5C
    if (ctx->r2 != 0) {
        // 0x8022EC28: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022EC5C;
    }
    // 0x8022EC28: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022EC2C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x8022EC30: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022EC34: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022EC38: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022EC3C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022EC40: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8022EC44: jal         0x80050294
    // 0x8022EC48: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x8022EC48: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022EC4C: lbu         $v0, 0xCA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XCA);
    // 0x8022EC50: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    // 0x8022EC54: j           L_8022ED14
    // 0x8022EC58: sb          $v0, 0xCA($s0)
    MEM_B(0XCA, ctx->r16) = ctx->r2;
        goto L_8022ED14;
    // 0x8022EC58: sb          $v0, 0xCA($s0)
    MEM_B(0XCA, ctx->r16) = ctx->r2;
L_8022EC5C:
    // 0x8022EC5C: lbu         $v0, 0xCA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XCA);
    // 0x8022EC60: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022EC64: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x8022EC68: sb          $v1, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r3;
    // 0x8022EC6C: addiu       $v1, $zero, 0x14
    ctx->r3 = ADD32(0, 0X14);
    // 0x8022EC70: sb          $v1, 0x385($a0)
    MEM_B(0X385, ctx->r4) = ctx->r3;
    // 0x8022EC74: sb          $zero, 0xCB($a0)
    MEM_B(0XCB, ctx->r4) = 0;
    // 0x8022EC78: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
    // 0x8022EC7C: jal         0x8022ED24
    // 0x8022EC80: sb          $v0, 0xCA($a0)
    MEM_B(0XCA, ctx->r4) = ctx->r2;
    func_8022ED24_ovl22(rdram, ctx);
        goto after_2;
    // 0x8022EC80: sb          $v0, 0xCA($a0)
    MEM_B(0XCA, ctx->r4) = ctx->r2;
    after_2:
    // 0x8022EC84: j           L_8022ED14
    // 0x8022EC88: nop

        goto L_8022ED14;
    // 0x8022EC88: nop

L_8022EC8C:
    // 0x8022EC8C: lw          $a0, 0x80($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X80);
    // 0x8022EC90: lui         $v1, 0x1
    ctx->r3 = S32(0X1 << 16);
    // 0x8022EC94: ori         $v1, $v1, 0x387F
    ctx->r3 = ctx->r3 | 0X387F;
    // 0x8022EC98: sltu        $v1, $v1, $a0
    ctx->r3 = ctx->r3 < ctx->r4 ? 1 : 0;
    // 0x8022EC9C: bne         $v1, $zero, L_8022ED0C
    if (ctx->r3 != 0) {
        // 0x8022ECA0: sb          $v0, 0x1DE($s0)
        MEM_B(0X1DE, ctx->r16) = ctx->r2;
            goto L_8022ED0C;
    }
    // 0x8022ECA0: sb          $v0, 0x1DE($s0)
    MEM_B(0X1DE, ctx->r16) = ctx->r2;
    // 0x8022ECA4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022ECA8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022ECAC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022ECB0: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022ECB4: lbu         $v1, 0xCA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XCA);
    // 0x8022ECB8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022ECBC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022ECC0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022ECC4: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8022ECC8: jal         0x80050294
    // 0x8022ECCC: sb          $v1, 0xCA($s0)
    MEM_B(0XCA, ctx->r16) = ctx->r3;
    func_80050294_2B694(rdram, ctx);
        goto after_3;
    // 0x8022ECCC: sb          $v1, 0xCA($s0)
    MEM_B(0XCA, ctx->r16) = ctx->r3;
    after_3:
    // 0x8022ECD0: addiu       $a0, $zero, 0x15B
    ctx->r4 = ADD32(0, 0X15B);
    // 0x8022ECD4: jal         0x8002A33C
    // 0x8022ECD8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_4;
    // 0x8022ECD8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_4:
    // 0x8022ECDC: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x8022ECE0: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x8022ECE4: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x8022ECE8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022ECEC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022ECF0: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8022ECF4: lbu         $v0, 0xC($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XC);
    // 0x8022ECF8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022ECFC: jal         0x8022EE9C
    // 0x8022ED00: sh          $v0, 0xC8($a0)
    MEM_H(0XC8, ctx->r4) = ctx->r2;
    func_8022EE9C_ovl22(rdram, ctx);
        goto after_5;
    // 0x8022ED00: sh          $v0, 0xC8($a0)
    MEM_H(0XC8, ctx->r4) = ctx->r2;
    after_5:
    // 0x8022ED04: j           L_8022ED14
    // 0x8022ED08: nop

        goto L_8022ED14;
    // 0x8022ED08: nop

L_8022ED0C:
    // 0x8022ED0C: jal         0x8022E8B4
    // 0x8022ED10: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022E8B4_ovl22(rdram, ctx);
        goto after_6;
    // 0x8022ED10: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
L_8022ED14:
    // 0x8022ED14: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022ED18: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022ED1C: jr          $ra
    // 0x8022ED20: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022ED20: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80230014_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230014: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80230018: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023001C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80230020: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80230024: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80230028: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8023002C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80230030: jal         0x8009A3B4
    // 0x80230034: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80230034: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_0:
    // 0x80230038: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8023003C: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80230040: jal         0x8009A3B4
    // 0x80230044: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80230044: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80230048: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8023004C: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80230050: jal         0x8009A3B4
    // 0x80230054: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80230054: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80230058: lbu         $v1, 0xAC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XAC);
    // 0x8023005C: lbu         $a1, 0x74($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X74);
    // 0x80230060: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230064: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80230068: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8023006C: sb          $v1, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r3;
    // 0x80230070: jal         0x80230120
    // 0x80230074: sb          $a1, 0x75($s0)
    MEM_B(0X75, ctx->r16) = ctx->r5;
    func_80230120_ovl22(rdram, ctx);
        goto after_3;
    // 0x80230074: sb          $a1, 0x75($s0)
    MEM_B(0X75, ctx->r16) = ctx->r5;
    after_3:
    // 0x80230078: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8023007C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80230080: beq         $v1, $v0, L_8023010C
    if (ctx->r3 == ctx->r2) {
        // 0x80230084: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_8023010C;
    }
    // 0x80230084: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x80230088: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023008C: jal         0x800540D0
    // 0x80230090: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_800540D0_2F4D0(rdram, ctx);
        goto after_4;
    // 0x80230090: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80230094: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80230098: sw          $v0, 0x358($s0)
    MEM_W(0X358, ctx->r16) = ctx->r2;
    // 0x8023009C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x802300A0: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802300A4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802300A8: lw          $v0, -0x63A8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X63A8);
    // 0x802300AC: jalr        $v0
    // 0x802300B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_5;
    // 0x802300B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x802300B4: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x802300B8: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x802300BC: beq         $a1, $v0, L_802300D4
    if (ctx->r5 == ctx->r2) {
        // 0x802300C0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802300D4;
    }
    // 0x802300C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802300C4: jal         0x80050294
    // 0x802300C8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_6;
    // 0x802300C8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_6:
    // 0x802300CC: j           L_802300DC
    // 0x802300D0: nop

        goto L_802300DC;
    // 0x802300D0: nop

L_802300D4:
    // 0x802300D4: jal         0x8005044C
    // 0x802300D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_7;
    // 0x802300D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
L_802300DC:
    // 0x802300DC: jal         0x8023043C
    // 0x802300E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8023043C_ovl22(rdram, ctx);
        goto after_8;
    // 0x802300E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
    // 0x802300E4: jal         0x802303B0
    // 0x802300E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802303B0_ovl22(rdram, ctx);
        goto after_9;
    // 0x802300E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
    // 0x802300EC: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x802300F0: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x802300F4: beq         $v0, $zero, L_8023010C
    if (ctx->r2 == 0) {
        // 0x802300F8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023010C;
    }
    // 0x802300F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802300FC: addiu       $a1, $zero, 0x78
    ctx->r5 = ADD32(0, 0X78);
    // 0x80230100: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x80230104: jal         0x8003B564
    // 0x80230108: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_10;
    // 0x80230108: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_10:
L_8023010C:
    // 0x8023010C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80230110: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80230114: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80230118: jr          $ra
    // 0x8023011C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023011C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80230BDC_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230BDC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80230BE0: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    // 0x80230BE4: sh          $v0, 0x44($a0)
    MEM_H(0X44, ctx->r4) = ctx->r2;
    // 0x80230BE8: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80230BEC: sb          $v1, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r3;
    // 0x80230BF0: sh          $zero, 0x46($a0)
    MEM_H(0X46, ctx->r4) = 0;
    // 0x80230BF4: sh          $zero, 0x4E($a0)
    MEM_H(0X4E, ctx->r4) = 0;
    // 0x80230BF8: sh          $v0, 0x37E($a0)
    MEM_H(0X37E, ctx->r4) = ctx->r2;
    // 0x80230BFC: sb          $v1, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r3;
    // 0x80230C00: jr          $ra
    // 0x80230C04: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    TRACE_RETURN()
    return;
    // 0x80230C04: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
;}
RECOMP_FUNC void func_80236624_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236624: lhu         $v0, 0x18($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X18);
    // 0x80236628: lw          $a1, 0x20($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X20);
    // 0x8023662C: lhu         $v1, 0x1A($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X1A);
    // 0x80236630: sh          $v0, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r2;
    // 0x80236634: sh          $v1, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r3;
    // 0x80236638: lb          $v1, 0x3($a1)
    ctx->r3 = MEM_B(ctx->r5, 0X3);
    // 0x8023663C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80236640: bgez        $v1, L_80236680
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80236644: addu        $a1, $v1, $zero
        ctx->r5 = ADD32(ctx->r3, 0);
            goto L_80236680;
    }
    // 0x80236644: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x80236648: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8023664C: bne         $v1, $v0, L_8023666C
    if (ctx->r3 != ctx->r2) {
        // 0x80236650: andi        $v0, $a1, 0x7F
        ctx->r2 = ctx->r5 & 0X7F;
            goto L_8023666C;
    }
    // 0x80236650: andi        $v0, $a1, 0x7F
    ctx->r2 = ctx->r5 & 0X7F;
    // 0x80236654: lb          $v1, 0xC($a0)
    ctx->r3 = MEM_B(ctx->r4, 0XC);
    // 0x80236658: lb          $v0, 0xD($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XD);
    // 0x8023665C: bne         $v1, $v0, L_8023668C
    if (ctx->r3 != ctx->r2) {
        // 0x80236660: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_8023668C;
    }
    // 0x80236660: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80236664: j           L_802366B0
    // 0x80236668: nop

        goto L_802366B0;
    // 0x80236668: nop

L_8023666C:
    // 0x8023666C: lw          $v1, 0x1C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X1C);
    // 0x80236670: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80236674: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80236678: j           L_8023668C
    // 0x8023667C: sw          $v1, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r3;
        goto L_8023668C;
    // 0x8023667C: sw          $v1, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r3;
L_80236680:
    // 0x80236680: lw          $v0, 0x20($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X20);
    // 0x80236684: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80236688: sw          $v0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r2;
L_8023668C:
    // 0x8023668C: lw          $a1, 0x20($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X20);
    // 0x80236690: lbu         $v0, 0x2($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X2);
    // 0x80236694: sb          $zero, 0xD($a0)
    MEM_B(0XD, ctx->r4) = 0;
    // 0x80236698: sb          $v0, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r2;
    // 0x8023669C: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x802366A0: sh          $v0, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r2;
    // 0x802366A4: lbu         $v1, 0x1($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X1);
    // 0x802366A8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x802366AC: sh          $v1, 0x1A($a0)
    MEM_H(0X1A, ctx->r4) = ctx->r3;
L_802366B0:
    // 0x802366B0: jr          $ra
    // 0x802366B4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x802366B4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    // 0x802366B8: nop

    // 0x802366BC: nop

;}
RECOMP_FUNC void func_8023712C_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023712C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80237130: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x80237134: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80237138: lb          $v1, 0xC($a2)
    ctx->r3 = MEM_B(ctx->r6, 0XC);
    // 0x8023713C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80237140: addu        $a1, $v0, $v1
    ctx->r5 = ADD32(ctx->r2, ctx->r3);
    // 0x80237144: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80237148: addiu       $v1, $v1, -0x5CE0
    ctx->r3 = ADD32(ctx->r3, -0X5CE0);
    // 0x8023714C: lhu         $v0, 0x14($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X14);
    // 0x80237150: addu        $a1, $a1, $v1
    ctx->r5 = ADD32(ctx->r5, ctx->r3);
    // 0x80237154: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x80237158: lbu         $a0, 0x2($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0X2);
    // 0x8023715C: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80237160: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80237164: sll         $v1, $v1, 24
    ctx->r3 = S32(ctx->r3 << 24);
    // 0x80237168: sra         $v1, $v1, 24
    ctx->r3 = S32(SIGNED(ctx->r3) >> 24);
    // 0x8023716C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80237170: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x80237174: sltu        $v0, $v0, $a0
    ctx->r2 = ctx->r2 < ctx->r4 ? 1 : 0;
    // 0x80237178: beq         $v0, $zero, L_802371D0
    if (ctx->r2 == 0) {
        // 0x8023717C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_802371D0;
    }
    // 0x8023717C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80237180: lhu         $v0, 0x18($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X18);
    // 0x80237184: lbu         $v1, 0x1($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X1);
    // 0x80237188: lbu         $a0, 0x3($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0X3);
    // 0x8023718C: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80237190: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80237194: sll         $v1, $v1, 24
    ctx->r3 = S32(ctx->r3 << 24);
    // 0x80237198: sra         $v1, $v1, 24
    ctx->r3 = S32(SIGNED(ctx->r3) >> 24);
    // 0x8023719C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x802371A0: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x802371A4: sltu        $v0, $v0, $a0
    ctx->r2 = ctx->r2 < ctx->r4 ? 1 : 0;
    // 0x802371A8: beq         $v0, $zero, L_802371D0
    if (ctx->r2 == 0) {
        // 0x802371AC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_802371D0;
    }
    // 0x802371AC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x802371B0: lb          $v1, 0x4($a1)
    ctx->r3 = MEM_B(ctx->r5, 0X4);
    // 0x802371B4: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x802371B8: lb          $v0, -0x3BC7($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC7);
    // 0x802371BC: beq         $v1, $v0, L_802371CC
    if (ctx->r3 == ctx->r2) {
        // 0x802371C0: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_802371CC;
    }
    // 0x802371C0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802371C4: bne         $v1, $v0, L_802371D0
    if (ctx->r3 != ctx->r2) {
        // 0x802371C8: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_802371D0;
    }
    // 0x802371C8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_802371CC:
    // 0x802371CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802371D0:
    // 0x802371D0: beq         $v0, $zero, L_802371EC
    if (ctx->r2 == 0) {
        // 0x802371D4: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_802371EC;
    }
    // 0x802371D4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x802371D8: jal         0x8006033C
    // 0x802371DC: addiu       $a0, $zero, 0x521
    ctx->r4 = ADD32(0, 0X521);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x802371DC: addiu       $a0, $zero, 0x521
    ctx->r4 = ADD32(0, 0X521);
    after_0:
    // 0x802371E0: bne         $v0, $zero, L_802371EC
    if (ctx->r2 != 0) {
        // 0x802371E4: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_802371EC;
    }
    // 0x802371E4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x802371E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802371EC:
    // 0x802371EC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802371F0: jr          $ra
    // 0x802371F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802371F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802332F8_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802332F8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802332FC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80233300: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80233304: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80233308: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023330C: jal         0x80040F30
    // 0x80233310: sw          $zero, 0x4E0($s0)
    MEM_W(0X4E0, ctx->r16) = 0;
    func_80040F30_1C330(rdram, ctx);
        goto after_0;
    // 0x80233310: sw          $zero, 0x4E0($s0)
    MEM_W(0X4E0, ctx->r16) = 0;
    after_0:
    // 0x80233314: andi        $v0, $v0, 0xF00
    ctx->r2 = ctx->r2 & 0XF00;
    // 0x80233318: beq         $v0, $zero, L_8023332C
    if (ctx->r2 == 0) {
        // 0x8023331C: addiu       $s1, $s0, 0x4E0
        ctx->r17 = ADD32(ctx->r16, 0X4E0);
            goto L_8023332C;
    }
    // 0x8023331C: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    // 0x80233320: lw          $v0, 0x4E0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4E0);
    // 0x80233324: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80233328: sw          $v0, 0x4E0($s0)
    MEM_W(0X4E0, ctx->r16) = ctx->r2;
L_8023332C:
    // 0x8023332C: lb          $v0, 0x74($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X74);
    // 0x80233330: bne         $v0, $zero, L_80233398
    if (ctx->r2 != 0) {
        // 0x80233334: nop
    
            goto L_80233398;
    }
    // 0x80233334: nop

    // 0x80233338: jal         0x8003E934
    // 0x8023333C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_1;
    // 0x8023333C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80233340: lh          $v1, 0x2E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2E);
    // 0x80233344: beql        $v0, $v1, L_80233384
    if (ctx->r2 == ctx->r3) {
        // 0x80233348: sh          $v0, 0x16($s0)
        MEM_H(0X16, ctx->r16) = ctx->r2;
            goto L_80233384;
    }
    goto skip_0;
    // 0x80233348: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    skip_0:
    // 0x8023334C: lb          $v0, 0x75($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X75);
    // 0x80233350: bne         $v0, $zero, L_8023338C
    if (ctx->r2 != 0) {
        // 0x80233354: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8023338C;
    }
    // 0x80233354: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80233358: addiu       $a1, $s0, 0x2C
    ctx->r5 = ADD32(ctx->r16, 0X2C);
    // 0x8023335C: jal         0x8009A3B4
    // 0x80233360: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80233360: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80233364: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80233368: addiu       $a1, $s0, 0x34
    ctx->r5 = ADD32(ctx->r16, 0X34);
    // 0x8023336C: jal         0x8009A3B4
    // 0x80233370: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80233370: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_3:
    // 0x80233374: lw          $v0, 0x4E0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4E0);
    // 0x80233378: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
    // 0x8023337C: j           L_8023338C
    // 0x80233380: sw          $v0, 0x4E0($s0)
    MEM_W(0X4E0, ctx->r16) = ctx->r2;
        goto L_8023338C;
    // 0x80233380: sw          $v0, 0x4E0($s0)
    MEM_W(0X4E0, ctx->r16) = ctx->r2;
L_80233384:
    // 0x80233384: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80233388: sw          $v0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r2;
L_8023338C:
    // 0x8023338C: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x80233390: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80233394: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
L_80233398:
    // 0x80233398: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8023339C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802333A0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802333A4: jr          $ra
    // 0x802333A8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802333A8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80230C90_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230C90: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80230C94: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80230C98: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80230C9C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80230CA0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80230CA4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80230CA8: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x80230CAC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80230CB0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80230CB4: jal         0x8009A3B4
    // 0x80230CB8: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80230CB8: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    after_0:
    // 0x80230CBC: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80230CC0: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80230CC4: jal         0x8009A3B4
    // 0x80230CC8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80230CC8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80230CCC: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80230CD0: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80230CD4: jal         0x8009A3B4
    // 0x80230CD8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80230CD8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80230CDC: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80230CE0: jal         0x800A3450
    // 0x80230CE4: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x80230CE4: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    after_3:
    // 0x80230CE8: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80230CEC: sh          $v0, 0x32E($s0)
    MEM_H(0X32E, ctx->r16) = ctx->r2;
    // 0x80230CF0: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80230CF4: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80230CF8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80230CFC: lw          $v0, -0x6370($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6370);
    // 0x80230D00: jalr        $v0
    // 0x80230D04: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x80230D04: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80230D08: lbu         $v1, 0xAD($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XAD);
    // 0x80230D0C: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x80230D10: beq         $v1, $a1, L_80230D24
    if (ctx->r3 == ctx->r5) {
        // 0x80230D14: addiu       $s1, $s0, 0x328
        ctx->r17 = ADD32(ctx->r16, 0X328);
            goto L_80230D24;
    }
    // 0x80230D14: addiu       $s1, $s0, 0x328
    ctx->r17 = ADD32(ctx->r16, 0X328);
    // 0x80230D18: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230D1C: j           L_80230D4C
    // 0x80230D20: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
        goto L_80230D4C;
    // 0x80230D20: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
L_80230D24:
    // 0x80230D24: lhu         $v0, 0x32C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X32C);
    // 0x80230D28: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x80230D2C: beq         $v0, $zero, L_80230D44
    if (ctx->r2 == 0) {
        // 0x80230D30: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80230D44;
    }
    // 0x80230D30: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230D34: jal         0x8005044C
    // 0x80230D38: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_5;
    // 0x80230D38: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80230D3C: j           L_80230D54
    // 0x80230D40: nop

        goto L_80230D54;
    // 0x80230D40: nop

L_80230D44:
    // 0x80230D44: lbu         $a2, 0xA4($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0XA4);
    // 0x80230D48: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
L_80230D4C:
    // 0x80230D4C: jal         0x80050294
    // 0x80230D50: nop

    func_80050294_2B694(rdram, ctx);
        goto after_6;
    // 0x80230D50: nop

    after_6:
L_80230D54:
    // 0x80230D54: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80230D58: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x80230D5C: beq         $v0, $zero, L_80230D6C
    if (ctx->r2 == 0) {
        // 0x80230D60: nop
    
            goto L_80230D6C;
    }
    // 0x80230D60: nop

    // 0x80230D64: jal         0x80232238
    // 0x80230D68: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80232238_ovl22(rdram, ctx);
        goto after_7;
    // 0x80230D68: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
L_80230D6C:
    // 0x80230D6C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80230D70: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80230D74: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80230D78: jr          $ra
    // 0x80230D7C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80230D7C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80235C18_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235C18: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80235C1C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80235C20: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80235C24: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80235C28: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80235C2C: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80235C30: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x80235C34: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x80235C38: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80235C3C: beq         $v1, $v0, L_80235CBC
    if (ctx->r3 == ctx->r2) {
        // 0x80235C40: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80235CBC;
    }
    // 0x80235C40: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80235C44: beql        $v0, $zero, L_80235C5C
    if (ctx->r2 == 0) {
        // 0x80235C48: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80235C5C;
    }
    goto skip_0;
    // 0x80235C48: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80235C4C: beq         $v1, $zero, L_80235C74
    if (ctx->r3 == 0) {
        // 0x80235C50: nop
    
            goto L_80235C74;
    }
    // 0x80235C50: nop

    // 0x80235C54: j           L_80235D24
    // 0x80235C58: nop

        goto L_80235D24;
    // 0x80235C58: nop

L_80235C5C:
    // 0x80235C5C: beq         $v1, $v0, L_80235CCC
    if (ctx->r3 == ctx->r2) {
        // 0x80235C60: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80235CCC;
    }
    // 0x80235C60: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80235C64: beq         $v1, $v0, L_80235CF4
    if (ctx->r3 == ctx->r2) {
        // 0x80235C68: nop
    
            goto L_80235CF4;
    }
    // 0x80235C68: nop

    // 0x80235C6C: j           L_80235D24
    // 0x80235C70: nop

        goto L_80235D24;
    // 0x80235C70: nop

L_80235C74:
    // 0x80235C74: jal         0x8006FF84
    // 0x80235C78: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_0;
    // 0x80235C78: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_0:
    // 0x80235C7C: beq         $v0, $zero, L_80235D24
    if (ctx->r2 == 0) {
        // 0x80235C80: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80235D24;
    }
    // 0x80235C80: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80235C84: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80235C88: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80235C8C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80235C90: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80235C94: sb          $v0, 0x49B8($at)
    MEM_B(0X49B8, ctx->r1) = ctx->r2;
    // 0x80235C98: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80235C9C: sb          $zero, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = 0;
    // 0x80235CA0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80235CA4: sw          $zero, 0x49BC($at)
    MEM_W(0X49BC, ctx->r1) = 0;
    // 0x80235CA8: jal         0x800610AC
    // 0x80235CAC: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_1;
    // 0x80235CAC: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    after_1:
    // 0x80235CB0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80235CB4: j           L_80235CE4
    // 0x80235CB8: sw          $zero, 0x4B34($at)
    MEM_W(0X4B34, ctx->r1) = 0;
        goto L_80235CE4;
    // 0x80235CB8: sw          $zero, 0x4B34($at)
    MEM_W(0X4B34, ctx->r1) = 0;
L_80235CBC:
    // 0x80235CBC: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x80235CC0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80235CC4: j           L_80235CE4
    // 0x80235CC8: sb          $v0, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r2;
        goto L_80235CE4;
    // 0x80235CC8: sb          $v0, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r2;
L_80235CCC:
    // 0x80235CCC: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80235CD0: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x80235CD4: bne         $v0, $zero, L_80235D24
    if (ctx->r2 != 0) {
        // 0x80235CD8: nop
    
            goto L_80235D24;
    }
    // 0x80235CD8: nop

    // 0x80235CDC: jal         0x80034E3C
    // 0x80235CE0: nop

    func_80034E3C_1023C(rdram, ctx);
        goto after_2;
    // 0x80235CE0: nop

    after_2:
L_80235CE4:
    // 0x80235CE4: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80235CE8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80235CEC: j           L_80235D24
    // 0x80235CF0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80235D24;
    // 0x80235CF0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80235CF4:
    // 0x80235CF4: jal         0x8003516C
    // 0x80235CF8: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_3;
    // 0x80235CF8: nop

    after_3:
    // 0x80235CFC: bne         $v0, $zero, L_80235D24
    if (ctx->r2 != 0) {
        // 0x80235D00: nop
    
            goto L_80235D24;
    }
    // 0x80235D00: nop

    // 0x80235D04: jal         0x80070050
    // 0x80235D08: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80070050_4B450(rdram, ctx);
        goto after_4;
    // 0x80235D08: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_4:
    // 0x80235D0C: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80235D10: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80235D14: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x80235D18: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80235D1C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80235D20: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_80235D24:
    // 0x80235D24: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80235D28: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80235D2C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80235D30: jr          $ra
    // 0x80235D34: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80235D34: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80235D38: nop

    // 0x80235D3C: nop

;}
RECOMP_FUNC void func_80234C20_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234C20: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80234C24: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80234C28: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80234C2C: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80234C30: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80234C34: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80234C38: jal         0x8009A3B4
    // 0x80234C3C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80234C3C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_0:
    // 0x80234C40: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80234C44: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80234C48: jal         0x8009A3B4
    // 0x80234C4C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80234C4C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x80234C50: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x80234C54: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80234C58: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x80234C5C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80234C60: bne         $v0, $zero, L_80234C78
    if (ctx->r2 != 0) {
        // 0x80234C64: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_80234C78;
    }
    // 0x80234C64: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80234C68: jal         0x8004F4F8
    // 0x80234C6C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_2;
    // 0x80234C6C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80234C70: j           L_80234DA0
    // 0x80234C74: nop

        goto L_80234DA0;
    // 0x80234C74: nop

L_80234C78:
    // 0x80234C78: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80234C7C: bne         $v1, $v0, L_80234C88
    if (ctx->r3 != ctx->r2) {
        // 0x80234C80: addiu       $v0, $v1, 0x2
        ctx->r2 = ADD32(ctx->r3, 0X2);
            goto L_80234C88;
    }
    // 0x80234C80: addiu       $v0, $v1, 0x2
    ctx->r2 = ADD32(ctx->r3, 0X2);
    // 0x80234C84: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80234C88:
    // 0x80234C88: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80234C8C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80234C90: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80234C94: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80234C98: lbu         $v0, -0x60DC($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X60DC);
    // 0x80234C9C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80234CA0: lh          $a2, 0x4C($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X4C);
    // 0x80234CA4: lh          $a3, 0x50($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X50);
    // 0x80234CA8: sb          $v0, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r2;
    // 0x80234CAC: lhu         $v0, 0x9A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X9A);
    // 0x80234CB0: lui         $t0, 0x8024
    ctx->r8 = S32(0X8024 << 16);
    // 0x80234CB4: addu        $t0, $t0, $v1
    ctx->r8 = ADD32(ctx->r8, ctx->r3);
    // 0x80234CB8: lbu         $t0, -0x60DB($t0)
    ctx->r8 = MEM_BU(ctx->r8, -0X60DB);
    // 0x80234CBC: lh          $v1, 0x44($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X44);
    // 0x80234CC0: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80234CC4: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80234CC8: sh          $v0, 0x9A($s0)
    MEM_H(0X9A, ctx->r16) = ctx->r2;
    // 0x80234CCC: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x80234CD0: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x80234CD4: lh          $a2, 0x48($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X48);
    // 0x80234CD8: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80234CDC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80234CE0: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x80234CE4: lh          $v0, 0x46($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X46);
    // 0x80234CE8: lw          $v1, 0x20($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X20);
    // 0x80234CEC: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80234CF0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80234CF4: sb          $t0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r8;
    // 0x80234CF8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80234CFC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80234D00: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x80234D04: addu        $a2, $a2, $a3
    ctx->r6 = ADD32(ctx->r6, ctx->r7);
    // 0x80234D08: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x80234D0C: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x80234D10: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80234D14: jal         0x8004DD04
    // 0x80234D18: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    func_8004DD04_29104(rdram, ctx);
        goto after_3;
    // 0x80234D18: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    after_3:
    // 0x80234D1C: lb          $v0, 0xE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE);
    // 0x80234D20: beq         $v0, $zero, L_80234D3C
    if (ctx->r2 == 0) {
        // 0x80234D24: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80234D3C;
    }
    // 0x80234D24: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80234D28: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80234D2C: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x80234D30: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80234D34: bne         $v0, $zero, L_80234D88
    if (ctx->r2 != 0) {
        // 0x80234D38: nop
    
            goto L_80234D88;
    }
    // 0x80234D38: nop

L_80234D3C:
    // 0x80234D3C: jal         0x8004F144
    // 0x80234D40: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_4;
    // 0x80234D40: nop

    after_4:
    // 0x80234D44: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80234D48: beq         $v1, $zero, L_80234D88
    if (ctx->r3 == 0) {
        // 0x80234D4C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80234D88;
    }
    // 0x80234D4C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80234D50: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80234D54: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x80234D58: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x80234D5C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80234D60: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    // 0x80234D64: sb          $zero, 0xC($v1)
    MEM_B(0XC, ctx->r3) = 0;
    // 0x80234D68: lhu         $v0, 0x90($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X90);
    // 0x80234D6C: sh          $v0, 0x1C($v1)
    MEM_H(0X1C, ctx->r3) = ctx->r2;
    // 0x80234D70: lhu         $v0, 0x92($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X92);
    // 0x80234D74: sh          $v0, 0x1E($v1)
    MEM_H(0X1E, ctx->r3) = ctx->r2;
    // 0x80234D78: lhu         $v0, 0x94($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X94);
    // 0x80234D7C: sh          $v0, 0x20($v1)
    MEM_H(0X20, ctx->r3) = ctx->r2;
    // 0x80234D80: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80234D84: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
L_80234D88:
    // 0x80234D88: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x80234D8C: lhu         $v1, 0x16($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X16);
    // 0x80234D90: lhu         $a0, 0x18($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X18);
    // 0x80234D94: sh          $v0, 0x90($s0)
    MEM_H(0X90, ctx->r16) = ctx->r2;
    // 0x80234D98: sh          $v1, 0x92($s0)
    MEM_H(0X92, ctx->r16) = ctx->r3;
    // 0x80234D9C: sh          $a0, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r4;
L_80234DA0:
    // 0x80234DA0: jal         0x8003F754
    // 0x80234DA4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003F754_1AB54(rdram, ctx);
        goto after_5;
    // 0x80234DA4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80234DA8: bne         $v0, $zero, L_80234DC4
    if (ctx->r2 != 0) {
        // 0x80234DAC: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80234DC4;
    }
    // 0x80234DAC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80234DB0: lw          $v0, 0x9C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X9C);
    // 0x80234DB4: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x80234DB8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80234DBC: beq         $v0, $zero, L_80234DD8
    if (ctx->r2 == 0) {
        // 0x80234DC0: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80234DD8;
    }
    // 0x80234DC0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_80234DC4:
    // 0x80234DC4: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80234DC8: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80234DCC: sb          $zero, 0x96($s0)
    MEM_B(0X96, ctx->r16) = 0;
    // 0x80234DD0: j           L_80234E28
    // 0x80234DD4: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
        goto L_80234E28;
    // 0x80234DD4: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
L_80234DD8:
    // 0x80234DD8: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80234DDC: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80234DE0: beq         $v0, $zero, L_80234E28
    if (ctx->r2 == 0) {
        // 0x80234DE4: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80234E28;
    }
    // 0x80234DE4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80234DE8: lhu         $a1, 0x98($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X98);
    // 0x80234DEC: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x80234DF0: addiu       $v0, $s0, 0x9C
    ctx->r2 = ADD32(ctx->r16, 0X9C);
    // 0x80234DF4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80234DF8: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80234DFC: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80234E00: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x80234E04: lb          $v1, 0xD($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XD);
    // 0x80234E08: ori         $a3, $zero, 0xA000
    ctx->r7 = 0 | 0XA000;
    // 0x80234E0C: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    // 0x80234E10: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80234E14: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x80234E18: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80234E1C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80234E20: jal         0x80051E18
    // 0x80234E24: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_6;
    // 0x80234E24: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_6:
L_80234E28:
    // 0x80234E28: sw          $zero, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = 0;
    // 0x80234E2C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80234E30: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80234E34: jr          $ra
    // 0x80234E38: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80234E38: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80225BB0_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225BB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225BB4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80225BB8: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x80225BBC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80225BC0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80225BC4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80225BC8: lw          $v0, -0x6E70($at)
    ctx->r2 = MEM_W(ctx->r1, -0X6E70);
    // 0x80225BCC: jalr        $v0
    // 0x80225BD0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80225BD0: nop

    after_0:
    // 0x80225BD4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80225BD8: jr          $ra
    // 0x80225BDC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225BDC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80230600_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230600: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80230604: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80230608: lh          $a1, 0x56($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X56);
    // 0x8023060C: lh          $v0, 0x384($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X384);
    // 0x80230610: bne         $a1, $v0, L_80230628
    if (ctx->r5 != ctx->r2) {
        // 0x80230614: addu        $v1, $a1, $zero
        ctx->r3 = ADD32(ctx->r5, 0);
            goto L_80230628;
    }
    // 0x80230614: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
    // 0x80230618: jal         0x80230BDC
    // 0x8023061C: nop

    func_80230BDC_ovl22(rdram, ctx);
        goto after_0;
    // 0x8023061C: nop

    after_0:
    // 0x80230620: j           L_80230674
    // 0x80230624: nop

        goto L_80230674;
    // 0x80230624: nop

L_80230628:
    // 0x80230628: slt         $v0, $v0, $a1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8023062C: bne         $v0, $zero, L_80230638
    if (ctx->r2 != 0) {
        // 0x80230630: addiu       $v0, $v1, -0x10
        ctx->r2 = ADD32(ctx->r3, -0X10);
            goto L_80230638;
    }
    // 0x80230630: addiu       $v0, $v1, -0x10
    ctx->r2 = ADD32(ctx->r3, -0X10);
    // 0x80230634: addiu       $v0, $v1, 0x10
    ctx->r2 = ADD32(ctx->r3, 0X10);
L_80230638:
    // 0x80230638: sh          $v0, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r2;
    // 0x8023063C: lhu         $v0, 0x56($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X56);
    // 0x80230640: lw          $v1, 0x358($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X358);
    // 0x80230644: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80230648: beq         $v1, $zero, L_80230674
    if (ctx->r3 == 0) {
        // 0x8023064C: sh          $v0, 0x56($a0)
        MEM_H(0X56, ctx->r4) = ctx->r2;
            goto L_80230674;
    }
    // 0x8023064C: sh          $v0, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r2;
    // 0x80230650: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80230654: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x80230658: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8023065C: sh          $v0, 0x44($a0)
    MEM_H(0X44, ctx->r4) = ctx->r2;
    // 0x80230660: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80230664: sh          $zero, 0x46($a0)
    MEM_H(0X46, ctx->r4) = 0;
    // 0x80230668: sh          $zero, 0x4E($a0)
    MEM_H(0X4E, ctx->r4) = 0;
    // 0x8023066C: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
    // 0x80230670: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
L_80230674:
    // 0x80230674: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80230678: jr          $ra
    // 0x8023067C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023067C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
