#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8022D030_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D030: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022D034: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022D038: lbu         $v0, 0x34B($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X34B);
    // 0x8022D03C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022D040: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022D044: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022D048: lw          $v0, -0x20E0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X20E0);
    // 0x8022D04C: jalr        $v0
    // 0x8022D050: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022D050: nop

    after_0:
    // 0x8022D054: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022D058: jr          $ra
    // 0x8022D05C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022D05C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023AD74_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023AD74: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x8023AD78: sw          $fp, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r30;
    // 0x8023AD7C: addu        $fp, $a0, $zero
    ctx->r30 = ADD32(ctx->r4, 0);
    // 0x8023AD80: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x8023AD84: sw          $s7, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r23;
    // 0x8023AD88: sw          $s6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r22;
    // 0x8023AD8C: sw          $s5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r21;
    // 0x8023AD90: sw          $s4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r20;
    // 0x8023AD94: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
    // 0x8023AD98: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x8023AD9C: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x8023ADA0: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x8023ADA4: lbu         $s4, 0xA($fp)
    ctx->r20 = MEM_BU(ctx->r30, 0XA);
    // 0x8023ADA8: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8023ADAC: addiu       $a1, $zero, 0x2D0
    ctx->r5 = ADD32(0, 0X2D0);
    // 0x8023ADB0: addiu       $a2, $zero, 0x100
    ctx->r6 = ADD32(0, 0X100);
    // 0x8023ADB4: addiu       $v0, $zero, 0x2D0
    ctx->r2 = ADD32(0, 0X2D0);
    // 0x8023ADB8: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x8023ADBC: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8023ADC0: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    // 0x8023ADC4: addiu       $v0, $s4, 0x140
    ctx->r2 = ADD32(ctx->r20, 0X140);
    // 0x8023ADC8: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x8023ADCC: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8023ADD0: subu        $v0, $v0, $s4
    ctx->r2 = SUB32(ctx->r2, ctx->r20);
    // 0x8023ADD4: addu        $s0, $s4, $zero
    ctx->r16 = ADD32(ctx->r20, 0);
    // 0x8023ADD8: jal         0x8002FDF4
    // 0x8023ADDC: sh          $v0, 0x16($sp)
    MEM_H(0X16, ctx->r29) = ctx->r2;
    func_8002FDF4_B1F4(rdram, ctx);
        goto after_0;
    // 0x8023ADDC: sh          $v0, 0x16($sp)
    MEM_H(0X16, ctx->r29) = ctx->r2;
    after_0:
    // 0x8023ADE0: beq         $s4, $zero, L_8023AE0C
    if (ctx->r20 == 0) {
        // 0x8023ADE4: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_8023AE0C;
    }
    // 0x8023ADE4: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8023ADE8: addiu       $a1, $zero, 0x2D0
    ctx->r5 = ADD32(0, 0X2D0);
    // 0x8023ADEC: addiu       $a2, $zero, 0x140
    ctx->r6 = ADD32(0, 0X140);
    // 0x8023ADF0: subu        $a2, $a2, $s4
    ctx->r6 = SUB32(ctx->r6, ctx->r20);
    // 0x8023ADF4: addiu       $v0, $zero, 0x140
    ctx->r2 = ADD32(0, 0X140);
    // 0x8023ADF8: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x8023ADFC: jal         0x8002FDF4
    // 0x8023AE00: sh          $s0, 0x16($sp)
    MEM_H(0X16, ctx->r29) = ctx->r16;
    func_8002FDF4_B1F4(rdram, ctx);
        goto after_1;
    // 0x8023AE00: sh          $s0, 0x16($sp)
    MEM_H(0X16, ctx->r29) = ctx->r16;
    after_1:
    // 0x8023AE04: j           L_8023AE14
    // 0x8023AE08: nop

        goto L_8023AE14;
    // 0x8023AE08: nop

L_8023AE0C:
    // 0x8023AE0C: j           L_8023AE1C
    // 0x8023AE10: addiu       $v0, $zero, 0x3E
    ctx->r2 = ADD32(0, 0X3E);
        goto L_8023AE1C;
    // 0x8023AE10: addiu       $v0, $zero, 0x3E
    ctx->r2 = ADD32(0, 0X3E);
L_8023AE14:
    // 0x8023AE14: lbu         $v0, 0xA($fp)
    ctx->r2 = MEM_BU(ctx->r30, 0XA);
    // 0x8023AE18: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
L_8023AE1C:
    // 0x8023AE1C: sb          $v0, 0xA($fp)
    MEM_B(0XA, ctx->r30) = ctx->r2;
    // 0x8023AE20: lbu         $s4, 0xB($fp)
    ctx->r20 = MEM_BU(ctx->r30, 0XB);
    // 0x8023AE24: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8023AE28: addiu       $a1, $zero, 0x2C8
    ctx->r5 = ADD32(0, 0X2C8);
    // 0x8023AE2C: addiu       $a2, $zero, 0x100
    ctx->r6 = ADD32(0, 0X100);
    // 0x8023AE30: addiu       $v0, $zero, 0x2C8
    ctx->r2 = ADD32(0, 0X2C8);
    // 0x8023AE34: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x8023AE38: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8023AE3C: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    // 0x8023AE40: addiu       $v0, $s4, 0x120
    ctx->r2 = ADD32(ctx->r20, 0X120);
    // 0x8023AE44: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x8023AE48: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8023AE4C: subu        $v0, $v0, $s4
    ctx->r2 = SUB32(ctx->r2, ctx->r20);
    // 0x8023AE50: addu        $s0, $s4, $zero
    ctx->r16 = ADD32(ctx->r20, 0);
    // 0x8023AE54: jal         0x8002FDF4
    // 0x8023AE58: sh          $v0, 0x16($sp)
    MEM_H(0X16, ctx->r29) = ctx->r2;
    func_8002FDF4_B1F4(rdram, ctx);
        goto after_2;
    // 0x8023AE58: sh          $v0, 0x16($sp)
    MEM_H(0X16, ctx->r29) = ctx->r2;
    after_2:
    // 0x8023AE5C: beq         $s4, $zero, L_8023AE88
    if (ctx->r20 == 0) {
        // 0x8023AE60: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_8023AE88;
    }
    // 0x8023AE60: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8023AE64: addiu       $a1, $zero, 0x2C8
    ctx->r5 = ADD32(0, 0X2C8);
    // 0x8023AE68: addiu       $a2, $zero, 0x120
    ctx->r6 = ADD32(0, 0X120);
    // 0x8023AE6C: subu        $a2, $a2, $s4
    ctx->r6 = SUB32(ctx->r6, ctx->r20);
    // 0x8023AE70: addiu       $v0, $zero, 0x120
    ctx->r2 = ADD32(0, 0X120);
    // 0x8023AE74: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x8023AE78: jal         0x8002FDF4
    // 0x8023AE7C: sh          $s0, 0x16($sp)
    MEM_H(0X16, ctx->r29) = ctx->r16;
    func_8002FDF4_B1F4(rdram, ctx);
        goto after_3;
    // 0x8023AE7C: sh          $s0, 0x16($sp)
    MEM_H(0X16, ctx->r29) = ctx->r16;
    after_3:
    // 0x8023AE80: j           L_8023AE90
    // 0x8023AE84: nop

        goto L_8023AE90;
    // 0x8023AE84: nop

L_8023AE88:
    // 0x8023AE88: j           L_8023AE98
    // 0x8023AE8C: addiu       $v0, $zero, 0x1F
    ctx->r2 = ADD32(0, 0X1F);
        goto L_8023AE98;
    // 0x8023AE8C: addiu       $v0, $zero, 0x1F
    ctx->r2 = ADD32(0, 0X1F);
L_8023AE90:
    // 0x8023AE90: lbu         $v0, 0xB($fp)
    ctx->r2 = MEM_BU(ctx->r30, 0XB);
    // 0x8023AE94: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
L_8023AE98:
    // 0x8023AE98: sb          $v0, 0xB($fp)
    MEM_B(0XB, ctx->r30) = ctx->r2;
    // 0x8023AE9C: lbu         $v0, 0xC($fp)
    ctx->r2 = MEM_BU(ctx->r30, 0XC);
    // 0x8023AEA0: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x8023AEA4: lw          $v1, -0x15DC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X15DC);
    // 0x8023AEA8: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    // 0x8023AEAC: addiu       $t0, $zero, 0x20
    ctx->r8 = ADD32(0, 0X20);
    // 0x8023AEB0: sb          $a3, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r7;
    // 0x8023AEB4: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8023AEB8: sra         $s4, $v0, 24
    ctx->r20 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8023AEBC: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x8023AEC0: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x8023AEC4: addiu       $v1, $s4, -0x21
    ctx->r3 = ADD32(ctx->r20, -0X21);
    // 0x8023AEC8: sltiu       $v1, $v1, 0x1F
    ctx->r3 = ctx->r3 < 0X1F ? 1 : 0;
    // 0x8023AECC: srl         $v0, $v0, 31
    ctx->r2 = S32(U32(ctx->r2) >> 31);
    // 0x8023AED0: addu        $v0, $s4, $v0
    ctx->r2 = ADD32(ctx->r20, ctx->r2);
    // 0x8023AED4: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x8023AED8: sll         $s6, $v0, 3
    ctx->r22 = S32(ctx->r2 << 3);
    // 0x8023AEDC: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x8023AEE0: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x8023AEE4: subu        $v0, $t0, $v0
    ctx->r2 = SUB32(ctx->r8, ctx->r2);
    // 0x8023AEE8: sll         $s7, $v0, 3
    ctx->r23 = S32(ctx->r2 << 3);
    // 0x8023AEEC: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x8023AEF0: addiu       $v0, $a3, -0x10
    ctx->r2 = ADD32(ctx->r7, -0X10);
    // 0x8023AEF4: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8023AEF8: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
L_8023AEFC:
    // 0x8023AEFC: lbu         $v0, 0x27($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X27);
    // 0x8023AF00: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8023AF04: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x8023AF08: lw          $v1, -0x15DC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X15DC);
    // 0x8023AF0C: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8023AF10: addu        $a0, $v0, $t0
    ctx->r4 = ADD32(ctx->r2, ctx->r8);
    // 0x8023AF14: addu        $a2, $v0, $t0
    ctx->r6 = ADD32(ctx->r2, ctx->r8);
    // 0x8023AF18: lw          $a0, 0x14($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14);
    // 0x8023AF1C: addu        $a1, $v0, $t0
    ctx->r5 = ADD32(ctx->r2, ctx->r8);
    // 0x8023AF20: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x8023AF24: lw          $a1, 0x114($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X114);
    // 0x8023AF28: lw          $v0, 0x194($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X194);
    // 0x8023AF2C: addu        $s1, $v1, $a0
    ctx->r17 = ADD32(ctx->r3, ctx->r4);
    // 0x8023AF30: lw          $a0, 0x94($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X94);
    // 0x8023AF34: addu        $s2, $v1, $a1
    ctx->r18 = ADD32(ctx->r3, ctx->r5);
    // 0x8023AF38: addu        $s3, $v1, $v0
    ctx->r19 = ADD32(ctx->r3, ctx->r2);
    // 0x8023AF3C: bne         $s4, $zero, L_8023AF64
    if (ctx->r20 != 0) {
        // 0x8023AF40: addu        $s5, $v1, $a0
        ctx->r21 = ADD32(ctx->r3, ctx->r4);
            goto L_8023AF64;
    }
    // 0x8023AF40: addu        $s5, $v1, $a0
    ctx->r21 = ADD32(ctx->r3, ctx->r4);
    // 0x8023AF44: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023AF48: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8023AF4C: jal         0x8009A3B4
    // 0x8023AF50: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8023AF50: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    after_4:
    // 0x8023AF54: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x8023AF58: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x8023AF5C: j           L_8023B030
    // 0x8023AF60: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
        goto L_8023B030;
    // 0x8023AF60: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
L_8023AF64:
    // 0x8023AF64: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    // 0x8023AF68: bne         $s4, $a3, L_8023AF8C
    if (ctx->r20 != ctx->r7) {
        // 0x8023AF6C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8023AF8C;
    }
    // 0x8023AF6C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023AF70: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x8023AF74: jal         0x8009A3B4
    // 0x8023AF78: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x8023AF78: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    after_5:
    // 0x8023AF7C: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x8023AF80: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8023AF84: j           L_8023B030
    // 0x8023AF88: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
        goto L_8023B030;
    // 0x8023AF88: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
L_8023AF8C:
    // 0x8023AF8C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8023AF90: beq         $t0, $zero, L_8023AFD8
    if (ctx->r8 == 0) {
        // 0x8023AF94: addu        $a1, $s6, $s3
        ctx->r5 = ADD32(ctx->r22, ctx->r19);
            goto L_8023AFD8;
    }
    // 0x8023AF94: addu        $a1, $s6, $s3
    ctx->r5 = ADD32(ctx->r22, ctx->r19);
    // 0x8023AF98: addiu       $a1, $a1, -0x80
    ctx->r5 = ADD32(ctx->r5, -0X80);
    // 0x8023AF9C: jal         0x8009A3B4
    // 0x8023AFA0: addu        $a2, $s7, $zero
    ctx->r6 = ADD32(ctx->r23, 0);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x8023AFA0: addu        $a2, $s7, $zero
    ctx->r6 = ADD32(ctx->r23, 0);
    after_6:
    // 0x8023AFA4: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x8023AFA8: addu        $a0, $s7, $s1
    ctx->r4 = ADD32(ctx->r23, ctx->r17);
    // 0x8023AFAC: jal         0x8009A3B4
    // 0x8023AFB0: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x8023AFB0: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_7:
    // 0x8023AFB4: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x8023AFB8: addu        $a1, $s6, $s2
    ctx->r5 = ADD32(ctx->r22, ctx->r18);
    // 0x8023AFBC: addiu       $a1, $a1, -0x80
    ctx->r5 = ADD32(ctx->r5, -0X80);
    // 0x8023AFC0: jal         0x8009A3B4
    // 0x8023AFC4: addu        $a2, $s7, $zero
    ctx->r6 = ADD32(ctx->r23, 0);
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x8023AFC4: addu        $a2, $s7, $zero
    ctx->r6 = ADD32(ctx->r23, 0);
    after_8:
    // 0x8023AFC8: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x8023AFCC: addu        $a0, $s7, $s5
    ctx->r4 = ADD32(ctx->r23, ctx->r21);
    // 0x8023AFD0: j           L_8023B030
    // 0x8023AFD4: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
        goto L_8023B030;
    // 0x8023AFD4: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
L_8023AFD8:
    // 0x8023AFD8: addiu       $v0, $s4, -0x1
    ctx->r2 = ADD32(ctx->r20, -0X1);
    // 0x8023AFDC: sltiu       $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 < 0X1F ? 1 : 0;
    // 0x8023AFE0: beq         $v0, $zero, L_8023B038
    if (ctx->r2 == 0) {
        // 0x8023AFE4: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8023B038;
    }
    // 0x8023AFE4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023AFE8: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x8023AFEC: addu        $a1, $s6, $s2
    ctx->r5 = ADD32(ctx->r22, ctx->r18);
    // 0x8023AFF0: addiu       $s0, $zero, 0x10
    ctx->r16 = ADD32(0, 0X10);
    // 0x8023AFF4: subu        $s0, $s0, $a3
    ctx->r16 = SUB32(ctx->r16, ctx->r7);
    // 0x8023AFF8: sll         $s0, $s0, 3
    ctx->r16 = S32(ctx->r16 << 3);
    // 0x8023AFFC: jal         0x8009A3B4
    // 0x8023B000: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    memcpy_recomp(rdram, ctx);
        goto after_9;
    // 0x8023B000: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_9:
    // 0x8023B004: addu        $a0, $s0, $s1
    ctx->r4 = ADD32(ctx->r16, ctx->r17);
    // 0x8023B008: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x8023B00C: jal         0x8009A3B4
    // 0x8023B010: addu        $a2, $s6, $zero
    ctx->r6 = ADD32(ctx->r22, 0);
    memcpy_recomp(rdram, ctx);
        goto after_10;
    // 0x8023B010: addu        $a2, $s6, $zero
    ctx->r6 = ADD32(ctx->r22, 0);
    after_10:
    // 0x8023B014: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x8023B018: addu        $a1, $s6, $s3
    ctx->r5 = ADD32(ctx->r22, ctx->r19);
    // 0x8023B01C: jal         0x8009A3B4
    // 0x8023B020: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    memcpy_recomp(rdram, ctx);
        goto after_11;
    // 0x8023B020: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_11:
    // 0x8023B024: addu        $a0, $s0, $s5
    ctx->r4 = ADD32(ctx->r16, ctx->r21);
    // 0x8023B028: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8023B02C: addu        $a2, $s6, $zero
    ctx->r6 = ADD32(ctx->r22, 0);
L_8023B030:
    // 0x8023B030: jal         0x8009A3B4
    // 0x8023B034: nop

    memcpy_recomp(rdram, ctx);
        goto after_12;
    // 0x8023B034: nop

    after_12:
L_8023B038:
    // 0x8023B038: lbu         $t0, 0x27($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X27);
    // 0x8023B03C: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x8023B040: sb          $t0, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r8;
    // 0x8023B044: lbu         $v0, 0x27($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X27);
    // 0x8023B048: sltiu       $v0, $v0, 0x8
    ctx->r2 = ctx->r2 < 0X8 ? 1 : 0;
    // 0x8023B04C: bne         $v0, $zero, L_8023AEFC
    if (ctx->r2 != 0) {
        // 0x8023B050: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_8023AEFC;
    }
    // 0x8023B050: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8023B054: addiu       $a1, $zero, 0x370
    ctx->r5 = ADD32(0, 0X370);
    // 0x8023B058: addiu       $a2, $zero, 0x100
    ctx->r6 = ADD32(0, 0X100);
    // 0x8023B05C: addiu       $v0, $zero, 0x370
    ctx->r2 = ADD32(0, 0X370);
    // 0x8023B060: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x8023B064: addiu       $v0, $s4, 0x140
    ctx->r2 = ADD32(ctx->r20, 0X140);
    // 0x8023B068: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x8023B06C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8023B070: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    // 0x8023B074: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8023B078: subu        $v0, $v0, $s4
    ctx->r2 = SUB32(ctx->r2, ctx->r20);
    // 0x8023B07C: addu        $s0, $s4, $zero
    ctx->r16 = ADD32(ctx->r20, 0);
    // 0x8023B080: jal         0x8002FDF4
    // 0x8023B084: sh          $v0, 0x16($sp)
    MEM_H(0X16, ctx->r29) = ctx->r2;
    func_8002FDF4_B1F4(rdram, ctx);
        goto after_13;
    // 0x8023B084: sh          $v0, 0x16($sp)
    MEM_H(0X16, ctx->r29) = ctx->r2;
    after_13:
    // 0x8023B088: beq         $s4, $zero, L_8023B0B4
    if (ctx->r20 == 0) {
        // 0x8023B08C: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_8023B0B4;
    }
    // 0x8023B08C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8023B090: addiu       $a1, $zero, 0x370
    ctx->r5 = ADD32(0, 0X370);
    // 0x8023B094: addiu       $a2, $zero, 0x140
    ctx->r6 = ADD32(0, 0X140);
    // 0x8023B098: subu        $a2, $a2, $s4
    ctx->r6 = SUB32(ctx->r6, ctx->r20);
    // 0x8023B09C: addiu       $v0, $zero, 0x140
    ctx->r2 = ADD32(0, 0X140);
    // 0x8023B0A0: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x8023B0A4: jal         0x8002FDF4
    // 0x8023B0A8: sh          $s0, 0x16($sp)
    MEM_H(0X16, ctx->r29) = ctx->r16;
    func_8002FDF4_B1F4(rdram, ctx);
        goto after_14;
    // 0x8023B0A8: sh          $s0, 0x16($sp)
    MEM_H(0X16, ctx->r29) = ctx->r16;
    after_14:
    // 0x8023B0AC: j           L_8023B0BC
    // 0x8023B0B0: nop

        goto L_8023B0BC;
    // 0x8023B0B0: nop

L_8023B0B4:
    // 0x8023B0B4: j           L_8023B0C4
    // 0x8023B0B8: addiu       $v0, $zero, 0x3E
    ctx->r2 = ADD32(0, 0X3E);
        goto L_8023B0C4;
    // 0x8023B0B8: addiu       $v0, $zero, 0x3E
    ctx->r2 = ADD32(0, 0X3E);
L_8023B0BC:
    // 0x8023B0BC: lbu         $v0, 0xC($fp)
    ctx->r2 = MEM_BU(ctx->r30, 0XC);
    // 0x8023B0C0: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
L_8023B0C4:
    // 0x8023B0C4: sb          $v0, 0xC($fp)
    MEM_B(0XC, ctx->r30) = ctx->r2;
    // 0x8023B0C8: lb          $s4, 0xD($fp)
    ctx->r20 = MEM_B(ctx->r30, 0XD);
    // 0x8023B0CC: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8023B0D0: addiu       $a1, $zero, 0x368
    ctx->r5 = ADD32(0, 0X368);
    // 0x8023B0D4: addiu       $a2, $zero, 0x140
    ctx->r6 = ADD32(0, 0X140);
    // 0x8023B0D8: addiu       $v0, $zero, 0x368
    ctx->r2 = ADD32(0, 0X368);
    // 0x8023B0DC: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x8023B0E0: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8023B0E4: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    // 0x8023B0E8: addiu       $v0, $s4, 0x160
    ctx->r2 = ADD32(ctx->r20, 0X160);
    // 0x8023B0EC: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x8023B0F0: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8023B0F4: subu        $v0, $v0, $s4
    ctx->r2 = SUB32(ctx->r2, ctx->r20);
    // 0x8023B0F8: addu        $s0, $s4, $zero
    ctx->r16 = ADD32(ctx->r20, 0);
    // 0x8023B0FC: jal         0x8002FDF4
    // 0x8023B100: sh          $v0, 0x16($sp)
    MEM_H(0X16, ctx->r29) = ctx->r2;
    func_8002FDF4_B1F4(rdram, ctx);
        goto after_15;
    // 0x8023B100: sh          $v0, 0x16($sp)
    MEM_H(0X16, ctx->r29) = ctx->r2;
    after_15:
    // 0x8023B104: beq         $s4, $zero, L_8023B130
    if (ctx->r20 == 0) {
        // 0x8023B108: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_8023B130;
    }
    // 0x8023B108: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8023B10C: addiu       $a1, $zero, 0x368
    ctx->r5 = ADD32(0, 0X368);
    // 0x8023B110: addiu       $a2, $zero, 0x160
    ctx->r6 = ADD32(0, 0X160);
    // 0x8023B114: subu        $a2, $a2, $s4
    ctx->r6 = SUB32(ctx->r6, ctx->r20);
    // 0x8023B118: addiu       $v0, $zero, 0x160
    ctx->r2 = ADD32(0, 0X160);
    // 0x8023B11C: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x8023B120: jal         0x8002FDF4
    // 0x8023B124: sh          $s0, 0x16($sp)
    MEM_H(0X16, ctx->r29) = ctx->r16;
    func_8002FDF4_B1F4(rdram, ctx);
        goto after_16;
    // 0x8023B124: sh          $s0, 0x16($sp)
    MEM_H(0X16, ctx->r29) = ctx->r16;
    after_16:
    // 0x8023B128: j           L_8023B138
    // 0x8023B12C: nop

        goto L_8023B138;
    // 0x8023B12C: nop

L_8023B130:
    // 0x8023B130: j           L_8023B140
    // 0x8023B134: addiu       $v0, $zero, 0x1F
    ctx->r2 = ADD32(0, 0X1F);
        goto L_8023B140;
    // 0x8023B134: addiu       $v0, $zero, 0x1F
    ctx->r2 = ADD32(0, 0X1F);
L_8023B138:
    // 0x8023B138: lbu         $v0, 0xD($fp)
    ctx->r2 = MEM_BU(ctx->r30, 0XD);
    // 0x8023B13C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
L_8023B140:
    // 0x8023B140: sb          $v0, 0xD($fp)
    MEM_B(0XD, ctx->r30) = ctx->r2;
    // 0x8023B144: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x8023B148: lw          $fp, 0x60($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X60);
    // 0x8023B14C: lw          $s7, 0x5C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X5C);
    // 0x8023B150: lw          $s6, 0x58($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X58);
    // 0x8023B154: lw          $s5, 0x54($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X54);
    // 0x8023B158: lw          $s4, 0x50($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X50);
    // 0x8023B15C: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x8023B160: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x8023B164: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x8023B168: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x8023B16C: jr          $ra
    // 0x8023B170: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    TRACE_RETURN()
    return;
    // 0x8023B170: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x8023B174: nop

    // 0x8023B178: nop

    // 0x8023B17C: nop

;}
RECOMP_FUNC void func_80225D60_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225D60: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80225D64: bne         $v0, $zero, L_80225D78
    if (ctx->r2 != 0) {
        // 0x80225D68: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80225D78;
    }
    // 0x80225D68: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80225D6C: lw          $v1, 0x28($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X28);
    // 0x80225D70: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80225D74: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
L_80225D78:
    // 0x80225D78: jr          $ra
    // 0x80225D7C: nop

    TRACE_RETURN()
    return;
    // 0x80225D7C: nop

;}
RECOMP_FUNC void func_80232D10_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232D10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80232D14: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80232D18: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80232D1C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80232D20: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80232D24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80232D28: jal         0x8009A3B4
    // 0x80232D2C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80232D2C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x80232D30: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80232D34: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80232D38: jal         0x8009A3B4
    // 0x80232D3C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80232D3C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80232D40: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80232D44: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80232D48: jal         0x8009A3B4
    // 0x80232D4C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80232D4C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80232D50: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80232D54: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80232D58: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80232D5C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80232D60: lw          $v0, -0x1DD8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X1DD8);
    // 0x80232D64: jalr        $v0
    // 0x80232D68: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x80232D68: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80232D6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80232D70: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80232D74: jr          $ra
    // 0x80232D78: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80232D78: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022BB34_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BB34: lb          $v0, 0xA7($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XA7);
    // 0x8022BB38: bltzl       $v0, L_8022BB40
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022BB3C: sb          $zero, 0xA($a0)
        MEM_B(0XA, ctx->r4) = 0;
            goto L_8022BB40;
    }
    goto skip_0;
    // 0x8022BB3C: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    skip_0:
L_8022BB40:
    // 0x8022BB40: jr          $ra
    // 0x8022BB44: nop

    TRACE_RETURN()
    return;
    // 0x8022BB44: nop

;}
RECOMP_FUNC void func_802320A0_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802320A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802320A4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802320A8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802320AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802320B0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802320B4: bne         $v0, $zero, L_802320D0
    if (ctx->r2 != 0) {
        // 0x802320B8: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_802320D0;
    }
    // 0x802320B8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802320BC: jal         0x80050294
    // 0x802320C0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x802320C0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x802320C4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802320C8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802320CC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802320D0:
    // 0x802320D0: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x802320D4: lbu         $v1, -0x3A48($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3A48);
    // 0x802320D8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802320DC: bne         $v1, $v0, L_8023210C
    if (ctx->r3 != ctx->r2) {
        // 0x802320E0: addiu       $v0, $zero, 0x64
        ctx->r2 = ADD32(0, 0X64);
            goto L_8023210C;
    }
    // 0x802320E0: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x802320E4: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x802320E8: lw          $v1, -0x3A40($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A40);
    // 0x802320EC: bne         $v1, $v0, L_80232104
    if (ctx->r3 != ctx->r2) {
        // 0x802320F0: addiu       $v0, $zero, 0x17C
        ctx->r2 = ADD32(0, 0X17C);
            goto L_80232104;
    }
    // 0x802320F0: addiu       $v0, $zero, 0x17C
    ctx->r2 = ADD32(0, 0X17C);
    // 0x802320F4: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x802320F8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802320FC: j           L_8023210C
    // 0x80232100: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
        goto L_8023210C;
    // 0x80232100: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
L_80232104:
    // 0x80232104: beql        $v1, $v0, L_8023210C
    if (ctx->r3 == ctx->r2) {
        // 0x80232108: sb          $zero, 0xD($s0)
        MEM_B(0XD, ctx->r16) = 0;
            goto L_8023210C;
    }
    goto skip_0;
    // 0x80232108: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    skip_0:
L_8023210C:
    // 0x8023210C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80232110: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80232114: jr          $ra
    // 0x80232118: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80232118: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023115C_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023115C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80231160: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80231164: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80231168: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8023116C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80231170: lbu         $v1, 0xAC($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XAC);
    // 0x80231174: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80231178: bne         $v1, $v0, L_8023118C
    if (ctx->r3 != ctx->r2) {
        // 0x8023117C: addu        $s0, $a1, $zero
        ctx->r16 = ADD32(ctx->r5, 0);
            goto L_8023118C;
    }
    // 0x8023117C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x80231180: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x80231184: andi        $v0, $v0, 0xFFDF
    ctx->r2 = ctx->r2 & 0XFFDF;
    // 0x80231188: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
L_8023118C:
    // 0x8023118C: lhu         $v1, 0x14($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X14);
    // 0x80231190: andi        $v0, $v1, 0x20
    ctx->r2 = ctx->r3 & 0X20;
    // 0x80231194: beq         $v0, $zero, L_802311F8
    if (ctx->r2 == 0) {
        // 0x80231198: andi        $v0, $v1, 0x40
        ctx->r2 = ctx->r3 & 0X40;
            goto L_802311F8;
    }
    // 0x80231198: andi        $v0, $v1, 0x40
    ctx->r2 = ctx->r3 & 0X40;
    // 0x8023119C: beq         $v0, $zero, L_802311CC
    if (ctx->r2 == 0) {
        // 0x802311A0: nop
    
            goto L_802311CC;
    }
    // 0x802311A0: nop

    // 0x802311A4: lhu         $v0, 0x1A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X1A);
    // 0x802311A8: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x802311AC: bne         $v0, $zero, L_802311BC
    if (ctx->r2 != 0) {
        // 0x802311B0: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_802311BC;
    }
    // 0x802311B0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802311B4: jal         0x80231288
    // 0x802311B8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80231288_ovl3(rdram, ctx);
        goto after_0;
    // 0x802311B8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
L_802311BC:
    // 0x802311BC: lhu         $v0, 0x1A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X1A);
    // 0x802311C0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802311C4: j           L_8023121C
    // 0x802311C8: sh          $v0, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r2;
        goto L_8023121C;
    // 0x802311C8: sh          $v0, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r2;
L_802311CC:
    // 0x802311CC: lh          $v0, 0x54($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X54);
    // 0x802311D0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802311D4: slti        $v0, $v0, 0x200
    ctx->r2 = SIGNED(ctx->r2) < 0X200 ? 1 : 0;
    // 0x802311D8: bne         $v0, $zero, L_80231218
    if (ctx->r2 != 0) {
        // 0x802311DC: addiu       $v0, $v1, 0x20
        ctx->r2 = ADD32(ctx->r3, 0X20);
            goto L_80231218;
    }
    // 0x802311DC: addiu       $v0, $v1, 0x20
    ctx->r2 = ADD32(ctx->r3, 0X20);
    // 0x802311E0: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x802311E4: sh          $v0, 0x54($s1)
    MEM_H(0X54, ctx->r17) = ctx->r2;
    // 0x802311E8: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x802311EC: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    // 0x802311F0: j           L_8023121C
    // 0x802311F4: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
        goto L_8023121C;
    // 0x802311F4: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
L_802311F8:
    // 0x802311F8: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x802311FC: sh          $zero, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = 0;
    // 0x80231200: andi        $v0, $v0, 0xFFBF
    ctx->r2 = ctx->r2 & 0XFFBF;
    // 0x80231204: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x80231208: lh          $v0, 0x54($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X54);
    // 0x8023120C: blez        $v0, L_8023121C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80231210: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8023121C;
    }
    // 0x80231210: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80231214: addiu       $v0, $v1, -0x20
    ctx->r2 = ADD32(ctx->r3, -0X20);
L_80231218:
    // 0x80231218: sh          $v0, 0x54($s1)
    MEM_H(0X54, ctx->r17) = ctx->r2;
L_8023121C:
    // 0x8023121C: lw          $v1, 0x80($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X80);
    // 0x80231220: lui         $v0, 0x8
    ctx->r2 = S32(0X8 << 16);
    // 0x80231224: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x80231228: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8023122C: bne         $v0, $zero, L_8023125C
    if (ctx->r2 != 0) {
        // 0x80231230: lui         $v0, 0x24
        ctx->r2 = S32(0X24 << 16);
            goto L_8023125C;
    }
    // 0x80231230: lui         $v0, 0x24
    ctx->r2 = S32(0X24 << 16);
    // 0x80231234: lhu         $v1, 0x14($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X14);
    // 0x80231238: andi        $v0, $v1, 0x200
    ctx->r2 = ctx->r3 & 0X200;
    // 0x8023123C: bne         $v0, $zero, L_80231254
    if (ctx->r2 != 0) {
        // 0x80231240: ori         $v0, $v1, 0x200
        ctx->r2 = ctx->r3 | 0X200;
            goto L_80231254;
    }
    // 0x80231240: ori         $v0, $v1, 0x200
    ctx->r2 = ctx->r3 | 0X200;
    // 0x80231244: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x80231248: addiu       $a0, $zero, 0x150
    ctx->r4 = ADD32(0, 0X150);
    // 0x8023124C: jal         0x8002A33C
    // 0x80231250: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x80231250: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_1:
L_80231254:
    // 0x80231254: lw          $v1, 0x80($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X80);
    // 0x80231258: lui         $v0, 0x24
    ctx->r2 = S32(0X24 << 16);
L_8023125C:
    // 0x8023125C: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x80231260: beq         $v0, $zero, L_80231274
    if (ctx->r2 == 0) {
        // 0x80231264: nop
    
            goto L_80231274;
    }
    // 0x80231264: nop

    // 0x80231268: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x8023126C: andi        $v0, $v0, 0xFDFF
    ctx->r2 = ctx->r2 & 0XFDFF;
    // 0x80231270: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
L_80231274:
    // 0x80231274: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x80231278: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8023127C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80231280: jr          $ra
    // 0x80231284: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80231284: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80233F60_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233F60: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80233F64: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80233F68: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80233F6C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80233F70: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80233F74: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80233F78: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80233F7C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80233F80: lw          $v0, -0x1CA0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X1CA0);
    // 0x80233F84: jalr        $v0
    // 0x80233F88: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80233F88: nop

    after_0:
    // 0x80233F8C: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80233F90: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80233F94: bne         $v0, $zero, L_80233FA8
    if (ctx->r2 != 0) {
        // 0x80233F98: nop
    
            goto L_80233FA8;
    }
    // 0x80233F98: nop

    // 0x80233F9C: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x80233FA0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80233FA4: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
L_80233FA8:
    // 0x80233FA8: lb          $v1, 0xF($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XF);
    // 0x80233FAC: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80233FB0: beql        $v1, $v0, L_80233FB8
    if (ctx->r3 == ctx->r2) {
        // 0x80233FB4: sb          $zero, 0xF($s0)
        MEM_B(0XF, ctx->r16) = 0;
            goto L_80233FB8;
    }
    goto skip_0;
    // 0x80233FB4: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
    skip_0:
L_80233FB8:
    // 0x80233FB8: lhu         $v0, 0x90($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X90);
    // 0x80233FBC: sh          $v0, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r2;
    // 0x80233FC0: lhu         $v0, 0x92($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X92);
    // 0x80233FC4: sh          $v0, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r2;
    // 0x80233FC8: lhu         $v0, 0x94($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X94);
    // 0x80233FCC: sh          $v0, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r2;
    // 0x80233FD0: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80233FD4: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80233FD8: bne         $v0, $zero, L_80234040
    if (ctx->r2 != 0) {
        // 0x80233FDC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80234040;
    }
    // 0x80233FDC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80233FE0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80233FE4: beq         $v0, $zero, L_80234000
    if (ctx->r2 == 0) {
        // 0x80233FE8: addiu       $a1, $zero, 0x20
        ctx->r5 = ADD32(0, 0X20);
            goto L_80234000;
    }
    // 0x80233FE8: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x80233FEC: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x80233FF0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80233FF4: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x80233FF8: j           L_80234010
    // 0x80233FFC: addiu       $a3, $zero, 0x4000
    ctx->r7 = ADD32(0, 0X4000);
        goto L_80234010;
    // 0x80233FFC: addiu       $a3, $zero, 0x4000
    ctx->r7 = ADD32(0, 0X4000);
L_80234000:
    // 0x80234000: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x80234004: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80234008: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x8023400C: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
L_80234010:
    // 0x80234010: addiu       $v0, $s0, 0x9C
    ctx->r2 = ADD32(ctx->r16, 0X9C);
    // 0x80234014: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80234018: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x8023401C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80234020: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80234024: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80234028: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8023402C: jal         0x80051E18
    // 0x80234030: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_1;
    // 0x80234030: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_1:
    // 0x80234034: jal         0x800472C0
    // 0x80234038: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800472C0_226C0(rdram, ctx);
        goto after_2;
    // 0x80234038: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8023403C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80234040:
    // 0x80234040: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    // 0x80234044: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x80234048: jal         0x8003B564
    // 0x8023404C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_3;
    // 0x8023404C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_3:
    // 0x80234050: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80234054: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80234058: jr          $ra
    // 0x8023405C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8023405C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8023AC84_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023AC84: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023AC88: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023AC8C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023AC90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023AC94: lbu         $v1, 0xB($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XB);
    // 0x8023AC98: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023AC9C: beq         $v1, $v0, L_8023ACE0
    if (ctx->r3 == ctx->r2) {
        // 0x8023ACA0: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8023ACE0;
    }
    // 0x8023ACA0: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8023ACA4: beq         $v0, $zero, L_8023AD08
    if (ctx->r2 == 0) {
        // 0x8023ACA8: nop
    
            goto L_8023AD08;
    }
    // 0x8023ACA8: nop

    // 0x8023ACAC: bne         $v1, $zero, L_8023AD08
    if (ctx->r3 != 0) {
        // 0x8023ACB0: nop
    
            goto L_8023AD08;
    }
    // 0x8023ACB0: nop

    // 0x8023ACB4: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x8023ACB8: sltiu       $v0, $v1, 0x3C
    ctx->r2 = ctx->r3 < 0X3C ? 1 : 0;
    // 0x8023ACBC: beq         $v0, $zero, L_8023ACCC
    if (ctx->r2 == 0) {
        // 0x8023ACC0: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_8023ACCC;
    }
    // 0x8023ACC0: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8023ACC4: j           L_8023AD08
    // 0x8023ACC8: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
        goto L_8023AD08;
    // 0x8023ACC8: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
L_8023ACCC:
    // 0x8023ACCC: jal         0x80036B58
    // 0x8023ACD0: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    func_80036B58_11F58(rdram, ctx);
        goto after_0;
    // 0x8023ACD0: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_0:
    // 0x8023ACD4: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8023ACD8: j           L_8023AD00
    // 0x8023ACDC: sw          $zero, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = 0;
        goto L_8023AD00;
    // 0x8023ACDC: sw          $zero, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = 0;
L_8023ACE0:
    // 0x8023ACE0: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8023ACE4: lbu         $v0, -0x7388($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7388);
    // 0x8023ACE8: bne         $v0, $zero, L_8023AD08
    if (ctx->r2 != 0) {
        // 0x8023ACEC: addiu       $a0, $zero, 0x2A
        ctx->r4 = ADD32(0, 0X2A);
            goto L_8023AD08;
    }
    // 0x8023ACEC: addiu       $a0, $zero, 0x2A
    ctx->r4 = ADD32(0, 0X2A);
    // 0x8023ACF0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8023ACF4: jal         0x8002A2F8
    // 0x8023ACF8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_1;
    // 0x8023ACF8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x8023ACFC: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
L_8023AD00:
    // 0x8023AD00: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023AD04: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
L_8023AD08:
    // 0x8023AD08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023AD0C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023AD10: jr          $ra
    // 0x8023AD14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023AD14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8023AD18: nop

    // 0x8023AD1C: nop

;}
RECOMP_FUNC void func_80239258_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80239258: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023925C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80239260: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80239264: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80239268: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8023926C: lb          $v1, 0xC($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XC);
    // 0x80239270: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80239274: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x80239278: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8023927C: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80239280: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80239284: beq         $v1, $zero, L_802392A4
    if (ctx->r3 == 0) {
        // 0x80239288: nop
    
            goto L_802392A4;
    }
    // 0x80239288: nop

    // 0x8023928C: jal         0x80239674
    // 0x80239290: nop

    func_80239674_ovl3(rdram, ctx);
        goto after_0;
    // 0x80239290: nop

    after_0:
    // 0x80239294: beq         $v0, $zero, L_802392A4
    if (ctx->r2 == 0) {
        // 0x80239298: nop
    
            goto L_802392A4;
    }
    // 0x80239298: nop

    // 0x8023929C: jal         0x8004F62C
    // 0x802392A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F62C_2AA2C(rdram, ctx);
        goto after_1;
    // 0x802392A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_802392A4:
    // 0x802392A4: jal         0x802392BC
    // 0x802392A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802392BC_ovl3(rdram, ctx);
        goto after_2;
    // 0x802392A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x802392AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802392B0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802392B4: jr          $ra
    // 0x802392B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802392B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022D344_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D344: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022D348: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D34C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022D350: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8022D354: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022D358: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022D35C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022D360: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022D364: lbu         $v1, 0xAC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022D368: addiu       $a1, $zero, 0xFA
    ctx->r5 = ADD32(0, 0XFA);
    // 0x8022D36C: addiu       $a2, $zero, 0xC8
    ctx->r6 = ADD32(0, 0XC8);
    // 0x8022D370: sh          $v0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r2;
    // 0x8022D374: jal         0x8022DCA4
    // 0x8022D378: sb          $v1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r3;
    func_8022DCA4_ovl3(rdram, ctx);
        goto after_0;
    // 0x8022D378: sb          $v1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r3;
    after_0:
    // 0x8022D37C: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x8022D380: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x8022D384: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022D388: beq         $v0, $zero, L_8022D41C
    if (ctx->r2 == 0) {
        // 0x8022D38C: addiu       $s3, $s0, 0x348
        ctx->r19 = ADD32(ctx->r16, 0X348);
            goto L_8022D41C;
    }
    // 0x8022D38C: addiu       $s3, $s0, 0x348
    ctx->r19 = ADD32(ctx->r16, 0X348);
    // 0x8022D390: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022D394: jal         0x8022DC08
    // 0x8022D398: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    func_8022DC08_ovl3(rdram, ctx);
        goto after_1;
    // 0x8022D398: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    after_1:
    // 0x8022D39C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022D3A0: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022D3A4: addiu       $s2, $s2, 0x14
    ctx->r18 = ADD32(ctx->r18, 0X14);
    // 0x8022D3A8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022D3AC: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x8022D3B0: jal         0x8004F820
    // 0x8022D3B4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x8022D3B4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_2:
    // 0x8022D3B8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D3BC: bgez        $v0, L_8022D3E8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022D3C0: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8022D3E8;
    }
    // 0x8022D3C0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022D3C4: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022D3C8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022D3CC: jal         0x8004F820
    // 0x8022D3D0: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x8022D3D0: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_3:
    // 0x8022D3D4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D3D8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022D3DC: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8022D3E0: j           L_8022D400
    // 0x8022D3E4: srl         $v1, $v0, 3
    ctx->r3 = S32(U32(ctx->r2) >> 3);
        goto L_8022D400;
    // 0x8022D3E4: srl         $v1, $v0, 3
    ctx->r3 = S32(U32(ctx->r2) >> 3);
L_8022D3E8:
    // 0x8022D3E8: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022D3EC: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022D3F0: jal         0x8004F820
    // 0x8022D3F4: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_4;
    // 0x8022D3F4: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_4:
    // 0x8022D3F8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D3FC: sra         $v1, $v0, 19
    ctx->r3 = S32(SIGNED(ctx->r2) >> 19);
L_8022D400:
    // 0x8022D400: lbu         $v0, 0x3($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X3);
    // 0x8022D404: sh          $v1, 0x6($s3)
    MEM_H(0X6, ctx->r19) = ctx->r3;
    // 0x8022D408: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022D40C: sb          $v0, 0x3($s3)
    MEM_B(0X3, ctx->r19) = ctx->r2;
    // 0x8022D410: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x8022D414: j           L_8022D464
    // 0x8022D418: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
        goto L_8022D464;
    // 0x8022D418: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
L_8022D41C:
    // 0x8022D41C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022D420: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022D424: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    // 0x8022D428: jal         0x8004F820
    // 0x8022D42C: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_8004F820_2AC20(rdram, ctx);
        goto after_5;
    // 0x8022D42C: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_5:
    // 0x8022D430: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D434: slt         $v0, $zero, $v0
    ctx->r2 = SIGNED(0) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8022D438: beq         $v0, $zero, L_8022D448
    if (ctx->r2 == 0) {
        // 0x8022D43C: sh          $v0, 0x34E($s0)
        MEM_H(0X34E, ctx->r16) = ctx->r2;
            goto L_8022D448;
    }
    // 0x8022D43C: sh          $v0, 0x34E($s0)
    MEM_H(0X34E, ctx->r16) = ctx->r2;
    // 0x8022D440: j           L_8022D44C
    // 0x8022D444: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_8022D44C;
    // 0x8022D444: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_8022D448:
    // 0x8022D448: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_8022D44C:
    // 0x8022D44C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022D450: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022D454: sb          $v0, 0x3($s3)
    MEM_B(0X3, ctx->r19) = ctx->r2;
    // 0x8022D458: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x8022D45C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022D460: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
L_8022D464:
    // 0x8022D464: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022D468: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022D46C: jal         0x800610AC
    // 0x8022D470: andi        $a3, $v0, 0xFF
    ctx->r7 = ctx->r2 & 0XFF;
    func_800610AC_3C4AC(rdram, ctx);
        goto after_6;
    // 0x8022D470: andi        $a3, $v0, 0xFF
    ctx->r7 = ctx->r2 & 0XFF;
    after_6:
    // 0x8022D474: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022D478: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022D47C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022D480: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022D484: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D488: jr          $ra
    // 0x8022D48C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022D48C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_802383E0_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802383E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802383E4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802383E8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802383EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802383F0: jal         0x80053ED8
    // 0x802383F4: lbu         $a0, 0xC($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XC);
    func_80053ED8_2F2D8(rdram, ctx);
        goto after_0;
    // 0x802383F4: lbu         $a0, 0xC($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XC);
    after_0:
    // 0x802383F8: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x802383FC: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x80238400: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80238404: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x80238408: bne         $v1, $v0, L_8023841C
    if (ctx->r3 != ctx->r2) {
        // 0x8023840C: nop
    
            goto L_8023841C;
    }
    // 0x8023840C: nop

    // 0x80238410: lb          $v0, 0xC($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XC);
    // 0x80238414: beq         $v0, $zero, L_80238438
    if (ctx->r2 == 0) {
        // 0x80238418: nop
    
            goto L_80238438;
    }
    // 0x80238418: nop

L_8023841C:
    // 0x8023841C: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80238420: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80238424: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80238428: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023842C: lw          $v0, -0x1578($at)
    ctx->r2 = MEM_W(ctx->r1, -0X1578);
    // 0x80238430: jalr        $v0
    // 0x80238434: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x80238434: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_80238438:
    // 0x80238438: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023843C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80238440: jr          $ra
    // 0x80238444: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80238444: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80239020_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80239020: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80239024: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80239028: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023902C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80239030: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80239034: lui         $v1, 0x2E80
    ctx->r3 = S32(0X2E80 << 16);
    // 0x80239038: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x8023903C: sw          $v1, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r3;
    // 0x80239040: lb          $v1, 0xC($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XC);
    // 0x80239044: lui         $a0, 0x3DC8
    ctx->r4 = S32(0X3DC8 << 16);
    // 0x80239048: ori         $a0, $a0, 0xA
    ctx->r4 = ctx->r4 | 0XA;
    // 0x8023904C: sw          $a0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r4;
    // 0x80239050: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80239054: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80239058: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8023905C: lbu         $v0, -0x1540($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X1540);
    // 0x80239060: sb          $v0, 0x22($s0)
    MEM_B(0X22, ctx->r16) = ctx->r2;
    // 0x80239064: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80239068: lbu         $v0, -0x153F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X153F);
    // 0x8023906C: sb          $v0, 0x23($s0)
    MEM_B(0X23, ctx->r16) = ctx->r2;
    // 0x80239070: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80239074: lbu         $v0, -0x152C($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X152C);
    // 0x80239078: sh          $v0, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r2;
    // 0x8023907C: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80239080: lbu         $a0, -0x1534($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X1534);
    // 0x80239084: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80239088: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8023908C: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80239090: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80239094: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80239098: beq         $v1, $zero, L_802390AC
    if (ctx->r3 == 0) {
        // 0x8023909C: sb          $a0, 0xB($s0)
        MEM_B(0XB, ctx->r16) = ctx->r4;
            goto L_802390AC;
    }
    // 0x8023909C: sb          $a0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r4;
    // 0x802390A0: addiu       $a0, $zero, 0x9B
    ctx->r4 = ADD32(0, 0X9B);
    // 0x802390A4: jal         0x8002A33C
    // 0x802390A8: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x802390A8: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    after_0:
L_802390AC:
    // 0x802390AC: lhu         $v0, 0x1E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X1E);
    // 0x802390B0: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x802390B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802390B8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802390BC: jr          $ra
    // 0x802390C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802390C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80238AC0_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80238AC0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80238AC4: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80238AC8: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x80238ACC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80238AD0: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x80238AD4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80238AD8: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x80238ADC: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80238AE0: sll         $s3, $s0, 16
    ctx->r19 = S32(ctx->r16 << 16);
    // 0x80238AE4: sra         $s3, $s3, 16
    ctx->r19 = S32(SIGNED(ctx->r19) >> 16);
    // 0x80238AE8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80238AEC: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80238AF0: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x80238AF4: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x80238AF8: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80238AFC: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80238B00: jal         0x800324B4
    // 0x80238B04: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    func_800324B4_D8B4(rdram, ctx);
        goto after_0;
    // 0x80238B04: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    after_0:
    // 0x80238B08: sll         $v1, $v0, 4
    ctx->r3 = S32(ctx->r2 << 4);
    // 0x80238B0C: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80238B10: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x80238B14: sll         $s1, $s1, 24
    ctx->r17 = S32(ctx->r17 << 24);
    // 0x80238B18: sra         $s1, $s1, 24
    ctx->r17 = S32(SIGNED(ctx->r17) >> 24);
    // 0x80238B1C: mult        $v1, $s1
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80238B20: mflo        $v1
    ctx->r3 = lo;
    // 0x80238B24: lhu         $v0, 0x1C($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X1C);
    // 0x80238B28: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80238B2C: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x80238B30: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80238B34: jal         0x80032498
    // 0x80238B38: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    func_80032498_D898(rdram, ctx);
        goto after_1;
    // 0x80238B38: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    after_1:
    // 0x80238B3C: sll         $v1, $v0, 4
    ctx->r3 = S32(ctx->r2 << 4);
    // 0x80238B40: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80238B44: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x80238B48: mult        $v1, $s1
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80238B4C: mflo        $v1
    ctx->r3 = lo;
    // 0x80238B50: lui         $s6, 0x2EF0
    ctx->r22 = S32(0X2EF0 << 16);
    // 0x80238B54: ori         $s6, $s6, 0xA0A0
    ctx->r22 = ctx->r22 | 0XA0A0;
    // 0x80238B58: lui         $s7, 0x3D48
    ctx->r23 = S32(0X3D48 << 16);
    // 0x80238B5C: ori         $s7, $s7, 0x4080
    ctx->r23 = ctx->r23 | 0X4080;
    // 0x80238B60: lui         $fp, 0xE
    ctx->r30 = S32(0XE << 16);
    // 0x80238B64: lhu         $v0, 0x20($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X20);
    // 0x80238B68: ori         $fp, $fp, 0x409F
    ctx->r30 = ctx->r30 | 0X409F;
    // 0x80238B6C: addiu       $s0, $s0, 0x400
    ctx->r16 = ADD32(ctx->r16, 0X400);
    // 0x80238B70: andi        $s0, $s0, 0xFFF
    ctx->r16 = ctx->r16 & 0XFFF;
    // 0x80238B74: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x80238B78: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80238B7C: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    // 0x80238B80: lhu         $v0, 0x1E($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X1E);
    // 0x80238B84: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80238B88: sll         $s5, $s1, 2
    ctx->r21 = S32(ctx->r17 << 2);
    // 0x80238B8C: addu        $v0, $v0, $s5
    ctx->r2 = ADD32(ctx->r2, ctx->r21);
    // 0x80238B90: jal         0x800324B4
    // 0x80238B94: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    func_800324B4_D8B4(rdram, ctx);
        goto after_2;
    // 0x80238B94: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    after_2:
    // 0x80238B98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80238B9C: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x80238BA0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80238BA4: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80238BA8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80238BAC: lhu         $v0, 0x10($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X10);
    // 0x80238BB0: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80238BB4: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x80238BB8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80238BBC: jal         0x80032498
    // 0x80238BC0: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    func_80032498_D898(rdram, ctx);
        goto after_3;
    // 0x80238BC0: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    after_3:
    // 0x80238BC4: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x80238BC8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80238BCC: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80238BD0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80238BD4: lhu         $v0, 0x14($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X14);
    // 0x80238BD8: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80238BDC: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x80238BE0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80238BE4: jal         0x8003B878
    // 0x80238BE8: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    func_8003B878_16C78(rdram, ctx);
        goto after_4;
    // 0x80238BE8: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    after_4:
    // 0x80238BEC: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x80238BF0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80238BF4: addiu       $a3, $zero, 0x5F80
    ctx->r7 = ADD32(0, 0X5F80);
    // 0x80238BF8: sw          $a3, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->r7;
    // 0x80238BFC: addiu       $a3, $zero, 0x5F9F
    ctx->r7 = ADD32(0, 0X5F9F);
    // 0x80238C00: sw          $s6, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r22;
    // 0x80238C04: sw          $s7, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r23;
    // 0x80238C08: sw          $fp, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->r30;
    // 0x80238C0C: sw          $a3, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->r7;
    // 0x80238C10: lw          $v0, 0x10($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X10);
    // 0x80238C14: lw          $v1, 0x14($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X14);
    // 0x80238C18: addiu       $s2, $zero, 0x80
    ctx->r18 = ADD32(0, 0X80);
    // 0x80238C1C: subu        $s2, $s2, $s5
    ctx->r18 = SUB32(ctx->r18, ctx->r21);
    // 0x80238C20: sw          $s2, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r18;
    // 0x80238C24: sw          $zero, 0x20($a1)
    MEM_W(0X20, ctx->r5) = 0;
    // 0x80238C28: sw          $v0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r2;
    // 0x80238C2C: jal         0x800324B4
    // 0x80238C30: sw          $v1, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r3;
    func_800324B4_D8B4(rdram, ctx);
        goto after_5;
    // 0x80238C30: sw          $v1, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r3;
    after_5:
    // 0x80238C34: sll         $v1, $v0, 4
    ctx->r3 = S32(ctx->r2 << 4);
    // 0x80238C38: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80238C3C: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x80238C40: mult        $v1, $s1
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80238C44: mflo        $v1
    ctx->r3 = lo;
    // 0x80238C48: lhu         $v0, 0x1C($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X1C);
    // 0x80238C4C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80238C50: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x80238C54: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80238C58: jal         0x80032498
    // 0x80238C5C: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    func_80032498_D898(rdram, ctx);
        goto after_6;
    // 0x80238C5C: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    after_6:
    // 0x80238C60: sll         $v1, $v0, 4
    ctx->r3 = S32(ctx->r2 << 4);
    // 0x80238C64: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80238C68: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x80238C6C: mult        $v1, $s1
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80238C70: mflo        $v1
    ctx->r3 = lo;
    // 0x80238C74: lhu         $v0, 0x20($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X20);
    // 0x80238C78: addiu       $s0, $s0, -0x800
    ctx->r16 = ADD32(ctx->r16, -0X800);
    // 0x80238C7C: andi        $s0, $s0, 0xFFF
    ctx->r16 = ctx->r16 & 0XFFF;
    // 0x80238C80: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80238C84: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x80238C88: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80238C8C: jal         0x800324B4
    // 0x80238C90: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    func_800324B4_D8B4(rdram, ctx);
        goto after_7;
    // 0x80238C90: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    after_7:
    // 0x80238C94: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80238C98: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x80238C9C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80238CA0: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80238CA4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80238CA8: lhu         $v0, 0x10($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X10);
    // 0x80238CAC: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80238CB0: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x80238CB4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80238CB8: jal         0x80032498
    // 0x80238CBC: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    func_80032498_D898(rdram, ctx);
        goto after_8;
    // 0x80238CBC: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    after_8:
    // 0x80238CC0: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x80238CC4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80238CC8: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80238CCC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80238CD0: lhu         $v0, 0x14($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X14);
    // 0x80238CD4: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80238CD8: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x80238CDC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80238CE0: jal         0x8003B878
    // 0x80238CE4: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    func_8003B878_16C78(rdram, ctx);
        goto after_9;
    // 0x80238CE4: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    after_9:
    // 0x80238CE8: lw          $v1, 0x10($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X10);
    // 0x80238CEC: lw          $a0, 0x14($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X14);
    // 0x80238CF0: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x80238CF4: addiu       $a3, $zero, 0x5F80
    ctx->r7 = ADD32(0, 0X5F80);
    // 0x80238CF8: sw          $a3, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->r7;
    // 0x80238CFC: addiu       $a3, $zero, 0x5F9F
    ctx->r7 = ADD32(0, 0X5F9F);
    // 0x80238D00: sw          $s6, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r22;
    // 0x80238D04: sw          $s7, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r23;
    // 0x80238D08: sw          $fp, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->r30;
    // 0x80238D0C: sw          $a3, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->r7;
    // 0x80238D10: sw          $s2, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r18;
    // 0x80238D14: sw          $zero, 0x20($a1)
    MEM_W(0X20, ctx->r5) = 0;
    // 0x80238D18: sw          $v1, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r3;
    // 0x80238D1C: sw          $a0, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r4;
    // 0x80238D20: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80238D24: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x80238D28: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x80238D2C: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80238D30: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80238D34: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80238D38: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80238D3C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80238D40: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80238D44: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80238D48: jr          $ra
    // 0x80238D4C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x80238D4C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80233354_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233354: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80233358: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8023335C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80233360: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80233364: lw          $v0, 0xD0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD0);
    // 0x80233368: lhu         $v1, 0x14($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X14);
    // 0x8023336C: lhu         $a0, 0x16($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X16);
    // 0x80233370: lhu         $a1, 0x18($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X18);
    // 0x80233374: lbu         $a2, 0xB($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0XB);
    // 0x80233378: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023337C: sw          $v0, 0xD0($s0)
    MEM_W(0XD0, ctx->r16) = ctx->r2;
    // 0x80233380: sh          $v1, 0x90($s0)
    MEM_H(0X90, ctx->r16) = ctx->r3;
    // 0x80233384: sh          $a0, 0x92($s0)
    MEM_H(0X92, ctx->r16) = ctx->r4;
    // 0x80233388: bne         $a2, $zero, L_802333D4
    if (ctx->r6 != 0) {
        // 0x8023338C: sh          $a1, 0x94($s0)
        MEM_H(0X94, ctx->r16) = ctx->r5;
            goto L_802333D4;
    }
    // 0x8023338C: sh          $a1, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r5;
    // 0x80233390: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80233394: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80233398: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8023339C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802333A0: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x802333A4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802333A8: jal         0x802337F4
    // 0x802333AC: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
    func_802337F4_ovl3(rdram, ctx);
        goto after_0;
    // 0x802333AC: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
    after_0:
    // 0x802333B0: addiu       $a0, $s0, 0xA4
    ctx->r4 = ADD32(ctx->r16, 0XA4);
    // 0x802333B4: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x802333B8: jal         0x8009A3B4
    // 0x802333BC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x802333BC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x802333C0: addiu       $a0, $zero, 0xF1
    ctx->r4 = ADD32(0, 0XF1);
    // 0x802333C4: jal         0x8002A33C
    // 0x802333C8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x802333C8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_2:
    // 0x802333CC: j           L_802333DC
    // 0x802333D0: nop

        goto L_802333DC;
    // 0x802333D0: nop

L_802333D4:
    // 0x802333D4: jal         0x802339A4
    // 0x802333D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802339A4_ovl3(rdram, ctx);
        goto after_3;
    // 0x802333D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
L_802333DC:
    // 0x802333DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802333E0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802333E4: jr          $ra
    // 0x802333E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802333E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80228E74_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228E74: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80228E78: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228E7C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228E80: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80228E84: addiu       $s2, $s0, 0x380
    ctx->r18 = ADD32(ctx->r16, 0X380);
    // 0x80228E88: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80228E8C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80228E90: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80228E94: lbu         $v1, 0x6($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X6);
    // 0x80228E98: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80228E9C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80228EA0: ori         $v1, $v1, 0x20
    ctx->r3 = ctx->r3 | 0X20;
    // 0x80228EA4: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80228EA8: jal         0x8004D5D4
    // 0x80228EAC: sb          $v1, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r3;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80228EAC: sb          $v1, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r3;
    after_0:
    // 0x80228EB0: addiu       $a0, $zero, 0x4210
    ctx->r4 = ADD32(0, 0X4210);
    // 0x80228EB4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x80228EB8: addiu       $v1, $s0, 0x40
    ctx->r3 = ADD32(ctx->r16, 0X40);
    // 0x80228EBC: addiu       $v0, $zero, 0x280
    ctx->r2 = ADD32(0, 0X280);
    // 0x80228EC0: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80228EC4: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80228EC8: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80228ECC: sh          $zero, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = 0;
L_80228ED0:
    // 0x80228ED0: sh          $a0, 0x186($v1)
    MEM_H(0X186, ctx->r3) = ctx->r4;
    // 0x80228ED4: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x80228ED8: bgez        $a1, L_80228ED0
    if (SIGNED(ctx->r5) >= 0) {
        // 0x80228EDC: addiu       $v1, $v1, -0x8
        ctx->r3 = ADD32(ctx->r3, -0X8);
            goto L_80228ED0;
    }
    // 0x80228EDC: addiu       $v1, $v1, -0x8
    ctx->r3 = ADD32(ctx->r3, -0X8);
    // 0x80228EE0: addiu       $a0, $s2, 0x38
    ctx->r4 = ADD32(ctx->r18, 0X38);
    // 0x80228EE4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80228EE8: addiu       $a2, $zero, -0x60
    ctx->r6 = ADD32(0, -0X60);
    // 0x80228EEC: addiu       $v0, $zero, 0x467C
    ctx->r2 = ADD32(0, 0X467C);
    // 0x80228EF0: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80228EF4: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80228EF8: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x80228EFC: sw          $zero, 0x44($s0)
    MEM_W(0X44, ctx->r16) = 0;
    // 0x80228F00: sw          $zero, 0x48($s0)
    MEM_W(0X48, ctx->r16) = 0;
    // 0x80228F04: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x80228F08: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
    // 0x80228F0C: sh          $zero, 0xD8($s2)
    MEM_H(0XD8, ctx->r18) = 0;
    // 0x80228F10: sw          $zero, 0x4($s2)
    MEM_W(0X4, ctx->r18) = 0;
    // 0x80228F14: jal         0x800540BC
    // 0x80228F18: sw          $zero, 0x8($s2)
    MEM_W(0X8, ctx->r18) = 0;
    func_800540BC_2F4BC(rdram, ctx);
        goto after_1;
    // 0x80228F18: sw          $zero, 0x8($s2)
    MEM_W(0X8, ctx->r18) = 0;
    after_1:
    // 0x80228F1C: sh          $zero, 0xC($s2)
    MEM_H(0XC, ctx->r18) = 0;
    // 0x80228F20: jal         0x80053ED8
    // 0x80228F24: lbu         $a0, 0xC($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XC);
    func_80053ED8_2F2D8(rdram, ctx);
        goto after_2;
    // 0x80228F24: lbu         $a0, 0xC($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XC);
    after_2:
    // 0x80228F28: sb          $zero, 0xE($s2)
    MEM_B(0XE, ctx->r18) = 0;
    // 0x80228F2C: sw          $zero, 0xA4($s2)
    MEM_W(0XA4, ctx->r18) = 0;
    // 0x80228F30: sw          $zero, 0xAC($s2)
    MEM_W(0XAC, ctx->r18) = 0;
    // 0x80228F34: sb          $zero, 0xF($s2)
    MEM_B(0XF, ctx->r18) = 0;
    // 0x80228F38: sw          $zero, 0xB4($s2)
    MEM_W(0XB4, ctx->r18) = 0;
    // 0x80228F3C: lui         $a2, 0x8019
    ctx->r6 = S32(0X8019 << 16);
    // 0x80228F40: lw          $a2, 0x3C60($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X3C60);
    // 0x80228F44: sw          $v0, 0x60($s2)
    MEM_W(0X60, ctx->r18) = ctx->r2;
    // 0x80228F48: sw          $zero, 0x64($s2)
    MEM_W(0X64, ctx->r18) = 0;
    // 0x80228F4C: sw          $zero, 0xCC($s2)
    MEM_W(0XCC, ctx->r18) = 0;
    // 0x80228F50: sw          $zero, 0xE4($s2)
    MEM_W(0XE4, ctx->r18) = 0;
    // 0x80228F54: sw          $zero, 0xE8($s2)
    MEM_W(0XE8, ctx->r18) = 0;
    // 0x80228F58: sw          $zero, 0x98($s2)
    MEM_W(0X98, ctx->r18) = 0;
    // 0x80228F5C: sw          $zero, 0x9C($s2)
    MEM_W(0X9C, ctx->r18) = 0;
    // 0x80228F60: lhu         $v1, 0xB0($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XB0);
    // 0x80228F64: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80228F68: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80228F6C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80228F70: addiu       $v0, $v0, -0x2960
    ctx->r2 = ADD32(ctx->r2, -0X2960);
    // 0x80228F74: sh          $zero, 0xDC($s2)
    MEM_H(0XDC, ctx->r18) = 0;
    // 0x80228F78: sw          $v0, 0xE0($s2)
    MEM_W(0XE0, ctx->r18) = ctx->r2;
    // 0x80228F7C: sh          $v1, 0xA2($s2)
    MEM_H(0XA2, ctx->r18) = ctx->r3;
    // 0x80228F80: sh          $v1, 0xA0($s2)
    MEM_H(0XA0, ctx->r18) = ctx->r3;
L_80228F84:
    // 0x80228F84: sw          $zero, 0x18($a0)
    MEM_W(0X18, ctx->r4) = 0;
    // 0x80228F88: sw          $zero, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = 0;
    // 0x80228F8C: sw          $zero, 0x70($a0)
    MEM_W(0X70, ctx->r4) = 0;
    // 0x80228F90: sw          $zero, 0x74($a0)
    MEM_W(0X74, ctx->r4) = 0;
    // 0x80228F94: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x80228F98: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80228F9C: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80228FA0: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80228FA4: lbu         $v0, 0xA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XA);
    // 0x80228FA8: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x80228FAC: sh          $v0, 0x22($a0)
    MEM_H(0X22, ctx->r4) = ctx->r2;
    // 0x80228FB0: sh          $v0, 0x20($a0)
    MEM_H(0X20, ctx->r4) = ctx->r2;
    // 0x80228FB4: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x80228FB8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80228FBC: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80228FC0: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80228FC4: lbu         $v0, 0xB($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XB);
    // 0x80228FC8: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80228FCC: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x80228FD0: sh          $v0, 0x7A($a0)
    MEM_H(0X7A, ctx->r4) = ctx->r2;
    // 0x80228FD4: sh          $v0, 0x78($a0)
    MEM_H(0X78, ctx->r4) = ctx->r2;
    // 0x80228FD8: slti        $v0, $a1, 0x2
    ctx->r2 = SIGNED(ctx->r5) < 0X2 ? 1 : 0;
    // 0x80228FDC: bne         $v0, $zero, L_80228F84
    if (ctx->r2 != 0) {
        // 0x80228FE0: addiu       $a0, $a0, 0x14
        ctx->r4 = ADD32(ctx->r4, 0X14);
            goto L_80228F84;
    }
    // 0x80228FE0: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    // 0x80228FE4: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x80228FE8: lui         $v1, 0x8019
    ctx->r3 = S32(0X8019 << 16);
    // 0x80228FEC: lw          $v1, 0x3C60($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3C60);
    // 0x80228FF0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80228FF4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80228FF8: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80228FFC: lbu         $a0, 0x3($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X3);
    // 0x80229000: lbu         $v1, 0x8($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X8);
    // 0x80229004: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80229008: addiu       $v0, $v0, -0x2908
    ctx->r2 = ADD32(ctx->r2, -0X2908);
    // 0x8022900C: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    // 0x80229010: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x80229014: sll         $v1, $v1, 5
    ctx->r3 = S32(ctx->r3 << 5);
    // 0x80229018: sh          $v1, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r3;
    // 0x8022901C: sh          $v1, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r3;
    // 0x80229020: beq         $a0, $zero, L_8022903C
    if (ctx->r4 == 0) {
        // 0x80229024: sh          $v1, 0xB2($s0)
        MEM_H(0XB2, ctx->r16) = ctx->r3;
            goto L_8022903C;
    }
    // 0x80229024: sh          $v1, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r3;
    // 0x80229028: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022902C: beq         $a0, $v0, L_80229070
    if (ctx->r4 == ctx->r2) {
        // 0x80229030: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80229070;
    }
    // 0x80229030: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229034: j           L_802290A0
    // 0x80229038: nop

        goto L_802290A0;
    // 0x80229038: nop

L_8022903C:
    // 0x8022903C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229040: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80229044: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80229048: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022904C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80229050: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229054: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80229058: jal         0x80050294
    // 0x8022905C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    func_80050294_2B694(rdram, ctx);
        goto after_3;
    // 0x8022905C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    after_3:
    // 0x80229060: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80229064: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    // 0x80229068: j           L_802290A0
    // 0x8022906C: sh          $v0, 0xDA($s2)
    MEM_H(0XDA, ctx->r18) = ctx->r2;
        goto L_802290A0;
    // 0x8022906C: sh          $v0, 0xDA($s2)
    MEM_H(0XDA, ctx->r18) = ctx->r2;
L_80229070:
    // 0x80229070: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x80229074: lbu         $a2, 0xA4($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0XA4);
    // 0x80229078: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022907C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80229080: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80229084: jal         0x80050294
    // 0x80229088: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    func_80050294_2B694(rdram, ctx);
        goto after_4;
    // 0x80229088: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    after_4:
    // 0x8022908C: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x80229090: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x80229094: sh          $v1, 0xDA($s2)
    MEM_H(0XDA, ctx->r18) = ctx->r3;
    // 0x80229098: ori         $v0, $v0, 0x2000
    ctx->r2 = ctx->r2 | 0X2000;
    // 0x8022909C: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
L_802290A0:
    // 0x802290A0: jal         0x8004EEAC
    // 0x802290A4: nop

    func_8004EEAC_2A2AC(rdram, ctx);
        goto after_5;
    // 0x802290A4: nop

    after_5:
    // 0x802290A8: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x802290AC: beq         $s1, $zero, L_80229108
    if (ctx->r17 == 0) {
        // 0x802290B0: addiu       $a0, $s1, 0x14
        ctx->r4 = ADD32(ctx->r17, 0X14);
            goto L_80229108;
    }
    // 0x802290B0: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x802290B4: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x802290B8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x802290BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802290C0: sw          $s1, 0xD0($s2)
    MEM_W(0XD0, ctx->r18) = ctx->r17;
    // 0x802290C4: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x802290C8: addiu       $v0, $zero, 0x31
    ctx->r2 = ADD32(0, 0X31);
    // 0x802290CC: sb          $v0, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r2;
    // 0x802290D0: sb          $zero, 0x4($s1)
    MEM_B(0X4, ctx->r17) = 0;
    // 0x802290D4: jal         0x8009A3B4
    // 0x802290D8: sb          $zero, 0x3($s1)
    MEM_B(0X3, ctx->r17) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x802290D8: sb          $zero, 0x3($s1)
    MEM_B(0X3, ctx->r17) = 0;
    after_6:
    // 0x802290DC: addiu       $a0, $s1, 0x1C
    ctx->r4 = ADD32(ctx->r17, 0X1C);
    // 0x802290E0: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x802290E4: jal         0x8009A3B4
    // 0x802290E8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x802290E8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_7:
    // 0x802290EC: addiu       $a0, $s1, 0x54
    ctx->r4 = ADD32(ctx->r17, 0X54);
    // 0x802290F0: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x802290F4: jal         0x8009A3B4
    // 0x802290F8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x802290F8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_8:
    // 0x802290FC: lbu         $v0, 0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1);
    // 0x80229100: j           L_80229110
    // 0x80229104: sb          $v0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r2;
        goto L_80229110;
    // 0x80229104: sb          $v0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r2;
L_80229108:
    // 0x80229108: jal         0x8004F488
    // 0x8022910C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F488_2A888(rdram, ctx);
        goto after_9;
    // 0x8022910C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
L_80229110:
    // 0x80229110: jal         0x80229130
    // 0x80229114: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80229130_ovl3(rdram, ctx);
        goto after_10;
    // 0x80229114: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_10:
    // 0x80229118: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022911C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80229120: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80229124: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229128: jr          $ra
    // 0x8022912C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022912C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023A814_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023A814: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023A818: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023A81C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8023A820: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023A824: jal         0x8004EFE4
    // 0x8023A828: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_0;
    // 0x8023A828: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x8023A82C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8023A830: beq         $s0, $zero, L_8023A90C
    if (ctx->r16 == 0) {
        // 0x8023A834: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_8023A90C;
    }
    // 0x8023A834: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8023A838: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    // 0x8023A83C: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    // 0x8023A840: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x8023A844: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x8023A848: bne         $v0, $zero, L_8023A86C
    if (ctx->r2 != 0) {
        // 0x8023A84C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8023A86C;
    }
    // 0x8023A84C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023A850: addiu       $v0, $zero, 0x3200
    ctx->r2 = ADD32(0, 0X3200);
    // 0x8023A854: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x8023A858: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x8023A85C: sb          $v1, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r3;
    // 0x8023A860: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x8023A864: j           L_8023A894
    // 0x8023A868: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
        goto L_8023A894;
    // 0x8023A868: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_8023A86C:
    // 0x8023A86C: lbu         $v1, 0x6($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X6);
    // 0x8023A870: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x8023A874: addiu       $v0, $zero, 0xA00
    ctx->r2 = ADD32(0, 0XA00);
    // 0x8023A878: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x8023A87C: addiu       $v0, $zero, -0x2000
    ctx->r2 = ADD32(0, -0X2000);
    // 0x8023A880: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x8023A884: addiu       $v0, $zero, 0x600
    ctx->r2 = ADD32(0, 0X600);
    // 0x8023A888: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8023A88C: ori         $v1, $v1, 0x20
    ctx->r3 = ctx->r3 | 0X20;
    // 0x8023A890: sb          $v1, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r3;
L_8023A894:
    // 0x8023A894: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8023A898: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8023A89C: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8023A8A0: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x8023A8A4: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x8023A8A8: lh          $a3, 0x18($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X18);
    // 0x8023A8AC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8023A8B0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8023A8B4: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x8023A8B8: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x8023A8BC: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x8023A8C0: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x8023A8C4: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x8023A8C8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023A8CC: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8023A8D0: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x8023A8D4: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x8023A8D8: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x8023A8DC: jal         0x8009A3B4
    // 0x8023A8E0: sw          $a3, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r7;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8023A8E0: sw          $a3, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r7;
    after_1:
    // 0x8023A8E4: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8023A8E8: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8023A8EC: jal         0x8009A3B4
    // 0x8023A8F0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8023A8F0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_2:
    // 0x8023A8F4: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8023A8F8: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8023A8FC: jal         0x8009A3B4
    // 0x8023A900: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8023A900: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x8023A904: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023A908: sw          $s0, 0x1700($at)
    MEM_W(0X1700, ctx->r1) = ctx->r16;
L_8023A90C:
    // 0x8023A90C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8023A910: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023A914: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023A918: jr          $ra
    // 0x8023A91C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023A91C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80234C10_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234C10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80234C14: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80234C18: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80234C1C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80234C20: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80234C24: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80234C28: lw          $v0, -0x1C80($at)
    ctx->r2 = MEM_W(ctx->r1, -0X1C80);
    // 0x80234C2C: jalr        $v0
    // 0x80234C30: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80234C30: nop

    after_0:
    // 0x80234C34: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80234C38: jr          $ra
    // 0x80234C3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80234C3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225CB0_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225CB0: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80225CB4: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80225CB8: bne         $v1, $v0, L_80225CC8
    if (ctx->r3 != ctx->r2) {
        // 0x80225CBC: nop
    
            goto L_80225CC8;
    }
    // 0x80225CBC: nop

    // 0x80225CC0: lw          $v0, 0x28($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X28);
    // 0x80225CC4: sb          $zero, 0xD($v0)
    MEM_B(0XD, ctx->r2) = 0;
L_80225CC8:
    // 0x80225CC8: jr          $ra
    // 0x80225CCC: nop

    TRACE_RETURN()
    return;
    // 0x80225CCC: nop

;}
RECOMP_FUNC void func_8022BE04_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BE04: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022BE08: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022BE0C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022BE10: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022BE14: lh          $a0, 0x64($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X64);
    // 0x8022BE18: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x8022BE1C: jal         0x8004FA7C
    // 0x8022BE20: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x8022BE20: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_0:
    // 0x8022BE24: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x8022BE28: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x8022BE2C: bne         $v0, $zero, L_8022BE58
    if (ctx->r2 != 0) {
        // 0x8022BE30: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022BE58;
    }
    // 0x8022BE30: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022BE34: lhu         $a0, 0x35C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X35C);
    // 0x8022BE38: lhu         $v1, 0x366($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X366);
    // 0x8022BE3C: lhu         $a1, 0x35E($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X35E);
    // 0x8022BE40: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022BE44: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022BE48: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8022BE4C: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x8022BE50: sh          $v0, 0x35C($s0)
    MEM_H(0X35C, ctx->r16) = ctx->r2;
    // 0x8022BE54: sh          $v1, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = ctx->r3;
L_8022BE58:
    // 0x8022BE58: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022BE5C: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x8022BE60: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022BE64: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8022BE68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022BE6C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022BE70: jr          $ra
    // 0x8022BE74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022BE74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80235EF0_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235EF0: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x80235EF4: lb          $v0, 0xC($a2)
    ctx->r2 = MEM_B(ctx->r6, 0XC);
    // 0x80235EF8: bne         $v0, $zero, L_80235F40
    if (ctx->r2 != 0) {
        // 0x80235EFC: nop
    
            goto L_80235F40;
    }
    // 0x80235EFC: nop

    // 0x80235F00: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x80235F04: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80235F08: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80235F0C: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x80235F10: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80235F14: lh          $a0, -0x2400($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X2400);
    // 0x80235F18: lhu         $v1, 0x2($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X2);
    // 0x80235F1C: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x80235F20: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80235F24: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x80235F28: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80235F2C: sh          $v1, 0x16($a2)
    MEM_H(0X16, ctx->r6) = ctx->r3;
    // 0x80235F30: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x80235F34: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80235F38: j           L_80235F48
    // 0x80235F3C: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
        goto L_80235F48;
    // 0x80235F3C: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
L_80235F40:
    // 0x80235F40: lhu         $v0, 0x2($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X2);
    // 0x80235F44: sh          $v0, 0x16($a2)
    MEM_H(0X16, ctx->r6) = ctx->r2;
L_80235F48:
    // 0x80235F48: lh          $v0, 0x14($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X14);
    // 0x80235F4C: lh          $v1, 0x16($a2)
    ctx->r3 = MEM_H(ctx->r6, 0X16);
    // 0x80235F50: lh          $a0, 0x18($a2)
    ctx->r4 = MEM_H(ctx->r6, 0X18);
    // 0x80235F54: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80235F58: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80235F5C: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80235F60: sw          $v0, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->r2;
    // 0x80235F64: sw          $v1, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->r3;
    // 0x80235F68: jr          $ra
    // 0x80235F6C: sw          $a0, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->r4;
    TRACE_RETURN()
    return;
    // 0x80235F6C: sw          $a0, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->r4;
;}
RECOMP_FUNC void func_8022E508_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E508: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022E50C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022E510: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x8022E514: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022E518: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x8022E51C: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8022E520: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022E524: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022E528: andi        $v0, $s1, 0xFF
    ctx->r2 = ctx->r17 & 0XFF;
L_8022E52C:
    // 0x8022E52C: addu        $v0, $s3, $v0
    ctx->r2 = ADD32(ctx->r19, ctx->r2);
    // 0x8022E530: lbu         $v0, 0x4($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4);
    // 0x8022E534: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
    // 0x8022E538: beq         $v0, $zero, L_8022E568
    if (ctx->r2 == 0) {
        // 0x8022E53C: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_8022E568;
    }
    // 0x8022E53C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x8022E540: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x8022E544: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_8022E548:
    // 0x8022E548: andi        $a1, $s1, 0xFF
    ctx->r5 = ctx->r17 & 0XFF;
    // 0x8022E54C: jal         0x8022E5C0
    // 0x8022E550: andi        $a2, $s0, 0xFF
    ctx->r6 = ctx->r16 & 0XFF;
    func_8022E5C0_ovl3(rdram, ctx);
        goto after_0;
    // 0x8022E550: andi        $a2, $s0, 0xFF
    ctx->r6 = ctx->r16 & 0XFF;
    after_0:
    // 0x8022E554: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8022E558: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
    // 0x8022E55C: sltu        $v0, $v0, $s2
    ctx->r2 = ctx->r2 < ctx->r18 ? 1 : 0;
    // 0x8022E560: bne         $v0, $zero, L_8022E548
    if (ctx->r2 != 0) {
        // 0x8022E564: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_8022E548;
    }
    // 0x8022E564: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_8022E568:
    // 0x8022E568: andi        $v0, $s1, 0xFF
    ctx->r2 = ctx->r17 & 0XFF;
    // 0x8022E56C: addu        $a0, $s3, $v0
    ctx->r4 = ADD32(ctx->r19, ctx->r2);
    // 0x8022E570: lbu         $v1, 0x4($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X4);
    // 0x8022E574: sltiu       $v0, $v1, 0x40
    ctx->r2 = ctx->r3 < 0X40 ? 1 : 0;
    // 0x8022E578: beq         $v0, $zero, L_8022E584
    if (ctx->r2 == 0) {
        // 0x8022E57C: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_8022E584;
    }
    // 0x8022E57C: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8022E580: sb          $v0, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r2;
L_8022E584:
    // 0x8022E584: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8022E588: andi        $v0, $s1, 0xFF
    ctx->r2 = ctx->r17 & 0XFF;
    // 0x8022E58C: sltiu       $v0, $v0, 0x6
    ctx->r2 = ctx->r2 < 0X6 ? 1 : 0;
    // 0x8022E590: bne         $v0, $zero, L_8022E52C
    if (ctx->r2 != 0) {
        // 0x8022E594: andi        $v0, $s1, 0xFF
        ctx->r2 = ctx->r17 & 0XFF;
            goto L_8022E52C;
    }
    // 0x8022E594: andi        $v0, $s1, 0xFF
    ctx->r2 = ctx->r17 & 0XFF;
    // 0x8022E598: lw          $v0, 0xC($s3)
    ctx->r2 = MEM_W(ctx->r19, 0XC);
    // 0x8022E59C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022E5A0: sw          $v0, 0xC($s3)
    MEM_W(0XC, ctx->r19) = ctx->r2;
    // 0x8022E5A4: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022E5A8: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022E5AC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022E5B0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022E5B4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022E5B8: jr          $ra
    // 0x8022E5BC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022E5BC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022FFF8_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FFF8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022FFFC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80230000: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x80230004: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80230008: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023000C: lhu         $v0, 0x26($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X26);
    // 0x80230010: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80230014: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80230018: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8023001C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80230020: lh          $v1, -0x2400($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X2400);
    // 0x80230024: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80230028: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8023002C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80230030: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x80230034: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80230038: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x8023003C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80230040: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
    // 0x80230044: lhu         $v0, 0x26($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X26);
    // 0x80230048: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023004C: sh          $v0, 0x26($s0)
    MEM_H(0X26, ctx->r16) = ctx->r2;
    // 0x80230050: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x80230054: bne         $v0, $zero, L_8023007C
    if (ctx->r2 != 0) {
        // 0x80230058: addiu       $a0, $s0, 0x3C
        ctx->r4 = ADD32(ctx->r16, 0X3C);
            goto L_8023007C;
    }
    // 0x80230058: addiu       $a0, $s0, 0x3C
    ctx->r4 = ADD32(ctx->r16, 0X3C);
    // 0x8023005C: lh          $a2, 0x1A($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X1A);
    // 0x80230060: jal         0x800540EC
    // 0x80230064: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_800540EC_2F4EC(rdram, ctx);
        goto after_0;
    // 0x80230064: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_0:
    // 0x80230068: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023006C: jal         0x802301C8
    // 0x80230070: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_802301C8_ovl3(rdram, ctx);
        goto after_1;
    // 0x80230070: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80230074: j           L_80230090
    // 0x80230078: nop

        goto L_80230090;
    // 0x80230078: nop

L_8023007C:
    // 0x8023007C: jal         0x800540D0
    // 0x80230080: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_800540D0_2F4D0(rdram, ctx);
        goto after_2;
    // 0x80230080: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_2:
    // 0x80230084: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80230088: jal         0x802300A4
    // 0x8023008C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_802300A4_ovl3(rdram, ctx);
        goto after_3;
    // 0x8023008C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_3:
L_80230090:
    // 0x80230090: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80230094: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80230098: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023009C: jr          $ra
    // 0x802300A0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802300A0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023703C_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023703C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80237040: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80237044: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80237048: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023704C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80237050: lb          $v1, 0xF($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XF);
    // 0x80237054: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80237058: bne         $v1, $v0, L_80237140
    if (ctx->r3 != ctx->r2) {
        // 0x8023705C: nop
    
            goto L_80237140;
    }
    // 0x8023705C: nop

    // 0x80237060: lbu         $v0, 0x9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X9);
    // 0x80237064: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x80237068: bne         $v0, $zero, L_80237128
    if (ctx->r2 != 0) {
        // 0x8023706C: nop
    
            goto L_80237128;
    }
    // 0x8023706C: nop

    // 0x80237070: jal         0x8004F144
    // 0x80237074: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80237074: nop

    after_0:
    // 0x80237078: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8023707C: beq         $s0, $zero, L_80237128
    if (ctx->r16 == 0) {
        // 0x80237080: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80237128;
    }
    // 0x80237080: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80237084: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80237088: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x8023708C: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x80237090: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x80237094: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x80237098: lbu         $v1, 0xC($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XC);
    // 0x8023709C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802370A0: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x802370A4: jal         0x800A3450
    // 0x802370A8: sb          $v1, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x802370A8: sb          $v1, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r3;
    after_1:
    // 0x802370AC: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x802370B0: addiu       $v1, $zero, 0x40
    ctx->r3 = ADD32(0, 0X40);
    // 0x802370B4: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x802370B8: sb          $v1, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r3;
    // 0x802370BC: lbu         $v0, 0xF($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XF);
    // 0x802370C0: jal         0x800A3450
    // 0x802370C4: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x802370C4: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
    after_2:
    // 0x802370C8: lhu         $v1, 0x1C($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X1C);
    // 0x802370CC: andi        $v0, $v0, 0x7F
    ctx->r2 = ctx->r2 & 0X7F;
    // 0x802370D0: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x802370D4: jal         0x800A3450
    // 0x802370D8: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x802370D8: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    after_3:
    // 0x802370DC: lui         $a0, 0x3D48
    ctx->r4 = S32(0X3D48 << 16);
    // 0x802370E0: lhu         $v1, 0x20($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X20);
    // 0x802370E4: ori         $a0, $a0, 0x4E
    ctx->r4 = ctx->r4 | 0X4E;
    // 0x802370E8: andi        $v0, $v0, 0x7F
    ctx->r2 = ctx->r2 & 0X7F;
    // 0x802370EC: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x802370F0: sh          $v1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r3;
    // 0x802370F4: lhu         $v1, 0x1E($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X1E);
    // 0x802370F8: lui         $v0, 0x2E40
    ctx->r2 = S32(0X2E40 << 16);
    // 0x802370FC: ori         $v0, $v0, 0x4040
    ctx->r2 = ctx->r2 | 0X4040;
    // 0x80237100: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
    // 0x80237104: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80237108: sw          $a0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r4;
    // 0x8023710C: sb          $v0, 0x22($s0)
    MEM_B(0X22, ctx->r16) = ctx->r2;
    // 0x80237110: sb          $zero, 0x23($s0)
    MEM_B(0X23, ctx->r16) = 0;
    // 0x80237114: jal         0x800A3450
    // 0x80237118: sh          $v1, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_4;
    // 0x80237118: sh          $v1, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r3;
    after_4:
    // 0x8023711C: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80237120: addiu       $v0, $v0, 0xDC
    ctx->r2 = ADD32(ctx->r2, 0XDC);
    // 0x80237124: sh          $v0, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r2;
L_80237128:
    // 0x80237128: jal         0x800A3450
    // 0x8023712C: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_5;
    // 0x8023712C: nop

    after_5:
    // 0x80237130: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x80237134: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80237138: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023713C: sb          $v1, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r3;
L_80237140:
    // 0x80237140: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80237144: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80237148: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023714C: jr          $ra
    // 0x80237150: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80237150: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80231FA0_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231FA0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80231FA4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80231FA8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80231FAC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80231FB0: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80231FB4: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    // 0x80231FB8: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80231FBC: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80231FC0: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80231FC4: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80231FC8: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80231FCC: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80231FD0: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80231FD4: jal         0x8004D5D4
    // 0x80231FD8: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80231FD8: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x80231FDC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80231FE0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80231FE4: jal         0x80050294
    // 0x80231FE8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x80231FE8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x80231FEC: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80231FF0: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x80231FF4: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80231FF8: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x80231FFC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80232000: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80232004: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80232008: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023200C: jr          $ra
    // 0x80232010: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80232010: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023B3AC_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B3AC: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x8023B3B0: beq         $v0, $zero, L_8023B3C4
    if (ctx->r2 == 0) {
        // 0x8023B3B4: nop
    
            goto L_8023B3C4;
    }
    // 0x8023B3B4: nop

    // 0x8023B3B8: lhu         $v0, 0xC($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0XC);
    // 0x8023B3BC: addiu       $v0, $v0, 0x11
    ctx->r2 = ADD32(ctx->r2, 0X11);
    // 0x8023B3C0: sh          $v0, 0xC($a0)
    MEM_H(0XC, ctx->r4) = ctx->r2;
L_8023B3C4:
    // 0x8023B3C4: jr          $ra
    // 0x8023B3C8: nop

    TRACE_RETURN()
    return;
    // 0x8023B3C8: nop

    // 0x8023B3CC: nop

;}
RECOMP_FUNC void func_8022CF24_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CF24: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022CF28: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022CF2C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022CF30: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022CF34: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022CF38: lh          $a0, 0x34C($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X34C);
    // 0x8022CF3C: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x8022CF40: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    // 0x8022CF44: jal         0x8004FA7C
    // 0x8022CF48: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x8022CF48: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    after_0:
    // 0x8022CF4C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8022CF50: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x8022CF54: beq         $v0, $zero, L_8022CFE8
    if (ctx->r2 == 0) {
        // 0x8022CF58: nop
    
            goto L_8022CFE8;
    }
    // 0x8022CF58: nop

    // 0x8022CF5C: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8022CF60: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x8022CF64: bne         $v0, $zero, L_8022CFE8
    if (ctx->r2 != 0) {
        // 0x8022CF68: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022CFE8;
    }
    // 0x8022CF68: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022CF6C: lbu         $v1, 0x34A($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34A);
    // 0x8022CF70: beq         $v1, $v0, L_8022CF88
    if (ctx->r3 == ctx->r2) {
        // 0x8022CF74: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022CF88;
    }
    // 0x8022CF74: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022CF78: beq         $v1, $v0, L_8022CFB8
    if (ctx->r3 == ctx->r2) {
        // 0x8022CF7C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022CFB8;
    }
    // 0x8022CF7C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8022CF80: j           L_8022CFDC
    // 0x8022CF84: nop

        goto L_8022CFDC;
    // 0x8022CF84: nop

L_8022CF88:
    // 0x8022CF88: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022CF8C: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x8022CF90: bne         $v0, $zero, L_8022CFDC
    if (ctx->r2 != 0) {
        // 0x8022CF94: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022CFDC;
    }
    // 0x8022CF94: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8022CF98: slti        $v0, $v1, 0x6
    ctx->r2 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    // 0x8022CF9C: bne         $v0, $zero, L_8022CFDC
    if (ctx->r2 != 0) {
        // 0x8022CFA0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022CFDC;
    }
    // 0x8022CFA0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022CFA4: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022CFA8: bne         $v1, $v0, L_8022CFDC
    if (ctx->r3 != ctx->r2) {
        // 0x8022CFAC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022CFDC;
    }
    // 0x8022CFAC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8022CFB0: j           L_8022CFDC
    // 0x8022CFB4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8022CFDC;
    // 0x8022CFB4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022CFB8:
    // 0x8022CFB8: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022CFBC: slti        $v0, $v1, 0x6
    ctx->r2 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    // 0x8022CFC0: beq         $v0, $zero, L_8022CFD8
    if (ctx->r2 == 0) {
        // 0x8022CFC4: slti        $v0, $v1, 0x4
        ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
            goto L_8022CFD8;
    }
    // 0x8022CFC4: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x8022CFC8: bne         $v0, $zero, L_8022CFDC
    if (ctx->r2 != 0) {
        // 0x8022CFCC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022CFDC;
    }
    // 0x8022CFCC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8022CFD0: j           L_8022CFDC
    // 0x8022CFD4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8022CFDC;
    // 0x8022CFD4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022CFD8:
    // 0x8022CFD8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8022CFDC:
    // 0x8022CFDC: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022CFE0: beq         $v0, $zero, L_8022D00C
    if (ctx->r2 == 0) {
        // 0x8022CFE4: nop
    
            goto L_8022D00C;
    }
    // 0x8022CFE4: nop

L_8022CFE8:
    // 0x8022CFE8: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x8022CFEC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022CFF0: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022CFF4: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022CFF8: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x8022CFFC: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8022D000: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x8022D004: j           L_8022D01C
    // 0x8022D008: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022D01C;
    // 0x8022D008: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022D00C:
    // 0x8022D00C: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022D010: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8022D014: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022D018: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_8022D01C:
    // 0x8022D01C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022D020: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022D024: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D028: jr          $ra
    // 0x8022D02C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022D02C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022E5C0_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E5C0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022E5C4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022E5C8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022E5CC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022E5D0: andi        $s0, $a1, 0xFF
    ctx->r16 = ctx->r5 & 0XFF;
    // 0x8022E5D4: sll         $v1, $s0, 7
    ctx->r3 = S32(ctx->r16 << 7);
    // 0x8022E5D8: addiu       $v1, $v1, 0x14
    ctx->r3 = ADD32(ctx->r3, 0X14);
    // 0x8022E5DC: addu        $v1, $s1, $v1
    ctx->r3 = ADD32(ctx->r17, ctx->r3);
    // 0x8022E5E0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022E5E4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022E5E8: lb          $v0, 0x0($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X0);
    // 0x8022E5EC: andi        $a2, $a2, 0xFF
    ctx->r6 = ctx->r6 & 0XFF;
    // 0x8022E5F0: sll         $a2, $a2, 4
    ctx->r6 = S32(ctx->r6 << 4);
    // 0x8022E5F4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022E5F8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022E5FC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022E600: lw          $v0, -0x2080($at)
    ctx->r2 = MEM_W(ctx->r1, -0X2080);
    // 0x8022E604: addu        $s2, $v1, $a2
    ctx->r18 = ADD32(ctx->r3, ctx->r6);
    // 0x8022E608: jalr        $v0
    // 0x8022E60C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022E60C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_0:
    // 0x8022E610: lbu         $v0, 0x1($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X1);
    // 0x8022E614: srav        $v0, $v0, $s0
    ctx->r2 = S32(SIGNED(ctx->r2) >> (ctx->r16 & 31));
    // 0x8022E618: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022E61C: beq         $v0, $zero, L_8022E644
    if (ctx->r2 == 0) {
        // 0x8022E620: nop
    
            goto L_8022E644;
    }
    // 0x8022E620: nop

    // 0x8022E624: lb          $v0, 0xB($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XB);
    // 0x8022E628: lw          $a1, 0x10($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X10);
    // 0x8022E62C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022E630: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022E634: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022E638: lw          $v0, -0x206C($at)
    ctx->r2 = MEM_W(ctx->r1, -0X206C);
    // 0x8022E63C: jalr        $v0
    // 0x8022E640: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x8022E640: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_1:
L_8022E644:
    // 0x8022E644: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022E648: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022E64C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022E650: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022E654: jr          $ra
    // 0x8022E658: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022E658: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022B38C_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B38C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022B390: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022B394: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B398: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8022B39C: addiu       $s2, $s0, 0x3C8
    ctx->r18 = ADD32(ctx->r16, 0X3C8);
    // 0x8022B3A0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022B3A4: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022B3A8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022B3AC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8022B3B0: jal         0x8009A3B4
    // 0x8022B3B4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022B3B4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    after_0:
    // 0x8022B3B8: addiu       $s1, $s0, 0x3D0
    ctx->r17 = ADD32(ctx->r16, 0X3D0);
    // 0x8022B3BC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022B3C0: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022B3C4: jal         0x8009A3B4
    // 0x8022B3C8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022B3C8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022B3CC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022B3D0: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022B3D4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022B3D8: addiu       $a3, $zero, 0x1000
    ctx->r7 = ADD32(0, 0X1000);
    // 0x8022B3DC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8022B3E0: jal         0x8004DBA0
    // 0x8022B3E4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_2;
    // 0x8022B3E4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_2:
    // 0x8022B3E8: jal         0x8004F144
    // 0x8022B3EC: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_3;
    // 0x8022B3EC: nop

    after_3:
    // 0x8022B3F0: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8022B3F4: beq         $s0, $zero, L_8022B428
    if (ctx->r16 == 0) {
        // 0x8022B3F8: addiu       $a0, $s0, 0x38
        ctx->r4 = ADD32(ctx->r16, 0X38);
            goto L_8022B428;
    }
    // 0x8022B3F8: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    // 0x8022B3FC: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022B400: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022B404: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022B408: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8022B40C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022B410: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x8022B414: sb          $zero, 0x3($s0)
    MEM_B(0X3, ctx->r16) = 0;
    // 0x8022B418: jal         0x8009A3B4
    // 0x8022B41C: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8022B41C: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    after_4:
    // 0x8022B420: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022B424: sh          $v0, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r2;
L_8022B428:
    // 0x8022B428: jal         0x8004F144
    // 0x8022B42C: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_5;
    // 0x8022B42C: nop

    after_5:
    // 0x8022B430: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8022B434: beq         $s0, $zero, L_8022B46C
    if (ctx->r16 == 0) {
        // 0x8022B438: addiu       $a0, $s0, 0x38
        ctx->r4 = ADD32(ctx->r16, 0X38);
            goto L_8022B46C;
    }
    // 0x8022B438: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    // 0x8022B43C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022B440: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022B444: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022B448: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8022B44C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022B450: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x8022B454: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B458: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x8022B45C: jal         0x8009A3B4
    // 0x8022B460: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x8022B460: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    after_6:
    // 0x8022B464: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022B468: sh          $v0, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r2;
L_8022B46C:
    // 0x8022B46C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8022B470: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022B474: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022B478: jal         0x80238028
    // 0x8022B47C: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    func_80238028_ovl3(rdram, ctx);
        goto after_7;
    // 0x8022B47C: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    after_7:
    // 0x8022B480: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8022B484: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8022B488: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022B48C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022B490: jr          $ra
    // 0x8022B494: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022B494: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022EDD0_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022EDD0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022EDD4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022EDD8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022EDDC: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8022EDE0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022EDE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022EDE8: jal         0x8009A3B4
    // 0x8022EDEC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022EDEC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8022EDF0: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8022EDF4: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022EDF8: jal         0x8009A3B4
    // 0x8022EDFC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022EDFC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022EE00: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8022EE04: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8022EE08: jal         0x8009A3B4
    // 0x8022EE0C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022EE0C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022EE10: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022EE14: bne         $v0, $zero, L_8022EE44
    if (ctx->r2 != 0) {
        // 0x8022EE18: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022EE44;
    }
    // 0x8022EE18: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022EE1C: jal         0x8022EE64
    // 0x8022EE20: addiu       $a1, $s0, 0x348
    ctx->r5 = ADD32(ctx->r16, 0X348);
    func_8022EE64_ovl3(rdram, ctx);
        goto after_3;
    // 0x8022EE20: addiu       $a1, $s0, 0x348
    ctx->r5 = ADD32(ctx->r16, 0X348);
    after_3:
    // 0x8022EE24: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022EE28: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022EE2C: jal         0x80050294
    // 0x8022EE30: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_4;
    // 0x8022EE30: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
    // 0x8022EE34: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022EE38: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022EE3C: j           L_8022EE54
    // 0x8022EE40: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_8022EE54;
    // 0x8022EE40: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022EE44:
    // 0x8022EE44: jal         0x8022EF50
    // 0x8022EE48: addiu       $a1, $s0, 0x348
    ctx->r5 = ADD32(ctx->r16, 0X348);
    func_8022EF50_ovl3(rdram, ctx);
        goto after_5;
    // 0x8022EE48: addiu       $a1, $s0, 0x348
    ctx->r5 = ADD32(ctx->r16, 0X348);
    after_5:
    // 0x8022EE4C: jal         0x8005044C
    // 0x8022EE50: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_6;
    // 0x8022EE50: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
L_8022EE54:
    // 0x8022EE54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022EE58: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022EE5C: jr          $ra
    // 0x8022EE60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022EE60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227354_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227354: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80227358: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022735C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227360: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80227364: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80227368: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x8022736C: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    // 0x80227370: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80227374: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80227378: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022737C: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80227380: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80227384: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80227388: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8022738C: jal         0x8004D5D4
    // 0x80227390: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80227390: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x80227394: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80227398: lbu         $v1, -0x3A48($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3A48);
    // 0x8022739C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802273A0: beq         $v1, $v0, L_802273F8
    if (ctx->r3 == ctx->r2) {
        // 0x802273A4: addiu       $s1, $s0, 0x4E0
        ctx->r17 = ADD32(ctx->r16, 0X4E0);
            goto L_802273F8;
    }
    // 0x802273A4: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    // 0x802273A8: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x802273AC: beql        $v0, $zero, L_802273C4
    if (ctx->r2 == 0) {
        // 0x802273B0: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_802273C4;
    }
    goto skip_0;
    // 0x802273B0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    skip_0:
    // 0x802273B4: beq         $v1, $zero, L_802273D4
    if (ctx->r3 == 0) {
        // 0x802273B8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802273D4;
    }
    // 0x802273B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802273BC: j           L_80227474
    // 0x802273C0: nop

        goto L_80227474;
    // 0x802273C0: nop

L_802273C4:
    // 0x802273C4: beq         $v1, $v0, L_80227438
    if (ctx->r3 == ctx->r2) {
        // 0x802273C8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227438;
    }
    // 0x802273C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802273CC: j           L_80227474
    // 0x802273D0: nop

        goto L_80227474;
    // 0x802273D0: nop

L_802273D4:
    // 0x802273D4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x802273D8: jal         0x80050294
    // 0x802273DC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x802273DC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x802273E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802273E4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802273E8: jal         0x8022774C
    // 0x802273EC: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8022774C_ovl3(rdram, ctx);
        goto after_2;
    // 0x802273EC: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_2:
    // 0x802273F0: j           L_80227470
    // 0x802273F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80227470;
    // 0x802273F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802273F8:
    // 0x802273F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802273FC: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x80227400: jal         0x80050294
    // 0x80227404: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_3;
    // 0x80227404: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
    // 0x80227408: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022740C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80227410: jal         0x8022774C
    // 0x80227414: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_8022774C_ovl3(rdram, ctx);
        goto after_4;
    // 0x80227414: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_4:
    // 0x80227418: addiu       $v0, $zero, 0x104
    ctx->r2 = ADD32(0, 0X104);
    // 0x8022741C: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x80227420: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x80227424: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80227428: addiu       $v0, $zero, 0xD2
    ctx->r2 = ADD32(0, 0XD2);
    // 0x8022742C: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x80227430: j           L_80227470
    // 0x80227434: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_80227470;
    // 0x80227434: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_80227438:
    // 0x80227438: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x8022743C: jal         0x80050294
    // 0x80227440: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_5;
    // 0x80227440: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
    // 0x80227444: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227448: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022744C: jal         0x8022774C
    // 0x80227450: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    func_8022774C_ovl3(rdram, ctx);
        goto after_6;
    // 0x80227450: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    after_6:
    // 0x80227454: addiu       $v0, $zero, 0x104
    ctx->r2 = ADD32(0, 0X104);
    // 0x80227458: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x8022745C: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x80227460: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80227464: addiu       $v0, $zero, 0xD2
    ctx->r2 = ADD32(0, 0XD2);
    // 0x80227468: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x8022746C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_80227470:
    // 0x80227470: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80227474:
    // 0x80227474: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80227478: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8022747C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227480: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x80227484: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80227488: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022748C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227490: jr          $ra
    // 0x80227494: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80227494: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022E65C_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E65C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022E660: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022E664: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022E668: jal         0x800A3450
    // 0x8022E66C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8022E66C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    after_0:
    // 0x8022E670: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x8022E674: bne         $v1, $zero, L_8022E6EC
    if (ctx->r3 != 0) {
        // 0x8022E678: addu        $a2, $v0, $zero
        ctx->r6 = ADD32(ctx->r2, 0);
            goto L_8022E6EC;
    }
    // 0x8022E678: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x8022E67C: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8022E680: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    // 0x8022E684: andi        $v0, $a2, 0x7
    ctx->r2 = ctx->r6 & 0X7;
    // 0x8022E688: addiu       $v1, $zero, 0x40
    ctx->r3 = ADD32(0, 0X40);
    // 0x8022E68C: subu        $v0, $v1, $v0
    ctx->r2 = SUB32(ctx->r3, ctx->r2);
    // 0x8022E690: sll         $a0, $a2, 16
    ctx->r4 = S32(ctx->r6 << 16);
    // 0x8022E694: sh          $v0, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r2;
    // 0x8022E698: sra         $v0, $a0, 18
    ctx->r2 = S32(SIGNED(ctx->r4) >> 18);
    // 0x8022E69C: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x8022E6A0: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x8022E6A4: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8022E6A8: sra         $v0, $a0, 20
    ctx->r2 = S32(SIGNED(ctx->r4) >> 20);
    // 0x8022E6AC: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x8022E6B0: sh          $v1, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r3;
    // 0x8022E6B4: lhu         $v1, 0x0($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X0);
    // 0x8022E6B8: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x8022E6BC: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x8022E6C0: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8022E6C4: sh          $v1, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r3;
    // 0x8022E6C8: lhu         $v0, 0x2($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X2);
    // 0x8022E6CC: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x8022E6D0: sh          $v0, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r2;
    // 0x8022E6D4: lhu         $v0, 0x4($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X4);
    // 0x8022E6D8: sra         $a0, $a0, 22
    ctx->r4 = S32(SIGNED(ctx->r4) >> 22);
    // 0x8022E6DC: andi        $a0, $a0, 0x1F
    ctx->r4 = ctx->r4 & 0X1F;
    // 0x8022E6E0: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8022E6E4: j           L_8022E748
    // 0x8022E6E8: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
        goto L_8022E748;
    // 0x8022E6E8: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
L_8022E6EC:
    // 0x8022E6EC: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x8022E6F0: lhu         $v1, 0x6($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X6);
    // 0x8022E6F4: lhu         $a0, 0x8($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X8);
    // 0x8022E6F8: lhu         $a1, 0xC($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0XC);
    // 0x8022E6FC: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8022E700: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x8022E704: sh          $v1, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r3;
    // 0x8022E708: lhu         $v1, 0xE($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XE);
    // 0x8022E70C: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x8022E710: addiu       $a1, $a1, -0x8
    ctx->r5 = ADD32(ctx->r5, -0X8);
    // 0x8022E714: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
    // 0x8022E718: andi        $v0, $a2, 0x7
    ctx->r2 = ctx->r6 & 0X7;
    // 0x8022E71C: subu        $a1, $a1, $v0
    ctx->r5 = SUB32(ctx->r5, ctx->r2);
    // 0x8022E720: sh          $a0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r4;
    // 0x8022E724: lh          $a0, 0x6($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X6);
    // 0x8022E728: srl         $v0, $a2, 2
    ctx->r2 = S32(U32(ctx->r6) >> 2);
    // 0x8022E72C: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x8022E730: sh          $a1, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r5;
    // 0x8022E734: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x8022E738: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022E73C: bne         $a0, $zero, L_8022E748
    if (ctx->r4 != 0) {
        // 0x8022E740: sh          $v1, 0xE($s0)
        MEM_H(0XE, ctx->r16) = ctx->r3;
            goto L_8022E748;
    }
    // 0x8022E740: sh          $v1, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r3;
    // 0x8022E744: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
L_8022E748:
    // 0x8022E748: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022E74C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022E750: jr          $ra
    // 0x8022E754: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022E754: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80234E40_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234E40: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80234E44: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80234E48: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80234E4C: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80234E50: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x80234E54: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80234E58: addiu       $s3, $sp, 0x10
    ctx->r19 = ADD32(ctx->r29, 0X10);
    // 0x80234E5C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80234E60: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x80234E64: addiu       $a1, $a1, -0xA30
    ctx->r5 = ADD32(ctx->r5, -0XA30);
    // 0x80234E68: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80234E6C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80234E70: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80234E74: jal         0x8009A3B4
    // 0x80234E78: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80234E78: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    after_0:
    // 0x80234E7C: addiu       $a0, $s1, 0x2C
    ctx->r4 = ADD32(ctx->r17, 0X2C);
    // 0x80234E80: addiu       $s2, $s1, 0x14
    ctx->r18 = ADD32(ctx->r17, 0X14);
    // 0x80234E84: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80234E88: jal         0x8009A3B4
    // 0x80234E8C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80234E8C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x80234E90: addiu       $a0, $s1, 0x34
    ctx->r4 = ADD32(ctx->r17, 0X34);
    // 0x80234E94: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    // 0x80234E98: jal         0x8009A3B4
    // 0x80234E9C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80234E9C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_2:
    // 0x80234EA0: addiu       $a0, $s1, 0x5C
    ctx->r4 = ADD32(ctx->r17, 0X5C);
    // 0x80234EA4: addiu       $s0, $s1, 0x54
    ctx->r16 = ADD32(ctx->r17, 0X54);
    // 0x80234EA8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80234EAC: jal         0x8009A3B4
    // 0x80234EB0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80234EB0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x80234EB4: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x80234EB8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80234EBC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80234EC0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80234EC4: lw          $v0, -0x1850($at)
    ctx->r2 = MEM_W(ctx->r1, -0X1850);
    // 0x80234EC8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80234ECC: jalr        $v0
    // 0x80234ED0: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x80234ED0: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    after_4:
    // 0x80234ED4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80234ED8: addiu       $s0, $s1, 0x8C
    ctx->r16 = ADD32(ctx->r17, 0X8C);
    // 0x80234EDC: jal         0x80031600
    // 0x80234EE0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80031600_CA00(rdram, ctx);
        goto after_5;
    // 0x80234EE0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80234EE4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80234EE8: jal         0x80031DA8
    // 0x80234EEC: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_80031DA8_D1A8(rdram, ctx);
        goto after_6;
    // 0x80234EEC: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_6:
    // 0x80234EF0: addiu       $a0, $s1, 0xAC
    ctx->r4 = ADD32(ctx->r17, 0XAC);
    // 0x80234EF4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80234EF8: jal         0x8009A3B4
    // 0x80234EFC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x80234EFC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_7:
    // 0x80234F00: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80234F04: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80234F08: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x80234F0C: jal         0x80047284
    // 0x80234F10: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_8;
    // 0x80234F10: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_8:
    // 0x80234F14: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80234F18: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80234F1C: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80234F20: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80234F24: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80234F28: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80234F2C: jr          $ra
    // 0x80234F30: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80234F30: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80230B84_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230B84: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80230B88: bne         $v0, $zero, L_80230B98
    if (ctx->r2 != 0) {
        // 0x80230B8C: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_80230B98;
    }
    // 0x80230B8C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80230B90: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x80230B94: sb          $zero, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = 0;
L_80230B98:
    // 0x80230B98: jr          $ra
    // 0x80230B9C: nop

    TRACE_RETURN()
    return;
    // 0x80230B9C: nop

;}
RECOMP_FUNC void func_8022DE9C_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DE9C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022DEA0: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022DEA4: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x8022DEA8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022DEAC: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x8022DEB0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022DEB4: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    // 0x8022DEB8: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8022DEBC: jal         0x8004EEAC
    // 0x8022DEC0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    func_8004EEAC_2A2AC(rdram, ctx);
        goto after_0;
    // 0x8022DEC0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    after_0:
    // 0x8022DEC4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8022DEC8: bne         $a0, $zero, L_8022DED8
    if (ctx->r4 != 0) {
        // 0x8022DECC: addu        $s2, $s1, $zero
        ctx->r18 = ADD32(ctx->r17, 0);
            goto L_8022DED8;
    }
    // 0x8022DECC: addu        $s2, $s1, $zero
    ctx->r18 = ADD32(ctx->r17, 0);
    // 0x8022DED0: j           L_8022E024
    // 0x8022DED4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_8022E024;
    // 0x8022DED4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8022DED8:
    // 0x8022DED8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022DEDC: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    // 0x8022DEE0: addiu       $a3, $a0, 0x88
    ctx->r7 = ADD32(ctx->r4, 0X88);
    // 0x8022DEE4: sb          $v0, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r2;
    // 0x8022DEE8: sll         $v0, $s1, 24
    ctx->r2 = S32(ctx->r17 << 24);
    // 0x8022DEEC: sra         $v1, $v0, 24
    ctx->r3 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8022DEF0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022DEF4: sb          $a1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r5;
    // 0x8022DEF8: sb          $zero, 0x4($a0)
    MEM_B(0X4, ctx->r4) = 0;
    // 0x8022DEFC: sb          $s2, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r18;
    // 0x8022DF00: beq         $v1, $v0, L_8022DF44
    if (ctx->r3 == ctx->r2) {
        // 0x8022DF04: sw          $zero, 0xC($a0)
        MEM_W(0XC, ctx->r4) = 0;
            goto L_8022DF44;
    }
    // 0x8022DF04: sw          $zero, 0xC($a0)
    MEM_W(0XC, ctx->r4) = 0;
    // 0x8022DF08: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022DF0C: beql        $v0, $zero, L_8022DF24
    if (ctx->r2 == 0) {
        // 0x8022DF10: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022DF24;
    }
    goto skip_0;
    // 0x8022DF10: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    skip_0:
    // 0x8022DF14: beq         $v1, $zero, L_8022DF34
    if (ctx->r3 == 0) {
        // 0x8022DF18: lui         $v1, 0x2E80
        ctx->r3 = S32(0X2E80 << 16);
            goto L_8022DF34;
    }
    // 0x8022DF18: lui         $v1, 0x2E80
    ctx->r3 = S32(0X2E80 << 16);
    // 0x8022DF1C: j           L_8022DF88
    // 0x8022DF20: nop

        goto L_8022DF88;
    // 0x8022DF20: nop

L_8022DF24:
    // 0x8022DF24: beq         $v1, $v0, L_8022DF64
    if (ctx->r3 == ctx->r2) {
        // 0x8022DF28: lui         $v1, 0x2E40
        ctx->r3 = S32(0X2E40 << 16);
            goto L_8022DF64;
    }
    // 0x8022DF28: lui         $v1, 0x2E40
    ctx->r3 = S32(0X2E40 << 16);
    // 0x8022DF2C: j           L_8022DF88
    // 0x8022DF30: nop

        goto L_8022DF88;
    // 0x8022DF30: nop

L_8022DF34:
    // 0x8022DF34: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x8022DF38: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022DF3C: j           L_8022DF54
    // 0x8022DF40: sb          $zero, 0x88($a0)
    MEM_B(0X88, ctx->r4) = 0;
        goto L_8022DF54;
    // 0x8022DF40: sb          $zero, 0x88($a0)
    MEM_B(0X88, ctx->r4) = 0;
L_8022DF44:
    // 0x8022DF44: lui         $v1, 0x2E40
    ctx->r3 = S32(0X2E40 << 16);
    // 0x8022DF48: ori         $v1, $v1, 0x4040
    ctx->r3 = ctx->r3 | 0X4040;
    // 0x8022DF4C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022DF50: sb          $a1, 0x88($a0)
    MEM_B(0X88, ctx->r4) = ctx->r5;
L_8022DF54:
    // 0x8022DF54: sb          $v0, 0x8B($a0)
    MEM_B(0X8B, ctx->r4) = ctx->r2;
    // 0x8022DF58: sb          $a1, 0x93($a0)
    MEM_B(0X93, ctx->r4) = ctx->r5;
    // 0x8022DF5C: j           L_8022DF98
    // 0x8022DF60: sw          $v1, 0x98($a0)
    MEM_W(0X98, ctx->r4) = ctx->r3;
        goto L_8022DF98;
    // 0x8022DF60: sw          $v1, 0x98($a0)
    MEM_W(0X98, ctx->r4) = ctx->r3;
L_8022DF64:
    // 0x8022DF64: ori         $v1, $v1, 0x4040
    ctx->r3 = ctx->r3 | 0X4040;
    // 0x8022DF68: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022DF6C: sb          $v0, 0x88($a0)
    MEM_B(0X88, ctx->r4) = ctx->r2;
    // 0x8022DF70: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022DF74: sb          $v0, 0x8B($a0)
    MEM_B(0X8B, ctx->r4) = ctx->r2;
    // 0x8022DF78: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022DF7C: sb          $v0, 0x93($a0)
    MEM_B(0X93, ctx->r4) = ctx->r2;
    // 0x8022DF80: j           L_8022DF98
    // 0x8022DF84: sw          $v1, 0x98($a0)
    MEM_W(0X98, ctx->r4) = ctx->r3;
        goto L_8022DF98;
    // 0x8022DF84: sw          $v1, 0x98($a0)
    MEM_W(0X98, ctx->r4) = ctx->r3;
L_8022DF88:
    // 0x8022DF88: jal         0x8004F418
    // 0x8022DF8C: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_1;
    // 0x8022DF8C: nop

    after_1:
    // 0x8022DF90: j           L_8022E024
    // 0x8022DF94: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_8022E024;
    // 0x8022DF94: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8022DF98:
    // 0x8022DF98: addiu       $v0, $zero, 0x3F
    ctx->r2 = ADD32(0, 0X3F);
    // 0x8022DF9C: sb          $v0, 0x1($a3)
    MEM_B(0X1, ctx->r7) = ctx->r2;
    // 0x8022DFA0: lbu         $v0, 0x1($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X1);
    // 0x8022DFA4: lbu         $v1, 0x3($a3)
    ctx->r3 = MEM_BU(ctx->r7, 0X3);
    // 0x8022DFA8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022DFAC: sw          $zero, 0xC($a3)
    MEM_W(0XC, ctx->r7) = 0;
    // 0x8022DFB0: beq         $v1, $zero, L_8022E020
    if (ctx->r3 == 0) {
        // 0x8022DFB4: sb          $v0, 0x2($a3)
        MEM_B(0X2, ctx->r7) = ctx->r2;
            goto L_8022E020;
    }
    // 0x8022DFB4: sb          $v0, 0x2($a3)
    MEM_B(0X2, ctx->r7) = ctx->r2;
    // 0x8022DFB8: addiu       $t0, $zero, 0x7
    ctx->r8 = ADD32(0, 0X7);
L_8022DFBC:
    // 0x8022DFBC: andi        $v1, $a2, 0xFF
    ctx->r3 = ctx->r6 & 0XFF;
    // 0x8022DFC0: addu        $v0, $a3, $v1
    ctx->r2 = ADD32(ctx->r7, ctx->r3);
    // 0x8022DFC4: sb          $t0, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r8;
    // 0x8022DFC8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022DFCC: sll         $v1, $v1, 7
    ctx->r3 = S32(ctx->r3 << 7);
    // 0x8022DFD0: addiu       $v1, $v1, 0x14
    ctx->r3 = ADD32(ctx->r3, 0X14);
    // 0x8022DFD4: addu        $v1, $a3, $v1
    ctx->r3 = ADD32(ctx->r7, ctx->r3);
    // 0x8022DFD8: andi        $v0, $a1, 0xFF
    ctx->r2 = ctx->r5 & 0XFF;
L_8022DFDC:
    // 0x8022DFDC: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8022DFE0: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8022DFE4: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x8022DFE8: sw          $s0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r16;
    // 0x8022DFEC: sb          $zero, 0x4($v0)
    MEM_B(0X4, ctx->r2) = 0;
    // 0x8022DFF0: sb          $zero, 0x5($v0)
    MEM_B(0X5, ctx->r2) = 0;
    // 0x8022DFF4: sh          $zero, 0x6($v0)
    MEM_H(0X6, ctx->r2) = 0;
    // 0x8022DFF8: andi        $v0, $a1, 0xFF
    ctx->r2 = ctx->r5 & 0XFF;
    // 0x8022DFFC: sltiu       $v0, $v0, 0x8
    ctx->r2 = ctx->r2 < 0X8 ? 1 : 0;
    // 0x8022E000: bne         $v0, $zero, L_8022DFDC
    if (ctx->r2 != 0) {
        // 0x8022E004: andi        $v0, $a1, 0xFF
        ctx->r2 = ctx->r5 & 0XFF;
            goto L_8022DFDC;
    }
    // 0x8022E004: andi        $v0, $a1, 0xFF
    ctx->r2 = ctx->r5 & 0XFF;
    // 0x8022E008: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x8022E00C: lbu         $v1, 0x3($a3)
    ctx->r3 = MEM_BU(ctx->r7, 0X3);
    // 0x8022E010: andi        $v0, $a2, 0xFF
    ctx->r2 = ctx->r6 & 0XFF;
    // 0x8022E014: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8022E018: bne         $v0, $zero, L_8022DFBC
    if (ctx->r2 != 0) {
        // 0x8022E01C: addiu       $s0, $s0, 0x8
        ctx->r16 = ADD32(ctx->r16, 0X8);
            goto L_8022DFBC;
    }
    // 0x8022E01C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_8022E020:
    // 0x8022E020: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
L_8022E024:
    // 0x8022E024: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022E028: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022E02C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022E030: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022E034: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022E038: jr          $ra
    // 0x8022E03C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022E03C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80237E44_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237E44: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80237E48: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80237E4C: jal         0x8004F5C4
    // 0x80237E50: nop

    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x80237E50: nop

    after_0:
    // 0x80237E54: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80237E58: jr          $ra
    // 0x80237E5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80237E5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802338C0_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802338C0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x802338C4: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x802338C8: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x802338CC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802338D0: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x802338D4: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x802338D8: lui         $s3, 0x2E80
    ctx->r19 = S32(0X2E80 << 16);
    // 0x802338DC: ori         $s3, $s3, 0xC080
    ctx->r19 = ctx->r19 | 0XC080;
    // 0x802338E0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x802338E4: lui         $s2, 0x3D48
    ctx->r18 = S32(0X3D48 << 16);
    // 0x802338E8: ori         $s2, $s2, 0x2080
    ctx->r18 = ctx->r18 | 0X2080;
    // 0x802338EC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802338F0: lui         $s1, 0x2E
    ctx->r17 = S32(0X2E << 16);
    // 0x802338F4: ori         $s1, $s1, 0x209F
    ctx->r17 = ctx->r17 | 0X209F;
    // 0x802338F8: sw          $s7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r23;
    // 0x802338FC: addiu       $s7, $zero, 0x3F80
    ctx->r23 = ADD32(0, 0X3F80);
    // 0x80233900: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x80233904: addiu       $s6, $zero, 0x3F9F
    ctx->r22 = ADD32(0, 0X3F9F);
    // 0x80233908: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x8023390C: addiu       $s5, $zero, 0xC0
    ctx->r21 = ADD32(0, 0XC0);
    // 0x80233910: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
L_80233914:
    // 0x80233914: jal         0x8003B878
    // 0x80233918: nop

    func_8003B878_16C78(rdram, ctx);
        goto after_0;
    // 0x80233918: nop

    after_0:
    // 0x8023391C: andi        $a1, $s0, 0xFF
    ctx->r5 = ctx->r16 & 0XFF;
    // 0x80233920: sll         $a0, $a1, 3
    ctx->r4 = S32(ctx->r5 << 3);
    // 0x80233924: addu        $a0, $a0, $s4
    ctx->r4 = ADD32(ctx->r4, ctx->r20);
    // 0x80233928: sw          $s3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r19;
    // 0x8023392C: lw          $v1, 0xD8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XD8);
    // 0x80233930: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80233934: sw          $v1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r3;
    // 0x80233938: lw          $a0, 0xDC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XDC);
    // 0x8023393C: sll         $v1, $a1, 1
    ctx->r3 = S32(ctx->r5 << 1);
    // 0x80233940: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x80233944: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80233948: subu        $v1, $s5, $v1
    ctx->r3 = SUB32(ctx->r21, ctx->r3);
    // 0x8023394C: sw          $s2, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r18;
    // 0x80233950: sw          $s1, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r17;
    // 0x80233954: sw          $s7, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r23;
    // 0x80233958: sw          $s6, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r22;
    // 0x8023395C: sw          $v1, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r3;
    // 0x80233960: sw          $zero, 0x20($v0)
    MEM_W(0X20, ctx->r2) = 0;
    // 0x80233964: sw          $a0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r4;
    // 0x80233968: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
    // 0x8023396C: sltiu       $v0, $v0, 0x6
    ctx->r2 = ctx->r2 < 0X6 ? 1 : 0;
    // 0x80233970: bne         $v0, $zero, L_80233914
    if (ctx->r2 != 0) {
        // 0x80233974: nop
    
            goto L_80233914;
    }
    // 0x80233974: nop

    // 0x80233978: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x8023397C: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x80233980: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x80233984: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x80233988: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x8023398C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80233990: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80233994: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80233998: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023399C: jr          $ra
    // 0x802339A0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x802339A0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_802376F0_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802376F0: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x802376F4: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x802376F8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x802376FC: beq         $v1, $a0, L_80237784
    if (ctx->r3 == ctx->r4) {
        // 0x80237700: addiu       $sp, $sp, -0x8
        ctx->r29 = ADD32(ctx->r29, -0X8);
            goto L_80237784;
    }
    // 0x80237700: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80237704: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80237708: beq         $v0, $zero, L_802377BC
    if (ctx->r2 == 0) {
        // 0x8023770C: nop
    
            goto L_802377BC;
    }
    // 0x8023770C: nop

    // 0x80237710: bne         $v1, $zero, L_802377BC
    if (ctx->r3 != 0) {
        // 0x80237714: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802377BC;
    }
    // 0x80237714: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80237718: lb          $v1, 0xC($a1)
    ctx->r3 = MEM_B(ctx->r5, 0XC);
    // 0x8023771C: beq         $v1, $a0, L_80237760
    if (ctx->r3 == ctx->r4) {
        // 0x80237720: sb          $v0, 0x9($a1)
        MEM_B(0X9, ctx->r5) = ctx->r2;
            goto L_80237760;
    }
    // 0x80237720: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x80237724: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80237728: beql        $v0, $zero, L_80237740
    if (ctx->r2 == 0) {
        // 0x8023772C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80237740;
    }
    goto skip_0;
    // 0x8023772C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80237730: beq         $v1, $zero, L_80237750
    if (ctx->r3 == 0) {
        // 0x80237734: lui         $v0, 0x2E00
        ctx->r2 = S32(0X2E00 << 16);
            goto L_80237750;
    }
    // 0x80237734: lui         $v0, 0x2E00
    ctx->r2 = S32(0X2E00 << 16);
    // 0x80237738: j           L_80237784
    // 0x8023773C: nop

        goto L_80237784;
    // 0x8023773C: nop

L_80237740:
    // 0x80237740: beq         $v1, $v0, L_80237774
    if (ctx->r3 == ctx->r2) {
        // 0x80237744: lui         $v0, 0x2E00
        ctx->r2 = S32(0X2E00 << 16);
            goto L_80237774;
    }
    // 0x80237744: lui         $v0, 0x2E00
    ctx->r2 = S32(0X2E00 << 16);
    // 0x80237748: j           L_80237784
    // 0x8023774C: nop

        goto L_80237784;
    // 0x8023774C: nop

L_80237750:
    // 0x80237750: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
    // 0x80237754: sw          $v0, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r2;
    // 0x80237758: j           L_80237780
    // 0x8023775C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_80237780;
    // 0x8023775C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_80237760:
    // 0x80237760: lui         $v0, 0x2E00
    ctx->r2 = S32(0X2E00 << 16);
    // 0x80237764: ori         $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 | 0X8000;
    // 0x80237768: sw          $v0, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r2;
    // 0x8023776C: j           L_80237780
    // 0x80237770: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
        goto L_80237780;
    // 0x80237770: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
L_80237774:
    // 0x80237774: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x80237778: sw          $v0, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r2;
    // 0x8023777C: addiu       $v0, $zero, 0x808
    ctx->r2 = ADD32(0, 0X808);
L_80237780:
    // 0x80237780: sh          $v0, 0x26($a1)
    MEM_H(0X26, ctx->r5) = ctx->r2;
L_80237784:
    // 0x80237784: lh          $v0, 0x24($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X24);
    // 0x80237788: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8023778C: slti        $v0, $v0, 0x20
    ctx->r2 = SIGNED(ctx->r2) < 0X20 ? 1 : 0;
    // 0x80237790: bne         $v0, $zero, L_802377A8
    if (ctx->r2 != 0) {
        // 0x80237794: addiu       $a0, $a0, 0x6
        ctx->r4 = ADD32(ctx->r4, 0X6);
            goto L_802377A8;
    }
    // 0x80237794: addiu       $a0, $a0, 0x6
    ctx->r4 = ADD32(ctx->r4, 0X6);
    // 0x80237798: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023779C: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x802377A0: j           L_802377BC
    // 0x802377A4: sh          $zero, 0x24($a1)
    MEM_H(0X24, ctx->r5) = 0;
        goto L_802377BC;
    // 0x802377A4: sh          $zero, 0x24($a1)
    MEM_H(0X24, ctx->r5) = 0;
L_802377A8:
    // 0x802377A8: lhu         $v0, 0x26($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X26);
    // 0x802377AC: lw          $v1, 0x18($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X18);
    // 0x802377B0: sh          $a0, 0x24($a1)
    MEM_H(0X24, ctx->r5) = ctx->r4;
    // 0x802377B4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802377B8: sw          $v1, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r3;
L_802377BC:
    // 0x802377BC: jr          $ra
    // 0x802377C0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x802377C0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8022DCA4_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DCA4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8022DCA8: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8022DCAC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022DCB0: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x8022DCB4: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8022DCB8: lh          $v0, 0x56($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X56);
    // 0x8022DCBC: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    // 0x8022DCC0: sll         $a2, $a1, 20
    ctx->r6 = S32(ctx->r5 << 20);
    // 0x8022DCC4: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x8022DCC8: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8022DCCC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022DCD0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8022DCD4: jal         0x8004DC2C
    // 0x8022DCD8: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_8004DC2C_2902C(rdram, ctx);
        goto after_0;
    // 0x8022DCD8: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_0:
    // 0x8022DCDC: lh          $a1, 0x18($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X18);
    // 0x8022DCE0: lhu         $a0, 0x14($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X14);
    // 0x8022DCE4: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8022DCE8: lhu         $v1, 0x49C4($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X49C4);
    // 0x8022DCEC: lh          $a2, 0x20($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X20);
    // 0x8022DCF0: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    // 0x8022DCF4: subu        $a0, $a0, $v1
    ctx->r4 = SUB32(ctx->r4, ctx->r3);
    // 0x8022DCF8: lhu         $v1, 0x18($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X18);
    // 0x8022DCFC: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022DD00: lhu         $a1, 0x49C8($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X49C8);
    // 0x8022DD04: addu        $a0, $s0, $a0
    ctx->r4 = ADD32(ctx->r16, ctx->r4);
    // 0x8022DD08: andi        $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 & 0XFFFF;
    // 0x8022DD0C: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x8022DD10: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x8022DD14: addu        $v1, $s0, $v1
    ctx->r3 = ADD32(ctx->r16, ctx->r3);
    // 0x8022DD18: andi        $s0, $s0, 0xFFFF
    ctx->r16 = ctx->r16 & 0XFFFF;
    // 0x8022DD1C: sll         $s0, $s0, 1
    ctx->r16 = S32(ctx->r16 << 1);
    // 0x8022DD20: slt         $a0, $a0, $s0
    ctx->r4 = SIGNED(ctx->r4) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x8022DD24: beq         $a0, $zero, L_8022DD34
    if (ctx->r4 == 0) {
        // 0x8022DD28: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022DD34;
    }
    // 0x8022DD28: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8022DD2C: andi        $v0, $v1, 0xFFFF
    ctx->r2 = ctx->r3 & 0XFFFF;
    // 0x8022DD30: slt         $v0, $v0, $s0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r16) ? 1 : 0;
L_8022DD34:
    // 0x8022DD34: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x8022DD38: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8022DD3C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8022DD40: jr          $ra
    // 0x8022DD44: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8022DD44: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8022DD48: nop

    // 0x8022DD4C: nop

;}
RECOMP_FUNC void func_8022F798_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F798: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x8022F79C: bne         $v0, $zero, L_8022F7AC
    if (ctx->r2 != 0) {
        // 0x8022F7A0: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_8022F7AC;
    }
    // 0x8022F7A0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022F7A4: j           L_8022F7CC
    // 0x8022F7A8: sh          $a1, 0x15E($a0)
    MEM_H(0X15E, ctx->r4) = ctx->r5;
        goto L_8022F7CC;
    // 0x8022F7A8: sh          $a1, 0x15E($a0)
    MEM_H(0X15E, ctx->r4) = ctx->r5;
L_8022F7AC:
    // 0x8022F7AC: sh          $zero, 0x15E($a0)
    MEM_H(0X15E, ctx->r4) = 0;
    // 0x8022F7B0: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
L_8022F7B4:
    // 0x8022F7B4: sh          $a1, 0x186($v1)
    MEM_H(0X186, ctx->r3) = ctx->r5;
    // 0x8022F7B8: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x8022F7BC: slti        $v0, $a2, 0x3
    ctx->r2 = SIGNED(ctx->r6) < 0X3 ? 1 : 0;
    // 0x8022F7C0: bne         $v0, $zero, L_8022F7B4
    if (ctx->r2 != 0) {
        // 0x8022F7C4: addiu       $v1, $v1, 0x8
        ctx->r3 = ADD32(ctx->r3, 0X8);
            goto L_8022F7B4;
    }
    // 0x8022F7C4: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x8022F7C8: sh          $zero, 0x19E($a0)
    MEM_H(0X19E, ctx->r4) = 0;
L_8022F7CC:
    // 0x8022F7CC: jr          $ra
    // 0x8022F7D0: nop

    TRACE_RETURN()
    return;
    // 0x8022F7D0: nop

;}
RECOMP_FUNC void func_8023A004_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023A004: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023A008: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023A00C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023A010: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023A014: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023A018: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8023A01C: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x8023A020: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x8023A024: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x8023A028: beq         $v0, $zero, L_8023A154
    if (ctx->r2 == 0) {
        // 0x8023A02C: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8023A154;
    }
    // 0x8023A02C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8023A030: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023A034: addu        $at, $at, $v0
    gpr jr_addend_8023A03C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023A038: lw          $v0, -0x9A8($at)
    ctx->r2 = ADD32(ctx->r1, -0X9A8);
    // 0x8023A03C: jr          $v0
    // 0x8023A040: nop

    switch (jr_addend_8023A03C >> 2) {
        case 0: goto L_8023A044; break;
        case 1: goto L_8023A080; break;
        case 2: goto L_8023A0AC; break;
        case 3: goto L_8023A0C4; break;
        case 4: goto L_8023A0F4; break;
        case 5: goto L_8023A11C; break;
        default: switch_error(__func__, 0x8023A03C, 0x8023F658);
    }
    // 0x8023A040: nop

L_8023A044:
    // 0x8023A044: jal         0x8023AC58
    // 0x8023A048: nop

    func_8023AC58_ovl3(rdram, ctx);
        goto after_0;
    // 0x8023A048: nop

    after_0:
    // 0x8023A04C: beq         $v0, $zero, L_8023A074
    if (ctx->r2 == 0) {
        // 0x8023A050: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8023A074;
    }
    // 0x8023A050: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8023A054: lbu         $v0, 0xBD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XBD);
    // 0x8023A058: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8023A05C: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    // 0x8023A060: jal         0x800616FC
    // 0x8023A064: sb          $v0, 0xBD($s1)
    MEM_B(0XBD, ctx->r17) = ctx->r2;
    func_800616FC_3CAFC(rdram, ctx);
        goto after_1;
    // 0x8023A064: sb          $v0, 0xBD($s1)
    MEM_B(0XBD, ctx->r17) = ctx->r2;
    after_1:
    // 0x8023A068: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8023A06C: j           L_8023A110
    // 0x8023A070: sw          $zero, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = 0;
        goto L_8023A110;
    // 0x8023A070: sw          $zero, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = 0;
L_8023A074:
    // 0x8023A074: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8023A078: j           L_8023A150
    // 0x8023A07C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8023A150;
    // 0x8023A07C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8023A080:
    // 0x8023A080: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8023A084: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8023A088: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8023A08C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8023A090: bne         $v0, $zero, L_8023A154
    if (ctx->r2 != 0) {
        // 0x8023A094: addiu       $a0, $zero, 0x101
        ctx->r4 = ADD32(0, 0X101);
            goto L_8023A154;
    }
    // 0x8023A094: addiu       $a0, $zero, 0x101
    ctx->r4 = ADD32(0, 0X101);
    // 0x8023A098: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8023A09C: jal         0x8002A2F8
    // 0x8023A0A0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_2;
    // 0x8023A0A0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x8023A0A4: j           L_8023A10C
    // 0x8023A0A8: nop

        goto L_8023A10C;
    // 0x8023A0A8: nop

L_8023A0AC:
    // 0x8023A0AC: jal         0x80036B58
    // 0x8023A0B0: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    func_80036B58_11F58(rdram, ctx);
        goto after_3;
    // 0x8023A0B0: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_3:
    // 0x8023A0B4: jal         0x80036E48
    // 0x8023A0B8: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_80036E48_12248(rdram, ctx);
        goto after_4;
    // 0x8023A0B8: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_4:
    // 0x8023A0BC: j           L_8023A10C
    // 0x8023A0C0: nop

        goto L_8023A10C;
    // 0x8023A0C0: nop

L_8023A0C4:
    // 0x8023A0C4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8023A0C8: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x8023A0CC: bne         $v0, $zero, L_8023A154
    if (ctx->r2 != 0) {
        // 0x8023A0D0: nop
    
            goto L_8023A154;
    }
    // 0x8023A0D0: nop

    // 0x8023A0D4: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8023A0D8: lbu         $v0, -0x7388($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7388);
    // 0x8023A0DC: bne         $v0, $zero, L_8023A154
    if (ctx->r2 != 0) {
        // 0x8023A0E0: nop
    
            goto L_8023A154;
    }
    // 0x8023A0E0: nop

    // 0x8023A0E4: jal         0x8004A268
    // 0x8023A0E8: nop

    func_8004A268_25668(rdram, ctx);
        goto after_5;
    // 0x8023A0E8: nop

    after_5:
    // 0x8023A0EC: j           L_8023A10C
    // 0x8023A0F0: nop

        goto L_8023A10C;
    // 0x8023A0F0: nop

L_8023A0F4:
    // 0x8023A0F4: jal         0x8006FF84
    // 0x8023A0F8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_6;
    // 0x8023A0F8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_6:
    // 0x8023A0FC: beq         $v0, $zero, L_8023A154
    if (ctx->r2 == 0) {
        // 0x8023A100: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8023A154;
    }
    // 0x8023A100: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023A104: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x8023A108: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
L_8023A10C:
    // 0x8023A10C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
L_8023A110:
    // 0x8023A110: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023A114: j           L_8023A154
    // 0x8023A118: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_8023A154;
    // 0x8023A118: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8023A11C:
    // 0x8023A11C: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x8023A120: addiu       $a0, $zero, 0x1B
    ctx->r4 = ADD32(0, 0X1B);
    // 0x8023A124: sb          $zero, 0x76($s1)
    MEM_B(0X76, ctx->r17) = 0;
    // 0x8023A128: sb          $zero, 0x449($s1)
    MEM_B(0X449, ctx->r17) = 0;
    // 0x8023A12C: sh          $zero, 0x44($s1)
    MEM_H(0X44, ctx->r17) = 0;
    // 0x8023A130: sh          $zero, 0x46($s1)
    MEM_H(0X46, ctx->r17) = 0;
    // 0x8023A134: sh          $zero, 0x48($s1)
    MEM_H(0X48, ctx->r17) = 0;
    // 0x8023A138: andi        $v0, $v0, 0xFC
    ctx->r2 = ctx->r2 & 0XFC;
    // 0x8023A13C: jal         0x8006036C
    // 0x8023A140: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    func_8006036C_3B76C(rdram, ctx);
        goto after_7;
    // 0x8023A140: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    after_7:
    // 0x8023A144: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023A148: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8023A14C: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_8023A150:
    // 0x8023A150: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_8023A154:
    // 0x8023A154: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8023A158: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023A15C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023A160: jr          $ra
    // 0x8023A164: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023A164: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022A770_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A770: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022A774: sh          $v0, 0x15E($a0)
    MEM_H(0X15E, ctx->r4) = ctx->r2;
    // 0x8022A778: lbu         $v0, 0x43C($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X43C);
    // 0x8022A77C: lbu         $v1, 0xD($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XD);
    // 0x8022A780: lhu         $a1, 0x380($a0)
    ctx->r5 = MEM_HU(ctx->r4, 0X380);
    // 0x8022A784: lw          $a2, 0x450($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X450);
    // 0x8022A788: sh          $zero, 0x440($a0)
    MEM_H(0X440, ctx->r4) = 0;
    // 0x8022A78C: sh          $zero, 0x442($a0)
    MEM_H(0X442, ctx->r4) = 0;
    // 0x8022A790: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022A794: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022A798: andi        $a1, $a1, 0xBFFF
    ctx->r5 = ctx->r5 & 0XBFFF;
    // 0x8022A79C: sb          $v0, 0x43C($a0)
    MEM_B(0X43C, ctx->r4) = ctx->r2;
    // 0x8022A7A0: sb          $v1, 0xD($a0)
    MEM_B(0XD, ctx->r4) = ctx->r3;
    // 0x8022A7A4: sh          $a1, 0x380($a0)
    MEM_H(0X380, ctx->r4) = ctx->r5;
    // 0x8022A7A8: lbu         $v0, 0x0($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X0);
    // 0x8022A7AC: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022A7B0: sb          $v0, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r2;
    // 0x8022A7B4: jr          $ra
    // 0x8022A7B8: sh          $zero, 0x45E($a0)
    MEM_H(0X45E, ctx->r4) = 0;
    TRACE_RETURN()
    return;
    // 0x8022A7B8: sh          $zero, 0x45E($a0)
    MEM_H(0X45E, ctx->r4) = 0;
;}
RECOMP_FUNC void func_8023A468_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023A468: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8023A46C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8023A470: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023A474: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8023A478: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8023A47C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8023A480: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x8023A484: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x8023A488: sltiu       $v0, $v1, 0x9
    ctx->r2 = ctx->r3 < 0X9 ? 1 : 0;
    // 0x8023A48C: beq         $v0, $zero, L_8023A6F4
    if (ctx->r2 == 0) {
        // 0x8023A490: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8023A6F4;
    }
    // 0x8023A490: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8023A494: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023A498: addu        $at, $at, $v0
    gpr jr_addend_8023A4A0 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023A49C: lw          $v0, -0x970($at)
    ctx->r2 = ADD32(ctx->r1, -0X970);
    // 0x8023A4A0: jr          $v0
    // 0x8023A4A4: nop

    switch (jr_addend_8023A4A0 >> 2) {
        case 0: goto L_8023A4A8; break;
        case 1: goto L_8023A4C8; break;
        case 2: goto L_8023A4F8; break;
        case 3: goto L_8023A59C; break;
        case 4: goto L_8023A60C; break;
        case 5: goto L_8023A630; break;
        case 6: goto L_8023A670; break;
        case 7: goto L_8023A6B4; break;
        case 8: goto L_8023A6DC; break;
        default: switch_error(__func__, 0x8023A4A0, 0x8023F690);
    }
    // 0x8023A4A4: nop

L_8023A4A8:
    // 0x8023A4A8: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8023A4AC: lb          $v1, -0x3BC7($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC7);
    // 0x8023A4B0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023A4B4: bne         $v1, $v0, L_8023A6F4
    if (ctx->r3 != ctx->r2) {
        // 0x8023A4B8: nop
    
            goto L_8023A6F4;
    }
    // 0x8023A4B8: nop

    // 0x8023A4BC: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8023A4C0: j           L_8023A6D0
    // 0x8023A4C4: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
        goto L_8023A6D0;
    // 0x8023A4C4: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
L_8023A4C8:
    // 0x8023A4C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023A4CC: jal         0x8023A9BC
    // 0x8023A4D0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8023A9BC_ovl3(rdram, ctx);
        goto after_0;
    // 0x8023A4D0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x8023A4D4: beq         $v0, $zero, L_8023A6F4
    if (ctx->r2 == 0) {
        // 0x8023A4D8: nop
    
            goto L_8023A6F4;
    }
    // 0x8023A4D8: nop

    // 0x8023A4DC: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x8023A4E0: jal         0x800616FC
    // 0x8023A4E4: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_1;
    // 0x8023A4E4: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_1:
    // 0x8023A4E8: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x8023A4EC: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8023A4F0: j           L_8023A58C
    // 0x8023A4F4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8023A58C;
    // 0x8023A4F4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8023A4F8:
    // 0x8023A4F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023A4FC: jal         0x8023A9BC
    // 0x8023A500: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8023A9BC_ovl3(rdram, ctx);
        goto after_2;
    // 0x8023A500: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
    // 0x8023A504: beq         $v0, $zero, L_8023A6F4
    if (ctx->r2 == 0) {
        // 0x8023A508: lui         $v1, 0x80
        ctx->r3 = S32(0X80 << 16);
            goto L_8023A6F4;
    }
    // 0x8023A508: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
    // 0x8023A50C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8023A510: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8023A514: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8023A518: beq         $v0, $zero, L_8023A53C
    if (ctx->r2 == 0) {
        // 0x8023A51C: addiu       $a0, $zero, 0x4
        ctx->r4 = ADD32(0, 0X4);
            goto L_8023A53C;
    }
    // 0x8023A51C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x8023A520: jal         0x80061798
    // 0x8023A524: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_80061798_3CB98(rdram, ctx);
        goto after_3;
    // 0x8023A524: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_3:
    // 0x8023A528: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8023A52C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8023A530: jal         0x80036B00
    // 0x8023A534: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80036B00_11F00(rdram, ctx);
        goto after_4;
    // 0x8023A534: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
    // 0x8023A538: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
L_8023A53C:
    // 0x8023A53C: jal         0x800616FC
    // 0x8023A540: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_5;
    // 0x8023A540: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_5:
    // 0x8023A544: lui         $v0, 0x2C40
    ctx->r2 = S32(0X2C40 << 16);
    // 0x8023A548: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    // 0x8023A54C: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8023A550: lw          $a0, 0x1704($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1704);
    // 0x8023A554: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8023A558: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023A55C: addiu       $a3, $zero, 0x50
    ctx->r7 = ADD32(0, 0X50);
    // 0x8023A560: jal         0x8004A00C
    // 0x8023A564: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_8004A00C_2540C(rdram, ctx);
        goto after_6;
    // 0x8023A564: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_6:
    // 0x8023A568: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8023A56C: lw          $v1, 0x1704($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1704);
    // 0x8023A570: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023A574: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
    // 0x8023A578: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x8023A57C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8023A580: sw          $zero, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = 0;
    // 0x8023A584: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x8023A588: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8023A58C:
    // 0x8023A58C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8023A590: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x8023A594: j           L_8023A6F4
    // 0x8023A598: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
        goto L_8023A6F4;
    // 0x8023A598: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_8023A59C:
    // 0x8023A59C: jal         0x8023AC84
    // 0x8023A5A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8023AC84_ovl3(rdram, ctx);
        goto after_7;
    // 0x8023A5A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
    // 0x8023A5A4: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8023A5A8: lw          $v0, 0x1704($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1704);
    // 0x8023A5AC: lh          $v0, 0x6E($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X6E);
    // 0x8023A5B0: bgtz        $v0, L_8023A6F4
    if (SIGNED(ctx->r2) > 0) {
        // 0x8023A5B4: nop
    
            goto L_8023A6F4;
    }
    // 0x8023A5B4: nop

    // 0x8023A5B8: jal         0x8023AC58
    // 0x8023A5BC: nop

    func_8023AC58_ovl3(rdram, ctx);
        goto after_8;
    // 0x8023A5BC: nop

    after_8:
    // 0x8023A5C0: beq         $v0, $zero, L_8023A600
    if (ctx->r2 == 0) {
        // 0x8023A5C4: lui         $v1, 0x80
        ctx->r3 = S32(0X80 << 16);
            goto L_8023A600;
    }
    // 0x8023A5C4: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
    // 0x8023A5C8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8023A5CC: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8023A5D0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8023A5D4: beq         $v0, $zero, L_8023A5F4
    if (ctx->r2 == 0) {
        // 0x8023A5D8: nop
    
            goto L_8023A5F4;
    }
    // 0x8023A5D8: nop

    // 0x8023A5DC: jal         0x80061798
    // 0x8023A5E0: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_80061798_3CB98(rdram, ctx);
        goto after_9;
    // 0x8023A5E0: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_9:
    // 0x8023A5E4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8023A5E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8023A5EC: jal         0x80036B00
    // 0x8023A5F0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80036B00_11F00(rdram, ctx);
        goto after_10;
    // 0x8023A5F0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_10:
L_8023A5F4:
    // 0x8023A5F4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8023A5F8: j           L_8023A6D0
    // 0x8023A5FC: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
        goto L_8023A6D0;
    // 0x8023A5FC: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
L_8023A600:
    // 0x8023A600: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8023A604: j           L_8023A6F0
    // 0x8023A608: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8023A6F0;
    // 0x8023A608: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8023A60C:
    // 0x8023A60C: jal         0x8006FF84
    // 0x8023A610: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_11;
    // 0x8023A610: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_11:
    // 0x8023A614: beq         $v0, $zero, L_8023A6F4
    if (ctx->r2 == 0) {
        // 0x8023A618: nop
    
            goto L_8023A6F4;
    }
    // 0x8023A618: nop

    // 0x8023A61C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8023A620: jal         0x800616FC
    // 0x8023A624: addiu       $a1, $zero, 0x1F
    ctx->r5 = ADD32(0, 0X1F);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_12;
    // 0x8023A624: addiu       $a1, $zero, 0x1F
    ctx->r5 = ADD32(0, 0X1F);
    after_12:
    // 0x8023A628: j           L_8023A6CC
    // 0x8023A62C: nop

        goto L_8023A6CC;
    // 0x8023A62C: nop

L_8023A630:
    // 0x8023A630: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8023A634: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8023A638: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8023A63C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8023A640: bne         $v0, $zero, L_8023A6F4
    if (ctx->r2 != 0) {
        // 0x8023A644: nop
    
            goto L_8023A6F4;
    }
    // 0x8023A644: nop

    // 0x8023A648: jal         0x80036B58
    // 0x8023A64C: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    func_80036B58_11F58(rdram, ctx);
        goto after_13;
    // 0x8023A64C: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_13:
    // 0x8023A650: addiu       $a0, $zero, 0x101
    ctx->r4 = ADD32(0, 0X101);
    // 0x8023A654: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8023A658: jal         0x8002A2F8
    // 0x8023A65C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_14;
    // 0x8023A65C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_14:
    // 0x8023A660: jal         0x80036E48
    // 0x8023A664: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_80036E48_12248(rdram, ctx);
        goto after_15;
    // 0x8023A664: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_15:
    // 0x8023A668: j           L_8023A6CC
    // 0x8023A66C: nop

        goto L_8023A6CC;
    // 0x8023A66C: nop

L_8023A670:
    // 0x8023A670: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8023A674: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x8023A678: bne         $v0, $zero, L_8023A6F4
    if (ctx->r2 != 0) {
        // 0x8023A67C: nop
    
            goto L_8023A6F4;
    }
    // 0x8023A67C: nop

    // 0x8023A680: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8023A684: lbu         $v0, -0x7388($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7388);
    // 0x8023A688: bne         $v0, $zero, L_8023A6F4
    if (ctx->r2 != 0) {
        // 0x8023A68C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8023A6F4;
    }
    // 0x8023A68C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023A690: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8023A694: lw          $v1, 0x1704($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1704);
    // 0x8023A698: jal         0x8004A268
    // 0x8023A69C: sb          $v0, 0x8($v1)
    MEM_B(0X8, ctx->r3) = ctx->r2;
    func_8004A268_25668(rdram, ctx);
        goto after_16;
    // 0x8023A69C: sb          $v0, 0x8($v1)
    MEM_B(0X8, ctx->r3) = ctx->r2;
    after_16:
    // 0x8023A6A0: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8023A6A4: jal         0x8004A0DC
    // 0x8023A6A8: lw          $a0, 0x1704($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1704);
    func_8004A0DC_254DC(rdram, ctx);
        goto after_17;
    // 0x8023A6A8: lw          $a0, 0x1704($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1704);
    after_17:
    // 0x8023A6AC: j           L_8023A6CC
    // 0x8023A6B0: nop

        goto L_8023A6CC;
    // 0x8023A6B0: nop

L_8023A6B4:
    // 0x8023A6B4: jal         0x8006FF84
    // 0x8023A6B8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_18;
    // 0x8023A6B8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_18:
    // 0x8023A6BC: beq         $v0, $zero, L_8023A6F4
    if (ctx->r2 == 0) {
        // 0x8023A6C0: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8023A6F4;
    }
    // 0x8023A6C0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023A6C4: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x8023A6C8: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
L_8023A6CC:
    // 0x8023A6CC: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
L_8023A6D0:
    // 0x8023A6D0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023A6D4: j           L_8023A6F4
    // 0x8023A6D8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_8023A6F4;
    // 0x8023A6D8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8023A6DC:
    // 0x8023A6DC: jal         0x8006036C
    // 0x8023A6E0: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    func_8006036C_3B76C(rdram, ctx);
        goto after_19;
    // 0x8023A6E0: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    after_19:
    // 0x8023A6E4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023A6E8: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8023A6EC: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_8023A6F0:
    // 0x8023A6F0: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_8023A6F4:
    // 0x8023A6F4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8023A6F8: sltiu       $v0, $v0, 0x4
    ctx->r2 = ctx->r2 < 0X4 ? 1 : 0;
    // 0x8023A6FC: beq         $v0, $zero, L_8023A70C
    if (ctx->r2 == 0) {
        // 0x8023A700: nop
    
            goto L_8023A70C;
    }
    // 0x8023A700: nop

    // 0x8023A704: jal         0x8023AC38
    // 0x8023A708: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8023AC38_ovl3(rdram, ctx);
        goto after_20;
    // 0x8023A708: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_20:
L_8023A70C:
    // 0x8023A70C: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8023A710: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8023A714: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8023A718: jr          $ra
    // 0x8023A71C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8023A71C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8023A168_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023A168: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023A16C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023A170: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023A174: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023A178: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8023A17C: beq         $v1, $zero, L_8023A194
    if (ctx->r3 == 0) {
        // 0x8023A180: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023A194;
    }
    // 0x8023A180: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023A184: beq         $v1, $v0, L_8023A1CC
    if (ctx->r3 == ctx->r2) {
        // 0x8023A188: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023A1CC;
    }
    // 0x8023A188: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023A18C: j           L_8023A20C
    // 0x8023A190: nop

        goto L_8023A20C;
    // 0x8023A190: nop

L_8023A194:
    // 0x8023A194: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x8023A198: sltiu       $v0, $v1, 0x168
    ctx->r2 = ctx->r3 < 0X168 ? 1 : 0;
    // 0x8023A19C: beq         $v0, $zero, L_8023A1AC
    if (ctx->r2 == 0) {
        // 0x8023A1A0: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_8023A1AC;
    }
    // 0x8023A1A0: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8023A1A4: j           L_8023A20C
    // 0x8023A1A8: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
        goto L_8023A20C;
    // 0x8023A1A8: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
L_8023A1AC:
    // 0x8023A1AC: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x8023A1B0: jal         0x800616FC
    // 0x8023A1B4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_0;
    // 0x8023A1B4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_0:
    // 0x8023A1B8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8023A1BC: sw          $zero, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = 0;
    // 0x8023A1C0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023A1C4: j           L_8023A20C
    // 0x8023A1C8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_8023A20C;
    // 0x8023A1C8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8023A1CC:
    // 0x8023A1CC: jal         0x8023A9BC
    // 0x8023A1D0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8023A9BC_ovl3(rdram, ctx);
        goto after_1;
    // 0x8023A1D0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x8023A1D4: beq         $v0, $zero, L_8023A20C
    if (ctx->r2 == 0) {
        // 0x8023A1D8: nop
    
            goto L_8023A20C;
    }
    // 0x8023A1D8: nop

    // 0x8023A1DC: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8023A1E0: addiu       $v1, $v1, 0x4A6D
    ctx->r3 = ADD32(ctx->r3, 0X4A6D);
    // 0x8023A1E4: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8023A1E8: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    // 0x8023A1EC: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8023A1F0: lbu         $v1, 0xC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XC);
    // 0x8023A1F4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023A1F8: sw          $zero, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = 0;
    // 0x8023A1FC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8023A200: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8023A204: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8023A208: sb          $v1, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r3;
L_8023A20C:
    // 0x8023A20C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8023A210: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x8023A214: beq         $v0, $zero, L_8023A224
    if (ctx->r2 == 0) {
        // 0x8023A218: nop
    
            goto L_8023A224;
    }
    // 0x8023A218: nop

    // 0x8023A21C: jal         0x8023AC38
    // 0x8023A220: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8023AC38_ovl3(rdram, ctx);
        goto after_2;
    // 0x8023A220: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
L_8023A224:
    // 0x8023A224: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023A228: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023A22C: jr          $ra
    // 0x8023A230: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023A230: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022B854_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B854: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022B858: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B85C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B860: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022B864: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022B868: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022B86C: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x8022B870: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022B874: lhu         $a2, 0x368($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X368);
    // 0x8022B878: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8022B87C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022B880: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022B884: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8022B888: addiu       $v1, $v1, -0x2830
    ctx->r3 = ADD32(ctx->r3, -0X2830);
    // 0x8022B88C: jal         0x8022DCA4
    // 0x8022B890: addu        $s1, $v0, $v1
    ctx->r17 = ADD32(ctx->r2, ctx->r3);
    func_8022DCA4_ovl3(rdram, ctx);
        goto after_0;
    // 0x8022B890: addu        $s1, $v0, $v1
    ctx->r17 = ADD32(ctx->r2, ctx->r3);
    after_0:
    // 0x8022B894: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022B898: beq         $v0, $zero, L_8022B9A8
    if (ctx->r2 == 0) {
        // 0x8022B89C: addiu       $s2, $s0, 0x348
        ctx->r18 = ADD32(ctx->r16, 0X348);
            goto L_8022B9A8;
    }
    // 0x8022B89C: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x8022B8A0: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8022B8A4: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022B8A8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022B8AC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022B8B0: jal         0x8009A3B4
    // 0x8022B8B4: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022B8B4: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022B8B8: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8022B8BC: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022B8C0: jal         0x8009A3B4
    // 0x8022B8C4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022B8C4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_2:
    // 0x8022B8C8: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8022B8CC: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8022B8D0: jal         0x8009A3B4
    // 0x8022B8D4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8022B8D4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x8022B8D8: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x8022B8DC: addiu       $v1, $zero, 0x4210
    ctx->r3 = ADD32(0, 0X4210);
    // 0x8022B8E0: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022B8E4: beq         $v0, $zero, L_8022B8F4
    if (ctx->r2 == 0) {
        // 0x8022B8E8: sh          $v1, 0x15E($s0)
        MEM_H(0X15E, ctx->r16) = ctx->r3;
            goto L_8022B8F4;
    }
    // 0x8022B8E8: sh          $v1, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r3;
    // 0x8022B8EC: jal         0x8022DB0C
    // 0x8022B8F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022DB0C_ovl3(rdram, ctx);
        goto after_4;
    // 0x8022B8F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
L_8022B8F4:
    // 0x8022B8F4: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022B8F8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022B8FC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022B900: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022B904: lw          $v0, -0x22C8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X22C8);
    // 0x8022B908: jalr        $v0
    // 0x8022B90C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_5;
    // 0x8022B90C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x8022B910: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8022B914: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x8022B918: bne         $v0, $zero, L_8022B934
    if (ctx->r2 != 0) {
        // 0x8022B91C: nop
    
            goto L_8022B934;
    }
    // 0x8022B91C: nop

    // 0x8022B920: jal         0x8003E934
    // 0x8022B924: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_6;
    // 0x8022B924: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x8022B928: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022B92C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B930: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
L_8022B934:
    // 0x8022B934: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x8022B938: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022B93C: beq         $v0, $a1, L_8022B954
    if (ctx->r2 == ctx->r5) {
        // 0x8022B940: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022B954;
    }
    // 0x8022B940: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B944: jal         0x80050294
    // 0x8022B948: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_7;
    // 0x8022B948: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_7:
    // 0x8022B94C: j           L_8022B95C
    // 0x8022B950: nop

        goto L_8022B95C;
    // 0x8022B950: nop

L_8022B954:
    // 0x8022B954: jal         0x8005044C
    // 0x8022B958: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_8;
    // 0x8022B958: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
L_8022B95C:
    // 0x8022B95C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022B960: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022B964: beq         $v0, $zero, L_8022B980
    if (ctx->r2 == 0) {
        // 0x8022B968: nop
    
            goto L_8022B980;
    }
    // 0x8022B968: nop

    // 0x8022B96C: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x8022B970: lw          $a2, 0x4($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X4);
    // 0x8022B974: lw          $a3, 0x8($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X8);
    // 0x8022B978: jal         0x8003B564
    // 0x8022B97C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_9;
    // 0x8022B97C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
L_8022B980:
    // 0x8022B980: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x8022B984: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022B988: beq         $v0, $zero, L_8022B998
    if (ctx->r2 == 0) {
        // 0x8022B98C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022B998;
    }
    // 0x8022B98C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B990: j           L_8022B99C
    // 0x8022B994: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_8022B99C;
    // 0x8022B994: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_8022B998:
    // 0x8022B998: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
L_8022B99C:
    // 0x8022B99C: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x8022B9A0: jal         0x80047284
    // 0x8022B9A4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_10;
    // 0x8022B9A4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_10:
L_8022B9A8:
    // 0x8022B9A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022B9AC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022B9B0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022B9B4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B9B8: jr          $ra
    // 0x8022B9BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022B9BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80235AE0_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235AE0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80235AE4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80235AE8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80235AEC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80235AF0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80235AF4: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80235AF8: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x80235AFC: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80235B00: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80235B04: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x80235B08: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x80235B0C: bne         $v1, $v0, L_80235B24
    if (ctx->r3 != ctx->r2) {
        // 0x80235B10: addu        $s1, $a1, $zero
        ctx->r17 = ADD32(ctx->r5, 0);
            goto L_80235B24;
    }
    // 0x80235B10: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x80235B14: jal         0x8004D5FC
    // 0x80235B18: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8004D5FC_289FC(rdram, ctx);
        goto after_0;
    // 0x80235B18: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x80235B1C: j           L_80235B34
    // 0x80235B20: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
        goto L_80235B34;
    // 0x80235B20: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
L_80235B24:
    // 0x80235B24: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235B28: jal         0x8004D5D4
    // 0x80235B2C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8004D5D4_289D4(rdram, ctx);
        goto after_1;
    // 0x80235B2C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_1:
    // 0x80235B30: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
L_80235B34:
    // 0x80235B34: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x80235B38: sw          $v0, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r2;
    // 0x80235B3C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80235B40: addiu       $v0, $v0, -0x1828
    ctx->r2 = ADD32(ctx->r2, -0X1828);
    // 0x80235B44: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x80235B48: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80235B4C: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x80235B50: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x80235B54: sh          $zero, 0x0($s1)
    MEM_H(0X0, ctx->r17) = 0;
    // 0x80235B58: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x80235B5C: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
    // 0x80235B60: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80235B64: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x80235B68: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80235B6C: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x80235B70: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80235B74: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80235B78: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80235B7C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80235B80: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80235B84: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80235B88: jr          $ra
    // 0x80235B8C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80235B8C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022D738_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D738: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022D73C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D740: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022D744: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022D748: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022D74C: lh          $a3, 0x34E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X34E);
    // 0x8022D750: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022D754: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022D758: jal         0x8004F820
    // 0x8022D75C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022D75C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x8022D760: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022D764: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022D768: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022D76C: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022D770: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8022D774: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x8022D778: bne         $v0, $zero, L_8022D7B0
    if (ctx->r2 != 0) {
        // 0x8022D77C: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_8022D7B0;
    }
    // 0x8022D77C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022D780: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x8022D784: lbu         $v1, 0x34B($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34B);
    // 0x8022D788: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022D78C: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x8022D790: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x8022D794: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    // 0x8022D798: jal         0x8022DC08
    // 0x8022D79C: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
    func_8022DC08_ovl3(rdram, ctx);
        goto after_1;
    // 0x8022D79C: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
    after_1:
    // 0x8022D7A0: jal         0x80034E3C
    // 0x8022D7A4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80034E3C_1023C(rdram, ctx);
        goto after_2;
    // 0x8022D7A4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_2:
    // 0x8022D7A8: j           L_8022D7CC
    // 0x8022D7AC: nop

        goto L_8022D7CC;
    // 0x8022D7AC: nop

L_8022D7B0:
    // 0x8022D7B0: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022D7B4: lb          $v1, -0x3C18($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3C18);
    // 0x8022D7B8: bne         $v1, $v0, L_8022D7CC
    if (ctx->r3 != ctx->r2) {
        // 0x8022D7BC: nop
    
            goto L_8022D7CC;
    }
    // 0x8022D7BC: nop

    // 0x8022D7C0: lbu         $v0, 0x34B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X34B);
    // 0x8022D7C4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022D7C8: sb          $v0, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r2;
L_8022D7CC:
    // 0x8022D7CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022D7D0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D7D4: jr          $ra
    // 0x8022D7D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022D7D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228CC8_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228CC8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80228CCC: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80228CD0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80228CD4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80228CD8: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x80228CDC: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x80228CE0: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x80228CE4: beq         $a0, $zero, L_80228D74
    if (ctx->r4 == 0) {
        // 0x80228CE8: nop
    
            goto L_80228D74;
    }
    // 0x80228CE8: nop

    // 0x80228CEC: lh          $v0, 0x4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X4);
    // 0x80228CF0: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x80228CF4: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80228CF8: lh          $a0, 0x2($v1)
    ctx->r4 = MEM_H(ctx->r3, 0X2);
    // 0x80228CFC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80228D00: addiu       $v0, $zero, 0x3FFF
    ctx->r2 = ADD32(0, 0X3FFF);
    // 0x80228D04: beq         $a0, $v0, L_80228D20
    if (ctx->r4 == ctx->r2) {
        // 0x80228D08: addiu       $v0, $zero, 0x7FFF
        ctx->r2 = ADD32(0, 0X7FFF);
            goto L_80228D20;
    }
    // 0x80228D08: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x80228D0C: bne         $a0, $v0, L_80228D1C
    if (ctx->r4 != ctx->r2) {
        // 0x80228D10: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_80228D1C;
    }
    // 0x80228D10: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x80228D14: j           L_80228D20
    // 0x80228D18: sh          $zero, 0x4($s0)
    MEM_H(0X4, ctx->r16) = 0;
        goto L_80228D20;
    // 0x80228D18: sh          $zero, 0x4($s0)
    MEM_H(0X4, ctx->r16) = 0;
L_80228D1C:
    // 0x80228D1C: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
L_80228D20:
    // 0x80228D20: lh          $v0, 0x4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X4);
    // 0x80228D24: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x80228D28: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80228D2C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80228D30: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x80228D34: lh          $v1, 0x2($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2);
    // 0x80228D38: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
    // 0x80228D3C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228D40: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80228D44: beq         $a0, $v1, L_80228D6C
    if (ctx->r4 == ctx->r3) {
        // 0x80228D48: addiu       $a1, $zero, 0x2A
        ctx->r5 = ADD32(0, 0X2A);
            goto L_80228D6C;
    }
    // 0x80228D48: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x80228D4C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x80228D50: jal         0x8003B85C
    // 0x80228D54: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_0;
    // 0x80228D54: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_0:
    // 0x80228D58: lw          $a0, 0x88($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X88);
    // 0x80228D5C: lui         $a1, 0x11
    ctx->r5 = S32(0X11 << 16);
    // 0x80228D60: ori         $a1, $a1, 0x10
    ctx->r5 = ctx->r5 | 0X10;
    // 0x80228D64: jal         0x8003B840
    // 0x80228D68: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_1;
    // 0x80228D68: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_1:
L_80228D6C:
    // 0x80228D6C: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x80228D70: sh          $v0, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r2;
L_80228D74:
    // 0x80228D74: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x80228D78: beq         $a0, $zero, L_80228E08
    if (ctx->r4 == 0) {
        // 0x80228D7C: nop
    
            goto L_80228E08;
    }
    // 0x80228D7C: nop

    // 0x80228D80: lh          $v0, 0xA($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XA);
    // 0x80228D84: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x80228D88: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80228D8C: lh          $a0, 0x2($v1)
    ctx->r4 = MEM_H(ctx->r3, 0X2);
    // 0x80228D90: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80228D94: addiu       $v0, $zero, 0x3FFF
    ctx->r2 = ADD32(0, 0X3FFF);
    // 0x80228D98: beq         $a0, $v0, L_80228DB4
    if (ctx->r4 == ctx->r2) {
        // 0x80228D9C: addiu       $v0, $zero, 0x7FFF
        ctx->r2 = ADD32(0, 0X7FFF);
            goto L_80228DB4;
    }
    // 0x80228D9C: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x80228DA0: bne         $a0, $v0, L_80228DB0
    if (ctx->r4 != ctx->r2) {
        // 0x80228DA4: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_80228DB0;
    }
    // 0x80228DA4: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x80228DA8: j           L_80228DB4
    // 0x80228DAC: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
        goto L_80228DB4;
    // 0x80228DAC: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_80228DB0:
    // 0x80228DB0: sh          $v0, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r2;
L_80228DB4:
    // 0x80228DB4: lh          $v0, 0xA($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XA);
    // 0x80228DB8: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x80228DBC: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80228DC0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80228DC4: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x80228DC8: lh          $v1, 0x8($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X8);
    // 0x80228DCC: sh          $v0, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r2;
    // 0x80228DD0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228DD4: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80228DD8: beq         $a0, $v1, L_80228E00
    if (ctx->r4 == ctx->r3) {
        // 0x80228DDC: addiu       $a1, $zero, 0x2A
        ctx->r5 = ADD32(0, 0X2A);
            goto L_80228E00;
    }
    // 0x80228DDC: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x80228DE0: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x80228DE4: jal         0x8003B85C
    // 0x80228DE8: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_2;
    // 0x80228DE8: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_2:
    // 0x80228DEC: lw          $a0, 0x88($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X88);
    // 0x80228DF0: lui         $a1, 0x13
    ctx->r5 = S32(0X13 << 16);
    // 0x80228DF4: ori         $a1, $a1, 0x12
    ctx->r5 = ctx->r5 | 0X12;
    // 0x80228DF8: jal         0x8003B840
    // 0x80228DFC: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_3;
    // 0x80228DFC: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_3:
L_80228E00:
    // 0x80228E00: lhu         $v0, 0x6($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6);
    // 0x80228E04: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
L_80228E08:
    // 0x80228E08: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x80228E0C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80228E10: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80228E14: jr          $ra
    // 0x80228E18: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80228E18: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80228E1C: nop

;}
RECOMP_FUNC void func_802366D8_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802366D8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802366DC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x802366E0: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x802366E4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802366E8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x802366EC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802366F0: lbu         $v0, 0xB($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XB);
    // 0x802366F4: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x802366F8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802366FC: sb          $v0, 0xB($s2)
    MEM_B(0XB, ctx->r18) = ctx->r2;
    // 0x80236700: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80236704: bne         $v0, $v1, L_802367F8
    if (ctx->r2 != ctx->r3) {
        // 0x80236708: nop
    
            goto L_802367F8;
    }
    // 0x80236708: nop

    // 0x8023670C: jal         0x8004F144
    // 0x80236710: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80236710: nop

    after_0:
    // 0x80236714: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80236718: beq         $s1, $zero, L_802367F8
    if (ctx->r17 == 0) {
        // 0x8023671C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802367F8;
    }
    // 0x8023671C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80236720: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x80236724: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    // 0x80236728: lbu         $v0, 0x6($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X6);
    // 0x8023672C: sb          $zero, 0xC($s1)
    MEM_B(0XC, ctx->r17) = 0;
    // 0x80236730: jal         0x800A3450
    // 0x80236734: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x80236734: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
    after_1:
    // 0x80236738: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x8023673C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80236740: addiu       $v0, $v0, 0x40
    ctx->r2 = ADD32(ctx->r2, 0X40);
    // 0x80236744: jal         0x800A3450
    // 0x80236748: sb          $v0, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x80236748: sb          $v0, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r2;
    after_2:
    // 0x8023674C: lhu         $v1, 0x1C($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X1C);
    // 0x80236750: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80236754: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80236758: sh          $v1, 0x1C($s1)
    MEM_H(0X1C, ctx->r17) = ctx->r3;
    // 0x8023675C: lhu         $v0, 0x1E($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X1E);
    // 0x80236760: jal         0x800A3450
    // 0x80236764: sh          $v0, 0x1E($s1)
    MEM_H(0X1E, ctx->r17) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x80236764: sh          $v0, 0x1E($s1)
    MEM_H(0X1E, ctx->r17) = ctx->r2;
    after_3:
    // 0x80236768: lhu         $v1, 0x20($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X20);
    // 0x8023676C: lui         $a0, 0x3D48
    ctx->r4 = S32(0X3D48 << 16);
    // 0x80236770: ori         $a0, $a0, 0x4E
    ctx->r4 = ctx->r4 | 0X4E;
    // 0x80236774: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80236778: sw          $a0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r4;
    // 0x8023677C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80236780: jal         0x800A3450
    // 0x80236784: sh          $v1, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_4;
    // 0x80236784: sh          $v1, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r3;
    after_4:
    // 0x80236788: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8023678C: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x80236790: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
    // 0x80236794: sb          $v0, 0x22($s1)
    MEM_B(0X22, ctx->r17) = ctx->r2;
    // 0x80236798: sb          $zero, 0x23($s1)
    MEM_B(0X23, ctx->r17) = 0;
    // 0x8023679C: lbu         $v0, 0xE($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XE);
    // 0x802367A0: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x802367A4: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x802367A8: sh          $v0, 0x24($s1)
    MEM_H(0X24, ctx->r17) = ctx->r2;
    // 0x802367AC: lbu         $v0, 0xF($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XF);
    // 0x802367B0: sb          $v0, 0xF($s1)
    MEM_B(0XF, ctx->r17) = ctx->r2;
    // 0x802367B4: lw          $v0, 0x28($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X28);
    // 0x802367B8: sw          $s2, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r18;
    // 0x802367BC: sw          $v0, 0x28($s1)
    MEM_W(0X28, ctx->r17) = ctx->r2;
    // 0x802367C0: lhu         $v0, 0x26($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X26);
    // 0x802367C4: blez        $v0, L_802367E8
    if (SIGNED(ctx->r2) <= 0) {
        // 0x802367C8: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_802367E8;
    }
    // 0x802367C8: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_802367CC:
    // 0x802367CC: jal         0x80236600
    // 0x802367D0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80236600_ovl3(rdram, ctx);
        goto after_5;
    // 0x802367D0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_5:
    // 0x802367D4: lhu         $v0, 0x26($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X26);
    // 0x802367D8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x802367DC: slt         $v0, $s0, $v0
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x802367E0: bne         $v0, $zero, L_802367CC
    if (ctx->r2 != 0) {
        // 0x802367E4: nop
    
            goto L_802367CC;
    }
    // 0x802367E4: nop

L_802367E8:
    // 0x802367E8: jal         0x800A3450
    // 0x802367EC: sh          $zero, 0x26($s2)
    MEM_H(0X26, ctx->r18) = 0;
    func_800A3450_7E850(rdram, ctx);
        goto after_6;
    // 0x802367EC: sh          $zero, 0x26($s2)
    MEM_H(0X26, ctx->r18) = 0;
    after_6:
    // 0x802367F0: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x802367F4: sb          $v0, 0xB($s2)
    MEM_B(0XB, ctx->r18) = ctx->r2;
L_802367F8:
    // 0x802367F8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802367FC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80236800: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80236804: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80236808: jr          $ra
    // 0x8023680C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8023680C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80230A9C_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230A9C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80230AA0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80230AA4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80230AA8: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80230AAC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80230AB0: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x80230AB4: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80230AB8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80230ABC: jal         0x8009A3B4
    // 0x80230AC0: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80230AC0: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    after_0:
    // 0x80230AC4: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80230AC8: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80230ACC: jal         0x8009A3B4
    // 0x80230AD0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80230AD0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80230AD4: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80230AD8: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80230ADC: jal         0x8009A3B4
    // 0x80230AE0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80230AE0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80230AE4: jal         0x800A3450
    // 0x80230AE8: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x80230AE8: nop

    after_3:
    // 0x80230AEC: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80230AF0: sh          $v0, 0x34A($s0)
    MEM_H(0X34A, ctx->r16) = ctx->r2;
    // 0x80230AF4: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80230AF8: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80230AFC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80230B00: lw          $v0, -0x1FE4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1FE4);
    // 0x80230B04: jalr        $v0
    // 0x80230B08: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x80230B08: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80230B0C: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x80230B10: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80230B14: beq         $v0, $zero, L_80230B30
    if (ctx->r2 == 0) {
        // 0x80230B18: nop
    
            goto L_80230B30;
    }
    // 0x80230B18: nop

    // 0x80230B1C: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x80230B20: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80230B24: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x80230B28: andi        $v0, $v0, 0xFFFE
    ctx->r2 = ctx->r2 & 0XFFFE;
    // 0x80230B2C: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
L_80230B30:
    // 0x80230B30: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x80230B34: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x80230B38: beq         $v0, $a1, L_80230B50
    if (ctx->r2 == ctx->r5) {
        // 0x80230B3C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80230B50;
    }
    // 0x80230B3C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230B40: jal         0x80050294
    // 0x80230B44: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_5;
    // 0x80230B44: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
    // 0x80230B48: j           L_80230B58
    // 0x80230B4C: nop

        goto L_80230B58;
    // 0x80230B4C: nop

L_80230B50:
    // 0x80230B50: jal         0x8005044C
    // 0x80230B54: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_6;
    // 0x80230B54: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
L_80230B58:
    // 0x80230B58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80230B5C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80230B60: jr          $ra
    // 0x80230B64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80230B64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
