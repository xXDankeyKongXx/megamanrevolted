#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8022ADF0_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022ADF0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8022ADF4: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8022ADF8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022ADFC: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8022AE00: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x8022AE04: addiu       $s2, $s0, 0x14
    ctx->r18 = ADD32(ctx->r16, 0X14);
    // 0x8022AE08: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022AE0C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022AE10: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8022AE14: jal         0x8009A3B4
    // 0x8022AE18: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022AE18: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    after_0:
    // 0x8022AE1C: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8022AE20: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022AE24: jal         0x8009A3B4
    // 0x8022AE28: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022AE28: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022AE2C: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8022AE30: addiu       $a1, $s0, 0x320
    ctx->r5 = ADD32(ctx->r16, 0X320);
    // 0x8022AE34: jal         0x8009A3B4
    // 0x8022AE38: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022AE38: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022AE3C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022AE40: addiu       $v1, $zero, 0x4210
    ctx->r3 = ADD32(0, 0X4210);
    // 0x8022AE44: sh          $v1, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r3;
    // 0x8022AE48: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022AE4C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022AE50: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022AE54: lw          $v0, -0x1950($at)
    ctx->r2 = MEM_W(ctx->r1, -0X1950);
    // 0x8022AE58: jalr        $v0
    // 0x8022AE5C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x8022AE5C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022AE60: addiu       $a0, $s0, 0x310
    ctx->r4 = ADD32(ctx->r16, 0X310);
    // 0x8022AE64: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x8022AE68: addiu       $a1, $a1, -0x3D98
    ctx->r5 = ADD32(ctx->r5, -0X3D98);
    // 0x8022AE6C: jal         0x8003BD00
    // 0x8022AE70: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_8003BD00_17100(rdram, ctx);
        goto after_4;
    // 0x8022AE70: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x8022AE74: jal         0x80051248
    // 0x8022AE78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80051248_2C648(rdram, ctx);
        goto after_5;
    // 0x8022AE78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x8022AE7C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022AE80: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022AE84: beq         $v0, $zero, L_8022AEA0
    if (ctx->r2 == 0) {
        // 0x8022AE88: addiu       $s1, $s0, 0x308
        ctx->r17 = ADD32(ctx->r16, 0X308);
            goto L_8022AEA0;
    }
    // 0x8022AE88: addiu       $s1, $s0, 0x308
    ctx->r17 = ADD32(ctx->r16, 0X308);
    // 0x8022AE8C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022AE90: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x8022AE94: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8022AE98: jal         0x8003B564
    // 0x8022AE9C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_6;
    // 0x8022AE9C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_6:
L_8022AEA0:
    // 0x8022AEA0: lbu         $v0, 0x36A($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X36A);
    // 0x8022AEA4: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x8022AEA8: beql        $v0, $zero, L_8022AF3C
    if (ctx->r2 == 0) {
        // 0x8022AEAC: sw          $zero, 0x28($s1)
        MEM_W(0X28, ctx->r17) = 0;
            goto L_8022AF3C;
    }
    goto skip_0;
    // 0x8022AEAC: sw          $zero, 0x28($s1)
    MEM_W(0X28, ctx->r17) = 0;
    skip_0:
    // 0x8022AEB0: lw          $v1, 0x5C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X5C);
    // 0x8022AEB4: lw          $v0, 0x320($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X320);
    // 0x8022AEB8: beql        $v1, $v0, L_8022AEEC
    if (ctx->r3 == ctx->r2) {
        // 0x8022AEBC: sb          $zero, 0x370($s0)
        MEM_B(0X370, ctx->r16) = 0;
            goto L_8022AEEC;
    }
    goto skip_1;
    // 0x8022AEBC: sb          $zero, 0x370($s0)
    MEM_B(0X370, ctx->r16) = 0;
    skip_1:
    // 0x8022AEC0: lb          $v0, 0x370($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X370);
    // 0x8022AEC4: bne         $v0, $zero, L_8022AEE4
    if (ctx->r2 != 0) {
        // 0x8022AEC8: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022AEE4;
    }
    // 0x8022AEC8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022AECC: addiu       $a0, $zero, 0x147
    ctx->r4 = ADD32(0, 0X147);
    // 0x8022AED0: jal         0x8002A33C
    // 0x8022AED4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_7;
    // 0x8022AED4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_7:
    // 0x8022AED8: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022AEDC: j           L_8022AEEC
    // 0x8022AEE0: sb          $v0, 0x370($s0)
    MEM_B(0X370, ctx->r16) = ctx->r2;
        goto L_8022AEEC;
    // 0x8022AEE0: sb          $v0, 0x370($s0)
    MEM_B(0X370, ctx->r16) = ctx->r2;
L_8022AEE4:
    // 0x8022AEE4: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022AEE8: sb          $v0, 0x370($s0)
    MEM_B(0X370, ctx->r16) = ctx->r2;
L_8022AEEC:
    // 0x8022AEEC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022AEF0: addiu       $a1, $s0, 0x190
    ctx->r5 = ADD32(ctx->r16, 0X190);
    // 0x8022AEF4: jal         0x8009A3B4
    // 0x8022AEF8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x8022AEF8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_8:
    // 0x8022AEFC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022AF00: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x8022AF04: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    // 0x8022AF08: addiu       $v0, $s1, 0x28
    ctx->r2 = ADD32(ctx->r17, 0X28);
    // 0x8022AF0C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022AF10: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022AF14: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x8022AF18: lhu         $v1, 0x5C($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X5C);
    // 0x8022AF1C: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x8022AF20: lui         $v0, 0x408
    ctx->r2 = S32(0X408 << 16);
    // 0x8022AF24: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8022AF28: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8022AF2C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8022AF30: jal         0x80051E18
    // 0x8022AF34: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_9;
    // 0x8022AF34: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_9:
    // 0x8022AF38: sw          $zero, 0x28($s1)
    MEM_W(0X28, ctx->r17) = 0;
L_8022AF3C:
    // 0x8022AF3C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8022AF40: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x8022AF44: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x8022AF48: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8022AF4C: jr          $ra
    // 0x8022AF50: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8022AF50: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8022BA10_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BA10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022BA14: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022BA18: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022BA1C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8022BA20: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022BA24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022BA28: jal         0x8009A3B4
    // 0x8022BA2C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022BA2C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8022BA30: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8022BA34: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022BA38: jal         0x8009A3B4
    // 0x8022BA3C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022BA3C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022BA40: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8022BA44: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8022BA48: jal         0x8009A3B4
    // 0x8022BA4C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022BA4C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022BA50: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022BA54: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022BA58: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022BA5C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022BA60: lw          $v0, -0x1918($at)
    ctx->r2 = MEM_W(ctx->r1, -0X1918);
    // 0x8022BA64: jalr        $v0
    // 0x8022BA68: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x8022BA68: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022BA6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022BA70: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022BA74: jr          $ra
    // 0x8022BA78: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022BA78: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022C9D0_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C9D0: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x8022C9D4: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x8022C9D8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8022C9DC: beq         $v1, $a0, L_8022CA64
    if (ctx->r3 == ctx->r4) {
        // 0x8022C9E0: addiu       $sp, $sp, -0x8
        ctx->r29 = ADD32(ctx->r29, -0X8);
            goto L_8022CA64;
    }
    // 0x8022C9E0: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8022C9E4: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022C9E8: beq         $v0, $zero, L_8022CA9C
    if (ctx->r2 == 0) {
        // 0x8022C9EC: nop
    
            goto L_8022CA9C;
    }
    // 0x8022C9EC: nop

    // 0x8022C9F0: bne         $v1, $zero, L_8022CA9C
    if (ctx->r3 != 0) {
        // 0x8022C9F4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022CA9C;
    }
    // 0x8022C9F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C9F8: lb          $v1, 0xC($a1)
    ctx->r3 = MEM_B(ctx->r5, 0XC);
    // 0x8022C9FC: beq         $v1, $a0, L_8022CA40
    if (ctx->r3 == ctx->r4) {
        // 0x8022CA00: sb          $v0, 0x9($a1)
        MEM_B(0X9, ctx->r5) = ctx->r2;
            goto L_8022CA40;
    }
    // 0x8022CA00: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x8022CA04: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022CA08: beql        $v0, $zero, L_8022CA20
    if (ctx->r2 == 0) {
        // 0x8022CA0C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022CA20;
    }
    goto skip_0;
    // 0x8022CA0C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022CA10: beq         $v1, $zero, L_8022CA30
    if (ctx->r3 == 0) {
        // 0x8022CA14: lui         $v0, 0x2E00
        ctx->r2 = S32(0X2E00 << 16);
            goto L_8022CA30;
    }
    // 0x8022CA14: lui         $v0, 0x2E00
    ctx->r2 = S32(0X2E00 << 16);
    // 0x8022CA18: j           L_8022CA64
    // 0x8022CA1C: nop

        goto L_8022CA64;
    // 0x8022CA1C: nop

L_8022CA20:
    // 0x8022CA20: beq         $v1, $v0, L_8022CA54
    if (ctx->r3 == ctx->r2) {
        // 0x8022CA24: lui         $v0, 0x2E00
        ctx->r2 = S32(0X2E00 << 16);
            goto L_8022CA54;
    }
    // 0x8022CA24: lui         $v0, 0x2E00
    ctx->r2 = S32(0X2E00 << 16);
    // 0x8022CA28: j           L_8022CA64
    // 0x8022CA2C: nop

        goto L_8022CA64;
    // 0x8022CA2C: nop

L_8022CA30:
    // 0x8022CA30: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
    // 0x8022CA34: sw          $v0, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r2;
    // 0x8022CA38: j           L_8022CA60
    // 0x8022CA3C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_8022CA60;
    // 0x8022CA3C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_8022CA40:
    // 0x8022CA40: lui         $v0, 0x2E00
    ctx->r2 = S32(0X2E00 << 16);
    // 0x8022CA44: ori         $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 | 0X8000;
    // 0x8022CA48: sw          $v0, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r2;
    // 0x8022CA4C: j           L_8022CA60
    // 0x8022CA50: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
        goto L_8022CA60;
    // 0x8022CA50: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
L_8022CA54:
    // 0x8022CA54: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x8022CA58: sw          $v0, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r2;
    // 0x8022CA5C: addiu       $v0, $zero, 0x808
    ctx->r2 = ADD32(0, 0X808);
L_8022CA60:
    // 0x8022CA60: sh          $v0, 0x26($a1)
    MEM_H(0X26, ctx->r5) = ctx->r2;
L_8022CA64:
    // 0x8022CA64: lh          $v0, 0x24($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X24);
    // 0x8022CA68: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8022CA6C: slti        $v0, $v0, 0x20
    ctx->r2 = SIGNED(ctx->r2) < 0X20 ? 1 : 0;
    // 0x8022CA70: bne         $v0, $zero, L_8022CA88
    if (ctx->r2 != 0) {
        // 0x8022CA74: addiu       $a0, $a0, 0x6
        ctx->r4 = ADD32(ctx->r4, 0X6);
            goto L_8022CA88;
    }
    // 0x8022CA74: addiu       $a0, $a0, 0x6
    ctx->r4 = ADD32(ctx->r4, 0X6);
    // 0x8022CA78: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022CA7C: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x8022CA80: j           L_8022CA9C
    // 0x8022CA84: sh          $zero, 0x24($a1)
    MEM_H(0X24, ctx->r5) = 0;
        goto L_8022CA9C;
    // 0x8022CA84: sh          $zero, 0x24($a1)
    MEM_H(0X24, ctx->r5) = 0;
L_8022CA88:
    // 0x8022CA88: lhu         $v0, 0x26($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X26);
    // 0x8022CA8C: lw          $v1, 0x18($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X18);
    // 0x8022CA90: sh          $a0, 0x24($a1)
    MEM_H(0X24, ctx->r5) = ctx->r4;
    // 0x8022CA94: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022CA98: sw          $v1, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r3;
L_8022CA9C:
    // 0x8022CA9C: jr          $ra
    // 0x8022CAA0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x8022CAA0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_802269A4_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802269A4: lb          $v0, 0xA7($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XA7);
    // 0x802269A8: bltzl       $v0, L_802269B0
    if (SIGNED(ctx->r2) < 0) {
        // 0x802269AC: sb          $zero, 0xA($a0)
        MEM_B(0XA, ctx->r4) = 0;
            goto L_802269B0;
    }
    goto skip_0;
    // 0x802269AC: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    skip_0:
L_802269B0:
    // 0x802269B0: jr          $ra
    // 0x802269B4: nop

    TRACE_RETURN()
    return;
    // 0x802269B4: nop

;}
RECOMP_FUNC void func_8022747C_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022747C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227480: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227484: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227488: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022748C: lh          $a0, 0x364($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X364);
    // 0x80227490: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x80227494: jal         0x8004FA7C
    // 0x80227498: lh          $a2, 0x350($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X350);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x80227498: lh          $a2, 0x350($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X350);
    after_0:
    // 0x8022749C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x802274A0: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x802274A4: bne         $v0, $zero, L_802274F0
    if (ctx->r2 != 0) {
        // 0x802274A8: nop
    
            goto L_802274F0;
    }
    // 0x802274A8: nop

    // 0x802274AC: lh          $v0, 0x35E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X35E);
    // 0x802274B0: beq         $v0, $zero, L_802274C4
    if (ctx->r2 == 0) {
        // 0x802274B4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802274C4;
    }
    // 0x802274B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802274B8: lhu         $v1, 0x35C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X35C);
    // 0x802274BC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x802274C0: sh          $v0, 0x35C($s0)
    MEM_H(0X35C, ctx->r16) = ctx->r2;
L_802274C4:
    // 0x802274C4: lhu         $a0, 0x362($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X362);
    // 0x802274C8: lhu         $v1, 0x366($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X366);
    // 0x802274CC: lhu         $a1, 0x360($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X360);
    // 0x802274D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802274D4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x802274D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802274DC: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x802274E0: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x802274E4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802274E8: sh          $v0, 0x362($s0)
    MEM_H(0X362, ctx->r16) = ctx->r2;
    // 0x802274EC: sh          $v1, 0x360($s0)
    MEM_H(0X360, ctx->r16) = ctx->r3;
L_802274F0:
    // 0x802274F0: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x802274F4: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x802274F8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x802274FC: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80227500: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227504: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227508: jr          $ra
    // 0x8022750C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022750C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022BE6C_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BE6C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022BE70: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022BE74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022BE78: jal         0x8004F144
    // 0x8022BE7C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x8022BE7C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x8022BE80: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8022BE84: beql        $a1, $zero, L_8022BEB8
    if (ctx->r5 == 0) {
        // 0x8022BE88: sb          $zero, 0x0($s0)
        MEM_B(0X0, ctx->r16) = 0;
            goto L_8022BEB8;
    }
    goto skip_0;
    // 0x8022BE88: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    skip_0:
    // 0x8022BE8C: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x8022BE90: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022BE94: beq         $v0, $zero, L_8022BEAC
    if (ctx->r2 == 0) {
        // 0x8022BE98: nop
    
            goto L_8022BEAC;
    }
    // 0x8022BE98: nop

    // 0x8022BE9C: jal         0x8022BED0
    // 0x8022BEA0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022BED0_ovl19(rdram, ctx);
        goto after_1;
    // 0x8022BEA0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022BEA4: j           L_8022BEB8
    // 0x8022BEA8: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
        goto L_8022BEB8;
    // 0x8022BEA8: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
L_8022BEAC:
    // 0x8022BEAC: jal         0x8022BF10
    // 0x8022BEB0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022BF10_ovl19(rdram, ctx);
        goto after_2;
    // 0x8022BEB0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022BEB4: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
L_8022BEB8:
    // 0x8022BEB8: jal         0x8004F4F8
    // 0x8022BEBC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_3;
    // 0x8022BEBC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022BEC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022BEC4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022BEC8: jr          $ra
    // 0x8022BECC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022BECC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226C50_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226C50: lhu         $v0, 0x350($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X350);
    // 0x80226C54: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80226C58: sh          $v0, 0x350($a0)
    MEM_H(0X350, ctx->r4) = ctx->r2;
    // 0x80226C5C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80226C60: bne         $v0, $zero, L_80226C6C
    if (ctx->r2 != 0) {
        // 0x80226C64: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80226C6C;
    }
    // 0x80226C64: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226C68: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_80226C6C:
    // 0x80226C6C: jr          $ra
    // 0x80226C70: nop

    TRACE_RETURN()
    return;
    // 0x80226C70: nop

;}
RECOMP_FUNC void func_8022761C_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022761C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80227620: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227624: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227628: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8022762C: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x80227630: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80227634: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80227638: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022763C: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x80227640: addiu       $v0, $zero, 0x2A
    ctx->r2 = ADD32(0, 0X2A);
    // 0x80227644: bne         $v1, $v0, L_80227660
    if (ctx->r3 != ctx->r2) {
        // 0x80227648: addiu       $s2, $s0, 0x348
        ctx->r18 = ADD32(ctx->r16, 0X348);
            goto L_80227660;
    }
    // 0x80227648: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x8022764C: lui         $s1, 0x8023
    ctx->r17 = S32(0X8023 << 16);
    // 0x80227650: addiu       $s1, $s1, -0x1A50
    ctx->r17 = ADD32(ctx->r17, -0X1A50);
    // 0x80227654: lui         $s3, 0x8023
    ctx->r19 = S32(0X8023 << 16);
    // 0x80227658: j           L_80227670
    // 0x8022765C: addiu       $s3, $s3, -0x1A30
    ctx->r19 = ADD32(ctx->r19, -0X1A30);
        goto L_80227670;
    // 0x8022765C: addiu       $s3, $s3, -0x1A30
    ctx->r19 = ADD32(ctx->r19, -0X1A30);
L_80227660:
    // 0x80227660: lui         $s1, 0x8023
    ctx->r17 = S32(0X8023 << 16);
    // 0x80227664: addiu       $s1, $s1, -0x1A60
    ctx->r17 = ADD32(ctx->r17, -0X1A60);
    // 0x80227668: lui         $s3, 0x8023
    ctx->r19 = S32(0X8023 << 16);
    // 0x8022766C: addiu       $s3, $s3, -0x1A40
    ctx->r19 = ADD32(ctx->r19, -0X1A40);
L_80227670:
    // 0x80227670: lui         $s4, 0x8023
    ctx->r20 = S32(0X8023 << 16);
    // 0x80227674: jal         0x800A3450
    // 0x80227678: addiu       $s4, $s4, -0x1A20
    ctx->r20 = ADD32(ctx->r20, -0X1A20);
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x80227678: addiu       $s4, $s4, -0x1A20
    ctx->r20 = ADD32(ctx->r20, -0X1A20);
    after_0:
    // 0x8022767C: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80227680: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x80227684: lbu         $s1, 0x0($v0)
    ctx->r17 = MEM_BU(ctx->r2, 0X0);
    // 0x80227688: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022768C: andi        $v1, $s1, 0xFF
    ctx->r3 = ctx->r17 & 0XFF;
    // 0x80227690: beq         $v1, $v0, L_8022771C
    if (ctx->r3 == ctx->r2) {
        // 0x80227694: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8022771C;
    }
    // 0x80227694: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80227698: beql        $v0, $zero, L_802276B0
    if (ctx->r2 == 0) {
        // 0x8022769C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802276B0;
    }
    goto skip_0;
    // 0x8022769C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x802276A0: beq         $v1, $zero, L_802276C0
    if (ctx->r3 == 0) {
        // 0x802276A4: nop
    
            goto L_802276C0;
    }
    // 0x802276A4: nop

    // 0x802276A8: j           L_802277AC
    // 0x802276AC: nop

        goto L_802277AC;
    // 0x802276AC: nop

L_802276B0:
    // 0x802276B0: beq         $v1, $v0, L_80227730
    if (ctx->r3 == ctx->r2) {
        // 0x802276B4: nop
    
            goto L_80227730;
    }
    // 0x802276B4: nop

    // 0x802276B8: j           L_802277AC
    // 0x802276BC: nop

        goto L_802277AC;
    // 0x802276BC: nop

L_802276C0:
    // 0x802276C0: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x802276C4: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x802276C8: bne         $v0, $zero, L_802276EC
    if (ctx->r2 != 0) {
        // 0x802276CC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802276EC;
    }
    // 0x802276CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802276D0: jal         0x800A3450
    // 0x802276D4: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x802276D4: nop

    after_1:
    // 0x802276D8: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x802276DC: addu        $v0, $s3, $v0
    ctx->r2 = ADD32(ctx->r19, ctx->r2);
    // 0x802276E0: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x802276E4: beq         $v0, $zero, L_802276F8
    if (ctx->r2 == 0) {
        // 0x802276E8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802276F8;
    }
    // 0x802276E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_802276EC:
    // 0x802276EC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802276F0: j           L_8022770C
    // 0x802276F4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_8022770C;
    // 0x802276F4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_802276F8:
    // 0x802276F8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x802276FC: jal         0x80228A88
    // 0x80227700: nop

    func_80228A88_ovl19(rdram, ctx);
        goto after_2;
    // 0x80227700: nop

    after_2:
    // 0x80227704: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227708: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_8022770C:
    // 0x8022770C: jal         0x80228AC8
    // 0x80227710: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80228AC8_ovl19(rdram, ctx);
        goto after_3;
    // 0x80227710: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_3:
    // 0x80227714: j           L_802277D0
    // 0x80227718: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
        goto L_802277D0;
    // 0x80227718: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
L_8022771C:
    // 0x8022771C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80227720: jal         0x80228A78
    // 0x80227724: nop

    func_80228A78_ovl19(rdram, ctx);
        goto after_4;
    // 0x80227724: nop

    after_4:
    // 0x80227728: j           L_802277D0
    // 0x8022772C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_802277D0;
    // 0x8022772C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_80227730:
    // 0x80227730: lhu         $v1, 0x14($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X14);
    // 0x80227734: lhu         $v0, 0xC($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0XC);
    // 0x80227738: lhu         $a2, 0x14($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X14);
    // 0x8022773C: lhu         $a1, 0x18($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X18);
    // 0x80227740: lhu         $a0, 0x16($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X16);
    // 0x80227744: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80227748: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x8022774C: sra         $a3, $a2, 17
    ctx->r7 = S32(SIGNED(ctx->r6) >> 17);
    // 0x80227750: lhu         $v0, 0x10($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X10);
    // 0x80227754: addu        $v1, $v1, $a3
    ctx->r3 = ADD32(ctx->r3, ctx->r7);
    // 0x80227758: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022775C: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x80227760: andi        $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 & 0XFFFF;
    // 0x80227764: slt         $v1, $v1, $a2
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x80227768: subu        $a1, $a1, $v0
    ctx->r5 = SUB32(ctx->r5, ctx->r2);
    // 0x8022776C: sra         $v0, $a0, 17
    ctx->r2 = S32(SIGNED(ctx->r4) >> 17);
    // 0x80227770: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x80227774: beq         $v1, $zero, L_802277A4
    if (ctx->r3 == 0) {
        // 0x80227778: sra         $a0, $a0, 16
        ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
            goto L_802277A4;
    }
    // 0x80227778: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8022777C: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x80227780: slt         $v0, $v0, $a0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80227784: beq         $v0, $zero, L_802277A4
    if (ctx->r2 == 0) {
        // 0x80227788: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802277A4;
    }
    // 0x80227788: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022778C: jal         0x80228AC8
    // 0x80227790: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80228AC8_ovl19(rdram, ctx);
        goto after_5;
    // 0x80227790: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x80227794: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80227798: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022779C: j           L_802277D0
    // 0x802277A0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_802277D0;
    // 0x802277A0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_802277A4:
    // 0x802277A4: j           L_802277D0
    // 0x802277A8: addiu       $s1, $zero, 0xFF
    ctx->r17 = ADD32(0, 0XFF);
        goto L_802277D0;
    // 0x802277A8: addiu       $s1, $zero, 0xFF
    ctx->r17 = ADD32(0, 0XFF);
L_802277AC:
    // 0x802277AC: jal         0x800A3450
    // 0x802277B0: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_6;
    // 0x802277B0: nop

    after_6:
    // 0x802277B4: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x802277B8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x802277BC: jal         0x80228A88
    // 0x802277C0: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    func_80228A88_ovl19(rdram, ctx);
        goto after_7;
    // 0x802277C0: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    after_7:
    // 0x802277C4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802277C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802277CC: sh          $v0, 0x1E($s2)
    MEM_H(0X1E, ctx->r18) = ctx->r2;
L_802277D0:
    // 0x802277D0: jal         0x800A3450
    // 0x802277D4: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_8;
    // 0x802277D4: nop

    after_8:
    // 0x802277D8: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x802277DC: addu        $v0, $s4, $v0
    ctx->r2 = ADD32(ctx->r20, ctx->r2);
    // 0x802277E0: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x802277E4: andi        $v1, $s1, 0xFF
    ctx->r3 = ctx->r17 & 0XFF;
    // 0x802277E8: sh          $v0, 0x8($s2)
    MEM_H(0X8, ctx->r18) = ctx->r2;
    // 0x802277EC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802277F0: beq         $v1, $v0, L_80227808
    if (ctx->r3 == ctx->r2) {
        // 0x802277F4: nop
    
            goto L_80227808;
    }
    // 0x802277F4: nop

    // 0x802277F8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802277FC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227800: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x80227804: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80227808:
    // 0x80227808: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8022780C: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x80227810: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80227814: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80227818: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022781C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227820: jr          $ra
    // 0x80227824: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80227824: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022BA7C_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BA7C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022BA80: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8022BA84: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022BA88: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8022BA8C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022BA90: lbu         $v1, 0xF($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XF);
    // 0x8022BA94: sh          $zero, 0x9A($s0)
    MEM_H(0X9A, ctx->r16) = 0;
    // 0x8022BA98: ori         $v0, $v0, 0x22
    ctx->r2 = ctx->r2 | 0X22;
    // 0x8022BA9C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8022BAA0: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x8022BAA4: bne         $v0, $zero, L_8022BAEC
    if (ctx->r2 != 0) {
        // 0x8022BAA8: andi        $v0, $v1, 0x8
        ctx->r2 = ctx->r3 & 0X8;
            goto L_8022BAEC;
    }
    // 0x8022BAA8: andi        $v0, $v1, 0x8
    ctx->r2 = ctx->r3 & 0X8;
    // 0x8022BAAC: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x8022BAB0: addiu       $v1, $zero, 0x40
    ctx->r3 = ADD32(0, 0X40);
    // 0x8022BAB4: sb          $v1, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r3;
    // 0x8022BAB8: addiu       $v1, $zero, 0x80
    ctx->r3 = ADD32(0, 0X80);
    // 0x8022BABC: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x8022BAC0: bne         $v0, $zero, L_8022BAD4
    if (ctx->r2 != 0) {
        // 0x8022BAC4: sb          $v1, 0x97($s0)
        MEM_B(0X97, ctx->r16) = ctx->r3;
            goto L_8022BAD4;
    }
    // 0x8022BAC4: sb          $v1, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r3;
    // 0x8022BAC8: lui         $v0, 0x2C80
    ctx->r2 = S32(0X2C80 << 16);
    // 0x8022BACC: j           L_8022BADC
    // 0x8022BAD0: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
        goto L_8022BADC;
    // 0x8022BAD0: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
L_8022BAD4:
    // 0x8022BAD4: lui         $v0, 0x2C60
    ctx->r2 = S32(0X2C60 << 16);
    // 0x8022BAD8: ori         $v0, $v0, 0x60C0
    ctx->r2 = ctx->r2 | 0X60C0;
L_8022BADC:
    // 0x8022BADC: sw          $v0, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->r2;
    // 0x8022BAE0: lui         $v0, 0x3D08
    ctx->r2 = S32(0X3D08 << 16);
    // 0x8022BAE4: j           L_8022BB3C
    // 0x8022BAE8: ori         $v0, $v0, 0xE
    ctx->r2 = ctx->r2 | 0XE;
        goto L_8022BB3C;
    // 0x8022BAE8: ori         $v0, $v0, 0xE
    ctx->r2 = ctx->r2 | 0XE;
L_8022BAEC:
    // 0x8022BAEC: bne         $v0, $zero, L_8022BB10
    if (ctx->r2 != 0) {
        // 0x8022BAF0: nop
    
            goto L_8022BB10;
    }
    // 0x8022BAF0: nop

    // 0x8022BAF4: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022BAF8: lbu         $v0, -0x1930($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X1930);
    // 0x8022BAFC: sb          $v0, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r2;
    // 0x8022BB00: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022BB04: lbu         $v0, -0x192F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X192F);
    // 0x8022BB08: j           L_8022BB28
    // 0x8022BB0C: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
        goto L_8022BB28;
    // 0x8022BB0C: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
L_8022BB10:
    // 0x8022BB10: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022BB14: lbu         $v0, -0x1924($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X1924);
    // 0x8022BB18: sb          $v0, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r2;
    // 0x8022BB1C: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022BB20: lbu         $v0, -0x1923($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X1923);
    // 0x8022BB24: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
L_8022BB28:
    // 0x8022BB28: lui         $v1, 0x2C80
    ctx->r3 = S32(0X2C80 << 16);
    // 0x8022BB2C: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x8022BB30: lui         $v0, 0x3D48
    ctx->r2 = S32(0X3D48 << 16);
    // 0x8022BB34: ori         $v0, $v0, 0xE
    ctx->r2 = ctx->r2 | 0XE;
    // 0x8022BB38: sw          $v1, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->r3;
L_8022BB3C:
    // 0x8022BB3C: sw          $v0, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->r2;
    // 0x8022BB40: lhu         $v1, 0x14($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X14);
    // 0x8022BB44: lhu         $a0, 0x16($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X16);
    // 0x8022BB48: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x8022BB4C: lhu         $a1, 0x18($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X18);
    // 0x8022BB50: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022BB54: sh          $v1, 0x90($s0)
    MEM_H(0X90, ctx->r16) = ctx->r3;
    // 0x8022BB58: sh          $a0, 0x92($s0)
    MEM_H(0X92, ctx->r16) = ctx->r4;
    // 0x8022BB5C: bne         $v0, $zero, L_8022BB88
    if (ctx->r2 != 0) {
        // 0x8022BB60: sh          $a1, 0x94($s0)
        MEM_H(0X94, ctx->r16) = ctx->r5;
            goto L_8022BB88;
    }
    // 0x8022BB60: sh          $a1, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r5;
    // 0x8022BB64: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x8022BB68: addiu       $v1, $zero, 0x20
    ctx->r3 = ADD32(0, 0X20);
    // 0x8022BB6C: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x8022BB70: bne         $v0, $zero, L_8022BB80
    if (ctx->r2 != 0) {
        // 0x8022BB74: sh          $v1, 0x98($s0)
        MEM_H(0X98, ctx->r16) = ctx->r3;
            goto L_8022BB80;
    }
    // 0x8022BB74: sh          $v1, 0x98($s0)
    MEM_H(0X98, ctx->r16) = ctx->r3;
    // 0x8022BB78: j           L_8022BB94
    // 0x8022BB7C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_8022BB94;
    // 0x8022BB7C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_8022BB80:
    // 0x8022BB80: j           L_8022BB94
    // 0x8022BB84: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
        goto L_8022BB94;
    // 0x8022BB84: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
L_8022BB88:
    // 0x8022BB88: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022BB8C: sh          $v0, 0x98($s0)
    MEM_H(0X98, ctx->r16) = ctx->r2;
    // 0x8022BB90: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_8022BB94:
    // 0x8022BB94: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x8022BB98: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x8022BB9C: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x8022BBA0: bne         $v0, $zero, L_8022BBAC
    if (ctx->r2 != 0) {
        // 0x8022BBA4: addiu       $v0, $zero, 0x4B
        ctx->r2 = ADD32(0, 0X4B);
            goto L_8022BBAC;
    }
    // 0x8022BBA4: addiu       $v0, $zero, 0x4B
    ctx->r2 = ADD32(0, 0X4B);
    // 0x8022BBA8: addiu       $v0, $zero, 0xF0
    ctx->r2 = ADD32(0, 0XF0);
L_8022BBAC:
    // 0x8022BBAC: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x8022BBB0: lhu         $a1, 0x98($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X98);
    // 0x8022BBB4: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x8022BBB8: addiu       $v0, $s0, 0xC0
    ctx->r2 = ADD32(ctx->r16, 0XC0);
    // 0x8022BBBC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022BBC0: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x8022BBC4: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x8022BBC8: sw          $zero, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = 0;
    // 0x8022BBCC: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022BBD0: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022BBD4: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x8022BBD8: lb          $v1, 0xE($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XE);
    // 0x8022BBDC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022BBE0: ori         $a3, $zero, 0xA000
    ctx->r7 = 0 | 0XA000;
    // 0x8022BBE4: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8022BBE8: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x8022BBEC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8022BBF0: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8022BBF4: jal         0x80051E18
    // 0x8022BBF8: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_0;
    // 0x8022BBF8: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_0:
    // 0x8022BBFC: jal         0x8003F754
    // 0x8022BC00: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003F754_1AB54(rdram, ctx);
        goto after_1;
    // 0x8022BC00: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022BC04: bne         $v0, $zero, L_8022BC14
    if (ctx->r2 != 0) {
        // 0x8022BC08: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022BC14;
    }
    // 0x8022BC08: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022BC0C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022BC10: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022BC14:
    // 0x8022BC14: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022BC18: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8022BC1C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8022BC20: jr          $ra
    // 0x8022BC24: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022BC24: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_802257E8_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802257E8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x802257EC: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x802257F0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802257F4: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x802257F8: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x802257FC: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x80225800: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x80225804: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x80225808: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022580C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80225810: jal         0x8009A3B4
    // 0x80225814: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80225814: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    after_0:
    // 0x80225818: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8022581C: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80225820: jal         0x8009A3B4
    // 0x80225824: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80225824: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80225828: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8022582C: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80225830: jal         0x8009A3B4
    // 0x80225834: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80225834: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80225838: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022583C: jal         0x800A3450
    // 0x80225840: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x80225840: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    after_3:
    // 0x80225844: lhu         $v1, 0x348($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X348);
    // 0x80225848: sh          $v0, 0x34A($s0)
    MEM_H(0X34A, ctx->r16) = ctx->r2;
    // 0x8022584C: addiu       $v0, $zero, 0x104
    ctx->r2 = ADD32(0, 0X104);
    // 0x80225850: andi        $v1, $v1, 0x104
    ctx->r3 = ctx->r3 & 0X104;
    // 0x80225854: bne         $v1, $v0, L_80225864
    if (ctx->r3 != ctx->r2) {
        // 0x80225858: addiu       $s2, $s0, 0x348
        ctx->r18 = ADD32(ctx->r16, 0X348);
            goto L_80225864;
    }
    // 0x80225858: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x8022585C: jal         0x802262A8
    // 0x80225860: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802262A8_ovl19(rdram, ctx);
        goto after_4;
    // 0x80225860: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
L_80225864:
    // 0x80225864: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80225868: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022586C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80225870: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80225874: lw          $v0, -0x2194($at)
    ctx->r2 = MEM_W(ctx->r1, -0X2194);
    // 0x80225878: jalr        $v0
    // 0x8022587C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_5;
    // 0x8022587C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80225880: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x80225884: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80225888: beq         $v0, $zero, L_802258C8
    if (ctx->r2 == 0) {
        // 0x8022588C: nop
    
            goto L_802258C8;
    }
    // 0x8022588C: nop

    // 0x80225890: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80225894: bltz        $v1, L_802258B8
    if (SIGNED(ctx->r3) < 0) {
        // 0x80225898: slti        $v0, $v1, 0x3
        ctx->r2 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
            goto L_802258B8;
    }
    // 0x80225898: slti        $v0, $v1, 0x3
    ctx->r2 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
    // 0x8022589C: bne         $v0, $zero, L_802258B4
    if (ctx->r2 != 0) {
        // 0x802258A0: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_802258B4;
    }
    // 0x802258A0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802258A4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802258A8: bnel        $v1, $v0, L_802258BC
    if (ctx->r3 != ctx->r2) {
        // 0x802258AC: sh          $zero, 0xA($s0)
        MEM_H(0XA, ctx->r16) = 0;
            goto L_802258BC;
    }
    goto skip_0;
    // 0x802258AC: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    skip_0:
    // 0x802258B0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_802258B4:
    // 0x802258B4: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_802258B8:
    // 0x802258B8: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_802258BC:
    // 0x802258BC: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x802258C0: andi        $v0, $v0, 0xFFFE
    ctx->r2 = ctx->r2 & 0XFFFE;
    // 0x802258C4: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
L_802258C8:
    // 0x802258C8: lhu         $v0, 0x36($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X36);
    // 0x802258CC: bne         $v0, $zero, L_802258FC
    if (ctx->r2 != 0) {
        // 0x802258D0: lui         $v0, 0x80
        ctx->r2 = S32(0X80 << 16);
            goto L_802258FC;
    }
    // 0x802258D0: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x802258D4: lw          $v1, 0x80($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X80);
    // 0x802258D8: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x802258DC: beq         $v0, $zero, L_802258FC
    if (ctx->r2 == 0) {
        // 0x802258E0: nop
    
            goto L_802258FC;
    }
    // 0x802258E0: nop

    // 0x802258E4: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x802258E8: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x802258EC: bne         $v0, $zero, L_802258FC
    if (ctx->r2 != 0) {
        // 0x802258F0: nop
    
            goto L_802258FC;
    }
    // 0x802258F0: nop

    // 0x802258F4: jal         0x8004F418
    // 0x802258F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_6;
    // 0x802258F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
L_802258FC:
    // 0x802258FC: lh          $v0, 0xA($s2)
    ctx->r2 = MEM_H(ctx->r18, 0XA);
    // 0x80225900: beq         $v0, $zero, L_80225910
    if (ctx->r2 == 0) {
        // 0x80225904: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80225910;
    }
    // 0x80225904: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80225908: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022590C: sh          $v0, 0xA($s2)
    MEM_H(0XA, ctx->r18) = ctx->r2;
L_80225910:
    // 0x80225910: lhu         $v0, 0x36($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X36);
    // 0x80225914: beq         $v0, $zero, L_80225920
    if (ctx->r2 == 0) {
        // 0x80225918: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_80225920;
    }
    // 0x80225918: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022591C: sh          $v0, 0x36($s2)
    MEM_H(0X36, ctx->r18) = ctx->r2;
L_80225920:
    // 0x80225920: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x80225924: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x80225928: beq         $v0, $a1, L_80225940
    if (ctx->r2 == ctx->r5) {
        // 0x8022592C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80225940;
    }
    // 0x8022592C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80225930: jal         0x80050294
    // 0x80225934: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_7;
    // 0x80225934: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_7:
    // 0x80225938: j           L_80225948
    // 0x8022593C: nop

        goto L_80225948;
    // 0x8022593C: nop

L_80225940:
    // 0x80225940: jal         0x8005044C
    // 0x80225944: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_8;
    // 0x80225944: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
L_80225948:
    // 0x80225948: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022594C: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80225950: beq         $v0, $zero, L_80225968
    if (ctx->r2 == 0) {
        // 0x80225954: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80225968;
    }
    // 0x80225954: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80225958: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x8022595C: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x80225960: jal         0x8003B564
    // 0x80225964: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_9;
    // 0x80225964: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_9:
L_80225968:
    // 0x80225968: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022596C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80225970: beq         $v0, $zero, L_802259E0
    if (ctx->r2 == 0) {
        // 0x80225974: nop
    
            goto L_802259E0;
    }
    // 0x80225974: nop

    // 0x80225978: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x8022597C: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80225980: beq         $v0, $zero, L_802259E0
    if (ctx->r2 == 0) {
        // 0x80225984: addiu       $s1, $s2, 0xC
        ctx->r17 = ADD32(ctx->r18, 0XC);
            goto L_802259E0;
    }
    // 0x80225984: addiu       $s1, $s2, 0xC
    ctx->r17 = ADD32(ctx->r18, 0XC);
    // 0x80225988: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022598C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80225990: jal         0x8009A3B4
    // 0x80225994: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_10;
    // 0x80225994: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_10:
    // 0x80225998: lhu         $v0, 0xE($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0XE);
    // 0x8022599C: addiu       $v0, $v0, -0x28
    ctx->r2 = ADD32(ctx->r2, -0X28);
    // 0x802259A0: sh          $v0, 0xE($s2)
    MEM_H(0XE, ctx->r18) = ctx->r2;
    // 0x802259A4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802259A8: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x802259AC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802259B0: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x802259B4: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x802259B8: addiu       $v0, $s2, 0x14
    ctx->r2 = ADD32(ctx->r18, 0X14);
    // 0x802259BC: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x802259C0: lui         $v0, 0x400
    ctx->r2 = S32(0X400 << 16);
    // 0x802259C4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x802259C8: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x802259CC: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x802259D0: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x802259D4: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x802259D8: jal         0x80051E18
    // 0x802259DC: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_11;
    // 0x802259DC: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_11:
L_802259E0:
    // 0x802259E0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x802259E4: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x802259E8: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x802259EC: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x802259F0: jr          $ra
    // 0x802259F4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x802259F4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80228874_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228874: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228878: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022887C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228880: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80228884: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80228888: lh          $a3, 0x34E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X34E);
    // 0x8022888C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80228890: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x80228894: jal         0x8004F820
    // 0x80228898: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x80228898: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x8022889C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x802288A0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802288A4: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x802288A8: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x802288AC: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x802288B0: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x802288B4: bne         $v0, $zero, L_802288D8
    if (ctx->r2 != 0) {
        // 0x802288B8: addiu       $v1, $zero, 0x9
        ctx->r3 = ADD32(0, 0X9);
            goto L_802288D8;
    }
    // 0x802288B8: addiu       $v1, $zero, 0x9
    ctx->r3 = ADD32(0, 0X9);
    // 0x802288BC: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x802288C0: lbu         $a0, 0x34B($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X34B);
    // 0x802288C4: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x802288C8: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x802288CC: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x802288D0: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    // 0x802288D4: sb          $a0, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r4;
L_802288D8:
    // 0x802288D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802288DC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802288E0: jr          $ra
    // 0x802288E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802288E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80229448_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229448: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x8022944C: beq         $a1, $zero, L_8022945C
    if (ctx->r5 == 0) {
        // 0x80229450: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_8022945C;
    }
    // 0x80229450: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80229454: j           L_80229460
    // 0x80229458: sb          $zero, 0x107($a0)
    MEM_B(0X107, ctx->r4) = 0;
        goto L_80229460;
    // 0x80229458: sb          $zero, 0x107($a0)
    MEM_B(0X107, ctx->r4) = 0;
L_8022945C:
    // 0x8022945C: sb          $v0, 0x107($a0)
    MEM_B(0X107, ctx->r4) = ctx->r2;
L_80229460:
    // 0x80229460: jr          $ra
    // 0x80229464: nop

    TRACE_RETURN()
    return;
    // 0x80229464: nop

;}
RECOMP_FUNC void func_8022C490_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C490: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8022C494: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x8022C498: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C49C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022C4A0: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x8022C4A4: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8022C4A8: jal         0x80071060
    // 0x8022C4AC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80071060_4C460(rdram, ctx);
        goto after_0;
    // 0x8022C4AC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x8022C4B0: lh          $v1, 0x14($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X14);
    // 0x8022C4B4: lhu         $a0, 0x2C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X2C);
    // 0x8022C4B8: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x8022C4BC: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x8022C4C0: sh          $v1, 0x30($sp)
    MEM_H(0X30, ctx->r29) = ctx->r3;
    // 0x8022C4C4: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x8022C4C8: lhu         $a0, 0x2E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X2E);
    // 0x8022C4CC: addu        $t0, $v0, $zero
    ctx->r8 = ADD32(ctx->r2, 0);
    // 0x8022C4D0: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x8022C4D4: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x8022C4D8: sh          $v1, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r3;
    // 0x8022C4DC: lh          $v0, 0x18($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X18);
    // 0x8022C4E0: lhu         $v1, 0x30($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X30);
    // 0x8022C4E4: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022C4E8: lb          $a0, 0x4B21($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X4B21);
    // 0x8022C4EC: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022C4F0: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022C4F4: bne         $a0, $zero, L_8022C500
    if (ctx->r4 != 0) {
        // 0x8022C4F8: sh          $v0, 0x34($sp)
        MEM_H(0X34, ctx->r29) = ctx->r2;
            goto L_8022C500;
    }
    // 0x8022C4F8: sh          $v0, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r2;
    // 0x8022C4FC: addiu       $t0, $zero, 0x1000
    ctx->r8 = ADD32(0, 0X1000);
L_8022C500:
    // 0x8022C500: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8022C504: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x8022C508: beq         $v0, $zero, L_8022C54C
    if (ctx->r2 == 0) {
        // 0x8022C50C: addiu       $a0, $sp, 0x30
        ctx->r4 = ADD32(ctx->r29, 0X30);
            goto L_8022C54C;
    }
    // 0x8022C50C: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x8022C510: lui         $t0, 0x800
    ctx->r8 = S32(0X800 << 16);
    // 0x8022C514: ori         $t0, $t0, 0x5
    ctx->r8 = ctx->r8 | 0X5;
    // 0x8022C518: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x8022C51C: addiu       $a2, $s0, 0x14
    ctx->r6 = ADD32(ctx->r16, 0X14);
    // 0x8022C520: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022C524: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8022C528: ori         $v0, $zero, 0xA000
    ctx->r2 = 0 | 0XA000;
    // 0x8022C52C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022C530: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x8022C534: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    // 0x8022C538: addiu       $v0, $s0, 0xC8
    ctx->r2 = ADD32(ctx->r16, 0XC8);
    // 0x8022C53C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8022C540: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022C544: j           L_8022C5A4
    // 0x8022C548: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
        goto L_8022C5A4;
    // 0x8022C548: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
L_8022C54C:
    // 0x8022C54C: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x8022C550: beq         $v0, $zero, L_8022C56C
    if (ctx->r2 == 0) {
        // 0x8022C554: addiu       $a1, $zero, 0x20
        ctx->r5 = ADD32(0, 0X20);
            goto L_8022C56C;
    }
    // 0x8022C554: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x8022C558: addiu       $a2, $s0, 0x14
    ctx->r6 = ADD32(ctx->r16, 0X14);
    // 0x8022C55C: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022C560: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8022C564: j           L_8022C580
    // 0x8022C568: addiu       $v0, $zero, 0x6000
    ctx->r2 = ADD32(0, 0X6000);
        goto L_8022C580;
    // 0x8022C568: addiu       $v0, $zero, 0x6000
    ctx->r2 = ADD32(0, 0X6000);
L_8022C56C:
    // 0x8022C56C: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x8022C570: addiu       $a2, $s0, 0x14
    ctx->r6 = ADD32(ctx->r16, 0X14);
    // 0x8022C574: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022C578: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8022C57C: addiu       $v0, $zero, 0x4000
    ctx->r2 = ADD32(0, 0X4000);
L_8022C580:
    // 0x8022C580: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022C584: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x8022C588: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    // 0x8022C58C: addiu       $v0, $s0, 0xC8
    ctx->r2 = ADD32(ctx->r16, 0XC8);
    // 0x8022C590: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8022C594: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x8022C598: or          $v0, $t0, $v0
    ctx->r2 = ctx->r8 | ctx->r2;
    // 0x8022C59C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8022C5A0: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
L_8022C5A4:
    // 0x8022C5A4: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x8022C5A8: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x8022C5AC: jal         0x80051F9C
    // 0x8022C5B0: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051F9C_2D39C(rdram, ctx);
        goto after_1;
    // 0x8022C5B0: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_1:
    // 0x8022C5B4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8022C5B8: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x8022C5BC: jr          $ra
    // 0x8022C5C0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8022C5C0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80228184_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228184: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228188: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022818C: lbu         $v0, 0x34B($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X34B);
    // 0x80228190: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80228194: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80228198: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022819C: lw          $v0, -0x19F4($at)
    ctx->r2 = MEM_W(ctx->r1, -0X19F4);
    // 0x802281A0: jalr        $v0
    // 0x802281A4: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802281A4: nop

    after_0:
    // 0x802281A8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802281AC: jr          $ra
    // 0x802281B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802281B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022C974_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C974: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022C978: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x8022C97C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022C980: lbu         $v0, 0xB($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XB);
    // 0x8022C984: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022C988: sb          $v0, 0xB($a1)
    MEM_B(0XB, ctx->r5) = ctx->r2;
    // 0x8022C98C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022C990: bne         $v0, $zero, L_8022C9A8
    if (ctx->r2 != 0) {
        // 0x8022C994: lui         $v0, 0xFFDF
        ctx->r2 = S32(0XFFDF << 16);
            goto L_8022C9A8;
    }
    // 0x8022C994: lui         $v0, 0xFFDF
    ctx->r2 = S32(0XFFDF << 16);
    // 0x8022C998: jal         0x8004F5C4
    // 0x8022C99C: nop

    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x8022C99C: nop

    after_0:
    // 0x8022C9A0: j           L_8022C9C4
    // 0x8022C9A4: nop

        goto L_8022C9C4;
    // 0x8022C9A4: nop

L_8022C9A8:
    // 0x8022C9A8: lw          $v1, 0x18($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X18);
    // 0x8022C9AC: lhu         $a0, 0x24($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X24);
    // 0x8022C9B0: ori         $v0, $v0, 0xDFE0
    ctx->r2 = ctx->r2 | 0XDFE0;
    // 0x8022C9B4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022C9B8: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8022C9BC: sw          $v1, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r3;
    // 0x8022C9C0: sh          $a0, 0x24($a1)
    MEM_H(0X24, ctx->r5) = ctx->r4;
L_8022C9C4:
    // 0x8022C9C4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022C9C8: jr          $ra
    // 0x8022C9CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022C9CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225630_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225630: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225634: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225638: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022563C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225640: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80225644: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80225648: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022564C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80225650: lw          $v0, -0x21A0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X21A0);
    // 0x80225654: jalr        $v0
    // 0x80225658: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80225658: nop

    after_0:
    // 0x8022565C: sw          $zero, 0x35C($s0)
    MEM_W(0X35C, ctx->r16) = 0;
    // 0x80225660: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225664: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225668: jr          $ra
    // 0x8022566C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022566C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226154_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226154: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80226158: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022615C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80226160: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80226164: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80226168: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022616C: lbu         $v1, 0xA($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA);
    // 0x80226170: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80226174: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x80226178: beq         $v1, $zero, L_80226194
    if (ctx->r3 == 0) {
        // 0x8022617C: addiu       $s2, $s1, 0x348
        ctx->r18 = ADD32(ctx->r17, 0X348);
            goto L_80226194;
    }
    // 0x8022617C: addiu       $s2, $s1, 0x348
    ctx->r18 = ADD32(ctx->r17, 0X348);
    // 0x80226180: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226184: beq         $v1, $v0, L_802261B8
    if (ctx->r3 == ctx->r2) {
        // 0x80226188: addiu       $a0, $a0, 0x14
        ctx->r4 = ADD32(ctx->r4, 0X14);
            goto L_802261B8;
    }
    // 0x80226188: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    // 0x8022618C: j           L_80226290
    // 0x80226190: nop

        goto L_80226290;
    // 0x80226190: nop

L_80226194:
    // 0x80226194: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226198: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x8022619C: addiu       $v0, $zero, 0xC0
    ctx->r2 = ADD32(0, 0XC0);
    // 0x802261A0: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
    // 0x802261A4: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    // 0x802261A8: sh          $v0, 0x66($s1)
    MEM_H(0X66, ctx->r17) = ctx->r2;
    // 0x802261AC: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x802261B0: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x802261B4: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
L_802261B8:
    // 0x802261B8: lh          $a2, 0x56($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X56);
    // 0x802261BC: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x802261C0: jal         0x8004F820
    // 0x802261C4: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x802261C4: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
    after_0:
    // 0x802261C8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802261CC: lh          $a1, 0x44($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X44);
    // 0x802261D0: lhu         $v1, 0x56($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X56);
    // 0x802261D4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802261D8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x802261DC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802261E0: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x802261E4: jal         0x8004DA90
    // 0x802261E8: sh          $v1, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r3;
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x802261E8: sh          $v1, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r3;
    after_1:
    // 0x802261EC: jal         0x80040F30
    // 0x802261F0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_2;
    // 0x802261F0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
    // 0x802261F4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802261F8: jal         0x8003E934
    // 0x802261FC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_3;
    // 0x802261FC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_3:
    // 0x80226200: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x80226204: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80226208: andi        $s0, $s0, 0xF00
    ctx->r16 = ctx->r16 & 0XF00;
    // 0x8022620C: bne         $s0, $zero, L_80226248
    if (ctx->r16 != 0) {
        // 0x80226210: sw          $v0, 0x20($s1)
        MEM_W(0X20, ctx->r17) = ctx->r2;
            goto L_80226248;
    }
    // 0x80226210: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
    // 0x80226214: lh          $a0, 0x16($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X16);
    // 0x80226218: lh          $v1, 0x2E($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X2E);
    // 0x8022621C: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
    // 0x80226220: bltz        $v0, L_80226238
    if (SIGNED(ctx->r2) < 0) {
        // 0x80226224: slti        $v0, $v0, 0x11
        ctx->r2 = SIGNED(ctx->r2) < 0X11 ? 1 : 0;
            goto L_80226238;
    }
    // 0x80226224: slti        $v0, $v0, 0x11
    ctx->r2 = SIGNED(ctx->r2) < 0X11 ? 1 : 0;
    // 0x80226228: beq         $v0, $zero, L_8022624C
    if (ctx->r2 == 0) {
        // 0x8022622C: addiu       $a0, $s1, 0x14
        ctx->r4 = ADD32(ctx->r17, 0X14);
            goto L_8022624C;
    }
    // 0x8022622C: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x80226230: j           L_80226278
    // 0x80226234: nop

        goto L_80226278;
    // 0x80226234: nop

L_80226238:
    // 0x80226238: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
    // 0x8022623C: slti        $v0, $v0, 0x11
    ctx->r2 = SIGNED(ctx->r2) < 0X11 ? 1 : 0;
    // 0x80226240: bne         $v0, $zero, L_80226278
    if (ctx->r2 != 0) {
        // 0x80226244: nop
    
            goto L_80226278;
    }
    // 0x80226244: nop

L_80226248:
    // 0x80226248: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
L_8022624C:
    // 0x8022624C: addiu       $a1, $s1, 0x2C
    ctx->r5 = ADD32(ctx->r17, 0X2C);
    // 0x80226250: jal         0x8009A3B4
    // 0x80226254: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x80226254: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x80226258: addiu       $a0, $s1, 0x1C
    ctx->r4 = ADD32(ctx->r17, 0X1C);
    // 0x8022625C: addiu       $a1, $s1, 0x34
    ctx->r5 = ADD32(ctx->r17, 0X34);
    // 0x80226260: jal         0x8009A3B4
    // 0x80226264: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x80226264: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_5:
    // 0x80226268: lhu         $v0, 0x56($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X56);
    // 0x8022626C: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x80226270: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80226274: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
L_80226278:
    // 0x80226278: lhu         $v0, 0x2($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X2);
    // 0x8022627C: andi        $v0, $v0, 0x1FF
    ctx->r2 = ctx->r2 & 0X1FF;
    // 0x80226280: bne         $v0, $zero, L_80226290
    if (ctx->r2 != 0) {
        // 0x80226284: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80226290;
    }
    // 0x80226284: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226288: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x8022628C: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
L_80226290:
    // 0x80226290: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80226294: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80226298: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022629C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802262A0: jr          $ra
    // 0x802262A4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802262A4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802269E8_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802269E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802269EC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802269F0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802269F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802269F8: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x802269FC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80226A00: sh          $zero, 0x35C($s0)
    MEM_H(0X35C, ctx->r16) = 0;
    // 0x80226A04: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80226A08: sh          $v0, 0x366($s0)
    MEM_H(0X366, ctx->r16) = ctx->r2;
    // 0x80226A0C: jal         0x80228AC8
    // 0x80226A10: sh          $v0, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = ctx->r2;
    func_80228AC8_ovl19(rdram, ctx);
        goto after_0;
    // 0x80226A10: sh          $v0, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = ctx->r2;
    after_0:
    // 0x80226A14: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80226A18: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80226A1C: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80226A20: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x80226A24: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80226A28: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x80226A2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226A30: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226A34: jr          $ra
    // 0x80226A38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226A38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022869C_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022869C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802286A0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802286A4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802286A8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802286AC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x802286B0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802286B4: lh          $a0, 0x34C($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X34C);
    // 0x802286B8: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x802286BC: jal         0x8004FA7C
    // 0x802286C0: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x802286C0: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    after_0:
    // 0x802286C4: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x802286C8: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x802286CC: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x802286D0: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x802286D4: beq         $v0, $zero, L_802286EC
    if (ctx->r2 == 0) {
        // 0x802286D8: nop
    
            goto L_802286EC;
    }
    // 0x802286D8: nop

    // 0x802286DC: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x802286E0: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x802286E4: beq         $v0, $zero, L_80228738
    if (ctx->r2 == 0) {
        // 0x802286E8: nop
    
            goto L_80228738;
    }
    // 0x802286E8: nop

L_802286EC:
    // 0x802286EC: jal         0x8003516C
    // 0x802286F0: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_1;
    // 0x802286F0: nop

    after_1:
    // 0x802286F4: bne         $v0, $zero, L_80228738
    if (ctx->r2 != 0) {
        // 0x802286F8: nop
    
            goto L_80228738;
    }
    // 0x802286F8: nop

    // 0x802286FC: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x80228700: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228704: sb          $zero, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = 0;
    // 0x80228708: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022870C: sb          $zero, 0x49BA($at)
    MEM_B(0X49BA, ctx->r1) = 0;
    // 0x80228710: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80228714: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    // 0x80228718: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x8022871C: lbu         $v1, 0xD($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XD);
    // 0x80228720: lbu         $a0, 0x34A($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X34A);
    // 0x80228724: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80228728: andi        $v1, $v1, 0x7
    ctx->r3 = ctx->r3 & 0X7;
    // 0x8022872C: sb          $a0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r4;
    // 0x80228730: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    // 0x80228734: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
L_80228738:
    // 0x80228738: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022873C: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x80228740: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80228744: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80228748: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022874C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80228750: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80228754: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228758: jr          $ra
    // 0x8022875C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022875C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80226F24_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226F24: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226F28: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226F2C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226F30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226F34: lhu         $v0, 0x350($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X350);
    // 0x80226F38: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80226F3C: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x80226F40: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80226F44: bne         $v0, $zero, L_80226FB0
    if (ctx->r2 != 0) {
        // 0x80226F48: addiu       $a1, $zero, 0x40
        ctx->r5 = ADD32(0, 0X40);
            goto L_80226FB0;
    }
    // 0x80226F48: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x80226F4C: jal         0x80228B14
    // 0x80226F50: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_80228B14_ovl19(rdram, ctx);
        goto after_0;
    // 0x80226F50: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_0:
    // 0x80226F54: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80226F58: beq         $v0, $zero, L_80226FAC
    if (ctx->r2 == 0) {
        // 0x80226F5C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80226FAC;
    }
    // 0x80226F5C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226F60: lh          $v0, 0x366($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X366);
    // 0x80226F64: lh          $v1, 0x35E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X35E);
    // 0x80226F68: addiu       $v0, $v0, -0x5
    ctx->r2 = ADD32(ctx->r2, -0X5);
    // 0x80226F6C: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80226F70: bne         $v1, $zero, L_80226F80
    if (ctx->r3 != 0) {
        // 0x80226F74: addiu       $v0, $zero, 0x3C
        ctx->r2 = ADD32(0, 0X3C);
            goto L_80226F80;
    }
    // 0x80226F74: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x80226F78: j           L_80226FB0
    // 0x80226F7C: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
        goto L_80226FB0;
    // 0x80226F7C: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
L_80226F80:
    // 0x80226F80: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80226F84: jal         0x80228A88
    // 0x80226F88: nop

    func_80228A88_ovl19(rdram, ctx);
        goto after_1;
    // 0x80226F88: nop

    after_1:
    // 0x80226F8C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80226F90: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80226F94: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80226F98: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80226F9C: addiu       $v1, $v1, 0x800
    ctx->r3 = ADD32(ctx->r3, 0X800);
    // 0x80226FA0: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80226FA4: j           L_80226FB0
    // 0x80226FA8: sh          $v1, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r3;
        goto L_80226FB0;
    // 0x80226FA8: sh          $v1, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r3;
L_80226FAC:
    // 0x80226FAC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80226FB0:
    // 0x80226FB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226FB4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226FB8: jr          $ra
    // 0x80226FBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226FBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228760_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228760: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228764: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80228768: lbu         $v0, 0x34B($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X34B);
    // 0x8022876C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80228770: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80228774: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80228778: lw          $v0, -0x19C8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X19C8);
    // 0x8022877C: jalr        $v0
    // 0x80228780: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80228780: nop

    after_0:
    // 0x80228784: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80228788: jr          $ra
    // 0x8022878C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022878C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802279C0_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802279C0: lhu         $v0, 0x350($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X350);
    // 0x802279C4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802279C8: sh          $v0, 0x350($a0)
    MEM_H(0X350, ctx->r4) = ctx->r2;
    // 0x802279CC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802279D0: bne         $v0, $zero, L_802279DC
    if (ctx->r2 != 0) {
        // 0x802279D4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802279DC;
    }
    // 0x802279D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802279D8: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_802279DC:
    // 0x802279DC: jr          $ra
    // 0x802279E0: nop

    TRACE_RETURN()
    return;
    // 0x802279E0: nop

;}
RECOMP_FUNC void func_80228B14_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228B14: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80228B18: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80228B1C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80228B20: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x80228B24: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80228B28: lh          $v0, 0x56($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X56);
    // 0x80228B2C: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    // 0x80228B30: sll         $a2, $a1, 20
    ctx->r6 = S32(ctx->r5 << 20);
    // 0x80228B34: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x80228B38: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x80228B3C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80228B40: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80228B44: jal         0x8004DC2C
    // 0x80228B48: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_8004DC2C_2902C(rdram, ctx);
        goto after_0;
    // 0x80228B48: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_0:
    // 0x80228B4C: lh          $a1, 0x18($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X18);
    // 0x80228B50: lhu         $a0, 0x14($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X14);
    // 0x80228B54: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80228B58: lhu         $v1, 0x49C4($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X49C4);
    // 0x80228B5C: lh          $a2, 0x20($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X20);
    // 0x80228B60: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    // 0x80228B64: subu        $a0, $a0, $v1
    ctx->r4 = SUB32(ctx->r4, ctx->r3);
    // 0x80228B68: lhu         $v1, 0x18($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X18);
    // 0x80228B6C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80228B70: lhu         $a1, 0x49C8($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X49C8);
    // 0x80228B74: addu        $a0, $s0, $a0
    ctx->r4 = ADD32(ctx->r16, ctx->r4);
    // 0x80228B78: andi        $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 & 0XFFFF;
    // 0x80228B7C: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x80228B80: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x80228B84: addu        $v1, $s0, $v1
    ctx->r3 = ADD32(ctx->r16, ctx->r3);
    // 0x80228B88: andi        $s0, $s0, 0xFFFF
    ctx->r16 = ctx->r16 & 0XFFFF;
    // 0x80228B8C: sll         $s0, $s0, 1
    ctx->r16 = S32(ctx->r16 << 1);
    // 0x80228B90: slt         $a0, $a0, $s0
    ctx->r4 = SIGNED(ctx->r4) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x80228B94: beq         $a0, $zero, L_80228BA4
    if (ctx->r4 == 0) {
        // 0x80228B98: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80228BA4;
    }
    // 0x80228B98: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80228B9C: andi        $v0, $v1, 0xFFFF
    ctx->r2 = ctx->r3 & 0XFFFF;
    // 0x80228BA0: slt         $v0, $v0, $s0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r16) ? 1 : 0;
L_80228BA4:
    // 0x80228BA4: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x80228BA8: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80228BAC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80228BB0: jr          $ra
    // 0x80228BB4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80228BB4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80228BB8: nop

    // 0x80228BBC: nop

;}
RECOMP_FUNC void func_80226A3C_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226A3C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80226A40: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80226A44: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80226A48: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80226A4C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80226A50: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80226A54: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226A58: lbu         $s0, 0xD($s1)
    ctx->r16 = MEM_BU(ctx->r17, 0XD);
    // 0x80226A5C: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80226A60: addiu       $v0, $v0, -0x1B48
    ctx->r2 = ADD32(ctx->r2, -0X1B48);
    // 0x80226A64: andi        $s0, $s0, 0x30
    ctx->r16 = ctx->r16 & 0X30;
    // 0x80226A68: jal         0x800A3450
    // 0x80226A6C: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x80226A6C: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    after_0:
    // 0x80226A70: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80226A74: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x80226A78: lbu         $s3, 0x0($s0)
    ctx->r19 = MEM_BU(ctx->r16, 0X0);
    // 0x80226A7C: lui         $s0, 0x8023
    ctx->r16 = S32(0X8023 << 16);
    // 0x80226A80: addiu       $s0, $s0, -0x1B08
    ctx->r16 = ADD32(ctx->r16, -0X1B08);
    // 0x80226A84: andi        $v1, $s3, 0xFF
    ctx->r3 = ctx->r19 & 0XFF;
    // 0x80226A88: beq         $v1, $zero, L_80226AA4
    if (ctx->r3 == 0) {
        // 0x80226A8C: addiu       $s2, $s1, 0x348
        ctx->r18 = ADD32(ctx->r17, 0X348);
            goto L_80226AA4;
    }
    // 0x80226A8C: addiu       $s2, $s1, 0x348
    ctx->r18 = ADD32(ctx->r17, 0X348);
    // 0x80226A90: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226A94: beq         $v1, $v0, L_80226AC4
    if (ctx->r3 == ctx->r2) {
        // 0x80226A98: nop
    
            goto L_80226AC4;
    }
    // 0x80226A98: nop

    // 0x80226A9C: j           L_80226AD8
    // 0x80226AA0: nop

        goto L_80226AD8;
    // 0x80226AA0: nop

L_80226AA4:
    // 0x80226AA4: jal         0x80228A88
    // 0x80226AA8: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    func_80228A88_ovl19(rdram, ctx);
        goto after_1;
    // 0x80226AA8: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    after_1:
    // 0x80226AAC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80226AB0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80226AB4: jal         0x80228AC8
    // 0x80226AB8: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    func_80228AC8_ovl19(rdram, ctx);
        goto after_2;
    // 0x80226AB8: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    after_2:
    // 0x80226ABC: j           L_80226B30
    // 0x80226AC0: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
        goto L_80226B30;
    // 0x80226AC0: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
L_80226AC4:
    // 0x80226AC4: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    // 0x80226AC8: jal         0x80228A78
    // 0x80226ACC: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    func_80228A78_ovl19(rdram, ctx);
        goto after_3;
    // 0x80226ACC: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    after_3:
    // 0x80226AD0: j           L_80226B30
    // 0x80226AD4: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
        goto L_80226B30;
    // 0x80226AD4: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
L_80226AD8:
    // 0x80226AD8: lh          $v1, 0x16($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X16);
    // 0x80226ADC: lh          $v0, 0x1E($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X1E);
    // 0x80226AE0: bne         $v1, $v0, L_80226AF0
    if (ctx->r3 != ctx->r2) {
        // 0x80226AE4: nop
    
            goto L_80226AF0;
    }
    // 0x80226AE4: nop

    // 0x80226AE8: j           L_80226B30
    // 0x80226AEC: addiu       $s3, $zero, 0xFF
    ctx->r19 = ADD32(0, 0XFF);
        goto L_80226B30;
    // 0x80226AEC: addiu       $s3, $zero, 0xFF
    ctx->r19 = ADD32(0, 0XFF);
L_80226AF0:
    // 0x80226AF0: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    // 0x80226AF4: jal         0x80228A88
    // 0x80226AF8: nop

    func_80228A88_ovl19(rdram, ctx);
        goto after_4;
    // 0x80226AF8: nop

    after_4:
    // 0x80226AFC: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x80226B00: lh          $v0, 0x14($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X14);
    // 0x80226B04: beq         $v0, $zero, L_80226B18
    if (ctx->r2 == 0) {
        // 0x80226B08: nop
    
            goto L_80226B18;
    }
    // 0x80226B08: nop

    // 0x80226B0C: lhu         $v0, 0xA($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0XA);
    // 0x80226B10: j           L_80226B28
    // 0x80226B14: sh          $v0, 0x64($s1)
    MEM_H(0X64, ctx->r17) = ctx->r2;
        goto L_80226B28;
    // 0x80226B14: sh          $v0, 0x64($s1)
    MEM_H(0X64, ctx->r17) = ctx->r2;
L_80226B18:
    // 0x80226B18: lhu         $v0, 0xA($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0XA);
    // 0x80226B1C: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x80226B20: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80226B24: sh          $v0, 0x64($s1)
    MEM_H(0X64, ctx->r17) = ctx->r2;
L_80226B28:
    // 0x80226B28: lui         $s0, 0x8023
    ctx->r16 = S32(0X8023 << 16);
    // 0x80226B2C: addiu       $s0, $s0, -0x1AE8
    ctx->r16 = ADD32(ctx->r16, -0X1AE8);
L_80226B30:
    // 0x80226B30: jal         0x800A3450
    // 0x80226B34: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_5;
    // 0x80226B34: nop

    after_5:
    // 0x80226B38: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80226B3C: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x80226B40: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80226B44: andi        $v1, $s3, 0xFF
    ctx->r3 = ctx->r19 & 0XFF;
    // 0x80226B48: sh          $v0, 0x8($s2)
    MEM_H(0X8, ctx->r18) = ctx->r2;
    // 0x80226B4C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80226B50: beq         $v1, $v0, L_80226B68
    if (ctx->r3 == ctx->r2) {
        // 0x80226B54: nop
    
            goto L_80226B68;
    }
    // 0x80226B54: nop

    // 0x80226B58: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80226B5C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226B60: addu        $v0, $s3, $v0
    ctx->r2 = ADD32(ctx->r19, ctx->r2);
    // 0x80226B64: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_80226B68:
    // 0x80226B68: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80226B6C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80226B70: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80226B74: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80226B78: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226B7C: jr          $ra
    // 0x80226B80: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80226B80: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_802269CC_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802269CC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802269D0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802269D4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802269D8: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x802269DC: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x802269E0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x802269E4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802269E8: lbu         $s0, 0xD($s1)
    ctx->r16 = MEM_BU(ctx->r17, 0XD);
    // 0x802269EC: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802269F0: addiu       $v0, $v0, -0x3AC8
    ctx->r2 = ADD32(ctx->r2, -0X3AC8);
    // 0x802269F4: andi        $s0, $s0, 0x30
    ctx->r16 = ctx->r16 & 0X30;
    // 0x802269F8: jal         0x800A3450
    // 0x802269FC: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x802269FC: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    after_0:
    // 0x80226A00: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80226A04: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x80226A08: lbu         $s3, 0x0($s0)
    ctx->r19 = MEM_BU(ctx->r16, 0X0);
    // 0x80226A0C: lui         $s0, 0x8023
    ctx->r16 = S32(0X8023 << 16);
    // 0x80226A10: addiu       $s0, $s0, -0x3A88
    ctx->r16 = ADD32(ctx->r16, -0X3A88);
    // 0x80226A14: andi        $v1, $s3, 0xFF
    ctx->r3 = ctx->r19 & 0XFF;
    // 0x80226A18: beq         $v1, $zero, L_80226A34
    if (ctx->r3 == 0) {
        // 0x80226A1C: addiu       $s2, $s1, 0x348
        ctx->r18 = ADD32(ctx->r17, 0X348);
            goto L_80226A34;
    }
    // 0x80226A1C: addiu       $s2, $s1, 0x348
    ctx->r18 = ADD32(ctx->r17, 0X348);
    // 0x80226A20: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226A24: beq         $v1, $v0, L_80226A54
    if (ctx->r3 == ctx->r2) {
        // 0x80226A28: nop
    
            goto L_80226A54;
    }
    // 0x80226A28: nop

    // 0x80226A2C: j           L_80226A68
    // 0x80226A30: nop

        goto L_80226A68;
    // 0x80226A30: nop

L_80226A34:
    // 0x80226A34: jal         0x80228A18
    // 0x80226A38: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    func_80228A18_ovl20(rdram, ctx);
        goto after_1;
    // 0x80226A38: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    after_1:
    // 0x80226A3C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80226A40: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80226A44: jal         0x80228A58
    // 0x80226A48: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    func_80228A58_ovl20(rdram, ctx);
        goto after_2;
    // 0x80226A48: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    after_2:
    // 0x80226A4C: j           L_80226AC0
    // 0x80226A50: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
        goto L_80226AC0;
    // 0x80226A50: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
L_80226A54:
    // 0x80226A54: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    // 0x80226A58: jal         0x80228A08
    // 0x80226A5C: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    func_80228A08_ovl20(rdram, ctx);
        goto after_3;
    // 0x80226A5C: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    after_3:
    // 0x80226A60: j           L_80226AC0
    // 0x80226A64: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
        goto L_80226AC0;
    // 0x80226A64: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
L_80226A68:
    // 0x80226A68: lh          $v1, 0x16($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X16);
    // 0x80226A6C: lh          $v0, 0x1E($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X1E);
    // 0x80226A70: bne         $v1, $v0, L_80226A80
    if (ctx->r3 != ctx->r2) {
        // 0x80226A74: nop
    
            goto L_80226A80;
    }
    // 0x80226A74: nop

    // 0x80226A78: j           L_80226AC0
    // 0x80226A7C: addiu       $s3, $zero, 0xFF
    ctx->r19 = ADD32(0, 0XFF);
        goto L_80226AC0;
    // 0x80226A7C: addiu       $s3, $zero, 0xFF
    ctx->r19 = ADD32(0, 0XFF);
L_80226A80:
    // 0x80226A80: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    // 0x80226A84: jal         0x80228A18
    // 0x80226A88: nop

    func_80228A18_ovl20(rdram, ctx);
        goto after_4;
    // 0x80226A88: nop

    after_4:
    // 0x80226A8C: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x80226A90: lh          $v0, 0x14($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X14);
    // 0x80226A94: beq         $v0, $zero, L_80226AA8
    if (ctx->r2 == 0) {
        // 0x80226A98: nop
    
            goto L_80226AA8;
    }
    // 0x80226A98: nop

    // 0x80226A9C: lhu         $v0, 0xA($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0XA);
    // 0x80226AA0: j           L_80226AB8
    // 0x80226AA4: sh          $v0, 0x64($s1)
    MEM_H(0X64, ctx->r17) = ctx->r2;
        goto L_80226AB8;
    // 0x80226AA4: sh          $v0, 0x64($s1)
    MEM_H(0X64, ctx->r17) = ctx->r2;
L_80226AA8:
    // 0x80226AA8: lhu         $v0, 0xA($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0XA);
    // 0x80226AAC: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x80226AB0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80226AB4: sh          $v0, 0x64($s1)
    MEM_H(0X64, ctx->r17) = ctx->r2;
L_80226AB8:
    // 0x80226AB8: lui         $s0, 0x8023
    ctx->r16 = S32(0X8023 << 16);
    // 0x80226ABC: addiu       $s0, $s0, -0x3A68
    ctx->r16 = ADD32(ctx->r16, -0X3A68);
L_80226AC0:
    // 0x80226AC0: jal         0x800A3450
    // 0x80226AC4: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_5;
    // 0x80226AC4: nop

    after_5:
    // 0x80226AC8: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80226ACC: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x80226AD0: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80226AD4: andi        $v1, $s3, 0xFF
    ctx->r3 = ctx->r19 & 0XFF;
    // 0x80226AD8: sh          $v0, 0x8($s2)
    MEM_H(0X8, ctx->r18) = ctx->r2;
    // 0x80226ADC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80226AE0: beq         $v1, $v0, L_80226AF8
    if (ctx->r3 == ctx->r2) {
        // 0x80226AE4: nop
    
            goto L_80226AF8;
    }
    // 0x80226AE4: nop

    // 0x80226AE8: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80226AEC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226AF0: addu        $v0, $s3, $v0
    ctx->r2 = ADD32(ctx->r19, ctx->r2);
    // 0x80226AF4: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_80226AF8:
    // 0x80226AF8: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80226AFC: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80226B00: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80226B04: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80226B08: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226B0C: jr          $ra
    // 0x80226B10: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80226B10: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_802267DC_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802267DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802267E0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802267E4: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x802267E8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802267EC: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802267F0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802267F4: lw          $v0, -0x3B44($at)
    ctx->r2 = MEM_W(ctx->r1, -0X3B44);
    // 0x802267F8: jalr        $v0
    // 0x802267FC: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802267FC: nop

    after_0:
    // 0x80226800: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80226804: jr          $ra
    // 0x80226808: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226808: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225420_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225420: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225424: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225428: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022542C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225430: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225434: bne         $v0, $zero, L_80225454
    if (ctx->r2 != 0) {
        // 0x80225438: nop
    
            goto L_80225454;
    }
    // 0x80225438: nop

    // 0x8022543C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80225440: jal         0x800607C4
    // 0x80225444: addiu       $a0, $a0, -0x4524
    ctx->r4 = ADD32(ctx->r4, -0X4524);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x80225444: addiu       $a0, $a0, -0x4524
    ctx->r4 = ADD32(ctx->r4, -0X4524);
    after_0:
    // 0x80225448: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8022544C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225450: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225454:
    // 0x80225454: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225458: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022545C: jr          $ra
    // 0x80225460: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225460: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225634_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225634: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80225638: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022563C: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x80225640: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80225644: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80225648: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022564C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225650: lbu         $v0, 0x4($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X4);
    // 0x80225654: bne         $v0, $zero, L_802256B0
    if (ctx->r2 != 0) {
        // 0x80225658: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_802256B0;
    }
    // 0x80225658: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x8022565C: lui         $s1, 0x8023
    ctx->r17 = S32(0X8023 << 16);
    // 0x80225660: addiu       $s1, $s1, -0x44E4
    ctx->r17 = ADD32(ctx->r17, -0X44E4);
    // 0x80225664: lui         $s0, 0x8023
    ctx->r16 = S32(0X8023 << 16);
    // 0x80225668: addiu       $s0, $s0, -0x4504
    ctx->r16 = ADD32(ctx->r16, -0X4504);
L_8022566C:
    // 0x8022566C: jal         0x8003E6BC
    // 0x80225670: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_0;
    // 0x80225670: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80225674: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80225678: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x8022567C: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x80225680: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80225684: jal         0x80071ACC
    // 0x80225688: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    func_80071ACC_4CECC(rdram, ctx);
        goto after_1;
    // 0x80225688: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    after_1:
    // 0x8022568C: slti        $v0, $s2, 0x4
    ctx->r2 = SIGNED(ctx->r18) < 0X4 ? 1 : 0;
    // 0x80225690: bne         $v0, $zero, L_8022566C
    if (ctx->r2 != 0) {
        // 0x80225694: nop
    
            goto L_8022566C;
    }
    // 0x80225694: nop

    // 0x80225698: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8022569C: jal         0x800607C4
    // 0x802256A0: addiu       $a0, $a0, -0x450C
    ctx->r4 = ADD32(ctx->r4, -0X450C);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_2;
    // 0x802256A0: addiu       $a0, $a0, -0x450C
    ctx->r4 = ADD32(ctx->r4, -0X450C);
    after_2:
    // 0x802256A4: lbu         $v0, 0x4($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X4);
    // 0x802256A8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802256AC: sb          $v0, 0x4($s3)
    MEM_B(0X4, ctx->r19) = ctx->r2;
L_802256B0:
    // 0x802256B0: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x802256B4: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x802256B8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x802256BC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802256C0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802256C4: jr          $ra
    // 0x802256C8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x802256C8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_802260B0_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802260B0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802260B4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802260B8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802260BC: addiu       $a0, $s1, 0x38
    ctx->r4 = ADD32(ctx->r17, 0X38);
    // 0x802260C0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802260C4: jal         0x8003E6BC
    // 0x802260C8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_0;
    // 0x802260C8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x802260CC: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x802260D0: addiu       $a0, $a0, 0x49C4
    ctx->r4 = ADD32(ctx->r4, 0X49C4);
    // 0x802260D4: jal         0x8003E6BC
    // 0x802260D8: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_1;
    // 0x802260D8: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_1:
    // 0x802260DC: bne         $s0, $v0, L_80226104
    if (ctx->r16 != ctx->r2) {
        // 0x802260E0: nop
    
            goto L_80226104;
    }
    // 0x802260E0: nop

    // 0x802260E4: jal         0x8006033C
    // 0x802260E8: addiu       $a0, $zero, 0x7B1
    ctx->r4 = ADD32(0, 0X7B1);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x802260E8: addiu       $a0, $zero, 0x7B1
    ctx->r4 = ADD32(0, 0X7B1);
    after_2:
    // 0x802260EC: beq         $v0, $zero, L_80226104
    if (ctx->r2 == 0) {
        // 0x802260F0: addiu       $v1, $zero, 0x18
        ctx->r3 = ADD32(0, 0X18);
            goto L_80226104;
    }
    // 0x802260F0: addiu       $v1, $zero, 0x18
    ctx->r3 = ADD32(0, 0X18);
    // 0x802260F4: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x802260F8: sb          $v1, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r3;
    // 0x802260FC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226100: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
L_80226104:
    // 0x80226104: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80226108: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022610C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226110: jr          $ra
    // 0x80226114: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80226114: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80226BE0_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226BE0: lhu         $v0, 0x350($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X350);
    // 0x80226BE4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80226BE8: sh          $v0, 0x350($a0)
    MEM_H(0X350, ctx->r4) = ctx->r2;
    // 0x80226BEC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80226BF0: bne         $v0, $zero, L_80226BFC
    if (ctx->r2 != 0) {
        // 0x80226BF4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80226BFC;
    }
    // 0x80226BF4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226BF8: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_80226BFC:
    // 0x80226BFC: jr          $ra
    // 0x80226C00: nop

    TRACE_RETURN()
    return;
    // 0x80226C00: nop

;}
RECOMP_FUNC void func_80227C8C_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227C8C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227C90: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227C94: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227C98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227C9C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80227CA0: lh          $a3, 0x34E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X34E);
    // 0x80227CA4: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80227CA8: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x80227CAC: jal         0x8004F820
    // 0x80227CB0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x80227CB0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x80227CB4: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80227CB8: lb          $a0, 0xA7($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XA7);
    // 0x80227CBC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80227CC0: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80227CC4: bgez        $a0, L_80227CE8
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80227CC8: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_80227CE8;
    }
    // 0x80227CC8: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x80227CCC: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80227CD0: jal         0x80228A08
    // 0x80227CD4: nop

    func_80228A08_ovl20(rdram, ctx);
        goto after_1;
    // 0x80227CD4: nop

    after_1:
    // 0x80227CD8: lbu         $v1, 0x34B($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34B);
    // 0x80227CDC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80227CE0: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x80227CE4: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
L_80227CE8:
    // 0x80227CE8: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80227CEC: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x80227CF0: bne         $v0, $zero, L_80227D14
    if (ctx->r2 != 0) {
        // 0x80227CF4: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_80227D14;
    }
    // 0x80227CF4: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x80227CF8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80227CFC: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x80227D00: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
    // 0x80227D04: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x80227D08: jal         0x80228A08
    // 0x80227D0C: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    func_80228A08_ovl20(rdram, ctx);
        goto after_2;
    // 0x80227D0C: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    after_2:
    // 0x80227D10: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_80227D14:
    // 0x80227D14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227D18: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227D1C: jr          $ra
    // 0x80227D20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227D20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227E60_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227E60: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80227E64: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227E68: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227E6C: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80227E70: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80227E74: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80227E78: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80227E7C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80227E80: lbu         $v0, 0x34B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X34B);
    // 0x80227E84: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80227E88: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x80227E8C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227E90: sb          $v0, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r2;
    // 0x80227E94: sh          $v1, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r3;
    // 0x80227E98: jal         0x80228A08
    // 0x80227E9C: sb          $a1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r5;
    func_80228A08_ovl20(rdram, ctx);
        goto after_0;
    // 0x80227E9C: sb          $a1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r5;
    after_0:
    // 0x80227EA0: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x80227EA4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80227EA8: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80227EAC: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x80227EB0: addiu       $s2, $s2, 0x49C4
    ctx->r18 = ADD32(ctx->r18, 0X49C4);
    // 0x80227EB4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80227EB8: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x80227EBC: jal         0x8004F820
    // 0x80227EC0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x80227EC0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_1:
    // 0x80227EC4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227EC8: bgez        $v0, L_80227EF8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80227ECC: addiu       $s3, $s0, 0x348
        ctx->r19 = ADD32(ctx->r16, 0X348);
            goto L_80227EF8;
    }
    // 0x80227ECC: addiu       $s3, $s0, 0x348
    ctx->r19 = ADD32(ctx->r16, 0X348);
    // 0x80227ED0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80227ED4: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80227ED8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80227EDC: jal         0x8004F820
    // 0x80227EE0: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x80227EE0: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_2:
    // 0x80227EE4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227EE8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80227EEC: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80227EF0: j           L_80227F14
    // 0x80227EF4: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
        goto L_80227F14;
    // 0x80227EF4: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
L_80227EF8:
    // 0x80227EF8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80227EFC: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80227F00: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80227F04: jal         0x8004F820
    // 0x80227F08: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x80227F08: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_3:
    // 0x80227F0C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227F10: sra         $v0, $v0, 19
    ctx->r2 = S32(SIGNED(ctx->r2) >> 19);
L_80227F14:
    // 0x80227F14: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80227F18: sh          $v0, 0x6($s3)
    MEM_H(0X6, ctx->r19) = ctx->r2;
    // 0x80227F1C: lbu         $a3, 0xC($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XC);
    // 0x80227F20: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80227F24: jal         0x800610AC
    // 0x80227F28: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_4;
    // 0x80227F28: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
    // 0x80227F2C: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80227F30: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80227F34: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80227F38: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227F3C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227F40: jr          $ra
    // 0x80227F44: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80227F44: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80226040_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226040: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80226044: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226048: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022604C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80226050: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80226054: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80226058: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    // 0x8022605C: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x80226060: jal         0x8004D5D4
    // 0x80226064: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80226064: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x80226068: addiu       $s1, $s0, 0x18
    ctx->r17 = ADD32(ctx->r16, 0X18);
    // 0x8022606C: jal         0x8002C678
    // 0x80226070: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8002C678_7A78(rdram, ctx);
        goto after_1;
    // 0x80226070: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x80226074: lb          $a0, 0xC($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XC);
    // 0x80226078: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022607C: jal         0x800319B4
    // 0x80226080: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    func_800319B4_CDB4(rdram, ctx);
        goto after_2;
    // 0x80226080: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    after_2:
    // 0x80226084: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80226088: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
    // 0x8022608C: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x80226090: sw          $v1, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r3;
    // 0x80226094: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226098: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022609C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802260A0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802260A4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802260A8: jr          $ra
    // 0x802260AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802260AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80226F8C_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226F8C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226F90: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80226F94: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80226F98: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80226F9C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80226FA0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80226FA4: lw          $v0, -0x3A58($at)
    ctx->r2 = MEM_W(ctx->r1, -0X3A58);
    // 0x80226FA8: jalr        $v0
    // 0x80226FAC: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80226FAC: nop

    after_0:
    // 0x80226FB0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80226FB4: jr          $ra
    // 0x80226FB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226FB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022A994_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A994: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022A998: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022A99C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022A9A0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A9A4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022A9A8: jal         0x8003E934
    // 0x8022A9AC: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_0;
    // 0x8022A9AC: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    after_0:
    // 0x8022A9B0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8022A9B4: andi        $s0, $s0, 0x1000
    ctx->r16 = ctx->r16 & 0X1000;
    // 0x8022A9B8: bne         $s0, $zero, L_8022A9F4
    if (ctx->r16 != 0) {
        // 0x8022A9BC: addu        $a1, $a0, $zero
        ctx->r5 = ADD32(ctx->r4, 0);
            goto L_8022A9F4;
    }
    // 0x8022A9BC: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x8022A9C0: lhu         $v0, 0x46($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X46);
    // 0x8022A9C4: lhu         $v1, 0x16($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X16);
    // 0x8022A9C8: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8022A9CC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022A9D0: sh          $v1, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r3;
    // 0x8022A9D4: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022A9D8: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8022A9DC: sh          $v0, 0x46($s1)
    MEM_H(0X46, ctx->r17) = ctx->r2;
    // 0x8022A9E0: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x8022A9E4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022A9E8: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8022A9EC: beq         $v0, $zero, L_8022A9FC
    if (ctx->r2 == 0) {
        // 0x8022A9F0: nop
    
            goto L_8022A9FC;
    }
    // 0x8022A9F0: nop

L_8022A9F4:
    // 0x8022A9F4: sh          $a1, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r5;
    // 0x8022A9F8: sh          $zero, 0x46($s1)
    MEM_H(0X46, ctx->r17) = 0;
L_8022A9FC:
    // 0x8022A9FC: lh          $v0, 0x16($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X16);
    // 0x8022AA00: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022AA04: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
    // 0x8022AA08: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022AA0C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022AA10: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022AA14: jr          $ra
    // 0x8022AA18: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022AA18: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80229094_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229094: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80229098: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022909C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802290A0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802290A4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802290A8: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x802290AC: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x802290B0: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x802290B4: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x802290B8: beq         $v0, $zero, L_80229274
    if (ctx->r2 == 0) {
        // 0x802290BC: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80229274;
    }
    // 0x802290BC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x802290C0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802290C4: addu        $at, $at, $v0
    gpr jr_addend_802290CC = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802290C8: lw          $v0, -0x37C8($at)
    ctx->r2 = ADD32(ctx->r1, -0X37C8);
    // 0x802290CC: jr          $v0
    // 0x802290D0: nop

    switch (jr_addend_802290CC >> 2) {
        case 0: goto L_802290D4; break;
        case 1: goto L_80229194; break;
        case 2: goto L_802291B0; break;
        case 3: goto L_80229218; break;
        case 4: goto L_80229244; break;
        default: switch_error(__func__, 0x802290CC, 0x8022C838);
    }
    // 0x802290D0: nop

L_802290D4:
    // 0x802290D4: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x802290D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802290DC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802290E0: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x802290E4: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x802290E8: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x802290EC: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x802290F0: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x802290F4: jal         0x8004D5D4
    // 0x802290F8: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x802290F8: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x802290FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229100: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80229104: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80229108: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022910C: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80229110: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80229114: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80229118: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022911C: addiu       $v0, $v0, -0x3930
    ctx->r2 = ADD32(ctx->r2, -0X3930);
    // 0x80229120: jal         0x8003E934
    // 0x80229124: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    func_8003E934_19D34(rdram, ctx);
        goto after_1;
    // 0x80229124: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    after_1:
    // 0x80229128: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8022912C: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80229130: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229134: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x80229138: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022913C: sh          $v0, 0x360($s0)
    MEM_H(0X360, ctx->r16) = ctx->r2;
    // 0x80229140: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80229144: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80229148: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022914C: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
    // 0x80229150: sh          $zero, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = 0;
    // 0x80229154: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    // 0x80229158: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x8022915C: sh          $zero, 0x362($s0)
    MEM_H(0X362, ctx->r16) = 0;
    // 0x80229160: sh          $zero, 0x364($s0)
    MEM_H(0X364, ctx->r16) = 0;
    // 0x80229164: sb          $zero, 0x74($s0)
    MEM_B(0X74, ctx->r16) = 0;
    // 0x80229168: sw          $zero, 0x348($s0)
    MEM_W(0X348, ctx->r16) = 0;
    // 0x8022916C: sw          $zero, 0x34C($s0)
    MEM_W(0X34C, ctx->r16) = 0;
    // 0x80229170: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80229174: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x80229178: sw          $zero, 0x350($s0)
    MEM_W(0X350, ctx->r16) = 0;
    // 0x8022917C: sw          $v0, 0x354($s0)
    MEM_W(0X354, ctx->r16) = ctx->r2;
    // 0x80229180: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80229184: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x80229188: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022918C: j           L_80229274
    // 0x80229190: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
        goto L_80229274;
    // 0x80229190: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
L_80229194:
    // 0x80229194: jal         0x80229420
    // 0x80229198: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80229420_ovl20(rdram, ctx);
        goto after_2;
    // 0x80229198: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022919C: beq         $v0, $zero, L_80229278
    if (ctx->r2 == 0) {
        // 0x802291A0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80229278;
    }
    // 0x802291A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802291A4: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802291A8: j           L_80229270
    // 0x802291AC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80229270;
    // 0x802291AC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_802291B0:
    // 0x802291B0: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x802291B4: lh          $a3, 0x64($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X64);
    // 0x802291B8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802291BC: jal         0x8004F820
    // 0x802291C0: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x802291C0: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_3:
    // 0x802291C4: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x802291C8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802291CC: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x802291D0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802291D4: bne         $v0, $zero, L_80229274
    if (ctx->r2 != 0) {
        // 0x802291D8: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_80229274;
    }
    // 0x802291D8: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x802291DC: jal         0x8003516C
    // 0x802291E0: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_4;
    // 0x802291E0: nop

    after_4:
    // 0x802291E4: bne         $v0, $zero, L_80229278
    if (ctx->r2 != 0) {
        // 0x802291E8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80229278;
    }
    // 0x802291E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802291EC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802291F0: jal         0x800616FC
    // 0x802291F4: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_5;
    // 0x802291F4: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    after_5:
    // 0x802291F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802291FC: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x80229200: jal         0x80050294
    // 0x80229204: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_6;
    // 0x80229204: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_6:
    // 0x80229208: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022920C: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80229210: j           L_80229270
    // 0x80229214: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80229270;
    // 0x80229214: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80229218:
    // 0x80229218: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022921C: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80229220: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80229224: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80229228: bne         $v0, $zero, L_80229278
    if (ctx->r2 != 0) {
        // 0x8022922C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80229278;
    }
    // 0x8022922C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229230: jal         0x80034E3C
    // 0x80229234: nop

    func_80034E3C_1023C(rdram, ctx);
        goto after_7;
    // 0x80229234: nop

    after_7:
    // 0x80229238: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022923C: j           L_80229270
    // 0x80229240: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80229270;
    // 0x80229240: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80229244:
    // 0x80229244: jal         0x8003516C
    // 0x80229248: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_8;
    // 0x80229248: nop

    after_8:
    // 0x8022924C: bne         $v0, $zero, L_80229278
    if (ctx->r2 != 0) {
        // 0x80229250: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80229278;
    }
    // 0x80229250: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229254: lbu         $v0, 0xBD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XBD);
    // 0x80229258: lbu         $v1, 0x0($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X0);
    // 0x8022925C: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x80229260: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80229264: sb          $v0, 0xBD($s1)
    MEM_B(0XBD, ctx->r17) = ctx->r2;
    // 0x80229268: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022926C: sb          $v1, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r3;
L_80229270:
    // 0x80229270: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80229274:
    // 0x80229274: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80229278:
    // 0x80229278: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022927C: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x80229280: jal         0x80047284
    // 0x80229284: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_9;
    // 0x80229284: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_9:
    // 0x80229288: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022928C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80229290: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229294: jr          $ra
    // 0x80229298: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80229298: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80229690_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229690: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229694: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229698: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022969C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802296A0: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x802296A4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802296A8: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x802296AC: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x802296B0: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x802296B4: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x802296B8: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x802296BC: jal         0x8004D5D4
    // 0x802296C0: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x802296C0: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x802296C4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802296C8: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x802296CC: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x802296D0: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x802296D4: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x802296D8: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x802296DC: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x802296E0: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802296E4: addiu       $v0, $v0, -0x3930
    ctx->r2 = ADD32(ctx->r2, -0X3930);
    // 0x802296E8: jal         0x8003E934
    // 0x802296EC: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    func_8003E934_19D34(rdram, ctx);
        goto after_1;
    // 0x802296EC: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    after_1:
    // 0x802296F0: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x802296F4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802296F8: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x802296FC: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80229700: sh          $v0, 0x360($s0)
    MEM_H(0X360, ctx->r16) = ctx->r2;
    // 0x80229704: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80229708: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022970C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80229710: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
    // 0x80229714: sh          $zero, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = 0;
    // 0x80229718: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    // 0x8022971C: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x80229720: sh          $zero, 0x362($s0)
    MEM_H(0X362, ctx->r16) = 0;
    // 0x80229724: sh          $zero, 0x364($s0)
    MEM_H(0X364, ctx->r16) = 0;
    // 0x80229728: sb          $zero, 0x74($s0)
    MEM_B(0X74, ctx->r16) = 0;
    // 0x8022972C: sw          $zero, 0x348($s0)
    MEM_W(0X348, ctx->r16) = 0;
    // 0x80229730: sw          $zero, 0x34C($s0)
    MEM_W(0X34C, ctx->r16) = 0;
    // 0x80229734: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80229738: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x8022973C: sw          $zero, 0x350($s0)
    MEM_W(0X350, ctx->r16) = 0;
    // 0x80229740: sw          $v0, 0x354($s0)
    MEM_W(0X354, ctx->r16) = ctx->r2;
    // 0x80229744: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80229748: jal         0x800A3450
    // 0x8022974C: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x8022974C: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    after_2:
    // 0x80229750: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229754: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80229758: jal         0x80050294
    // 0x8022975C: andi        $a2, $v0, 0x3
    ctx->r6 = ctx->r2 & 0X3;
    func_80050294_2B694(rdram, ctx);
        goto after_3;
    // 0x8022975C: andi        $a2, $v0, 0x3
    ctx->r6 = ctx->r2 & 0X3;
    after_3:
    // 0x80229760: lhu         $v1, 0x16($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X16);
    // 0x80229764: lbu         $a2, 0x8($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X8);
    // 0x80229768: addiu       $a0, $zero, 0x109
    ctx->r4 = ADD32(0, 0X109);
    // 0x8022976C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80229770: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80229774: sb          $v0, 0x107($s0)
    MEM_B(0X107, ctx->r16) = ctx->r2;
    // 0x80229778: addiu       $v0, $zero, -0x10
    ctx->r2 = ADD32(0, -0X10);
    // 0x8022977C: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x80229780: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229784: sb          $zero, 0xFF($s0)
    MEM_B(0XFF, ctx->r16) = 0;
    // 0x80229788: sb          $zero, 0x103($s0)
    MEM_B(0X103, ctx->r16) = 0;
    // 0x8022978C: sb          $v0, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r2;
    // 0x80229790: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x80229794: addiu       $v1, $v1, -0x50
    ctx->r3 = ADD32(ctx->r3, -0X50);
    // 0x80229798: sh          $v1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r3;
    // 0x8022979C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x802297A0: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x802297A4: jal         0x8002A33C
    // 0x802297A8: sb          $a2, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r6;
    func_8002A33C_573C(rdram, ctx);
        goto after_4;
    // 0x802297A8: sb          $a2, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r6;
    after_4:
    // 0x802297AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802297B0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802297B4: jr          $ra
    // 0x802297B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802297B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802262B0_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802262B0: lbu         $v1, 0xA($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XA);
    // 0x802262B4: sltiu       $v0, $v1, 0x17
    ctx->r2 = ctx->r3 < 0X17 ? 1 : 0;
    // 0x802262B8: beq         $v0, $zero, L_80226388
    if (ctx->r2 == 0) {
        // 0x802262BC: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80226388;
    }
    // 0x802262BC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x802262C0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802262C4: addu        $at, $at, $v0
    gpr jr_addend_802262CC = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802262C8: lw          $v0, -0x3850($at)
    ctx->r2 = ADD32(ctx->r1, -0X3850);
    // 0x802262CC: jr          $v0
    // 0x802262D0: nop

    switch (jr_addend_802262CC >> 2) {
        case 0: goto L_802262D4; break;
        case 1: goto L_802262E4; break;
        case 2: goto L_80226388; break;
        case 3: goto L_80226388; break;
        case 4: goto L_80226388; break;
        case 5: goto L_80226388; break;
        case 6: goto L_80226388; break;
        case 7: goto L_80226388; break;
        case 8: goto L_80226388; break;
        case 9: goto L_80226388; break;
        case 10: goto L_80226310; break;
        case 11: goto L_80226388; break;
        case 12: goto L_80226388; break;
        case 13: goto L_80226388; break;
        case 14: goto L_80226388; break;
        case 15: goto L_80226388; break;
        case 16: goto L_80226388; break;
        case 17: goto L_80226388; break;
        case 18: goto L_80226388; break;
        case 19: goto L_80226388; break;
        case 20: goto L_8022632C; break;
        case 21: goto L_8022633C; break;
        case 22: goto L_80226364; break;
        default: switch_error(__func__, 0x802262CC, 0x8022C7B0);
    }
    // 0x802262D0: nop

L_802262D4:
    // 0x802262D4: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x802262D8: sh          $zero, 0xC($a0)
    MEM_H(0XC, ctx->r4) = 0;
    // 0x802262DC: j           L_80226384
    // 0x802262E0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80226384;
    // 0x802262E0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_802262E4:
    // 0x802262E4: lhu         $v0, 0xC($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0XC);
    // 0x802262E8: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
    // 0x802262EC: sh          $v0, 0xC($a0)
    MEM_H(0XC, ctx->r4) = ctx->r2;
    // 0x802262F0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802262F4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802262F8: slti        $v0, $v0, -0x383
    ctx->r2 = SIGNED(ctx->r2) < -0X383 ? 1 : 0;
    // 0x802262FC: beq         $v0, $zero, L_80226388
    if (ctx->r2 == 0) {
        // 0x80226300: nop
    
            goto L_80226388;
    }
    // 0x80226300: nop

    // 0x80226304: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80226308: j           L_80226384
    // 0x8022630C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80226384;
    // 0x8022630C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80226310:
    // 0x80226310: lhu         $v0, 0x3A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X3A);
    // 0x80226314: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x80226318: sh          $v0, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = ctx->r2;
    // 0x8022631C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80226320: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80226324: j           L_8022637C
    // 0x80226328: slti        $v0, $v0, 0x370
    ctx->r2 = SIGNED(ctx->r2) < 0X370 ? 1 : 0;
        goto L_8022637C;
    // 0x80226328: slti        $v0, $v0, 0x370
    ctx->r2 = SIGNED(ctx->r2) < 0X370 ? 1 : 0;
L_8022632C:
    // 0x8022632C: lhu         $v0, 0x3A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X3A);
    // 0x80226330: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
    // 0x80226334: j           L_80226370
    // 0x80226338: sh          $v0, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = ctx->r2;
        goto L_80226370;
    // 0x80226338: sh          $v0, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = ctx->r2;
L_8022633C:
    // 0x8022633C: lhu         $v0, 0x38($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X38);
    // 0x80226340: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
    // 0x80226344: sh          $v0, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r2;
    // 0x80226348: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022634C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80226350: slti        $v0, $v0, -0x95
    ctx->r2 = SIGNED(ctx->r2) < -0X95 ? 1 : 0;
    // 0x80226354: beq         $v0, $zero, L_80226388
    if (ctx->r2 == 0) {
        // 0x80226358: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80226388;
    }
    // 0x80226358: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022635C: j           L_80226384
    // 0x80226360: nop

        goto L_80226384;
    // 0x80226360: nop

L_80226364:
    // 0x80226364: lhu         $v0, 0x38($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X38);
    // 0x80226368: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x8022636C: sh          $v0, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r2;
L_80226370:
    // 0x80226370: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80226374: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80226378: slti        $v0, $v0, 0x96
    ctx->r2 = SIGNED(ctx->r2) < 0X96 ? 1 : 0;
L_8022637C:
    // 0x8022637C: bne         $v0, $zero, L_80226388
    if (ctx->r2 != 0) {
        // 0x80226380: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80226388;
    }
    // 0x80226380: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80226384:
    // 0x80226384: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_80226388:
    // 0x80226388: jr          $ra
    // 0x8022638C: nop

    TRACE_RETURN()
    return;
    // 0x8022638C: nop

;}
RECOMP_FUNC void func_8022A498_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A498: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8022A49C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8022A4A0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A4A4: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x8022A4A8: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x8022A4AC: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8022A4B0: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8022A4B4: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8022A4B8: beq         $v1, $zero, L_8022A4D4
    if (ctx->r3 == 0) {
        // 0x8022A4BC: addiu       $s3, $s0, 0x348
        ctx->r19 = ADD32(ctx->r16, 0X348);
            goto L_8022A4D4;
    }
    // 0x8022A4BC: addiu       $s3, $s0, 0x348
    ctx->r19 = ADD32(ctx->r16, 0X348);
    // 0x8022A4C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A4C4: beq         $v1, $v0, L_8022A51C
    if (ctx->r3 == ctx->r2) {
        // 0x8022A4C8: nop
    
            goto L_8022A51C;
    }
    // 0x8022A4C8: nop

    // 0x8022A4CC: j           L_8022A660
    // 0x8022A4D0: nop

        goto L_8022A660;
    // 0x8022A4D0: nop

L_8022A4D4:
    // 0x8022A4D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A4D8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8022A4DC: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8022A4E0: lhu         $v1, 0x4A06($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X4A06);
    // 0x8022A4E4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022A4E8: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022A4EC: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x8022A4F0: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022A4F4: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    // 0x8022A4F8: sh          $v0, 0x364($s0)
    MEM_H(0X364, ctx->r16) = ctx->r2;
    // 0x8022A4FC: sh          $zero, 0x368($s0)
    MEM_H(0X368, ctx->r16) = 0;
    // 0x8022A500: sh          $zero, 0x366($s0)
    MEM_H(0X366, ctx->r16) = 0;
    // 0x8022A504: jal         0x80050294
    // 0x8022A508: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x8022A508: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    after_0:
    // 0x8022A50C: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022A510: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x8022A514: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022A518: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022A51C:
    // 0x8022A51C: lw          $v0, 0xC($s3)
    ctx->r2 = MEM_W(ctx->r19, 0XC);
    // 0x8022A520: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x8022A524: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022A528: beq         $v0, $zero, L_8022A56C
    if (ctx->r2 == 0) {
        // 0x8022A52C: addiu       $a1, $s0, 0x2C
        ctx->r5 = ADD32(ctx->r16, 0X2C);
            goto L_8022A56C;
    }
    // 0x8022A52C: addiu       $a1, $s0, 0x2C
    ctx->r5 = ADD32(ctx->r16, 0X2C);
    // 0x8022A530: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022A534: jal         0x8009A3B4
    // 0x8022A538: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022A538: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x8022A53C: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8022A540: addiu       $a1, $s0, 0x34
    ctx->r5 = ADD32(ctx->r16, 0X34);
    // 0x8022A544: jal         0x8009A3B4
    // 0x8022A548: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022A548: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_2:
    // 0x8022A54C: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022A550: beq         $v0, $zero, L_8022A660
    if (ctx->r2 == 0) {
        // 0x8022A554: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022A660;
    }
    // 0x8022A554: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A558: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022A55C: jal         0x80050294
    // 0x8022A560: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_3;
    // 0x8022A560: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
    // 0x8022A564: j           L_8022A660
    // 0x8022A568: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
        goto L_8022A660;
    // 0x8022A568: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
L_8022A56C:
    // 0x8022A56C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A570: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022A574: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022A578: jal         0x8004DA90
    // 0x8022A57C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_4;
    // 0x8022A57C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_4:
    // 0x8022A580: jal         0x80040F30
    // 0x8022A584: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_5;
    // 0x8022A584: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x8022A588: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x8022A58C: beq         $s2, $zero, L_8022A59C
    if (ctx->r18 == 0) {
        // 0x8022A590: addiu       $a0, $s0, 0x44
        ctx->r4 = ADD32(ctx->r16, 0X44);
            goto L_8022A59C;
    }
    // 0x8022A590: addiu       $a0, $s0, 0x44
    ctx->r4 = ADD32(ctx->r16, 0X44);
    // 0x8022A594: jal         0x80040834
    // 0x8022A598: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_80040834_1BC34(rdram, ctx);
        goto after_6;
    // 0x8022A598: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_6:
L_8022A59C:
    // 0x8022A59C: lh          $a2, 0x44($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X44);
    // 0x8022A5A0: lh          $v0, 0x1C($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X1C);
    // 0x8022A5A4: bgez        $a2, L_8022A5B0
    if (SIGNED(ctx->r6) >= 0) {
        // 0x8022A5A8: addu        $v1, $a2, $zero
        ctx->r3 = ADD32(ctx->r6, 0);
            goto L_8022A5B0;
    }
    // 0x8022A5A8: addu        $v1, $a2, $zero
    ctx->r3 = ADD32(ctx->r6, 0);
    // 0x8022A5AC: negu        $v1, $v1
    ctx->r3 = SUB32(0, ctx->r3);
L_8022A5B0:
    // 0x8022A5B0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8022A5B4: bltzl       $v0, L_8022A5BC
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022A5B8: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_8022A5BC;
    }
    goto skip_0;
    // 0x8022A5B8: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_0:
L_8022A5BC:
    // 0x8022A5BC: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8022A5C0: bne         $v0, $zero, L_8022A5D4
    if (ctx->r2 != 0) {
        // 0x8022A5C4: addu        $a1, $a2, $zero
        ctx->r5 = ADD32(ctx->r6, 0);
            goto L_8022A5D4;
    }
    // 0x8022A5C4: addu        $a1, $a2, $zero
    ctx->r5 = ADD32(ctx->r6, 0);
    // 0x8022A5C8: sh          $zero, 0x1C($s3)
    MEM_H(0X1C, ctx->r19) = 0;
    // 0x8022A5CC: j           L_8022A5E4
    // 0x8022A5D0: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
        goto L_8022A5E4;
    // 0x8022A5D0: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
L_8022A5D4:
    // 0x8022A5D4: bgez        $a2, L_8022A5E0
    if (SIGNED(ctx->r6) >= 0) {
        // 0x8022A5D8: subu        $v0, $a1, $a0
        ctx->r2 = SUB32(ctx->r5, ctx->r4);
            goto L_8022A5E0;
    }
    // 0x8022A5D8: subu        $v0, $a1, $a0
    ctx->r2 = SUB32(ctx->r5, ctx->r4);
    // 0x8022A5DC: addu        $v0, $a1, $a0
    ctx->r2 = ADD32(ctx->r5, ctx->r4);
L_8022A5E0:
    // 0x8022A5E0: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
L_8022A5E4:
    // 0x8022A5E4: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x8022A5E8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022A5EC: jal         0x8004DE68
    // 0x8022A5F0: addiu       $a1, $s3, 0x24
    ctx->r5 = ADD32(ctx->r19, 0X24);
    func_8004DE68_29268(rdram, ctx);
        goto after_7;
    // 0x8022A5F0: addiu       $a1, $s3, 0x24
    ctx->r5 = ADD32(ctx->r19, 0X24);
    after_7:
    // 0x8022A5F4: sltiu       $v0, $v0, 0x1001
    ctx->r2 = ctx->r2 < 0X1001 ? 1 : 0;
    // 0x8022A5F8: bne         $v0, $zero, L_8022A624
    if (ctx->r2 != 0) {
        // 0x8022A5FC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022A624;
    }
    // 0x8022A5FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A600: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022A604: addiu       $a1, $s0, 0x2C
    ctx->r5 = ADD32(ctx->r16, 0X2C);
    // 0x8022A608: jal         0x8009A3B4
    // 0x8022A60C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x8022A60C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_8:
    // 0x8022A610: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8022A614: addiu       $a1, $s0, 0x34
    ctx->r5 = ADD32(ctx->r16, 0X34);
    // 0x8022A618: jal         0x8009A3B4
    // 0x8022A61C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_9;
    // 0x8022A61C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_9:
    // 0x8022A620: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022A624:
    // 0x8022A624: jal         0x8022A994
    // 0x8022A628: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_8022A994_ovl20(rdram, ctx);
        goto after_10;
    // 0x8022A628: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_10:
    // 0x8022A62C: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x8022A630: bgez        $v0, L_8022A660
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022A634: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022A660;
    }
    // 0x8022A634: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A638: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022A63C: jal         0x80050294
    // 0x8022A640: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_11;
    // 0x8022A640: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_11:
    // 0x8022A644: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A648: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x8022A64C: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x8022A650: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x8022A654: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022A658: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022A65C: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
L_8022A660:
    // 0x8022A660: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x8022A664: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x8022A668: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8022A66C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8022A670: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8022A674: jr          $ra
    // 0x8022A678: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8022A678: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8022740C_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022740C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227410: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227414: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227418: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022741C: lh          $a0, 0x364($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X364);
    // 0x80227420: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x80227424: jal         0x8004FA7C
    // 0x80227428: lh          $a2, 0x350($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X350);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x80227428: lh          $a2, 0x350($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X350);
    after_0:
    // 0x8022742C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x80227430: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x80227434: bne         $v0, $zero, L_80227480
    if (ctx->r2 != 0) {
        // 0x80227438: nop
    
            goto L_80227480;
    }
    // 0x80227438: nop

    // 0x8022743C: lh          $v0, 0x35E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X35E);
    // 0x80227440: beq         $v0, $zero, L_80227454
    if (ctx->r2 == 0) {
        // 0x80227444: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80227454;
    }
    // 0x80227444: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227448: lhu         $v1, 0x35C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X35C);
    // 0x8022744C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80227450: sh          $v0, 0x35C($s0)
    MEM_H(0X35C, ctx->r16) = ctx->r2;
L_80227454:
    // 0x80227454: lhu         $a0, 0x362($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X362);
    // 0x80227458: lhu         $v1, 0x366($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X366);
    // 0x8022745C: lhu         $a1, 0x360($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X360);
    // 0x80227460: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227464: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80227468: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022746C: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x80227470: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x80227474: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80227478: sh          $v0, 0x362($s0)
    MEM_H(0X362, ctx->r16) = ctx->r2;
    // 0x8022747C: sh          $v1, 0x360($s0)
    MEM_H(0X360, ctx->r16) = ctx->r3;
L_80227480:
    // 0x80227480: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80227484: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80227488: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022748C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80227490: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227494: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227498: jr          $ra
    // 0x8022749C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022749C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227974_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227974: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227978: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022797C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227980: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x80227984: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227988: jal         0x80228AA4
    // 0x8022798C: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_80228AA4_ovl20(rdram, ctx);
        goto after_0;
    // 0x8022798C: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_0:
    // 0x80227990: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80227994: beq         $v0, $zero, L_802279C0
    if (ctx->r2 == 0) {
        // 0x80227998: addiu       $v1, $zero, 0x6
        ctx->r3 = ADD32(0, 0X6);
            goto L_802279C0;
    }
    // 0x80227998: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
    // 0x8022799C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x802279A0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802279A4: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x802279A8: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x802279AC: sh          $v0, 0x360($s0)
    MEM_H(0X360, ctx->r16) = ctx->r2;
    // 0x802279B0: jal         0x80228A08
    // 0x802279B4: sh          $a1, 0x362($s0)
    MEM_H(0X362, ctx->r16) = ctx->r5;
    func_80228A08_ovl20(rdram, ctx);
        goto after_1;
    // 0x802279B4: sh          $a1, 0x362($s0)
    MEM_H(0X362, ctx->r16) = ctx->r5;
    after_1:
    // 0x802279B8: j           L_80227A00
    // 0x802279BC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_80227A00;
    // 0x802279BC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_802279C0:
    // 0x802279C0: lhu         $v0, 0x350($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X350);
    // 0x802279C4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802279C8: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x802279CC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802279D0: bne         $v0, $zero, L_802279E0
    if (ctx->r2 != 0) {
        // 0x802279D4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802279E0;
    }
    // 0x802279D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802279D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802279DC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802279E0:
    // 0x802279E0: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x802279E4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802279E8: jal         0x8004DA90
    // 0x802279EC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x802279EC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_2:
    // 0x802279F0: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x802279F4: addiu       $v0, $v0, 0x80
    ctx->r2 = ADD32(ctx->r2, 0X80);
    // 0x802279F8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x802279FC: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_80227A00:
    // 0x80227A00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227A04: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227A08: jr          $ra
    // 0x80227A0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227A0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226490_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226490: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226494: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80226498: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8022649C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802264A0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802264A4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802264A8: lw          $v0, -0x3B74($at)
    ctx->r2 = MEM_W(ctx->r1, -0X3B74);
    // 0x802264AC: jalr        $v0
    // 0x802264B0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802264B0: nop

    after_0:
    // 0x802264B4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802264B8: jr          $ra
    // 0x802264BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802264BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227144_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227144: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80227148: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022714C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227150: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80227154: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80227158: lh          $v0, 0x362($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X362);
    // 0x8022715C: bne         $v0, $zero, L_8022719C
    if (ctx->r2 != 0) {
        // 0x80227160: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_8022719C;
    }
    // 0x80227160: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x80227164: lh          $v0, 0x35C($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X35C);
    // 0x80227168: bne         $v0, $zero, L_80227190
    if (ctx->r2 != 0) {
        // 0x8022716C: nop
    
            goto L_80227190;
    }
    // 0x8022716C: nop

    // 0x80227170: lh          $v1, 0x360($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X360);
    // 0x80227174: lh          $v0, 0x366($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X366);
    // 0x80227178: bne         $v1, $v0, L_80227190
    if (ctx->r3 != ctx->r2) {
        // 0x8022717C: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80227190;
    }
    // 0x8022717C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80227180: lhu         $v0, 0x352($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X352);
    // 0x80227184: addiu       $a1, $s0, 0x354
    ctx->r5 = ADD32(ctx->r16, 0X354);
    // 0x80227188: j           L_802271CC
    // 0x8022718C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
        goto L_802271CC;
    // 0x8022718C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
L_80227190:
    // 0x80227190: lh          $v0, 0x1A($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X1A);
    // 0x80227194: beq         $v0, $zero, L_802271FC
    if (ctx->r2 == 0) {
        // 0x80227198: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802271FC;
    }
    // 0x80227198: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022719C:
    // 0x8022719C: lh          $v0, 0x14($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X14);
    // 0x802271A0: bne         $v0, $zero, L_802271FC
    if (ctx->r2 != 0) {
        // 0x802271A4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802271FC;
    }
    // 0x802271A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802271A8: lh          $v1, 0x18($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X18);
    // 0x802271AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802271B0: bne         $v1, $v0, L_802271FC
    if (ctx->r3 != ctx->r2) {
        // 0x802271B4: addiu       $a1, $s1, 0xC
        ctx->r5 = ADD32(ctx->r17, 0XC);
            goto L_802271FC;
    }
    // 0x802271B4: addiu       $a1, $s1, 0xC
    ctx->r5 = ADD32(ctx->r17, 0XC);
    // 0x802271B8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802271BC: lhu         $v0, 0xA($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XA);
    // 0x802271C0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x802271C4: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x802271C8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
L_802271CC:
    // 0x802271CC: jal         0x8009A3B4
    // 0x802271D0: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x802271D0: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    after_0:
    // 0x802271D4: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x802271D8: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x802271DC: lh          $a0, 0x18($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X18);
    // 0x802271E0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802271E4: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x802271E8: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x802271EC: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x802271F0: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x802271F4: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
    // 0x802271F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_802271FC:
    // 0x802271FC: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80227200: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80227204: jal         0x8004DA90
    // 0x80227208: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x80227208: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x8022720C: lhu         $v0, 0x18($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X18);
    // 0x80227210: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80227214: sh          $v0, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r2;
    // 0x80227218: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022721C: bne         $v0, $zero, L_8022724C
    if (ctx->r2 != 0) {
        // 0x80227220: nop
    
            goto L_8022724C;
    }
    // 0x80227220: nop

    // 0x80227224: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80227228: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022722C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80227230: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x80227234: lhu         $v1, 0x16($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X16);
    // 0x80227238: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022723C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80227240: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x80227244: j           L_8022729C
    // 0x80227248: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8022729C;
    // 0x80227248: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022724C:
    // 0x8022724C: lhu         $v0, 0x8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8);
    // 0x80227250: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80227254: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
    // 0x80227258: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022725C: bne         $v0, $zero, L_8022726C
    if (ctx->r2 != 0) {
        // 0x80227260: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022726C;
    }
    // 0x80227260: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227264: j           L_8022729C
    // 0x80227268: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8022729C;
    // 0x80227268: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022726C:
    // 0x8022726C: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x80227270: jal         0x80228AA4
    // 0x80227274: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_80228AA4_ovl20(rdram, ctx);
        goto after_2;
    // 0x80227274: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_2:
    // 0x80227278: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022727C: beq         $v0, $zero, L_802272A0
    if (ctx->r2 == 0) {
        // 0x80227280: nop
    
            goto L_802272A0;
    }
    // 0x80227280: nop

    // 0x80227284: jal         0x80228A08
    // 0x80227288: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_80228A08_ovl20(rdram, ctx);
        goto after_3;
    // 0x80227288: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_3:
    // 0x8022728C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80227290: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x80227294: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
    // 0x80227298: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_8022729C:
    // 0x8022729C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802272A0:
    // 0x802272A0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802272A4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802272A8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802272AC: jr          $ra
    // 0x802272B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802272B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80229624_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229624: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229628: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022962C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229630: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80229634: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80229638: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022963C: jal         0x8009A3B4
    // 0x80229640: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80229640: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x80229644: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80229648: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022964C: jal         0x8009A3B4
    // 0x80229650: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80229650: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80229654: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80229658: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8022965C: jal         0x8009A3B4
    // 0x80229660: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80229660: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80229664: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80229668: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022966C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80229670: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80229674: lw          $v0, -0x391C($at)
    ctx->r2 = MEM_W(ctx->r1, -0X391C);
    // 0x80229678: jalr        $v0
    // 0x8022967C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x8022967C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80229680: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80229684: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229688: jr          $ra
    // 0x8022968C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022968C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225464_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225464: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225468: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022546C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225470: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225474: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x80225478: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022547C: beq         $v1, $v0, L_802254B0
    if (ctx->r3 == ctx->r2) {
        // 0x80225480: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_802254B0;
    }
    // 0x80225480: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80225484: beq         $v0, $zero, L_802254F4
    if (ctx->r2 == 0) {
        // 0x80225488: nop
    
            goto L_802254F4;
    }
    // 0x80225488: nop

    // 0x8022548C: bne         $v1, $zero, L_802254F4
    if (ctx->r3 != 0) {
        // 0x80225490: nop
    
            goto L_802254F4;
    }
    // 0x80225490: nop

    // 0x80225494: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80225498: jal         0x800607C4
    // 0x8022549C: addiu       $a0, $a0, -0x4524
    ctx->r4 = ADD32(ctx->r4, -0X4524);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x8022549C: addiu       $a0, $a0, -0x4524
    ctx->r4 = ADD32(ctx->r4, -0X4524);
    after_0:
    // 0x802254A0: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x802254A4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802254A8: j           L_802254F4
    // 0x802254AC: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
        goto L_802254F4;
    // 0x802254AC: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_802254B0:
    // 0x802254B0: jal         0x8006033C
    // 0x802254B4: addiu       $a0, $zero, 0x21
    ctx->r4 = ADD32(0, 0X21);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x802254B4: addiu       $a0, $zero, 0x21
    ctx->r4 = ADD32(0, 0X21);
    after_1:
    // 0x802254B8: beq         $v0, $zero, L_802254F4
    if (ctx->r2 == 0) {
        // 0x802254BC: nop
    
            goto L_802254F4;
    }
    // 0x802254BC: nop

    // 0x802254C0: jal         0x8006033C
    // 0x802254C4: addiu       $a0, $zero, 0x6A
    ctx->r4 = ADD32(0, 0X6A);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x802254C4: addiu       $a0, $zero, 0x6A
    ctx->r4 = ADD32(0, 0X6A);
    after_2:
    // 0x802254C8: bne         $v0, $zero, L_802254F4
    if (ctx->r2 != 0) {
        // 0x802254CC: nop
    
            goto L_802254F4;
    }
    // 0x802254CC: nop

    // 0x802254D0: jal         0x80060AAC
    // 0x802254D4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_80060AAC_3BEAC(rdram, ctx);
        goto after_3;
    // 0x802254D4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_3:
    // 0x802254D8: jal         0x80060690
    // 0x802254DC: addiu       $a0, $zero, 0x33
    ctx->r4 = ADD32(0, 0X33);
    func_80060690_3BA90(rdram, ctx);
        goto after_4;
    // 0x802254DC: addiu       $a0, $zero, 0x33
    ctx->r4 = ADD32(0, 0X33);
    after_4:
    // 0x802254E0: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x802254E4: addiu       $a0, $zero, 0x6A
    ctx->r4 = ADD32(0, 0X6A);
    // 0x802254E8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802254EC: jal         0x8006036C
    // 0x802254F0: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    func_8006036C_3B76C(rdram, ctx);
        goto after_5;
    // 0x802254F0: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    after_5:
L_802254F4:
    // 0x802254F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802254F8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802254FC: jr          $ra
    // 0x80225500: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225500: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022AF74_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AF74: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022AF78: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022AF7C: jal         0x8004F4F8
    // 0x8022AF80: nop

    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_0;
    // 0x8022AF80: nop

    after_0:
    // 0x8022AF84: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022AF88: jr          $ra
    // 0x8022AF8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022AF8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022931C_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022931C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229320: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229324: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229328: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022932C: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x80229330: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80229334: jal         0x8004DDE8
    // 0x80229338: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8004DDE8_291E8(rdram, ctx);
        goto after_0;
    // 0x80229338: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8022933C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80229340: sltiu       $v0, $v1, 0x258
    ctx->r2 = ctx->r3 < 0X258 ? 1 : 0;
    // 0x80229344: beq         $v0, $zero, L_80229388
    if (ctx->r2 == 0) {
        // 0x80229348: sltiu       $v0, $v1, 0x190
        ctx->r2 = ctx->r3 < 0X190 ? 1 : 0;
            goto L_80229388;
    }
    // 0x80229348: sltiu       $v0, $v1, 0x190
    ctx->r2 = ctx->r3 < 0X190 ? 1 : 0;
    // 0x8022934C: beq         $v0, $zero, L_80229368
    if (ctx->r2 == 0) {
        // 0x80229350: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80229368;
    }
    // 0x80229350: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80229354: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80229358: beq         $v1, $v0, L_802293C8
    if (ctx->r3 == ctx->r2) {
        // 0x8022935C: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_802293C8;
    }
    // 0x8022935C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80229360: j           L_802293C8
    // 0x80229364: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_802293C8;
    // 0x80229364: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80229368:
    // 0x80229368: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8022936C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80229370: beq         $v1, $v0, L_802293C8
    if (ctx->r3 == ctx->r2) {
        // 0x80229374: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_802293C8;
    }
    // 0x80229374: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80229378: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022937C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229380: j           L_802293A8
    // 0x80229384: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
        goto L_802293A8;
    // 0x80229384: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
L_80229388:
    // 0x80229388: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022938C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80229390: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x80229394: bne         $v0, $zero, L_802293C8
    if (ctx->r2 != 0) {
        // 0x80229398: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802293C8;
    }
    // 0x80229398: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022939C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x802293A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802293A4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_802293A8:
    // 0x802293A8: jal         0x80050294
    // 0x802293AC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x802293AC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x802293B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802293B4: jal         0x802293F8
    // 0x802293B8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_802293F8_ovl20(rdram, ctx);
        goto after_2;
    // 0x802293B8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_2:
    // 0x802293BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802293C0: jal         0x802293D8
    // 0x802293C4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_802293D8_ovl20(rdram, ctx);
        goto after_3;
    // 0x802293C4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
L_802293C8:
    // 0x802293C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802293CC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802293D0: jr          $ra
    // 0x802293D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802293D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226C78_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226C78: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80226C7C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226C80: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226C84: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80226C88: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80226C8C: lh          $a0, 0x64($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X64);
    // 0x80226C90: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x80226C94: jal         0x8004FA7C
    // 0x80226C98: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x80226C98: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_0:
    // 0x80226C9C: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80226CA0: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x80226CA4: bne         $v0, $zero, L_80226CC8
    if (ctx->r2 != 0) {
        // 0x80226CA8: addiu       $v0, $zero, 0x14
        ctx->r2 = ADD32(0, 0X14);
            goto L_80226CC8;
    }
    // 0x80226CA8: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x80226CAC: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80226CB0: jal         0x80228A08
    // 0x80226CB4: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    func_80228A08_ovl20(rdram, ctx);
        goto after_1;
    // 0x80226CB4: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    after_1:
    // 0x80226CB8: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80226CBC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80226CC0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80226CC4: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_80226CC8:
    // 0x80226CC8: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80226CCC: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x80226CD0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80226CD4: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
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
RECOMP_FUNC void func_80229B2C_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229B2C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229B30: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80229B34: jal         0x8004F418
    // 0x80229B38: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x80229B38: nop

    after_0:
    // 0x80229B3C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80229B40: jr          $ra
    // 0x80229B44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80229B44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802256CC_ovl20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802256CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802256D0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802256D4: jal         0x8006033C
    // 0x802256D8: addiu       $a0, $zero, 0x21
    ctx->r4 = ADD32(0, 0X21);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x802256D8: addiu       $a0, $zero, 0x21
    ctx->r4 = ADD32(0, 0X21);
    after_0:
    // 0x802256DC: beq         $v0, $zero, L_80225704
    if (ctx->r2 == 0) {
        // 0x802256E0: nop
    
            goto L_80225704;
    }
    // 0x802256E0: nop

    // 0x802256E4: jal         0x8006033C
    // 0x802256E8: addiu       $a0, $zero, 0x6A
    ctx->r4 = ADD32(0, 0X6A);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x802256E8: addiu       $a0, $zero, 0x6A
    ctx->r4 = ADD32(0, 0X6A);
    after_1:
    // 0x802256EC: bne         $v0, $zero, L_80225704
    if (ctx->r2 != 0) {
        // 0x802256F0: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_80225704;
    }
    // 0x802256F0: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x802256F4: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x802256F8: lb          $v1, -0x3BC6($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC6);
    // 0x802256FC: beq         $v1, $v0, L_80225720
    if (ctx->r3 == ctx->r2) {
        // 0x80225700: nop
    
            goto L_80225720;
    }
    // 0x80225700: nop

L_80225704:
    // 0x80225704: jal         0x8006033C
    // 0x80225708: addiu       $a0, $zero, 0x238
    ctx->r4 = ADD32(0, 0X238);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x80225708: addiu       $a0, $zero, 0x238
    ctx->r4 = ADD32(0, 0X238);
    after_2:
    // 0x8022570C: bne         $v0, $zero, L_80225720
    if (ctx->r2 != 0) {
        // 0x80225710: nop
    
            goto L_80225720;
    }
    // 0x80225710: nop

    // 0x80225714: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80225718: jal         0x8005FB30
    // 0x8022571C: addiu       $a0, $a0, -0x44D4
    ctx->r4 = ADD32(ctx->r4, -0X44D4);
    func_8005FB30_3AF30(rdram, ctx);
        goto after_3;
    // 0x8022571C: addiu       $a0, $a0, -0x44D4
    ctx->r4 = ADD32(ctx->r4, -0X44D4);
    after_3:
L_80225720:
    // 0x80225720: jal         0x8006036C
    // 0x80225724: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    func_8006036C_3B76C(rdram, ctx);
        goto after_4;
    // 0x80225724: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    after_4:
    // 0x80225728: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022572C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80225730: jr          $ra
    // 0x80225734: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225734: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80225738: nop

    // 0x8022573C: nop

;}
