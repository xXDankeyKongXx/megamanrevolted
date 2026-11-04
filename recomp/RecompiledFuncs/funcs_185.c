#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80249680_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80249680: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80249684: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80249688: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8024968C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80249690: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80249694: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80249698: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024969C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802496A0: lw          $v0, 0x51A0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X51A0);
    // 0x802496A4: jalr        $v0
    // 0x802496A8: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802496A8: nop

    after_0:
    // 0x802496AC: jal         0x80249D2C
    // 0x802496B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80249D2C_ovl28(rdram, ctx);
        goto after_1;
    // 0x802496B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x802496B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802496B8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802496BC: jr          $ra
    // 0x802496C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802496C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022CC38_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CC38: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022CC3C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022CC40: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022CC44: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022CC48: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022CC4C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022CC50: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022CC54: beq         $v1, $v0, L_8022CCD0
    if (ctx->r3 == ctx->r2) {
        // 0x8022CC58: addiu       $s1, $s0, 0x328
        ctx->r17 = ADD32(ctx->r16, 0X328);
            goto L_8022CCD0;
    }
    // 0x8022CC58: addiu       $s1, $s0, 0x328
    ctx->r17 = ADD32(ctx->r16, 0X328);
    // 0x8022CC5C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022CC60: beql        $v0, $zero, L_8022CC78
    if (ctx->r2 == 0) {
        // 0x8022CC64: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022CC78;
    }
    goto skip_0;
    // 0x8022CC64: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022CC68: beq         $v1, $zero, L_8022CC90
    if (ctx->r3 == 0) {
        // 0x8022CC6C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022CC90;
    }
    // 0x8022CC6C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022CC70: j           L_8022CE38
    // 0x8022CC74: nop

        goto L_8022CE38;
    // 0x8022CC74: nop

L_8022CC78:
    // 0x8022CC78: beq         $v1, $v0, L_8022CCE0
    if (ctx->r3 == ctx->r2) {
        // 0x8022CC7C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022CCE0;
    }
    // 0x8022CC7C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022CC80: beq         $v1, $v0, L_8022CDE8
    if (ctx->r3 == ctx->r2) {
        // 0x8022CC84: nop
    
            goto L_8022CDE8;
    }
    // 0x8022CC84: nop

    // 0x8022CC88: j           L_8022CE38
    // 0x8022CC8C: nop

        goto L_8022CE38;
    // 0x8022CC8C: nop

L_8022CC90:
    // 0x8022CC90: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022CC94: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8022CC98: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022CC9C: addiu       $v0, $zero, -0x10
    ctx->r2 = ADD32(0, -0X10);
    // 0x8022CCA0: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022CCA4: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8022CCA8: lbu         $v0, 0x3044($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3044);
    // 0x8022CCAC: lhu         $a0, 0x328($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X328);
    // 0x8022CCB0: lh          $v1, 0x6E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X6E);
    // 0x8022CCB4: sh          $zero, 0x330($s0)
    MEM_H(0X330, ctx->r16) = 0;
    // 0x8022CCB8: sh          $v0, 0x32C($s0)
    MEM_H(0X32C, ctx->r16) = ctx->r2;
    // 0x8022CCBC: andi        $v0, $a0, 0xFFF7
    ctx->r2 = ctx->r4 & 0XFFF7;
    // 0x8022CCC0: bgtz        $v1, L_8022CCD0
    if (SIGNED(ctx->r3) > 0) {
        // 0x8022CCC4: sh          $v0, 0x328($s0)
        MEM_H(0X328, ctx->r16) = ctx->r2;
            goto L_8022CCD0;
    }
    // 0x8022CCC4: sh          $v0, 0x328($s0)
    MEM_H(0X328, ctx->r16) = ctx->r2;
    // 0x8022CCC8: andi        $v0, $a0, 0xFFF3
    ctx->r2 = ctx->r4 & 0XFFF3;
    // 0x8022CCCC: sh          $v0, 0x328($s0)
    MEM_H(0X328, ctx->r16) = ctx->r2;
L_8022CCD0:
    // 0x8022CCD0: lh          $v0, 0x4($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X4);
    // 0x8022CCD4: bgez        $v0, L_8022CCE0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022CCD8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022CCE0;
    }
    // 0x8022CCD8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022CCDC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022CCE0:
    // 0x8022CCE0: lhu         $v1, 0x4($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X4);
    // 0x8022CCE4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022CCE8: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8022CCEC: sh          $v1, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r3;
    // 0x8022CCF0: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8022CCF4: lhu         $a1, 0x44($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X44);
    // 0x8022CCF8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022CCFC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022CD00: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022CD04: lbu         $v0, 0x3045($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X3045);
    // 0x8022CD08: sll         $a1, $a1, 20
    ctx->r5 = S32(ctx->r5 << 20);
    // 0x8022CD0C: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8022CD10: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022CD14: sll         $a2, $v0, 23
    ctx->r6 = S32(ctx->r2 << 23);
    // 0x8022CD18: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8022CD1C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022CD20: jal         0x8004DA90
    // 0x8022CD24: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x8022CD24: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022CD28: jal         0x80040F30
    // 0x8022CD2C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_1;
    // 0x8022CD2C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022CD30: beq         $v0, $zero, L_8022CE38
    if (ctx->r2 == 0) {
        // 0x8022CD34: sw          $v0, 0x48($s1)
        MEM_W(0X48, ctx->r17) = ctx->r2;
            goto L_8022CE38;
    }
    // 0x8022CD34: sw          $v0, 0x48($s1)
    MEM_W(0X48, ctx->r17) = ctx->r2;
    // 0x8022CD38: andi        $v0, $v0, 0xF00
    ctx->r2 = ctx->r2 & 0XF00;
    // 0x8022CD3C: bnel        $v0, $zero, L_8022CD44
    if (ctx->r2 != 0) {
        // 0x8022CD40: sh          $zero, 0x44($s0)
        MEM_H(0X44, ctx->r16) = 0;
            goto L_8022CD44;
    }
    goto skip_1;
    // 0x8022CD40: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    skip_1:
L_8022CD44:
    // 0x8022CD44: lw          $v0, 0x48($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X48);
    // 0x8022CD48: andi        $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 & 0X1000;
    // 0x8022CD4C: beq         $v0, $zero, L_8022CE38
    if (ctx->r2 == 0) {
        // 0x8022CD50: addiu       $a0, $zero, 0xDE
        ctx->r4 = ADD32(0, 0XDE);
            goto L_8022CE38;
    }
    // 0x8022CD50: addiu       $a0, $zero, 0xDE
    ctx->r4 = ADD32(0, 0XDE);
    // 0x8022CD54: jal         0x8002A33C
    // 0x8022CD58: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x8022CD58: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_2:
    // 0x8022CD5C: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8022CD60: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x8022CD64: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x8022CD68: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022CD6C: sltiu       $v0, $v0, 0xA
    ctx->r2 = ctx->r2 < 0XA ? 1 : 0;
    // 0x8022CD70: beq         $v0, $zero, L_8022CDB4
    if (ctx->r2 == 0) {
        // 0x8022CD74: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022CDB4;
    }
    // 0x8022CD74: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022CD78: lbu         $v1, 0xAC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022CD7C: lbu         $a0, 0xB($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XB);
    // 0x8022CD80: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022CD84: addiu       $v0, $zero, -0x10
    ctx->r2 = ADD32(0, -0X10);
    // 0x8022CD88: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022CD8C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022CD90: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x8022CD94: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022CD98: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x8022CD9C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8022CDA0: lbu         $v1, 0x3044($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X3044);
    // 0x8022CDA4: ori         $v0, $v0, 0x8
    ctx->r2 = ctx->r2 | 0X8;
    // 0x8022CDA8: sh          $v1, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r3;
    // 0x8022CDAC: j           L_8022CE38
    // 0x8022CDB0: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
        goto L_8022CE38;
    // 0x8022CDB0: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8022CDB4:
    // 0x8022CDB4: lh          $v0, 0x6E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X6E);
    // 0x8022CDB8: bgtz        $v0, L_8022CDD0
    if (SIGNED(ctx->r2) > 0) {
        // 0x8022CDBC: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022CDD0;
    }
    // 0x8022CDBC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022CDC0: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022CDC4: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022CDC8: j           L_8022CE38
    // 0x8022CDCC: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
        goto L_8022CE38;
    // 0x8022CDCC: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8022CDD0:
    // 0x8022CDD0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022CDD4: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x8022CDD8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022CDDC: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    // 0x8022CDE0: j           L_8022CE38
    // 0x8022CDE4: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
        goto L_8022CE38;
    // 0x8022CDE4: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_8022CDE8:
    // 0x8022CDE8: lhu         $v0, 0x32C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X32C);
    // 0x8022CDEC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022CDF0: sh          $v0, 0x32C($s0)
    MEM_H(0X32C, ctx->r16) = ctx->r2;
    // 0x8022CDF4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022CDF8: bgez        $v0, L_8022CE10
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022CDFC: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022CE10;
    }
    // 0x8022CDFC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022CE00: lhu         $v0, 0x328($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X328);
    // 0x8022CE04: ori         $v0, $v0, 0x9
    ctx->r2 = ctx->r2 | 0X9;
    // 0x8022CE08: j           L_8022CE38
    // 0x8022CE0C: sh          $v0, 0x328($s0)
    MEM_H(0X328, ctx->r16) = ctx->r2;
        goto L_8022CE38;
    // 0x8022CE0C: sh          $v0, 0x328($s0)
    MEM_H(0X328, ctx->r16) = ctx->r2;
L_8022CE10:
    // 0x8022CE10: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022CE14: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022CE18: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022CE1C: jal         0x8004F820
    // 0x8022CE20: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x8022CE20: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    after_3:
    // 0x8022CE24: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022CE28: sh          $v0, 0x36C($s0)
    MEM_H(0X36C, ctx->r16) = ctx->r2;
    // 0x8022CE2C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022CE30: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022CE34: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
L_8022CE38:
    // 0x8022CE38: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022CE3C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022CE40: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022CE44: jr          $ra
    // 0x8022CE48: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022CE48: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80242890_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80242890: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80242894: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80242898: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8024289C: lui         $t2, 0x3D08
    ctx->r10 = S32(0X3D08 << 16);
    // 0x802428A0: ori         $t2, $t2, 0xE
    ctx->r10 = ctx->r10 | 0XE;
    // 0x802428A4: lui         $t1, 0x2C80
    ctx->r9 = S32(0X2C80 << 16);
    // 0x802428A8: ori         $t1, $t1, 0x8080
    ctx->r9 = ctx->r9 | 0X8080;
    // 0x802428AC: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x802428B0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802428B4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802428B8: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x802428BC: lhu         $v1, 0x1C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X1C);
    // 0x802428C0: lhu         $a3, 0x20($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0X20);
    // 0x802428C4: lhu         $t0, 0x24($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X24);
    // 0x802428C8: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x802428CC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x802428D0: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x802428D4: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x802428D8: sw          $t2, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->r10;
    // 0x802428DC: sw          $t1, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->r9;
    // 0x802428E0: ori         $v0, $v0, 0x22
    ctx->r2 = ctx->r2 | 0X22;
    // 0x802428E4: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x802428E8: sh          $v1, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r3;
    // 0x802428EC: sh          $v1, 0x90($s0)
    MEM_H(0X90, ctx->r16) = ctx->r3;
    // 0x802428F0: sh          $a3, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r7;
    // 0x802428F4: sh          $a3, 0x92($s0)
    MEM_H(0X92, ctx->r16) = ctx->r7;
    // 0x802428F8: sh          $t0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r8;
    // 0x802428FC: jal         0x8009A3B4
    // 0x80242900: sh          $t0, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r8;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80242900: sh          $t0, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r8;
    after_0:
    // 0x80242904: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80242908: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8024290C: jal         0x8009A3B4
    // 0x80242910: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80242910: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x80242914: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x80242918: addiu       $v0, $zero, 0xE0
    ctx->r2 = ADD32(0, 0XE0);
    // 0x8024291C: sb          $v0, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r2;
    // 0x80242920: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80242924: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
    // 0x80242928: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8024292C: sh          $v0, 0x98($s0)
    MEM_H(0X98, ctx->r16) = ctx->r2;
    // 0x80242930: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x80242934: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x80242938: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x8024293C: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x80242940: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80242944: beq         $v1, $v0, L_80242A58
    if (ctx->r3 == ctx->r2) {
        // 0x80242948: sh          $zero, 0x9A($s0)
        MEM_H(0X9A, ctx->r16) = 0;
            goto L_80242A58;
    }
    // 0x80242948: sh          $zero, 0x9A($s0)
    MEM_H(0X9A, ctx->r16) = 0;
    // 0x8024294C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80242950: beql        $v0, $zero, L_80242968
    if (ctx->r2 == 0) {
        // 0x80242954: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80242968;
    }
    goto skip_0;
    // 0x80242954: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80242958: beq         $v1, $zero, L_80242990
    if (ctx->r3 == 0) {
        // 0x8024295C: nop
    
            goto L_80242990;
    }
    // 0x8024295C: nop

    // 0x80242960: j           L_80242AF4
    // 0x80242964: nop

        goto L_80242AF4;
    // 0x80242964: nop

L_80242968:
    // 0x80242968: beq         $v1, $v0, L_80242AA4
    if (ctx->r3 == ctx->r2) {
        // 0x8024296C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80242AA4;
    }
    // 0x8024296C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80242970: bne         $v1, $v0, L_80242AF4
    if (ctx->r3 != ctx->r2) {
        // 0x80242974: lui         $v0, 0x2C80
        ctx->r2 = S32(0X2C80 << 16);
            goto L_80242AF4;
    }
    // 0x80242974: lui         $v0, 0x2C80
    ctx->r2 = S32(0X2C80 << 16);
    // 0x80242978: ori         $v0, $v0, 0x80FF
    ctx->r2 = ctx->r2 | 0X80FF;
    // 0x8024297C: addiu       $v1, $zero, 0x30
    ctx->r3 = ADD32(0, 0X30);
    // 0x80242980: sw          $v0, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->r2;
    // 0x80242984: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x80242988: sh          $v1, 0x98($s0)
    MEM_H(0X98, ctx->r16) = ctx->r3;
    // 0x8024298C: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
L_80242990:
    // 0x80242990: lh          $a0, 0x64($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X64);
    // 0x80242994: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80242998: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8024299C: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x802429A0: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x802429A4: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x802429A8: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x802429AC: jal         0x800324B4
    // 0x802429B0: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    func_800324B4_D8B4(rdram, ctx);
        goto after_2;
    // 0x802429B0: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    after_2:
    // 0x802429B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802429B8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802429BC: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x802429C0: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
    // 0x802429C4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802429C8: srl         $v1, $v1, 10
    ctx->r3 = S32(U32(ctx->r3) >> 10);
    // 0x802429CC: jal         0x8004DDE8
    // 0x802429D0: sh          $v1, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r3;
    func_8004DDE8_291E8(rdram, ctx);
        goto after_3;
    // 0x802429D0: sh          $v1, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r3;
    after_3:
    // 0x802429D4: lui         $v1, 0x38E3
    ctx->r3 = S32(0X38E3 << 16);
    // 0x802429D8: ori         $v1, $v1, 0x8E39
    ctx->r3 = ctx->r3 | 0X8E39;
    // 0x802429DC: addiu       $v0, $v0, 0x24
    ctx->r2 = ADD32(ctx->r2, 0X24);
    // 0x802429E0: multu       $v0, $v1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802429E4: lh          $v1, 0x3EA($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X3EA);
    // 0x802429E8: lh          $v0, 0x16($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X16);
    // 0x802429EC: mfhi        $t3
    ctx->r11 = hi;
    // 0x802429F0: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x802429F4: srl         $v0, $t3, 3
    ctx->r2 = S32(U32(ctx->r11) >> 3);
    // 0x802429F8: div         $zero, $v1, $v0
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r2)));
    // 0x802429FC: bne         $v0, $zero, L_80242A08
    if (ctx->r2 != 0) {
        // 0x80242A00: nop
    
            goto L_80242A08;
    }
    // 0x80242A00: nop

    // 0x80242A04: break       7
    do_break(2149853700);
L_80242A08:
    // 0x80242A08: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80242A0C: bne         $v0, $at, L_80242A20
    if (ctx->r2 != ctx->r1) {
        // 0x80242A10: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80242A20;
    }
    // 0x80242A10: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80242A14: bne         $v1, $at, L_80242A20
    if (ctx->r3 != ctx->r1) {
        // 0x80242A18: nop
    
            goto L_80242A20;
    }
    // 0x80242A18: nop

    // 0x80242A1C: break       6
    do_break(2149853724);
L_80242A20:
    // 0x80242A20: mflo        $v1
    ctx->r3 = lo;
    // 0x80242A24: lh          $a0, 0x64($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X64);
    // 0x80242A28: nop

    // 0x80242A2C: jal         0x80032498
    // 0x80242A30: sh          $v1, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r3;
    func_80032498_D898(rdram, ctx);
        goto after_4;
    // 0x80242A30: sh          $v1, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r3;
    after_4:
    // 0x80242A34: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80242A38: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
    // 0x80242A3C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80242A40: srl         $v1, $v1, 10
    ctx->r3 = S32(U32(ctx->r3) >> 10);
    // 0x80242A44: sh          $v1, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r3;
    // 0x80242A48: sh          $zero, 0x4C($s0)
    MEM_H(0X4C, ctx->r16) = 0;
    // 0x80242A4C: sh          $zero, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = 0;
    // 0x80242A50: j           L_80242AF4
    // 0x80242A54: sh          $zero, 0x50($s0)
    MEM_H(0X50, ctx->r16) = 0;
        goto L_80242AF4;
    // 0x80242A54: sh          $zero, 0x50($s0)
    MEM_H(0X50, ctx->r16) = 0;
L_80242A58:
    // 0x80242A58: lhu         $v1, 0x64($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X64);
    // 0x80242A5C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80242A60: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80242A64: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x80242A68: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x80242A6C: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80242A70: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80242A74: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80242A78: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    // 0x80242A7C: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80242A80: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80242A84: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x80242A88: sh          $zero, 0x4C($s0)
    MEM_H(0X4C, ctx->r16) = 0;
    // 0x80242A8C: sh          $zero, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = 0;
    // 0x80242A90: sh          $zero, 0x50($s0)
    MEM_H(0X50, ctx->r16) = 0;
    // 0x80242A94: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80242A98: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80242A9C: j           L_80242AF4
    // 0x80242AA0: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
        goto L_80242AF4;
    // 0x80242AA0: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
L_80242AA4:
    // 0x80242AA4: lbu         $v1, 0xC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XC);
    // 0x80242AA8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80242AAC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80242AB0: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x80242AB4: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x80242AB8: lhu         $v0, 0x64($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X64);
    // 0x80242ABC: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80242AC0: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80242AC4: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    // 0x80242AC8: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80242ACC: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x80242AD0: sh          $zero, 0x4C($s0)
    MEM_H(0X4C, ctx->r16) = 0;
    // 0x80242AD4: sh          $zero, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = 0;
    // 0x80242AD8: sh          $zero, 0x50($s0)
    MEM_H(0X50, ctx->r16) = 0;
    // 0x80242ADC: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80242AE0: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80242AE4: sll         $v1, $v1, 24
    ctx->r3 = S32(ctx->r3 << 24);
    // 0x80242AE8: sra         $v1, $v1, 20
    ctx->r3 = S32(SIGNED(ctx->r3) >> 20);
    // 0x80242AEC: sh          $v1, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r3;
    // 0x80242AF0: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_80242AF4:
    // 0x80242AF4: jal         0x8003F754
    // 0x80242AF8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003F754_1AB54(rdram, ctx);
        goto after_5;
    // 0x80242AF8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80242AFC: beql        $v0, $zero, L_80242B10
    if (ctx->r2 == 0) {
        // 0x80242B00: sw          $zero, 0x9C($s0)
        MEM_W(0X9C, ctx->r16) = 0;
            goto L_80242B10;
    }
    goto skip_1;
    // 0x80242B00: sw          $zero, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = 0;
    skip_1:
    // 0x80242B04: jal         0x8004F4F8
    // 0x80242B08: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_6;
    // 0x80242B08: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x80242B0C: sw          $zero, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = 0;
L_80242B10:
    // 0x80242B10: addiu       $a0, $zero, 0x1AF
    ctx->r4 = ADD32(0, 0X1AF);
    // 0x80242B14: jal         0x8002A33C
    // 0x80242B18: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_7;
    // 0x80242B18: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_7:
    // 0x80242B1C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80242B20: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80242B24: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80242B28: jr          $ra
    // 0x80242B2C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80242B2C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022EA4C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022EA4C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022EA50: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022EA54: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022EA58: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8022EA5C: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x8022EA60: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022EA64: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022EA68: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022EA6C: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x8022EA70: addiu       $v0, $zero, 0x2A
    ctx->r2 = ADD32(0, 0X2A);
    // 0x8022EA74: bne         $v1, $v0, L_8022EA90
    if (ctx->r3 != ctx->r2) {
        // 0x8022EA78: addiu       $s2, $s0, 0x348
        ctx->r18 = ADD32(ctx->r16, 0X348);
            goto L_8022EA90;
    }
    // 0x8022EA78: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x8022EA7C: lui         $s1, 0x8025
    ctx->r17 = S32(0X8025 << 16);
    // 0x8022EA80: addiu       $s1, $s1, 0x3780
    ctx->r17 = ADD32(ctx->r17, 0X3780);
    // 0x8022EA84: lui         $s3, 0x8025
    ctx->r19 = S32(0X8025 << 16);
    // 0x8022EA88: j           L_8022EAA0
    // 0x8022EA8C: addiu       $s3, $s3, 0x37A0
    ctx->r19 = ADD32(ctx->r19, 0X37A0);
        goto L_8022EAA0;
    // 0x8022EA8C: addiu       $s3, $s3, 0x37A0
    ctx->r19 = ADD32(ctx->r19, 0X37A0);
L_8022EA90:
    // 0x8022EA90: lui         $s1, 0x8025
    ctx->r17 = S32(0X8025 << 16);
    // 0x8022EA94: addiu       $s1, $s1, 0x3770
    ctx->r17 = ADD32(ctx->r17, 0X3770);
    // 0x8022EA98: lui         $s3, 0x8025
    ctx->r19 = S32(0X8025 << 16);
    // 0x8022EA9C: addiu       $s3, $s3, 0x3790
    ctx->r19 = ADD32(ctx->r19, 0X3790);
L_8022EAA0:
    // 0x8022EAA0: lui         $s4, 0x8025
    ctx->r20 = S32(0X8025 << 16);
    // 0x8022EAA4: jal         0x800A3450
    // 0x8022EAA8: addiu       $s4, $s4, 0x37B0
    ctx->r20 = ADD32(ctx->r20, 0X37B0);
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8022EAA8: addiu       $s4, $s4, 0x37B0
    ctx->r20 = ADD32(ctx->r20, 0X37B0);
    after_0:
    // 0x8022EAAC: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022EAB0: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x8022EAB4: lbu         $s1, 0x0($v0)
    ctx->r17 = MEM_BU(ctx->r2, 0X0);
    // 0x8022EAB8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022EABC: andi        $v1, $s1, 0xFF
    ctx->r3 = ctx->r17 & 0XFF;
    // 0x8022EAC0: beq         $v1, $v0, L_8022EB4C
    if (ctx->r3 == ctx->r2) {
        // 0x8022EAC4: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8022EB4C;
    }
    // 0x8022EAC4: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022EAC8: beql        $v0, $zero, L_8022EAE0
    if (ctx->r2 == 0) {
        // 0x8022EACC: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022EAE0;
    }
    goto skip_0;
    // 0x8022EACC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022EAD0: beq         $v1, $zero, L_8022EAF0
    if (ctx->r3 == 0) {
        // 0x8022EAD4: nop
    
            goto L_8022EAF0;
    }
    // 0x8022EAD4: nop

    // 0x8022EAD8: j           L_8022EBDC
    // 0x8022EADC: nop

        goto L_8022EBDC;
    // 0x8022EADC: nop

L_8022EAE0:
    // 0x8022EAE0: beq         $v1, $v0, L_8022EB60
    if (ctx->r3 == ctx->r2) {
        // 0x8022EAE4: nop
    
            goto L_8022EB60;
    }
    // 0x8022EAE4: nop

    // 0x8022EAE8: j           L_8022EBDC
    // 0x8022EAEC: nop

        goto L_8022EBDC;
    // 0x8022EAEC: nop

L_8022EAF0:
    // 0x8022EAF0: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8022EAF4: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x8022EAF8: bne         $v0, $zero, L_8022EB1C
    if (ctx->r2 != 0) {
        // 0x8022EAFC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022EB1C;
    }
    // 0x8022EAFC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022EB00: jal         0x800A3450
    // 0x8022EB04: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x8022EB04: nop

    after_1:
    // 0x8022EB08: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022EB0C: addu        $v0, $s3, $v0
    ctx->r2 = ADD32(ctx->r19, ctx->r2);
    // 0x8022EB10: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x8022EB14: beq         $v0, $zero, L_8022EB28
    if (ctx->r2 == 0) {
        // 0x8022EB18: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022EB28;
    }
    // 0x8022EB18: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022EB1C:
    // 0x8022EB1C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8022EB20: j           L_8022EB3C
    // 0x8022EB24: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_8022EB3C;
    // 0x8022EB24: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8022EB28:
    // 0x8022EB28: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022EB2C: jal         0x8022FEB8
    // 0x8022EB30: nop

    func_8022FEB8_ovl28(rdram, ctx);
        goto after_2;
    // 0x8022EB30: nop

    after_2:
    // 0x8022EB34: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022EB38: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_8022EB3C:
    // 0x8022EB3C: jal         0x8022FEF8
    // 0x8022EB40: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_8022FEF8_ovl28(rdram, ctx);
        goto after_3;
    // 0x8022EB40: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_3:
    // 0x8022EB44: j           L_8022EC00
    // 0x8022EB48: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
        goto L_8022EC00;
    // 0x8022EB48: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
L_8022EB4C:
    // 0x8022EB4C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022EB50: jal         0x8022FEA8
    // 0x8022EB54: nop

    func_8022FEA8_ovl28(rdram, ctx);
        goto after_4;
    // 0x8022EB54: nop

    after_4:
    // 0x8022EB58: j           L_8022EC00
    // 0x8022EB5C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_8022EC00;
    // 0x8022EB5C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8022EB60:
    // 0x8022EB60: lhu         $v1, 0x14($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X14);
    // 0x8022EB64: lhu         $v0, 0xC($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0XC);
    // 0x8022EB68: lhu         $a2, 0x14($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X14);
    // 0x8022EB6C: lhu         $a1, 0x18($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X18);
    // 0x8022EB70: lhu         $a0, 0x16($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X16);
    // 0x8022EB74: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8022EB78: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x8022EB7C: sra         $a3, $a2, 17
    ctx->r7 = S32(SIGNED(ctx->r6) >> 17);
    // 0x8022EB80: lhu         $v0, 0x10($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X10);
    // 0x8022EB84: addu        $v1, $v1, $a3
    ctx->r3 = ADD32(ctx->r3, ctx->r7);
    // 0x8022EB88: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022EB8C: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8022EB90: andi        $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 & 0XFFFF;
    // 0x8022EB94: slt         $v1, $v1, $a2
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x8022EB98: subu        $a1, $a1, $v0
    ctx->r5 = SUB32(ctx->r5, ctx->r2);
    // 0x8022EB9C: sra         $v0, $a0, 17
    ctx->r2 = S32(SIGNED(ctx->r4) >> 17);
    // 0x8022EBA0: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x8022EBA4: beq         $v1, $zero, L_8022EBD4
    if (ctx->r3 == 0) {
        // 0x8022EBA8: sra         $a0, $a0, 16
        ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
            goto L_8022EBD4;
    }
    // 0x8022EBA8: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8022EBAC: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x8022EBB0: slt         $v0, $v0, $a0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8022EBB4: beq         $v0, $zero, L_8022EBD4
    if (ctx->r2 == 0) {
        // 0x8022EBB8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022EBD4;
    }
    // 0x8022EBB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022EBBC: jal         0x8022FEF8
    // 0x8022EBC0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8022FEF8_ovl28(rdram, ctx);
        goto after_5;
    // 0x8022EBC0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x8022EBC4: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022EBC8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022EBCC: j           L_8022EC00
    // 0x8022EBD0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_8022EC00;
    // 0x8022EBD0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8022EBD4:
    // 0x8022EBD4: j           L_8022EC00
    // 0x8022EBD8: addiu       $s1, $zero, 0xFF
    ctx->r17 = ADD32(0, 0XFF);
        goto L_8022EC00;
    // 0x8022EBD8: addiu       $s1, $zero, 0xFF
    ctx->r17 = ADD32(0, 0XFF);
L_8022EBDC:
    // 0x8022EBDC: jal         0x800A3450
    // 0x8022EBE0: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_6;
    // 0x8022EBE0: nop

    after_6:
    // 0x8022EBE4: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022EBE8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022EBEC: jal         0x8022FEB8
    // 0x8022EBF0: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    func_8022FEB8_ovl28(rdram, ctx);
        goto after_7;
    // 0x8022EBF0: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    after_7:
    // 0x8022EBF4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022EBF8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022EBFC: sh          $v0, 0x1E($s2)
    MEM_H(0X1E, ctx->r18) = ctx->r2;
L_8022EC00:
    // 0x8022EC00: jal         0x800A3450
    // 0x8022EC04: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_8;
    // 0x8022EC04: nop

    after_8:
    // 0x8022EC08: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022EC0C: addu        $v0, $s4, $v0
    ctx->r2 = ADD32(ctx->r20, ctx->r2);
    // 0x8022EC10: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x8022EC14: andi        $v1, $s1, 0xFF
    ctx->r3 = ctx->r17 & 0XFF;
    // 0x8022EC18: sh          $v0, 0x8($s2)
    MEM_H(0X8, ctx->r18) = ctx->r2;
    // 0x8022EC1C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022EC20: beq         $v1, $v0, L_8022EC38
    if (ctx->r3 == ctx->r2) {
        // 0x8022EC24: nop
    
            goto L_8022EC38;
    }
    // 0x8022EC24: nop

    // 0x8022EC28: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022EC2C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022EC30: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x8022EC34: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022EC38:
    // 0x8022EC38: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8022EC3C: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x8022EC40: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022EC44: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022EC48: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022EC4C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022EC50: jr          $ra
    // 0x8022EC54: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022EC54: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022E0A4_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E0A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022E0A8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022E0AC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022E0B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022E0B4: lh          $a0, 0x64($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X64);
    // 0x8022E0B8: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x8022E0BC: jal         0x8004FA7C
    // 0x8022E0C0: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x8022E0C0: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_0:
    // 0x8022E0C4: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x8022E0C8: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x8022E0CC: bne         $v0, $zero, L_8022E0F8
    if (ctx->r2 != 0) {
        // 0x8022E0D0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022E0F8;
    }
    // 0x8022E0D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E0D4: lhu         $a0, 0x35C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X35C);
    // 0x8022E0D8: lhu         $v1, 0x366($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X366);
    // 0x8022E0DC: lhu         $a1, 0x35E($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X35E);
    // 0x8022E0E0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022E0E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E0E8: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8022E0EC: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x8022E0F0: sh          $v0, 0x35C($s0)
    MEM_H(0X35C, ctx->r16) = ctx->r2;
    // 0x8022E0F4: sh          $v1, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = ctx->r3;
L_8022E0F8:
    // 0x8022E0F8: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022E0FC: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x8022E100: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022E104: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8022E108: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022E10C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022E110: jr          $ra
    // 0x8022E114: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022E114: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023A7C4_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023A7C4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023A7C8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023A7CC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8023A7D0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023A7D4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023A7D8: lbu         $v1, 0xA($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA);
    // 0x8023A7DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023A7E0: beq         $v1, $v0, L_8023A808
    if (ctx->r3 == ctx->r2) {
        // 0x8023A7E4: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8023A808;
    }
    // 0x8023A7E4: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8023A7E8: beq         $v0, $zero, L_8023A884
    if (ctx->r2 == 0) {
        // 0x8023A7EC: nop
    
            goto L_8023A884;
    }
    // 0x8023A7EC: nop

    // 0x8023A7F0: bne         $v1, $zero, L_8023A884
    if (ctx->r3 != 0) {
        // 0x8023A7F4: nop
    
            goto L_8023A884;
    }
    // 0x8023A7F4: nop

    // 0x8023A7F8: jal         0x8023A8A0
    // 0x8023A7FC: nop

    func_8023A8A0_ovl28(rdram, ctx);
        goto after_0;
    // 0x8023A7FC: nop

    after_0:
    // 0x8023A800: j           L_8023A88C
    // 0x8023A804: nop

        goto L_8023A88C;
    // 0x8023A804: nop

L_8023A808:
    // 0x8023A808: jal         0x8004EFE4
    // 0x8023A80C: nop

    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_1;
    // 0x8023A80C: nop

    after_1:
    // 0x8023A810: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8023A814: beq         $s0, $zero, L_8023A868
    if (ctx->r16 == 0) {
        // 0x8023A818: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023A868;
    }
    // 0x8023A818: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023A81C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8023A820: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8023A824: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x8023A828: sb          $zero, 0x3($s0)
    MEM_B(0X3, ctx->r16) = 0;
    // 0x8023A82C: lbu         $v0, 0x1($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X1);
    // 0x8023A830: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8023A834: addiu       $a1, $s1, 0x188
    ctx->r5 = ADD32(ctx->r17, 0X188);
    // 0x8023A838: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8023A83C: jal         0x8009A3B4
    // 0x8023A840: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8023A840: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
    after_2:
    // 0x8023A844: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x8023A848: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x8023A84C: lh          $a0, 0x18($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X18);
    // 0x8023A850: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023A854: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8023A858: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8023A85C: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x8023A860: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x8023A864: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
L_8023A868:
    // 0x8023A868: addiu       $a0, $zero, 0x1BA
    ctx->r4 = ADD32(0, 0X1BA);
    // 0x8023A86C: jal         0x8002A33C
    // 0x8023A870: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_3;
    // 0x8023A870: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_3:
    // 0x8023A874: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x8023A878: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023A87C: j           L_8023A88C
    // 0x8023A880: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
        goto L_8023A88C;
    // 0x8023A880: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_8023A884:
    // 0x8023A884: jal         0x8023A968
    // 0x8023A888: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8023A968_ovl28(rdram, ctx);
        goto after_4;
    // 0x8023A888: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_4:
L_8023A88C:
    // 0x8023A88C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8023A890: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023A894: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023A898: jr          $ra
    // 0x8023A89C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023A89C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8024DD98_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024DD98: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8024DD9C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8024DDA0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8024DDA4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8024DDA8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8024DDAC: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8024DDB0: beq         $v1, $zero, L_8024DDCC
    if (ctx->r3 == 0) {
        // 0x8024DDB4: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_8024DDCC;
    }
    // 0x8024DDB4: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x8024DDB8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8024DDBC: beq         $v1, $v0, L_8024DDF4
    if (ctx->r3 == ctx->r2) {
        // 0x8024DDC0: nop
    
            goto L_8024DDF4;
    }
    // 0x8024DDC0: nop

    // 0x8024DDC4: j           L_8024DE18
    // 0x8024DDC8: nop

        goto L_8024DE18;
    // 0x8024DDC8: nop

L_8024DDCC:
    // 0x8024DDCC: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x8024DDD0: addiu       $a1, $zero, 0x200
    ctx->r5 = ADD32(0, 0X200);
    // 0x8024DDD4: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x8024DDD8: addiu       $a3, $a3, 0x49C4
    ctx->r7 = ADD32(ctx->r7, 0X49C4);
    // 0x8024DDDC: jal         0x8003491C
    // 0x8024DDE0: addiu       $a2, $zero, 0x400
    ctx->r6 = ADD32(0, 0X400);
    func_8003491C_FD1C(rdram, ctx);
        goto after_0;
    // 0x8024DDE0: addiu       $a2, $zero, 0x400
    ctx->r6 = ADD32(0, 0X400);
    after_0:
    // 0x8024DDE4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8024DDE8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8024DDEC: j           L_8024DE18
    // 0x8024DDF0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_8024DE18;
    // 0x8024DDF0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8024DDF4:
    // 0x8024DDF4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8024DDF8: lbu         $v0, 0x434F($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X434F);
    // 0x8024DDFC: bne         $v0, $zero, L_8024DE18
    if (ctx->r2 != 0) {
        // 0x8024DE00: nop
    
            goto L_8024DE18;
    }
    // 0x8024DE00: nop

    // 0x8024DE04: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x8024DE08: sltiu       $v0, $v0, 0x5A
    ctx->r2 = ctx->r2 < 0X5A ? 1 : 0;
    // 0x8024DE0C: bnel        $v0, $zero, L_8024DE18
    if (ctx->r2 != 0) {
        // 0x8024DE10: sb          $zero, 0xA($s0)
        MEM_B(0XA, ctx->r16) = 0;
            goto L_8024DE18;
    }
    goto skip_0;
    // 0x8024DE10: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    skip_0:
    // 0x8024DE14: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_8024DE18:
    // 0x8024DE18: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x8024DE1C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8024DE20: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x8024DE24: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
    // 0x8024DE28: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8024DE2C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8024DE30: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8024DE34: jr          $ra
    // 0x8024DE38: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8024DE38: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8024DE3C: nop

;}
RECOMP_FUNC void func_80241874_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80241874: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80241878: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x8024187C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80241880: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x80241884: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x80241888: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x8024188C: addiu       $s3, $s1, 0x440
    ctx->r19 = ADD32(ctx->r17, 0X440);
    // 0x80241890: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x80241894: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x80241898: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x8024189C: lui         $s5, 0x8025
    ctx->r21 = S32(0X8025 << 16);
    // 0x802418A0: addiu       $s5, $s5, 0x4ADC
    ctx->r21 = ADD32(ctx->r21, 0X4ADC);
    // 0x802418A4: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x802418A8: addiu       $s0, $zero, 0x8
    ctx->r16 = ADD32(0, 0X8);
    // 0x802418AC: sw          $ra, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r31;
    // 0x802418B0: sll         $v0, $s2, 3
    ctx->r2 = S32(ctx->r18 << 3);
L_802418B4:
    // 0x802418B4: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x802418B8: addu        $a0, $a0, $s0
    ctx->r4 = ADD32(ctx->r4, ctx->r16);
    // 0x802418BC: lbu         $a0, 0x4A4B($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X4A4B);
    // 0x802418C0: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x802418C4: addiu       $a1, $a1, 0x4A4C
    ctx->r5 = ADD32(ctx->r5, 0X4A4C);
    // 0x802418C8: addu        $a1, $v0, $a1
    ctx->r5 = ADD32(ctx->r2, ctx->r5);
    // 0x802418CC: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x802418D0: sll         $a0, $a0, 5
    ctx->r4 = S32(ctx->r4 << 5);
    // 0x802418D4: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    // 0x802418D8: jal         0x80031270
    // 0x802418DC: addu        $a0, $s1, $a0
    ctx->r4 = ADD32(ctx->r17, ctx->r4);
    func_80031270_C670(rdram, ctx);
        goto after_0;
    // 0x802418DC: addu        $a0, $s1, $a0
    ctx->r4 = ADD32(ctx->r17, ctx->r4);
    after_0:
    // 0x802418E0: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x802418E4: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x802418E8: lbu         $v0, 0x4A4B($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4A4B);
    // 0x802418EC: lhu         $v1, 0x28($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X28);
    // 0x802418F0: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x802418F4: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x802418F8: lhu         $v0, 0x180($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X180);
    // 0x802418FC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80241900: sh          $v1, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r3;
    // 0x80241904: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80241908: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x8024190C: lbu         $v0, 0x4A4B($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4A4B);
    // 0x80241910: lhu         $v1, 0x2A($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X2A);
    // 0x80241914: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80241918: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x8024191C: lhu         $v0, 0x182($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X182);
    // 0x80241920: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80241924: sh          $v1, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r3;
    // 0x80241928: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8024192C: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x80241930: lbu         $v0, 0x4A4B($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4A4B);
    // 0x80241934: lhu         $v1, 0x2C($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X2C);
    // 0x80241938: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8024193C: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x80241940: lhu         $v0, 0x184($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X184);
    // 0x80241944: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80241948: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8024194C: sh          $v1, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r3;
    // 0x80241950: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x80241954: addu        $a1, $a1, $s0
    ctx->r5 = ADD32(ctx->r5, ctx->r16);
    // 0x80241958: lbu         $a1, 0x4A4A($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X4A4A);
    // 0x8024195C: lbu         $v1, 0x1($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X1);
    // 0x80241960: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x80241964: addu        $v0, $s3, $s0
    ctx->r2 = ADD32(ctx->r19, ctx->r16);
    // 0x80241968: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8024196C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x80241970: lw          $v1, 0xE0($s3)
    ctx->r3 = MEM_W(ctx->r19, 0XE0);
    // 0x80241974: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80241978: sll         $v0, $s4, 2
    ctx->r2 = S32(ctx->r20 << 2);
    // 0x8024197C: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x80241980: addu        $v1, $v1, $s5
    ctx->r3 = ADD32(ctx->r3, ctx->r21);
    // 0x80241984: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80241988: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8024198C: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x80241990: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80241994: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80241998: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8024199C: jal         0x80051E18
    // 0x802419A0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80051E18_2D218(rdram, ctx);
        goto after_1;
    // 0x802419A0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_1:
    // 0x802419A4: slti        $v0, $s2, 0x8
    ctx->r2 = SIGNED(ctx->r18) < 0X8 ? 1 : 0;
    // 0x802419A8: bne         $v0, $zero, L_802418B4
    if (ctx->r2 != 0) {
        // 0x802419AC: sll         $v0, $s2, 3
        ctx->r2 = S32(ctx->r18 << 3);
            goto L_802418B4;
    }
    // 0x802419AC: sll         $v0, $s2, 3
    ctx->r2 = S32(ctx->r18 << 3);
    // 0x802419B0: addiu       $s2, $zero, 0x8
    ctx->r18 = ADD32(0, 0X8);
    // 0x802419B4: lui         $s5, 0x8025
    ctx->r21 = S32(0X8025 << 16);
    // 0x802419B8: addiu       $s5, $s5, 0x4AFC
    ctx->r21 = ADD32(ctx->r21, 0X4AFC);
    // 0x802419BC: addiu       $s0, $zero, 0x48
    ctx->r16 = ADD32(0, 0X48);
    // 0x802419C0: sll         $v0, $s2, 3
    ctx->r2 = S32(ctx->r18 << 3);
L_802419C4:
    // 0x802419C4: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x802419C8: addu        $a0, $a0, $s0
    ctx->r4 = ADD32(ctx->r4, ctx->r16);
    // 0x802419CC: lbu         $a0, 0x4A4B($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X4A4B);
    // 0x802419D0: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x802419D4: addiu       $a1, $a1, 0x4A4C
    ctx->r5 = ADD32(ctx->r5, 0X4A4C);
    // 0x802419D8: addu        $a1, $v0, $a1
    ctx->r5 = ADD32(ctx->r2, ctx->r5);
    // 0x802419DC: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x802419E0: sll         $a0, $a0, 5
    ctx->r4 = S32(ctx->r4 << 5);
    // 0x802419E4: addiu       $a0, $a0, 0x240
    ctx->r4 = ADD32(ctx->r4, 0X240);
    // 0x802419E8: jal         0x80031270
    // 0x802419EC: addu        $a0, $s1, $a0
    ctx->r4 = ADD32(ctx->r17, ctx->r4);
    func_80031270_C670(rdram, ctx);
        goto after_2;
    // 0x802419EC: addu        $a0, $s1, $a0
    ctx->r4 = ADD32(ctx->r17, ctx->r4);
    after_2:
    // 0x802419F0: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x802419F4: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x802419F8: lbu         $v0, 0x4A4B($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4A4B);
    // 0x802419FC: lhu         $v1, 0x28($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X28);
    // 0x80241A00: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80241A04: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x80241A08: lhu         $v0, 0x180($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X180);
    // 0x80241A0C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80241A10: sh          $v1, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r3;
    // 0x80241A14: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80241A18: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x80241A1C: lbu         $v0, 0x4A4B($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4A4B);
    // 0x80241A20: lhu         $v1, 0x2A($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X2A);
    // 0x80241A24: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80241A28: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x80241A2C: lhu         $v0, 0x182($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X182);
    // 0x80241A30: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80241A34: sh          $v1, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r3;
    // 0x80241A38: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80241A3C: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x80241A40: lbu         $v0, 0x4A4B($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4A4B);
    // 0x80241A44: lhu         $v1, 0x2C($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X2C);
    // 0x80241A48: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80241A4C: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x80241A50: lhu         $v0, 0x184($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X184);
    // 0x80241A54: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80241A58: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x80241A5C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80241A60: sh          $v1, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r3;
    // 0x80241A64: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x80241A68: addu        $a1, $a1, $s0
    ctx->r5 = ADD32(ctx->r5, ctx->r16);
    // 0x80241A6C: lbu         $a1, 0x4A4A($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X4A4A);
    // 0x80241A70: lbu         $v1, 0x1($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X1);
    // 0x80241A74: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80241A78: addu        $v0, $s3, $s0
    ctx->r2 = ADD32(ctx->r19, ctx->r16);
    // 0x80241A7C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80241A80: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x80241A84: lw          $v1, 0xE0($s3)
    ctx->r3 = MEM_W(ctx->r19, 0XE0);
    // 0x80241A88: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x80241A8C: sll         $v0, $s4, 2
    ctx->r2 = S32(ctx->r20 << 2);
    // 0x80241A90: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x80241A94: addu        $v1, $v1, $s5
    ctx->r3 = ADD32(ctx->r3, ctx->r21);
    // 0x80241A98: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80241A9C: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x80241AA0: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80241AA4: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80241AA8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80241AAC: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80241AB0: jal         0x80051E18
    // 0x80241AB4: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_3;
    // 0x80241AB4: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_3:
    // 0x80241AB8: slti        $v0, $s2, 0x12
    ctx->r2 = SIGNED(ctx->r18) < 0X12 ? 1 : 0;
    // 0x80241ABC: bne         $v0, $zero, L_802419C4
    if (ctx->r2 != 0) {
        // 0x80241AC0: sll         $v0, $s2, 3
        ctx->r2 = S32(ctx->r18 << 3);
            goto L_802419C4;
    }
    // 0x80241AC0: sll         $v0, $s2, 3
    ctx->r2 = S32(ctx->r18 << 3);
    // 0x80241AC4: lw          $ra, 0x48($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X48);
    // 0x80241AC8: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x80241ACC: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x80241AD0: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x80241AD4: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x80241AD8: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x80241ADC: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80241AE0: jr          $ra
    // 0x80241AE4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x80241AE4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_802261B0_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802261B0: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x802261B4: bne         $v0, $zero, L_802261F8
    if (ctx->r2 != 0) {
        // 0x802261B8: addiu       $v1, $zero, -0x1
        ctx->r3 = ADD32(0, -0X1);
            goto L_802261F8;
    }
    // 0x802261B8: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x802261BC: lw          $v0, 0x24($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X24);
    // 0x802261C0: sh          $v1, 0x16($v0)
    MEM_H(0X16, ctx->r2) = ctx->r3;
    // 0x802261C4: addiu       $v1, $zero, -0x200
    ctx->r3 = ADD32(0, -0X200);
    // 0x802261C8: sh          $v1, 0x18($v0)
    MEM_H(0X18, ctx->r2) = ctx->r3;
    // 0x802261CC: lui         $v1, 0xFFFF
    ctx->r3 = S32(0XFFFF << 16);
    // 0x802261D0: sw          $v1, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->r3;
    // 0x802261D4: lui         $v1, 0xFE00
    ctx->r3 = S32(0XFE00 << 16);
    // 0x802261D8: sw          $v1, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r3;
    // 0x802261DC: addiu       $v1, $zero, 0x800
    ctx->r3 = ADD32(0, 0X800);
    // 0x802261E0: sh          $zero, 0x14($v0)
    MEM_H(0X14, ctx->r2) = 0;
    // 0x802261E4: sw          $zero, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = 0;
    // 0x802261E8: sh          $zero, 0x58($v0)
    MEM_H(0X58, ctx->r2) = 0;
    // 0x802261EC: sh          $zero, 0x54($v0)
    MEM_H(0X54, ctx->r2) = 0;
    // 0x802261F0: sh          $v1, 0x56($v0)
    MEM_H(0X56, ctx->r2) = ctx->r3;
    // 0x802261F4: sb          $zero, 0x6($a0)
    MEM_B(0X6, ctx->r4) = 0;
L_802261F8:
    // 0x802261F8: jr          $ra
    // 0x802261FC: nop

    TRACE_RETURN()
    return;
    // 0x802261FC: nop

;}
RECOMP_FUNC void func_80229BF0_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229BF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229BF4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80229BF8: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x80229BFC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80229C00: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80229C04: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80229C08: lw          $v0, 0x1F50($at)
    ctx->r2 = MEM_W(ctx->r1, 0X1F50);
    // 0x80229C0C: jalr        $v0
    // 0x80229C10: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80229C10: nop

    after_0:
    // 0x80229C14: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80229C18: jr          $ra
    // 0x80229C1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80229C1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80231790_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231790: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80231794: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80231798: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8023179C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802317A0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802317A4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802317A8: lw          $v0, 0x38B0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X38B0);
    // 0x802317AC: jalr        $v0
    // 0x802317B0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802317B0: nop

    after_0:
    // 0x802317B4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802317B8: jr          $ra
    // 0x802317BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802317BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80246F20_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80246F20: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80246F24: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80246F28: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80246F2C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80246F30: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80246F34: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x80246F38: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80246F3C: beq         $v1, $v0, L_80246F8C
    if (ctx->r3 == ctx->r2) {
        // 0x80246F40: addu        $s0, $a1, $zero
        ctx->r16 = ADD32(ctx->r5, 0);
            goto L_80246F8C;
    }
    // 0x80246F40: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x80246F44: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80246F48: beq         $v0, $zero, L_80246FB8
    if (ctx->r2 == 0) {
        // 0x80246F4C: nop
    
            goto L_80246FB8;
    }
    // 0x80246F4C: nop

    // 0x80246F50: bne         $v1, $zero, L_80246FB8
    if (ctx->r3 != 0) {
        // 0x80246F54: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80246FB8;
    }
    // 0x80246F54: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80246F58: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80246F5C: bne         $v1, $v0, L_80246FB8
    if (ctx->r3 != ctx->r2) {
        // 0x80246F60: nop
    
            goto L_80246FB8;
    }
    // 0x80246F60: nop

    // 0x80246F64: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x80246F68: addiu       $v0, $v0, -0x5
    ctx->r2 = ADD32(ctx->r2, -0X5);
    // 0x80246F6C: sltiu       $v0, $v0, 0x31
    ctx->r2 = ctx->r2 < 0X31 ? 1 : 0;
    // 0x80246F70: beq         $v0, $zero, L_80246F80
    if (ctx->r2 == 0) {
        // 0x80246F74: nop
    
            goto L_80246F80;
    }
    // 0x80246F74: nop

    // 0x80246F78: jal         0x802475A0
    // 0x80246F7C: nop

    func_802475A0_ovl28(rdram, ctx);
        goto after_0;
    // 0x80246F7C: nop

    after_0:
L_80246F80:
    // 0x80246F80: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x80246F84: j           L_80246FA4
    // 0x80246F88: addiu       $v0, $zero, 0x3F
    ctx->r2 = ADD32(0, 0X3F);
        goto L_80246FA4;
    // 0x80246F88: addiu       $v0, $zero, 0x3F
    ctx->r2 = ADD32(0, 0X3F);
L_80246F8C:
    // 0x80246F8C: lhu         $v0, 0x6($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X6);
    // 0x80246F90: addiu       $v1, $zero, 0x400
    ctx->r3 = ADD32(0, 0X400);
    // 0x80246F94: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x80246F98: sh          $v0, 0x6($a2)
    MEM_H(0X6, ctx->r6) = ctx->r2;
    // 0x80246F9C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80246FA0: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
L_80246FA4:
    // 0x80246FA4: bne         $v0, $v1, L_80246FB8
    if (ctx->r2 != ctx->r3) {
        // 0x80246FA8: nop
    
            goto L_80246FB8;
    }
    // 0x80246FA8: nop

    // 0x80246FAC: lbu         $v0, 0x9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X9);
    // 0x80246FB0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80246FB4: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
L_80246FB8:
    // 0x80246FB8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80246FBC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80246FC0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80246FC4: jr          $ra
    // 0x80246FC8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80246FC8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022FEB8_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FEB8: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    // 0x8022FEBC: addiu       $v0, $zero, 0x39
    ctx->r2 = ADD32(0, 0X39);
    // 0x8022FEC0: beq         $a0, $v0, L_8022FEE4
    if (ctx->r4 == ctx->r2) {
        // 0x8022FEC4: slti        $v0, $a0, 0x39
        ctx->r2 = SIGNED(ctx->r4) < 0X39 ? 1 : 0;
            goto L_8022FEE4;
    }
    // 0x8022FEC4: slti        $v0, $a0, 0x39
    ctx->r2 = SIGNED(ctx->r4) < 0X39 ? 1 : 0;
    // 0x8022FEC8: bne         $v0, $zero, L_8022FEF0
    if (ctx->r2 != 0) {
        // 0x8022FECC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022FEF0;
    }
    // 0x8022FECC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022FED0: slti        $v0, $a0, 0x4E
    ctx->r2 = SIGNED(ctx->r4) < 0X4E ? 1 : 0;
    // 0x8022FED4: beq         $v0, $zero, L_8022FEEC
    if (ctx->r2 == 0) {
        // 0x8022FED8: slti        $v0, $a0, 0x4C
        ctx->r2 = SIGNED(ctx->r4) < 0X4C ? 1 : 0;
            goto L_8022FEEC;
    }
    // 0x8022FED8: slti        $v0, $a0, 0x4C
    ctx->r2 = SIGNED(ctx->r4) < 0X4C ? 1 : 0;
    // 0x8022FEDC: bne         $v0, $zero, L_8022FEF0
    if (ctx->r2 != 0) {
        // 0x8022FEE0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022FEF0;
    }
    // 0x8022FEE0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022FEE4:
    // 0x8022FEE4: j           L_8022FEF0
    // 0x8022FEE8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_8022FEF0;
    // 0x8022FEE8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8022FEEC:
    // 0x8022FEEC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022FEF0:
    // 0x8022FEF0: jr          $ra
    // 0x8022FEF4: nop

    TRACE_RETURN()
    return;
    // 0x8022FEF4: nop

;}
RECOMP_FUNC void func_80236768_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236768: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023676C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80236770: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80236774: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80236778: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023677C: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x80236780: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80236784: bne         $v1, $v0, L_802367C4
    if (ctx->r3 != ctx->r2) {
        // 0x80236788: addu        $s1, $a2, $zero
        ctx->r17 = ADD32(ctx->r6, 0);
            goto L_802367C4;
    }
    // 0x80236788: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x8023678C: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x80236790: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80236794: bne         $v1, $v0, L_802367C4
    if (ctx->r3 != ctx->r2) {
        // 0x80236798: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_802367C4;
    }
    // 0x80236798: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8023679C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802367A0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x802367A4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802367A8: jal         0x80236A60
    // 0x802367AC: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
    func_80236A60_ovl28(rdram, ctx);
        goto after_0;
    // 0x802367AC: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
    after_0:
    // 0x802367B0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802367B4: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
    // 0x802367B8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802367BC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x802367C0: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_802367C4:
    // 0x802367C4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802367C8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802367CC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802367D0: jr          $ra
    // 0x802367D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802367D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8024B890_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024B890: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8024B894: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8024B898: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8024B89C: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8024B8A0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8024B8A4: jal         0x80053ED8
    // 0x8024B8A8: lbu         $a0, 0xC($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XC);
    func_80053ED8_2F2D8(rdram, ctx);
        goto after_0;
    // 0x8024B8A8: lbu         $a0, 0xC($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XC);
    after_0:
    // 0x8024B8AC: lhu         $v1, 0x38($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X38);
    // 0x8024B8B0: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    // 0x8024B8B4: lhu         $v1, 0x3A($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X3A);
    // 0x8024B8B8: sh          $v1, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r3;
    // 0x8024B8BC: lhu         $v0, 0x3C($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X3C);
    // 0x8024B8C0: sh          $v0, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r2;
    // 0x8024B8C4: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8024B8C8: lw          $a0, 0x43E0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X43E0);
    // 0x8024B8CC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8024B8D0: lw          $v0, 0x43E4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X43E4);
    // 0x8024B8D4: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8024B8D8: lw          $a1, 0x43E8($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X43E8);
    // 0x8024B8DC: sh          $a0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r4;
    // 0x8024B8E0: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x8024B8E4: sh          $a1, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r5;
    // 0x8024B8E8: lh          $v0, 0x1C($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X1C);
    // 0x8024B8EC: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8024B8F0: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8024B8F4: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x8024B8F8: lh          $v0, 0x20($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X20);
    // 0x8024B8FC: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x8024B900: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8024B904: jal         0x80032664
    // 0x8024B908: subu        $a1, $a1, $v0
    ctx->r5 = SUB32(ctx->r5, ctx->r2);
    func_80032664_DA64(rdram, ctx);
        goto after_1;
    // 0x8024B908: subu        $a1, $a1, $v0
    ctx->r5 = SUB32(ctx->r5, ctx->r2);
    after_1:
    // 0x8024B90C: andi        $s1, $v0, 0xFFF
    ctx->r17 = ctx->r2 & 0XFFF;
    // 0x8024B910: jal         0x800324B4
    // 0x8024B914: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_800324B4_D8B4(rdram, ctx);
        goto after_2;
    // 0x8024B914: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
    // 0x8024B918: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8024B91C: sll         $v1, $v0, 4
    ctx->r3 = S32(ctx->r2 << 4);
    // 0x8024B920: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8024B924: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8024B928: lhu         $v0, 0x1C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X1C);
    // 0x8024B92C: lhu         $a1, 0x1E($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X1E);
    // 0x8024B930: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x8024B934: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8024B938: addiu       $a1, $a1, -0xE6
    ctx->r5 = ADD32(ctx->r5, -0XE6);
    // 0x8024B93C: sh          $v0, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r2;
    // 0x8024B940: jal         0x80032498
    // 0x8024B944: sh          $a1, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r5;
    func_80032498_D898(rdram, ctx);
        goto after_3;
    // 0x8024B944: sh          $a1, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r5;
    after_3:
    // 0x8024B948: sll         $v1, $v0, 4
    ctx->r3 = S32(ctx->r2 << 4);
    // 0x8024B94C: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8024B950: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8024B954: lhu         $v0, 0x20($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X20);
    // 0x8024B958: lb          $a0, 0xF($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XF);
    // 0x8024B95C: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x8024B960: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8024B964: sll         $a0, $a0, 1
    ctx->r4 = S32(ctx->r4 << 1);
    // 0x8024B968: sh          $v0, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r2;
    // 0x8024B96C: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8024B970: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8024B974: lbu         $v0, 0x52A8($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X52A8);
    // 0x8024B978: lb          $v1, 0xF($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XF);
    // 0x8024B97C: lui         $a0, 0x2E00
    ctx->r4 = S32(0X2E00 << 16);
    // 0x8024B980: sb          $v0, 0x22($s0)
    MEM_B(0X22, ctx->r16) = ctx->r2;
    // 0x8024B984: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8024B988: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x8024B98C: lui         $a2, 0x8025
    ctx->r6 = S32(0X8025 << 16);
    // 0x8024B990: addu        $a2, $a2, $v1
    ctx->r6 = ADD32(ctx->r6, ctx->r3);
    // 0x8024B994: lbu         $a2, 0x52A9($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0X52A9);
    // 0x8024B998: sll         $a1, $v0, 3
    ctx->r5 = S32(ctx->r2 << 3);
    // 0x8024B99C: sll         $v1, $v0, 19
    ctx->r3 = S32(ctx->r2 << 19);
    // 0x8024B9A0: sll         $v0, $v0, 11
    ctx->r2 = S32(ctx->r2 << 11);
    // 0x8024B9A4: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x8024B9A8: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8024B9AC: or          $v1, $v1, $a1
    ctx->r3 = ctx->r3 | ctx->r5;
    // 0x8024B9B0: sw          $v1, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r3;
    // 0x8024B9B4: sb          $a2, 0x23($s0)
    MEM_B(0X23, ctx->r16) = ctx->r6;
    // 0x8024B9B8: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8024B9BC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8024B9C0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8024B9C4: jr          $ra
    // 0x8024B9C8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8024B9C8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80236A88_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236A88: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80236A8C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80236A90: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x80236A94: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80236A98: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80236A9C: lb          $v0, 0xA($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA);
    // 0x80236AA0: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x80236AA4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80236AA8: addu        $v1, $v0, $v1
    ctx->r3 = ADD32(ctx->r2, ctx->r3);
    // 0x80236AAC: lb          $a0, 0x1($v1)
    ctx->r4 = MEM_B(ctx->r3, 0X1);
    // 0x80236AB0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80236AB4: addiu       $v0, $zero, 0x7E
    ctx->r2 = ADD32(0, 0X7E);
    // 0x80236AB8: beq         $a0, $v0, L_80236AD4
    if (ctx->r4 == ctx->r2) {
        // 0x80236ABC: addiu       $v0, $zero, 0x7F
        ctx->r2 = ADD32(0, 0X7F);
            goto L_80236AD4;
    }
    // 0x80236ABC: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x80236AC0: bne         $a0, $v0, L_80236AD0
    if (ctx->r4 != ctx->r2) {
        // 0x80236AC4: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_80236AD0;
    }
    // 0x80236AC4: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x80236AC8: j           L_80236AD4
    // 0x80236ACC: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
        goto L_80236AD4;
    // 0x80236ACC: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_80236AD0:
    // 0x80236AD0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80236AD4:
    // 0x80236AD4: lb          $v1, 0xA($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA);
    // 0x80236AD8: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x80236ADC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80236AE0: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80236AE4: lb          $v1, 0x9($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X9);
    // 0x80236AE8: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80236AEC: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80236AF0: sra         $a0, $v0, 24
    ctx->r4 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80236AF4: beq         $a0, $v1, L_80236B1C
    if (ctx->r4 == ctx->r3) {
        // 0x80236AF8: addiu       $a1, $zero, 0x2D
        ctx->r5 = ADD32(0, 0X2D);
            goto L_80236B1C;
    }
    // 0x80236AF8: addiu       $a1, $zero, 0x2D
    ctx->r5 = ADD32(0, 0X2D);
    // 0x80236AFC: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    // 0x80236B00: jal         0x8003B85C
    // 0x80236B04: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_0;
    // 0x80236B04: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_0:
    // 0x80236B08: lw          $a0, 0x88($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X88);
    // 0x80236B0C: lui         $a1, 0x8
    ctx->r5 = S32(0X8 << 16);
    // 0x80236B10: ori         $a1, $a1, 0x7
    ctx->r5 = ctx->r5 | 0X7;
    // 0x80236B14: jal         0x8003B840
    // 0x80236B18: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_1;
    // 0x80236B18: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_1:
L_80236B1C:
    // 0x80236B1C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80236B20: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80236B24: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80236B28: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80236B2C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80236B30: jr          $ra
    // 0x80236B34: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80236B34: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80236B38: nop

    // 0x80236B3C: nop

;}
RECOMP_FUNC void func_8022EE14_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022EE14: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022EE18: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022EE1C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022EE20: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x8022EE24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022EE28: jal         0x8022FF44
    // 0x8022EE2C: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_8022FF44_ovl28(rdram, ctx);
        goto after_0;
    // 0x8022EE2C: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_0:
    // 0x8022EE30: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022EE34: beq         $v0, $zero, L_8022EE60
    if (ctx->r2 == 0) {
        // 0x8022EE38: addiu       $v1, $zero, 0x6
        ctx->r3 = ADD32(0, 0X6);
            goto L_8022EE60;
    }
    // 0x8022EE38: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
    // 0x8022EE3C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022EE40: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022EE44: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022EE48: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x8022EE4C: sh          $v0, 0x360($s0)
    MEM_H(0X360, ctx->r16) = ctx->r2;
    // 0x8022EE50: jal         0x8022FEA8
    // 0x8022EE54: sh          $a1, 0x362($s0)
    MEM_H(0X362, ctx->r16) = ctx->r5;
    func_8022FEA8_ovl28(rdram, ctx);
        goto after_1;
    // 0x8022EE54: sh          $a1, 0x362($s0)
    MEM_H(0X362, ctx->r16) = ctx->r5;
    after_1:
    // 0x8022EE58: j           L_8022EEA0
    // 0x8022EE5C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_8022EEA0;
    // 0x8022EE5C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8022EE60:
    // 0x8022EE60: lhu         $v0, 0x350($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X350);
    // 0x8022EE64: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022EE68: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x8022EE6C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022EE70: bne         $v0, $zero, L_8022EE80
    if (ctx->r2 != 0) {
        // 0x8022EE74: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022EE80;
    }
    // 0x8022EE74: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022EE78: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022EE7C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022EE80:
    // 0x8022EE80: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022EE84: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022EE88: jal         0x8004DA90
    // 0x8022EE8C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x8022EE8C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_2:
    // 0x8022EE90: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022EE94: addiu       $v0, $v0, 0x80
    ctx->r2 = ADD32(ctx->r2, 0X80);
    // 0x8022EE98: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022EE9C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_8022EEA0:
    // 0x8022EEA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022EEA4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022EEA8: jr          $ra
    // 0x8022EEAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022EEAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80233818_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233818: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8023381C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80233820: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80233824: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80233828: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x8023382C: lui         $a0, 0xFF
    ctx->r4 = S32(0XFF << 16);
    // 0x80233830: ori         $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 | 0XFFFF;
    // 0x80233834: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80233838: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x8023383C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80233840: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80233844: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x80233848: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x8023384C: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x80233850: lw          $a2, 0x368($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X368);
    // 0x80233854: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80233858: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023385C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80233860: and         $a1, $a2, $a0
    ctx->r5 = ctx->r6 & ctx->r4;
    // 0x80233864: lbu         $s4, 0x9($v0)
    ctx->r20 = MEM_BU(ctx->r2, 0X9);
    // 0x80233868: beq         $a1, $zero, L_80233958
    if (ctx->r5 == 0) {
        // 0x8023386C: addiu       $s3, $s0, 0x348
        ctx->r19 = ADD32(ctx->r16, 0X348);
            goto L_80233958;
    }
    // 0x8023386C: addiu       $s3, $s0, 0x348
    ctx->r19 = ADD32(ctx->r16, 0X348);
    // 0x80233870: lui         $v0, 0x3800
    ctx->r2 = S32(0X3800 << 16);
    // 0x80233874: and         $v0, $a2, $v0
    ctx->r2 = ctx->r6 & ctx->r2;
    // 0x80233878: beq         $v0, $zero, L_8023395C
    if (ctx->r2 == 0) {
        // 0x8023387C: sll         $v0, $s2, 24
        ctx->r2 = S32(ctx->r18 << 24);
            goto L_8023395C;
    }
    // 0x8023387C: sll         $v0, $s2, 24
    ctx->r2 = S32(ctx->r18 << 24);
    // 0x80233880: lhu         $v0, 0x35A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X35A);
    // 0x80233884: lhu         $v1, 0x6E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X6E);
    // 0x80233888: lhu         $a0, 0x6E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X6E);
    // 0x8023388C: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80233890: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x80233894: sh          $v1, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r3;
    // 0x80233898: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8023389C: sh          $v0, 0x35A($s0)
    MEM_H(0X35A, ctx->r16) = ctx->r2;
    // 0x802338A0: bgez        $v1, L_802338AC
    if (SIGNED(ctx->r3) >= 0) {
        // 0x802338A4: sh          $a0, 0xB2($s0)
        MEM_H(0XB2, ctx->r16) = ctx->r4;
            goto L_802338AC;
    }
    // 0x802338A4: sh          $a0, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r4;
    // 0x802338A8: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
L_802338AC:
    // 0x802338AC: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x802338B0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802338B4: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x802338B8: addiu       $a1, $s0, 0x370
    ctx->r5 = ADD32(ctx->r16, 0X370);
    // 0x802338BC: jal         0x8004FEA0
    // 0x802338C0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004FEA0_2B2A0(rdram, ctx);
        goto after_0;
    // 0x802338C0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x802338C4: lhu         $v1, 0x35A($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X35A);
    // 0x802338C8: sw          $v0, 0x354($s0)
    MEM_W(0X354, ctx->r16) = ctx->r2;
    // 0x802338CC: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x802338D0: slt         $v1, $s4, $v1
    ctx->r3 = SIGNED(ctx->r20) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x802338D4: bne         $v1, $zero, L_802338E8
    if (ctx->r3 != 0) {
        // 0x802338D8: sh          $v0, 0x15E($s0)
        MEM_H(0X15E, ctx->r16) = ctx->r2;
            goto L_802338E8;
    }
    // 0x802338D8: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x802338DC: lh          $v0, 0x6E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X6E);
    // 0x802338E0: bnel        $v0, $zero, L_8023392C
    if (ctx->r2 != 0) {
        // 0x802338E4: addiu       $s2, $zero, 0x1
        ctx->r18 = ADD32(0, 0X1);
            goto L_8023392C;
    }
    goto skip_0;
    // 0x802338E4: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    skip_0:
L_802338E8:
    // 0x802338E8: addiu       $a0, $zero, 0xA2
    ctx->r4 = ADD32(0, 0XA2);
    // 0x802338EC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802338F0: jal         0x8002A33C
    // 0x802338F4: sh          $zero, 0x35A($s0)
    MEM_H(0X35A, ctx->r16) = 0;
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x802338F4: sh          $zero, 0x35A($s0)
    MEM_H(0X35A, ctx->r16) = 0;
    after_1:
    // 0x802338F8: lw          $v0, 0x354($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X354);
    // 0x802338FC: lui         $v1, 0xFFFF
    ctx->r3 = S32(0XFFFF << 16);
    // 0x80233900: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80233904: beq         $v0, $zero, L_8023391C
    if (ctx->r2 == 0) {
        // 0x80233908: addiu       $s2, $zero, -0x1
        ctx->r18 = ADD32(0, -0X1);
            goto L_8023391C;
    }
    // 0x80233908: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    // 0x8023390C: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x80233910: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
    // 0x80233914: j           L_80233938
    // 0x80233918: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
        goto L_80233938;
    // 0x80233918: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
L_8023391C:
    // 0x8023391C: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x80233920: ori         $v0, $v0, 0x8
    ctx->r2 = ctx->r2 | 0X8;
    // 0x80233924: j           L_80233938
    // 0x80233928: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
        goto L_80233938;
    // 0x80233928: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
L_8023392C:
    // 0x8023392C: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x80233930: jal         0x8002A33C
    // 0x80233934: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x80233934: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_2:
L_80233938:
    // 0x80233938: lw          $v1, 0xC($s3)
    ctx->r3 = MEM_W(ctx->r19, 0XC);
    // 0x8023393C: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x80233940: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x80233944: beq         $v0, $zero, L_80233950
    if (ctx->r2 == 0) {
        // 0x80233948: addiu       $v0, $v1, 0x800
        ctx->r2 = ADD32(ctx->r3, 0X800);
            goto L_80233950;
    }
    // 0x80233948: addiu       $v0, $v1, 0x800
    ctx->r2 = ADD32(ctx->r3, 0X800);
    // 0x8023394C: sw          $v0, 0xC($s3)
    MEM_W(0XC, ctx->r19) = ctx->r2;
L_80233950:
    // 0x80233950: lhu         $v0, 0xE($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0XE);
    // 0x80233954: sw          $v0, 0xC($s3)
    MEM_W(0XC, ctx->r19) = ctx->r2;
L_80233958:
    // 0x80233958: sll         $v0, $s2, 24
    ctx->r2 = S32(ctx->r18 << 24);
L_8023395C:
    // 0x8023395C: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80233960: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80233964: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x80233968: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8023396C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80233970: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80233974: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80233978: jr          $ra
    // 0x8023397C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8023397C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80232280_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232280: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80232284: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80232288: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023228C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80232290: lw          $v0, 0x35C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X35C);
    // 0x80232294: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80232298: addiu       $a1, $a1, 0x49B0
    ctx->r5 = ADD32(ctx->r5, 0X49B0);
    // 0x8023229C: andi        $v0, $v0, 0x5
    ctx->r2 = ctx->r2 & 0X5;
    // 0x802322A0: bnel        $v0, $zero, L_802322A8
    if (ctx->r2 != 0) {
        // 0x802322A4: sh          $zero, 0x44($s0)
        MEM_H(0X44, ctx->r16) = 0;
            goto L_802322A8;
    }
    goto skip_0;
    // 0x802322A4: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    skip_0:
L_802322A8:
    // 0x802322A8: lhu         $v0, 0x382($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X382);
    // 0x802322AC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802322B0: sh          $v0, 0x382($s0)
    MEM_H(0X382, ctx->r16) = ctx->r2;
    // 0x802322B4: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x802322B8: bne         $v0, $zero, L_802322D0
    if (ctx->r2 != 0) {
        // 0x802322BC: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_802322D0;
    }
    // 0x802322BC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802322C0: jal         0x802324AC
    // 0x802322C4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802324AC_ovl28(rdram, ctx);
        goto after_0;
    // 0x802322C4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x802322C8: j           L_80232304
    // 0x802322CC: nop

        goto L_80232304;
    // 0x802322CC: nop

L_802322D0:
    // 0x802322D0: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x802322D4: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    // 0x802322D8: jal         0x8004F820
    // 0x802322DC: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x802322DC: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    after_1:
    // 0x802322E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802322E4: lh          $a1, 0x44($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X44);
    // 0x802322E8: lhu         $v1, 0x56($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X56);
    // 0x802322EC: lh          $a2, 0x46($a0)
    ctx->r6 = MEM_H(ctx->r4, 0X46);
    // 0x802322F0: lh          $a3, 0x48($a0)
    ctx->r7 = MEM_H(ctx->r4, 0X48);
    // 0x802322F4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802322F8: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x802322FC: jal         0x8004DA90
    // 0x80232300: sh          $v1, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r3;
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x80232300: sh          $v1, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r3;
    after_2:
L_80232304:
    // 0x80232304: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80232308: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023230C: jr          $ra
    // 0x80232310: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80232310: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80239CDC_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80239CDC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80239CE0: sll         $a2, $a2, 2
    ctx->r6 = S32(ctx->r6 << 2);
    // 0x80239CE4: sb          $zero, 0x11($a1)
    MEM_B(0X11, ctx->r5) = 0;
    // 0x80239CE8: sb          $zero, 0xF($a1)
    MEM_B(0XF, ctx->r5) = 0;
    // 0x80239CEC: sb          $v0, 0x10($a1)
    MEM_B(0X10, ctx->r5) = ctx->r2;
    // 0x80239CF0: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80239CF4: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80239CF8: lw          $v0, 0x4538($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4538);
    // 0x80239CFC: jr          $ra
    // 0x80239D00: sw          $v0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80239D00: sw          $v0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r2;
;}
RECOMP_FUNC void func_80232838_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232838: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023283C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80232840: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80232844: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80232848: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x8023284C: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x80232850: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80232854: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80232858: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x8023285C: sh          $zero, 0x64($s0)
    MEM_H(0X64, ctx->r16) = 0;
    // 0x80232860: sh          $zero, 0x66($s0)
    MEM_H(0X66, ctx->r16) = 0;
    // 0x80232864: sb          $zero, 0x74($s0)
    MEM_B(0X74, ctx->r16) = 0;
    // 0x80232868: sb          $zero, 0x75($s0)
    MEM_B(0X75, ctx->r16) = 0;
    // 0x8023286C: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80232870: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x80232874: andi        $v0, $v0, 0xE00
    ctx->r2 = ctx->r2 & 0XE00;
    // 0x80232878: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    // 0x8023287C: jal         0x8004D5D4
    // 0x80232880: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80232880: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    after_0:
    // 0x80232884: addiu       $a0, $s0, 0x388
    ctx->r4 = ADD32(ctx->r16, 0X388);
    // 0x80232888: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8023288C: addiu       $a2, $zero, -0xC8
    ctx->r6 = ADD32(0, -0XC8);
    // 0x80232890: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80232894: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80232898: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8023289C: jal         0x800540BC
    // 0x802328A0: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    func_800540BC_2F4BC(rdram, ctx);
        goto after_1;
    // 0x802328A0: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    after_1:
    // 0x802328A4: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x802328A8: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x802328AC: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x802328B0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802328B4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802328B8: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x802328BC: lbu         $v1, 0x8($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X8);
    // 0x802328C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802328C4: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x802328C8: addiu       $v0, $v0, 0x3900
    ctx->r2 = ADD32(ctx->r2, 0X3900);
    // 0x802328CC: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    // 0x802328D0: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x802328D4: sh          $v1, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r3;
    // 0x802328D8: sh          $v1, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r3;
    // 0x802328DC: jal         0x8003E934
    // 0x802328E0: sh          $v1, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r3;
    func_8003E934_19D34(rdram, ctx);
        goto after_2;
    // 0x802328E0: sh          $v1, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r3;
    after_2:
    // 0x802328E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802328E8: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x802328EC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802328F0: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x802328F4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802328F8: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x802328FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80232900: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80232904: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80232908: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8023290C: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80232910: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x80232914: jal         0x80050294
    // 0x80232918: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_3;
    // 0x80232918: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    after_3:
    // 0x8023291C: lhu         $a0, 0x348($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X348);
    // 0x80232920: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x80232924: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80232928: lw          $a1, 0x298($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X298);
    // 0x8023292C: addiu       $v0, $zero, 0xB4
    ctx->r2 = ADD32(0, 0XB4);
    // 0x80232930: sh          $v0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r2;
    // 0x80232934: sh          $zero, 0x34E($s0)
    MEM_H(0X34E, ctx->r16) = 0;
    // 0x80232938: ori         $a0, $a0, 0x1
    ctx->r4 = ctx->r4 | 0X1;
    // 0x8023293C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80232940: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x80232944: sh          $a0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r4;
    // 0x80232948: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8023294C: lbu         $v1, 0xB($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0XB);
    // 0x80232950: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x80232954: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80232958: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x8023295C: sh          $v1, 0x358($s0)
    MEM_H(0X358, ctx->r16) = ctx->r3;
    // 0x80232960: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80232964: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80232968: lbu         $v0, 0xC($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XC);
    // 0x8023296C: addiu       $a0, $s0, 0x398
    ctx->r4 = ADD32(ctx->r16, 0X398);
    // 0x80232970: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80232974: sh          $zero, 0x35A($s0)
    MEM_H(0X35A, ctx->r16) = 0;
    // 0x80232978: sh          $zero, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = 0;
    // 0x8023297C: sw          $zero, 0x368($s0)
    MEM_W(0X368, ctx->r16) = 0;
    // 0x80232980: sw          $zero, 0x36C($s0)
    MEM_W(0X36C, ctx->r16) = 0;
    // 0x80232984: sw          $zero, 0x378($s0)
    MEM_W(0X378, ctx->r16) = 0;
    // 0x80232988: sw          $zero, 0x37C($s0)
    MEM_W(0X37C, ctx->r16) = 0;
    // 0x8023298C: sh          $zero, 0x350($s0)
    MEM_H(0X350, ctx->r16) = 0;
    // 0x80232990: jal         0x8009A3B4
    // 0x80232994: sh          $v0, 0x35C($s0)
    MEM_H(0X35C, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x80232994: sh          $v0, 0x35C($s0)
    MEM_H(0X35C, ctx->r16) = ctx->r2;
    after_4:
    // 0x80232998: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023299C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802329A0: jr          $ra
    // 0x802329A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802329A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022B394_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B394: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022B398: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B39C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B3A0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022B3A4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022B3A8: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x8022B3AC: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x8022B3B0: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x8022B3B4: addiu       $v0, $zero, 0x3E
    ctx->r2 = ADD32(0, 0X3E);
    // 0x8022B3B8: beq         $v1, $v0, L_8022B514
    if (ctx->r3 == ctx->r2) {
        // 0x8022B3BC: slti        $v0, $v1, 0x3F
        ctx->r2 = SIGNED(ctx->r3) < 0X3F ? 1 : 0;
            goto L_8022B514;
    }
    // 0x8022B3BC: slti        $v0, $v1, 0x3F
    ctx->r2 = SIGNED(ctx->r3) < 0X3F ? 1 : 0;
    // 0x8022B3C0: beq         $v0, $zero, L_8022B400
    if (ctx->r2 == 0) {
        // 0x8022B3C4: addiu       $v0, $zero, 0xB
        ctx->r2 = ADD32(0, 0XB);
            goto L_8022B400;
    }
    // 0x8022B3C4: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x8022B3C8: beq         $v1, $v0, L_8022B4DC
    if (ctx->r3 == ctx->r2) {
        // 0x8022B3CC: slti        $v0, $v1, 0xC
        ctx->r2 = SIGNED(ctx->r3) < 0XC ? 1 : 0;
            goto L_8022B4DC;
    }
    // 0x8022B3CC: slti        $v0, $v1, 0xC
    ctx->r2 = SIGNED(ctx->r3) < 0XC ? 1 : 0;
    // 0x8022B3D0: beql        $v0, $zero, L_8022B3E8
    if (ctx->r2 == 0) {
        // 0x8022B3D4: addiu       $v0, $zero, 0x14
        ctx->r2 = ADD32(0, 0X14);
            goto L_8022B3E8;
    }
    goto skip_0;
    // 0x8022B3D4: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    skip_0:
    // 0x8022B3D8: beq         $v1, $zero, L_8022B448
    if (ctx->r3 == 0) {
        // 0x8022B3DC: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022B448;
    }
    // 0x8022B3DC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022B3E0: j           L_8022B578
    // 0x8022B3E4: nop

        goto L_8022B578;
    // 0x8022B3E4: nop

L_8022B3E8:
    // 0x8022B3E8: beq         $v1, $v0, L_8022B4EC
    if (ctx->r3 == ctx->r2) {
        // 0x8022B3EC: addiu       $v0, $zero, 0x1E
        ctx->r2 = ADD32(0, 0X1E);
            goto L_8022B4EC;
    }
    // 0x8022B3EC: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x8022B3F0: beq         $v1, $v0, L_8022B504
    if (ctx->r3 == ctx->r2) {
        // 0x8022B3F4: nop
    
            goto L_8022B504;
    }
    // 0x8022B3F4: nop

    // 0x8022B3F8: j           L_8022B578
    // 0x8022B3FC: nop

        goto L_8022B578;
    // 0x8022B3FC: nop

L_8022B400:
    // 0x8022B400: addiu       $v0, $zero, 0x98
    ctx->r2 = ADD32(0, 0X98);
    // 0x8022B404: beq         $v1, $v0, L_8022B54C
    if (ctx->r3 == ctx->r2) {
        // 0x8022B408: slti        $v0, $v1, 0x99
        ctx->r2 = SIGNED(ctx->r3) < 0X99 ? 1 : 0;
            goto L_8022B54C;
    }
    // 0x8022B408: slti        $v0, $v1, 0x99
    ctx->r2 = SIGNED(ctx->r3) < 0X99 ? 1 : 0;
    // 0x8022B40C: beq         $v0, $zero, L_8022B42C
    if (ctx->r2 == 0) {
        // 0x8022B410: addiu       $v0, $zero, 0x50
        ctx->r2 = ADD32(0, 0X50);
            goto L_8022B42C;
    }
    // 0x8022B410: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    // 0x8022B414: beq         $v1, $v0, L_8022B524
    if (ctx->r3 == ctx->r2) {
        // 0x8022B418: addiu       $v0, $zero, 0x8C
        ctx->r2 = ADD32(0, 0X8C);
            goto L_8022B524;
    }
    // 0x8022B418: addiu       $v0, $zero, 0x8C
    ctx->r2 = ADD32(0, 0X8C);
    // 0x8022B41C: beq         $v1, $v0, L_8022B534
    if (ctx->r3 == ctx->r2) {
        // 0x8022B420: nop
    
            goto L_8022B534;
    }
    // 0x8022B420: nop

    // 0x8022B424: j           L_8022B578
    // 0x8022B428: nop

        goto L_8022B578;
    // 0x8022B428: nop

L_8022B42C:
    // 0x8022B42C: addiu       $v0, $zero, 0xA4
    ctx->r2 = ADD32(0, 0XA4);
    // 0x8022B430: beq         $v1, $v0, L_8022B55C
    if (ctx->r3 == ctx->r2) {
        // 0x8022B434: addiu       $v0, $zero, 0xA9
        ctx->r2 = ADD32(0, 0XA9);
            goto L_8022B55C;
    }
    // 0x8022B434: addiu       $v0, $zero, 0xA9
    ctx->r2 = ADD32(0, 0XA9);
    // 0x8022B438: beq         $v1, $v0, L_8022B574
    if (ctx->r3 == ctx->r2) {
        // 0x8022B43C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022B574;
    }
    // 0x8022B43C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B440: j           L_8022B578
    // 0x8022B444: nop

        goto L_8022B578;
    // 0x8022B444: nop

L_8022B448:
    // 0x8022B448: lbu         $v1, 0x0($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X0);
    // 0x8022B44C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022B450: lbu         $a0, 0x4A6D($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X4A6D);
    // 0x8022B454: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B458: sb          $v0, 0x49B8($at)
    MEM_B(0X49B8, ctx->r1) = ctx->r2;
    // 0x8022B45C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B460: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B464: sb          $v0, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = ctx->r2;
    // 0x8022B468: addiu       $v0, $zero, -0xC1
    ctx->r2 = ADD32(0, -0XC1);
    // 0x8022B46C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B470: sh          $v0, 0x4DEA($at)
    MEM_H(0X4DEA, ctx->r1) = ctx->r2;
    // 0x8022B474: addiu       $v0, $zero, 0x640
    ctx->r2 = ADD32(0, 0X640);
    // 0x8022B478: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B47C: sh          $v0, 0x4DEC($at)
    MEM_H(0X4DEC, ctx->r1) = ctx->r2;
    // 0x8022B480: lui         $v0, 0xFF3F
    ctx->r2 = S32(0XFF3F << 16);
    // 0x8022B484: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B488: sw          $v0, 0x4DDC($at)
    MEM_W(0X4DDC, ctx->r1) = ctx->r2;
    // 0x8022B48C: lui         $v0, 0x640
    ctx->r2 = S32(0X640 << 16);
    // 0x8022B490: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B494: sh          $zero, 0x4DE8($at)
    MEM_H(0X4DE8, ctx->r1) = 0;
    // 0x8022B498: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B49C: sw          $zero, 0x4DD8($at)
    MEM_W(0X4DD8, ctx->r1) = 0;
    // 0x8022B4A0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B4A4: sw          $v0, 0x4DE0($at)
    MEM_W(0X4DE0, ctx->r1) = ctx->r2;
    // 0x8022B4A8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B4AC: sh          $zero, 0x4DF0($at)
    MEM_H(0X4DF0, ctx->r1) = 0;
    // 0x8022B4B0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B4B4: sh          $zero, 0x4DF2($at)
    MEM_H(0X4DF2, ctx->r1) = 0;
    // 0x8022B4B8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B4BC: sh          $zero, 0x4DF4($at)
    MEM_H(0X4DF4, ctx->r1) = 0;
    // 0x8022B4C0: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8022B4C4: ori         $a0, $a0, 0x10
    ctx->r4 = ctx->r4 | 0X10;
    // 0x8022B4C8: sb          $v1, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r3;
    // 0x8022B4CC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B4D0: sb          $a0, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r4;
    // 0x8022B4D4: j           L_8022B578
    // 0x8022B4D8: sb          $zero, 0x6($s0)
    MEM_B(0X6, ctx->r16) = 0;
        goto L_8022B578;
    // 0x8022B4D8: sb          $zero, 0x6($s0)
    MEM_B(0X6, ctx->r16) = 0;
L_8022B4DC:
    // 0x8022B4DC: addiu       $v0, $zero, 0x8D
    ctx->r2 = ADD32(0, 0X8D);
    // 0x8022B4E0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B4E4: j           L_8022B578
    // 0x8022B4E8: sb          $v0, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r2;
        goto L_8022B578;
    // 0x8022B4E8: sb          $v0, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r2;
L_8022B4EC:
    // 0x8022B4EC: jal         0x8022B750
    // 0x8022B4F0: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    func_8022B750_ovl28(rdram, ctx);
        goto after_0;
    // 0x8022B4F0: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    after_0:
    // 0x8022B4F4: jal         0x8022B784
    // 0x8022B4F8: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    func_8022B784_ovl28(rdram, ctx);
        goto after_1;
    // 0x8022B4F8: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    after_1:
    // 0x8022B4FC: j           L_8022B578
    // 0x8022B500: nop

        goto L_8022B578;
    // 0x8022B500: nop

L_8022B504:
    // 0x8022B504: jal         0x8022B750
    // 0x8022B508: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_8022B750_ovl28(rdram, ctx);
        goto after_2;
    // 0x8022B508: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_2:
    // 0x8022B50C: j           L_8022B54C
    // 0x8022B510: nop

        goto L_8022B54C;
    // 0x8022B510: nop

L_8022B514:
    // 0x8022B514: addiu       $v0, $zero, 0x8E
    ctx->r2 = ADD32(0, 0X8E);
    // 0x8022B518: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B51C: j           L_8022B578
    // 0x8022B520: sb          $v0, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r2;
        goto L_8022B578;
    // 0x8022B520: sb          $v0, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r2;
L_8022B524:
    // 0x8022B524: jal         0x8022B750
    // 0x8022B528: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    func_8022B750_ovl28(rdram, ctx);
        goto after_3;
    // 0x8022B528: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    after_3:
    // 0x8022B52C: j           L_8022B578
    // 0x8022B530: nop

        goto L_8022B578;
    // 0x8022B530: nop

L_8022B534:
    // 0x8022B534: jal         0x8022B750
    // 0x8022B538: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    func_8022B750_ovl28(rdram, ctx);
        goto after_4;
    // 0x8022B538: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    after_4:
    // 0x8022B53C: jal         0x8022B784
    // 0x8022B540: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    func_8022B784_ovl28(rdram, ctx);
        goto after_5;
    // 0x8022B540: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    after_5:
    // 0x8022B544: j           L_8022B578
    // 0x8022B548: nop

        goto L_8022B578;
    // 0x8022B548: nop

L_8022B54C:
    // 0x8022B54C: jal         0x8022B784
    // 0x8022B550: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_8022B784_ovl28(rdram, ctx);
        goto after_6;
    // 0x8022B550: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_6:
    // 0x8022B554: j           L_8022B578
    // 0x8022B558: nop

        goto L_8022B578;
    // 0x8022B558: nop

L_8022B55C:
    // 0x8022B55C: jal         0x8022B750
    // 0x8022B560: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    func_8022B750_ovl28(rdram, ctx);
        goto after_7;
    // 0x8022B560: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    after_7:
    // 0x8022B564: addiu       $v0, $zero, 0x8F
    ctx->r2 = ADD32(0, 0X8F);
    // 0x8022B568: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B56C: j           L_8022B578
    // 0x8022B570: sb          $v0, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r2;
        goto L_8022B578;
    // 0x8022B570: sb          $v0, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r2;
L_8022B574:
    // 0x8022B574: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
L_8022B578:
    // 0x8022B578: lbu         $v1, 0x6($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X6);
    // 0x8022B57C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B580: bne         $v1, $v0, L_8022B5B4
    if (ctx->r3 != ctx->r2) {
        // 0x8022B584: nop
    
            goto L_8022B5B4;
    }
    // 0x8022B584: nop

    // 0x8022B588: lhu         $v0, 0x43C($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X43C);
    // 0x8022B58C: addiu       $v0, $v0, -0x10
    ctx->r2 = ADD32(ctx->r2, -0X10);
    // 0x8022B590: sh          $v0, 0x43C($s1)
    MEM_H(0X43C, ctx->r17) = ctx->r2;
    // 0x8022B594: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B598: sw          $v0, 0x430($s1)
    MEM_W(0X430, ctx->r17) = ctx->r2;
    // 0x8022B59C: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x8022B5A0: lhu         $v0, 0x18($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X18);
    // 0x8022B5A4: addiu       $v0, $v0, -0x10
    ctx->r2 = ADD32(ctx->r2, -0X10);
    // 0x8022B5A8: sh          $v0, 0x18($v1)
    MEM_H(0X18, ctx->r3) = ctx->r2;
    // 0x8022B5AC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B5B0: sw          $v0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r2;
L_8022B5B4:
    // 0x8022B5B4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022B5B8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022B5BC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B5C0: jr          $ra
    // 0x8022B5C4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022B5C4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8024B9FC_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024B9FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8024BA00: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8024BA04: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8024BA08: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8024BA0C: jal         0x80053ED8
    // 0x8024BA10: lbu         $a0, 0xC($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XC);
    func_80053ED8_2F2D8(rdram, ctx);
        goto after_0;
    // 0x8024BA10: lbu         $a0, 0xC($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XC);
    after_0:
    // 0x8024BA14: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x8024BA18: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8024BA1C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8024BA20: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8024BA24: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8024BA28: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8024BA2C: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x8024BA30: ori         $v1, $v1, 0x22
    ctx->r3 = ctx->r3 | 0X22;
    // 0x8024BA34: jal         0x800A3450
    // 0x8024BA38: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x8024BA38: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_1:
    // 0x8024BA3C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8024BA40: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8024BA44: jal         0x8024BB30
    // 0x8024BA48: sb          $v0, 0xF($a0)
    MEM_B(0XF, ctx->r4) = ctx->r2;
    func_8024BB30_ovl28(rdram, ctx);
        goto after_2;
    // 0x8024BA48: sb          $v0, 0xF($a0)
    MEM_B(0XF, ctx->r4) = ctx->r2;
    after_2:
    // 0x8024BA4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8024BA50: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8024BA54: jr          $ra
    // 0x8024BA58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8024BA58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80239E40_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80239E40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80239E44: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80239E48: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80239E4C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80239E50: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80239E54: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80239E58: lw          $v0, 0x4580($at)
    ctx->r2 = MEM_W(ctx->r1, 0X4580);
    // 0x80239E5C: jalr        $v0
    // 0x80239E60: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80239E60: nop

    after_0:
    // 0x80239E64: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80239E68: jr          $ra
    // 0x80239E6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80239E6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022A2B0_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A2B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022A2B4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022A2B8: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x8022A2BC: bne         $v0, $zero, L_8022A300
    if (ctx->r2 != 0) {
        // 0x8022A2C0: nop
    
            goto L_8022A300;
    }
    // 0x8022A2C0: nop

    // 0x8022A2C4: lw          $v1, 0x50($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X50);
    // 0x8022A2C8: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8022A2CC: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x8022A2D0: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8022A2D4: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8022A2D8: addiu       $v1, $v1, 0x49B0
    ctx->r3 = ADD32(ctx->r3, 0X49B0);
    // 0x8022A2DC: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8022A2E0: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022A2E4: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8022A2E8: lw          $v1, 0x24($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X24);
    // 0x8022A2EC: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8022A2F0: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    // 0x8022A2F4: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022A2F8: jal         0x8022B6D0
    // 0x8022A2FC: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    func_8022B6D0_ovl28(rdram, ctx);
        goto after_0;
    // 0x8022A2FC: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    after_0:
L_8022A300:
    // 0x8022A300: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022A304: jr          $ra
    // 0x8022A308: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022A308: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023135C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023135C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80231360: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80231364: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80231368: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023136C: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80231370: sltiu       $v0, $v1, 0x8
    ctx->r2 = ctx->r3 < 0X8 ? 1 : 0;
    // 0x80231374: beq         $v0, $zero, L_80231408
    if (ctx->r2 == 0) {
        // 0x80231378: addiu       $a0, $s0, 0x308
        ctx->r4 = ADD32(ctx->r16, 0X308);
            goto L_80231408;
    }
    // 0x80231378: addiu       $a0, $s0, 0x308
    ctx->r4 = ADD32(ctx->r16, 0X308);
    // 0x8023137C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80231380: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80231384: addu        $at, $at, $v0
    gpr jr_addend_8023138C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80231388: lw          $v0, 0x5D90($at)
    ctx->r2 = ADD32(ctx->r1, 0X5D90);
    // 0x8023138C: jr          $v0
    // 0x80231390: nop

    switch (jr_addend_8023138C >> 2) {
        case 0: goto L_80231394; break;
        case 1: goto L_802313AC; break;
        case 2: goto L_802313CC; break;
        case 3: goto L_802313AC; break;
        case 4: goto L_802313CC; break;
        case 5: goto L_802313AC; break;
        case 6: goto L_802313CC; break;
        case 7: goto L_802313F4; break;
        default: switch_error(__func__, 0x8023138C, 0x80255D90);
    }
    // 0x80231390: nop

L_80231394:
    // 0x80231394: lhu         $v0, 0x0($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X0);
    // 0x80231398: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8023139C: beq         $v0, $zero, L_80231408
    if (ctx->r2 == 0) {
        // 0x802313A0: nop
    
            goto L_80231408;
    }
    // 0x802313A0: nop

    // 0x802313A4: j           L_802313E4
    // 0x802313A8: nop

        goto L_802313E4;
    // 0x802313A8: nop

L_802313AC:
    // 0x802313AC: jal         0x80231694
    // 0x802313B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80231694_ovl28(rdram, ctx);
        goto after_0;
    // 0x802313B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x802313B4: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x802313B8: beq         $v0, $zero, L_80231408
    if (ctx->r2 == 0) {
        // 0x802313BC: addiu       $v1, $zero, 0x4
        ctx->r3 = ADD32(0, 0X4);
            goto L_80231408;
    }
    // 0x802313BC: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x802313C0: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x802313C4: j           L_802313E8
    // 0x802313C8: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
        goto L_802313E8;
    // 0x802313C8: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_802313CC:
    // 0x802313CC: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802313D0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802313D4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x802313D8: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x802313DC: bne         $v0, $zero, L_80231408
    if (ctx->r2 != 0) {
        // 0x802313E0: nop
    
            goto L_80231408;
    }
    // 0x802313E0: nop

L_802313E4:
    // 0x802313E4: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
L_802313E8:
    // 0x802313E8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802313EC: j           L_80231408
    // 0x802313F0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80231408;
    // 0x802313F0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_802313F4:
    // 0x802313F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802313F8: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x802313FC: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x80231400: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80231404: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80231408:
    // 0x80231408: jal         0x8023156C
    // 0x8023140C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8023156C_ovl28(rdram, ctx);
        goto after_1;
    // 0x8023140C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80231410: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80231414: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80231418: jr          $ra
    // 0x8023141C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023141C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80244578_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80244578: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8024457C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80244580: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80244584: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80244588: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8024458C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80244590: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80244594: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80244598: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8024459C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x802445A0: bne         $v0, $zero, L_802445B0
    if (ctx->r2 != 0) {
        // 0x802445A4: nop
    
            goto L_802445B0;
    }
    // 0x802445A4: nop

    // 0x802445A8: jal         0x8004F4F8
    // 0x802445AC: nop

    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_0;
    // 0x802445AC: nop

    after_0:
L_802445B0:
    // 0x802445B0: lhu         $v0, 0x6E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6E);
    // 0x802445B4: addiu       $v0, $v0, -0x200
    ctx->r2 = ADD32(ctx->r2, -0X200);
    // 0x802445B8: sh          $v0, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r2;
    // 0x802445BC: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x802445C0: lh          $v1, 0x6E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X6E);
    // 0x802445C4: addiu       $s1, $s0, 0x88
    ctx->r17 = ADD32(ctx->r16, 0X88);
    // 0x802445C8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802445CC: slti        $v1, $v1, 0x1001
    ctx->r3 = SIGNED(ctx->r3) < 0X1001 ? 1 : 0;
    // 0x802445D0: bne         $v1, $zero, L_802445E0
    if (ctx->r3 != 0) {
        // 0x802445D4: sb          $v0, 0x9($s0)
        MEM_B(0X9, ctx->r16) = ctx->r2;
            goto L_802445E0;
    }
    // 0x802445D4: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x802445D8: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x802445DC: sh          $v0, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r2;
L_802445E0:
    // 0x802445E0: lh          $v0, 0x6E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X6E);
    // 0x802445E4: bltzl       $v0, L_802445EC
    if (SIGNED(ctx->r2) < 0) {
        // 0x802445E8: sh          $zero, 0x6E($s0)
        MEM_H(0X6E, ctx->r16) = 0;
            goto L_802445EC;
    }
    goto skip_0;
    // 0x802445E8: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
    skip_0:
L_802445EC:
    // 0x802445EC: jal         0x8002C69C
    // 0x802445F0: addiu       $a0, $s0, 0x8C
    ctx->r4 = ADD32(ctx->r16, 0X8C);
    func_8002C69C_7A9C(rdram, ctx);
        goto after_1;
    // 0x802445F0: addiu       $a0, $s0, 0x8C
    ctx->r4 = ADD32(ctx->r16, 0X8C);
    after_1:
    // 0x802445F4: lbu         $a0, 0x9($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X9);
    // 0x802445F8: addiu       $s2, $s1, 0x4
    ctx->r18 = ADD32(ctx->r17, 0X4);
    // 0x802445FC: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80244600: jal         0x800319B4
    // 0x80244604: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    func_800319B4_CDB4(rdram, ctx);
        goto after_2;
    // 0x80244604: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    after_2:
    // 0x80244608: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x8024460C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80244610: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80244614: lh          $v0, 0x6E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X6E);
    // 0x80244618: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8024461C: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80244620: bne         $v0, $zero, L_80244634
    if (ctx->r2 != 0) {
        // 0x80244624: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_80244634;
    }
    // 0x80244624: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80244628: lhu         $v0, 0x26($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X26);
    // 0x8024462C: addiu       $v0, $v0, -0x80
    ctx->r2 = ADD32(ctx->r2, -0X80);
    // 0x80244630: sh          $v0, 0x26($s1)
    MEM_H(0X26, ctx->r17) = ctx->r2;
L_80244634:
    // 0x80244634: jal         0x80031DA8
    // 0x80244638: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_80031DA8_D1A8(rdram, ctx);
        goto after_3;
    // 0x80244638: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_3:
    // 0x8024463C: lh          $v0, 0x6E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X6E);
    // 0x80244640: lui         $a0, 0x200
    ctx->r4 = S32(0X200 << 16);
    // 0x80244644: sra         $v0, $v0, 5
    ctx->r2 = S32(SIGNED(ctx->r2) >> 5);
    // 0x80244648: sll         $v1, $v0, 8
    ctx->r3 = S32(ctx->r2 << 8);
    // 0x8024464C: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x80244650: or          $v1, $v0, $v1
    ctx->r3 = ctx->r2 | ctx->r3;
    // 0x80244654: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80244658: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8024465C: sw          $v1, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r3;
    // 0x80244660: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80244664: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80244668: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8024466C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80244670: jr          $ra
    // 0x80244674: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80244674: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80227EEC_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227EEC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80227EF0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227EF4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227EF8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80227EFC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80227F00: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x80227F04: bne         $v0, $zero, L_80227F78
    if (ctx->r2 != 0) {
        // 0x80227F08: nop
    
            goto L_80227F78;
    }
    // 0x80227F08: nop

    // 0x80227F0C: lw          $a0, 0xA0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XA0);
    // 0x80227F10: jal         0x8004F5C4
    // 0x80227F14: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x80227F14: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
    after_0:
    // 0x80227F18: jal         0x8004F144
    // 0x80227F1C: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_1;
    // 0x80227F1C: nop

    after_1:
    // 0x80227F20: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80227F24: beq         $a0, $zero, L_80227F4C
    if (ctx->r4 == 0) {
        // 0x80227F28: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_80227F4C;
    }
    // 0x80227F28: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80227F2C: lbu         $v0, 0x6($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X6);
    // 0x80227F30: sb          $v1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r3;
    // 0x80227F34: addiu       $v1, $zero, 0x20
    ctx->r3 = ADD32(0, 0X20);
    // 0x80227F38: sb          $v1, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r3;
    // 0x80227F3C: sb          $s1, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r17;
    // 0x80227F40: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x80227F44: sb          $v0, 0x6($a0)
    MEM_B(0X6, ctx->r4) = ctx->r2;
    // 0x80227F48: sw          $a0, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->r4;
L_80227F4C:
    // 0x80227F4C: lw          $v1, 0x28($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X28);
    // 0x80227F50: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80227F54: addiu       $a0, $a0, 0x1204
    ctx->r4 = ADD32(ctx->r4, 0X1204);
    // 0x80227F58: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x80227F5C: jal         0x8005FA7C
    // 0x80227F60: sh          $v0, 0x56($v1)
    MEM_H(0X56, ctx->r3) = ctx->r2;
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_2;
    // 0x80227F60: sh          $v0, 0x56($v1)
    MEM_H(0X56, ctx->r3) = ctx->r2;
    after_2:
    // 0x80227F64: lw          $v1, 0x28($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X28);
    // 0x80227F68: lbu         $v1, 0x1($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X1);
    // 0x80227F6C: sw          $zero, 0x4C($v0)
    MEM_W(0X4C, ctx->r2) = 0;
    // 0x80227F70: j           L_80227F88
    // 0x80227F74: sb          $v1, 0xC($v0)
    MEM_B(0XC, ctx->r2) = ctx->r3;
        goto L_80227F88;
    // 0x80227F74: sb          $v1, 0xC($v0)
    MEM_B(0XC, ctx->r2) = ctx->r3;
L_80227F78:
    // 0x80227F78: lw          $v1, 0x2C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X2C);
    // 0x80227F7C: lw          $v0, 0x4C($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4C);
    // 0x80227F80: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x80227F84: sw          $v0, 0x4C($v1)
    MEM_W(0X4C, ctx->r3) = ctx->r2;
L_80227F88:
    // 0x80227F88: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80227F8C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227F90: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227F94: jr          $ra
    // 0x80227F98: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80227F98: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022F5B4_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F5B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022F5B8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022F5BC: lbu         $v0, 0x34B($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X34B);
    // 0x8022F5C0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022F5C4: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022F5C8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022F5CC: lw          $v0, 0x37DC($at)
    ctx->r2 = MEM_W(ctx->r1, 0X37DC);
    // 0x8022F5D0: jalr        $v0
    // 0x8022F5D4: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022F5D4: nop

    after_0:
    // 0x8022F5D8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022F5DC: jr          $ra
    // 0x8022F5E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022F5E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802496C4_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802496C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802496C8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802496CC: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x802496D0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802496D4: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802496D8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802496DC: lw          $v0, 0x51AC($at)
    ctx->r2 = MEM_W(ctx->r1, 0X51AC);
    // 0x802496E0: jalr        $v0
    // 0x802496E4: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802496E4: nop

    after_0:
    // 0x802496E8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802496EC: jr          $ra
    // 0x802496F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802496F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225E70_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225E70: jr          $ra
    // 0x80225E74: nop

    TRACE_RETURN()
    return;
    // 0x80225E74: nop

;}
RECOMP_FUNC void func_8023050C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023050C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80230510: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80230514: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80230518: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8023051C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80230520: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80230524: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80230528: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x8023052C: sltiu       $v0, $v1, 0x7
    ctx->r2 = ctx->r3 < 0X7 ? 1 : 0;
    // 0x80230530: beq         $v0, $zero, L_802306C0
    if (ctx->r2 == 0) {
        // 0x80230534: addu        $s2, $a2, $zero
        ctx->r18 = ADD32(ctx->r6, 0);
            goto L_802306C0;
    }
    // 0x80230534: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x80230538: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8023053C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80230540: addu        $at, $at, $v0
    gpr jr_addend_80230548 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80230544: lw          $v0, 0x5CF8($at)
    ctx->r2 = ADD32(ctx->r1, 0X5CF8);
    // 0x80230548: jr          $v0
    // 0x8023054C: nop

    switch (jr_addend_80230548 >> 2) {
        case 0: goto L_80230550; break;
        case 1: goto L_802305F8; break;
        case 2: goto L_8023060C; break;
        case 3: goto L_80230630; break;
        case 4: goto L_8023063C; break;
        case 5: goto L_80230664; break;
        case 6: goto L_80230690; break;
        default: switch_error(__func__, 0x80230548, 0x80255CF8);
    }
    // 0x8023054C: nop

L_80230550:
    // 0x80230550: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80230554: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x80230558: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8023055C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80230560: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80230564: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80230568: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023056C: lw          $v0, 0x3834($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3834);
    // 0x80230570: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230574: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80230578: jal         0x8004D5D4
    // 0x8023057C: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8023057C: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    after_0:
    // 0x80230580: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x80230584: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x80230588: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x8023058C: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80230590: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80230594: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80230598: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8023059C: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x802305A0: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x802305A4: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x802305A8: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x802305AC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802305B0: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x802305B4: lhu         $v1, 0x3848($at)
    ctx->r3 = MEM_HU(ctx->r1, 0X3848);
    // 0x802305B8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802305BC: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x802305C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802305C4: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x802305C8: sh          $zero, 0x0($s2)
    MEM_H(0X0, ctx->r18) = 0;
    // 0x802305CC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x802305D0: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x802305D4: sb          $v0, 0xFC($s0)
    MEM_B(0XFC, ctx->r16) = ctx->r2;
    // 0x802305D8: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x802305DC: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x802305E0: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x802305E4: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x802305E8: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x802305EC: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x802305F0: j           L_802306C0
    // 0x802305F4: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
        goto L_802306C0;
    // 0x802305F4: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
L_802305F8:
    // 0x802305F8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802305FC: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x80230600: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x80230604: j           L_802306A0
    // 0x80230608: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_802306A0;
    // 0x80230608: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_8023060C:
    // 0x8023060C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80230610: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x80230614: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x80230618: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8023061C: bne         $v1, $v0, L_802306C0
    if (ctx->r3 != ctx->r2) {
        // 0x80230620: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_802306C0;
    }
    // 0x80230620: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80230624: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
    // 0x80230628: j           L_802306AC
    // 0x8023062C: nop

        goto L_802306AC;
    // 0x8023062C: nop

L_80230630:
    // 0x80230630: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x80230634: j           L_802306A0
    // 0x80230638: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
        goto L_802306A0;
    // 0x80230638: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_8023063C:
    // 0x8023063C: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x80230640: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80230644: bne         $v1, $v0, L_802306C0
    if (ctx->r3 != ctx->r2) {
        // 0x80230648: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802306C0;
    }
    // 0x80230648: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023064C: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
    // 0x80230650: bne         $v1, $v0, L_802306C0
    if (ctx->r3 != ctx->r2) {
        // 0x80230654: addiu       $v0, $zero, 0x19
        ctx->r2 = ADD32(0, 0X19);
            goto L_802306C0;
    }
    // 0x80230654: addiu       $v0, $zero, 0x19
    ctx->r2 = ADD32(0, 0X19);
    // 0x80230658: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8023065C: j           L_802306B4
    // 0x80230660: sh          $zero, 0x0($s2)
    MEM_H(0X0, ctx->r18) = 0;
        goto L_802306B4;
    // 0x80230660: sh          $zero, 0x0($s2)
    MEM_H(0X0, ctx->r18) = 0;
L_80230664:
    // 0x80230664: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230668: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8023066C: jal         0x802309F0
    // 0x80230670: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    func_802309F0_ovl28(rdram, ctx);
        goto after_1;
    // 0x80230670: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    after_1:
    // 0x80230674: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x80230678: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8023067C: bne         $v1, $v0, L_802306C0
    if (ctx->r3 != ctx->r2) {
        // 0x80230680: addiu       $v0, $zero, 0x1E
        ctx->r2 = ADD32(0, 0X1E);
            goto L_802306C0;
    }
    // 0x80230680: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x80230684: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
    // 0x80230688: j           L_802306AC
    // 0x8023068C: nop

        goto L_802306AC;
    // 0x8023068C: nop

L_80230690:
    // 0x80230690: jal         0x802309F0
    // 0x80230694: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802309F0_ovl28(rdram, ctx);
        goto after_2;
    // 0x80230694: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80230698: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x8023069C: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
L_802306A0:
    // 0x802306A0: bne         $v1, $v0, L_802306C0
    if (ctx->r3 != ctx->r2) {
        // 0x802306A4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802306C0;
    }
    // 0x802306A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802306A8: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
L_802306AC:
    // 0x802306AC: bne         $v1, $v0, L_802306C0
    if (ctx->r3 != ctx->r2) {
        // 0x802306B0: nop
    
            goto L_802306C0;
    }
    // 0x802306B0: nop

L_802306B4:
    // 0x802306B4: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802306B8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802306BC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_802306C0:
    // 0x802306C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802306C4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x802306C8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802306CC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802306D0: jr          $ra
    // 0x802306D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802306D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80225FB4_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225FB4: jr          $ra
    // 0x80225FB8: nop

    TRACE_RETURN()
    return;
    // 0x80225FB8: nop

;}
RECOMP_FUNC void func_8023CE64_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023CE64: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023CE68: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023CE6C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023CE70: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023CE74: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023CE78: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8023CE7C: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x8023CE80: beq         $v1, $zero, L_8023CE9C
    if (ctx->r3 == 0) {
        // 0x8023CE84: addiu       $s1, $s0, 0x440
        ctx->r17 = ADD32(ctx->r16, 0X440);
            goto L_8023CE9C;
    }
    // 0x8023CE84: addiu       $s1, $s0, 0x440
    ctx->r17 = ADD32(ctx->r16, 0X440);
    // 0x8023CE88: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023CE8C: beq         $v1, $v0, L_8023CF48
    if (ctx->r3 == ctx->r2) {
        // 0x8023CE90: nop
    
            goto L_8023CF48;
    }
    // 0x8023CE90: nop

    // 0x8023CE94: j           L_8023CFC4
    // 0x8023CE98: nop

        goto L_8023CFC4;
    // 0x8023CE98: nop

L_8023CE9C:
    // 0x8023CE9C: lhu         $a0, 0x440($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X440);
    // 0x8023CEA0: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x8023CEA4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023CEA8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8023CEAC: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x8023CEB0: lui         $a1, 0x8019
    ctx->r5 = S32(0X8019 << 16);
    // 0x8023CEB4: lw          $a1, 0x3C60($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X3C60);
    // 0x8023CEB8: addiu       $v0, $zero, -0x60
    ctx->r2 = ADD32(0, -0X60);
    // 0x8023CEBC: sh          $v0, 0x490($s0)
    MEM_H(0X490, ctx->r16) = ctx->r2;
    // 0x8023CEC0: sh          $zero, 0x444($s0)
    MEM_H(0X444, ctx->r16) = 0;
    // 0x8023CEC4: ori         $a0, $a0, 0x20
    ctx->r4 = ctx->r4 | 0X20;
    // 0x8023CEC8: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8023CECC: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x8023CED0: sh          $a0, 0x440($s0)
    MEM_H(0X440, ctx->r16) = ctx->r4;
    // 0x8023CED4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8023CED8: lbu         $v0, 0xA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XA);
    // 0x8023CEDC: sb          $zero, 0x493($s0)
    MEM_B(0X493, ctx->r16) = 0;
    // 0x8023CEE0: sb          $zero, 0x492($s0)
    MEM_B(0X492, ctx->r16) = 0;
    // 0x8023CEE4: jal         0x8004EFE4
    // 0x8023CEE8: sh          $v0, 0x448($s0)
    MEM_H(0X448, ctx->r16) = ctx->r2;
    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_0;
    // 0x8023CEE8: sh          $v0, 0x448($s0)
    MEM_H(0X448, ctx->r16) = ctx->r2;
    after_0:
    // 0x8023CEEC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8023CEF0: beq         $v1, $zero, L_8023CF48
    if (ctx->r3 == 0) {
        // 0x8023CEF4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023CF48;
    }
    // 0x8023CEF4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023CEF8: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8023CEFC: addiu       $v0, $zero, 0x33
    ctx->r2 = ADD32(0, 0X33);
    // 0x8023CF00: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x8023CF04: addiu       $v0, $zero, 0xFD
    ctx->r2 = ADD32(0, 0XFD);
    // 0x8023CF08: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    // 0x8023CF0C: addiu       $v0, $zero, 0xC8
    ctx->r2 = ADD32(0, 0XC8);
    // 0x8023CF10: sh          $v0, 0x2C($v1)
    MEM_H(0X2C, ctx->r3) = ctx->r2;
    // 0x8023CF14: sh          $v0, 0x2E($v1)
    MEM_H(0X2E, ctx->r3) = ctx->r2;
    // 0x8023CF18: sh          $v0, 0x30($v1)
    MEM_H(0X30, ctx->r3) = ctx->r2;
    // 0x8023CF1C: addiu       $v0, $zero, 0x700
    ctx->r2 = ADD32(0, 0X700);
    // 0x8023CF20: sh          $v0, 0x32($v1)
    MEM_H(0X32, ctx->r3) = ctx->r2;
    // 0x8023CF24: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8023CF28: sh          $v0, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r2;
    // 0x8023CF2C: sh          $v0, 0x18($v1)
    MEM_H(0X18, ctx->r3) = ctx->r2;
    // 0x8023CF30: addiu       $v0, $zero, 0x500
    ctx->r2 = ADD32(0, 0X500);
    // 0x8023CF34: sh          $v0, 0x1A($v1)
    MEM_H(0X1A, ctx->r3) = ctx->r2;
    // 0x8023CF38: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x8023CF3C: sh          $zero, 0x14($v1)
    MEM_H(0X14, ctx->r3) = 0;
    // 0x8023CF40: sb          $v0, 0xB($v1)
    MEM_B(0XB, ctx->r3) = ctx->r2;
    // 0x8023CF44: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
L_8023CF48:
    // 0x8023CF48: jal         0x8003E934
    // 0x8023CF4C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_1;
    // 0x8023CF4C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8023CF50: lhu         $a2, 0x50($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X50);
    // 0x8023CF54: lhu         $v1, 0x16($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X16);
    // 0x8023CF58: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x8023CF5C: subu        $a2, $a2, $v1
    ctx->r6 = SUB32(ctx->r6, ctx->r3);
    // 0x8023CF60: sh          $a2, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r6;
    // 0x8023CF64: lh          $v0, 0x4($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X4);
    // 0x8023CF68: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023CF6C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8023CF70: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8023CF74: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023CF78: lh          $v0, -0x2400($at)
    ctx->r2 = MEM_H(ctx->r1, -0X2400);
    // 0x8023CF7C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8023CF80: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8023CF84: sra         $v0, $v0, 8
    ctx->r2 = S32(SIGNED(ctx->r2) >> 8);
    // 0x8023CF88: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x8023CF8C: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x8023CF90: jal         0x8004DA90
    // 0x8023CF94: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x8023CF94: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    after_2:
    // 0x8023CF98: lh          $v1, 0x4($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X4);
    // 0x8023CF9C: addiu       $v0, $zero, 0x3F
    ctx->r2 = ADD32(0, 0X3F);
    // 0x8023CFA0: bne         $v1, $v0, L_8023CFB4
    if (ctx->r3 != ctx->r2) {
        // 0x8023CFA4: nop
    
            goto L_8023CFB4;
    }
    // 0x8023CFA4: nop

    // 0x8023CFA8: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8023CFAC: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8023CFB0: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8023CFB4:
    // 0x8023CFB4: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8023CFB8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023CFBC: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x8023CFC0: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_8023CFC4:
    // 0x8023CFC4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8023CFC8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023CFCC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023CFD0: jr          $ra
    // 0x8023CFD4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023CFD4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022A4CC_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A4CC: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x8022A4D0: bne         $v0, $zero, L_8022A4EC
    if (ctx->r2 != 0) {
        // 0x8022A4D4: nop
    
            goto L_8022A4EC;
    }
    // 0x8022A4D4: nop

    // 0x8022A4D8: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8022A4DC: addiu       $v1, $v1, 0x49B0
    ctx->r3 = ADD32(ctx->r3, 0X49B0);
    // 0x8022A4E0: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8022A4E4: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022A4E8: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
L_8022A4EC:
    // 0x8022A4EC: jr          $ra
    // 0x8022A4F0: nop

    TRACE_RETURN()
    return;
    // 0x8022A4F0: nop

;}
RECOMP_FUNC void func_80234FC0_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234FC0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80234FC4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80234FC8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80234FCC: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80234FD0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80234FD4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80234FD8: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x80234FDC: jal         0x8009A3B4
    // 0x80234FE0: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80234FE0: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    after_0:
    // 0x80234FE4: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80234FE8: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80234FEC: jal         0x8009A3B4
    // 0x80234FF0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80234FF0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80234FF4: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80234FF8: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80234FFC: jal         0x8009A3B4
    // 0x80235000: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80235000: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80235004: lbu         $v1, 0xAC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XAC);
    // 0x80235008: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8023500C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235010: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x80235014: addiu       $a1, $a1, -0x3A50
    ctx->r5 = ADD32(ctx->r5, -0X3A50);
    // 0x80235018: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023501C: sb          $v1, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r3;
    // 0x80235020: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80235024: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80235028: lw          $v0, 0x3BA8($at)
    ctx->r2 = MEM_W(ctx->r1, 0X3BA8);
    // 0x8023502C: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x80235030: jalr        $v0
    // 0x80235034: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x80235034: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_3:
    // 0x80235038: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023503C: jal         0x80235734
    // 0x80235040: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_80235734_ovl28(rdram, ctx);
        goto after_4;
    // 0x80235040: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_4:
    // 0x80235044: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x80235048: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x8023504C: beq         $a1, $v0, L_80235068
    if (ctx->r5 == ctx->r2) {
        // 0x80235050: nop
    
            goto L_80235068;
    }
    // 0x80235050: nop

    // 0x80235054: lh          $a2, 0x34A($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34A);
    // 0x80235058: jal         0x80050294
    // 0x8023505C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_5;
    // 0x8023505C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80235060: j           L_80235070
    // 0x80235064: nop

        goto L_80235070;
    // 0x80235064: nop

L_80235068:
    // 0x80235068: jal         0x8005044C
    // 0x8023506C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_6;
    // 0x8023506C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
L_80235070:
    // 0x80235070: lbu         $v0, 0x12($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X12);
    // 0x80235074: beq         $v0, $zero, L_802350B0
    if (ctx->r2 == 0) {
        // 0x80235078: nop
    
            goto L_802350B0;
    }
    // 0x80235078: nop

    // 0x8023507C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80235080: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80235084: beq         $v0, $zero, L_802350B0
    if (ctx->r2 == 0) {
        // 0x80235088: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802350B0;
    }
    // 0x80235088: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023508C: addiu       $a1, $zero, 0x26
    ctx->r5 = ADD32(0, 0X26);
    // 0x80235090: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x80235094: addiu       $v0, $zero, -0x5
    ctx->r2 = ADD32(0, -0X5);
    // 0x80235098: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8023509C: addiu       $v0, $zero, -0x1C
    ctx->r2 = ADD32(0, -0X1C);
    // 0x802350A0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x802350A4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802350A8: jal         0x8003B3F8
    // 0x802350AC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_8003B3F8_167F8(rdram, ctx);
        goto after_7;
    // 0x802350AC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_7:
L_802350B0:
    // 0x802350B0: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x802350B4: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x802350B8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802350BC: jr          $ra
    // 0x802350C0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x802350C0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80229208_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229208: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022920C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229210: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229214: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80229218: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022921C: lh          $a3, 0x34E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X34E);
    // 0x80229220: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80229224: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x80229228: jal         0x8004F820
    // 0x8022922C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022922C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x80229230: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80229234: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80229238: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022923C: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x80229240: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80229244: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x80229248: bne         $v0, $zero, L_80229280
    if (ctx->r2 != 0) {
        // 0x8022924C: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_80229280;
    }
    // 0x8022924C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80229250: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x80229254: lbu         $v1, 0x34B($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34B);
    // 0x80229258: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022925C: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x80229260: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x80229264: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    // 0x80229268: jal         0x802296D8
    // 0x8022926C: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
    func_802296D8_ovl29(rdram, ctx);
        goto after_1;
    // 0x8022926C: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
    after_1:
    // 0x80229270: jal         0x80034E3C
    // 0x80229274: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80034E3C_1023C(rdram, ctx);
        goto after_2;
    // 0x80229274: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_2:
    // 0x80229278: j           L_8022929C
    // 0x8022927C: nop

        goto L_8022929C;
    // 0x8022927C: nop

L_80229280:
    // 0x80229280: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80229284: lb          $v1, -0x3C18($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3C18);
    // 0x80229288: bne         $v1, $v0, L_8022929C
    if (ctx->r3 != ctx->r2) {
        // 0x8022928C: nop
    
            goto L_8022929C;
    }
    // 0x8022928C: nop

    // 0x80229290: lbu         $v0, 0x34B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X34B);
    // 0x80229294: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80229298: sb          $v0, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r2;
L_8022929C:
    // 0x8022929C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802292A0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802292A4: jr          $ra
    // 0x802292A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802292A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80229774_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229774: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80229778: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8022977C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80229780: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x80229784: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80229788: lh          $v0, 0x56($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X56);
    // 0x8022978C: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    // 0x80229790: sll         $a2, $a1, 20
    ctx->r6 = S32(ctx->r5 << 20);
    // 0x80229794: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x80229798: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8022979C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x802297A0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802297A4: jal         0x8004DC2C
    // 0x802297A8: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_8004DC2C_2902C(rdram, ctx);
        goto after_0;
    // 0x802297A8: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_0:
    // 0x802297AC: lh          $a1, 0x18($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X18);
    // 0x802297B0: lhu         $a0, 0x14($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X14);
    // 0x802297B4: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x802297B8: lhu         $v1, 0x49C4($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X49C4);
    // 0x802297BC: lh          $a2, 0x20($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X20);
    // 0x802297C0: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    // 0x802297C4: subu        $a0, $a0, $v1
    ctx->r4 = SUB32(ctx->r4, ctx->r3);
    // 0x802297C8: lhu         $v1, 0x18($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X18);
    // 0x802297CC: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x802297D0: lhu         $a1, 0x49C8($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X49C8);
    // 0x802297D4: addu        $a0, $s0, $a0
    ctx->r4 = ADD32(ctx->r16, ctx->r4);
    // 0x802297D8: andi        $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 & 0XFFFF;
    // 0x802297DC: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x802297E0: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x802297E4: addu        $v1, $s0, $v1
    ctx->r3 = ADD32(ctx->r16, ctx->r3);
    // 0x802297E8: andi        $s0, $s0, 0xFFFF
    ctx->r16 = ctx->r16 & 0XFFFF;
    // 0x802297EC: sll         $s0, $s0, 1
    ctx->r16 = S32(ctx->r16 << 1);
    // 0x802297F0: slt         $a0, $a0, $s0
    ctx->r4 = SIGNED(ctx->r4) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x802297F4: beq         $a0, $zero, L_80229804
    if (ctx->r4 == 0) {
        // 0x802297F8: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80229804;
    }
    // 0x802297F8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x802297FC: andi        $v0, $v1, 0xFFFF
    ctx->r2 = ctx->r3 & 0XFFFF;
    // 0x80229800: slt         $v0, $v0, $s0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r16) ? 1 : 0;
L_80229804:
    // 0x80229804: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x80229808: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8022980C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80229810: jr          $ra
    // 0x80229814: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80229814: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80229818: nop

    // 0x8022981C: nop

;}
RECOMP_FUNC void func_8022DE88_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DE88: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022DE8C: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x8022DE90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022DE94: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022DE98: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022DE9C: addiu       $v0, $zero, 0x1B
    ctx->r2 = ADD32(0, 0X1B);
    // 0x8022DEA0: bne         $v1, $v0, L_8022DF6C
    if (ctx->r3 != ctx->r2) {
        // 0x8022DEA4: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8022DF6C;
    }
    // 0x8022DEA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022DEA8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022DEAC: bne         $v0, $zero, L_8022DF2C
    if (ctx->r2 != 0) {
        // 0x8022DEB0: lui         $v0, 0x800
        ctx->r2 = S32(0X800 << 16);
            goto L_8022DF2C;
    }
    // 0x8022DEB0: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x8022DEB4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022DEB8: lw          $v0, 0x4B34($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4B34);
    // 0x8022DEBC: bne         $v0, $s0, L_8022DFB8
    if (ctx->r2 != ctx->r16) {
        // 0x8022DEC0: nop
    
            goto L_8022DFB8;
    }
    // 0x8022DEC0: nop

    // 0x8022DEC4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022DEC8: lhu         $v0, 0x4A06($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X4A06);
    // 0x8022DECC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022DED0: sw          $zero, 0x4B34($at)
    MEM_W(0X4B34, ctx->r1) = 0;
    // 0x8022DED4: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022DED8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022DEDC: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022DEE0: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022DEE4: addiu       $v0, $v0, 0x180
    ctx->r2 = ADD32(ctx->r2, 0X180);
    // 0x8022DEE8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022DEEC: slti        $v0, $v0, 0x300
    ctx->r2 = SIGNED(ctx->r2) < 0X300 ? 1 : 0;
    // 0x8022DEF0: beq         $v0, $zero, L_8022DFB8
    if (ctx->r2 == 0) {
        // 0x8022DEF4: lui         $v1, 0x800
        ctx->r3 = S32(0X800 << 16);
            goto L_8022DFB8;
    }
    // 0x8022DEF4: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8022DEF8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022DEFC: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022DF00: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022DF04: bne         $v0, $zero, L_8022DFB8
    if (ctx->r2 != 0) {
        // 0x8022DF08: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_8022DFB8;
    }
    // 0x8022DF08: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022DF0C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022DF10: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x8022DF14: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022DF18: jal         0x800610AC
    // 0x8022DF1C: addiu       $a3, $zero, 0xD2
    ctx->r7 = ADD32(0, 0XD2);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_0;
    // 0x8022DF1C: addiu       $a3, $zero, 0xD2
    ctx->r7 = ADD32(0, 0XD2);
    after_0:
    // 0x8022DF20: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022DF24: j           L_8022DFB8
    // 0x8022DF28: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_8022DFB8;
    // 0x8022DF28: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022DF2C:
    // 0x8022DF2C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8022DF30: lw          $v1, 0x3FF0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3FF0);
    // 0x8022DF34: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x8022DF38: bne         $v0, $zero, L_8022DFB8
    if (ctx->r2 != 0) {
        // 0x8022DF3C: andi        $v1, $v1, 0xFF
        ctx->r3 = ctx->r3 & 0XFF;
            goto L_8022DFB8;
    }
    // 0x8022DF3C: andi        $v1, $v1, 0xFF
    ctx->r3 = ctx->r3 & 0XFF;
    // 0x8022DF40: bne         $v1, $zero, L_8022DF5C
    if (ctx->r3 != 0) {
        // 0x8022DF44: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022DF5C;
    }
    // 0x8022DF44: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022DF48: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022DF4C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8022DF50: sb          $v0, -0x3B97($at)
    MEM_B(-0X3B97, ctx->r1) = ctx->r2;
    // 0x8022DF54: j           L_8022DFB8
    // 0x8022DF58: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
        goto L_8022DFB8;
    // 0x8022DF58: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_8022DF5C:
    // 0x8022DF5C: beql        $v1, $v0, L_8022DFB8
    if (ctx->r3 == ctx->r2) {
        // 0x8022DF60: sb          $zero, 0xA($s0)
        MEM_B(0XA, ctx->r16) = 0;
            goto L_8022DFB8;
    }
    goto skip_0;
    // 0x8022DF60: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    skip_0:
    // 0x8022DF64: j           L_8022DFB8
    // 0x8022DF68: nop

        goto L_8022DFB8;
    // 0x8022DF68: nop

L_8022DF6C:
    // 0x8022DF6C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022DF70: lw          $v0, 0x4B34($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4B34);
    // 0x8022DF74: bne         $v0, $s0, L_8022DFB8
    if (ctx->r2 != ctx->r16) {
        // 0x8022DF78: nop
    
            goto L_8022DFB8;
    }
    // 0x8022DF78: nop

    // 0x8022DF7C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022DF80: lhu         $v0, 0x4A06($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X4A06);
    // 0x8022DF84: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022DF88: sw          $zero, 0x4B34($at)
    MEM_W(0X4B34, ctx->r1) = 0;
    // 0x8022DF8C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022DF90: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022DF94: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022DF98: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022DF9C: addiu       $v0, $v0, 0x180
    ctx->r2 = ADD32(ctx->r2, 0X180);
    // 0x8022DFA0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022DFA4: slti        $v0, $v0, 0x300
    ctx->r2 = SIGNED(ctx->r2) < 0X300 ? 1 : 0;
    // 0x8022DFA8: beq         $v0, $zero, L_8022DFB8
    if (ctx->r2 == 0) {
        // 0x8022DFAC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022DFB8;
    }
    // 0x8022DFAC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022DFB0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8022DFB4: sb          $v0, -0x3B97($at)
    MEM_B(-0X3B97, ctx->r1) = ctx->r2;
L_8022DFB8:
    // 0x8022DFB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022DFBC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022DFC0: jr          $ra
    // 0x8022DFC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022DFC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802289F4_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802289F4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802289F8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802289FC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228A00: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80228A04: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80228A08: lh          $a0, 0x34C($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X34C);
    // 0x80228A0C: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x80228A10: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    // 0x80228A14: jal         0x8004FA7C
    // 0x80228A18: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x80228A18: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    after_0:
    // 0x80228A1C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80228A20: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x80228A24: beq         $v0, $zero, L_80228AB8
    if (ctx->r2 == 0) {
        // 0x80228A28: nop
    
            goto L_80228AB8;
    }
    // 0x80228A28: nop

    // 0x80228A2C: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80228A30: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x80228A34: bne         $v0, $zero, L_80228AB8
    if (ctx->r2 != 0) {
        // 0x80228A38: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80228AB8;
    }
    // 0x80228A38: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228A3C: lbu         $v1, 0x34A($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34A);
    // 0x80228A40: beq         $v1, $v0, L_80228A58
    if (ctx->r3 == ctx->r2) {
        // 0x80228A44: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80228A58;
    }
    // 0x80228A44: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80228A48: beq         $v1, $v0, L_80228A88
    if (ctx->r3 == ctx->r2) {
        // 0x80228A4C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80228A88;
    }
    // 0x80228A4C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80228A50: j           L_80228AAC
    // 0x80228A54: nop

        goto L_80228AAC;
    // 0x80228A54: nop

L_80228A58:
    // 0x80228A58: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80228A5C: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x80228A60: bne         $v0, $zero, L_80228AAC
    if (ctx->r2 != 0) {
        // 0x80228A64: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80228AAC;
    }
    // 0x80228A64: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80228A68: slti        $v0, $v1, 0x6
    ctx->r2 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    // 0x80228A6C: bne         $v0, $zero, L_80228AAC
    if (ctx->r2 != 0) {
        // 0x80228A70: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80228AAC;
    }
    // 0x80228A70: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228A74: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80228A78: bne         $v1, $v0, L_80228AAC
    if (ctx->r3 != ctx->r2) {
        // 0x80228A7C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80228AAC;
    }
    // 0x80228A7C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80228A80: j           L_80228AAC
    // 0x80228A84: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80228AAC;
    // 0x80228A84: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80228A88:
    // 0x80228A88: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80228A8C: slti        $v0, $v1, 0x6
    ctx->r2 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    // 0x80228A90: beq         $v0, $zero, L_80228AA8
    if (ctx->r2 == 0) {
        // 0x80228A94: slti        $v0, $v1, 0x4
        ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
            goto L_80228AA8;
    }
    // 0x80228A94: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x80228A98: bne         $v0, $zero, L_80228AAC
    if (ctx->r2 != 0) {
        // 0x80228A9C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80228AAC;
    }
    // 0x80228A9C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80228AA0: j           L_80228AAC
    // 0x80228AA4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80228AAC;
    // 0x80228AA4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80228AA8:
    // 0x80228AA8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80228AAC:
    // 0x80228AAC: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80228AB0: beq         $v0, $zero, L_80228ADC
    if (ctx->r2 == 0) {
        // 0x80228AB4: nop
    
            goto L_80228ADC;
    }
    // 0x80228AB4: nop

L_80228AB8:
    // 0x80228AB8: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x80228ABC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80228AC0: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80228AC4: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80228AC8: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x80228ACC: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80228AD0: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x80228AD4: j           L_80228AEC
    // 0x80228AD8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80228AEC;
    // 0x80228AD8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80228ADC:
    // 0x80228ADC: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80228AE0: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80228AE4: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80228AE8: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_80228AEC:
    // 0x80228AEC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80228AF0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80228AF4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228AF8: jr          $ra
    // 0x80228AFC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80228AFC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802275AC_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802275AC: lh          $v0, 0x350($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X350);
    // 0x802275B0: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x802275B4: beq         $v0, $zero, L_802275D0
    if (ctx->r2 == 0) {
        // 0x802275B8: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_802275D0;
    }
    // 0x802275B8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802275BC: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x802275C0: sh          $v0, 0x350($a0)
    MEM_H(0X350, ctx->r4) = ctx->r2;
    // 0x802275C4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802275C8: bne         $v0, $zero, L_802275FC
    if (ctx->r2 != 0) {
        // 0x802275CC: nop
    
            goto L_802275FC;
    }
    // 0x802275CC: nop

L_802275D0:
    // 0x802275D0: lb          $v0, 0xA7($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XA7);
    // 0x802275D4: bgez        $v0, L_802275FC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802275D8: addiu       $v0, $zero, 0x49
        ctx->r2 = ADD32(0, 0X49);
            goto L_802275FC;
    }
    // 0x802275D8: addiu       $v0, $zero, 0x49
    ctx->r2 = ADD32(0, 0X49);
    // 0x802275DC: lbu         $v1, 0x2($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X2);
    // 0x802275E0: bnel        $v1, $v0, L_802275FC
    if (ctx->r3 != ctx->r2) {
        // 0x802275E4: sb          $zero, 0xA($a0)
        MEM_B(0XA, ctx->r4) = 0;
            goto L_802275FC;
    }
    goto skip_0;
    // 0x802275E4: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    skip_0:
    // 0x802275E8: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x802275EC: addiu       $v1, $zero, 0x9
    ctx->r3 = ADD32(0, 0X9);
    // 0x802275F0: sb          $v1, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r3;
    // 0x802275F4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802275F8: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_802275FC:
    // 0x802275FC: jr          $ra
    // 0x80227600: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x80227600: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8022B7F0_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B7F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B7F4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B7F8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B7FC: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8022B800: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022B804: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022B808: jal         0x8009A3B4
    // 0x8022B80C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022B80C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8022B810: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8022B814: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022B818: jal         0x8009A3B4
    // 0x8022B81C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022B81C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022B820: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8022B824: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8022B828: jal         0x8009A3B4
    // 0x8022B82C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022B82C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022B830: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022B834: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022B838: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022B83C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022B840: lw          $v0, 0x1340($at)
    ctx->r2 = MEM_W(ctx->r1, 0X1340);
    // 0x8022B844: jalr        $v0
    // 0x8022B848: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x8022B848: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022B84C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022B850: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022B854: beq         $v0, $zero, L_8022B86C
    if (ctx->r2 == 0) {
        // 0x8022B858: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022B86C;
    }
    // 0x8022B858: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B85C: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x8022B860: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8022B864: jal         0x8003B564
    // 0x8022B868: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_4;
    // 0x8022B868: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_4:
L_8022B86C:
    // 0x8022B86C: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8022B870: beq         $v0, $zero, L_8022B888
    if (ctx->r2 == 0) {
        // 0x8022B874: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_8022B888;
    }
    // 0x8022B874: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022B878: jal         0x8005044C
    // 0x8022B87C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_5;
    // 0x8022B87C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x8022B880: j           L_8022B88C
    // 0x8022B884: nop

        goto L_8022B88C;
    // 0x8022B884: nop

L_8022B888:
    // 0x8022B888: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
L_8022B88C:
    // 0x8022B88C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022B890: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B894: jr          $ra
    // 0x8022B898: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B898: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022D304_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D304: lb          $v0, 0xA7($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XA7);
    // 0x8022D308: bltzl       $v0, L_8022D310
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022D30C: sb          $zero, 0xA($a0)
        MEM_B(0XA, ctx->r4) = 0;
            goto L_8022D310;
    }
    goto skip_0;
    // 0x8022D30C: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    skip_0:
L_8022D310:
    // 0x8022D310: jr          $ra
    // 0x8022D314: nop

    TRACE_RETURN()
    return;
    // 0x8022D314: nop

;}
RECOMP_FUNC void func_8022A428_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A428: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x8022A42C: beq         $a1, $zero, L_8022A43C
    if (ctx->r5 == 0) {
        // 0x8022A430: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_8022A43C;
    }
    // 0x8022A430: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022A434: j           L_8022A440
    // 0x8022A438: sb          $zero, 0x107($a0)
    MEM_B(0X107, ctx->r4) = 0;
        goto L_8022A440;
    // 0x8022A438: sb          $zero, 0x107($a0)
    MEM_B(0X107, ctx->r4) = 0;
L_8022A43C:
    // 0x8022A43C: sb          $v0, 0x107($a0)
    MEM_B(0X107, ctx->r4) = ctx->r2;
L_8022A440:
    // 0x8022A440: jr          $ra
    // 0x8022A444: nop

    TRACE_RETURN()
    return;
    // 0x8022A444: nop

;}
RECOMP_FUNC void func_8022C408_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C408: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C40C: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
    // 0x8022C410: jr          $ra
    // 0x8022C414: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
    TRACE_RETURN()
    return;
    // 0x8022C414: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
;}
RECOMP_FUNC void func_8022565C_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022565C: jr          $ra
    // 0x80225660: nop

    TRACE_RETURN()
    return;
    // 0x80225660: nop

;}
RECOMP_FUNC void func_80225664_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225664: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225668: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022566C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225670: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225674: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225678: bne         $v0, $zero, L_802256B8
    if (ctx->r2 != 0) {
        // 0x8022567C: nop
    
            goto L_802256B8;
    }
    // 0x8022567C: nop

    // 0x80225680: jal         0x8006033C
    // 0x80225684: addiu       $a0, $zero, 0x33
    ctx->r4 = ADD32(0, 0X33);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80225684: addiu       $a0, $zero, 0x33
    ctx->r4 = ADD32(0, 0X33);
    after_0:
    // 0x80225688: bne         $v0, $zero, L_802256B4
    if (ctx->r2 != 0) {
        // 0x8022568C: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_802256B4;
    }
    // 0x8022568C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225690: jal         0x8006033C
    // 0x80225694: addiu       $a0, $zero, 0x21
    ctx->r4 = ADD32(0, 0X21);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x80225694: addiu       $a0, $zero, 0x21
    ctx->r4 = ADD32(0, 0X21);
    after_1:
    // 0x80225698: beq         $v0, $zero, L_802256B4
    if (ctx->r2 == 0) {
        // 0x8022569C: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_802256B4;
    }
    // 0x8022569C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802256A0: jal         0x80060690
    // 0x802256A4: addiu       $a0, $zero, 0x56
    ctx->r4 = ADD32(0, 0X56);
    func_80060690_3BA90(rdram, ctx);
        goto after_2;
    // 0x802256A4: addiu       $a0, $zero, 0x56
    ctx->r4 = ADD32(0, 0X56);
    after_2:
    // 0x802256A8: jal         0x8006036C
    // 0x802256AC: addiu       $a0, $zero, 0x33
    ctx->r4 = ADD32(0, 0X33);
    func_8006036C_3B76C(rdram, ctx);
        goto after_3;
    // 0x802256AC: addiu       $a0, $zero, 0x33
    ctx->r4 = ADD32(0, 0X33);
    after_3:
    // 0x802256B0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_802256B4:
    // 0x802256B4: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_802256B8:
    // 0x802256B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802256BC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802256C0: jr          $ra
    // 0x802256C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802256C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022B6B8_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B6B8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022B6BC: lw          $v0, 0x4B34($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4B34);
    // 0x8022B6C0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022B6C4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022B6C8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022B6CC: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022B6D0: lui         $s3, 0x8020
    ctx->r19 = S32(0X8020 << 16);
    // 0x8022B6D4: addiu       $s3, $s3, 0x49B0
    ctx->r19 = ADD32(ctx->r19, 0X49B0);
    // 0x8022B6D8: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8022B6DC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022B6E0: bne         $v0, $s1, L_8022B7C4
    if (ctx->r2 != ctx->r17) {
        // 0x8022B6E4: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_8022B7C4;
    }
    // 0x8022B6E4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B6E8: addiu       $s0, $s1, 0x14
    ctx->r16 = ADD32(ctx->r17, 0X14);
    // 0x8022B6EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B6F0: lh          $a2, 0x56($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X56);
    // 0x8022B6F4: addiu       $s2, $s3, 0x14
    ctx->r18 = ADD32(ctx->r19, 0X14);
    // 0x8022B6F8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022B6FC: jal         0x8004F820
    // 0x8022B700: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022B700: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_0:
    // 0x8022B704: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B708: bgez        $v0, L_8022B734
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022B70C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022B734;
    }
    // 0x8022B70C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B710: lh          $a2, 0x56($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X56);
    // 0x8022B714: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022B718: jal         0x8004F820
    // 0x8022B71C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x8022B71C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_1:
    // 0x8022B720: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B724: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022B728: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8022B72C: j           L_8022B74C
    // 0x8022B730: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
        goto L_8022B74C;
    // 0x8022B730: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
L_8022B734:
    // 0x8022B734: lh          $a2, 0x56($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X56);
    // 0x8022B738: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022B73C: jal         0x8004F820
    // 0x8022B740: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x8022B740: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_2:
    // 0x8022B744: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B748: sra         $v0, $v0, 19
    ctx->r2 = S32(SIGNED(ctx->r2) >> 19);
L_8022B74C:
    // 0x8022B74C: sh          $v0, 0x64($s1)
    MEM_H(0X64, ctx->r17) = ctx->r2;
    // 0x8022B750: lbu         $v0, 0x0($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X0);
    // 0x8022B754: lbu         $v1, 0xBD($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0XBD);
    // 0x8022B758: sw          $zero, 0x184($s3)
    MEM_W(0X184, ctx->r19) = 0;
    // 0x8022B75C: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x8022B760: ori         $v1, $v1, 0x40
    ctx->r3 = ctx->r3 | 0X40;
    // 0x8022B764: sb          $v0, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r2;
    // 0x8022B768: sb          $v1, 0xBD($s3)
    MEM_B(0XBD, ctx->r19) = ctx->r3;
    // 0x8022B76C: lh          $v0, 0x180($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X180);
    // 0x8022B770: lui         $s0, 0x8023
    ctx->r16 = S32(0X8023 << 16);
    // 0x8022B774: addiu       $s0, $s0, 0x1AF0
    ctx->r16 = ADD32(ctx->r16, 0X1AF0);
    // 0x8022B778: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x8022B77C: lh          $v0, 0x182($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X182);
    // 0x8022B780: addiu       $v0, $v0, -0x20
    ctx->r2 = ADD32(ctx->r2, -0X20);
    // 0x8022B784: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022B788: sw          $v0, 0x1AF4($at)
    MEM_W(0X1AF4, ctx->r1) = ctx->r2;
    // 0x8022B78C: lh          $v0, 0x184($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X184);
    // 0x8022B790: addiu       $a0, $s3, 0x14
    ctx->r4 = ADD32(ctx->r19, 0X14);
    // 0x8022B794: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022B798: sw          $v0, 0x1AF8($at)
    MEM_W(0X1AF8, ctx->r1) = ctx->r2;
    // 0x8022B79C: jal         0x8004EC38
    // 0x8022B7A0: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8004EC38_2A038(rdram, ctx);
        goto after_3;
    // 0x8022B7A0: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_3:
    // 0x8022B7A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B7A8: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x8022B7AC: lw          $a3, 0x435C($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X435C);
    // 0x8022B7B0: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x8022B7B4: jal         0x80034FCC
    // 0x8022B7B8: addiu       $a2, $v0, 0x800
    ctx->r6 = ADD32(ctx->r2, 0X800);
    func_80034FCC_103CC(rdram, ctx);
        goto after_4;
    // 0x8022B7B8: addiu       $a2, $v0, 0x800
    ctx->r6 = ADD32(ctx->r2, 0X800);
    after_4:
    // 0x8022B7BC: j           L_8022B7C8
    // 0x8022B7C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8022B7C8;
    // 0x8022B7C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022B7C4:
    // 0x8022B7C4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8022B7C8:
    // 0x8022B7C8: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022B7CC: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022B7D0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022B7D4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022B7D8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B7DC: jr          $ra
    // 0x8022B7E0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022B7E0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8022B7E4: nop

    // 0x8022B7E8: nop

    // 0x8022B7EC: nop

;}
RECOMP_FUNC void func_802259E0_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802259E0: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x802259E4: bne         $v0, $zero, L_802259F0
    if (ctx->r2 != 0) {
        // 0x802259E8: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_802259F0;
    }
    // 0x802259E8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802259EC: sb          $v0, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r2;
L_802259F0:
    // 0x802259F0: jr          $ra
    // 0x802259F4: nop

    TRACE_RETURN()
    return;
    // 0x802259F4: nop

;}
RECOMP_FUNC void func_8022A6E0_ovl29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A6E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022A6E4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A6E8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A6EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022A6F0: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x8022A6F4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022A6F8: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8022A6FC: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x8022A700: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x8022A704: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x8022A708: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8022A70C: jal         0x8004D5D4
    // 0x8022A710: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8022A710: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x8022A714: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A718: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022A71C: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8022A720: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022A724: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022A728: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022A72C: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022A730: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022A734: addiu       $v0, $v0, 0x1260
    ctx->r2 = ADD32(ctx->r2, 0X1260);
    // 0x8022A738: jal         0x8003E934
    // 0x8022A73C: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    func_8003E934_19D34(rdram, ctx);
        goto after_1;
    // 0x8022A73C: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022A740: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022A744: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A748: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022A74C: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022A750: sh          $v0, 0x360($s0)
    MEM_H(0X360, ctx->r16) = ctx->r2;
    // 0x8022A754: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022A758: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022A75C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022A760: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
    // 0x8022A764: sh          $zero, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = 0;
    // 0x8022A768: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    // 0x8022A76C: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x8022A770: sh          $zero, 0x362($s0)
    MEM_H(0X362, ctx->r16) = 0;
    // 0x8022A774: sh          $zero, 0x364($s0)
    MEM_H(0X364, ctx->r16) = 0;
    // 0x8022A778: sb          $zero, 0x74($s0)
    MEM_B(0X74, ctx->r16) = 0;
    // 0x8022A77C: sw          $zero, 0x348($s0)
    MEM_W(0X348, ctx->r16) = 0;
    // 0x8022A780: sw          $zero, 0x34C($s0)
    MEM_W(0X34C, ctx->r16) = 0;
    // 0x8022A784: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x8022A788: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x8022A78C: sw          $zero, 0x350($s0)
    MEM_W(0X350, ctx->r16) = 0;
    // 0x8022A790: sw          $v0, 0x354($s0)
    MEM_W(0X354, ctx->r16) = ctx->r2;
    // 0x8022A794: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022A798: jal         0x800A3450
    // 0x8022A79C: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x8022A79C: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    after_2:
    // 0x8022A7A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A7A4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8022A7A8: jal         0x80050294
    // 0x8022A7AC: andi        $a2, $v0, 0x3
    ctx->r6 = ctx->r2 & 0X3;
    func_80050294_2B694(rdram, ctx);
        goto after_3;
    // 0x8022A7AC: andi        $a2, $v0, 0x3
    ctx->r6 = ctx->r2 & 0X3;
    after_3:
    // 0x8022A7B0: lhu         $v1, 0x16($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X16);
    // 0x8022A7B4: lbu         $a2, 0x8($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X8);
    // 0x8022A7B8: addiu       $a0, $zero, 0x109
    ctx->r4 = ADD32(0, 0X109);
    // 0x8022A7BC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022A7C0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022A7C4: sb          $v0, 0x107($s0)
    MEM_B(0X107, ctx->r16) = ctx->r2;
    // 0x8022A7C8: addiu       $v0, $zero, -0x10
    ctx->r2 = ADD32(0, -0X10);
    // 0x8022A7CC: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x8022A7D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A7D4: sb          $zero, 0xFF($s0)
    MEM_B(0XFF, ctx->r16) = 0;
    // 0x8022A7D8: sb          $zero, 0x103($s0)
    MEM_B(0X103, ctx->r16) = 0;
    // 0x8022A7DC: sb          $v0, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r2;
    // 0x8022A7E0: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x8022A7E4: addiu       $v1, $v1, -0x50
    ctx->r3 = ADD32(ctx->r3, -0X50);
    // 0x8022A7E8: sh          $v1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r3;
    // 0x8022A7EC: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022A7F0: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x8022A7F4: jal         0x8002A33C
    // 0x8022A7F8: sb          $a2, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r6;
    func_8002A33C_573C(rdram, ctx);
        goto after_4;
    // 0x8022A7F8: sb          $a2, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r6;
    after_4:
    // 0x8022A7FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022A800: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A804: jr          $ra
    // 0x8022A808: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022A808: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
